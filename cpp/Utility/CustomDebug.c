// Type: Utility.CustomDebug
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CustomDebug.cs
// Prior real C# source: none
// --------------------------------

// Utility.CustomDebug.<DrawLineCoroutine>d__17$$.ctor
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17___ctor (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4483f90

void Utility_CustomDebug__DrawLineCoroutine_d__17___ctor
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.IDisposable.Dispose
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17__System_IDisposable_Dispose (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x4484050

void Utility_CustomDebug__DrawLineCoroutine_d__17__System_IDisposable_Dispose
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$MoveNext
// il2cpp: bool Utility_CustomDebug__DrawLineCoroutine_d__17__MoveNext (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x4484060

bool_conflict
Utility_CustomDebug__DrawLineCoroutine_d__17__MoveNext
          (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  float seconds;
  int iVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Color_Fields value;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  UnityEngine_WaitForSeconds_o *__this_02;
  
  if (g_data_057ae8b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"DebugLine");
    il2cpp_runtime_helper_023445d0(&"Sprites/Default");
    g_data_057ae8b0 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    obj = (UnityEngine_Object_o *)(__this->fields)._lineObj_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    pUVar3 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(pUVar3,"DebugLine",(MethodInfo *)0x0);
    (__this->fields)._lineObj_5__2 = pUVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._lineObj_5__2,pUVar3);
    pUVar3 = (__this->fields)._lineObj_5__2;
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = (UnityEngine_LineRenderer_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar3,MethodInfo_LineRenderer_AddComponent_LineRenderer),
       __this_00 != (UnityEngine_LineRenderer_o *)0x0)) {
      UnityEngine_LineRenderer__set_positionCount(__this_00,2,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__SetPosition
                (__this_00,0,(UnityEngine_Vector3_o)(__this->fields).start.fields,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__SetPosition
                (__this_00,1,(UnityEngine_Vector3_o)(__this->fields).end.fields,(MethodInfo *)0x0);
      shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this_00,__this_01,(MethodInfo *)0x0);
      pUVar1 = &(__this->fields).color;
      value = pUVar1->fields;
      UnityEngine_LineRenderer__set_endColor(__this_00,(UnityEngine_Color_o)pUVar1->fields,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_startColor(__this_00,(UnityEngine_Color_o)value,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_endWidth(__this_00,0.05,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_startWidth(__this_00,0.05,(MethodInfo *)0x0);
      seconds = (__this->fields).duration;
      __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_02;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_02);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this_02 >> 8),1);
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)pUVar3[1].klass;
  }
  return 0;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x44842c0

Il2CppObject *
Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_Reset (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x44842d0

void Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_Reset
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

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


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_get_Current (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x4484310

Il2CppObject *
Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_get_Current
          (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$.ctor
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18___ctor (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4483fb0

void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18___ctor
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.IDisposable.Dispose
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_IDisposable_Dispose (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4484320

void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_IDisposable_Dispose
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$MoveNext
// il2cpp: bool Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__MoveNext (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4484330

bool_conflict
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__MoveNext
          (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this_01;
  bool_conflict bVar5;
  
  __this_01 = __this;
  if (g_data_057ae8b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    __this_01 = (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8b1 = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._obj_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = 0;
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields)._obj_5__2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = 0;
      UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this->fields).__4__this == (Utility_CustomDebug_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this_01->fields).__2__current;
    }
    pUVar4 = Utility_CustomDebug__SpawnPrimitiveObject
                       ((Utility_CustomDebug_o *)__this_01,(__this->fields).type,
                        (UnityEngine_Vector3_o)(__this->fields).position.fields,
                        (UnityEngine_Quaternion_o)(__this->fields).Rotation.fields,
                        (UnityEngine_Vector3_o)(__this->fields).size.fields,
                        (UnityEngine_Color_o)(__this->fields).color.fields,in_RDX);
    (__this->fields)._obj_5__2 = pUVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._obj_5__2);
    seconds = (__this->fields).duration;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
  }
  else {
    bVar5 = 0;
  }
  return bVar5;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4484490

Il2CppObject *
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_Reset (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x44844a0

void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_Reset
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

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


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_get_Current (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x44844e0

Il2CppObject *
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_get_Current
          (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug$$Init
// il2cpp: void Utility_CustomDebug__Init (const MethodInfo* method);
// 0x44821b0

void Utility_CustomDebug__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057ae89c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomDebug_CreateSingleton_CustomDebug);
    g_data_057ae89c = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8),MethodInfo_CustomDebug_CreateSingleton_CustomDebug);
  **(undefined8 **)(TypeInfo_CustomDebug + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomDebug + 0xb8),pIVar1);
  return;
}


// Utility.CustomDebug$$RemoveDebugVisual
// il2cpp: void Utility_CustomDebug__RemoveDebugVisual (System_String_o* name, const MethodInfo* method);
// 0x4482220

void Utility_CustomDebug__RemoveDebugVisual(System_String_o *name,MethodInfo *method)

{
  UnityEngine_Vector3_Fields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar15;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long lVar29;
  UnityEngine_Quaternion_Fields *pUVar30;
  UnityEngine_MonoBehaviour_o *pUVar31;
  Il2CppClass *pIVar32;
  Il2CppClass *pIVar33;
  void *pvVar34;
  intptr_t iVar35;
  UnityEngine_Quaternion_Fields Rotation;
  bool_conflict bVar36;
  int32_t iVar37;
  UnityEngine_Object_o *pUVar38;
  System_String_o *pSVar39;
  MethodInfo *pMVar40;
  UnityEngine_LineRenderer_o *__this;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar41;
  MethodInfo *pMVar42;
  UnityEngine_Transform_o *pUVar43;
  MethodInfo *pMVar44;
  MethodInfo *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar45;
  Il2CppObject *pIVar46;
  Il2CppClass *__this_03;
  UnityEngine_Object_o *__this_04;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *pMVar47;
  System_Collections_Generic_Dictionary_object__object__o *pSVar48;
  System_Collections_Generic_Dictionary_object__object__o *pSVar49;
  Utility_CustomDebug_o *__this_05;
  undefined8 uVar50;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar51;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM2_Da;
  float in_XMM2_Db;
  float in_XMM3_Da;
  float in_XMM3_Db;
  float in_XMM4_Da;
  float fVar52;
  float in_XMM4_Db;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM6_Da;
  undefined4 uVar53;
  undefined4 uVar54;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  float fVar56;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o UVar57;
  UnityEngine_Vector3_o UVar58;
  UnityEngine_Vector3_o UVar59;
  UnityEngine_Vector3_o UVar60;
  UnityEngine_Vector3_o UVar61;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Vector3_o size_03;
  UnityEngine_Vector3_o size_04;
  UnityEngine_Vector3_o end;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Quaternion_o UVar62;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  float fStack_480;
  float fStack_450;
  float fStack_44c;
  float fStack_440;
  float fStack_43c;
  float fStack_40c;
  undefined8 uVar55;
  
  pSVar48 = (System_Collections_Generic_Dictionary_object__object__o *)name;
  if (g_data_057ae89d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    pSVar48 = (System_Collections_Generic_Dictionary_object__object__o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae89d = '\x01';
  }
  if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
     (pSVar48 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
     pSVar48 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    method = (MethodInfo *)name;
    bVar36 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar48,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar36 == '\0') {
      return;
    }
    if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
      pSVar49 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
      pSVar48 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar49 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar48 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar49,(Il2CppObject *)name,MethodInfo_GameObject_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)0x0;
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar48,(MethodInfo *)0x0);
        if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
          pSVar49 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
          pSVar48 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
          if (pSVar49 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar49,(Il2CppObject *)name,MethodInfo_Boolean_Remove);
            return;
          }
        }
      }
    }
  }
  UVar57.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  fVar5 = in_XMM1_Da;
  end.fields.x = in_XMM2_Da;
  end.fields.y = in_XMM2_Db;
  end.fields.z = in_XMM3_Da;
  fVar4 = in_XMM4_Da;
  fVar18 = in_XMM4_Db;
  fVar7 = in_XMM5_Da;
  fVar9 = in_XMM5_Db;
  if (g_data_057ae89e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae89e = '\x01';
  }
  pSVar49 = pSVar48;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pSVar48,method);
  if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
    end.fields.x = in_XMM2_Da + (float)UVar57.fields._0_8_;
    end.fields.y = in_XMM2_Db + (float)((ulong)UVar57.fields._0_8_ >> 0x20);
    in_XMM3_Db = 0.0;
    in_XMM1_Db = 0.0;
    end.fields.z = in_XMM3_Da + in_XMM1_Da;
    in_XMM6_Da = 0.0;
    in_XMM6_Db = 0.0;
    color_06.fields.g = in_XMM4_Db;
    color_06.fields.r = in_XMM4_Da;
    color_06.fields.a = in_XMM5_Db;
    color_06.fields.b = in_XMM5_Da;
    UVar57.fields.z = in_XMM1_Da;
    pUVar38 = (UnityEngine_Object_o *)
              Utility_CustomDebug__DrawLineObject
                        ((Utility_CustomDebug_o *)pSVar49,UVar57,end,color_06,0.0,method);
    fVar5 = in_XMM1_Da;
    fVar4 = in_XMM4_Da;
    fVar18 = in_XMM4_Db;
    fVar7 = in_XMM5_Da;
    fVar9 = in_XMM5_Db;
    if (pUVar38 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar38,(System_String_o *)pSVar48,(MethodInfo *)0x0);
      fVar5 = in_XMM1_Da;
      fVar4 = in_XMM4_Da;
      fVar18 = in_XMM4_Db;
      fVar7 = in_XMM5_Da;
      fVar9 = in_XMM5_Db;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar48 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pSVar39 = UnityEngine_Object__get_name(pUVar38,(MethodInfo *)0x0);
        fVar5 = in_XMM1_Da;
        fVar4 = in_XMM4_Da;
        fVar18 = in_XMM4_Db;
        fVar7 = in_XMM5_Da;
        fVar9 = in_XMM5_Db;
        if (pSVar48 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar48,(Il2CppObject *)pSVar39,(Il2CppObject *)pUVar38,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  fVar6 = fVar5;
  fVar2 = end.fields.x;
  fVar3 = end.fields.y;
  fVar16 = end.fields.z;
  fVar17 = fVar4;
  fVar8 = fVar18;
  fVar21 = fVar7;
  fVar22 = fVar9;
  fVar19 = in_XMM6_Da;
  if (g_data_057ae8ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugLine");
    il2cpp_runtime_helper_023445d0(&"Sprites/Default");
    g_data_057ae8ad = '\x01';
  }
  pMVar40 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pMVar47 = "DebugLine";
  pMVar44 = pMVar40;
  UnityEngine_GameObject___ctor
            ((UnityEngine_GameObject_o *)pMVar40,(System_String_o *)"DebugLine",(MethodInfo *)0x0);
  if ((pMVar40 != (MethodInfo *)0x0) &&
     (pMVar47 = MethodInfo_LineRenderer_AddComponent_LineRenderer, pMVar44 = pMVar40,
     __this = (UnityEngine_LineRenderer_o *)
              UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)pMVar40,(MethodInfo_255A020 *)MethodInfo_LineRenderer_AddComponent_LineRenderer),
     __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_positionCount(__this,2,(MethodInfo *)0x0);
    UVar58.fields.z = fVar5;
    UVar58.fields.x = (float)(int)uVar50;
    UVar58.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    UnityEngine_LineRenderer__SetPosition(__this,0,UVar58,(MethodInfo *)0x0);
    UVar59.fields.y = end.fields.y;
    UVar59.fields.x = end.fields.x;
    UVar59.fields.z = end.fields.z;
    UnityEngine_LineRenderer__SetPosition(__this,1,UVar59,(MethodInfo *)0x0);
    shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
    pUVar41 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    UnityEngine_Material___ctor(pUVar41,shader,(MethodInfo *)0x0);
    UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this,pUVar41,(MethodInfo *)0x0);
    value_01.fields.g = fVar18;
    value_01.fields.r = fVar4;
    value_01.fields.a = fVar9;
    value_01.fields.b = fVar7;
    UnityEngine_LineRenderer__set_endColor(__this,value_01,(MethodInfo *)0x0);
    value_02.fields.g = fVar18;
    value_02.fields.r = fVar4;
    value_02.fields.a = fVar9;
    value_02.fields.b = fVar7;
    UnityEngine_LineRenderer__set_startColor(__this,value_02,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_endWidth(__this,0.05,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_startWidth(__this,0.05,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pMVar40,in_XMM6_Da,(MethodInfo *)0x0);
    return;
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  end.fields.x = fVar6;
  end.fields.y = fVar2;
  end.fields.z = fVar3;
  fVar7 = fVar16;
  fVar4 = fVar17;
  fVar18 = fVar8;
  fVar5 = fVar21;
  fVar9 = fVar22;
  if (g_data_057ae89f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae89f = '\x01';
  }
  pMVar40 = pMVar44;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar44,pMVar47);
  if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
    fVar19 = 0.0;
    in_XMM6_Db = 0.0;
    in_XMM1_Db = 0.0;
    UVar61.fields.y = fVar3;
    UVar61.fields.x = fVar2;
    in_XMM3_Db = 0.0;
    color_07.fields.g = fVar8;
    color_07.fields.r = fVar17;
    color_07.fields.a = fVar22;
    color_07.fields.b = fVar21;
    UVar60.fields.z = fVar6;
    UVar60.fields.x = (float)(int)uVar50;
    UVar60.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    UVar61.fields.z = fVar16;
    pMVar42 = (MethodInfo *)
              Utility_CustomDebug__DrawLineObject
                        ((Utility_CustomDebug_o *)pMVar40,UVar60,UVar61,color_07,0.0,pMVar47);
    end.fields.x = fVar6;
    end.fields.y = fVar2;
    end.fields.z = fVar3;
    fVar7 = fVar16;
    fVar4 = fVar17;
    fVar18 = fVar8;
    fVar5 = fVar21;
    fVar9 = fVar22;
    if (pMVar42 != (MethodInfo *)0x0) {
      pMVar40 = pMVar42;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar42,(System_String_o *)pMVar44,(MethodInfo *)0x0);
      pMVar47 = pMVar44;
      end.fields.x = fVar6;
      end.fields.y = fVar2;
      end.fields.z = fVar3;
      fVar7 = fVar16;
      fVar4 = fVar17;
      fVar18 = fVar8;
      fVar5 = fVar21;
      fVar9 = fVar22;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar48 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar47 = (MethodInfo *)0x0;
        pMVar40 = pMVar42;
        pSVar39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar42,(MethodInfo *)0x0);
        end.fields.x = fVar6;
        end.fields.y = fVar2;
        end.fields.z = fVar3;
        fVar7 = fVar16;
        fVar4 = fVar17;
        fVar18 = fVar8;
        fVar5 = fVar21;
        fVar9 = fVar22;
        if (pSVar48 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar48,(Il2CppObject *)pSVar39,(Il2CppObject *)pMVar42,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  fVar6 = end.fields.x;
  if (g_data_057ae8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a0 = '\x01';
  }
  pMVar42 = pMVar40;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar40,pMVar47);
  lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar44 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    pMVar42 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar44 = extraout_RDX_00;
  }
  pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pUVar30->x;
  fVar16 = pUVar30->y;
  fVar3 = pUVar30->z;
  fVar17 = pUVar30->w;
  Rotation = *pUVar30;
  if (g_data_057a6932 == '\0') {
    pMVar42 = (MethodInfo *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
    pMVar44 = extraout_RDX_01;
  }
  if (lVar29 != 0) {
    pUVar1 = (UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    fVar4 = pUVar1->x;
    fVar18 = pUVar1->y;
    fVar5 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    fVar9 = 0.0;
    pMVar47 = (MethodInfo *)0x3;
    in_XMM1_Db = 0.0;
    color.fields.g = end.fields.z;
    color.fields.r = end.fields.y;
    color.fields.a = in_XMM3_Db;
    color.fields.b = fVar7;
    position.fields.z = end.fields.x;
    position.fields.x = (float)(int)uVar50;
    position.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    pUVar38 = (UnityEngine_Object_o *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar42,3,position,(UnityEngine_Quaternion_o)Rotation,
                         (UnityEngine_Vector3_o)*pUVar1,color,pMVar44);
    fVar6 = end.fields.x;
    fVar19 = end.fields.y;
    in_XMM6_Db = end.fields.z;
    in_XMM7_Da = fVar7;
    in_XMM7_Db = in_XMM3_Db;
    if (pUVar38 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar38,(System_String_o *)pMVar40,(MethodInfo *)0x0);
      pMVar47 = pMVar40;
      fVar6 = end.fields.x;
      fVar19 = end.fields.y;
      in_XMM6_Db = end.fields.z;
      in_XMM7_Da = fVar7;
      in_XMM7_Db = in_XMM3_Db;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar48 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar47 = (MethodInfo *)0x0;
        pSVar39 = UnityEngine_Object__get_name(pUVar38,(MethodInfo *)0x0);
        fVar6 = end.fields.x;
        fVar19 = end.fields.y;
        in_XMM6_Db = end.fields.z;
        in_XMM7_Da = fVar7;
        in_XMM7_Db = in_XMM3_Db;
        if (pSVar48 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar48,(Il2CppObject *)pSVar39,(Il2CppObject *)pUVar38,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  end.fields.x = fVar6;
  end.fields.y = fVar2;
  end.fields.z = fVar16;
  fVar7 = fVar3;
  fVar8 = fVar17;
  fVar21 = fVar4;
  fVar22 = fVar18;
  fVar10 = fVar5;
  fVar11 = fVar19;
  fVar12 = in_XMM6_Db;
  fVar52 = in_XMM7_Da;
  fVar56 = in_XMM7_Db;
  if (g_data_057ae8ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugPrimitive");
    il2cpp_runtime_helper_023445d0(&"Standard");
    g_data_057ae8ae = '\x01';
  }
  pMVar40 = (MethodInfo *)((ulong)pMVar47 & 0xffffffff);
  pMVar44 = (MethodInfo *)0x0;
  pMVar47 = (MethodInfo *)UnityEngine_GameObject__CreatePrimitive((int32_t)pMVar47,(MethodInfo *)0x0);
  if (pMVar47 != (MethodInfo *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar47,"DebugPrimitive",(MethodInfo *)0x0);
    pMVar44 = (MethodInfo *)0x0;
    pMVar40 = pMVar47;
    pUVar43 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar47,(MethodInfo *)0x0);
    if (pUVar43 != (UnityEngine_Transform_o *)0x0) {
      in_XMM1_Db = 0.0;
      value.fields.z = fVar6;
      value.fields.x = (float)(int)uVar50;
      value.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
      UnityEngine_Transform__set_position(pUVar43,value,(MethodInfo *)0x0);
      pMVar44 = (MethodInfo *)0x0;
      pMVar40 = pMVar47;
      pUVar43 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar47,(MethodInfo *)0x0);
      end.fields.x = fVar6;
      if (pUVar43 != (UnityEngine_Transform_o *)0x0) {
        UVar62.fields.y = fVar16;
        UVar62.fields.x = fVar2;
        UVar62.fields.w = fVar17;
        UVar62.fields.z = fVar3;
        UnityEngine_Transform__set_rotation(pUVar43,UVar62,(MethodInfo *)0x0);
        pMVar44 = (MethodInfo *)0x0;
        pMVar40 = pMVar47;
        pUVar43 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar47,(MethodInfo *)0x0)
        ;
        end.fields.x = fVar3;
        in_XMM1_Db = fVar17;
        if (pUVar43 != (UnityEngine_Transform_o *)0x0) {
          value_00.fields.y = fVar18;
          value_00.fields.x = fVar4;
          in_XMM1_Db = 0.0;
          value_00.fields.z = fVar5;
          UnityEngine_Transform__set_localScale(pUVar43,value_00,(MethodInfo *)0x0);
          pMVar42 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar47,MethodInfo_Renderer_GetComponent_Renderer);
          end.fields.x = fVar5;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            end.fields.x = fVar5;
          }
          bVar36 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar36 != '\0') {
            pMVar44 = (MethodInfo *)UnityEngine_Shader__Find("Standard",(MethodInfo *)0x0);
            __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
            pMVar40 = __this_00;
            UnityEngine_Material___ctor
                      ((UnityEngine_Material_o *)__this_00,(UnityEngine_Shader_o *)pMVar44,(MethodInfo *)0x0);
            if (pMVar42 == (MethodInfo *)0x0) goto label_04482b04;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pMVar42,(UnityEngine_Material_o *)__this_00,(MethodInfo *)0x0
                      );
            pMVar44 = (MethodInfo *)0x0;
            pUVar41 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pMVar42,(MethodInfo *)0x0);
            pMVar40 = pMVar42;
            if (pUVar41 == (UnityEngine_Material_o *)0x0) goto label_04482b04;
            value_03.fields.g = in_XMM6_Db;
            value_03.fields.r = fVar19;
            value_03.fields.a = in_XMM7_Db;
            value_03.fields.b = in_XMM7_Da;
            UnityEngine_Material__set_color(pUVar41,value_03,(MethodInfo *)0x0);
            end.fields.x = in_XMM7_Da;
            in_XMM1_Db = in_XMM7_Db;
          }
          pMVar47 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar47,MethodInfo_Collider_GetComponent_Collider);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar44 = (MethodInfo *)0x0;
          pMVar40 = pMVar47;
          bVar36 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar36 == '\0') {
            return;
          }
          if (pMVar47 != (MethodInfo *)0x0) {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pMVar47,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_04482b04:
  uVar50 = il2cpp_runtime_helper_022b2c90();
  fVar4 = end.fields.x;
  fVar5 = end.fields.y;
  fVar19 = end.fields.z;
  fVar6 = fVar7;
  fVar20 = fVar8;
  fVar18 = fVar21;
  fVar2 = fVar22;
  if (g_data_057ae8a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a1 = '\x01';
  }
  pMVar42 = pMVar40;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar40,pMVar44);
  lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar47 = extraout_RDX_02;
  if (g_data_057a6843 == '\0') {
    pMVar42 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar47 = extraout_RDX_03;
  }
  if (lVar29 != 0) {
    pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar5 = pUVar30->x;
    fVar19 = pUVar30->y;
    fVar6 = pUVar30->z;
    fVar20 = pUVar30->w;
    pMVar44 = (MethodInfo *)0x0;
    in_XMM1_Db = 0.0;
    color_00.fields.g = fVar8;
    color_00.fields.r = fVar7;
    color_00.fields.a = fVar22;
    color_00.fields.b = fVar21;
    position_00.fields.z = end.fields.x;
    position_00.fields.x = (float)(int)uVar50;
    position_00.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    size.fields.y = end.fields.y;
    size.fields.x = end.fields.y;
    size.fields.z = end.fields.y;
    fVar2 = end.fields.y;
    fVar10 = end.fields.y;
    pMVar47 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar42,0,position_00,(UnityEngine_Quaternion_o)*pUVar30,
                         size,color_00,pMVar47);
    fVar4 = end.fields.x;
    fVar18 = end.fields.y;
    fVar9 = end.fields.z;
    fVar11 = fVar7;
    fVar12 = fVar8;
    fVar52 = fVar21;
    fVar56 = fVar22;
    if (pMVar47 != (MethodInfo *)0x0) {
      pMVar42 = pMVar47;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar47,(System_String_o *)pMVar40,(MethodInfo *)0x0);
      pMVar44 = pMVar40;
      fVar4 = end.fields.x;
      fVar18 = end.fields.y;
      fVar9 = end.fields.z;
      fVar11 = fVar7;
      fVar12 = fVar8;
      fVar52 = fVar21;
      fVar56 = fVar22;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar48 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar42 = pMVar47;
        pSVar39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar47,(MethodInfo *)0x0);
        fVar4 = end.fields.x;
        fVar18 = end.fields.y;
        fVar9 = end.fields.z;
        fVar11 = fVar7;
        fVar12 = fVar8;
        fVar52 = fVar21;
        fVar56 = fVar22;
        if (pSVar48 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar48,(Il2CppObject *)pSVar39,(Il2CppObject *)pMVar47,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  end.fields.x = fVar4;
  fVar7 = fVar5;
  fVar21 = fVar19;
  fVar8 = fVar6;
  fVar22 = fVar20;
  end.fields.y = fVar18;
  end.fields.z = fVar2;
  fVar3 = fVar10;
  fVar16 = fVar9;
  if (g_data_057ae8a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a2 = '\x01';
    fVar22 = fVar20;
  }
  pMVar40 = pMVar42;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar42,pMVar44);
  lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar47 = extraout_RDX_04;
  if (g_data_057a6843 == '\0') {
    pMVar40 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar47 = extraout_RDX_05;
  }
  if (lVar29 != 0) {
    pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar7 = pUVar30->x;
    fVar21 = pUVar30->y;
    fVar8 = pUVar30->z;
    fVar22 = pUVar30->w;
    pMVar44 = (MethodInfo *)0x2;
    in_XMM1_Db = 0.0;
    color_01.fields.g = fVar2;
    color_01.fields.r = fVar18;
    color_01.fields.a = fVar9;
    color_01.fields.b = fVar10;
    position_01.fields.z = fVar4;
    position_01.fields.x = (float)(int)uVar50;
    position_01.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    size_00.fields.y = fVar6;
    size_00.fields.x = fVar5;
    size_00.fields.z = fVar5;
    fVar3 = fVar5;
    pMVar47 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar40,2,position_01,(UnityEngine_Quaternion_o)*pUVar30,
                         size_00,color_01,pMVar47);
    end.fields.x = fVar4;
    end.fields.y = fVar5;
    end.fields.z = fVar6;
    fVar16 = fVar19;
    fVar11 = fVar18;
    fVar12 = fVar2;
    fVar52 = fVar10;
    fVar56 = fVar9;
    if (pMVar47 != (MethodInfo *)0x0) {
      pMVar40 = pMVar47;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar47,(System_String_o *)pMVar42,(MethodInfo *)0x0);
      pMVar44 = pMVar42;
      end.fields.x = fVar4;
      end.fields.y = fVar5;
      end.fields.z = fVar6;
      fVar16 = fVar19;
      fVar11 = fVar18;
      fVar12 = fVar2;
      fVar52 = fVar10;
      fVar56 = fVar9;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar48 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar40 = pMVar47;
        pSVar39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar47,(MethodInfo *)0x0);
        end.fields.x = fVar4;
        end.fields.y = fVar5;
        end.fields.z = fVar6;
        fVar16 = fVar19;
        fVar11 = fVar18;
        fVar12 = fVar2;
        fVar52 = fVar10;
        fVar56 = fVar9;
        if (pSVar48 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar48,(Il2CppObject *)pSVar39,(Il2CppObject *)pMVar47,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  fVar5 = end.fields.x;
  fVar9 = fVar7;
  fVar23 = fVar21;
  fVar10 = fVar8;
  fVar24 = fVar22;
  fStack_480 = end.fields.y;
  fVar4 = end.fields.z;
  fVar18 = fVar3;
  fVar6 = fVar16;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar24 = fVar22;
  }
  pMVar42 = pMVar40;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar40,pMVar44);
  lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar47 = extraout_RDX_06;
  if (g_data_057a6843 == '\0') {
    pMVar42 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar47 = extraout_RDX_07;
  }
  if (lVar29 != 0) {
    pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar9 = pUVar30->x;
    fVar23 = pUVar30->y;
    fVar10 = pUVar30->z;
    fVar24 = pUVar30->w;
    pMVar44 = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    color_02.fields.g = end.fields.z;
    color_02.fields.r = end.fields.y;
    color_02.fields.a = fVar16;
    color_02.fields.b = fVar3;
    position_02.fields.z = end.fields.x;
    position_02.fields.x = (float)(int)uVar50;
    position_02.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    size_01.fields.y = fVar8;
    size_01.fields.x = fVar7;
    size_01.fields.z = fVar7;
    fVar18 = fVar7;
    pMVar47 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar42,1,position_02,(UnityEngine_Quaternion_o)*pUVar30,
                         size_01,color_02,pMVar47);
    fVar5 = end.fields.x;
    fStack_480 = fVar7;
    fVar4 = fVar8;
    fVar6 = fVar21;
    fVar11 = end.fields.y;
    fVar12 = end.fields.z;
    fVar52 = fVar3;
    fVar56 = fVar16;
    if (pMVar47 != (MethodInfo *)0x0) {
      pMVar42 = pMVar47;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar47,(System_String_o *)pMVar40,(MethodInfo *)0x0);
      pMVar44 = pMVar40;
      fVar5 = end.fields.x;
      fStack_480 = fVar7;
      fVar4 = fVar8;
      fVar6 = fVar21;
      fVar11 = end.fields.y;
      fVar12 = end.fields.z;
      fVar52 = fVar3;
      fVar56 = fVar16;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar48 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar42 = pMVar47;
        pSVar39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar47,(MethodInfo *)0x0);
        fVar5 = end.fields.x;
        fStack_480 = fVar7;
        fVar4 = fVar8;
        fVar6 = fVar21;
        fVar11 = end.fields.y;
        fVar12 = end.fields.z;
        fVar52 = fVar3;
        fVar56 = fVar16;
        if (pSVar48 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar48,(Il2CppObject *)pSVar39,(Il2CppObject *)pMVar47,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  position_04.fields.z = fVar5;
  fVar13 = fVar9;
  fVar27 = fVar23;
  fVar14 = fVar10;
  fVar28 = fVar24;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar13 = fVar9;
    fVar27 = fVar23;
    fVar14 = fVar10;
    fVar28 = fVar24;
  }
  pUVar38 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar36 = UnityEngine_Object__op_Equality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar36 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar36 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pMVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar55 = CONCAT44(fVar12,fVar11);
    if ((char)bVar36 == '\0') {
      if (pMVar42 != (MethodInfo *)0x0) {
        pUVar43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar42,(MethodInfo *)0x0);
        UVar57 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pMVar42,(MethodInfo *)0x0);
        uVar55 = CONCAT44(fVar12,fVar11);
        position_04.fields.z = UVar57.fields.z;
        if (pUVar43 != (UnityEngine_Transform_o *)0x0) {
          UVar57 = UnityEngine_Transform__TransformPoint(pUVar43,UVar57,(MethodInfo *)0x0);
          end.fields.z = UVar57.fields.z;
          end.fields.x = UnityEngine_CapsuleCollider__get_radius
                                   ((UnityEngine_CapsuleCollider_o *)pMVar42,(MethodInfo *)0x0);
          UVar58 = UnityEngine_Transform__get_lossyScale(pUVar43,(MethodInfo *)0x0);
          UVar59 = UnityEngine_Transform__get_lossyScale(pUVar43,(MethodInfo *)0x0);
          end.fields.y = UnityEngine_CapsuleCollider__get_height
                                   ((UnityEngine_CapsuleCollider_o *)pMVar42,(MethodInfo *)0x0);
          UVar60 = UnityEngine_Transform__get_lossyScale(pUVar43,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar60.fields.x,UVar60.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar55 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar37 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)pMVar42,(MethodInfo *)0x0);
          if (iVar37 == 2) {
            UVar61 = UnityEngine_Transform__get_forward(pUVar43,(MethodInfo *)0x0);
            fVar7 = UVar61.fields.z;
            fStack_450 = UVar61.fields.x;
            fStack_44c = UVar61.fields.y;
          }
          else if (iVar37 == 1) {
            UVar61 = UnityEngine_Transform__get_up(pUVar43,(MethodInfo *)0x0);
            fVar7 = UVar61.fields.z;
            fStack_450 = UVar61.fields.x;
            fStack_44c = UVar61.fields.y;
          }
          else {
            fStack_450 = (float)uVar55;
            fStack_44c = (float)((ulong)uVar55 >> 0x20);
            if (iVar37 == 0) {
              UVar61 = UnityEngine_Transform__get_right(pUVar43,(MethodInfo *)0x0);
              fVar7 = UVar61.fields.z;
              fStack_450 = UVar61.fields.x;
              fStack_44c = UVar61.fields.y;
            }
          }
          __this_05 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_44c;
          forward.fields.x = fStack_450;
          forward.fields.z = fVar7;
          UVar62 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar55 = CONCAT44(fVar12,fVar11);
          position_04.fields.z = UVar62.fields.z;
          fVar3 = UVar62.fields.w;
          fVar9 = UVar62.fields.x;
          fVar2 = UVar62.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_480 = UVar58.fields.x;
            if (fStack_480 <= UVar59.fields.z) {
              fStack_480 = UVar59.fields.z;
            }
            fStack_40c = UVar60.fields.y;
            fStack_480 = end.fields.x * fStack_480;
            size_02.fields.z = fStack_480 + fStack_480;
            end.fields.y = end.fields.y * fStack_40c - size_02.fields.z;
            end.fields.x = 0.0;
            if (0.0 <= end.fields.y) {
              end.fields.x = end.fields.y;
            }
            color_03.fields.a = in_XMM1_Db;
            color_03.fields.b = fVar5;
            size_02.fields.y = end.fields.x * 0.5;
            size_02.fields.x = size_02.fields.z;
            color_03.fields.r = (float)(int)uVar50;
            color_03.fields.g = (float)(int)((ulong)uVar50 >> 0x20);
            end.fields.y = end.fields.z;
            fVar14 = position_04.fields.z;
            uVar55 = uVar50;
            pUVar38 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (__this_05,2,UVar57,UVar62,size_02,color_03,method_00);
            pMVar47 = extraout_RDX_08;
            position_04.fields.z = end.fields.y;
            fVar13 = fVar9;
            fVar27 = fVar2;
            fVar28 = fVar3;
            if (g_data_057a6932 == '\0') {
              __this_05 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar47 = extraout_RDX_09;
              position_04.fields.z = end.fields.y;
              fVar13 = fVar9;
              fVar27 = fVar2;
              fVar28 = fVar3;
            }
            uVar15 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            fVar52 = (float)uVar15;
            fVar56 = (float)((ulong)uVar15 >> 0x20);
            fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fStack_480;
            lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              __this_05 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar47 = extraout_RDX_10;
            }
            fVar6 = 0.0;
            fVar4 = extraout_XMM0_Db;
            if (lVar29 != 0) {
              end.fields.x = end.fields.x * 0.5 + fStack_480;
              fStack_440 = UVar57.fields.x;
              fStack_43c = UVar57.fields.y;
              fVar52 = fStack_480 * fVar52;
              fStack_480 = fStack_480 * fVar56;
              position_03.fields.x = fStack_440 + end.fields.x * fStack_450;
              position_03.fields.z = end.fields.z + end.fields.x * fVar7;
              size_03.fields.x = fVar52 + fVar52;
              size_03.fields.y = fStack_480 + fStack_480;
              size_03.fields.z = fVar18 + fVar18;
              pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar11 = pUVar30->x;
              fVar25 = pUVar30->y;
              fVar12 = pUVar30->z;
              fVar26 = pUVar30->w;
              color_04.fields.a = in_XMM1_Db;
              color_04.fields.b = fVar5;
              position_03.fields.y = fStack_43c + fStack_44c * end.fields.x;
              color_04.fields.r = (float)(int)uVar50;
              color_04.fields.g = (float)(int)((ulong)uVar50 >> 0x20);
              fStack_480 = size_03.fields.x;
              fVar4 = size_03.fields.y;
              fVar18 = size_03.fields.z;
              fVar52 = fVar5;
              fVar56 = in_XMM1_Db;
              uVar55 = uVar50;
              __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                                    (__this_05,0,position_03,(UnityEngine_Quaternion_o)*pUVar30,size_03,
                                     color_04,pMVar47);
              lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar47 = extraout_RDX_11;
              position_04.fields.z = position_03.fields.z;
              fVar13 = fVar11;
              fVar27 = fVar25;
              fVar14 = fVar12;
              fVar28 = fVar26;
              if (g_data_057a6843 == '\0') {
                __this_05 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar47 = extraout_RDX_12;
                position_04.fields.z = position_03.fields.z;
                fVar13 = fVar11;
                fVar27 = fVar25;
                fVar14 = fVar12;
                fVar28 = fVar26;
              }
              if (lVar29 != 0) {
                position_04.fields.x = fStack_440 - end.fields.x * fStack_450;
                position_04.fields.z = end.fields.z - end.fields.x * fVar7;
                pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar13 = pUVar30->x;
                fVar27 = pUVar30->y;
                fVar14 = pUVar30->z;
                fVar28 = pUVar30->w;
                size_04.fields.y = size_03.fields.y;
                size_04.fields.x = size_03.fields.x;
                fVar6 = 0.0;
                color_05.fields.a = in_XMM1_Db;
                color_05.fields.b = fVar5;
                position_04.fields.y = fStack_43c - fStack_44c * end.fields.x;
                size_04.fields.z = size_03.fields.z;
                color_05.fields.r = (float)(int)uVar50;
                color_05.fields.g = (float)(int)((ulong)uVar50 >> 0x20);
                uVar55 = uVar50;
                __this_02 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (__this_05,0,position_04,(UnityEngine_Quaternion_o)*pUVar30,size_04,
                                       color_05,pMVar47);
                fStack_480 = size_03.fields.x;
                fVar4 = size_03.fields.y;
                fVar18 = size_03.fields.z;
                fVar52 = fVar5;
                fVar56 = in_XMM1_Db;
                if ((((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar43 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
                     fStack_480 = size_03.fields.x, fVar4 = size_03.fields.y, fVar18 = size_03.fields.z,
                     fVar52 = fVar5, fVar56 = in_XMM1_Db, pUVar38 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar45 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar38,(MethodInfo *)0x0),
                    fStack_480 = size_03.fields.x, fVar4 = size_03.fields.y, fVar18 = size_03.fields.z,
                    fVar52 = fVar5, fVar56 = in_XMM1_Db, pUVar43 != (UnityEngine_Transform_o *)0x0)) &&
                   (UnityEngine_Transform__set_parent(pUVar43,pUVar45,(MethodInfo *)0x0),
                   fStack_480 = size_03.fields.x, fVar4 = size_03.fields.y, fVar18 = size_03.fields.z,
                   fVar52 = fVar5, fVar56 = in_XMM1_Db, __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar43 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar45 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar38,(MethodInfo *)0x0);
                  fStack_480 = size_03.fields.x;
                  fVar4 = size_03.fields.y;
                  fVar18 = size_03.fields.z;
                  fVar52 = fVar5;
                  fVar56 = in_XMM1_Db;
                  if (pUVar43 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar43,pUVar45,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar38,(System_String_o *)pMVar44,(MethodInfo *)0x0);
                    fStack_480 = size_03.fields.x;
                    fVar4 = size_03.fields.y;
                    fVar18 = size_03.fields.z;
                    fVar52 = fVar5;
                    fVar56 = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar48 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar48 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar48,(Il2CppObject *)pMVar44,(Il2CppObject *)pUVar38,MethodInfo_Void_Add);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar51 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar53 = (undefined4)uVar55;
      fVar5 = position_04.fields.z;
      end.fields.x = fVar13;
      end.fields.y = fVar27;
      end.fields.z = fVar14;
      fVar7 = fStack_480;
      fVar9 = fVar4;
      fVar2 = fVar18;
      fVar3 = fVar6;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar38 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar36 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar36 == '\0') {
        return;
      }
      pUVar31 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar31 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar46,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar46[1].klass = 0;
        if (pIVar46 != (Il2CppObject *)0x0) {
          pIVar46[2].klass = pIVar51;
          *(float *)&pIVar46[2].monitor = position_04.fields.z;
          *(ulong *)((long)&pIVar46[2].monitor + 4) =
               CONCAT44(fVar27 + (float)((ulong)pIVar51 >> 0x20),fVar13 + SUB84(pIVar51,0));
          *(float *)((long)&pIVar46[3].klass + 4) = fVar14 + position_04.fields.z;
          *(float *)&pIVar46[3].monitor = fStack_480;
          *(float *)((long)&pIVar46[3].monitor + 4) = fVar4;
          *(float *)&pIVar46[4].klass = fVar18;
          *(float *)((long)&pIVar46[4].klass + 4) = fVar6;
          *(undefined4 *)&pIVar46[4].monitor = uVar53;
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    (pUVar31,(System_Collections_IEnumerator_o *)pIVar46,(MethodInfo *)0x0);
          return;
        }
      }
      pIVar51 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar53 = (undefined4)uVar55;
      fVar4 = fVar5;
      fVar18 = end.fields.x;
      fVar6 = end.fields.y;
      fVar16 = end.fields.z;
      fVar17 = fVar7;
      fVar8 = fVar9;
      fVar21 = fVar2;
      fVar22 = fVar3;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor(pIVar46,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar46[1].klass = 0;
      if (pIVar46 == (Il2CppObject *)0x0) {
        pIVar51 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
        uVar53 = (undefined4)uVar55;
        fVar5 = fVar4;
        end.fields.x = fVar18;
        end.fields.y = fVar6;
        end.fields.z = fVar16;
        fVar7 = fVar17;
        fVar9 = fVar8;
        fVar2 = fVar21;
        fVar3 = fVar22;
        if (g_data_057ae8a6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a6 = '\x01';
        }
        pUVar38 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar36 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar36 == '\0') {
          return;
        }
        pUVar31 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (pUVar31 != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (g_data_057ae8ab == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
            g_data_057ae8ab = '\x01';
          }
          pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
          System_Object___ctor(pIVar46,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar46[1].klass = 0;
          if (pIVar46 != (Il2CppObject *)0x0) {
            pIVar46[2].klass = pIVar51;
            *(float *)&pIVar46[2].monitor = fVar4;
            *(ulong *)((long)&pIVar46[2].monitor + 4) = CONCAT44(fVar6,fVar18);
            *(float *)((long)&pIVar46[3].klass + 4) = fVar16;
            *(float *)&pIVar46[3].monitor = fVar17;
            *(float *)((long)&pIVar46[3].monitor + 4) = fVar8;
            *(float *)&pIVar46[4].klass = fVar21;
            *(float *)((long)&pIVar46[4].klass + 4) = fVar22;
            *(undefined4 *)&pIVar46[4].monitor = uVar53;
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      (pUVar31,(System_Collections_IEnumerator_o *)pIVar46,(MethodInfo *)0x0);
            return;
          }
        }
        uVar50 = il2cpp_runtime_helper_022b2c90();
        fVar4 = fVar5;
        fVar18 = end.fields.x;
        fVar6 = end.fields.y;
        fVar16 = end.fields.z;
        fVar17 = fVar28;
        fVar8 = fVar7;
        if (g_data_057ae8a7 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a7 = '\x01';
        }
        pIVar51 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar53 = 0;
        bVar36 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pIVar51,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar36 != '\0') {
          pUVar31 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            pIVar51 = (Il2CppClass *)&TypeInfo_Quaternion;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6843 = '\x01';
          }
          uVar15 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
          pIVar33 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
          if (g_data_057a6932 == '\0') {
            pIVar51 = (Il2CppClass *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6932 = '\x01';
          }
          if (pUVar31 != (UnityEngine_MonoBehaviour_o *)0x0) {
            pIVar32 = *(Il2CppClass **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            uVar54 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            __this_03 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            uVar53 = 0;
            pIVar51 = __this_03;
            System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
            *(undefined4 *)&((UnityEngine_Object_Fields *)&(__this_03->_1).name)->m_CachedPtr = 0;
            if (__this_03 != (Il2CppClass *)0x0) {
              (__this_03->_1).byval_arg.data = pUVar31;
              il2cpp_runtime_helper_022b4080(&(__this_03->_1).byval_arg,pUVar31);
              (__this_03->_1).byval_arg.bits = 3;
              *(undefined8 *)&(__this_03->_1).byval_arg.field_0xc = uVar50;
              *(float *)((long)&(__this_03->_1).this_arg.data + 4) = fVar5;
              *(undefined8 *)&(__this_03->_1).this_arg.bits = uVar15;
              (__this_03->_1).element_class = pIVar33;
              (__this_03->_1).castClass = pIVar32;
              *(undefined4 *)&(__this_03->_1).declaringType = uVar54;
              *(float *)((long)&(__this_03->_1).declaringType + 4) = end.fields.x;
              *(float *)&(__this_03->_1).parent = end.fields.y;
              *(float *)((long)&(__this_03->_1).parent + 4) = end.fields.z;
              *(float *)&(__this_03->_1).generic_class = fVar28;
              *(float *)((long)&(__this_03->_1).generic_class + 4) = fVar7;
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        (pUVar31,(System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
              return;
            }
          }
          uVar50 = il2cpp_runtime_helper_022b2c90();
          uVar54 = (undefined4)uVar55;
          end.fields.x = fVar4;
          end.fields.y = fVar18;
          end.fields.z = fVar16;
          fVar7 = fVar17;
          fVar21 = fVar8;
          fVar22 = fVar9;
          fVar19 = fVar2;
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          System_Object___ctor(pIVar46,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar46[1].klass = 0;
          if (pIVar46 == (Il2CppObject *)0x0) {
            uVar50 = il2cpp_runtime_helper_022b2c90();
            fVar5 = end.fields.x;
            fVar4 = end.fields.y;
            fVar18 = end.fields.z;
            fVar9 = fVar21;
            fVar6 = fVar22;
            fVar2 = fVar19;
            if (g_data_057ae8a8 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ae8a8 = '\x01';
            }
            pUVar38 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar36 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar36 == '\0') {
              return;
            }
            pIVar51 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            if (pIVar51 != (Il2CppClass *)0x0) {
              pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
              pIVar33 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
              if (g_data_057ae8ac == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
                g_data_057ae8ac = '\x01';
              }
              pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
              System_Object___ctor(pIVar46,(MethodInfo *)0x0);
              *(undefined4 *)&pIVar46[1].klass = 0;
              if (pIVar46 != (Il2CppObject *)0x0) {
                pIVar46[2].klass = pIVar51;
                il2cpp_runtime_helper_022b4080(pIVar46 + 2,pIVar51);
                *(undefined4 *)&pIVar46[2].monitor = 0;
                *(undefined8 *)((long)&pIVar46[2].monitor + 4) = uVar50;
                *(float *)((long)&pIVar46[3].klass + 4) = end.fields.x;
                pIVar46[3].monitor = pvVar34;
                pIVar46[4].klass = pIVar33;
                pIVar46[4].monitor = (void *)CONCAT44(end.fields.y,end.fields.y);
                *(float *)&pIVar46[5].klass = end.fields.y;
                *(float *)((long)&pIVar46[5].klass + 4) = end.fields.z;
                *(float *)&pIVar46[5].monitor = fVar7;
                *(float *)((long)&pIVar46[5].monitor + 4) = fVar21;
                *(float *)&pIVar46[6].klass = fVar22;
                *(float *)((long)&pIVar46[6].klass + 4) = fVar19;
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)pIVar51,(System_Collections_IEnumerator_o *)pIVar46,
                           (MethodInfo *)0x0);
                return;
              }
            }
            uVar50 = il2cpp_runtime_helper_022b2c90();
            end.fields.x = fVar5;
            end.fields.y = fVar4;
            end.fields.z = fVar18;
            fVar7 = fVar9;
            fVar16 = fVar6;
            fVar17 = fVar2;
            fVar8 = fVar3;
            uVar53 = uVar54;
            if (g_data_057ae8a9 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ae8a9 = '\x01';
            }
            pUVar38 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar36 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar36 == '\0') {
              return;
            }
            pIVar51 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            if (pIVar51 != (Il2CppClass *)0x0) {
              pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
              pIVar33 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
              if (g_data_057ae8ac == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
                g_data_057ae8ac = '\x01';
              }
              pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
              System_Object___ctor(pIVar46,(MethodInfo *)0x0);
              *(undefined4 *)&pIVar46[1].klass = 0;
              if (pIVar46 != (Il2CppObject *)0x0) {
                pIVar46[2].klass = pIVar51;
                il2cpp_runtime_helper_022b4080(pIVar46 + 2,pIVar51);
                *(undefined4 *)&pIVar46[2].monitor = 2;
                *(undefined8 *)((long)&pIVar46[2].monitor + 4) = uVar50;
                *(float *)((long)&pIVar46[3].klass + 4) = fVar5;
                pIVar46[3].monitor = pvVar34;
                pIVar46[4].klass = pIVar33;
                pIVar46[4].monitor = (void *)CONCAT44(fVar18,fVar4);
                *(float *)&pIVar46[5].klass = fVar4;
                *(float *)((long)&pIVar46[5].klass + 4) = fVar9;
                *(float *)&pIVar46[5].monitor = fVar6;
                *(float *)((long)&pIVar46[5].monitor + 4) = fVar2;
                *(float *)&pIVar46[6].klass = fVar3;
                *(undefined4 *)((long)&pIVar46[6].klass + 4) = uVar54;
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)pIVar51,(System_Collections_IEnumerator_o *)pIVar46,
                           (MethodInfo *)0x0);
                return;
              }
            }
            uVar50 = il2cpp_runtime_helper_022b2c90();
            if (g_data_057ae8aa == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ae8aa = '\x01';
            }
            pUVar38 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar54 = 0;
            bVar36 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar36 == '\0') {
              return;
            }
            pUVar31 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              pUVar38 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
            }
            if (pUVar31 != (UnityEngine_MonoBehaviour_o *)0x0) {
              pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
              iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
              if (g_data_057ae8ac == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
                g_data_057ae8ac = '\x01';
              }
              __this_04 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
              uVar54 = 0;
              pUVar38 = __this_04;
              System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
              *(undefined4 *)&(__this_04->fields).m_CachedPtr = 0;
              if (__this_04 != (UnityEngine_Object_o *)0x0) {
                __this_04[1].monitor = pUVar31;
                il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,pUVar31);
                *(undefined4 *)&__this_04[1].fields.m_CachedPtr = 1;
                *(undefined8 *)((long)&__this_04[1].fields.m_CachedPtr + 4) = uVar50;
                *(float *)((long)&__this_04[2].klass + 4) = end.fields.x;
                __this_04[2].monitor = pvVar34;
                __this_04[2].fields.m_CachedPtr = iVar35;
                __this_04[3].klass = (UnityEngine_Object_c *)CONCAT44(end.fields.z,end.fields.y);
                *(float *)&__this_04[3].monitor = end.fields.y;
                *(float *)((long)&__this_04[3].monitor + 4) = fVar7;
                *(float *)&__this_04[3].fields.m_CachedPtr = fVar16;
                *(float *)((long)&__this_04[3].fields.m_CachedPtr + 4) = fVar17;
                *(float *)&__this_04[4].klass = fVar8;
                *(undefined4 *)((long)&__this_04[4].klass + 4) = uVar53;
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          (pUVar31,(System_Collections_IEnumerator_o *)__this_04,(MethodInfo *)0x0);
                return;
              }
            }
            il2cpp_runtime_helper_022b2c90();
            System_Object___ctor((Il2CppObject *)pUVar38,(MethodInfo *)0x0);
            *(undefined4 *)&(pUVar38->fields).m_CachedPtr = uVar54;
            return;
          }
          pIVar46[2].klass = pIVar51;
          il2cpp_runtime_helper_022b4080(pIVar46 + 2,pIVar51);
          *(undefined4 *)&pIVar46[2].monitor = uVar53;
          *(undefined8 *)((long)&pIVar46[2].monitor + 4) = uVar50;
          *(float *)((long)&pIVar46[3].klass + 4) = fVar4;
          *(float *)&pIVar46[3].monitor = fVar18;
          *(float *)((long)&pIVar46[3].monitor + 4) = fVar6;
          *(float *)&pIVar46[4].klass = fVar16;
          *(float *)((long)&pIVar46[4].klass + 4) = fVar17;
          pIVar46[4].monitor = (void *)CONCAT44(fVar9,fVar8);
          *(float *)&pIVar46[5].klass = fVar2;
          *(undefined8 *)((long)&pIVar46[5].klass + 4) = uVar55;
          *(float *)((long)&pIVar46[5].monitor + 4) = fVar52;
          *(float *)&pIVar46[6].klass = fVar56;
          *(float *)((long)&pIVar46[6].klass + 4) = fVar5;
          return;
        }
        return;
      }
      pIVar46[2].klass = pIVar51;
      *(float *)&pIVar46[2].monitor = fVar5;
      *(ulong *)((long)&pIVar46[2].monitor + 4) = CONCAT44(end.fields.y,end.fields.x);
      *(float *)((long)&pIVar46[3].klass + 4) = end.fields.z;
      *(float *)&pIVar46[3].monitor = fVar7;
      *(float *)((long)&pIVar46[3].monitor + 4) = fVar9;
      *(float *)&pIVar46[4].klass = fVar2;
      *(float *)((long)&pIVar46[4].klass + 4) = fVar3;
      *(undefined4 *)&pIVar46[4].monitor = uVar53;
      return;
    }
  }
  return;
}


// Utility.CustomDebug$$DrawRay
// il2cpp: System_String_o* Utility_CustomDebug__DrawRay (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x4482350

System_String_o *
Utility_CustomDebug__DrawRay
          (UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  UnityEngine_Vector3_Fields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar15;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  System_Collections_Generic_Dictionary_object__object__o *pSVar29;
  long lVar30;
  UnityEngine_Quaternion_Fields *pUVar31;
  UnityEngine_MonoBehaviour_o *pUVar32;
  UnityEngine_Object_c *pUVar33;
  void *pvVar34;
  intptr_t iVar35;
  Il2CppClass *pIVar36;
  UnityEngine_Quaternion_Fields Rotation;
  bool_conflict bVar37;
  int32_t iVar38;
  UnityEngine_Object_o *pUVar39;
  System_String_o *pSVar40;
  MethodInfo *pMVar41;
  UnityEngine_LineRenderer_o *__this;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar42;
  MethodInfo *pMVar43;
  UnityEngine_Transform_o *pUVar44;
  MethodInfo *pMVar45;
  MethodInfo *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar46;
  undefined4 extraout_var;
  Il2CppObject *pIVar47;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar48;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *pMVar49;
  Utility_CustomDebug_o *pUVar50;
  undefined8 uVar51;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar52;
  float in_XMM1_Db;
  float in_XMM3_Db;
  float fVar53;
  float in_XMM6_Da;
  undefined4 uVar54;
  undefined4 uVar55;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  float fVar57;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar58;
  UnityEngine_Vector3_o UVar59;
  UnityEngine_Vector3_o UVar60;
  UnityEngine_Vector3_o UVar61;
  UnityEngine_Vector3_o UVar62;
  UnityEngine_Vector3_o UVar63;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Vector3_o size_03;
  UnityEngine_Vector3_o size_04;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Quaternion_o UVar64;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  float fStack_468;
  float fStack_438;
  float fStack_434;
  float fStack_428;
  float fStack_424;
  float fStack_3f4;
  undefined8 uVar56;
  
  fVar21 = color.fields.b;
  fVar22 = color.fields.a;
  fVar17 = color.fields.r;
  fVar8 = color.fields.g;
  fVar16 = direction.fields.z;
  fVar2 = direction.fields.x;
  fVar3 = direction.fields.y;
  fVar6 = origin.fields.z;
  fVar5 = fVar6;
  UVar58.fields.x = fVar2;
  UVar58.fields.y = fVar3;
  UVar58.fields.z = fVar16;
  fVar4 = fVar17;
  fVar18 = fVar8;
  fVar7 = fVar21;
  fVar9 = fVar22;
  if (g_data_057ae89e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae89e = '\x01';
  }
  pUVar50 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
    UVar58.fields.x = fVar2 + origin.fields.x;
    UVar58.fields.y = fVar3 + origin.fields.y;
    in_XMM3_Db = 0.0;
    in_XMM1_Db = 0.0;
    UVar58.fields.z = fVar16 + fVar6;
    in_XMM6_Da = 0.0;
    in_XMM6_Db = 0.0;
    pUVar39 = (UnityEngine_Object_o *)
              Utility_CustomDebug__DrawLineObject(pUVar50,origin,UVar58,color,0.0,method);
    fVar5 = fVar6;
    fVar4 = fVar17;
    fVar18 = fVar8;
    fVar7 = fVar21;
    fVar9 = fVar22;
    if (pUVar39 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar39,name,(MethodInfo *)0x0);
      fVar5 = fVar6;
      fVar4 = fVar17;
      fVar18 = fVar8;
      fVar7 = fVar21;
      fVar9 = fVar22;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pSVar40 = UnityEngine_Object__get_name(pUVar39,(MethodInfo *)0x0);
        fVar5 = fVar6;
        fVar4 = fVar17;
        fVar18 = fVar8;
        fVar7 = fVar21;
        fVar9 = fVar22;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pUVar39,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar6 = fVar5;
  fVar2 = UVar58.fields.x;
  fVar3 = UVar58.fields.y;
  fVar16 = UVar58.fields.z;
  fVar17 = fVar4;
  fVar8 = fVar18;
  fVar21 = fVar7;
  fVar22 = fVar9;
  fVar19 = in_XMM6_Da;
  if (g_data_057ae8ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugLine");
    il2cpp_runtime_helper_023445d0(&"Sprites/Default");
    g_data_057ae8ad = '\x01';
  }
  pMVar41 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pMVar49 = "DebugLine";
  pMVar45 = pMVar41;
  UnityEngine_GameObject___ctor
            ((UnityEngine_GameObject_o *)pMVar41,(System_String_o *)"DebugLine",(MethodInfo *)0x0);
  if ((pMVar41 != (MethodInfo *)0x0) &&
     (pMVar49 = MethodInfo_LineRenderer_AddComponent_LineRenderer, pMVar45 = pMVar41,
     __this = (UnityEngine_LineRenderer_o *)
              UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)pMVar41,(MethodInfo_255A020 *)MethodInfo_LineRenderer_AddComponent_LineRenderer),
     __this != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_positionCount(__this,2,(MethodInfo *)0x0);
    UVar59.fields.z = fVar5;
    UVar59.fields.x = (float)(int)uVar51;
    UVar59.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    UnityEngine_LineRenderer__SetPosition(__this,0,UVar59,(MethodInfo *)0x0);
    UVar60.fields.y = UVar58.fields.y;
    UVar60.fields.x = UVar58.fields.x;
    UVar60.fields.z = UVar58.fields.z;
    UnityEngine_LineRenderer__SetPosition(__this,1,UVar60,(MethodInfo *)0x0);
    shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
    pUVar42 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    UnityEngine_Material___ctor(pUVar42,shader,(MethodInfo *)0x0);
    UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this,pUVar42,(MethodInfo *)0x0);
    value_01.fields.g = fVar18;
    value_01.fields.r = fVar4;
    value_01.fields.a = fVar9;
    value_01.fields.b = fVar7;
    UnityEngine_LineRenderer__set_endColor(__this,value_01,(MethodInfo *)0x0);
    value_02.fields.g = fVar18;
    value_02.fields.r = fVar4;
    value_02.fields.a = fVar9;
    value_02.fields.b = fVar7;
    UnityEngine_LineRenderer__set_startColor(__this,value_02,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_endWidth(__this,0.05,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_startWidth(__this,0.05,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pMVar41,in_XMM6_Da,(MethodInfo *)0x0);
    return (System_String_o *)pMVar41;
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  UVar58.fields.x = fVar6;
  UVar58.fields.y = fVar2;
  UVar58.fields.z = fVar3;
  fVar7 = fVar16;
  fVar4 = fVar17;
  fVar18 = fVar8;
  fVar5 = fVar21;
  fVar9 = fVar22;
  if (g_data_057ae89f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae89f = '\x01';
  }
  pMVar41 = pMVar45;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar45,pMVar49);
  if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
    fVar19 = 0.0;
    in_XMM6_Db = 0.0;
    in_XMM1_Db = 0.0;
    UVar62.fields.y = fVar3;
    UVar62.fields.x = fVar2;
    in_XMM3_Db = 0.0;
    color_07.fields.g = fVar8;
    color_07.fields.r = fVar17;
    color_07.fields.a = fVar22;
    color_07.fields.b = fVar21;
    UVar61.fields.z = fVar6;
    UVar61.fields.x = (float)(int)uVar51;
    UVar61.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    UVar62.fields.z = fVar16;
    pMVar43 = (MethodInfo *)
              Utility_CustomDebug__DrawLineObject
                        ((Utility_CustomDebug_o *)pMVar41,UVar61,UVar62,color_07,0.0,pMVar49);
    UVar58.fields.x = fVar6;
    UVar58.fields.y = fVar2;
    UVar58.fields.z = fVar3;
    fVar7 = fVar16;
    fVar4 = fVar17;
    fVar18 = fVar8;
    fVar5 = fVar21;
    fVar9 = fVar22;
    if (pMVar43 != (MethodInfo *)0x0) {
      pMVar49 = pMVar45;
      pMVar41 = pMVar43;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar43,(System_String_o *)pMVar45,(MethodInfo *)0x0);
      UVar58.fields.x = fVar6;
      UVar58.fields.y = fVar2;
      UVar58.fields.z = fVar3;
      fVar7 = fVar16;
      fVar4 = fVar17;
      fVar18 = fVar8;
      fVar5 = fVar21;
      fVar9 = fVar22;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar49 = (MethodInfo *)0x0;
        pMVar41 = pMVar43;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar43,(MethodInfo *)0x0);
        UVar58.fields.x = fVar6;
        UVar58.fields.y = fVar2;
        UVar58.fields.z = fVar3;
        fVar7 = fVar16;
        fVar4 = fVar17;
        fVar18 = fVar8;
        fVar5 = fVar21;
        fVar9 = fVar22;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar43,MethodInfo_Void_Add);
          return (System_String_o *)pMVar45;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar6 = UVar58.fields.x;
  if (g_data_057ae8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a0 = '\x01';
  }
  pMVar43 = pMVar41;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar41,pMVar49);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar45 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    pMVar43 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar45 = extraout_RDX_00;
  }
  pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pUVar31->x;
  fVar16 = pUVar31->y;
  fVar3 = pUVar31->z;
  fVar17 = pUVar31->w;
  Rotation = *pUVar31;
  if (g_data_057a6932 == '\0') {
    pMVar43 = (MethodInfo *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
    pMVar45 = extraout_RDX_01;
  }
  if (lVar30 != 0) {
    pUVar1 = (UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    fVar4 = pUVar1->x;
    fVar18 = pUVar1->y;
    fVar5 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    fVar9 = 0.0;
    pMVar49 = (MethodInfo *)0x3;
    in_XMM1_Db = 0.0;
    color_00.fields.g = UVar58.fields.z;
    color_00.fields.r = UVar58.fields.y;
    color_00.fields.a = in_XMM3_Db;
    color_00.fields.b = fVar7;
    UVar63.fields.z = UVar58.fields.x;
    UVar63.fields.x = (float)(int)uVar51;
    UVar63.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    pUVar39 = (UnityEngine_Object_o *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar43,3,UVar63,(UnityEngine_Quaternion_o)Rotation,
                         (UnityEngine_Vector3_o)*pUVar1,color_00,pMVar45);
    fVar6 = UVar58.fields.x;
    fVar19 = UVar58.fields.y;
    in_XMM6_Db = UVar58.fields.z;
    in_XMM7_Da = fVar7;
    in_XMM7_Db = in_XMM3_Db;
    if (pUVar39 != (UnityEngine_Object_o *)0x0) {
      pMVar49 = pMVar41;
      UnityEngine_Object__set_name(pUVar39,(System_String_o *)pMVar41,(MethodInfo *)0x0);
      fVar6 = UVar58.fields.x;
      fVar19 = UVar58.fields.y;
      in_XMM6_Db = UVar58.fields.z;
      in_XMM7_Da = fVar7;
      in_XMM7_Db = in_XMM3_Db;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar49 = (MethodInfo *)0x0;
        pSVar40 = UnityEngine_Object__get_name(pUVar39,(MethodInfo *)0x0);
        fVar6 = UVar58.fields.x;
        fVar19 = UVar58.fields.y;
        in_XMM6_Db = UVar58.fields.z;
        in_XMM7_Da = fVar7;
        in_XMM7_Db = in_XMM3_Db;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pUVar39,MethodInfo_Void_Add);
          return (System_String_o *)pMVar41;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  UVar58.fields.x = fVar6;
  UVar58.fields.y = fVar2;
  UVar58.fields.z = fVar16;
  fVar7 = fVar3;
  fVar8 = fVar17;
  fVar21 = fVar4;
  fVar22 = fVar18;
  fVar10 = fVar5;
  fVar11 = fVar19;
  fVar12 = in_XMM6_Db;
  fVar53 = in_XMM7_Da;
  fVar57 = in_XMM7_Db;
  if (g_data_057ae8ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugPrimitive");
    il2cpp_runtime_helper_023445d0(&"Standard");
    g_data_057ae8ae = '\x01';
  }
  pMVar41 = (MethodInfo *)((ulong)pMVar49 & 0xffffffff);
  pMVar45 = (MethodInfo *)0x0;
  pMVar49 = (MethodInfo *)UnityEngine_GameObject__CreatePrimitive((int32_t)pMVar49,(MethodInfo *)0x0);
  if (pMVar49 != (MethodInfo *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar49,"DebugPrimitive",(MethodInfo *)0x0);
    pMVar45 = (MethodInfo *)0x0;
    pMVar41 = pMVar49;
    pUVar44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar49,(MethodInfo *)0x0);
    if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
      in_XMM1_Db = 0.0;
      value.fields.z = fVar6;
      value.fields.x = (float)(int)uVar51;
      value.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
      UnityEngine_Transform__set_position(pUVar44,value,(MethodInfo *)0x0);
      pMVar45 = (MethodInfo *)0x0;
      pMVar41 = pMVar49;
      pUVar44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar49,(MethodInfo *)0x0);
      UVar58.fields.x = fVar6;
      if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
        UVar64.fields.y = fVar16;
        UVar64.fields.x = fVar2;
        UVar64.fields.w = fVar17;
        UVar64.fields.z = fVar3;
        UnityEngine_Transform__set_rotation(pUVar44,UVar64,(MethodInfo *)0x0);
        pMVar45 = (MethodInfo *)0x0;
        pMVar41 = pMVar49;
        pUVar44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar49,(MethodInfo *)0x0)
        ;
        UVar58.fields.x = fVar3;
        in_XMM1_Db = fVar17;
        if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
          value_00.fields.y = fVar18;
          value_00.fields.x = fVar4;
          in_XMM1_Db = 0.0;
          value_00.fields.z = fVar5;
          UnityEngine_Transform__set_localScale(pUVar44,value_00,(MethodInfo *)0x0);
          pMVar43 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar49,MethodInfo_Renderer_GetComponent_Renderer);
          UVar58.fields.x = fVar5;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            UVar58.fields.x = fVar5;
          }
          bVar37 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 != '\0') {
            pMVar45 = (MethodInfo *)UnityEngine_Shader__Find("Standard",(MethodInfo *)0x0);
            __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
            pMVar41 = __this_00;
            UnityEngine_Material___ctor
                      ((UnityEngine_Material_o *)__this_00,(UnityEngine_Shader_o *)pMVar45,(MethodInfo *)0x0);
            if (pMVar43 == (MethodInfo *)0x0) goto label_04482b04;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pMVar43,(UnityEngine_Material_o *)__this_00,(MethodInfo *)0x0
                      );
            pMVar45 = (MethodInfo *)0x0;
            pUVar42 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pMVar43,(MethodInfo *)0x0);
            pMVar41 = pMVar43;
            if (pUVar42 == (UnityEngine_Material_o *)0x0) goto label_04482b04;
            value_03.fields.g = in_XMM6_Db;
            value_03.fields.r = fVar19;
            value_03.fields.a = in_XMM7_Db;
            value_03.fields.b = in_XMM7_Da;
            UnityEngine_Material__set_color(pUVar42,value_03,(MethodInfo *)0x0);
            UVar58.fields.x = in_XMM7_Da;
            in_XMM1_Db = in_XMM7_Db;
          }
          pMVar43 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar49,MethodInfo_Collider_GetComponent_Collider);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar45 = (MethodInfo *)0x0;
          pMVar41 = pMVar43;
          bVar37 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 == '\0') {
            return (System_String_o *)pMVar49;
          }
          if (pMVar43 != (MethodInfo *)0x0) {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pMVar43,0,(MethodInfo *)0x0);
            return (System_String_o *)pMVar49;
          }
        }
      }
    }
  }
label_04482b04:
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar4 = UVar58.fields.x;
  fVar5 = UVar58.fields.y;
  fVar19 = UVar58.fields.z;
  fVar6 = fVar7;
  fVar20 = fVar8;
  fVar18 = fVar21;
  fVar2 = fVar22;
  if (g_data_057ae8a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a1 = '\x01';
  }
  pMVar43 = pMVar41;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar41,pMVar45);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar49 = extraout_RDX_02;
  if (g_data_057a6843 == '\0') {
    pMVar43 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar49 = extraout_RDX_03;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar5 = pUVar31->x;
    fVar19 = pUVar31->y;
    fVar6 = pUVar31->z;
    fVar20 = pUVar31->w;
    pMVar45 = (MethodInfo *)0x0;
    in_XMM1_Db = 0.0;
    color_01.fields.g = fVar8;
    color_01.fields.r = fVar7;
    color_01.fields.a = fVar22;
    color_01.fields.b = fVar21;
    position.fields.z = UVar58.fields.x;
    position.fields.x = (float)(int)uVar51;
    position.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    size.fields.y = UVar58.fields.y;
    size.fields.x = UVar58.fields.y;
    size.fields.z = UVar58.fields.y;
    fVar2 = UVar58.fields.y;
    fVar10 = UVar58.fields.y;
    pMVar49 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar43,0,position,(UnityEngine_Quaternion_o)*pUVar31,size,
                         color_01,pMVar49);
    fVar4 = UVar58.fields.x;
    fVar18 = UVar58.fields.y;
    fVar9 = UVar58.fields.z;
    fVar11 = fVar7;
    fVar12 = fVar8;
    fVar53 = fVar21;
    fVar57 = fVar22;
    if (pMVar49 != (MethodInfo *)0x0) {
      pMVar45 = pMVar41;
      pMVar43 = pMVar49;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar49,(System_String_o *)pMVar41,(MethodInfo *)0x0);
      fVar4 = UVar58.fields.x;
      fVar18 = UVar58.fields.y;
      fVar9 = UVar58.fields.z;
      fVar11 = fVar7;
      fVar12 = fVar8;
      fVar53 = fVar21;
      fVar57 = fVar22;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar45 = (MethodInfo *)0x0;
        pMVar43 = pMVar49;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar49,(MethodInfo *)0x0);
        fVar4 = UVar58.fields.x;
        fVar18 = UVar58.fields.y;
        fVar9 = UVar58.fields.z;
        fVar11 = fVar7;
        fVar12 = fVar8;
        fVar53 = fVar21;
        fVar57 = fVar22;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar49,MethodInfo_Void_Add);
          return (System_String_o *)pMVar41;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  UVar58.fields.x = fVar4;
  fVar7 = fVar5;
  fVar21 = fVar19;
  fVar8 = fVar6;
  fVar22 = fVar20;
  UVar58.fields.y = fVar18;
  UVar58.fields.z = fVar2;
  fVar3 = fVar10;
  fVar16 = fVar9;
  if (g_data_057ae8a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a2 = '\x01';
    fVar22 = fVar20;
  }
  pMVar41 = pMVar43;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar43,pMVar45);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar49 = extraout_RDX_04;
  if (g_data_057a6843 == '\0') {
    pMVar41 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar49 = extraout_RDX_05;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar7 = pUVar31->x;
    fVar21 = pUVar31->y;
    fVar8 = pUVar31->z;
    fVar22 = pUVar31->w;
    pMVar45 = (MethodInfo *)0x2;
    in_XMM1_Db = 0.0;
    color_02.fields.g = fVar2;
    color_02.fields.r = fVar18;
    color_02.fields.a = fVar9;
    color_02.fields.b = fVar10;
    position_00.fields.z = fVar4;
    position_00.fields.x = (float)(int)uVar51;
    position_00.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    size_00.fields.y = fVar6;
    size_00.fields.x = fVar5;
    size_00.fields.z = fVar5;
    fVar3 = fVar5;
    pMVar49 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar41,2,position_00,(UnityEngine_Quaternion_o)*pUVar31,
                         size_00,color_02,pMVar49);
    UVar58.fields.x = fVar4;
    UVar58.fields.y = fVar5;
    UVar58.fields.z = fVar6;
    fVar16 = fVar19;
    fVar11 = fVar18;
    fVar12 = fVar2;
    fVar53 = fVar10;
    fVar57 = fVar9;
    if (pMVar49 != (MethodInfo *)0x0) {
      pMVar45 = pMVar43;
      pMVar41 = pMVar49;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar49,(System_String_o *)pMVar43,(MethodInfo *)0x0);
      UVar58.fields.x = fVar4;
      UVar58.fields.y = fVar5;
      UVar58.fields.z = fVar6;
      fVar16 = fVar19;
      fVar11 = fVar18;
      fVar12 = fVar2;
      fVar53 = fVar10;
      fVar57 = fVar9;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar45 = (MethodInfo *)0x0;
        pMVar41 = pMVar49;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar49,(MethodInfo *)0x0);
        UVar58.fields.x = fVar4;
        UVar58.fields.y = fVar5;
        UVar58.fields.z = fVar6;
        fVar16 = fVar19;
        fVar11 = fVar18;
        fVar12 = fVar2;
        fVar53 = fVar10;
        fVar57 = fVar9;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar49,MethodInfo_Void_Add);
          return (System_String_o *)pMVar43;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar5 = UVar58.fields.x;
  fVar9 = fVar7;
  fVar23 = fVar21;
  fVar10 = fVar8;
  fVar24 = fVar22;
  fStack_468 = UVar58.fields.y;
  fVar4 = UVar58.fields.z;
  fVar18 = fVar3;
  fVar6 = fVar16;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar24 = fVar22;
  }
  pMVar43 = pMVar41;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar41,pMVar45);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar49 = extraout_RDX_06;
  if (g_data_057a6843 == '\0') {
    pMVar43 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar49 = extraout_RDX_07;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar9 = pUVar31->x;
    fVar23 = pUVar31->y;
    fVar10 = pUVar31->z;
    fVar24 = pUVar31->w;
    pMVar45 = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    color_03.fields.g = UVar58.fields.z;
    color_03.fields.r = UVar58.fields.y;
    color_03.fields.a = fVar16;
    color_03.fields.b = fVar3;
    position_01.fields.z = UVar58.fields.x;
    position_01.fields.x = (float)(int)uVar51;
    position_01.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    size_01.fields.y = fVar8;
    size_01.fields.x = fVar7;
    size_01.fields.z = fVar7;
    fVar18 = fVar7;
    pMVar49 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar43,1,position_01,(UnityEngine_Quaternion_o)*pUVar31,
                         size_01,color_03,pMVar49);
    fVar5 = UVar58.fields.x;
    fStack_468 = fVar7;
    fVar4 = fVar8;
    fVar6 = fVar21;
    fVar11 = UVar58.fields.y;
    fVar12 = UVar58.fields.z;
    fVar53 = fVar3;
    fVar57 = fVar16;
    if (pMVar49 != (MethodInfo *)0x0) {
      pMVar45 = pMVar41;
      pMVar43 = pMVar49;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar49,(System_String_o *)pMVar41,(MethodInfo *)0x0);
      fVar5 = UVar58.fields.x;
      fStack_468 = fVar7;
      fVar4 = fVar8;
      fVar6 = fVar21;
      fVar11 = UVar58.fields.y;
      fVar12 = UVar58.fields.z;
      fVar53 = fVar3;
      fVar57 = fVar16;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar45 = (MethodInfo *)0x0;
        pMVar43 = pMVar49;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar49,(MethodInfo *)0x0);
        fVar5 = UVar58.fields.x;
        fStack_468 = fVar7;
        fVar4 = fVar8;
        fVar6 = fVar21;
        fVar11 = UVar58.fields.y;
        fVar12 = UVar58.fields.z;
        fVar53 = fVar3;
        fVar57 = fVar16;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar49,MethodInfo_Void_Add);
          return (System_String_o *)pMVar41;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  position_03.fields.z = fVar5;
  fVar13 = fVar9;
  fVar27 = fVar23;
  fVar14 = fVar10;
  fVar28 = fVar24;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar13 = fVar9;
    fVar27 = fVar23;
    fVar14 = fVar10;
    fVar28 = fVar24;
  }
  pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar37 = UnityEngine_Object__op_Equality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar37 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar37 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar56 = CONCAT44(fVar12,fVar11);
    if ((char)bVar37 == '\0') {
      if (pMVar43 != (MethodInfo *)0x0) {
        pUVar44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar43,(MethodInfo *)0x0);
        UVar58 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
        uVar56 = CONCAT44(fVar12,fVar11);
        position_03.fields.z = UVar58.fields.z;
        if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
          UVar59 = UnityEngine_Transform__TransformPoint(pUVar44,UVar58,(MethodInfo *)0x0);
          UVar58.fields.z = UVar59.fields.z;
          UVar58.fields.x =
               UnityEngine_CapsuleCollider__get_radius
                         ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          UVar60 = UnityEngine_Transform__get_lossyScale(pUVar44,(MethodInfo *)0x0);
          UVar61 = UnityEngine_Transform__get_lossyScale(pUVar44,(MethodInfo *)0x0);
          UVar58.fields.y =
               UnityEngine_CapsuleCollider__get_height
                         ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          UVar62 = UnityEngine_Transform__get_lossyScale(pUVar44,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar62.fields.x,UVar62.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar56 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar38 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          if (iVar38 == 2) {
            UVar63 = UnityEngine_Transform__get_forward(pUVar44,(MethodInfo *)0x0);
            fVar7 = UVar63.fields.z;
            fStack_438 = UVar63.fields.x;
            fStack_434 = UVar63.fields.y;
          }
          else if (iVar38 == 1) {
            UVar63 = UnityEngine_Transform__get_up(pUVar44,(MethodInfo *)0x0);
            fVar7 = UVar63.fields.z;
            fStack_438 = UVar63.fields.x;
            fStack_434 = UVar63.fields.y;
          }
          else {
            fStack_438 = (float)uVar56;
            fStack_434 = (float)((ulong)uVar56 >> 0x20);
            if (iVar38 == 0) {
              UVar63 = UnityEngine_Transform__get_right(pUVar44,(MethodInfo *)0x0);
              fVar7 = UVar63.fields.z;
              fStack_438 = UVar63.fields.x;
              fStack_434 = UVar63.fields.y;
            }
          }
          pUVar50 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_434;
          forward.fields.x = fStack_438;
          forward.fields.z = fVar7;
          UVar64 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar56 = CONCAT44(fVar12,fVar11);
          position_03.fields.z = UVar64.fields.z;
          fVar3 = UVar64.fields.w;
          fVar9 = UVar64.fields.x;
          fVar2 = UVar64.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_468 = UVar60.fields.x;
            if (fStack_468 <= UVar61.fields.z) {
              fStack_468 = UVar61.fields.z;
            }
            fStack_3f4 = UVar62.fields.y;
            fStack_468 = UVar58.fields.x * fStack_468;
            size_02.fields.z = fStack_468 + fStack_468;
            UVar58.fields.y = UVar58.fields.y * fStack_3f4 - size_02.fields.z;
            UVar58.fields.x = 0.0;
            if (0.0 <= UVar58.fields.y) {
              UVar58.fields.x = UVar58.fields.y;
            }
            color_04.fields.a = in_XMM1_Db;
            color_04.fields.b = fVar5;
            size_02.fields.y = UVar58.fields.x * 0.5;
            size_02.fields.x = size_02.fields.z;
            color_04.fields.r = (float)(int)uVar51;
            color_04.fields.g = (float)(int)((ulong)uVar51 >> 0x20);
            UVar58.fields.y = UVar58.fields.z;
            fVar14 = position_03.fields.z;
            uVar56 = uVar51;
            pUVar39 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (pUVar50,2,UVar59,UVar64,size_02,color_04,method_00);
            pMVar49 = extraout_RDX_08;
            position_03.fields.z = UVar58.fields.y;
            fVar13 = fVar9;
            fVar27 = fVar2;
            fVar28 = fVar3;
            if (g_data_057a6932 == '\0') {
              pUVar50 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar49 = extraout_RDX_09;
              position_03.fields.z = UVar58.fields.y;
              fVar13 = fVar9;
              fVar27 = fVar2;
              fVar28 = fVar3;
            }
            uVar15 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            fVar53 = (float)uVar15;
            fVar57 = (float)((ulong)uVar15 >> 0x20);
            fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fStack_468;
            lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              pUVar50 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar49 = extraout_RDX_10;
            }
            fVar6 = 0.0;
            fVar4 = extraout_XMM0_Db;
            if (lVar30 != 0) {
              UVar58.fields.x = UVar58.fields.x * 0.5 + fStack_468;
              fStack_428 = UVar59.fields.x;
              fStack_424 = UVar59.fields.y;
              fVar53 = fStack_468 * fVar53;
              fStack_468 = fStack_468 * fVar57;
              position_02.fields.x = fStack_428 + UVar58.fields.x * fStack_438;
              position_02.fields.z = UVar58.fields.z + UVar58.fields.x * fVar7;
              size_03.fields.x = fVar53 + fVar53;
              size_03.fields.y = fStack_468 + fStack_468;
              size_03.fields.z = fVar18 + fVar18;
              pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar11 = pUVar31->x;
              fVar25 = pUVar31->y;
              fVar12 = pUVar31->z;
              fVar26 = pUVar31->w;
              color_05.fields.a = in_XMM1_Db;
              color_05.fields.b = fVar5;
              position_02.fields.y = fStack_424 + fStack_434 * UVar58.fields.x;
              color_05.fields.r = (float)(int)uVar51;
              color_05.fields.g = (float)(int)((ulong)uVar51 >> 0x20);
              fStack_468 = size_03.fields.x;
              fVar4 = size_03.fields.y;
              fVar18 = size_03.fields.z;
              fVar53 = fVar5;
              fVar57 = in_XMM1_Db;
              uVar56 = uVar51;
              __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                                    (pUVar50,0,position_02,(UnityEngine_Quaternion_o)*pUVar31,size_03,color_05
                                     ,pMVar49);
              lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar49 = extraout_RDX_11;
              position_03.fields.z = position_02.fields.z;
              fVar13 = fVar11;
              fVar27 = fVar25;
              fVar14 = fVar12;
              fVar28 = fVar26;
              if (g_data_057a6843 == '\0') {
                pUVar50 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar49 = extraout_RDX_12;
                position_03.fields.z = position_02.fields.z;
                fVar13 = fVar11;
                fVar27 = fVar25;
                fVar14 = fVar12;
                fVar28 = fVar26;
              }
              if (lVar30 != 0) {
                position_03.fields.x = fStack_428 - UVar58.fields.x * fStack_438;
                position_03.fields.z = UVar58.fields.z - UVar58.fields.x * fVar7;
                pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar13 = pUVar31->x;
                fVar27 = pUVar31->y;
                fVar14 = pUVar31->z;
                fVar28 = pUVar31->w;
                size_04.fields.y = size_03.fields.y;
                size_04.fields.x = size_03.fields.x;
                fVar6 = 0.0;
                color_06.fields.a = in_XMM1_Db;
                color_06.fields.b = fVar5;
                position_03.fields.y = fStack_424 - fStack_434 * UVar58.fields.x;
                size_04.fields.z = size_03.fields.z;
                color_06.fields.r = (float)(int)uVar51;
                color_06.fields.g = (float)(int)((ulong)uVar51 >> 0x20);
                uVar56 = uVar51;
                __this_02 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (pUVar50,0,position_03,(UnityEngine_Quaternion_o)*pUVar31,size_04,
                                       color_06,pMVar49);
                fStack_468 = size_03.fields.x;
                fVar4 = size_03.fields.y;
                fVar18 = size_03.fields.z;
                fVar53 = fVar5;
                fVar57 = in_XMM1_Db;
                if ((((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar44 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
                     fStack_468 = size_03.fields.x, fVar4 = size_03.fields.y, fVar18 = size_03.fields.z,
                     fVar53 = fVar5, fVar57 = in_XMM1_Db, pUVar39 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar46 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar39,(MethodInfo *)0x0),
                    fStack_468 = size_03.fields.x, fVar4 = size_03.fields.y, fVar18 = size_03.fields.z,
                    fVar53 = fVar5, fVar57 = in_XMM1_Db, pUVar44 != (UnityEngine_Transform_o *)0x0)) &&
                   (UnityEngine_Transform__set_parent(pUVar44,pUVar46,(MethodInfo *)0x0),
                   fStack_468 = size_03.fields.x, fVar4 = size_03.fields.y, fVar18 = size_03.fields.z,
                   fVar53 = fVar5, fVar57 = in_XMM1_Db, __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar44 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar46 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar39,(MethodInfo *)0x0);
                  fStack_468 = size_03.fields.x;
                  fVar4 = size_03.fields.y;
                  fVar18 = size_03.fields.z;
                  fVar53 = fVar5;
                  fVar57 = in_XMM1_Db;
                  if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar44,pUVar46,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar39,(System_String_o *)pMVar45,(MethodInfo *)0x0);
                    fStack_468 = size_03.fields.x;
                    fVar4 = size_03.fields.y;
                    fVar18 = size_03.fields.z;
                    fVar53 = fVar5;
                    fVar57 = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar29,(Il2CppObject *)pMVar45,(Il2CppObject *)pUVar39,MethodInfo_Void_Add);
                      return (System_String_o *)pMVar45;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar52 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar54 = (undefined4)uVar56;
      fVar5 = position_03.fields.z;
      UVar58.fields.x = fVar13;
      UVar58.fields.y = fVar27;
      UVar58.fields.z = fVar14;
      fVar7 = fStack_468;
      fVar9 = fVar4;
      fVar2 = fVar18;
      fVar3 = fVar6;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar47 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar47,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar47[1].klass = 0;
        if (pIVar47 != (Il2CppObject *)0x0) {
          pIVar47[2].klass = pIVar52;
          *(float *)&pIVar47[2].monitor = position_03.fields.z;
          *(ulong *)((long)&pIVar47[2].monitor + 4) =
               CONCAT44(fVar27 + (float)((ulong)pIVar52 >> 0x20),fVar13 + SUB84(pIVar52,0));
          *(float *)((long)&pIVar47[3].klass + 4) = fVar14 + position_03.fields.z;
          *(float *)&pIVar47[3].monitor = fStack_468;
          *(float *)((long)&pIVar47[3].monitor + 4) = fVar4;
          *(float *)&pIVar47[4].klass = fVar18;
          *(float *)((long)&pIVar47[4].klass + 4) = fVar6;
          *(undefined4 *)&pIVar47[4].monitor = uVar54;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pIVar47,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      pvVar34 = (void *)il2cpp_runtime_helper_022b2c90();
      uVar54 = (undefined4)uVar56;
      fVar4 = fVar5;
      fVar18 = UVar58.fields.x;
      fVar6 = UVar58.fields.y;
      fVar16 = UVar58.fields.z;
      fVar17 = fVar7;
      fVar8 = fVar9;
      fVar21 = fVar2;
      fVar22 = fVar3;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pSVar40 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pSVar40,(MethodInfo *)0x0);
      (pSVar40->fields)._stringLength = 0;
      if (pSVar40 != (System_String_o *)0x0) {
        pSVar40[1].monitor = pvVar34;
        pSVar40[1].fields._stringLength = (int32_t)fVar5;
        *(ulong *)&pSVar40[1].fields._firstChar = CONCAT44(UVar58.fields.y,UVar58.fields.x);
        *(float *)((long)&pSVar40[2].klass + 4) = UVar58.fields.z;
        *(float *)&pSVar40[2].monitor = fVar7;
        *(float *)((long)&pSVar40[2].monitor + 4) = fVar9;
        pSVar40[2].fields._stringLength = (int32_t)fVar2;
        *(float *)&pSVar40[2].fields._firstChar = fVar3;
        *(undefined4 *)&pSVar40[3].klass = uVar54;
        return pSVar40;
      }
      pIVar52 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar54 = (undefined4)uVar56;
      fVar5 = fVar4;
      UVar58.fields.x = fVar18;
      UVar58.fields.y = fVar6;
      UVar58.fields.z = fVar16;
      fVar7 = fVar17;
      fVar9 = fVar8;
      fVar2 = fVar21;
      fVar3 = fVar22;
      if (g_data_057ae8a6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a6 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar47 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar47,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar47[1].klass = 0;
        if (pIVar47 != (Il2CppObject *)0x0) {
          pIVar47[2].klass = pIVar52;
          *(float *)&pIVar47[2].monitor = fVar4;
          *(ulong *)((long)&pIVar47[2].monitor + 4) = CONCAT44(fVar6,fVar18);
          *(float *)((long)&pIVar47[3].klass + 4) = fVar16;
          *(float *)&pIVar47[3].monitor = fVar17;
          *(float *)((long)&pIVar47[3].monitor + 4) = fVar8;
          *(float *)&pIVar47[4].klass = fVar21;
          *(float *)((long)&pIVar47[4].klass + 4) = fVar22;
          *(undefined4 *)&pIVar47[4].monitor = uVar54;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pIVar47,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      uVar51 = il2cpp_runtime_helper_022b2c90();
      fVar4 = fVar5;
      fVar18 = UVar58.fields.x;
      fVar6 = UVar58.fields.y;
      fVar16 = UVar58.fields.z;
      fVar17 = fVar28;
      fVar8 = fVar7;
      if (g_data_057ae8a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a7 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar38 = 0;
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar39 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057a6932 == '\0') {
        pUVar39 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar33 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        uVar54 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar48 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        iVar38 = 0;
        pUVar39 = pUVar48;
        System_Object___ctor((Il2CppObject *)pUVar48,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar48->fields).m_CachedPtr = 0;
        if (pUVar48 != (UnityEngine_Object_o *)0x0) {
          pUVar48[1].monitor = pUVar32;
          il2cpp_runtime_helper_022b4080(&pUVar48[1].monitor,pUVar32);
          *(undefined4 *)&pUVar48[1].fields.m_CachedPtr = 3;
          *(undefined8 *)((long)&pUVar48[1].fields.m_CachedPtr + 4) = uVar51;
          *(float *)((long)&pUVar48[2].klass + 4) = fVar5;
          pUVar48[2].monitor = pvVar34;
          pUVar48[2].fields.m_CachedPtr = iVar35;
          pUVar48[3].klass = pUVar33;
          *(undefined4 *)&pUVar48[3].monitor = uVar54;
          *(float *)((long)&pUVar48[3].monitor + 4) = UVar58.fields.x;
          *(float *)&pUVar48[3].fields.m_CachedPtr = UVar58.fields.y;
          *(float *)((long)&pUVar48[3].fields.m_CachedPtr + 4) = UVar58.fields.z;
          *(float *)&pUVar48[4].klass = fVar28;
          *(float *)((long)&pUVar48[4].klass + 4) = fVar7;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pUVar48,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      uVar51 = il2cpp_runtime_helper_022b2c90();
      uVar54 = (undefined4)uVar56;
      UVar58.fields.x = fVar4;
      UVar58.fields.y = fVar18;
      UVar58.fields.z = fVar16;
      fVar7 = fVar17;
      fVar21 = fVar8;
      fVar22 = fVar9;
      fVar19 = fVar2;
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      pSVar40 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor((Il2CppObject *)pSVar40,(MethodInfo *)0x0);
      (pSVar40->fields)._stringLength = 0;
      if (pSVar40 != (System_String_o *)0x0) {
        pSVar40[1].monitor = pUVar39;
        il2cpp_runtime_helper_022b4080(&pSVar40[1].monitor,pUVar39);
        pSVar40[1].fields._stringLength = iVar38;
        *(undefined8 *)&pSVar40[1].fields._firstChar = uVar51;
        *(float *)((long)&pSVar40[2].klass + 4) = fVar4;
        *(float *)&pSVar40[2].monitor = fVar18;
        *(float *)((long)&pSVar40[2].monitor + 4) = fVar6;
        pSVar40[2].fields._stringLength = (int32_t)fVar16;
        *(float *)&pSVar40[2].fields._firstChar = fVar17;
        pSVar40[3].klass = (System_String_c *)CONCAT44(fVar9,fVar8);
        *(float *)&pSVar40[3].monitor = fVar2;
        *(undefined8 *)((long)&pSVar40[3].monitor + 4) = uVar56;
        *(float *)&pSVar40[3].fields._firstChar = fVar53;
        *(float *)&pSVar40[4].klass = fVar57;
        *(float *)((long)&pSVar40[4].klass + 4) = fVar5;
        return pSVar40;
      }
      uVar51 = il2cpp_runtime_helper_022b2c90();
      fVar5 = UVar58.fields.x;
      fVar4 = UVar58.fields.y;
      fVar18 = UVar58.fields.z;
      fVar9 = fVar21;
      fVar6 = fVar22;
      fVar2 = fVar19;
      if (g_data_057ae8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a8 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_02,bVar37);
      }
      pIVar52 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar52 != (Il2CppClass *)0x0) {
        pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar36 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar47 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar47,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar47[1].klass = 0;
        if (pIVar47 != (Il2CppObject *)0x0) {
          pIVar47[2].klass = pIVar52;
          il2cpp_runtime_helper_022b4080(pIVar47 + 2,pIVar52);
          *(undefined4 *)&pIVar47[2].monitor = 0;
          *(undefined8 *)((long)&pIVar47[2].monitor + 4) = uVar51;
          *(float *)((long)&pIVar47[3].klass + 4) = UVar58.fields.x;
          pIVar47[3].monitor = pvVar34;
          pIVar47[4].klass = pIVar36;
          pIVar47[4].monitor = (void *)CONCAT44(UVar58.fields.y,UVar58.fields.y);
          *(float *)&pIVar47[5].klass = UVar58.fields.y;
          *(float *)((long)&pIVar47[5].klass + 4) = UVar58.fields.z;
          *(float *)&pIVar47[5].monitor = fVar7;
          *(float *)((long)&pIVar47[5].monitor + 4) = fVar21;
          *(float *)&pIVar47[6].klass = fVar22;
          *(float *)((long)&pIVar47[6].klass + 4) = fVar19;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar52,
                               (System_Collections_IEnumerator_o *)pIVar47,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      uVar51 = il2cpp_runtime_helper_022b2c90();
      UVar58.fields.x = fVar5;
      UVar58.fields.y = fVar4;
      UVar58.fields.z = fVar18;
      fVar7 = fVar9;
      fVar16 = fVar6;
      fVar17 = fVar2;
      fVar8 = fVar3;
      uVar55 = uVar54;
      if (g_data_057ae8a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a9 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_03,bVar37);
      }
      pIVar52 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar52 != (Il2CppClass *)0x0) {
        pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar36 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar47 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar47,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar47[1].klass = 0;
        if (pIVar47 != (Il2CppObject *)0x0) {
          pIVar47[2].klass = pIVar52;
          il2cpp_runtime_helper_022b4080(pIVar47 + 2,pIVar52);
          *(undefined4 *)&pIVar47[2].monitor = 2;
          *(undefined8 *)((long)&pIVar47[2].monitor + 4) = uVar51;
          *(float *)((long)&pIVar47[3].klass + 4) = fVar5;
          pIVar47[3].monitor = pvVar34;
          pIVar47[4].klass = pIVar36;
          pIVar47[4].monitor = (void *)CONCAT44(fVar18,fVar4);
          *(float *)&pIVar47[5].klass = fVar4;
          *(float *)((long)&pIVar47[5].klass + 4) = fVar9;
          *(float *)&pIVar47[5].monitor = fVar6;
          *(float *)((long)&pIVar47[5].monitor + 4) = fVar2;
          *(float *)&pIVar47[6].klass = fVar3;
          *(undefined4 *)((long)&pIVar47[6].klass + 4) = uVar54;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar52,
                               (System_Collections_IEnumerator_o *)pIVar47,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      uVar51 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae8aa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8aa = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar54 = 0;
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_04,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar39 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar48 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        uVar54 = 0;
        pUVar39 = pUVar48;
        System_Object___ctor((Il2CppObject *)pUVar48,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar48->fields).m_CachedPtr = 0;
        if (pUVar48 != (UnityEngine_Object_o *)0x0) {
          pUVar48[1].monitor = pUVar32;
          il2cpp_runtime_helper_022b4080(&pUVar48[1].monitor,pUVar32);
          *(undefined4 *)&pUVar48[1].fields.m_CachedPtr = 1;
          *(undefined8 *)((long)&pUVar48[1].fields.m_CachedPtr + 4) = uVar51;
          *(float *)((long)&pUVar48[2].klass + 4) = UVar58.fields.x;
          pUVar48[2].monitor = pvVar34;
          pUVar48[2].fields.m_CachedPtr = iVar35;
          pUVar48[3].klass = (UnityEngine_Object_c *)CONCAT44(UVar58.fields.z,UVar58.fields.y);
          *(float *)&pUVar48[3].monitor = UVar58.fields.y;
          *(float *)((long)&pUVar48[3].monitor + 4) = fVar7;
          *(float *)&pUVar48[3].fields.m_CachedPtr = fVar16;
          *(float *)((long)&pUVar48[3].fields.m_CachedPtr + 4) = fVar17;
          *(float *)&pUVar48[4].klass = fVar8;
          *(undefined4 *)((long)&pUVar48[4].klass + 4) = uVar55;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pUVar48,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar39,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar39->fields).m_CachedPtr = uVar54;
      return extraout_RAX;
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$DrawLine
// il2cpp: System_String_o* Utility_CustomDebug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x4482640

System_String_o *
Utility_CustomDebug__DrawLine
          (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  UnityEngine_Vector3_Fields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar15;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  System_Collections_Generic_Dictionary_object__object__o *pSVar29;
  long lVar30;
  UnityEngine_Quaternion_Fields *pUVar31;
  UnityEngine_MonoBehaviour_o *pUVar32;
  UnityEngine_Object_c *pUVar33;
  void *pvVar34;
  intptr_t iVar35;
  Il2CppClass *pIVar36;
  UnityEngine_Quaternion_Fields Rotation;
  bool_conflict bVar37;
  int32_t iVar38;
  MethodInfo *pMVar39;
  System_String_o *pSVar40;
  UnityEngine_Object_o *pUVar41;
  UnityEngine_Transform_o *pUVar42;
  MethodInfo *pMVar43;
  MethodInfo *pMVar44;
  MethodInfo *__this;
  UnityEngine_Material_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar45;
  undefined4 extraout_var;
  Il2CppObject *pIVar46;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar47;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *pMVar48;
  Utility_CustomDebug_o *__this_03;
  undefined8 uVar49;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar50;
  float in_XMM1_Db;
  float in_XMM3_Db;
  float fVar51;
  float in_XMM6_Da;
  undefined4 uVar52;
  undefined4 uVar53;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  float fVar55;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o UVar56;
  UnityEngine_Vector3_o UVar57;
  UnityEngine_Vector3_o UVar58;
  UnityEngine_Vector3_o UVar59;
  UnityEngine_Vector3_o UVar60;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Vector3_o size_03;
  UnityEngine_Color_o value;
  UnityEngine_Quaternion_o UVar61;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  float fStack_388;
  float fStack_358;
  float fStack_354;
  float fStack_348;
  float fStack_344;
  float fStack_314;
  undefined8 uVar54;
  
  fVar14 = color.fields.b;
  fVar10 = color.fields.a;
  fVar17 = color.fields.r;
  fVar13 = color.fields.g;
  fVar16 = end.fields.z;
  fVar2 = end.fields.x;
  fVar3 = end.fields.y;
  fVar6 = start.fields.z;
  fVar7 = fVar6;
  fVar8 = fVar2;
  fVar21 = fVar3;
  fVar22 = fVar16;
  fVar4 = fVar17;
  fVar18 = fVar13;
  fVar5 = fVar14;
  fVar9 = fVar10;
  if (g_data_057ae89f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae89f = '\x01';
  }
  pMVar44 = (MethodInfo *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
    in_XMM6_Da = 0.0;
    in_XMM6_Db = 0.0;
    in_XMM1_Db = 0.0;
    in_XMM3_Db = 0.0;
    pMVar39 = (MethodInfo *)
              Utility_CustomDebug__DrawLineObject((Utility_CustomDebug_o *)pMVar44,start,end,color,0.0,method)
    ;
    fVar7 = fVar6;
    fVar8 = fVar2;
    fVar21 = fVar3;
    fVar22 = fVar16;
    fVar4 = fVar17;
    fVar18 = fVar13;
    fVar5 = fVar14;
    fVar9 = fVar10;
    if (pMVar39 != (MethodInfo *)0x0) {
      method = (MethodInfo *)name;
      pMVar44 = pMVar39;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar39,name,(MethodInfo *)0x0);
      fVar7 = fVar6;
      fVar8 = fVar2;
      fVar21 = fVar3;
      fVar22 = fVar16;
      fVar4 = fVar17;
      fVar18 = fVar13;
      fVar5 = fVar14;
      fVar9 = fVar10;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        pMVar44 = pMVar39;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar39,(MethodInfo *)0x0);
        fVar7 = fVar6;
        fVar8 = fVar2;
        fVar21 = fVar3;
        fVar22 = fVar16;
        fVar4 = fVar17;
        fVar18 = fVar13;
        fVar5 = fVar14;
        fVar9 = fVar10;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar39,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
  uVar49 = il2cpp_runtime_helper_022b2c90();
  fVar6 = fVar7;
  if (g_data_057ae8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a0 = '\x01';
  }
  pMVar48 = pMVar44;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar44,method);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar39 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    pMVar48 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar39 = extraout_RDX_00;
  }
  pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pUVar31->x;
  fVar16 = pUVar31->y;
  fVar3 = pUVar31->z;
  fVar17 = pUVar31->w;
  Rotation = *pUVar31;
  if (g_data_057a6932 == '\0') {
    pMVar48 = (MethodInfo *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
    pMVar39 = extraout_RDX_01;
  }
  if (lVar30 != 0) {
    pUVar1 = (UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    fVar4 = pUVar1->x;
    fVar18 = pUVar1->y;
    fVar5 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    fVar9 = 0.0;
    method = (MethodInfo *)0x3;
    in_XMM1_Db = 0.0;
    color_00.fields.g = fVar21;
    color_00.fields.r = fVar8;
    color_00.fields.a = in_XMM3_Db;
    color_00.fields.b = fVar22;
    UVar56.fields.z = fVar7;
    UVar56.fields.x = (float)(int)uVar49;
    UVar56.fields.y = (float)(int)((ulong)uVar49 >> 0x20);
    pUVar41 = (UnityEngine_Object_o *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar48,3,UVar56,(UnityEngine_Quaternion_o)Rotation,
                         (UnityEngine_Vector3_o)*pUVar1,color_00,pMVar39);
    fVar6 = fVar7;
    in_XMM6_Da = fVar8;
    in_XMM6_Db = fVar21;
    in_XMM7_Da = fVar22;
    in_XMM7_Db = in_XMM3_Db;
    if (pUVar41 != (UnityEngine_Object_o *)0x0) {
      method = pMVar44;
      UnityEngine_Object__set_name(pUVar41,(System_String_o *)pMVar44,(MethodInfo *)0x0);
      fVar6 = fVar7;
      in_XMM6_Da = fVar8;
      in_XMM6_Db = fVar21;
      in_XMM7_Da = fVar22;
      in_XMM7_Db = in_XMM3_Db;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        pSVar40 = UnityEngine_Object__get_name(pUVar41,(MethodInfo *)0x0);
        fVar6 = fVar7;
        in_XMM6_Da = fVar8;
        in_XMM6_Db = fVar21;
        in_XMM7_Da = fVar22;
        in_XMM7_Db = in_XMM3_Db;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pUVar41,MethodInfo_Void_Add);
          return (System_String_o *)pMVar44;
        }
      }
    }
  }
  uVar49 = il2cpp_runtime_helper_022b2c90();
  fVar7 = fVar6;
  fVar8 = fVar2;
  fVar21 = fVar16;
  fVar22 = fVar3;
  fVar13 = fVar17;
  fVar14 = fVar4;
  fVar10 = fVar18;
  fVar23 = fVar5;
  fVar11 = in_XMM6_Da;
  fVar12 = in_XMM6_Db;
  fVar51 = in_XMM7_Da;
  fVar55 = in_XMM7_Db;
  if (g_data_057ae8ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugPrimitive");
    il2cpp_runtime_helper_023445d0(&"Standard");
    g_data_057ae8ae = '\x01';
  }
  pMVar39 = (MethodInfo *)((ulong)method & 0xffffffff);
  pMVar44 = (MethodInfo *)0x0;
  pMVar48 = (MethodInfo *)UnityEngine_GameObject__CreatePrimitive((int32_t)method,(MethodInfo *)0x0);
  if (pMVar48 != (MethodInfo *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar48,"DebugPrimitive",(MethodInfo *)0x0);
    pMVar44 = (MethodInfo *)0x0;
    pMVar39 = pMVar48;
    pUVar42 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar48,(MethodInfo *)0x0);
    if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
      in_XMM1_Db = 0.0;
      UVar57.fields.z = fVar6;
      UVar57.fields.x = (float)(int)uVar49;
      UVar57.fields.y = (float)(int)((ulong)uVar49 >> 0x20);
      UnityEngine_Transform__set_position(pUVar42,UVar57,(MethodInfo *)0x0);
      pMVar44 = (MethodInfo *)0x0;
      pMVar39 = pMVar48;
      pUVar42 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar48,(MethodInfo *)0x0);
      fVar7 = fVar6;
      if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
        UVar61.fields.y = fVar16;
        UVar61.fields.x = fVar2;
        UVar61.fields.w = fVar17;
        UVar61.fields.z = fVar3;
        UnityEngine_Transform__set_rotation(pUVar42,UVar61,(MethodInfo *)0x0);
        pMVar44 = (MethodInfo *)0x0;
        pMVar39 = pMVar48;
        pUVar42 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar48,(MethodInfo *)0x0)
        ;
        fVar7 = fVar3;
        in_XMM1_Db = fVar17;
        if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
          UVar58.fields.y = fVar18;
          UVar58.fields.x = fVar4;
          in_XMM1_Db = 0.0;
          UVar58.fields.z = fVar5;
          UnityEngine_Transform__set_localScale(pUVar42,UVar58,(MethodInfo *)0x0);
          pMVar43 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar48,MethodInfo_Renderer_GetComponent_Renderer);
          fVar7 = fVar5;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            fVar7 = fVar5;
          }
          bVar37 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 != '\0') {
            pMVar44 = (MethodInfo *)UnityEngine_Shader__Find("Standard",(MethodInfo *)0x0);
            __this = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
            pMVar39 = __this;
            UnityEngine_Material___ctor
                      ((UnityEngine_Material_o *)__this,(UnityEngine_Shader_o *)pMVar44,(MethodInfo *)0x0);
            if (pMVar43 == (MethodInfo *)0x0) goto label_04482b04;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pMVar43,(UnityEngine_Material_o *)__this,(MethodInfo *)0x0);
            pMVar44 = (MethodInfo *)0x0;
            __this_00 = UnityEngine_Renderer__get_material
                                  ((UnityEngine_Renderer_o *)pMVar43,(MethodInfo *)0x0);
            pMVar39 = pMVar43;
            if (__this_00 == (UnityEngine_Material_o *)0x0) goto label_04482b04;
            value.fields.g = in_XMM6_Db;
            value.fields.r = in_XMM6_Da;
            value.fields.a = in_XMM7_Db;
            value.fields.b = in_XMM7_Da;
            UnityEngine_Material__set_color(__this_00,value,(MethodInfo *)0x0);
            fVar7 = in_XMM7_Da;
            in_XMM1_Db = in_XMM7_Db;
          }
          pMVar43 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar48,MethodInfo_Collider_GetComponent_Collider);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar44 = (MethodInfo *)0x0;
          pMVar39 = pMVar43;
          bVar37 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 == '\0') {
            return (System_String_o *)pMVar48;
          }
          if (pMVar43 != (MethodInfo *)0x0) {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pMVar43,0,(MethodInfo *)0x0);
            return (System_String_o *)pMVar48;
          }
        }
      }
    }
  }
label_04482b04:
  uVar49 = il2cpp_runtime_helper_022b2c90();
  fVar4 = fVar7;
  fVar5 = fVar8;
  fVar19 = fVar21;
  fVar6 = fVar22;
  fVar20 = fVar13;
  fVar18 = fVar14;
  fVar2 = fVar10;
  if (g_data_057ae8a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a1 = '\x01';
  }
  pMVar43 = pMVar39;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar39,pMVar44);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar48 = extraout_RDX_02;
  if (g_data_057a6843 == '\0') {
    pMVar43 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar48 = extraout_RDX_03;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar5 = pUVar31->x;
    fVar19 = pUVar31->y;
    fVar6 = pUVar31->z;
    fVar20 = pUVar31->w;
    pMVar44 = (MethodInfo *)0x0;
    in_XMM1_Db = 0.0;
    color_01.fields.g = fVar13;
    color_01.fields.r = fVar22;
    color_01.fields.a = fVar10;
    color_01.fields.b = fVar14;
    UVar59.fields.z = fVar7;
    UVar59.fields.x = (float)(int)uVar49;
    UVar59.fields.y = (float)(int)((ulong)uVar49 >> 0x20);
    UVar60.fields.y = fVar8;
    UVar60.fields.x = fVar8;
    UVar60.fields.z = fVar8;
    fVar2 = fVar8;
    fVar23 = fVar8;
    pMVar48 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar43,0,UVar59,(UnityEngine_Quaternion_o)*pUVar31,UVar60,
                         color_01,pMVar48);
    fVar4 = fVar7;
    fVar18 = fVar8;
    fVar9 = fVar21;
    fVar11 = fVar22;
    fVar12 = fVar13;
    fVar51 = fVar14;
    fVar55 = fVar10;
    if (pMVar48 != (MethodInfo *)0x0) {
      pMVar44 = pMVar39;
      pMVar43 = pMVar48;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar48,(System_String_o *)pMVar39,(MethodInfo *)0x0);
      fVar4 = fVar7;
      fVar18 = fVar8;
      fVar9 = fVar21;
      fVar11 = fVar22;
      fVar12 = fVar13;
      fVar51 = fVar14;
      fVar55 = fVar10;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar43 = pMVar48;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar48,(MethodInfo *)0x0);
        fVar4 = fVar7;
        fVar18 = fVar8;
        fVar9 = fVar21;
        fVar11 = fVar22;
        fVar12 = fVar13;
        fVar51 = fVar14;
        fVar55 = fVar10;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar48,MethodInfo_Void_Add);
          return (System_String_o *)pMVar39;
        }
      }
    }
  }
  uVar49 = il2cpp_runtime_helper_022b2c90();
  fVar3 = fVar4;
  fVar7 = fVar5;
  fVar21 = fVar19;
  fVar8 = fVar6;
  fVar22 = fVar20;
  fVar16 = fVar18;
  fVar17 = fVar2;
  fVar13 = fVar23;
  fVar14 = fVar9;
  if (g_data_057ae8a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a2 = '\x01';
    fVar22 = fVar20;
  }
  pMVar48 = pMVar43;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar43,pMVar44);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar39 = extraout_RDX_04;
  if (g_data_057a6843 == '\0') {
    pMVar48 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar39 = extraout_RDX_05;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar7 = pUVar31->x;
    fVar21 = pUVar31->y;
    fVar8 = pUVar31->z;
    fVar22 = pUVar31->w;
    pMVar44 = (MethodInfo *)0x2;
    in_XMM1_Db = 0.0;
    color_02.fields.g = fVar2;
    color_02.fields.r = fVar18;
    color_02.fields.a = fVar9;
    color_02.fields.b = fVar23;
    position.fields.z = fVar4;
    position.fields.x = (float)(int)uVar49;
    position.fields.y = (float)(int)((ulong)uVar49 >> 0x20);
    size.fields.y = fVar6;
    size.fields.x = fVar5;
    size.fields.z = fVar5;
    fVar13 = fVar5;
    pMVar39 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar48,2,position,(UnityEngine_Quaternion_o)*pUVar31,size,
                         color_02,pMVar39);
    fVar3 = fVar4;
    fVar16 = fVar5;
    fVar17 = fVar6;
    fVar14 = fVar19;
    fVar11 = fVar18;
    fVar12 = fVar2;
    fVar51 = fVar23;
    fVar55 = fVar9;
    if (pMVar39 != (MethodInfo *)0x0) {
      pMVar44 = pMVar43;
      pMVar48 = pMVar39;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar39,(System_String_o *)pMVar43,(MethodInfo *)0x0);
      fVar3 = fVar4;
      fVar16 = fVar5;
      fVar17 = fVar6;
      fVar14 = fVar19;
      fVar11 = fVar18;
      fVar12 = fVar2;
      fVar51 = fVar23;
      fVar55 = fVar9;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar48 = pMVar39;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar39,(MethodInfo *)0x0);
        fVar3 = fVar4;
        fVar16 = fVar5;
        fVar17 = fVar6;
        fVar14 = fVar19;
        fVar11 = fVar18;
        fVar12 = fVar2;
        fVar51 = fVar23;
        fVar55 = fVar9;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar39,MethodInfo_Void_Add);
          return (System_String_o *)pMVar43;
        }
      }
    }
  }
  uVar49 = il2cpp_runtime_helper_022b2c90();
  fVar5 = fVar3;
  fVar9 = fVar7;
  fVar23 = fVar21;
  fVar10 = fVar8;
  fVar24 = fVar22;
  fStack_388 = fVar16;
  fVar4 = fVar17;
  fVar18 = fVar13;
  fVar6 = fVar14;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar24 = fVar22;
  }
  pMVar43 = pMVar48;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar48,pMVar44);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar39 = extraout_RDX_06;
  if (g_data_057a6843 == '\0') {
    pMVar43 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar39 = extraout_RDX_07;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar9 = pUVar31->x;
    fVar23 = pUVar31->y;
    fVar10 = pUVar31->z;
    fVar24 = pUVar31->w;
    pMVar44 = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    color_03.fields.g = fVar17;
    color_03.fields.r = fVar16;
    color_03.fields.a = fVar14;
    color_03.fields.b = fVar13;
    position_00.fields.z = fVar3;
    position_00.fields.x = (float)(int)uVar49;
    position_00.fields.y = (float)(int)((ulong)uVar49 >> 0x20);
    size_00.fields.y = fVar8;
    size_00.fields.x = fVar7;
    size_00.fields.z = fVar7;
    fVar18 = fVar7;
    pMVar39 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar43,1,position_00,(UnityEngine_Quaternion_o)*pUVar31,
                         size_00,color_03,pMVar39);
    fVar5 = fVar3;
    fStack_388 = fVar7;
    fVar4 = fVar8;
    fVar6 = fVar21;
    fVar11 = fVar16;
    fVar12 = fVar17;
    fVar51 = fVar13;
    fVar55 = fVar14;
    if (pMVar39 != (MethodInfo *)0x0) {
      pMVar44 = pMVar48;
      pMVar43 = pMVar39;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar39,(System_String_o *)pMVar48,(MethodInfo *)0x0);
      fVar5 = fVar3;
      fStack_388 = fVar7;
      fVar4 = fVar8;
      fVar6 = fVar21;
      fVar11 = fVar16;
      fVar12 = fVar17;
      fVar51 = fVar13;
      fVar55 = fVar14;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar43 = pMVar39;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar39,(MethodInfo *)0x0);
        fVar5 = fVar3;
        fStack_388 = fVar7;
        fVar4 = fVar8;
        fVar6 = fVar21;
        fVar11 = fVar16;
        fVar12 = fVar17;
        fVar51 = fVar13;
        fVar55 = fVar14;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar39,MethodInfo_Void_Add);
          return (System_String_o *)pMVar48;
        }
      }
    }
  }
  uVar49 = il2cpp_runtime_helper_022b2c90();
  position_02.fields.z = fVar5;
  fVar13 = fVar9;
  fVar27 = fVar23;
  fVar14 = fVar10;
  fVar28 = fVar24;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar13 = fVar9;
    fVar27 = fVar23;
    fVar14 = fVar10;
    fVar28 = fVar24;
  }
  pUVar41 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar37 = UnityEngine_Object__op_Equality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar37 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar37 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar54 = CONCAT44(fVar12,fVar11);
    if ((char)bVar37 == '\0') {
      if (pMVar43 != (MethodInfo *)0x0) {
        pUVar42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar43,(MethodInfo *)0x0);
        UVar56 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
        uVar54 = CONCAT44(fVar12,fVar11);
        position_02.fields.z = UVar56.fields.z;
        if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
          UVar56 = UnityEngine_Transform__TransformPoint(pUVar42,UVar56,(MethodInfo *)0x0);
          fVar21 = UVar56.fields.z;
          fVar7 = UnityEngine_CapsuleCollider__get_radius
                            ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          UVar57 = UnityEngine_Transform__get_lossyScale(pUVar42,(MethodInfo *)0x0);
          UVar58 = UnityEngine_Transform__get_lossyScale(pUVar42,(MethodInfo *)0x0);
          fVar8 = UnityEngine_CapsuleCollider__get_height
                            ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          UVar59 = UnityEngine_Transform__get_lossyScale(pUVar42,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar59.fields.x,UVar59.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar54 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar22 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar38 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          if (iVar38 == 2) {
            UVar60 = UnityEngine_Transform__get_forward(pUVar42,(MethodInfo *)0x0);
            fVar22 = UVar60.fields.z;
            fStack_358 = UVar60.fields.x;
            fStack_354 = UVar60.fields.y;
          }
          else if (iVar38 == 1) {
            UVar60 = UnityEngine_Transform__get_up(pUVar42,(MethodInfo *)0x0);
            fVar22 = UVar60.fields.z;
            fStack_358 = UVar60.fields.x;
            fStack_354 = UVar60.fields.y;
          }
          else {
            fStack_358 = (float)uVar54;
            fStack_354 = (float)((ulong)uVar54 >> 0x20);
            if (iVar38 == 0) {
              UVar60 = UnityEngine_Transform__get_right(pUVar42,(MethodInfo *)0x0);
              fVar22 = UVar60.fields.z;
              fStack_358 = UVar60.fields.x;
              fStack_354 = UVar60.fields.y;
            }
          }
          __this_03 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_354;
          forward.fields.x = fStack_358;
          forward.fields.z = fVar22;
          UVar61 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar54 = CONCAT44(fVar12,fVar11);
          position_02.fields.z = UVar61.fields.z;
          fVar3 = UVar61.fields.w;
          fVar9 = UVar61.fields.x;
          fVar2 = UVar61.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_388 = UVar57.fields.x;
            if (fStack_388 <= UVar58.fields.z) {
              fStack_388 = UVar58.fields.z;
            }
            fStack_314 = UVar59.fields.y;
            fStack_388 = fVar7 * fStack_388;
            size_01.fields.z = fStack_388 + fStack_388;
            fVar4 = fVar8 * fStack_314 - size_01.fields.z;
            fVar7 = 0.0;
            if (0.0 <= fVar4) {
              fVar7 = fVar4;
            }
            color_04.fields.a = in_XMM1_Db;
            color_04.fields.b = fVar5;
            size_01.fields.y = fVar7 * 0.5;
            size_01.fields.x = size_01.fields.z;
            color_04.fields.r = (float)(int)uVar49;
            color_04.fields.g = (float)(int)((ulong)uVar49 >> 0x20);
            fVar4 = fVar21;
            fVar14 = position_02.fields.z;
            uVar54 = uVar49;
            pUVar41 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (__this_03,2,UVar56,UVar61,size_01,color_04,method_00);
            pMVar39 = extraout_RDX_08;
            position_02.fields.z = fVar4;
            fVar13 = fVar9;
            fVar27 = fVar2;
            fVar28 = fVar3;
            if (g_data_057a6932 == '\0') {
              __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar39 = extraout_RDX_09;
              position_02.fields.z = fVar4;
              fVar13 = fVar9;
              fVar27 = fVar2;
              fVar28 = fVar3;
            }
            uVar15 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            fVar51 = (float)uVar15;
            fVar55 = (float)((ulong)uVar15 >> 0x20);
            fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fStack_388;
            lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar39 = extraout_RDX_10;
            }
            fVar6 = 0.0;
            fVar4 = extraout_XMM0_Db;
            if (lVar30 != 0) {
              fVar7 = fVar7 * 0.5 + fStack_388;
              fStack_348 = UVar56.fields.x;
              fStack_344 = UVar56.fields.y;
              fVar51 = fStack_388 * fVar51;
              fStack_388 = fStack_388 * fVar55;
              position_01.fields.x = fStack_348 + fVar7 * fStack_358;
              position_01.fields.z = fVar21 + fVar7 * fVar22;
              size_02.fields.x = fVar51 + fVar51;
              size_02.fields.y = fStack_388 + fStack_388;
              size_02.fields.z = fVar18 + fVar18;
              pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar11 = pUVar31->x;
              fVar25 = pUVar31->y;
              fVar12 = pUVar31->z;
              fVar26 = pUVar31->w;
              color_05.fields.a = in_XMM1_Db;
              color_05.fields.b = fVar5;
              position_01.fields.y = fStack_344 + fStack_354 * fVar7;
              color_05.fields.r = (float)(int)uVar49;
              color_05.fields.g = (float)(int)((ulong)uVar49 >> 0x20);
              fStack_388 = size_02.fields.x;
              fVar4 = size_02.fields.y;
              fVar18 = size_02.fields.z;
              fVar51 = fVar5;
              fVar55 = in_XMM1_Db;
              uVar54 = uVar49;
              __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                                    (__this_03,0,position_01,(UnityEngine_Quaternion_o)*pUVar31,size_02,
                                     color_05,pMVar39);
              lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar39 = extraout_RDX_11;
              position_02.fields.z = position_01.fields.z;
              fVar13 = fVar11;
              fVar27 = fVar25;
              fVar14 = fVar12;
              fVar28 = fVar26;
              if (g_data_057a6843 == '\0') {
                __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar39 = extraout_RDX_12;
                position_02.fields.z = position_01.fields.z;
                fVar13 = fVar11;
                fVar27 = fVar25;
                fVar14 = fVar12;
                fVar28 = fVar26;
              }
              if (lVar30 != 0) {
                position_02.fields.x = fStack_348 - fVar7 * fStack_358;
                position_02.fields.z = fVar21 - fVar7 * fVar22;
                pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar13 = pUVar31->x;
                fVar27 = pUVar31->y;
                fVar14 = pUVar31->z;
                fVar28 = pUVar31->w;
                size_03.fields.y = size_02.fields.y;
                size_03.fields.x = size_02.fields.x;
                fVar6 = 0.0;
                color_06.fields.a = in_XMM1_Db;
                color_06.fields.b = fVar5;
                position_02.fields.y = fStack_344 - fStack_354 * fVar7;
                size_03.fields.z = size_02.fields.z;
                color_06.fields.r = (float)(int)uVar49;
                color_06.fields.g = (float)(int)((ulong)uVar49 >> 0x20);
                uVar54 = uVar49;
                __this_02 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (__this_03,0,position_02,(UnityEngine_Quaternion_o)*pUVar31,size_03,
                                       color_06,pMVar39);
                fStack_388 = size_02.fields.x;
                fVar4 = size_02.fields.y;
                fVar18 = size_02.fields.z;
                fVar51 = fVar5;
                fVar55 = in_XMM1_Db;
                if ((((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar42 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
                     fStack_388 = size_02.fields.x, fVar4 = size_02.fields.y, fVar18 = size_02.fields.z,
                     fVar51 = fVar5, fVar55 = in_XMM1_Db, pUVar41 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar45 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar41,(MethodInfo *)0x0),
                    fStack_388 = size_02.fields.x, fVar4 = size_02.fields.y, fVar18 = size_02.fields.z,
                    fVar51 = fVar5, fVar55 = in_XMM1_Db, pUVar42 != (UnityEngine_Transform_o *)0x0)) &&
                   (UnityEngine_Transform__set_parent(pUVar42,pUVar45,(MethodInfo *)0x0),
                   fStack_388 = size_02.fields.x, fVar4 = size_02.fields.y, fVar18 = size_02.fields.z,
                   fVar51 = fVar5, fVar55 = in_XMM1_Db, __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar42 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar45 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar41,(MethodInfo *)0x0);
                  fStack_388 = size_02.fields.x;
                  fVar4 = size_02.fields.y;
                  fVar18 = size_02.fields.z;
                  fVar51 = fVar5;
                  fVar55 = in_XMM1_Db;
                  if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar42,pUVar45,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar41,(System_String_o *)pMVar44,(MethodInfo *)0x0);
                    fStack_388 = size_02.fields.x;
                    fVar4 = size_02.fields.y;
                    fVar18 = size_02.fields.z;
                    fVar51 = fVar5;
                    fVar55 = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar29,(Il2CppObject *)pMVar44,(Il2CppObject *)pUVar41,MethodInfo_Void_Add);
                      return (System_String_o *)pMVar44;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar50 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar52 = (undefined4)uVar54;
      fVar5 = position_02.fields.z;
      fVar7 = fVar13;
      fVar8 = fVar27;
      fVar21 = fVar14;
      fVar22 = fStack_388;
      fVar9 = fVar4;
      fVar2 = fVar18;
      fVar3 = fVar6;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar41 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar46,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar46[1].klass = 0;
        if (pIVar46 != (Il2CppObject *)0x0) {
          pIVar46[2].klass = pIVar50;
          *(float *)&pIVar46[2].monitor = position_02.fields.z;
          *(ulong *)((long)&pIVar46[2].monitor + 4) =
               CONCAT44(fVar27 + (float)((ulong)pIVar50 >> 0x20),fVar13 + SUB84(pIVar50,0));
          *(float *)((long)&pIVar46[3].klass + 4) = fVar14 + position_02.fields.z;
          *(float *)&pIVar46[3].monitor = fStack_388;
          *(float *)((long)&pIVar46[3].monitor + 4) = fVar4;
          *(float *)&pIVar46[4].klass = fVar18;
          *(float *)((long)&pIVar46[4].klass + 4) = fVar6;
          *(undefined4 *)&pIVar46[4].monitor = uVar52;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pIVar46,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      pvVar34 = (void *)il2cpp_runtime_helper_022b2c90();
      uVar52 = (undefined4)uVar54;
      fVar4 = fVar5;
      fVar18 = fVar7;
      fVar6 = fVar8;
      fVar16 = fVar21;
      fVar17 = fVar22;
      fVar13 = fVar9;
      fVar14 = fVar2;
      fVar10 = fVar3;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pSVar40 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pSVar40,(MethodInfo *)0x0);
      (pSVar40->fields)._stringLength = 0;
      if (pSVar40 == (System_String_o *)0x0) {
        pIVar50 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
        uVar52 = (undefined4)uVar54;
        fVar5 = fVar4;
        fVar7 = fVar18;
        fVar8 = fVar6;
        fVar21 = fVar16;
        fVar22 = fVar17;
        fVar9 = fVar13;
        fVar2 = fVar14;
        fVar3 = fVar10;
        if (g_data_057ae8a6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a6 = '\x01';
        }
        pUVar41 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar37 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar37 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_00,bVar37);
        }
        pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (g_data_057ae8ab == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
            g_data_057ae8ab = '\x01';
          }
          pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
          System_Object___ctor(pIVar46,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar46[1].klass = 0;
          if (pIVar46 != (Il2CppObject *)0x0) {
            pIVar46[2].klass = pIVar50;
            *(float *)&pIVar46[2].monitor = fVar4;
            *(ulong *)((long)&pIVar46[2].monitor + 4) = CONCAT44(fVar6,fVar18);
            *(float *)((long)&pIVar46[3].klass + 4) = fVar16;
            *(float *)&pIVar46[3].monitor = fVar17;
            *(float *)((long)&pIVar46[3].monitor + 4) = fVar13;
            *(float *)&pIVar46[4].klass = fVar14;
            *(float *)((long)&pIVar46[4].klass + 4) = fVar10;
            *(undefined4 *)&pIVar46[4].monitor = uVar52;
            pSVar40 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar32,(System_Collections_IEnumerator_o *)pIVar46,(MethodInfo *)0x0);
            return pSVar40;
          }
        }
        uVar49 = il2cpp_runtime_helper_022b2c90();
        fVar4 = fVar5;
        fVar18 = fVar7;
        fVar6 = fVar8;
        fVar16 = fVar21;
        fVar17 = fVar28;
        fVar13 = fVar22;
        if (g_data_057ae8a7 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a7 = '\x01';
        }
        pUVar41 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar38 = 0;
        bVar37 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar37 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_01,bVar37);
        }
        pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (g_data_057a6843 == '\0') {
          pUVar41 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6843 = '\x01';
        }
        pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057a6932 == '\0') {
          pUVar41 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6932 = '\x01';
        }
        if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar33 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          uVar52 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          pUVar47 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          iVar38 = 0;
          pUVar41 = pUVar47;
          System_Object___ctor((Il2CppObject *)pUVar47,(MethodInfo *)0x0);
          *(undefined4 *)&(pUVar47->fields).m_CachedPtr = 0;
          if (pUVar47 != (UnityEngine_Object_o *)0x0) {
            pUVar47[1].monitor = pUVar32;
            il2cpp_runtime_helper_022b4080(&pUVar47[1].monitor,pUVar32);
            *(undefined4 *)&pUVar47[1].fields.m_CachedPtr = 3;
            *(undefined8 *)((long)&pUVar47[1].fields.m_CachedPtr + 4) = uVar49;
            *(float *)((long)&pUVar47[2].klass + 4) = fVar5;
            pUVar47[2].monitor = pvVar34;
            pUVar47[2].fields.m_CachedPtr = iVar35;
            pUVar47[3].klass = pUVar33;
            *(undefined4 *)&pUVar47[3].monitor = uVar52;
            *(float *)((long)&pUVar47[3].monitor + 4) = fVar7;
            *(float *)&pUVar47[3].fields.m_CachedPtr = fVar8;
            *(float *)((long)&pUVar47[3].fields.m_CachedPtr + 4) = fVar21;
            *(float *)&pUVar47[4].klass = fVar28;
            *(float *)((long)&pUVar47[4].klass + 4) = fVar22;
            pSVar40 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar32,(System_Collections_IEnumerator_o *)pUVar47,(MethodInfo *)0x0);
            return pSVar40;
          }
        }
        uVar49 = il2cpp_runtime_helper_022b2c90();
        uVar52 = (undefined4)uVar54;
        fVar7 = fVar4;
        fVar8 = fVar18;
        fVar21 = fVar16;
        fVar22 = fVar17;
        fVar14 = fVar13;
        fVar10 = fVar9;
        fVar23 = fVar2;
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pSVar40 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor((Il2CppObject *)pSVar40,(MethodInfo *)0x0);
        (pSVar40->fields)._stringLength = 0;
        if (pSVar40 != (System_String_o *)0x0) {
          pSVar40[1].monitor = pUVar41;
          il2cpp_runtime_helper_022b4080(&pSVar40[1].monitor,pUVar41);
          pSVar40[1].fields._stringLength = iVar38;
          *(undefined8 *)&pSVar40[1].fields._firstChar = uVar49;
          *(float *)((long)&pSVar40[2].klass + 4) = fVar4;
          *(float *)&pSVar40[2].monitor = fVar18;
          *(float *)((long)&pSVar40[2].monitor + 4) = fVar6;
          pSVar40[2].fields._stringLength = (int32_t)fVar16;
          *(float *)&pSVar40[2].fields._firstChar = fVar17;
          pSVar40[3].klass = (System_String_c *)CONCAT44(fVar9,fVar13);
          *(float *)&pSVar40[3].monitor = fVar2;
          *(undefined8 *)((long)&pSVar40[3].monitor + 4) = uVar54;
          *(float *)&pSVar40[3].fields._firstChar = fVar51;
          *(float *)&pSVar40[4].klass = fVar55;
          *(float *)((long)&pSVar40[4].klass + 4) = fVar5;
          return pSVar40;
        }
        uVar49 = il2cpp_runtime_helper_022b2c90();
        fVar5 = fVar7;
        fVar4 = fVar8;
        fVar18 = fVar21;
        fVar9 = fVar14;
        fVar6 = fVar10;
        fVar2 = fVar23;
        if (g_data_057ae8a8 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a8 = '\x01';
        }
        pUVar41 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar37 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar37 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_02,bVar37);
        }
        pIVar50 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
        }
        if (pIVar50 != (Il2CppClass *)0x0) {
          pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
          pIVar36 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          System_Object___ctor(pIVar46,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar46[1].klass = 0;
          if (pIVar46 != (Il2CppObject *)0x0) {
            pIVar46[2].klass = pIVar50;
            il2cpp_runtime_helper_022b4080(pIVar46 + 2,pIVar50);
            *(undefined4 *)&pIVar46[2].monitor = 0;
            *(undefined8 *)((long)&pIVar46[2].monitor + 4) = uVar49;
            *(float *)((long)&pIVar46[3].klass + 4) = fVar7;
            pIVar46[3].monitor = pvVar34;
            pIVar46[4].klass = pIVar36;
            pIVar46[4].monitor = (void *)CONCAT44(fVar8,fVar8);
            *(float *)&pIVar46[5].klass = fVar8;
            *(float *)((long)&pIVar46[5].klass + 4) = fVar21;
            *(float *)&pIVar46[5].monitor = fVar22;
            *(float *)((long)&pIVar46[5].monitor + 4) = fVar14;
            *(float *)&pIVar46[6].klass = fVar10;
            *(float *)((long)&pIVar46[6].klass + 4) = fVar23;
            pSVar40 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                ((UnityEngine_MonoBehaviour_o *)pIVar50,
                                 (System_Collections_IEnumerator_o *)pIVar46,(MethodInfo *)0x0);
            return pSVar40;
          }
        }
        uVar49 = il2cpp_runtime_helper_022b2c90();
        fVar7 = fVar5;
        fVar8 = fVar4;
        fVar21 = fVar18;
        fVar22 = fVar9;
        fVar16 = fVar6;
        fVar17 = fVar2;
        fVar13 = fVar3;
        uVar53 = uVar52;
        if (g_data_057ae8a9 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a9 = '\x01';
        }
        pUVar41 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar37 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar37 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_03,bVar37);
        }
        pIVar50 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
        }
        if (pIVar50 != (Il2CppClass *)0x0) {
          pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
          pIVar36 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          pIVar46 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          System_Object___ctor(pIVar46,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar46[1].klass = 0;
          if (pIVar46 != (Il2CppObject *)0x0) {
            pIVar46[2].klass = pIVar50;
            il2cpp_runtime_helper_022b4080(pIVar46 + 2,pIVar50);
            *(undefined4 *)&pIVar46[2].monitor = 2;
            *(undefined8 *)((long)&pIVar46[2].monitor + 4) = uVar49;
            *(float *)((long)&pIVar46[3].klass + 4) = fVar5;
            pIVar46[3].monitor = pvVar34;
            pIVar46[4].klass = pIVar36;
            pIVar46[4].monitor = (void *)CONCAT44(fVar18,fVar4);
            *(float *)&pIVar46[5].klass = fVar4;
            *(float *)((long)&pIVar46[5].klass + 4) = fVar9;
            *(float *)&pIVar46[5].monitor = fVar6;
            *(float *)((long)&pIVar46[5].monitor + 4) = fVar2;
            *(float *)&pIVar46[6].klass = fVar3;
            *(undefined4 *)((long)&pIVar46[6].klass + 4) = uVar52;
            pSVar40 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                ((UnityEngine_MonoBehaviour_o *)pIVar50,
                                 (System_Collections_IEnumerator_o *)pIVar46,(MethodInfo *)0x0);
            return pSVar40;
          }
        }
        uVar49 = il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae8aa == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8aa = '\x01';
        }
        pUVar41 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar52 = 0;
        bVar37 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar37 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_04,bVar37);
        }
        pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (g_data_057a6843 == '\0') {
          pUVar41 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6843 = '\x01';
        }
        if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
          iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          pUVar47 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          uVar52 = 0;
          pUVar41 = pUVar47;
          System_Object___ctor((Il2CppObject *)pUVar47,(MethodInfo *)0x0);
          *(undefined4 *)&(pUVar47->fields).m_CachedPtr = 0;
          if (pUVar47 != (UnityEngine_Object_o *)0x0) {
            pUVar47[1].monitor = pUVar32;
            il2cpp_runtime_helper_022b4080(&pUVar47[1].monitor,pUVar32);
            *(undefined4 *)&pUVar47[1].fields.m_CachedPtr = 1;
            *(undefined8 *)((long)&pUVar47[1].fields.m_CachedPtr + 4) = uVar49;
            *(float *)((long)&pUVar47[2].klass + 4) = fVar7;
            pUVar47[2].monitor = pvVar34;
            pUVar47[2].fields.m_CachedPtr = iVar35;
            pUVar47[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar21,fVar8);
            *(float *)&pUVar47[3].monitor = fVar8;
            *(float *)((long)&pUVar47[3].monitor + 4) = fVar22;
            *(float *)&pUVar47[3].fields.m_CachedPtr = fVar16;
            *(float *)((long)&pUVar47[3].fields.m_CachedPtr + 4) = fVar17;
            *(float *)&pUVar47[4].klass = fVar13;
            *(undefined4 *)((long)&pUVar47[4].klass + 4) = uVar53;
            pSVar40 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar32,(System_Collections_IEnumerator_o *)pUVar47,(MethodInfo *)0x0);
            return pSVar40;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pUVar41,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar41->fields).m_CachedPtr = uVar52;
        return extraout_RAX;
      }
      pSVar40[1].monitor = pvVar34;
      pSVar40[1].fields._stringLength = (int32_t)fVar5;
      *(ulong *)&pSVar40[1].fields._firstChar = CONCAT44(fVar8,fVar7);
      *(float *)((long)&pSVar40[2].klass + 4) = fVar21;
      *(float *)&pSVar40[2].monitor = fVar22;
      *(float *)((long)&pSVar40[2].monitor + 4) = fVar9;
      pSVar40[2].fields._stringLength = (int32_t)fVar2;
      *(float *)&pSVar40[2].fields._firstChar = fVar3;
      *(undefined4 *)&pSVar40[3].klass = uVar52;
      return pSVar40;
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$SpawnCube
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCube (UnityEngine_Vector3_o position, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x4482750

System_String_o *
Utility_CustomDebug__SpawnCube
          (UnityEngine_Vector3_o position,UnityEngine_Color_o color,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Vector3_Fields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar15;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long lVar29;
  UnityEngine_Quaternion_Fields *pUVar30;
  System_Collections_Generic_Dictionary_object__object__o *pSVar31;
  UnityEngine_MonoBehaviour_o *pUVar32;
  UnityEngine_Object_c *pUVar33;
  void *pvVar34;
  intptr_t iVar35;
  Il2CppClass *pIVar36;
  UnityEngine_Quaternion_Fields Rotation;
  bool_conflict bVar37;
  int32_t iVar38;
  UnityEngine_Object_o *pUVar39;
  System_String_o *pSVar40;
  MethodInfo *pMVar41;
  UnityEngine_Transform_o *pUVar42;
  MethodInfo *pMVar43;
  MethodInfo *pMVar44;
  MethodInfo *__this;
  UnityEngine_Material_o *__this_00;
  MethodInfo *pMVar45;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar46;
  undefined4 extraout_var;
  Il2CppObject *pIVar47;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar48;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  Utility_CustomDebug_o *pUVar49;
  undefined8 uVar50;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar51;
  float in_XMM1_Db;
  float in_XMM4_Da;
  float fVar52;
  float in_XMM4_Db;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM6_Da;
  undefined4 uVar53;
  undefined4 uVar54;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  float fVar56;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o UVar57;
  UnityEngine_Vector3_o UVar58;
  UnityEngine_Vector3_o UVar59;
  UnityEngine_Vector3_o UVar60;
  UnityEngine_Vector3_o UVar61;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Vector3_o size_03;
  UnityEngine_Color_o value;
  UnityEngine_Quaternion_o UVar62;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  float fStack_320;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2ac;
  undefined8 uVar55;
  
  fVar7 = position.fields.z;
  fVar5 = fVar7;
  fVar4 = in_XMM4_Da;
  fVar18 = in_XMM4_Db;
  if (g_data_057ae8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a0 = '\x01';
    fVar4 = in_XMM4_Da;
    fVar18 = in_XMM4_Db;
  }
  pUVar49 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar44 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    pUVar49 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar44 = extraout_RDX_00;
  }
  pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pUVar30->x;
  fVar16 = pUVar30->y;
  fVar3 = pUVar30->z;
  fVar17 = pUVar30->w;
  Rotation = *pUVar30;
  if (g_data_057a6932 == '\0') {
    pUVar49 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
    pMVar44 = extraout_RDX_01;
  }
  if (lVar29 != 0) {
    pUVar1 = (UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    fVar4 = pUVar1->x;
    fVar18 = pUVar1->y;
    in_XMM5_Da = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    in_XMM5_Db = 0.0;
    method = (MethodInfo *)0x3;
    in_XMM1_Db = 0.0;
    in_XMM6_Da = color.fields.r;
    in_XMM6_Db = color.fields.g;
    in_XMM7_Da = color.fields.b;
    in_XMM7_Db = color.fields.a;
    pUVar39 = (UnityEngine_Object_o *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        (pUVar49,3,position,(UnityEngine_Quaternion_o)Rotation,(UnityEngine_Vector3_o)*pUVar1,
                         color,pMVar44);
    fVar5 = fVar7;
    if (pUVar39 != (UnityEngine_Object_o *)0x0) {
      method = (MethodInfo *)name;
      UnityEngine_Object__set_name(pUVar39,name,(MethodInfo *)0x0);
      fVar5 = fVar7;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar31 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        pSVar40 = UnityEngine_Object__get_name(pUVar39,(MethodInfo *)0x0);
        fVar5 = fVar7;
        if (pSVar31 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar31,(Il2CppObject *)pSVar40,(Il2CppObject *)pUVar39,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  fVar7 = fVar5;
  fVar8 = fVar2;
  fVar21 = fVar16;
  fVar22 = fVar3;
  fVar13 = fVar17;
  fVar14 = fVar4;
  fVar9 = fVar18;
  fVar10 = in_XMM5_Da;
  fVar11 = in_XMM6_Da;
  fVar12 = in_XMM6_Db;
  fVar52 = in_XMM7_Da;
  fVar56 = in_XMM7_Db;
  if (g_data_057ae8ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugPrimitive");
    il2cpp_runtime_helper_023445d0(&"Standard");
    g_data_057ae8ae = '\x01';
  }
  pMVar45 = (MethodInfo *)((ulong)method & 0xffffffff);
  pMVar44 = (MethodInfo *)0x0;
  pMVar41 = (MethodInfo *)UnityEngine_GameObject__CreatePrimitive((int32_t)method,(MethodInfo *)0x0);
  if (pMVar41 != (MethodInfo *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar41,"DebugPrimitive",(MethodInfo *)0x0);
    pMVar44 = (MethodInfo *)0x0;
    pMVar45 = pMVar41;
    pUVar42 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar41,(MethodInfo *)0x0);
    if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
      in_XMM1_Db = 0.0;
      UVar57.fields.z = fVar5;
      UVar57.fields.x = (float)(int)uVar50;
      UVar57.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
      UnityEngine_Transform__set_position(pUVar42,UVar57,(MethodInfo *)0x0);
      pMVar44 = (MethodInfo *)0x0;
      pMVar45 = pMVar41;
      pUVar42 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar41,(MethodInfo *)0x0);
      fVar7 = fVar5;
      if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
        UVar62.fields.y = fVar16;
        UVar62.fields.x = fVar2;
        UVar62.fields.w = fVar17;
        UVar62.fields.z = fVar3;
        UnityEngine_Transform__set_rotation(pUVar42,UVar62,(MethodInfo *)0x0);
        pMVar44 = (MethodInfo *)0x0;
        pMVar45 = pMVar41;
        pUVar42 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar41,(MethodInfo *)0x0)
        ;
        fVar7 = fVar3;
        in_XMM1_Db = fVar17;
        if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
          UVar58.fields.y = fVar18;
          UVar58.fields.x = fVar4;
          in_XMM1_Db = 0.0;
          UVar58.fields.z = in_XMM5_Da;
          UnityEngine_Transform__set_localScale(pUVar42,UVar58,(MethodInfo *)0x0);
          pMVar43 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar41,MethodInfo_Renderer_GetComponent_Renderer);
          fVar7 = in_XMM5_Da;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            fVar7 = in_XMM5_Da;
          }
          bVar37 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 != '\0') {
            pMVar44 = (MethodInfo *)UnityEngine_Shader__Find("Standard",(MethodInfo *)0x0);
            __this = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
            pMVar45 = __this;
            UnityEngine_Material___ctor
                      ((UnityEngine_Material_o *)__this,(UnityEngine_Shader_o *)pMVar44,(MethodInfo *)0x0);
            if (pMVar43 == (MethodInfo *)0x0) goto label_04482b04;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pMVar43,(UnityEngine_Material_o *)__this,(MethodInfo *)0x0);
            pMVar44 = (MethodInfo *)0x0;
            __this_00 = UnityEngine_Renderer__get_material
                                  ((UnityEngine_Renderer_o *)pMVar43,(MethodInfo *)0x0);
            pMVar45 = pMVar43;
            if (__this_00 == (UnityEngine_Material_o *)0x0) goto label_04482b04;
            value.fields.g = in_XMM6_Db;
            value.fields.r = in_XMM6_Da;
            value.fields.a = in_XMM7_Db;
            value.fields.b = in_XMM7_Da;
            UnityEngine_Material__set_color(__this_00,value,(MethodInfo *)0x0);
            fVar7 = in_XMM7_Da;
            in_XMM1_Db = in_XMM7_Db;
          }
          pMVar43 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar41,MethodInfo_Collider_GetComponent_Collider);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar44 = (MethodInfo *)0x0;
          pMVar45 = pMVar43;
          bVar37 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 == '\0') {
            return (System_String_o *)pMVar41;
          }
          if (pMVar43 != (MethodInfo *)0x0) {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pMVar43,0,(MethodInfo *)0x0);
            return (System_String_o *)pMVar41;
          }
        }
      }
    }
  }
label_04482b04:
  uVar50 = il2cpp_runtime_helper_022b2c90();
  fVar4 = fVar7;
  fVar5 = fVar8;
  fVar19 = fVar21;
  fVar6 = fVar22;
  fVar20 = fVar13;
  fVar18 = fVar14;
  fVar2 = fVar9;
  if (g_data_057ae8a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a1 = '\x01';
  }
  pMVar43 = pMVar45;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar45,pMVar44);
  lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar41 = extraout_RDX_02;
  if (g_data_057a6843 == '\0') {
    pMVar43 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar41 = extraout_RDX_03;
  }
  if (lVar29 != 0) {
    pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar5 = pUVar30->x;
    fVar19 = pUVar30->y;
    fVar6 = pUVar30->z;
    fVar20 = pUVar30->w;
    pMVar44 = (MethodInfo *)0x0;
    in_XMM1_Db = 0.0;
    color_00.fields.g = fVar13;
    color_00.fields.r = fVar22;
    color_00.fields.a = fVar9;
    color_00.fields.b = fVar14;
    UVar59.fields.z = fVar7;
    UVar59.fields.x = (float)(int)uVar50;
    UVar59.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    UVar60.fields.y = fVar8;
    UVar60.fields.x = fVar8;
    UVar60.fields.z = fVar8;
    fVar2 = fVar8;
    fVar10 = fVar8;
    pMVar41 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar43,0,UVar59,(UnityEngine_Quaternion_o)*pUVar30,UVar60,
                         color_00,pMVar41);
    fVar4 = fVar7;
    fVar18 = fVar8;
    in_XMM5_Db = fVar21;
    fVar11 = fVar22;
    fVar12 = fVar13;
    fVar52 = fVar14;
    fVar56 = fVar9;
    if (pMVar41 != (MethodInfo *)0x0) {
      pMVar44 = pMVar45;
      pMVar43 = pMVar41;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar41,(System_String_o *)pMVar45,(MethodInfo *)0x0);
      fVar4 = fVar7;
      fVar18 = fVar8;
      in_XMM5_Db = fVar21;
      fVar11 = fVar22;
      fVar12 = fVar13;
      fVar52 = fVar14;
      fVar56 = fVar9;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar31 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar43 = pMVar41;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar41,(MethodInfo *)0x0);
        fVar4 = fVar7;
        fVar18 = fVar8;
        in_XMM5_Db = fVar21;
        fVar11 = fVar22;
        fVar12 = fVar13;
        fVar52 = fVar14;
        fVar56 = fVar9;
        if (pSVar31 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar31,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar41,MethodInfo_Void_Add);
          return (System_String_o *)pMVar45;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  fVar3 = fVar4;
  fVar7 = fVar5;
  fVar21 = fVar19;
  fVar8 = fVar6;
  fVar22 = fVar20;
  fVar16 = fVar18;
  fVar17 = fVar2;
  fVar13 = fVar10;
  fVar14 = in_XMM5_Db;
  if (g_data_057ae8a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a2 = '\x01';
    fVar22 = fVar20;
  }
  pMVar41 = pMVar43;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar43,pMVar44);
  lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar45 = extraout_RDX_04;
  if (g_data_057a6843 == '\0') {
    pMVar41 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar45 = extraout_RDX_05;
  }
  if (lVar29 != 0) {
    pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar7 = pUVar30->x;
    fVar21 = pUVar30->y;
    fVar8 = pUVar30->z;
    fVar22 = pUVar30->w;
    pMVar44 = (MethodInfo *)0x2;
    in_XMM1_Db = 0.0;
    color_01.fields.g = fVar2;
    color_01.fields.r = fVar18;
    color_01.fields.a = in_XMM5_Db;
    color_01.fields.b = fVar10;
    UVar61.fields.z = fVar4;
    UVar61.fields.x = (float)(int)uVar50;
    UVar61.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    size.fields.y = fVar6;
    size.fields.x = fVar5;
    size.fields.z = fVar5;
    fVar13 = fVar5;
    pMVar45 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar41,2,UVar61,(UnityEngine_Quaternion_o)*pUVar30,size,
                         color_01,pMVar45);
    fVar3 = fVar4;
    fVar16 = fVar5;
    fVar17 = fVar6;
    fVar14 = fVar19;
    fVar11 = fVar18;
    fVar12 = fVar2;
    fVar52 = fVar10;
    fVar56 = in_XMM5_Db;
    if (pMVar45 != (MethodInfo *)0x0) {
      pMVar44 = pMVar43;
      pMVar41 = pMVar45;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar45,(System_String_o *)pMVar43,(MethodInfo *)0x0);
      fVar3 = fVar4;
      fVar16 = fVar5;
      fVar17 = fVar6;
      fVar14 = fVar19;
      fVar11 = fVar18;
      fVar12 = fVar2;
      fVar52 = fVar10;
      fVar56 = in_XMM5_Db;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar31 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar41 = pMVar45;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar45,(MethodInfo *)0x0);
        fVar3 = fVar4;
        fVar16 = fVar5;
        fVar17 = fVar6;
        fVar14 = fVar19;
        fVar11 = fVar18;
        fVar12 = fVar2;
        fVar52 = fVar10;
        fVar56 = in_XMM5_Db;
        if (pSVar31 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar31,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar45,MethodInfo_Void_Add);
          return (System_String_o *)pMVar43;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  fVar4 = fVar3;
  fVar9 = fVar7;
  fVar23 = fVar21;
  fVar10 = fVar8;
  fVar24 = fVar22;
  fStack_320 = fVar16;
  fVar18 = fVar17;
  fVar5 = fVar13;
  fVar2 = fVar14;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar24 = fVar22;
  }
  pMVar43 = pMVar41;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar41,pMVar44);
  lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar45 = extraout_RDX_06;
  if (g_data_057a6843 == '\0') {
    pMVar43 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar45 = extraout_RDX_07;
  }
  if (lVar29 != 0) {
    pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar9 = pUVar30->x;
    fVar23 = pUVar30->y;
    fVar10 = pUVar30->z;
    fVar24 = pUVar30->w;
    pMVar44 = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    color_02.fields.g = fVar17;
    color_02.fields.r = fVar16;
    color_02.fields.a = fVar14;
    color_02.fields.b = fVar13;
    position_00.fields.z = fVar3;
    position_00.fields.x = (float)(int)uVar50;
    position_00.fields.y = (float)(int)((ulong)uVar50 >> 0x20);
    size_00.fields.y = fVar8;
    size_00.fields.x = fVar7;
    size_00.fields.z = fVar7;
    fVar5 = fVar7;
    pMVar45 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar43,1,position_00,(UnityEngine_Quaternion_o)*pUVar30,
                         size_00,color_02,pMVar45);
    fVar4 = fVar3;
    fStack_320 = fVar7;
    fVar18 = fVar8;
    fVar2 = fVar21;
    fVar11 = fVar16;
    fVar12 = fVar17;
    fVar52 = fVar13;
    fVar56 = fVar14;
    if (pMVar45 != (MethodInfo *)0x0) {
      pMVar44 = pMVar41;
      pMVar43 = pMVar45;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar45,(System_String_o *)pMVar41,(MethodInfo *)0x0);
      fVar4 = fVar3;
      fStack_320 = fVar7;
      fVar18 = fVar8;
      fVar2 = fVar21;
      fVar11 = fVar16;
      fVar12 = fVar17;
      fVar52 = fVar13;
      fVar56 = fVar14;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar31 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar44 = (MethodInfo *)0x0;
        pMVar43 = pMVar45;
        pSVar40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar45,(MethodInfo *)0x0);
        fVar4 = fVar3;
        fStack_320 = fVar7;
        fVar18 = fVar8;
        fVar2 = fVar21;
        fVar11 = fVar16;
        fVar12 = fVar17;
        fVar52 = fVar13;
        fVar56 = fVar14;
        if (pSVar31 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar31,(Il2CppObject *)pSVar40,(Il2CppObject *)pMVar45,MethodInfo_Void_Add);
          return (System_String_o *)pMVar41;
        }
      }
    }
  }
  uVar50 = il2cpp_runtime_helper_022b2c90();
  position_02.fields.z = fVar4;
  fVar13 = fVar9;
  fVar27 = fVar23;
  fVar14 = fVar10;
  fVar28 = fVar24;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar13 = fVar9;
    fVar27 = fVar23;
    fVar14 = fVar10;
    fVar28 = fVar24;
  }
  pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar37 = UnityEngine_Object__op_Equality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar37 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar37 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pMVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar55 = CONCAT44(fVar12,fVar11);
    if ((char)bVar37 == '\0') {
      if (pMVar43 != (MethodInfo *)0x0) {
        pUVar42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar43,(MethodInfo *)0x0);
        UVar57 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
        uVar55 = CONCAT44(fVar12,fVar11);
        position_02.fields.z = UVar57.fields.z;
        if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
          UVar57 = UnityEngine_Transform__TransformPoint(pUVar42,UVar57,(MethodInfo *)0x0);
          fVar16 = UVar57.fields.z;
          fVar7 = UnityEngine_CapsuleCollider__get_radius
                            ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          UVar58 = UnityEngine_Transform__get_lossyScale(pUVar42,(MethodInfo *)0x0);
          UVar59 = UnityEngine_Transform__get_lossyScale(pUVar42,(MethodInfo *)0x0);
          fVar3 = UnityEngine_CapsuleCollider__get_height
                            ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          UVar60 = UnityEngine_Transform__get_lossyScale(pUVar42,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar60.fields.x,UVar60.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar55 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar17 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar38 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)pMVar43,(MethodInfo *)0x0);
          if (iVar38 == 2) {
            UVar61 = UnityEngine_Transform__get_forward(pUVar42,(MethodInfo *)0x0);
            fVar17 = UVar61.fields.z;
            fStack_2f0 = UVar61.fields.x;
            fStack_2ec = UVar61.fields.y;
          }
          else if (iVar38 == 1) {
            UVar61 = UnityEngine_Transform__get_up(pUVar42,(MethodInfo *)0x0);
            fVar17 = UVar61.fields.z;
            fStack_2f0 = UVar61.fields.x;
            fStack_2ec = UVar61.fields.y;
          }
          else {
            fStack_2f0 = (float)uVar55;
            fStack_2ec = (float)((ulong)uVar55 >> 0x20);
            if (iVar38 == 0) {
              UVar61 = UnityEngine_Transform__get_right(pUVar42,(MethodInfo *)0x0);
              fVar17 = UVar61.fields.z;
              fStack_2f0 = UVar61.fields.x;
              fStack_2ec = UVar61.fields.y;
            }
          }
          pUVar49 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_2ec;
          forward.fields.x = fStack_2f0;
          forward.fields.z = fVar17;
          UVar62 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar55 = CONCAT44(fVar12,fVar11);
          position_02.fields.z = UVar62.fields.z;
          fVar22 = UVar62.fields.w;
          fVar8 = UVar62.fields.x;
          fVar21 = UVar62.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_320 = UVar58.fields.x;
            if (fStack_320 <= UVar59.fields.z) {
              fStack_320 = UVar59.fields.z;
            }
            fStack_2ac = UVar60.fields.y;
            fStack_320 = fVar7 * fStack_320;
            size_01.fields.z = fStack_320 + fStack_320;
            fVar18 = fVar3 * fStack_2ac - size_01.fields.z;
            fVar7 = 0.0;
            if (0.0 <= fVar18) {
              fVar7 = fVar18;
            }
            color_03.fields.a = in_XMM1_Db;
            color_03.fields.b = fVar4;
            size_01.fields.y = fVar7 * 0.5;
            size_01.fields.x = size_01.fields.z;
            color_03.fields.r = (float)(int)uVar50;
            color_03.fields.g = (float)(int)((ulong)uVar50 >> 0x20);
            fVar18 = fVar16;
            fVar14 = position_02.fields.z;
            uVar55 = uVar50;
            pUVar39 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (pUVar49,2,UVar57,UVar62,size_01,color_03,method_00);
            pMVar45 = extraout_RDX_08;
            position_02.fields.z = fVar18;
            fVar13 = fVar8;
            fVar27 = fVar21;
            fVar28 = fVar22;
            if (g_data_057a6932 == '\0') {
              pUVar49 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar45 = extraout_RDX_09;
              position_02.fields.z = fVar18;
              fVar13 = fVar8;
              fVar27 = fVar21;
              fVar28 = fVar22;
            }
            uVar15 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            fVar52 = (float)uVar15;
            fVar56 = (float)((ulong)uVar15 >> 0x20);
            fVar5 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fStack_320;
            lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              pUVar49 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar45 = extraout_RDX_10;
            }
            fVar2 = 0.0;
            fVar18 = extraout_XMM0_Db;
            if (lVar29 != 0) {
              fVar7 = fVar7 * 0.5 + fStack_320;
              fStack_2e0 = UVar57.fields.x;
              fStack_2dc = UVar57.fields.y;
              fVar52 = fStack_320 * fVar52;
              fStack_320 = fStack_320 * fVar56;
              position_01.fields.x = fStack_2e0 + fVar7 * fStack_2f0;
              position_01.fields.z = fVar16 + fVar7 * fVar17;
              size_02.fields.x = fVar52 + fVar52;
              size_02.fields.y = fStack_320 + fStack_320;
              size_02.fields.z = fVar5 + fVar5;
              pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar11 = pUVar30->x;
              fVar25 = pUVar30->y;
              fVar12 = pUVar30->z;
              fVar26 = pUVar30->w;
              color_04.fields.a = in_XMM1_Db;
              color_04.fields.b = fVar4;
              position_01.fields.y = fStack_2dc + fStack_2ec * fVar7;
              color_04.fields.r = (float)(int)uVar50;
              color_04.fields.g = (float)(int)((ulong)uVar50 >> 0x20);
              fStack_320 = size_02.fields.x;
              fVar18 = size_02.fields.y;
              fVar5 = size_02.fields.z;
              fVar52 = fVar4;
              fVar56 = in_XMM1_Db;
              uVar55 = uVar50;
              __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                                    (pUVar49,0,position_01,(UnityEngine_Quaternion_o)*pUVar30,size_02,color_04
                                     ,pMVar45);
              lVar29 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar45 = extraout_RDX_11;
              position_02.fields.z = position_01.fields.z;
              fVar13 = fVar11;
              fVar27 = fVar25;
              fVar14 = fVar12;
              fVar28 = fVar26;
              if (g_data_057a6843 == '\0') {
                pUVar49 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar45 = extraout_RDX_12;
                position_02.fields.z = position_01.fields.z;
                fVar13 = fVar11;
                fVar27 = fVar25;
                fVar14 = fVar12;
                fVar28 = fVar26;
              }
              if (lVar29 != 0) {
                position_02.fields.x = fStack_2e0 - fVar7 * fStack_2f0;
                position_02.fields.z = fVar16 - fVar7 * fVar17;
                pUVar30 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar13 = pUVar30->x;
                fVar27 = pUVar30->y;
                fVar14 = pUVar30->z;
                fVar28 = pUVar30->w;
                size_03.fields.y = size_02.fields.y;
                size_03.fields.x = size_02.fields.x;
                fVar2 = 0.0;
                color_05.fields.a = in_XMM1_Db;
                color_05.fields.b = fVar4;
                position_02.fields.y = fStack_2dc - fStack_2ec * fVar7;
                size_03.fields.z = size_02.fields.z;
                color_05.fields.r = (float)(int)uVar50;
                color_05.fields.g = (float)(int)((ulong)uVar50 >> 0x20);
                uVar55 = uVar50;
                __this_02 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (pUVar49,0,position_02,(UnityEngine_Quaternion_o)*pUVar30,size_03,
                                       color_05,pMVar45);
                fStack_320 = size_02.fields.x;
                fVar18 = size_02.fields.y;
                fVar5 = size_02.fields.z;
                fVar52 = fVar4;
                fVar56 = in_XMM1_Db;
                if ((((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar42 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
                     fStack_320 = size_02.fields.x, fVar18 = size_02.fields.y, fVar5 = size_02.fields.z,
                     fVar52 = fVar4, fVar56 = in_XMM1_Db, pUVar39 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar46 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar39,(MethodInfo *)0x0),
                    fStack_320 = size_02.fields.x, fVar18 = size_02.fields.y, fVar5 = size_02.fields.z,
                    fVar52 = fVar4, fVar56 = in_XMM1_Db, pUVar42 != (UnityEngine_Transform_o *)0x0)) &&
                   (UnityEngine_Transform__set_parent(pUVar42,pUVar46,(MethodInfo *)0x0),
                   fStack_320 = size_02.fields.x, fVar18 = size_02.fields.y, fVar5 = size_02.fields.z,
                   fVar52 = fVar4, fVar56 = in_XMM1_Db, __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar42 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar46 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar39,(MethodInfo *)0x0);
                  fStack_320 = size_02.fields.x;
                  fVar18 = size_02.fields.y;
                  fVar5 = size_02.fields.z;
                  fVar52 = fVar4;
                  fVar56 = in_XMM1_Db;
                  if (pUVar42 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar42,pUVar46,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar39,(System_String_o *)pMVar44,(MethodInfo *)0x0);
                    fStack_320 = size_02.fields.x;
                    fVar18 = size_02.fields.y;
                    fVar5 = size_02.fields.z;
                    fVar52 = fVar4;
                    fVar56 = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar31 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar31 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar31,(Il2CppObject *)pMVar44,(Il2CppObject *)pUVar39,MethodInfo_Void_Add);
                      return (System_String_o *)pMVar44;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar51 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar53 = (undefined4)uVar55;
      fVar4 = position_02.fields.z;
      fVar7 = fVar13;
      fVar3 = fVar27;
      fVar16 = fVar14;
      fVar17 = fStack_320;
      fVar8 = fVar18;
      fVar21 = fVar5;
      fVar22 = fVar2;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar47 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar47,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar47[1].klass = 0;
        if (pIVar47 != (Il2CppObject *)0x0) {
          pIVar47[2].klass = pIVar51;
          *(float *)&pIVar47[2].monitor = position_02.fields.z;
          *(ulong *)((long)&pIVar47[2].monitor + 4) =
               CONCAT44(fVar27 + (float)((ulong)pIVar51 >> 0x20),fVar13 + SUB84(pIVar51,0));
          *(float *)((long)&pIVar47[3].klass + 4) = fVar14 + position_02.fields.z;
          *(float *)&pIVar47[3].monitor = fStack_320;
          *(float *)((long)&pIVar47[3].monitor + 4) = fVar18;
          *(float *)&pIVar47[4].klass = fVar5;
          *(float *)((long)&pIVar47[4].klass + 4) = fVar2;
          *(undefined4 *)&pIVar47[4].monitor = uVar53;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pIVar47,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      pvVar34 = (void *)il2cpp_runtime_helper_022b2c90();
      uVar53 = (undefined4)uVar55;
      fVar18 = fVar4;
      fVar5 = fVar7;
      fVar2 = fVar3;
      fVar13 = fVar16;
      fVar14 = fVar17;
      fVar9 = fVar8;
      fVar10 = fVar21;
      fVar11 = fVar22;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pSVar40 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pSVar40,(MethodInfo *)0x0);
      (pSVar40->fields)._stringLength = 0;
      if (pSVar40 != (System_String_o *)0x0) {
        pSVar40[1].monitor = pvVar34;
        pSVar40[1].fields._stringLength = (int32_t)fVar4;
        *(ulong *)&pSVar40[1].fields._firstChar = CONCAT44(fVar3,fVar7);
        *(float *)((long)&pSVar40[2].klass + 4) = fVar16;
        *(float *)&pSVar40[2].monitor = fVar17;
        *(float *)((long)&pSVar40[2].monitor + 4) = fVar8;
        pSVar40[2].fields._stringLength = (int32_t)fVar21;
        *(float *)&pSVar40[2].fields._firstChar = fVar22;
        *(undefined4 *)&pSVar40[3].klass = uVar53;
        return pSVar40;
      }
      pIVar51 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar53 = (undefined4)uVar55;
      fVar4 = fVar18;
      fVar7 = fVar5;
      fVar3 = fVar2;
      fVar16 = fVar13;
      fVar17 = fVar14;
      fVar8 = fVar9;
      fVar21 = fVar10;
      fVar22 = fVar11;
      if (g_data_057ae8a6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a6 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar47 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar47,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar47[1].klass = 0;
        if (pIVar47 != (Il2CppObject *)0x0) {
          pIVar47[2].klass = pIVar51;
          *(float *)&pIVar47[2].monitor = fVar18;
          *(ulong *)((long)&pIVar47[2].monitor + 4) = CONCAT44(fVar2,fVar5);
          *(float *)((long)&pIVar47[3].klass + 4) = fVar13;
          *(float *)&pIVar47[3].monitor = fVar14;
          *(float *)((long)&pIVar47[3].monitor + 4) = fVar9;
          *(float *)&pIVar47[4].klass = fVar10;
          *(float *)((long)&pIVar47[4].klass + 4) = fVar11;
          *(undefined4 *)&pIVar47[4].monitor = uVar53;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pIVar47,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      uVar50 = il2cpp_runtime_helper_022b2c90();
      fVar18 = fVar4;
      fVar5 = fVar7;
      fVar2 = fVar3;
      fVar13 = fVar16;
      fVar14 = fVar28;
      fVar9 = fVar17;
      if (g_data_057ae8a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a7 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar38 = 0;
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar39 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057a6932 == '\0') {
        pUVar39 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar33 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        uVar53 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar48 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        iVar38 = 0;
        pUVar39 = pUVar48;
        System_Object___ctor((Il2CppObject *)pUVar48,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar48->fields).m_CachedPtr = 0;
        if (pUVar48 != (UnityEngine_Object_o *)0x0) {
          pUVar48[1].monitor = pUVar32;
          il2cpp_runtime_helper_022b4080(&pUVar48[1].monitor,pUVar32);
          *(undefined4 *)&pUVar48[1].fields.m_CachedPtr = 3;
          *(undefined8 *)((long)&pUVar48[1].fields.m_CachedPtr + 4) = uVar50;
          *(float *)((long)&pUVar48[2].klass + 4) = fVar4;
          pUVar48[2].monitor = pvVar34;
          pUVar48[2].fields.m_CachedPtr = iVar35;
          pUVar48[3].klass = pUVar33;
          *(undefined4 *)&pUVar48[3].monitor = uVar53;
          *(float *)((long)&pUVar48[3].monitor + 4) = fVar7;
          *(float *)&pUVar48[3].fields.m_CachedPtr = fVar3;
          *(float *)((long)&pUVar48[3].fields.m_CachedPtr + 4) = fVar16;
          *(float *)&pUVar48[4].klass = fVar28;
          *(float *)((long)&pUVar48[4].klass + 4) = fVar17;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pUVar48,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      uVar50 = il2cpp_runtime_helper_022b2c90();
      uVar53 = (undefined4)uVar55;
      fVar7 = fVar18;
      fVar3 = fVar5;
      fVar16 = fVar13;
      fVar17 = fVar14;
      fVar10 = fVar9;
      fVar11 = fVar8;
      fVar12 = fVar21;
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      pSVar40 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor((Il2CppObject *)pSVar40,(MethodInfo *)0x0);
      (pSVar40->fields)._stringLength = 0;
      if (pSVar40 != (System_String_o *)0x0) {
        pSVar40[1].monitor = pUVar39;
        il2cpp_runtime_helper_022b4080(&pSVar40[1].monitor,pUVar39);
        pSVar40[1].fields._stringLength = iVar38;
        *(undefined8 *)&pSVar40[1].fields._firstChar = uVar50;
        *(float *)((long)&pSVar40[2].klass + 4) = fVar18;
        *(float *)&pSVar40[2].monitor = fVar5;
        *(float *)((long)&pSVar40[2].monitor + 4) = fVar2;
        pSVar40[2].fields._stringLength = (int32_t)fVar13;
        *(float *)&pSVar40[2].fields._firstChar = fVar14;
        pSVar40[3].klass = (System_String_c *)CONCAT44(fVar8,fVar9);
        *(float *)&pSVar40[3].monitor = fVar21;
        *(undefined8 *)((long)&pSVar40[3].monitor + 4) = uVar55;
        *(float *)&pSVar40[3].fields._firstChar = fVar52;
        *(float *)&pSVar40[4].klass = fVar56;
        *(float *)((long)&pSVar40[4].klass + 4) = fVar4;
        return pSVar40;
      }
      uVar50 = il2cpp_runtime_helper_022b2c90();
      fVar4 = fVar7;
      fVar18 = fVar3;
      fVar5 = fVar16;
      fVar2 = fVar10;
      fVar8 = fVar11;
      fVar21 = fVar12;
      if (g_data_057ae8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a8 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_02,bVar37);
      }
      pIVar51 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar51 != (Il2CppClass *)0x0) {
        pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar36 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar47 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar47,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar47[1].klass = 0;
        if (pIVar47 != (Il2CppObject *)0x0) {
          pIVar47[2].klass = pIVar51;
          il2cpp_runtime_helper_022b4080(pIVar47 + 2,pIVar51);
          *(undefined4 *)&pIVar47[2].monitor = 0;
          *(undefined8 *)((long)&pIVar47[2].monitor + 4) = uVar50;
          *(float *)((long)&pIVar47[3].klass + 4) = fVar7;
          pIVar47[3].monitor = pvVar34;
          pIVar47[4].klass = pIVar36;
          pIVar47[4].monitor = (void *)CONCAT44(fVar3,fVar3);
          *(float *)&pIVar47[5].klass = fVar3;
          *(float *)((long)&pIVar47[5].klass + 4) = fVar16;
          *(float *)&pIVar47[5].monitor = fVar17;
          *(float *)((long)&pIVar47[5].monitor + 4) = fVar10;
          *(float *)&pIVar47[6].klass = fVar11;
          *(float *)((long)&pIVar47[6].klass + 4) = fVar12;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar51,
                               (System_Collections_IEnumerator_o *)pIVar47,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      uVar50 = il2cpp_runtime_helper_022b2c90();
      fVar7 = fVar4;
      fVar3 = fVar18;
      fVar16 = fVar5;
      fVar17 = fVar2;
      fVar13 = fVar8;
      fVar14 = fVar21;
      fVar9 = fVar22;
      uVar54 = uVar53;
      if (g_data_057ae8a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a9 = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_03,bVar37);
      }
      pIVar51 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar51 != (Il2CppClass *)0x0) {
        pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar36 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar47 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar47,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar47[1].klass = 0;
        if (pIVar47 != (Il2CppObject *)0x0) {
          pIVar47[2].klass = pIVar51;
          il2cpp_runtime_helper_022b4080(pIVar47 + 2,pIVar51);
          *(undefined4 *)&pIVar47[2].monitor = 2;
          *(undefined8 *)((long)&pIVar47[2].monitor + 4) = uVar50;
          *(float *)((long)&pIVar47[3].klass + 4) = fVar4;
          pIVar47[3].monitor = pvVar34;
          pIVar47[4].klass = pIVar36;
          pIVar47[4].monitor = (void *)CONCAT44(fVar5,fVar18);
          *(float *)&pIVar47[5].klass = fVar18;
          *(float *)((long)&pIVar47[5].klass + 4) = fVar2;
          *(float *)&pIVar47[5].monitor = fVar8;
          *(float *)((long)&pIVar47[5].monitor + 4) = fVar21;
          *(float *)&pIVar47[6].klass = fVar22;
          *(undefined4 *)((long)&pIVar47[6].klass + 4) = uVar53;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar51,
                               (System_Collections_IEnumerator_o *)pIVar47,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      uVar50 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae8aa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8aa = '\x01';
      }
      pUVar39 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar53 = 0;
      bVar37 = UnityEngine_Object__op_Inequality(pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_04,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar39 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar48 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        uVar53 = 0;
        pUVar39 = pUVar48;
        System_Object___ctor((Il2CppObject *)pUVar48,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar48->fields).m_CachedPtr = 0;
        if (pUVar48 != (UnityEngine_Object_o *)0x0) {
          pUVar48[1].monitor = pUVar32;
          il2cpp_runtime_helper_022b4080(&pUVar48[1].monitor,pUVar32);
          *(undefined4 *)&pUVar48[1].fields.m_CachedPtr = 1;
          *(undefined8 *)((long)&pUVar48[1].fields.m_CachedPtr + 4) = uVar50;
          *(float *)((long)&pUVar48[2].klass + 4) = fVar7;
          pUVar48[2].monitor = pvVar34;
          pUVar48[2].fields.m_CachedPtr = iVar35;
          pUVar48[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar16,fVar3);
          *(float *)&pUVar48[3].monitor = fVar3;
          *(float *)((long)&pUVar48[3].monitor + 4) = fVar17;
          *(float *)&pUVar48[3].fields.m_CachedPtr = fVar13;
          *(float *)((long)&pUVar48[3].fields.m_CachedPtr + 4) = fVar14;
          *(float *)&pUVar48[4].klass = fVar9;
          *(undefined4 *)((long)&pUVar48[4].klass + 4) = uVar54;
          pSVar40 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pUVar48,(MethodInfo *)0x0);
          return pSVar40;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar39,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar39->fields).m_CachedPtr = uVar53;
      return extraout_RAX;
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$SpawnSphere
// il2cpp: System_String_o* Utility_CustomDebug__SpawnSphere (UnityEngine_Vector3_o position, float radius, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x4482b10

System_String_o *
Utility_CustomDebug__SpawnSphere
          (UnityEngine_Vector3_o position,float radius,UnityEngine_Color_o color,System_String_o *name,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar11;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long lVar22;
  UnityEngine_Quaternion_Fields *pUVar23;
  System_Collections_Generic_Dictionary_object__object__o *pSVar24;
  UnityEngine_MonoBehaviour_o *pUVar25;
  UnityEngine_Object_c *pUVar26;
  void *pvVar27;
  intptr_t iVar28;
  Il2CppClass *pIVar29;
  bool_conflict bVar30;
  int32_t iVar31;
  MethodInfo *pMVar32;
  System_String_o *pSVar33;
  UnityEngine_Transform_o *pUVar34;
  UnityEngine_Object_o *pUVar35;
  UnityEngine_GameObject_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar36;
  undefined4 extraout_var;
  Il2CppObject *pIVar37;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar38;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar39;
  MethodInfo *__this_01;
  Utility_CustomDebug_o *__this_02;
  undefined8 uVar40;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar41;
  float in_XMM1_Db;
  float in_XMM2_Db;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM6_Da;
  undefined4 uVar42;
  undefined4 uVar43;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Vector3_o UVar47;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Quaternion_o Rotation;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  float fStack_210;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_19c;
  undefined8 uVar44;
  
  fVar15 = color.fields.b;
  fVar9 = color.fields.a;
  fVar4 = color.fields.r;
  fVar14 = color.fields.g;
  fVar3 = position.fields.z;
  fVar5 = fVar3;
  fVar1 = radius;
  fVar12 = in_XMM2_Db;
  fVar2 = fVar4;
  fVar13 = fVar14;
  fVar6 = fVar15;
  fVar16 = fVar9;
  if (g_data_057ae8a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a1 = '\x01';
  }
  pMVar39 = (MethodInfo *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar32 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    pMVar39 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar32 = extraout_RDX_00;
  }
  if (lVar22 != 0) {
    pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pUVar23->x;
    fVar12 = pUVar23->y;
    fVar2 = pUVar23->z;
    fVar13 = pUVar23->w;
    method = (MethodInfo *)0x0;
    in_XMM1_Db = 0.0;
    UVar45.fields.y = radius;
    UVar45.fields.x = radius;
    UVar45.fields.z = radius;
    fVar16 = radius;
    in_XMM5_Da = radius;
    pMVar32 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar39,0,position,(UnityEngine_Quaternion_o)*pUVar23,UVar45
                         ,color,pMVar32);
    fVar5 = fVar3;
    fVar6 = radius;
    in_XMM5_Db = in_XMM2_Db;
    in_XMM6_Da = fVar4;
    in_XMM6_Db = fVar14;
    in_XMM7_Da = fVar15;
    in_XMM7_Db = fVar9;
    if (pMVar32 != (MethodInfo *)0x0) {
      method = (MethodInfo *)name;
      pMVar39 = pMVar32;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar32,name,(MethodInfo *)0x0);
      fVar5 = fVar3;
      fVar6 = radius;
      in_XMM5_Db = in_XMM2_Db;
      in_XMM6_Da = fVar4;
      in_XMM6_Db = fVar14;
      in_XMM7_Da = fVar15;
      in_XMM7_Db = fVar9;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        pMVar39 = pMVar32;
        pSVar33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar32,(MethodInfo *)0x0);
        fVar5 = fVar3;
        fVar6 = radius;
        in_XMM5_Db = in_XMM2_Db;
        in_XMM6_Da = fVar4;
        in_XMM6_Db = fVar14;
        in_XMM7_Da = fVar15;
        in_XMM7_Db = fVar9;
        if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar24,(Il2CppObject *)pSVar33,(Il2CppObject *)pMVar32,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
  uVar40 = il2cpp_runtime_helper_022b2c90();
  fVar9 = fVar5;
  fVar3 = fVar1;
  fVar14 = fVar12;
  fVar4 = fVar2;
  fVar15 = fVar13;
  fVar10 = fVar6;
  fVar20 = fVar16;
  fVar21 = in_XMM5_Da;
  UVar49.fields.z = in_XMM5_Db;
  if (g_data_057ae8a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a2 = '\x01';
    fVar15 = fVar13;
  }
  __this_01 = pMVar39;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar39,method);
  lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar32 = extraout_RDX_01;
  if (g_data_057a6843 == '\0') {
    __this_01 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar32 = extraout_RDX_02;
  }
  if (lVar22 != 0) {
    pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar3 = pUVar23->x;
    fVar14 = pUVar23->y;
    fVar4 = pUVar23->z;
    fVar15 = pUVar23->w;
    method = (MethodInfo *)0x2;
    in_XMM1_Db = 0.0;
    color_00.fields.g = fVar16;
    color_00.fields.r = fVar6;
    color_00.fields.a = in_XMM5_Db;
    color_00.fields.b = in_XMM5_Da;
    UVar46.fields.z = fVar5;
    UVar46.fields.x = (float)(int)uVar40;
    UVar46.fields.y = (float)(int)((ulong)uVar40 >> 0x20);
    UVar47.fields.y = fVar2;
    UVar47.fields.x = fVar1;
    UVar47.fields.z = fVar1;
    fVar21 = fVar1;
    pMVar32 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)__this_01,2,UVar46,(UnityEngine_Quaternion_o)*pUVar23,UVar47
                         ,color_00,pMVar32);
    fVar9 = fVar5;
    fVar10 = fVar1;
    fVar20 = fVar2;
    UVar49.fields.z = fVar12;
    in_XMM6_Da = fVar6;
    in_XMM6_Db = fVar16;
    in_XMM7_Da = in_XMM5_Da;
    in_XMM7_Db = in_XMM5_Db;
    if (pMVar32 != (MethodInfo *)0x0) {
      method = pMVar39;
      __this_01 = pMVar32;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar32,(System_String_o *)pMVar39,(MethodInfo *)0x0);
      fVar9 = fVar5;
      fVar10 = fVar1;
      fVar20 = fVar2;
      UVar49.fields.z = fVar12;
      in_XMM6_Da = fVar6;
      in_XMM6_Db = fVar16;
      in_XMM7_Da = in_XMM5_Da;
      in_XMM7_Db = in_XMM5_Db;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        __this_01 = pMVar32;
        pSVar33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar32,(MethodInfo *)0x0);
        fVar9 = fVar5;
        fVar10 = fVar1;
        fVar20 = fVar2;
        UVar49.fields.z = fVar12;
        in_XMM6_Da = fVar6;
        in_XMM6_Db = fVar16;
        in_XMM7_Da = in_XMM5_Da;
        in_XMM7_Db = in_XMM5_Db;
        if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar24,(Il2CppObject *)pSVar33,(Il2CppObject *)pMVar32,MethodInfo_Void_Add);
          return (System_String_o *)pMVar39;
        }
      }
    }
  }
  uVar40 = il2cpp_runtime_helper_022b2c90();
  fVar1 = fVar9;
  fVar5 = fVar3;
  fVar16 = fVar14;
  fVar6 = fVar4;
  fVar17 = fVar15;
  fStack_210 = fVar10;
  fVar2 = fVar20;
  fVar12 = fVar21;
  fVar13 = UVar49.fields.z;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar17 = fVar15;
  }
  pMVar39 = __this_01;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)__this_01,method);
  lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar32 = extraout_RDX_03;
  if (g_data_057a6843 == '\0') {
    pMVar39 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar32 = extraout_RDX_04;
  }
  if (lVar22 != 0) {
    pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar5 = pUVar23->x;
    fVar16 = pUVar23->y;
    fVar6 = pUVar23->z;
    fVar17 = pUVar23->w;
    method = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    color_01.fields.g = fVar20;
    color_01.fields.r = fVar10;
    color_01.fields.a = UVar49.fields.z;
    color_01.fields.b = fVar21;
    UVar48.fields.z = fVar9;
    UVar48.fields.x = (float)(int)uVar40;
    UVar48.fields.y = (float)(int)((ulong)uVar40 >> 0x20);
    size.fields.y = fVar4;
    size.fields.x = fVar3;
    size.fields.z = fVar3;
    fVar12 = fVar3;
    pMVar32 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar39,1,UVar48,(UnityEngine_Quaternion_o)*pUVar23,size,
                         color_01,pMVar32);
    fVar1 = fVar9;
    fStack_210 = fVar3;
    fVar2 = fVar4;
    fVar13 = fVar14;
    in_XMM6_Da = fVar10;
    in_XMM6_Db = fVar20;
    in_XMM7_Da = fVar21;
    in_XMM7_Db = UVar49.fields.z;
    if (pMVar32 != (MethodInfo *)0x0) {
      method = __this_01;
      pMVar39 = pMVar32;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar32,(System_String_o *)__this_01,(MethodInfo *)0x0);
      fVar1 = fVar9;
      fStack_210 = fVar3;
      fVar2 = fVar4;
      fVar13 = fVar14;
      in_XMM6_Da = fVar10;
      in_XMM6_Db = fVar20;
      in_XMM7_Da = fVar21;
      in_XMM7_Db = UVar49.fields.z;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        pMVar39 = pMVar32;
        pSVar33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar32,(MethodInfo *)0x0);
        fVar1 = fVar9;
        fStack_210 = fVar3;
        fVar2 = fVar4;
        fVar13 = fVar14;
        in_XMM6_Da = fVar10;
        in_XMM6_Db = fVar20;
        in_XMM7_Da = fVar21;
        in_XMM7_Db = UVar49.fields.z;
        if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar24,(Il2CppObject *)pSVar33,(Il2CppObject *)pMVar32,MethodInfo_Void_Add);
          return (System_String_o *)__this_01;
        }
      }
    }
  }
  uVar40 = il2cpp_runtime_helper_022b2c90();
  UVar49.fields.z = fVar1;
  fVar9 = fVar5;
  fVar20 = fVar16;
  fVar10 = fVar6;
  fVar21 = fVar17;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar9 = fVar5;
    fVar20 = fVar16;
    fVar10 = fVar6;
    fVar21 = fVar17;
  }
  pUVar35 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar30 = UnityEngine_Object__op_Equality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar30 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar30 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pMVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar44 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
    if ((char)bVar30 == '\0') {
      if (pMVar39 != (MethodInfo *)0x0) {
        pUVar34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar39,(MethodInfo *)0x0);
        UVar45 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pMVar39,(MethodInfo *)0x0);
        uVar44 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
        UVar49.fields.z = UVar45.fields.z;
        if (pUVar34 != (UnityEngine_Transform_o *)0x0) {
          UVar45 = UnityEngine_Transform__TransformPoint(pUVar34,UVar45,(MethodInfo *)0x0);
          fVar16 = UVar45.fields.z;
          fVar5 = UnityEngine_CapsuleCollider__get_radius
                            ((UnityEngine_CapsuleCollider_o *)pMVar39,(MethodInfo *)0x0);
          UVar46 = UnityEngine_Transform__get_lossyScale(pUVar34,(MethodInfo *)0x0);
          UVar47 = UnityEngine_Transform__get_lossyScale(pUVar34,(MethodInfo *)0x0);
          fVar6 = UnityEngine_CapsuleCollider__get_height
                            ((UnityEngine_CapsuleCollider_o *)pMVar39,(MethodInfo *)0x0);
          UVar48 = UnityEngine_Transform__get_lossyScale(pUVar34,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar48.fields.x,UVar48.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar44 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar3 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar31 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)pMVar39,(MethodInfo *)0x0);
          if (iVar31 == 2) {
            UVar49 = UnityEngine_Transform__get_forward(pUVar34,(MethodInfo *)0x0);
            fVar3 = UVar49.fields.z;
            fStack_1e0 = UVar49.fields.x;
            fStack_1dc = UVar49.fields.y;
          }
          else if (iVar31 == 1) {
            UVar49 = UnityEngine_Transform__get_up(pUVar34,(MethodInfo *)0x0);
            fVar3 = UVar49.fields.z;
            fStack_1e0 = UVar49.fields.x;
            fStack_1dc = UVar49.fields.y;
          }
          else {
            fStack_1e0 = (float)uVar44;
            fStack_1dc = (float)((ulong)uVar44 >> 0x20);
            if (iVar31 == 0) {
              UVar49 = UnityEngine_Transform__get_right(pUVar34,(MethodInfo *)0x0);
              fVar3 = UVar49.fields.z;
              fStack_1e0 = UVar49.fields.x;
              fStack_1dc = UVar49.fields.y;
            }
          }
          __this_02 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_1dc;
          forward.fields.x = fStack_1e0;
          forward.fields.z = fVar3;
          Rotation = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar44 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
          UVar49.fields.z = Rotation.fields.z;
          fVar15 = Rotation.fields.w;
          fVar4 = Rotation.fields.x;
          fVar14 = Rotation.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_210 = UVar46.fields.x;
            if (fStack_210 <= UVar47.fields.z) {
              fStack_210 = UVar47.fields.z;
            }
            fStack_19c = UVar48.fields.y;
            fStack_210 = fVar5 * fStack_210;
            size_00.fields.z = fStack_210 + fStack_210;
            fVar2 = fVar6 * fStack_19c - size_00.fields.z;
            fVar5 = 0.0;
            if (0.0 <= fVar2) {
              fVar5 = fVar2;
            }
            color_02.fields.a = in_XMM1_Db;
            color_02.fields.b = fVar1;
            size_00.fields.y = fVar5 * 0.5;
            size_00.fields.x = size_00.fields.z;
            color_02.fields.r = (float)(int)uVar40;
            color_02.fields.g = (float)(int)((ulong)uVar40 >> 0x20);
            fVar2 = fVar16;
            fVar10 = UVar49.fields.z;
            uVar44 = uVar40;
            pUVar35 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (__this_02,2,UVar45,Rotation,size_00,color_02,method_00);
            pMVar32 = extraout_RDX_05;
            UVar49.fields.z = fVar2;
            fVar9 = fVar4;
            fVar20 = fVar14;
            fVar21 = fVar15;
            if (g_data_057a6932 == '\0') {
              __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar32 = extraout_RDX_06;
              UVar49.fields.z = fVar2;
              fVar9 = fVar4;
              fVar20 = fVar14;
              fVar21 = fVar15;
            }
            uVar11 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            in_XMM7_Da = (float)uVar11;
            in_XMM7_Db = (float)((ulong)uVar11 >> 0x20);
            fVar12 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fStack_210;
            lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar32 = extraout_RDX_07;
            }
            fVar13 = 0.0;
            fVar2 = extraout_XMM0_Db;
            if (lVar22 != 0) {
              fVar5 = fVar5 * 0.5 + fStack_210;
              fStack_1d0 = UVar45.fields.x;
              fStack_1cc = UVar45.fields.y;
              in_XMM7_Da = fStack_210 * in_XMM7_Da;
              fStack_210 = fStack_210 * in_XMM7_Db;
              position_00.fields.x = fStack_1d0 + fVar5 * fStack_1e0;
              position_00.fields.z = fVar16 + fVar5 * fVar3;
              size_01.fields.x = in_XMM7_Da + in_XMM7_Da;
              size_01.fields.y = fStack_210 + fStack_210;
              size_01.fields.z = fVar12 + fVar12;
              pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar7 = pUVar23->x;
              fVar18 = pUVar23->y;
              fVar8 = pUVar23->z;
              fVar19 = pUVar23->w;
              color_03.fields.a = in_XMM1_Db;
              color_03.fields.b = fVar1;
              position_00.fields.y = fStack_1cc + fStack_1dc * fVar5;
              color_03.fields.r = (float)(int)uVar40;
              color_03.fields.g = (float)(int)((ulong)uVar40 >> 0x20);
              fStack_210 = size_01.fields.x;
              fVar2 = size_01.fields.y;
              fVar12 = size_01.fields.z;
              in_XMM7_Da = fVar1;
              in_XMM7_Db = in_XMM1_Db;
              uVar44 = uVar40;
              __this = Utility_CustomDebug__SpawnPrimitiveObject
                                 (__this_02,0,position_00,(UnityEngine_Quaternion_o)*pUVar23,size_01,color_03,
                                  pMVar32);
              lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar32 = extraout_RDX_08;
              UVar49.fields.z = position_00.fields.z;
              fVar9 = fVar7;
              fVar20 = fVar18;
              fVar10 = fVar8;
              fVar21 = fVar19;
              if (g_data_057a6843 == '\0') {
                __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar32 = extraout_RDX_09;
                UVar49.fields.z = position_00.fields.z;
                fVar9 = fVar7;
                fVar20 = fVar18;
                fVar10 = fVar8;
                fVar21 = fVar19;
              }
              if (lVar22 != 0) {
                UVar49.fields.x = fStack_1d0 - fVar5 * fStack_1e0;
                UVar49.fields.z = fVar16 - fVar5 * fVar3;
                pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar9 = pUVar23->x;
                fVar20 = pUVar23->y;
                fVar10 = pUVar23->z;
                fVar21 = pUVar23->w;
                size_02.fields.y = size_01.fields.y;
                size_02.fields.x = size_01.fields.x;
                fVar13 = 0.0;
                color_04.fields.a = in_XMM1_Db;
                color_04.fields.b = fVar1;
                UVar49.fields.y = fStack_1cc - fStack_1dc * fVar5;
                size_02.fields.z = size_01.fields.z;
                color_04.fields.r = (float)(int)uVar40;
                color_04.fields.g = (float)(int)((ulong)uVar40 >> 0x20);
                uVar44 = uVar40;
                __this_00 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (__this_02,0,UVar49,(UnityEngine_Quaternion_o)*pUVar23,size_02,color_04,
                                       pMVar32);
                fStack_210 = size_01.fields.x;
                fVar2 = size_01.fields.y;
                fVar12 = size_01.fields.z;
                in_XMM7_Da = fVar1;
                in_XMM7_Db = in_XMM1_Db;
                if ((((__this != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar34 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
                     fStack_210 = size_01.fields.x, fVar2 = size_01.fields.y, fVar12 = size_01.fields.z,
                     in_XMM7_Da = fVar1, in_XMM7_Db = in_XMM1_Db, pUVar35 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar36 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar35,(MethodInfo *)0x0),
                    fStack_210 = size_01.fields.x, fVar2 = size_01.fields.y, fVar12 = size_01.fields.z,
                    in_XMM7_Da = fVar1, in_XMM7_Db = in_XMM1_Db, pUVar34 != (UnityEngine_Transform_o *)0x0))
                   && (UnityEngine_Transform__set_parent(pUVar34,pUVar36,(MethodInfo *)0x0),
                      fStack_210 = size_01.fields.x, fVar2 = size_01.fields.y, fVar12 = size_01.fields.z,
                      in_XMM7_Da = fVar1, in_XMM7_Db = in_XMM1_Db,
                      __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar34 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                  pUVar36 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar35,(MethodInfo *)0x0);
                  fStack_210 = size_01.fields.x;
                  fVar2 = size_01.fields.y;
                  fVar12 = size_01.fields.z;
                  in_XMM7_Da = fVar1;
                  in_XMM7_Db = in_XMM1_Db;
                  if (pUVar34 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar34,pUVar36,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar35,(System_String_o *)method,(MethodInfo *)0x0);
                    fStack_210 = size_01.fields.x;
                    fVar2 = size_01.fields.y;
                    fVar12 = size_01.fields.z;
                    in_XMM7_Da = fVar1;
                    in_XMM7_Db = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar24,(Il2CppObject *)method,(Il2CppObject *)pUVar35,MethodInfo_Void_Add);
                      return (System_String_o *)method;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar41 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar42 = (undefined4)uVar44;
      fVar1 = UVar49.fields.z;
      fVar5 = fVar9;
      fVar6 = fVar20;
      fVar16 = fVar10;
      fVar3 = fStack_210;
      fVar4 = fVar2;
      fVar14 = fVar12;
      fVar15 = fVar13;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar35 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar30 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar30 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar30);
      }
      pUVar25 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar25 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar37 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar37,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar37[1].klass = 0;
        if (pIVar37 != (Il2CppObject *)0x0) {
          pIVar37[2].klass = pIVar41;
          *(float *)&pIVar37[2].monitor = UVar49.fields.z;
          *(ulong *)((long)&pIVar37[2].monitor + 4) =
               CONCAT44(fVar20 + (float)((ulong)pIVar41 >> 0x20),fVar9 + SUB84(pIVar41,0));
          *(float *)((long)&pIVar37[3].klass + 4) = fVar10 + UVar49.fields.z;
          *(float *)&pIVar37[3].monitor = fStack_210;
          *(float *)((long)&pIVar37[3].monitor + 4) = fVar2;
          *(float *)&pIVar37[4].klass = fVar12;
          *(float *)((long)&pIVar37[4].klass + 4) = fVar13;
          *(undefined4 *)&pIVar37[4].monitor = uVar42;
          pSVar33 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar25,(System_Collections_IEnumerator_o *)pIVar37,(MethodInfo *)0x0);
          return pSVar33;
        }
      }
      pvVar27 = (void *)il2cpp_runtime_helper_022b2c90();
      uVar42 = (undefined4)uVar44;
      fVar2 = fVar1;
      fVar12 = fVar5;
      fVar13 = fVar6;
      fVar9 = fVar16;
      fVar10 = fVar3;
      fVar20 = fVar4;
      UVar49.fields.z = fVar14;
      fVar17 = fVar15;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pSVar33 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pSVar33,(MethodInfo *)0x0);
      (pSVar33->fields)._stringLength = 0;
      if (pSVar33 == (System_String_o *)0x0) {
        pIVar41 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
        uVar42 = (undefined4)uVar44;
        fVar1 = fVar2;
        fVar5 = fVar12;
        fVar6 = fVar13;
        fVar16 = fVar9;
        fVar3 = fVar10;
        fVar4 = fVar20;
        fVar14 = UVar49.fields.z;
        fVar15 = fVar17;
        if (g_data_057ae8a6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a6 = '\x01';
        }
        pUVar35 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar30 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar30 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_00,bVar30);
        }
        pUVar25 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (pUVar25 != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (g_data_057ae8ab == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
            g_data_057ae8ab = '\x01';
          }
          pIVar37 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
          System_Object___ctor(pIVar37,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar37[1].klass = 0;
          if (pIVar37 != (Il2CppObject *)0x0) {
            pIVar37[2].klass = pIVar41;
            *(float *)&pIVar37[2].monitor = fVar2;
            *(ulong *)((long)&pIVar37[2].monitor + 4) = CONCAT44(fVar13,fVar12);
            *(float *)((long)&pIVar37[3].klass + 4) = fVar9;
            *(float *)&pIVar37[3].monitor = fVar10;
            *(float *)((long)&pIVar37[3].monitor + 4) = fVar20;
            *(float *)&pIVar37[4].klass = UVar49.fields.z;
            *(float *)((long)&pIVar37[4].klass + 4) = fVar17;
            *(undefined4 *)&pIVar37[4].monitor = uVar42;
            pSVar33 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar25,(System_Collections_IEnumerator_o *)pIVar37,(MethodInfo *)0x0);
            return pSVar33;
          }
        }
        uVar40 = il2cpp_runtime_helper_022b2c90();
        fVar2 = fVar1;
        fVar12 = fVar5;
        fVar13 = fVar6;
        fVar9 = fVar16;
        fVar10 = fVar21;
        fVar20 = fVar3;
        if (g_data_057ae8a7 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a7 = '\x01';
        }
        pUVar35 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar31 = 0;
        bVar30 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar30 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_01,bVar30);
        }
        pUVar25 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (g_data_057a6843 == '\0') {
          pUVar35 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6843 = '\x01';
        }
        pvVar27 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar28 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057a6932 == '\0') {
          pUVar35 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6932 = '\x01';
        }
        if (pUVar25 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar26 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          uVar42 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          pUVar38 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          iVar31 = 0;
          pUVar35 = pUVar38;
          System_Object___ctor((Il2CppObject *)pUVar38,(MethodInfo *)0x0);
          *(undefined4 *)&(pUVar38->fields).m_CachedPtr = 0;
          if (pUVar38 != (UnityEngine_Object_o *)0x0) {
            pUVar38[1].monitor = pUVar25;
            il2cpp_runtime_helper_022b4080(&pUVar38[1].monitor,pUVar25);
            *(undefined4 *)&pUVar38[1].fields.m_CachedPtr = 3;
            *(undefined8 *)((long)&pUVar38[1].fields.m_CachedPtr + 4) = uVar40;
            *(float *)((long)&pUVar38[2].klass + 4) = fVar1;
            pUVar38[2].monitor = pvVar27;
            pUVar38[2].fields.m_CachedPtr = iVar28;
            pUVar38[3].klass = pUVar26;
            *(undefined4 *)&pUVar38[3].monitor = uVar42;
            *(float *)((long)&pUVar38[3].monitor + 4) = fVar5;
            *(float *)&pUVar38[3].fields.m_CachedPtr = fVar6;
            *(float *)((long)&pUVar38[3].fields.m_CachedPtr + 4) = fVar16;
            *(float *)&pUVar38[4].klass = fVar21;
            *(float *)((long)&pUVar38[4].klass + 4) = fVar3;
            pSVar33 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar25,(System_Collections_IEnumerator_o *)pUVar38,(MethodInfo *)0x0);
            return pSVar33;
          }
        }
        uVar40 = il2cpp_runtime_helper_022b2c90();
        uVar42 = (undefined4)uVar44;
        fVar5 = fVar2;
        fVar6 = fVar12;
        fVar16 = fVar9;
        fVar3 = fVar10;
        fVar21 = fVar20;
        UVar49.fields.z = fVar4;
        fVar17 = fVar14;
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pSVar33 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor((Il2CppObject *)pSVar33,(MethodInfo *)0x0);
        (pSVar33->fields)._stringLength = 0;
        if (pSVar33 == (System_String_o *)0x0) {
          uVar40 = il2cpp_runtime_helper_022b2c90();
          fVar1 = fVar5;
          fVar2 = fVar6;
          fVar12 = fVar16;
          fVar13 = fVar21;
          fVar4 = UVar49.fields.z;
          fVar14 = fVar17;
          if (g_data_057ae8a8 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8a8 = '\x01';
          }
          pUVar35 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar30 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar30 == '\0') {
            return (System_String_o *)CONCAT44(extraout_var_02,bVar30);
          }
          pIVar41 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pIVar41 != (Il2CppClass *)0x0) {
            pvVar27 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            pIVar29 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pIVar37 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            System_Object___ctor(pIVar37,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar37[1].klass = 0;
            if (pIVar37 != (Il2CppObject *)0x0) {
              pIVar37[2].klass = pIVar41;
              il2cpp_runtime_helper_022b4080(pIVar37 + 2,pIVar41);
              *(undefined4 *)&pIVar37[2].monitor = 0;
              *(undefined8 *)((long)&pIVar37[2].monitor + 4) = uVar40;
              *(float *)((long)&pIVar37[3].klass + 4) = fVar5;
              pIVar37[3].monitor = pvVar27;
              pIVar37[4].klass = pIVar29;
              pIVar37[4].monitor = (void *)CONCAT44(fVar6,fVar6);
              *(float *)&pIVar37[5].klass = fVar6;
              *(float *)((long)&pIVar37[5].klass + 4) = fVar16;
              *(float *)&pIVar37[5].monitor = fVar3;
              *(float *)((long)&pIVar37[5].monitor + 4) = fVar21;
              *(float *)&pIVar37[6].klass = UVar49.fields.z;
              *(float *)((long)&pIVar37[6].klass + 4) = fVar17;
              pSVar33 = (System_String_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)pIVar41,
                                   (System_Collections_IEnumerator_o *)pIVar37,(MethodInfo *)0x0);
              return pSVar33;
            }
          }
          uVar40 = il2cpp_runtime_helper_022b2c90();
          fVar5 = fVar1;
          fVar6 = fVar2;
          fVar16 = fVar12;
          fVar3 = fVar13;
          fVar9 = fVar4;
          fVar10 = fVar14;
          fVar20 = fVar15;
          uVar43 = uVar42;
          if (g_data_057ae8a9 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8a9 = '\x01';
          }
          pUVar35 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar30 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar30 == '\0') {
            return (System_String_o *)CONCAT44(extraout_var_03,bVar30);
          }
          pIVar41 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pIVar41 != (Il2CppClass *)0x0) {
            pvVar27 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            pIVar29 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pIVar37 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            System_Object___ctor(pIVar37,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar37[1].klass = 0;
            if (pIVar37 != (Il2CppObject *)0x0) {
              pIVar37[2].klass = pIVar41;
              il2cpp_runtime_helper_022b4080(pIVar37 + 2,pIVar41);
              *(undefined4 *)&pIVar37[2].monitor = 2;
              *(undefined8 *)((long)&pIVar37[2].monitor + 4) = uVar40;
              *(float *)((long)&pIVar37[3].klass + 4) = fVar1;
              pIVar37[3].monitor = pvVar27;
              pIVar37[4].klass = pIVar29;
              pIVar37[4].monitor = (void *)CONCAT44(fVar12,fVar2);
              *(float *)&pIVar37[5].klass = fVar2;
              *(float *)((long)&pIVar37[5].klass + 4) = fVar13;
              *(float *)&pIVar37[5].monitor = fVar4;
              *(float *)((long)&pIVar37[5].monitor + 4) = fVar14;
              *(float *)&pIVar37[6].klass = fVar15;
              *(undefined4 *)((long)&pIVar37[6].klass + 4) = uVar42;
              pSVar33 = (System_String_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)pIVar41,
                                   (System_Collections_IEnumerator_o *)pIVar37,(MethodInfo *)0x0);
              return pSVar33;
            }
          }
          uVar40 = il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae8aa == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8aa = '\x01';
          }
          pUVar35 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar42 = 0;
          bVar30 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar30 == '\0') {
            return (System_String_o *)CONCAT44(extraout_var_04,bVar30);
          }
          pUVar25 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            pUVar35 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6843 = '\x01';
          }
          if (pUVar25 != (UnityEngine_MonoBehaviour_o *)0x0) {
            pvVar27 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            iVar28 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pUVar38 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            uVar42 = 0;
            pUVar35 = pUVar38;
            System_Object___ctor((Il2CppObject *)pUVar38,(MethodInfo *)0x0);
            *(undefined4 *)&(pUVar38->fields).m_CachedPtr = 0;
            if (pUVar38 != (UnityEngine_Object_o *)0x0) {
              pUVar38[1].monitor = pUVar25;
              il2cpp_runtime_helper_022b4080(&pUVar38[1].monitor,pUVar25);
              *(undefined4 *)&pUVar38[1].fields.m_CachedPtr = 1;
              *(undefined8 *)((long)&pUVar38[1].fields.m_CachedPtr + 4) = uVar40;
              *(float *)((long)&pUVar38[2].klass + 4) = fVar5;
              pUVar38[2].monitor = pvVar27;
              pUVar38[2].fields.m_CachedPtr = iVar28;
              pUVar38[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar16,fVar6);
              *(float *)&pUVar38[3].monitor = fVar6;
              *(float *)((long)&pUVar38[3].monitor + 4) = fVar3;
              *(float *)&pUVar38[3].fields.m_CachedPtr = fVar9;
              *(float *)((long)&pUVar38[3].fields.m_CachedPtr + 4) = fVar10;
              *(float *)&pUVar38[4].klass = fVar20;
              *(undefined4 *)((long)&pUVar38[4].klass + 4) = uVar43;
              pSVar33 = (System_String_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  (pUVar25,(System_Collections_IEnumerator_o *)pUVar38,(MethodInfo *)0x0);
              return pSVar33;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)pUVar35,(MethodInfo *)0x0);
          *(undefined4 *)&(pUVar35->fields).m_CachedPtr = uVar42;
          return extraout_RAX;
        }
        pSVar33[1].monitor = pUVar35;
        il2cpp_runtime_helper_022b4080(&pSVar33[1].monitor,pUVar35);
        pSVar33[1].fields._stringLength = iVar31;
        *(undefined8 *)&pSVar33[1].fields._firstChar = uVar40;
        *(float *)((long)&pSVar33[2].klass + 4) = fVar2;
        *(float *)&pSVar33[2].monitor = fVar12;
        *(float *)((long)&pSVar33[2].monitor + 4) = fVar13;
        pSVar33[2].fields._stringLength = (int32_t)fVar9;
        *(float *)&pSVar33[2].fields._firstChar = fVar10;
        pSVar33[3].klass = (System_String_c *)CONCAT44(fVar4,fVar20);
        *(float *)&pSVar33[3].monitor = fVar14;
        *(undefined8 *)((long)&pSVar33[3].monitor + 4) = uVar44;
        *(float *)&pSVar33[3].fields._firstChar = in_XMM7_Da;
        *(float *)&pSVar33[4].klass = in_XMM7_Db;
        *(float *)((long)&pSVar33[4].klass + 4) = fVar1;
        return pSVar33;
      }
      pSVar33[1].monitor = pvVar27;
      pSVar33[1].fields._stringLength = (int32_t)fVar1;
      *(ulong *)&pSVar33[1].fields._firstChar = CONCAT44(fVar6,fVar5);
      *(float *)((long)&pSVar33[2].klass + 4) = fVar16;
      *(float *)&pSVar33[2].monitor = fVar3;
      *(float *)((long)&pSVar33[2].monitor + 4) = fVar4;
      pSVar33[2].fields._stringLength = (int32_t)fVar14;
      *(float *)&pSVar33[2].fields._firstChar = fVar15;
      *(undefined4 *)&pSVar33[3].klass = uVar42;
      return pSVar33;
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$SpawnCylinder
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCylinder (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x4482c50

System_String_o *
Utility_CustomDebug__SpawnCylinder
          (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar9;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long lVar18;
  UnityEngine_Quaternion_Fields *pUVar19;
  System_Collections_Generic_Dictionary_object__object__o *pSVar20;
  UnityEngine_MonoBehaviour_o *pUVar21;
  UnityEngine_Object_c *pUVar22;
  void *pvVar23;
  intptr_t iVar24;
  Il2CppClass *pIVar25;
  bool_conflict bVar26;
  int32_t iVar27;
  MethodInfo *pMVar28;
  System_String_o *pSVar29;
  UnityEngine_Transform_o *pUVar30;
  UnityEngine_Object_o *pUVar31;
  UnityEngine_GameObject_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar32;
  undefined4 extraout_var;
  Il2CppObject *pIVar33;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar34;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *__this_01;
  MethodInfo *__this_02;
  Utility_CustomDebug_o *__this_03;
  undefined8 uVar35;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar36;
  float fVar37;
  float in_XMM1_Db;
  float in_XMM2_Db;
  float in_XMM3_Db;
  float fVar38;
  float fVar39;
  float fVar40;
  float in_XMM6_Da;
  undefined4 uVar41;
  undefined4 uVar42;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Vector3_o UVar47;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Quaternion_o Rotation;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  float fStack_1a8;
  float fStack_178;
  float fStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_134;
  undefined8 uVar43;
  
  fVar13 = color.fields.b;
  fVar37 = color.fields.a;
  fVar4 = color.fields.r;
  fVar12 = color.fields.g;
  fVar3 = position.fields.z;
  fVar7 = fVar3;
  fVar1 = radius;
  fVar10 = in_XMM2_Db;
  fVar2 = height;
  fVar11 = in_XMM3_Db;
  fVar8 = fVar4;
  fVar16 = fVar12;
  fVar17 = fVar13;
  UVar44.fields.z = fVar37;
  if (g_data_057ae8a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a2 = '\x01';
    fVar11 = in_XMM3_Db;
  }
  __this_01 = (MethodInfo *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  lVar18 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar28 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    __this_01 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar28 = extraout_RDX_00;
  }
  if (lVar18 != 0) {
    pUVar19 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pUVar19->x;
    fVar10 = pUVar19->y;
    fVar2 = pUVar19->z;
    fVar11 = pUVar19->w;
    method = (MethodInfo *)0x2;
    in_XMM1_Db = 0.0;
    UVar45.fields.y = height;
    UVar45.fields.x = radius;
    UVar45.fields.z = radius;
    fVar17 = radius;
    pMVar28 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)__this_01,2,position,(UnityEngine_Quaternion_o)*pUVar19,
                         UVar45,color,pMVar28);
    fVar7 = fVar3;
    fVar8 = radius;
    fVar16 = height;
    UVar44.fields.z = in_XMM2_Db;
    in_XMM6_Da = fVar4;
    in_XMM6_Db = fVar12;
    in_XMM7_Da = fVar13;
    in_XMM7_Db = fVar37;
    if (pMVar28 != (MethodInfo *)0x0) {
      method = (MethodInfo *)name;
      __this_01 = pMVar28;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar28,name,(MethodInfo *)0x0);
      fVar7 = fVar3;
      fVar8 = radius;
      fVar16 = height;
      UVar44.fields.z = in_XMM2_Db;
      in_XMM6_Da = fVar4;
      in_XMM6_Db = fVar12;
      in_XMM7_Da = fVar13;
      in_XMM7_Db = fVar37;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        __this_01 = pMVar28;
        pSVar29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar28,(MethodInfo *)0x0);
        fVar7 = fVar3;
        fVar8 = radius;
        fVar16 = height;
        UVar44.fields.z = in_XMM2_Db;
        in_XMM6_Da = fVar4;
        in_XMM6_Db = fVar12;
        in_XMM7_Da = fVar13;
        in_XMM7_Db = fVar37;
        if (pSVar20 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar20,(Il2CppObject *)pSVar29,(Il2CppObject *)pMVar28,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
  uVar35 = il2cpp_runtime_helper_022b2c90();
  fVar37 = fVar7;
  fVar3 = fVar1;
  fVar12 = fVar10;
  fVar4 = fVar2;
  fVar13 = fVar11;
  fStack_1a8 = fVar8;
  fVar38 = fVar16;
  fVar39 = fVar17;
  fVar40 = UVar44.fields.z;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar13 = fVar11;
  }
  __this_02 = __this_01;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)__this_01,method);
  lVar18 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar28 = extraout_RDX_01;
  if (g_data_057a6843 == '\0') {
    __this_02 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar28 = extraout_RDX_02;
  }
  if (lVar18 != 0) {
    pUVar19 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar3 = pUVar19->x;
    fVar12 = pUVar19->y;
    fVar4 = pUVar19->z;
    fVar13 = pUVar19->w;
    method = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    color_00.fields.g = fVar16;
    color_00.fields.r = fVar8;
    color_00.fields.a = UVar44.fields.z;
    color_00.fields.b = fVar17;
    UVar46.fields.z = fVar7;
    UVar46.fields.x = (float)(int)uVar35;
    UVar46.fields.y = (float)(int)((ulong)uVar35 >> 0x20);
    UVar47.fields.y = fVar2;
    UVar47.fields.x = fVar1;
    UVar47.fields.z = fVar1;
    fVar39 = fVar1;
    pMVar28 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)__this_02,1,UVar46,(UnityEngine_Quaternion_o)*pUVar19,UVar47
                         ,color_00,pMVar28);
    fVar37 = fVar7;
    fStack_1a8 = fVar1;
    fVar38 = fVar2;
    fVar40 = fVar10;
    in_XMM6_Da = fVar8;
    in_XMM6_Db = fVar16;
    in_XMM7_Da = fVar17;
    in_XMM7_Db = UVar44.fields.z;
    if (pMVar28 != (MethodInfo *)0x0) {
      method = __this_01;
      __this_02 = pMVar28;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar28,(System_String_o *)__this_01,(MethodInfo *)0x0);
      fVar37 = fVar7;
      fStack_1a8 = fVar1;
      fVar38 = fVar2;
      fVar40 = fVar10;
      in_XMM6_Da = fVar8;
      in_XMM6_Db = fVar16;
      in_XMM7_Da = fVar17;
      in_XMM7_Db = UVar44.fields.z;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        __this_02 = pMVar28;
        pSVar29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar28,(MethodInfo *)0x0);
        fVar37 = fVar7;
        fStack_1a8 = fVar1;
        fVar38 = fVar2;
        fVar40 = fVar10;
        in_XMM6_Da = fVar8;
        in_XMM6_Db = fVar16;
        in_XMM7_Da = fVar17;
        in_XMM7_Db = UVar44.fields.z;
        if (pSVar20 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar20,(Il2CppObject *)pSVar29,(Il2CppObject *)pMVar28,MethodInfo_Void_Add);
          return (System_String_o *)__this_01;
        }
      }
    }
  }
  uVar35 = il2cpp_runtime_helper_022b2c90();
  UVar44.fields.z = fVar37;
  fVar7 = fVar3;
  fVar16 = fVar12;
  fVar8 = fVar4;
  fVar17 = fVar13;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar7 = fVar3;
    fVar16 = fVar12;
    fVar8 = fVar4;
    fVar17 = fVar13;
  }
  pUVar31 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar26 = UnityEngine_Object__op_Equality(pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar26 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar26 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar43 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
    if ((char)bVar26 == '\0') {
      if (__this_02 != (MethodInfo *)0x0) {
        pUVar30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
        ;
        UVar44 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)__this_02,(MethodInfo *)0x0);
        uVar43 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
        if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
          UVar45 = UnityEngine_Transform__TransformPoint(pUVar30,UVar44,(MethodInfo *)0x0);
          fVar10 = UVar45.fields.z;
          fVar1 = UnityEngine_CapsuleCollider__get_radius
                            ((UnityEngine_CapsuleCollider_o *)__this_02,(MethodInfo *)0x0);
          UVar46 = UnityEngine_Transform__get_lossyScale(pUVar30,(MethodInfo *)0x0);
          UVar47 = UnityEngine_Transform__get_lossyScale(pUVar30,(MethodInfo *)0x0);
          fVar2 = UnityEngine_CapsuleCollider__get_height
                            ((UnityEngine_CapsuleCollider_o *)__this_02,(MethodInfo *)0x0);
          UVar48 = UnityEngine_Transform__get_lossyScale(pUVar30,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar48.fields.x,UVar48.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar43 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar11 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar27 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)__this_02,(MethodInfo *)0x0);
          if (iVar27 == 2) {
            UVar44 = UnityEngine_Transform__get_forward(pUVar30,(MethodInfo *)0x0);
            fVar11 = UVar44.fields.z;
            fStack_178 = UVar44.fields.x;
            fStack_174 = UVar44.fields.y;
          }
          else if (iVar27 == 1) {
            UVar44 = UnityEngine_Transform__get_up(pUVar30,(MethodInfo *)0x0);
            fVar11 = UVar44.fields.z;
            fStack_178 = UVar44.fields.x;
            fStack_174 = UVar44.fields.y;
          }
          else {
            fStack_178 = (float)uVar43;
            fStack_174 = (float)((ulong)uVar43 >> 0x20);
            if (iVar27 == 0) {
              UVar44 = UnityEngine_Transform__get_right(pUVar30,(MethodInfo *)0x0);
              fVar11 = UVar44.fields.z;
              fStack_178 = UVar44.fields.x;
              fStack_174 = UVar44.fields.y;
            }
          }
          __this_03 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_174;
          forward.fields.x = fStack_178;
          forward.fields.z = fVar11;
          Rotation = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar43 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
          UVar44.fields.z = Rotation.fields.z;
          fVar12 = Rotation.fields.w;
          fVar3 = Rotation.fields.x;
          fVar4 = Rotation.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_1a8 = UVar46.fields.x;
            if (fStack_1a8 <= UVar47.fields.z) {
              fStack_1a8 = UVar47.fields.z;
            }
            fStack_134 = UVar48.fields.y;
            fStack_1a8 = fVar1 * fStack_1a8;
            UVar48.fields.z = fStack_1a8 + fStack_1a8;
            fVar2 = fVar2 * fStack_134 - UVar48.fields.z;
            fVar1 = 0.0;
            if (0.0 <= fVar2) {
              fVar1 = fVar2;
            }
            color_01.fields.a = in_XMM1_Db;
            color_01.fields.b = fVar37;
            UVar48.fields.y = fVar1 * 0.5;
            UVar48.fields.x = UVar48.fields.z;
            color_01.fields.r = (float)(int)uVar35;
            color_01.fields.g = (float)(int)((ulong)uVar35 >> 0x20);
            fVar2 = fVar10;
            fVar8 = UVar44.fields.z;
            uVar43 = uVar35;
            pUVar31 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (__this_03,2,UVar45,Rotation,UVar48,color_01,method_00);
            pMVar28 = extraout_RDX_03;
            UVar44.fields.z = fVar2;
            fVar7 = fVar3;
            fVar16 = fVar4;
            fVar17 = fVar12;
            if (g_data_057a6932 == '\0') {
              __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar28 = extraout_RDX_04;
              UVar44.fields.z = fVar2;
              fVar7 = fVar3;
              fVar16 = fVar4;
              fVar17 = fVar12;
            }
            uVar9 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            in_XMM7_Da = (float)uVar9;
            in_XMM7_Db = (float)((ulong)uVar9 >> 0x20);
            fVar39 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fStack_1a8;
            lVar18 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar28 = extraout_RDX_05;
            }
            fVar40 = 0.0;
            fVar38 = extraout_XMM0_Db;
            if (lVar18 != 0) {
              fVar1 = fVar1 * 0.5 + fStack_1a8;
              fStack_168 = UVar45.fields.x;
              fStack_164 = UVar45.fields.y;
              in_XMM7_Da = fStack_1a8 * in_XMM7_Da;
              fStack_1a8 = fStack_1a8 * in_XMM7_Db;
              position_00.fields.x = fStack_168 + fVar1 * fStack_178;
              position_00.fields.z = fVar10 + fVar1 * fVar11;
              size.fields.x = in_XMM7_Da + in_XMM7_Da;
              size.fields.y = fStack_1a8 + fStack_1a8;
              size.fields.z = fVar39 + fVar39;
              pUVar19 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar5 = pUVar19->x;
              fVar14 = pUVar19->y;
              fVar6 = pUVar19->z;
              fVar15 = pUVar19->w;
              color_02.fields.a = in_XMM1_Db;
              color_02.fields.b = fVar37;
              position_00.fields.y = fStack_164 + fStack_174 * fVar1;
              color_02.fields.r = (float)(int)uVar35;
              color_02.fields.g = (float)(int)((ulong)uVar35 >> 0x20);
              fStack_1a8 = size.fields.x;
              fVar38 = size.fields.y;
              fVar39 = size.fields.z;
              in_XMM7_Da = fVar37;
              in_XMM7_Db = in_XMM1_Db;
              uVar43 = uVar35;
              __this = Utility_CustomDebug__SpawnPrimitiveObject
                                 (__this_03,0,position_00,(UnityEngine_Quaternion_o)*pUVar19,size,color_02,
                                  pMVar28);
              lVar18 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar28 = extraout_RDX_06;
              UVar44.fields.z = position_00.fields.z;
              fVar7 = fVar5;
              fVar16 = fVar14;
              fVar8 = fVar6;
              fVar17 = fVar15;
              if (g_data_057a6843 == '\0') {
                __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar28 = extraout_RDX_07;
                UVar44.fields.z = position_00.fields.z;
                fVar7 = fVar5;
                fVar16 = fVar14;
                fVar8 = fVar6;
                fVar17 = fVar15;
              }
              if (lVar18 != 0) {
                UVar44.fields.x = fStack_168 - fVar1 * fStack_178;
                UVar44.fields.z = fVar10 - fVar1 * fVar11;
                pUVar19 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar7 = pUVar19->x;
                fVar16 = pUVar19->y;
                fVar8 = pUVar19->z;
                fVar17 = pUVar19->w;
                size_00.fields.y = size.fields.y;
                size_00.fields.x = size.fields.x;
                fVar40 = 0.0;
                color_03.fields.a = in_XMM1_Db;
                color_03.fields.b = fVar37;
                UVar44.fields.y = fStack_164 - fStack_174 * fVar1;
                size_00.fields.z = size.fields.z;
                color_03.fields.r = (float)(int)uVar35;
                color_03.fields.g = (float)(int)((ulong)uVar35 >> 0x20);
                uVar43 = uVar35;
                __this_00 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (__this_03,0,UVar44,(UnityEngine_Quaternion_o)*pUVar19,size_00,color_03,
                                       pMVar28);
                fStack_1a8 = size.fields.x;
                fVar38 = size.fields.y;
                fVar39 = size.fields.z;
                in_XMM7_Da = fVar37;
                in_XMM7_Db = in_XMM1_Db;
                if ((((__this != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar30 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
                     fStack_1a8 = size.fields.x, fVar38 = size.fields.y, fVar39 = size.fields.z,
                     in_XMM7_Da = fVar37, in_XMM7_Db = in_XMM1_Db, pUVar31 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar32 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar31,(MethodInfo *)0x0),
                    fStack_1a8 = size.fields.x, fVar38 = size.fields.y, fVar39 = size.fields.z,
                    in_XMM7_Da = fVar37, in_XMM7_Db = in_XMM1_Db, pUVar30 != (UnityEngine_Transform_o *)0x0))
                   && (UnityEngine_Transform__set_parent(pUVar30,pUVar32,(MethodInfo *)0x0),
                      fStack_1a8 = size.fields.x, fVar38 = size.fields.y, fVar39 = size.fields.z,
                      in_XMM7_Da = fVar37, in_XMM7_Db = in_XMM1_Db,
                      __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar30 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                  pUVar32 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar31,(MethodInfo *)0x0);
                  fStack_1a8 = size.fields.x;
                  fVar38 = size.fields.y;
                  fVar39 = size.fields.z;
                  in_XMM7_Da = fVar37;
                  in_XMM7_Db = in_XMM1_Db;
                  if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar30,pUVar32,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar31,(System_String_o *)method,(MethodInfo *)0x0);
                    fStack_1a8 = size.fields.x;
                    fVar38 = size.fields.y;
                    fVar39 = size.fields.z;
                    in_XMM7_Da = fVar37;
                    in_XMM7_Db = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar20 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar20,(Il2CppObject *)method,(Il2CppObject *)pUVar31,MethodInfo_Void_Add);
                      return (System_String_o *)method;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar36 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar41 = (undefined4)uVar43;
      fVar1 = UVar44.fields.z;
      fVar2 = fVar7;
      fVar10 = fVar16;
      fVar11 = fVar8;
      fVar3 = fStack_1a8;
      fVar4 = fVar38;
      fVar12 = fVar39;
      fVar13 = fVar40;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar31 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar26 = UnityEngine_Object__op_Inequality(pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar26 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar26);
      }
      pUVar21 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar21 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar33,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar33[1].klass = 0;
        if (pIVar33 != (Il2CppObject *)0x0) {
          pIVar33[2].klass = pIVar36;
          *(float *)&pIVar33[2].monitor = UVar44.fields.z;
          *(ulong *)((long)&pIVar33[2].monitor + 4) =
               CONCAT44(fVar16 + (float)((ulong)pIVar36 >> 0x20),fVar7 + SUB84(pIVar36,0));
          *(float *)((long)&pIVar33[3].klass + 4) = fVar8 + UVar44.fields.z;
          *(float *)&pIVar33[3].monitor = fStack_1a8;
          *(float *)((long)&pIVar33[3].monitor + 4) = fVar38;
          *(float *)&pIVar33[4].klass = fVar39;
          *(float *)((long)&pIVar33[4].klass + 4) = fVar40;
          *(undefined4 *)&pIVar33[4].monitor = uVar41;
          pSVar29 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar21,(System_Collections_IEnumerator_o *)pIVar33,(MethodInfo *)0x0);
          return pSVar29;
        }
      }
      pvVar23 = (void *)il2cpp_runtime_helper_022b2c90();
      uVar41 = (undefined4)uVar43;
      fVar7 = fVar1;
      fVar8 = fVar2;
      fVar16 = fVar10;
      UVar44.fields.z = fVar11;
      fVar37 = fVar3;
      fVar38 = fVar4;
      fVar39 = fVar12;
      fVar40 = fVar13;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pSVar29 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pSVar29,(MethodInfo *)0x0);
      (pSVar29->fields)._stringLength = 0;
      if (pSVar29 != (System_String_o *)0x0) {
        pSVar29[1].monitor = pvVar23;
        pSVar29[1].fields._stringLength = (int32_t)fVar1;
        *(ulong *)&pSVar29[1].fields._firstChar = CONCAT44(fVar10,fVar2);
        *(float *)((long)&pSVar29[2].klass + 4) = fVar11;
        *(float *)&pSVar29[2].monitor = fVar3;
        *(float *)((long)&pSVar29[2].monitor + 4) = fVar4;
        pSVar29[2].fields._stringLength = (int32_t)fVar12;
        *(float *)&pSVar29[2].fields._firstChar = fVar13;
        *(undefined4 *)&pSVar29[3].klass = uVar41;
        return pSVar29;
      }
      pIVar36 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar41 = (undefined4)uVar43;
      fVar1 = fVar7;
      fVar2 = fVar8;
      fVar10 = fVar16;
      fVar11 = UVar44.fields.z;
      fVar3 = fVar37;
      fVar4 = fVar38;
      fVar12 = fVar39;
      fVar13 = fVar40;
      if (g_data_057ae8a6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a6 = '\x01';
      }
      pUVar31 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar26 = UnityEngine_Object__op_Inequality(pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar26 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar26);
      }
      pUVar21 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar21 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar33,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar33[1].klass = 0;
        if (pIVar33 != (Il2CppObject *)0x0) {
          pIVar33[2].klass = pIVar36;
          *(float *)&pIVar33[2].monitor = fVar7;
          *(ulong *)((long)&pIVar33[2].monitor + 4) = CONCAT44(fVar16,fVar8);
          *(float *)((long)&pIVar33[3].klass + 4) = UVar44.fields.z;
          *(float *)&pIVar33[3].monitor = fVar37;
          *(float *)((long)&pIVar33[3].monitor + 4) = fVar38;
          *(float *)&pIVar33[4].klass = fVar39;
          *(float *)((long)&pIVar33[4].klass + 4) = fVar40;
          *(undefined4 *)&pIVar33[4].monitor = uVar41;
          pSVar29 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar21,(System_Collections_IEnumerator_o *)pIVar33,(MethodInfo *)0x0);
          return pSVar29;
        }
      }
      uVar35 = il2cpp_runtime_helper_022b2c90();
      fVar7 = fVar1;
      fVar8 = fVar2;
      fVar16 = fVar10;
      UVar44.fields.z = fVar11;
      fVar37 = fVar17;
      fVar38 = fVar3;
      if (g_data_057ae8a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a7 = '\x01';
      }
      pUVar31 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar27 = 0;
      bVar26 = UnityEngine_Object__op_Inequality(pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar26 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar26);
      }
      pUVar21 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar31 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      pvVar23 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar24 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057a6932 == '\0') {
        pUVar31 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar21 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar22 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        uVar41 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar34 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        iVar27 = 0;
        pUVar31 = pUVar34;
        System_Object___ctor((Il2CppObject *)pUVar34,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar34->fields).m_CachedPtr = 0;
        if (pUVar34 != (UnityEngine_Object_o *)0x0) {
          pUVar34[1].monitor = pUVar21;
          il2cpp_runtime_helper_022b4080(&pUVar34[1].monitor,pUVar21);
          *(undefined4 *)&pUVar34[1].fields.m_CachedPtr = 3;
          *(undefined8 *)((long)&pUVar34[1].fields.m_CachedPtr + 4) = uVar35;
          *(float *)((long)&pUVar34[2].klass + 4) = fVar1;
          pUVar34[2].monitor = pvVar23;
          pUVar34[2].fields.m_CachedPtr = iVar24;
          pUVar34[3].klass = pUVar22;
          *(undefined4 *)&pUVar34[3].monitor = uVar41;
          *(float *)((long)&pUVar34[3].monitor + 4) = fVar2;
          *(float *)&pUVar34[3].fields.m_CachedPtr = fVar10;
          *(float *)((long)&pUVar34[3].fields.m_CachedPtr + 4) = fVar11;
          *(float *)&pUVar34[4].klass = fVar17;
          *(float *)((long)&pUVar34[4].klass + 4) = fVar3;
          pSVar29 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar21,(System_Collections_IEnumerator_o *)pUVar34,(MethodInfo *)0x0);
          return pSVar29;
        }
      }
      uVar35 = il2cpp_runtime_helper_022b2c90();
      uVar41 = (undefined4)uVar43;
      fVar2 = fVar7;
      fVar10 = fVar8;
      fVar11 = UVar44.fields.z;
      fVar17 = fVar37;
      fVar3 = fVar38;
      fVar39 = fVar4;
      fVar40 = fVar12;
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      pSVar29 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor((Il2CppObject *)pSVar29,(MethodInfo *)0x0);
      (pSVar29->fields)._stringLength = 0;
      if (pSVar29 != (System_String_o *)0x0) {
        pSVar29[1].monitor = pUVar31;
        il2cpp_runtime_helper_022b4080(&pSVar29[1].monitor,pUVar31);
        pSVar29[1].fields._stringLength = iVar27;
        *(undefined8 *)&pSVar29[1].fields._firstChar = uVar35;
        *(float *)((long)&pSVar29[2].klass + 4) = fVar7;
        *(float *)&pSVar29[2].monitor = fVar8;
        *(float *)((long)&pSVar29[2].monitor + 4) = fVar16;
        pSVar29[2].fields._stringLength = (int32_t)UVar44.fields.z;
        *(float *)&pSVar29[2].fields._firstChar = fVar37;
        pSVar29[3].klass = (System_String_c *)CONCAT44(fVar4,fVar38);
        *(float *)&pSVar29[3].monitor = fVar12;
        *(undefined8 *)((long)&pSVar29[3].monitor + 4) = uVar43;
        *(float *)&pSVar29[3].fields._firstChar = in_XMM7_Da;
        *(float *)&pSVar29[4].klass = in_XMM7_Db;
        *(float *)((long)&pSVar29[4].klass + 4) = fVar1;
        return pSVar29;
      }
      uVar35 = il2cpp_runtime_helper_022b2c90();
      fVar1 = fVar2;
      fVar7 = fVar10;
      fVar8 = fVar11;
      fVar16 = fVar3;
      UVar44.fields.z = fVar39;
      fVar4 = fVar40;
      if (g_data_057ae8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a8 = '\x01';
      }
      pUVar31 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar26 = UnityEngine_Object__op_Inequality(pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar26 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_02,bVar26);
      }
      pIVar36 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar36 != (Il2CppClass *)0x0) {
        pvVar23 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar25 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar33,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar33[1].klass = 0;
        if (pIVar33 != (Il2CppObject *)0x0) {
          pIVar33[2].klass = pIVar36;
          il2cpp_runtime_helper_022b4080(pIVar33 + 2,pIVar36);
          *(undefined4 *)&pIVar33[2].monitor = 0;
          *(undefined8 *)((long)&pIVar33[2].monitor + 4) = uVar35;
          *(float *)((long)&pIVar33[3].klass + 4) = fVar2;
          pIVar33[3].monitor = pvVar23;
          pIVar33[4].klass = pIVar25;
          pIVar33[4].monitor = (void *)CONCAT44(fVar10,fVar10);
          *(float *)&pIVar33[5].klass = fVar10;
          *(float *)((long)&pIVar33[5].klass + 4) = fVar11;
          *(float *)&pIVar33[5].monitor = fVar17;
          *(float *)((long)&pIVar33[5].monitor + 4) = fVar3;
          *(float *)&pIVar33[6].klass = fVar39;
          *(float *)((long)&pIVar33[6].klass + 4) = fVar40;
          pSVar29 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar36,
                               (System_Collections_IEnumerator_o *)pIVar33,(MethodInfo *)0x0);
          return pSVar29;
        }
      }
      uVar35 = il2cpp_runtime_helper_022b2c90();
      fVar2 = fVar1;
      fVar10 = fVar7;
      fVar11 = fVar8;
      fVar17 = fVar16;
      fVar3 = UVar44.fields.z;
      fVar12 = fVar4;
      fVar37 = fVar13;
      uVar42 = uVar41;
      if (g_data_057ae8a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a9 = '\x01';
      }
      pUVar31 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar26 = UnityEngine_Object__op_Inequality(pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar26 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_03,bVar26);
      }
      pIVar36 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar36 != (Il2CppClass *)0x0) {
        pvVar23 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar25 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar33,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar33[1].klass = 0;
        if (pIVar33 != (Il2CppObject *)0x0) {
          pIVar33[2].klass = pIVar36;
          il2cpp_runtime_helper_022b4080(pIVar33 + 2,pIVar36);
          *(undefined4 *)&pIVar33[2].monitor = 2;
          *(undefined8 *)((long)&pIVar33[2].monitor + 4) = uVar35;
          *(float *)((long)&pIVar33[3].klass + 4) = fVar1;
          pIVar33[3].monitor = pvVar23;
          pIVar33[4].klass = pIVar25;
          pIVar33[4].monitor = (void *)CONCAT44(fVar8,fVar7);
          *(float *)&pIVar33[5].klass = fVar7;
          *(float *)((long)&pIVar33[5].klass + 4) = fVar16;
          *(float *)&pIVar33[5].monitor = UVar44.fields.z;
          *(float *)((long)&pIVar33[5].monitor + 4) = fVar4;
          *(float *)&pIVar33[6].klass = fVar13;
          *(undefined4 *)((long)&pIVar33[6].klass + 4) = uVar41;
          pSVar29 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar36,
                               (System_Collections_IEnumerator_o *)pIVar33,(MethodInfo *)0x0);
          return pSVar29;
        }
      }
      uVar35 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae8aa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8aa = '\x01';
      }
      pUVar31 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar41 = 0;
      bVar26 = UnityEngine_Object__op_Inequality(pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar26 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_04,bVar26);
      }
      pUVar21 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar31 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      if (pUVar21 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pvVar23 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar24 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar34 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        uVar41 = 0;
        pUVar31 = pUVar34;
        System_Object___ctor((Il2CppObject *)pUVar34,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar34->fields).m_CachedPtr = 0;
        if (pUVar34 != (UnityEngine_Object_o *)0x0) {
          pUVar34[1].monitor = pUVar21;
          il2cpp_runtime_helper_022b4080(&pUVar34[1].monitor,pUVar21);
          *(undefined4 *)&pUVar34[1].fields.m_CachedPtr = 1;
          *(undefined8 *)((long)&pUVar34[1].fields.m_CachedPtr + 4) = uVar35;
          *(float *)((long)&pUVar34[2].klass + 4) = fVar2;
          pUVar34[2].monitor = pvVar23;
          pUVar34[2].fields.m_CachedPtr = iVar24;
          pUVar34[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar11,fVar10);
          *(float *)&pUVar34[3].monitor = fVar10;
          *(float *)((long)&pUVar34[3].monitor + 4) = fVar17;
          *(float *)&pUVar34[3].fields.m_CachedPtr = fVar3;
          *(float *)((long)&pUVar34[3].fields.m_CachedPtr + 4) = fVar12;
          *(float *)&pUVar34[4].klass = fVar37;
          *(undefined4 *)((long)&pUVar34[4].klass + 4) = uVar42;
          pSVar29 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar21,(System_Collections_IEnumerator_o *)pUVar34,(MethodInfo *)0x0);
          return pSVar29;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar31,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar31->fields).m_CachedPtr = uVar41;
      return extraout_RAX;
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$SpawnCapsule
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCapsule (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x4482d90

System_String_o *
Utility_CustomDebug__SpawnCapsule
          (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined8 uVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  UnityEngine_Quaternion_Fields *pUVar15;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  UnityEngine_MonoBehaviour_o *pUVar17;
  UnityEngine_Object_c *pUVar18;
  void *pvVar19;
  intptr_t iVar20;
  Il2CppClass *pIVar21;
  bool_conflict bVar22;
  int32_t iVar23;
  Utility_CustomDebug_o *__this;
  System_String_o *pSVar24;
  UnityEngine_Transform_o *pUVar25;
  UnityEngine_Object_o *pUVar26;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar27;
  undefined4 extraout_var;
  Il2CppObject *pIVar28;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar29;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar30;
  Utility_CustomDebug_o *pUVar31;
  undefined8 uVar32;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar33;
  float fVar34;
  float fVar35;
  float in_XMM1_Db;
  float in_XMM2_Db;
  float in_XMM3_Db;
  float fVar36;
  float fVar37;
  float in_XMM6_Da;
  undefined4 uVar38;
  undefined4 uVar39;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o size;
  UnityEngine_Quaternion_o Rotation;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  float fStack_130;
  float fStack_100;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_bc;
  undefined8 uVar40;
  
  fVar13 = color.fields.b;
  UVar41.fields.z = color.fields.a;
  fVar6 = color.fields.r;
  fVar12 = color.fields.g;
  fVar5 = position.fields.z;
  fVar34 = fVar5;
  fVar1 = radius;
  fVar8 = in_XMM2_Db;
  fVar2 = height;
  fVar9 = in_XMM3_Db;
  fStack_130 = fVar6;
  fVar35 = fVar12;
  fVar36 = fVar13;
  fVar37 = UVar41.fields.z;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar9 = in_XMM3_Db;
  }
  pUVar31 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  lVar14 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar30 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    pUVar31 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar30 = extraout_RDX_00;
  }
  if (lVar14 != 0) {
    pUVar15 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pUVar15->x;
    fVar8 = pUVar15->y;
    fVar2 = pUVar15->z;
    fVar9 = pUVar15->w;
    method = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    UVar42.fields.y = height;
    UVar42.fields.x = radius;
    UVar42.fields.z = radius;
    fVar36 = radius;
    __this = (Utility_CustomDebug_o *)
             Utility_CustomDebug__SpawnPrimitiveObject
                       (pUVar31,1,position,(UnityEngine_Quaternion_o)*pUVar15,UVar42,color,pMVar30);
    fVar34 = fVar5;
    fStack_130 = radius;
    fVar35 = height;
    fVar37 = in_XMM2_Db;
    in_XMM6_Da = fVar6;
    in_XMM6_Db = fVar12;
    in_XMM7_Da = fVar13;
    in_XMM7_Db = UVar41.fields.z;
    if (__this != (Utility_CustomDebug_o *)0x0) {
      method = (MethodInfo *)name;
      pUVar31 = __this;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,name,(MethodInfo *)0x0);
      fVar34 = fVar5;
      fStack_130 = radius;
      fVar35 = height;
      fVar37 = in_XMM2_Db;
      in_XMM6_Da = fVar6;
      in_XMM6_Db = fVar12;
      in_XMM7_Da = fVar13;
      in_XMM7_Db = UVar41.fields.z;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method = (MethodInfo *)0x0;
        pUVar31 = __this;
        pSVar24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        fVar34 = fVar5;
        fStack_130 = radius;
        fVar35 = height;
        fVar37 = in_XMM2_Db;
        in_XMM6_Da = fVar6;
        in_XMM6_Db = fVar12;
        in_XMM7_Da = fVar13;
        in_XMM7_Db = UVar41.fields.z;
        if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar16,(Il2CppObject *)pSVar24,(Il2CppObject *)__this,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
  uVar32 = il2cpp_runtime_helper_022b2c90();
  UVar41.fields.z = fVar34;
  fVar5 = fVar1;
  fVar12 = fVar8;
  fVar6 = fVar2;
  fVar13 = fVar9;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar5 = fVar1;
    fVar12 = fVar8;
    fVar6 = fVar2;
    fVar13 = fVar9;
  }
  pUVar26 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar22 = UnityEngine_Object__op_Equality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar22 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar40 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
    if ((char)bVar22 == '\0') {
      if (pUVar31 != (Utility_CustomDebug_o *)0x0) {
        pUVar25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar31,(MethodInfo *)0x0);
        UVar41 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pUVar31,(MethodInfo *)0x0);
        uVar40 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
        if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
          UVar42 = UnityEngine_Transform__TransformPoint(pUVar25,UVar41,(MethodInfo *)0x0);
          fVar8 = UVar42.fields.z;
          fVar1 = UnityEngine_CapsuleCollider__get_radius
                            ((UnityEngine_CapsuleCollider_o *)pUVar31,(MethodInfo *)0x0);
          UVar43 = UnityEngine_Transform__get_lossyScale(pUVar25,(MethodInfo *)0x0);
          UVar44 = UnityEngine_Transform__get_lossyScale(pUVar25,(MethodInfo *)0x0);
          fVar2 = UnityEngine_CapsuleCollider__get_height
                            ((UnityEngine_CapsuleCollider_o *)pUVar31,(MethodInfo *)0x0);
          UVar45 = UnityEngine_Transform__get_lossyScale(pUVar25,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar45.fields.x,UVar45.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar40 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar9 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar23 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)pUVar31,(MethodInfo *)0x0);
          if (iVar23 == 2) {
            UVar41 = UnityEngine_Transform__get_forward(pUVar25,(MethodInfo *)0x0);
            fVar9 = UVar41.fields.z;
            fStack_100 = UVar41.fields.x;
            fStack_fc = UVar41.fields.y;
          }
          else if (iVar23 == 1) {
            UVar41 = UnityEngine_Transform__get_up(pUVar25,(MethodInfo *)0x0);
            fVar9 = UVar41.fields.z;
            fStack_100 = UVar41.fields.x;
            fStack_fc = UVar41.fields.y;
          }
          else {
            fStack_100 = (float)uVar40;
            fStack_fc = (float)((ulong)uVar40 >> 0x20);
            if (iVar23 == 0) {
              UVar41 = UnityEngine_Transform__get_right(pUVar25,(MethodInfo *)0x0);
              fVar9 = UVar41.fields.z;
              fStack_100 = UVar41.fields.x;
              fStack_fc = UVar41.fields.y;
            }
          }
          pUVar31 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_fc;
          forward.fields.x = fStack_100;
          forward.fields.z = fVar9;
          Rotation = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar40 = CONCAT44(in_XMM6_Db,in_XMM6_Da);
          UVar41.fields.z = Rotation.fields.z;
          fVar10 = Rotation.fields.w;
          fVar3 = Rotation.fields.x;
          fVar4 = Rotation.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_130 = UVar43.fields.x;
            if (fStack_130 <= UVar44.fields.z) {
              fStack_130 = UVar44.fields.z;
            }
            fStack_bc = UVar45.fields.y;
            fStack_130 = fVar1 * fStack_130;
            UVar43.fields.z = fStack_130 + fStack_130;
            fVar2 = fVar2 * fStack_bc - UVar43.fields.z;
            fVar1 = 0.0;
            if (0.0 <= fVar2) {
              fVar1 = fVar2;
            }
            color_00.fields.a = in_XMM1_Db;
            color_00.fields.b = fVar34;
            UVar43.fields.y = fVar1 * 0.5;
            UVar43.fields.x = UVar43.fields.z;
            color_00.fields.r = (float)(int)uVar32;
            color_00.fields.g = (float)(int)((ulong)uVar32 >> 0x20);
            fVar2 = fVar8;
            fVar6 = UVar41.fields.z;
            uVar40 = uVar32;
            pUVar26 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (pUVar31,2,UVar42,Rotation,UVar43,color_00,method_00);
            pMVar30 = extraout_RDX_01;
            UVar41.fields.z = fVar2;
            fVar5 = fVar3;
            fVar12 = fVar4;
            fVar13 = fVar10;
            if (g_data_057a6932 == '\0') {
              pUVar31 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar30 = extraout_RDX_02;
              UVar41.fields.z = fVar2;
              fVar5 = fVar3;
              fVar12 = fVar4;
              fVar13 = fVar10;
            }
            uVar7 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            in_XMM7_Da = (float)uVar7;
            in_XMM7_Db = (float)((ulong)uVar7 >> 0x20);
            fVar36 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fStack_130;
            lVar14 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              pUVar31 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar30 = extraout_RDX_03;
            }
            fVar37 = 0.0;
            fVar35 = extraout_XMM0_Db;
            if (lVar14 != 0) {
              fVar1 = fVar1 * 0.5 + fStack_130;
              fStack_f0 = UVar42.fields.x;
              fStack_ec = UVar42.fields.y;
              in_XMM7_Da = fStack_130 * in_XMM7_Da;
              fStack_130 = fStack_130 * in_XMM7_Db;
              UVar44.fields.x = fStack_f0 + fVar1 * fStack_100;
              UVar44.fields.z = fVar8 + fVar1 * fVar9;
              UVar45.fields.x = in_XMM7_Da + in_XMM7_Da;
              UVar45.fields.y = fStack_130 + fStack_130;
              UVar45.fields.z = fVar36 + fVar36;
              pUVar15 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar3 = pUVar15->x;
              fVar10 = pUVar15->y;
              fVar4 = pUVar15->z;
              fVar11 = pUVar15->w;
              color_01.fields.a = in_XMM1_Db;
              color_01.fields.b = fVar34;
              UVar44.fields.y = fStack_ec + fStack_fc * fVar1;
              color_01.fields.r = (float)(int)uVar32;
              color_01.fields.g = (float)(int)((ulong)uVar32 >> 0x20);
              fStack_130 = UVar45.fields.x;
              fVar35 = UVar45.fields.y;
              fVar36 = UVar45.fields.z;
              in_XMM7_Da = fVar34;
              in_XMM7_Db = in_XMM1_Db;
              uVar40 = uVar32;
              __this_00 = Utility_CustomDebug__SpawnPrimitiveObject
                                    (pUVar31,0,UVar44,(UnityEngine_Quaternion_o)*pUVar15,UVar45,color_01,
                                     pMVar30);
              lVar14 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar30 = extraout_RDX_04;
              UVar41.fields.z = UVar44.fields.z;
              fVar5 = fVar3;
              fVar12 = fVar10;
              fVar6 = fVar4;
              fVar13 = fVar11;
              if (g_data_057a6843 == '\0') {
                pUVar31 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar30 = extraout_RDX_05;
                UVar41.fields.z = UVar44.fields.z;
                fVar5 = fVar3;
                fVar12 = fVar10;
                fVar6 = fVar4;
                fVar13 = fVar11;
              }
              if (lVar14 != 0) {
                UVar41.fields.x = fStack_f0 - fVar1 * fStack_100;
                UVar41.fields.z = fVar8 - fVar1 * fVar9;
                pUVar15 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar5 = pUVar15->x;
                fVar12 = pUVar15->y;
                fVar6 = pUVar15->z;
                fVar13 = pUVar15->w;
                size.fields.y = UVar45.fields.y;
                size.fields.x = UVar45.fields.x;
                fVar37 = 0.0;
                color_02.fields.a = in_XMM1_Db;
                color_02.fields.b = fVar34;
                UVar41.fields.y = fStack_ec - fStack_fc * fVar1;
                size.fields.z = UVar45.fields.z;
                color_02.fields.r = (float)(int)uVar32;
                color_02.fields.g = (float)(int)((ulong)uVar32 >> 0x20);
                uVar40 = uVar32;
                __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (pUVar31,0,UVar41,(UnityEngine_Quaternion_o)*pUVar15,size,color_02,
                                       pMVar30);
                fStack_130 = UVar45.fields.x;
                fVar35 = UVar45.fields.y;
                fVar36 = UVar45.fields.z;
                in_XMM7_Da = fVar34;
                in_XMM7_Db = in_XMM1_Db;
                if ((((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar25 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
                     fStack_130 = UVar45.fields.x, fVar35 = UVar45.fields.y, fVar36 = UVar45.fields.z,
                     in_XMM7_Da = fVar34, in_XMM7_Db = in_XMM1_Db, pUVar26 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar27 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar26,(MethodInfo *)0x0),
                    fStack_130 = UVar45.fields.x, fVar35 = UVar45.fields.y, fVar36 = UVar45.fields.z,
                    in_XMM7_Da = fVar34, in_XMM7_Db = in_XMM1_Db, pUVar25 != (UnityEngine_Transform_o *)0x0))
                   && (UnityEngine_Transform__set_parent(pUVar25,pUVar27,(MethodInfo *)0x0),
                      fStack_130 = UVar45.fields.x, fVar35 = UVar45.fields.y, fVar36 = UVar45.fields.z,
                      in_XMM7_Da = fVar34, in_XMM7_Db = in_XMM1_Db,
                      __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar25 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  pUVar27 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar26,(MethodInfo *)0x0);
                  fStack_130 = UVar45.fields.x;
                  fVar35 = UVar45.fields.y;
                  fVar36 = UVar45.fields.z;
                  in_XMM7_Da = fVar34;
                  in_XMM7_Db = in_XMM1_Db;
                  if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar25,pUVar27,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar26,(System_String_o *)method,(MethodInfo *)0x0);
                    fStack_130 = UVar45.fields.x;
                    fVar35 = UVar45.fields.y;
                    fVar36 = UVar45.fields.z;
                    in_XMM7_Da = fVar34;
                    in_XMM7_Db = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar16,(Il2CppObject *)method,(Il2CppObject *)pUVar26,MethodInfo_Void_Add);
                      return (System_String_o *)method;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar38 = (undefined4)uVar40;
      fVar1 = UVar41.fields.z;
      fVar2 = fVar5;
      fVar8 = fVar12;
      fVar9 = fVar6;
      fVar34 = fStack_130;
      fVar3 = fVar35;
      fVar4 = fVar36;
      fVar10 = fVar37;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar26 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar22 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar22 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar22);
      }
      pUVar17 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar17 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar28,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar28[1].klass = 0;
        if (pIVar28 != (Il2CppObject *)0x0) {
          pIVar28[2].klass = pIVar33;
          *(float *)&pIVar28[2].monitor = UVar41.fields.z;
          *(ulong *)((long)&pIVar28[2].monitor + 4) =
               CONCAT44(fVar12 + (float)((ulong)pIVar33 >> 0x20),fVar5 + SUB84(pIVar33,0));
          *(float *)((long)&pIVar28[3].klass + 4) = fVar6 + UVar41.fields.z;
          *(float *)&pIVar28[3].monitor = fStack_130;
          *(float *)((long)&pIVar28[3].monitor + 4) = fVar35;
          *(float *)&pIVar28[4].klass = fVar36;
          *(float *)((long)&pIVar28[4].klass + 4) = fVar37;
          *(undefined4 *)&pIVar28[4].monitor = uVar38;
          pSVar24 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar17,(System_Collections_IEnumerator_o *)pIVar28,(MethodInfo *)0x0);
          return pSVar24;
        }
      }
      pvVar19 = (void *)il2cpp_runtime_helper_022b2c90();
      uVar38 = (undefined4)uVar40;
      fVar35 = fVar1;
      fVar36 = fVar2;
      fVar37 = fVar8;
      fVar5 = fVar9;
      fVar6 = fVar34;
      fVar12 = fVar3;
      UVar41.fields.z = fVar4;
      fVar11 = fVar10;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pSVar24 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pSVar24,(MethodInfo *)0x0);
      (pSVar24->fields)._stringLength = 0;
      if (pSVar24 == (System_String_o *)0x0) {
        pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
        uVar38 = (undefined4)uVar40;
        fVar1 = fVar35;
        fVar2 = fVar36;
        fVar8 = fVar37;
        fVar9 = fVar5;
        fVar34 = fVar6;
        fVar3 = fVar12;
        fVar4 = UVar41.fields.z;
        fVar10 = fVar11;
        if (g_data_057ae8a6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a6 = '\x01';
        }
        pUVar26 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar22 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar22 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_00,bVar22);
        }
        pUVar17 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (pUVar17 != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (g_data_057ae8ab == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
            g_data_057ae8ab = '\x01';
          }
          pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
          System_Object___ctor(pIVar28,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar28[1].klass = 0;
          if (pIVar28 != (Il2CppObject *)0x0) {
            pIVar28[2].klass = pIVar33;
            *(float *)&pIVar28[2].monitor = fVar35;
            *(ulong *)((long)&pIVar28[2].monitor + 4) = CONCAT44(fVar37,fVar36);
            *(float *)((long)&pIVar28[3].klass + 4) = fVar5;
            *(float *)&pIVar28[3].monitor = fVar6;
            *(float *)((long)&pIVar28[3].monitor + 4) = fVar12;
            *(float *)&pIVar28[4].klass = UVar41.fields.z;
            *(float *)((long)&pIVar28[4].klass + 4) = fVar11;
            *(undefined4 *)&pIVar28[4].monitor = uVar38;
            pSVar24 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar17,(System_Collections_IEnumerator_o *)pIVar28,(MethodInfo *)0x0);
            return pSVar24;
          }
        }
        uVar32 = il2cpp_runtime_helper_022b2c90();
        fVar35 = fVar1;
        fVar36 = fVar2;
        fVar37 = fVar8;
        fVar5 = fVar9;
        fVar6 = fVar13;
        fVar12 = fVar34;
        if (g_data_057ae8a7 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a7 = '\x01';
        }
        pUVar26 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar23 = 0;
        bVar22 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar22 == '\0') {
          return (System_String_o *)CONCAT44(extraout_var_01,bVar22);
        }
        pUVar17 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (g_data_057a6843 == '\0') {
          pUVar26 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6843 = '\x01';
        }
        pvVar19 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar20 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057a6932 == '\0') {
          pUVar26 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6932 = '\x01';
        }
        if (pUVar17 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar18 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          uVar38 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          pUVar29 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          iVar23 = 0;
          pUVar26 = pUVar29;
          System_Object___ctor((Il2CppObject *)pUVar29,(MethodInfo *)0x0);
          *(undefined4 *)&(pUVar29->fields).m_CachedPtr = 0;
          if (pUVar29 != (UnityEngine_Object_o *)0x0) {
            pUVar29[1].monitor = pUVar17;
            il2cpp_runtime_helper_022b4080(&pUVar29[1].monitor,pUVar17);
            *(undefined4 *)&pUVar29[1].fields.m_CachedPtr = 3;
            *(undefined8 *)((long)&pUVar29[1].fields.m_CachedPtr + 4) = uVar32;
            *(float *)((long)&pUVar29[2].klass + 4) = fVar1;
            pUVar29[2].monitor = pvVar19;
            pUVar29[2].fields.m_CachedPtr = iVar20;
            pUVar29[3].klass = pUVar18;
            *(undefined4 *)&pUVar29[3].monitor = uVar38;
            *(float *)((long)&pUVar29[3].monitor + 4) = fVar2;
            *(float *)&pUVar29[3].fields.m_CachedPtr = fVar8;
            *(float *)((long)&pUVar29[3].fields.m_CachedPtr + 4) = fVar9;
            *(float *)&pUVar29[4].klass = fVar13;
            *(float *)((long)&pUVar29[4].klass + 4) = fVar34;
            pSVar24 = (System_String_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar17,(System_Collections_IEnumerator_o *)pUVar29,(MethodInfo *)0x0);
            return pSVar24;
          }
        }
        uVar32 = il2cpp_runtime_helper_022b2c90();
        uVar38 = (undefined4)uVar40;
        fVar2 = fVar35;
        fVar8 = fVar36;
        fVar9 = fVar5;
        fVar34 = fVar6;
        fVar13 = fVar12;
        UVar41.fields.z = fVar3;
        fVar11 = fVar4;
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pSVar24 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor((Il2CppObject *)pSVar24,(MethodInfo *)0x0);
        (pSVar24->fields)._stringLength = 0;
        if (pSVar24 == (System_String_o *)0x0) {
          uVar32 = il2cpp_runtime_helper_022b2c90();
          fVar1 = fVar2;
          fVar35 = fVar8;
          fVar36 = fVar9;
          fVar37 = fVar13;
          fVar5 = UVar41.fields.z;
          fVar6 = fVar11;
          if (g_data_057ae8a8 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8a8 = '\x01';
          }
          pUVar26 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar22 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar22 == '\0') {
            return (System_String_o *)CONCAT44(extraout_var_02,bVar22);
          }
          pIVar33 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pIVar33 != (Il2CppClass *)0x0) {
            pvVar19 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            pIVar21 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            System_Object___ctor(pIVar28,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar28[1].klass = 0;
            if (pIVar28 != (Il2CppObject *)0x0) {
              pIVar28[2].klass = pIVar33;
              il2cpp_runtime_helper_022b4080(pIVar28 + 2,pIVar33);
              *(undefined4 *)&pIVar28[2].monitor = 0;
              *(undefined8 *)((long)&pIVar28[2].monitor + 4) = uVar32;
              *(float *)((long)&pIVar28[3].klass + 4) = fVar2;
              pIVar28[3].monitor = pvVar19;
              pIVar28[4].klass = pIVar21;
              pIVar28[4].monitor = (void *)CONCAT44(fVar8,fVar8);
              *(float *)&pIVar28[5].klass = fVar8;
              *(float *)((long)&pIVar28[5].klass + 4) = fVar9;
              *(float *)&pIVar28[5].monitor = fVar34;
              *(float *)((long)&pIVar28[5].monitor + 4) = fVar13;
              *(float *)&pIVar28[6].klass = UVar41.fields.z;
              *(float *)((long)&pIVar28[6].klass + 4) = fVar11;
              pSVar24 = (System_String_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)pIVar33,
                                   (System_Collections_IEnumerator_o *)pIVar28,(MethodInfo *)0x0);
              return pSVar24;
            }
          }
          uVar32 = il2cpp_runtime_helper_022b2c90();
          fVar2 = fVar1;
          fVar8 = fVar35;
          fVar9 = fVar36;
          fVar34 = fVar37;
          fVar12 = fVar5;
          fVar13 = fVar6;
          UVar41.fields.z = fVar10;
          uVar39 = uVar38;
          if (g_data_057ae8a9 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8a9 = '\x01';
          }
          pUVar26 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar22 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar22 == '\0') {
            return (System_String_o *)CONCAT44(extraout_var_03,bVar22);
          }
          pIVar33 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pIVar33 != (Il2CppClass *)0x0) {
            pvVar19 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            pIVar21 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            System_Object___ctor(pIVar28,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar28[1].klass = 0;
            if (pIVar28 != (Il2CppObject *)0x0) {
              pIVar28[2].klass = pIVar33;
              il2cpp_runtime_helper_022b4080(pIVar28 + 2,pIVar33);
              *(undefined4 *)&pIVar28[2].monitor = 2;
              *(undefined8 *)((long)&pIVar28[2].monitor + 4) = uVar32;
              *(float *)((long)&pIVar28[3].klass + 4) = fVar1;
              pIVar28[3].monitor = pvVar19;
              pIVar28[4].klass = pIVar21;
              pIVar28[4].monitor = (void *)CONCAT44(fVar36,fVar35);
              *(float *)&pIVar28[5].klass = fVar35;
              *(float *)((long)&pIVar28[5].klass + 4) = fVar37;
              *(float *)&pIVar28[5].monitor = fVar5;
              *(float *)((long)&pIVar28[5].monitor + 4) = fVar6;
              *(float *)&pIVar28[6].klass = fVar10;
              *(undefined4 *)((long)&pIVar28[6].klass + 4) = uVar38;
              pSVar24 = (System_String_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)pIVar33,
                                   (System_Collections_IEnumerator_o *)pIVar28,(MethodInfo *)0x0);
              return pSVar24;
            }
          }
          uVar32 = il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae8aa == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8aa = '\x01';
          }
          pUVar26 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar38 = 0;
          bVar22 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar22 == '\0') {
            return (System_String_o *)CONCAT44(extraout_var_04,bVar22);
          }
          pUVar17 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            pUVar26 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6843 = '\x01';
          }
          if (pUVar17 != (UnityEngine_MonoBehaviour_o *)0x0) {
            pvVar19 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            iVar20 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pUVar29 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            uVar38 = 0;
            pUVar26 = pUVar29;
            System_Object___ctor((Il2CppObject *)pUVar29,(MethodInfo *)0x0);
            *(undefined4 *)&(pUVar29->fields).m_CachedPtr = 0;
            if (pUVar29 != (UnityEngine_Object_o *)0x0) {
              pUVar29[1].monitor = pUVar17;
              il2cpp_runtime_helper_022b4080(&pUVar29[1].monitor,pUVar17);
              *(undefined4 *)&pUVar29[1].fields.m_CachedPtr = 1;
              *(undefined8 *)((long)&pUVar29[1].fields.m_CachedPtr + 4) = uVar32;
              *(float *)((long)&pUVar29[2].klass + 4) = fVar2;
              pUVar29[2].monitor = pvVar19;
              pUVar29[2].fields.m_CachedPtr = iVar20;
              pUVar29[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar9,fVar8);
              *(float *)&pUVar29[3].monitor = fVar8;
              *(float *)((long)&pUVar29[3].monitor + 4) = fVar34;
              *(float *)&pUVar29[3].fields.m_CachedPtr = fVar12;
              *(float *)((long)&pUVar29[3].fields.m_CachedPtr + 4) = fVar13;
              *(float *)&pUVar29[4].klass = UVar41.fields.z;
              *(undefined4 *)((long)&pUVar29[4].klass + 4) = uVar39;
              pSVar24 = (System_String_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  (pUVar17,(System_Collections_IEnumerator_o *)pUVar29,(MethodInfo *)0x0);
              return pSVar24;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)pUVar26,(MethodInfo *)0x0);
          *(undefined4 *)&(pUVar26->fields).m_CachedPtr = uVar38;
          return extraout_RAX;
        }
        pSVar24[1].monitor = pUVar26;
        il2cpp_runtime_helper_022b4080(&pSVar24[1].monitor,pUVar26);
        pSVar24[1].fields._stringLength = iVar23;
        *(undefined8 *)&pSVar24[1].fields._firstChar = uVar32;
        *(float *)((long)&pSVar24[2].klass + 4) = fVar35;
        *(float *)&pSVar24[2].monitor = fVar36;
        *(float *)((long)&pSVar24[2].monitor + 4) = fVar37;
        pSVar24[2].fields._stringLength = (int32_t)fVar5;
        *(float *)&pSVar24[2].fields._firstChar = fVar6;
        pSVar24[3].klass = (System_String_c *)CONCAT44(fVar3,fVar12);
        *(float *)&pSVar24[3].monitor = fVar4;
        *(undefined8 *)((long)&pSVar24[3].monitor + 4) = uVar40;
        *(float *)&pSVar24[3].fields._firstChar = in_XMM7_Da;
        *(float *)&pSVar24[4].klass = in_XMM7_Db;
        *(float *)((long)&pSVar24[4].klass + 4) = fVar1;
        return pSVar24;
      }
      pSVar24[1].monitor = pvVar19;
      pSVar24[1].fields._stringLength = (int32_t)fVar1;
      *(ulong *)&pSVar24[1].fields._firstChar = CONCAT44(fVar8,fVar2);
      *(float *)((long)&pSVar24[2].klass + 4) = fVar9;
      *(float *)&pSVar24[2].monitor = fVar34;
      *(float *)((long)&pSVar24[2].monitor + 4) = fVar3;
      pSVar24[2].fields._stringLength = (int32_t)fVar4;
      *(float *)&pSVar24[2].fields._firstChar = fVar10;
      *(undefined4 *)&pSVar24[3].klass = uVar38;
      return pSVar24;
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$SpawnCapsuleCollder
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCapsuleCollder (UnityEngine_CapsuleCollider_o* capsule, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x4482ed0

System_String_o *
Utility_CustomDebug__SpawnCapsuleCollder
          (UnityEngine_CapsuleCollider_o *capsule,UnityEngine_Color_o color,System_String_o *name,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  UnityEngine_Quaternion_Fields *pUVar11;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_MonoBehaviour_o *pUVar12;
  UnityEngine_Object_c *pUVar13;
  void *pvVar14;
  intptr_t iVar15;
  Il2CppClass *pIVar16;
  bool_conflict bVar17;
  int32_t iVar18;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Object_o *pUVar20;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar21;
  undefined4 extraout_var;
  Il2CppObject *pIVar22;
  System_String_o *pSVar23;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar24;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  System_String_o *extraout_RAX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar25;
  Utility_CustomDebug_o *__this_02;
  float fVar26;
  float extraout_XMM0_Db;
  float fVar28;
  float fVar30;
  Il2CppClass *pIVar27;
  float fVar31;
  float in_XMM2_Da;
  float in_XMM2_Db;
  float in_XMM3_Da;
  float fVar32;
  float in_XMM3_Db;
  float fVar33;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM5_Da;
  undefined4 in_XMM5_Db;
  undefined4 uVar34;
  undefined4 uVar35;
  float in_XMM6_Da;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o UVar37;
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o forward;
  UnityEngine_Quaternion_o Rotation;
  float fStack_b8;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_44;
  float fVar29;
  
  fVar28 = color.fields.b;
  UVar36.fields.z = fVar28;
  fVar3 = in_XMM2_Da;
  fVar8 = in_XMM2_Db;
  fVar4 = in_XMM3_Da;
  fVar9 = in_XMM3_Db;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar3 = in_XMM2_Da;
    fVar8 = in_XMM2_Db;
    fVar4 = in_XMM3_Da;
    fVar9 = in_XMM3_Db;
  }
  pUVar20 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar17 = UnityEngine_Object__op_Equality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar17 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)capsule,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar17 == '\0') {
      if (capsule != (UnityEngine_CapsuleCollider_o *)0x0) {
        pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)capsule,(MethodInfo *)0x0);
        UVar36 = UnityEngine_CapsuleCollider__get_center(capsule,(MethodInfo *)0x0);
        if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
          UVar37 = UnityEngine_Transform__TransformPoint(pUVar19,UVar36,(MethodInfo *)0x0);
          fVar29 = UVar37.fields.z;
          fVar1 = UnityEngine_CapsuleCollider__get_radius(capsule,(MethodInfo *)0x0);
          UVar38 = UnityEngine_Transform__get_lossyScale(pUVar19,(MethodInfo *)0x0);
          UVar39 = UnityEngine_Transform__get_lossyScale(pUVar19,(MethodInfo *)0x0);
          fVar26 = UnityEngine_CapsuleCollider__get_height(capsule,(MethodInfo *)0x0);
          UVar40 = UnityEngine_Transform__get_lossyScale(pUVar19,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar40.fields.x,UVar40.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar30 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar18 = UnityEngine_CapsuleCollider__get_direction(capsule,(MethodInfo *)0x0);
          if (iVar18 == 2) {
            UVar36 = UnityEngine_Transform__get_forward(pUVar19,(MethodInfo *)0x0);
            fVar30 = UVar36.fields.z;
            fStack_88 = UVar36.fields.x;
            fStack_84 = UVar36.fields.y;
          }
          else if (iVar18 == 1) {
            UVar36 = UnityEngine_Transform__get_up(pUVar19,(MethodInfo *)0x0);
            fVar30 = UVar36.fields.z;
            fStack_88 = UVar36.fields.x;
            fStack_84 = UVar36.fields.y;
          }
          else {
            fStack_88 = (float)uVar5;
            fStack_84 = (float)((ulong)uVar5 >> 0x20);
            if (iVar18 == 0) {
              UVar36 = UnityEngine_Transform__get_right(pUVar19,(MethodInfo *)0x0);
              fVar30 = UVar36.fields.z;
              fStack_88 = UVar36.fields.x;
              fStack_84 = UVar36.fields.y;
            }
          }
          __this_02 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_84;
          forward.fields.x = fStack_88;
          forward.fields.z = fVar30;
          Rotation = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          UVar36.fields.z = Rotation.fields.z;
          fVar7 = Rotation.fields.w;
          fVar2 = Rotation.fields.x;
          fVar6 = Rotation.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_b8 = UVar38.fields.x;
            if (fStack_b8 <= UVar39.fields.z) {
              fStack_b8 = UVar39.fields.z;
            }
            fStack_44 = UVar40.fields.y;
            in_XMM4_Da = fVar1 * fStack_b8;
            UVar38.fields.z = in_XMM4_Da + in_XMM4_Da;
            fVar3 = fVar26 * fStack_44 - UVar38.fields.z;
            fVar1 = 0.0;
            if (0.0 <= fVar3) {
              fVar1 = fVar3;
            }
            fVar26 = color.fields.r;
            fVar33 = color.fields.g;
            UVar38.fields.y = fVar1 * 0.5;
            UVar38.fields.x = UVar38.fields.z;
            fVar31 = fVar29;
            fVar4 = UVar36.fields.z;
            in_XMM6_Da = fVar26;
            in_XMM6_Db = fVar33;
            pUVar20 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (__this_02,2,UVar37,Rotation,UVar38,color,method_00);
            pMVar25 = extraout_RDX;
            UVar36.fields.z = fVar31;
            fVar3 = fVar2;
            fVar8 = fVar6;
            fVar9 = fVar7;
            if (g_data_057a6932 == '\0') {
              __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar25 = extraout_RDX_00;
              UVar36.fields.z = fVar31;
              fVar3 = fVar2;
              fVar8 = fVar6;
              fVar9 = fVar7;
            }
            uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            in_XMM7_Da = (float)uVar5;
            in_XMM7_Db = (float)((ulong)uVar5 >> 0x20);
            in_XMM5_Da = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * in_XMM4_Da;
            lVar10 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar25 = extraout_RDX_01;
            }
            in_XMM5_Db = 0;
            in_XMM4_Db = extraout_XMM0_Db;
            if (lVar10 != 0) {
              fVar32 = fVar1 * 0.5 + in_XMM4_Da;
              fStack_78 = UVar37.fields.x;
              fStack_74 = UVar37.fields.y;
              in_XMM7_Da = in_XMM4_Da * in_XMM7_Da;
              in_XMM4_Da = in_XMM4_Da * in_XMM7_Db;
              UVar37.fields.x = fStack_78 + fVar32 * fStack_88;
              UVar37.fields.z = fVar29 + fVar32 * fVar30;
              UVar39.fields.x = in_XMM7_Da + in_XMM7_Da;
              UVar39.fields.y = in_XMM4_Da + in_XMM4_Da;
              UVar39.fields.z = in_XMM5_Da + in_XMM5_Da;
              pUVar11 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar1 = pUVar11->x;
              fVar6 = pUVar11->y;
              fVar2 = pUVar11->z;
              fVar7 = pUVar11->w;
              fVar31 = color.fields.a;
              UVar37.fields.y = fStack_74 + fStack_84 * fVar32;
              in_XMM4_Da = UVar39.fields.x;
              in_XMM4_Db = UVar39.fields.y;
              in_XMM5_Da = UVar39.fields.z;
              in_XMM6_Da = fVar26;
              in_XMM6_Db = fVar33;
              in_XMM7_Da = fVar28;
              in_XMM7_Db = fVar31;
              __this_00 = Utility_CustomDebug__SpawnPrimitiveObject
                                    (__this_02,0,UVar37,(UnityEngine_Quaternion_o)*pUVar11,UVar39,color,
                                     pMVar25);
              lVar10 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar25 = extraout_RDX_02;
              UVar36.fields.z = UVar37.fields.z;
              fVar3 = fVar1;
              fVar8 = fVar6;
              fVar4 = fVar2;
              fVar9 = fVar7;
              if (g_data_057a6843 == '\0') {
                __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar25 = extraout_RDX_03;
                UVar36.fields.z = UVar37.fields.z;
                fVar3 = fVar1;
                fVar8 = fVar6;
                fVar4 = fVar2;
                fVar9 = fVar7;
              }
              if (lVar10 != 0) {
                UVar36.fields.x = fStack_78 - fVar32 * fStack_88;
                UVar36.fields.z = fVar29 - fVar32 * fVar30;
                pUVar11 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar3 = pUVar11->x;
                fVar8 = pUVar11->y;
                fVar4 = pUVar11->z;
                fVar9 = pUVar11->w;
                UVar40.fields.y = UVar39.fields.y;
                UVar40.fields.x = UVar39.fields.x;
                in_XMM5_Db = 0;
                UVar36.fields.y = fStack_74 - fStack_84 * fVar32;
                UVar40.fields.z = UVar39.fields.z;
                __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (__this_02,0,UVar36,(UnityEngine_Quaternion_o)*pUVar11,UVar40,color,
                                       pMVar25);
                in_XMM4_Da = UVar39.fields.x;
                in_XMM4_Db = UVar39.fields.y;
                in_XMM5_Da = UVar39.fields.z;
                in_XMM6_Da = fVar26;
                in_XMM6_Db = fVar33;
                in_XMM7_Da = fVar28;
                in_XMM7_Db = fVar31;
                if ((((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar19 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
                     in_XMM4_Da = UVar39.fields.x, in_XMM4_Db = UVar39.fields.y, in_XMM5_Da = UVar39.fields.z,
                     in_XMM6_Da = fVar26, in_XMM6_Db = fVar33, in_XMM7_Da = fVar28, in_XMM7_Db = fVar31,
                     pUVar20 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar21 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar20,(MethodInfo *)0x0),
                    in_XMM4_Da = UVar39.fields.x, in_XMM4_Db = UVar39.fields.y, in_XMM5_Da = UVar39.fields.z,
                    in_XMM6_Da = fVar26, in_XMM6_Db = fVar33, in_XMM7_Da = fVar28, in_XMM7_Db = fVar31,
                    pUVar19 != (UnityEngine_Transform_o *)0x0)) &&
                   (UnityEngine_Transform__set_parent(pUVar19,pUVar21,(MethodInfo *)0x0),
                   in_XMM4_Da = UVar39.fields.x, in_XMM4_Db = UVar39.fields.y, in_XMM5_Da = UVar39.fields.z,
                   in_XMM6_Da = fVar26, in_XMM6_Db = fVar33, in_XMM7_Da = fVar28, in_XMM7_Db = fVar31,
                   __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar19 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  pUVar21 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar20,(MethodInfo *)0x0);
                  in_XMM4_Da = UVar39.fields.x;
                  in_XMM4_Db = UVar39.fields.y;
                  in_XMM5_Da = UVar39.fields.z;
                  in_XMM6_Da = fVar26;
                  in_XMM6_Db = fVar33;
                  in_XMM7_Da = fVar28;
                  in_XMM7_Db = fVar31;
                  if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar19,pUVar21,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar20,name,(MethodInfo *)0x0);
                    in_XMM4_Da = UVar39.fields.x;
                    in_XMM4_Db = UVar39.fields.y;
                    in_XMM5_Da = UVar39.fields.z;
                    in_XMM6_Da = fVar26;
                    in_XMM6_Db = fVar33;
                    in_XMM7_Da = fVar28;
                    in_XMM7_Db = fVar31;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                                  (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (__this,(Il2CppObject *)name,(Il2CppObject *)pUVar20,MethodInfo_Void_Add);
                      return name;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar27 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      fVar28 = UVar36.fields.z;
      fVar1 = fVar3;
      fVar26 = fVar8;
      fVar29 = fVar4;
      fVar30 = in_XMM4_Da;
      fVar2 = in_XMM4_Db;
      fVar6 = in_XMM5_Da;
      uVar34 = in_XMM5_Db;
      fVar7 = in_XMM6_Da;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar20 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar17 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar17);
      }
      pUVar12 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar12 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar22,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar22[1].klass = 0;
        if (pIVar22 != (Il2CppObject *)0x0) {
          pIVar22[2].klass = pIVar27;
          *(float *)&pIVar22[2].monitor = UVar36.fields.z;
          *(ulong *)((long)&pIVar22[2].monitor + 4) =
               CONCAT44(fVar8 + (float)((ulong)pIVar27 >> 0x20),fVar3 + SUB84(pIVar27,0));
          *(float *)((long)&pIVar22[3].klass + 4) = fVar4 + UVar36.fields.z;
          *(float *)&pIVar22[3].monitor = in_XMM4_Da;
          *(float *)((long)&pIVar22[3].monitor + 4) = in_XMM4_Db;
          *(float *)&pIVar22[4].klass = in_XMM5_Da;
          *(undefined4 *)((long)&pIVar22[4].klass + 4) = in_XMM5_Db;
          *(float *)&pIVar22[4].monitor = in_XMM6_Da;
          pSVar23 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar12,(System_Collections_IEnumerator_o *)pIVar22,(MethodInfo *)0x0);
          return pSVar23;
        }
      }
      pvVar14 = (void *)il2cpp_runtime_helper_022b2c90();
      fVar3 = fVar28;
      fVar4 = fVar1;
      fVar8 = fVar26;
      UVar36.fields.z = fVar29;
      fVar33 = fVar30;
      fVar31 = fVar2;
      UVar37.fields.z = fVar6;
      uVar35 = uVar34;
      fVar32 = fVar7;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pSVar23 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pSVar23,(MethodInfo *)0x0);
      (pSVar23->fields)._stringLength = 0;
      if (pSVar23 != (System_String_o *)0x0) {
        pSVar23[1].monitor = pvVar14;
        pSVar23[1].fields._stringLength = (int32_t)fVar28;
        *(ulong *)&pSVar23[1].fields._firstChar = CONCAT44(fVar26,fVar1);
        *(float *)((long)&pSVar23[2].klass + 4) = fVar29;
        *(float *)&pSVar23[2].monitor = fVar30;
        *(float *)((long)&pSVar23[2].monitor + 4) = fVar2;
        pSVar23[2].fields._stringLength = (int32_t)fVar6;
        *(undefined4 *)&pSVar23[2].fields._firstChar = uVar34;
        *(float *)&pSVar23[3].klass = fVar7;
        return pSVar23;
      }
      pIVar27 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      fVar28 = fVar3;
      fVar1 = fVar4;
      fVar26 = fVar8;
      fVar29 = UVar36.fields.z;
      fVar30 = fVar33;
      fVar2 = fVar31;
      fVar6 = UVar37.fields.z;
      uVar34 = uVar35;
      fVar7 = fVar32;
      if (g_data_057ae8a6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a6 = '\x01';
      }
      pUVar20 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar17 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar17);
      }
      pUVar12 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar12 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar22,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar22[1].klass = 0;
        if (pIVar22 != (Il2CppObject *)0x0) {
          pIVar22[2].klass = pIVar27;
          *(float *)&pIVar22[2].monitor = fVar3;
          *(ulong *)((long)&pIVar22[2].monitor + 4) = CONCAT44(fVar8,fVar4);
          *(float *)((long)&pIVar22[3].klass + 4) = UVar36.fields.z;
          *(float *)&pIVar22[3].monitor = fVar33;
          *(float *)((long)&pIVar22[3].monitor + 4) = fVar31;
          *(float *)&pIVar22[4].klass = UVar37.fields.z;
          *(undefined4 *)((long)&pIVar22[4].klass + 4) = uVar35;
          *(float *)&pIVar22[4].monitor = fVar32;
          pSVar23 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar12,(System_Collections_IEnumerator_o *)pIVar22,(MethodInfo *)0x0);
          return pSVar23;
        }
      }
      uVar5 = il2cpp_runtime_helper_022b2c90();
      fVar3 = fVar28;
      fVar4 = fVar1;
      fVar8 = fVar26;
      UVar36.fields.z = fVar29;
      fVar33 = fVar9;
      fVar31 = fVar30;
      if (g_data_057ae8a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a7 = '\x01';
      }
      pUVar20 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar18 = 0;
      bVar17 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar17);
      }
      pUVar12 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar20 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      pvVar14 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar15 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057a6932 == '\0') {
        pUVar20 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar12 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar13 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        uVar35 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar24 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        iVar18 = 0;
        pUVar20 = pUVar24;
        System_Object___ctor((Il2CppObject *)pUVar24,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar24->fields).m_CachedPtr = 0;
        if (pUVar24 != (UnityEngine_Object_o *)0x0) {
          pUVar24[1].monitor = pUVar12;
          il2cpp_runtime_helper_022b4080(&pUVar24[1].monitor,pUVar12);
          *(undefined4 *)&pUVar24[1].fields.m_CachedPtr = 3;
          *(undefined8 *)((long)&pUVar24[1].fields.m_CachedPtr + 4) = uVar5;
          *(float *)((long)&pUVar24[2].klass + 4) = fVar28;
          pUVar24[2].monitor = pvVar14;
          pUVar24[2].fields.m_CachedPtr = iVar15;
          pUVar24[3].klass = pUVar13;
          *(undefined4 *)&pUVar24[3].monitor = uVar35;
          *(float *)((long)&pUVar24[3].monitor + 4) = fVar1;
          *(float *)&pUVar24[3].fields.m_CachedPtr = fVar26;
          *(float *)((long)&pUVar24[3].fields.m_CachedPtr + 4) = fVar29;
          *(float *)&pUVar24[4].klass = fVar9;
          *(float *)((long)&pUVar24[4].klass + 4) = fVar30;
          pSVar23 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar12,(System_Collections_IEnumerator_o *)pUVar24,(MethodInfo *)0x0);
          return pSVar23;
        }
      }
      uVar5 = il2cpp_runtime_helper_022b2c90();
      fVar9 = fVar3;
      fVar1 = fVar4;
      fVar26 = UVar36.fields.z;
      fVar29 = fVar33;
      fVar30 = fVar31;
      UVar37.fields.z = fVar2;
      fVar32 = fVar6;
      UVar39.fields.x = fVar7;
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      pSVar23 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor((Il2CppObject *)pSVar23,(MethodInfo *)0x0);
      (pSVar23->fields)._stringLength = 0;
      if (pSVar23 != (System_String_o *)0x0) {
        pSVar23[1].monitor = pUVar20;
        il2cpp_runtime_helper_022b4080(&pSVar23[1].monitor,pUVar20);
        pSVar23[1].fields._stringLength = iVar18;
        *(undefined8 *)&pSVar23[1].fields._firstChar = uVar5;
        *(float *)((long)&pSVar23[2].klass + 4) = fVar3;
        *(float *)&pSVar23[2].monitor = fVar4;
        *(float *)((long)&pSVar23[2].monitor + 4) = fVar8;
        pSVar23[2].fields._stringLength = (int32_t)UVar36.fields.z;
        *(float *)&pSVar23[2].fields._firstChar = fVar33;
        pSVar23[3].klass = (System_String_c *)CONCAT44(fVar2,fVar31);
        *(float *)&pSVar23[3].monitor = fVar6;
        *(float *)((long)&pSVar23[3].monitor + 4) = fVar7;
        pSVar23[3].fields._stringLength = (int32_t)in_XMM6_Db;
        *(float *)&pSVar23[3].fields._firstChar = in_XMM7_Da;
        *(float *)&pSVar23[4].klass = in_XMM7_Db;
        *(float *)((long)&pSVar23[4].klass + 4) = fVar28;
        return pSVar23;
      }
      uVar5 = il2cpp_runtime_helper_022b2c90();
      fVar3 = fVar9;
      fVar4 = fVar1;
      fVar8 = fVar26;
      UVar36.fields.z = fVar30;
      fVar28 = UVar37.fields.z;
      fVar2 = fVar32;
      if (g_data_057ae8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a8 = '\x01';
      }
      pUVar20 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar17 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_02,bVar17);
      }
      pIVar27 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar27 != (Il2CppClass *)0x0) {
        pvVar14 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar16 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar22,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar22[1].klass = 0;
        if (pIVar22 != (Il2CppObject *)0x0) {
          pIVar22[2].klass = pIVar27;
          il2cpp_runtime_helper_022b4080(pIVar22 + 2,pIVar27);
          *(undefined4 *)&pIVar22[2].monitor = 0;
          *(undefined8 *)((long)&pIVar22[2].monitor + 4) = uVar5;
          *(float *)((long)&pIVar22[3].klass + 4) = fVar9;
          pIVar22[3].monitor = pvVar14;
          pIVar22[4].klass = pIVar16;
          pIVar22[4].monitor = (void *)CONCAT44(fVar1,fVar1);
          *(float *)&pIVar22[5].klass = fVar1;
          *(float *)((long)&pIVar22[5].klass + 4) = fVar26;
          *(float *)&pIVar22[5].monitor = fVar29;
          *(float *)((long)&pIVar22[5].monitor + 4) = fVar30;
          *(float *)&pIVar22[6].klass = UVar37.fields.z;
          *(float *)((long)&pIVar22[6].klass + 4) = fVar32;
          pSVar23 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar27,
                               (System_Collections_IEnumerator_o *)pIVar22,(MethodInfo *)0x0);
          return pSVar23;
        }
      }
      uVar5 = il2cpp_runtime_helper_022b2c90();
      fVar9 = fVar3;
      fVar1 = fVar4;
      fVar26 = fVar8;
      fVar29 = UVar36.fields.z;
      fVar30 = fVar28;
      fVar6 = fVar2;
      uVar35 = uVar34;
      fVar7 = UVar39.fields.x;
      if (g_data_057ae8a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a9 = '\x01';
      }
      pUVar20 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar17 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_03,bVar17);
      }
      pIVar27 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar27 != (Il2CppClass *)0x0) {
        pvVar14 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar16 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar22,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar22[1].klass = 0;
        if (pIVar22 != (Il2CppObject *)0x0) {
          pIVar22[2].klass = pIVar27;
          il2cpp_runtime_helper_022b4080(pIVar22 + 2,pIVar27);
          *(undefined4 *)&pIVar22[2].monitor = 2;
          *(undefined8 *)((long)&pIVar22[2].monitor + 4) = uVar5;
          *(float *)((long)&pIVar22[3].klass + 4) = fVar3;
          pIVar22[3].monitor = pvVar14;
          pIVar22[4].klass = pIVar16;
          pIVar22[4].monitor = (void *)CONCAT44(fVar8,fVar4);
          *(float *)&pIVar22[5].klass = fVar4;
          *(float *)((long)&pIVar22[5].klass + 4) = UVar36.fields.z;
          *(float *)&pIVar22[5].monitor = fVar28;
          *(float *)((long)&pIVar22[5].monitor + 4) = fVar2;
          *(undefined4 *)&pIVar22[6].klass = uVar34;
          *(float *)((long)&pIVar22[6].klass + 4) = UVar39.fields.x;
          pSVar23 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar27,
                               (System_Collections_IEnumerator_o *)pIVar22,(MethodInfo *)0x0);
          return pSVar23;
        }
      }
      uVar5 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae8aa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8aa = '\x01';
      }
      pUVar20 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar34 = 0;
      bVar17 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_04,bVar17);
      }
      pUVar12 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar20 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      if (pUVar12 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pvVar14 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar15 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar24 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        uVar34 = 0;
        pUVar20 = pUVar24;
        System_Object___ctor((Il2CppObject *)pUVar24,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar24->fields).m_CachedPtr = 0;
        if (pUVar24 != (UnityEngine_Object_o *)0x0) {
          pUVar24[1].monitor = pUVar12;
          il2cpp_runtime_helper_022b4080(&pUVar24[1].monitor,pUVar12);
          *(undefined4 *)&pUVar24[1].fields.m_CachedPtr = 1;
          *(undefined8 *)((long)&pUVar24[1].fields.m_CachedPtr + 4) = uVar5;
          *(float *)((long)&pUVar24[2].klass + 4) = fVar9;
          pUVar24[2].monitor = pvVar14;
          pUVar24[2].fields.m_CachedPtr = iVar15;
          pUVar24[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar26,fVar1);
          *(float *)&pUVar24[3].monitor = fVar1;
          *(float *)((long)&pUVar24[3].monitor + 4) = fVar29;
          *(float *)&pUVar24[3].fields.m_CachedPtr = fVar30;
          *(float *)((long)&pUVar24[3].fields.m_CachedPtr + 4) = fVar6;
          *(undefined4 *)&pUVar24[4].klass = uVar35;
          *(float *)((long)&pUVar24[4].klass + 4) = fVar7;
          pSVar23 = (System_String_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar12,(System_Collections_IEnumerator_o *)pUVar24,(MethodInfo *)0x0);
          return pSVar23;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar20,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar20->fields).m_CachedPtr = uVar34;
      return extraout_RAX;
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$DrawRay
// il2cpp: void Utility_CustomDebug__DrawRay (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x44833f0

void Utility_CustomDebug__DrawRay_43833f0
               (UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppClass *pIVar6;
  intptr_t iVar7;
  bool_conflict bVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *__this;
  UnityEngine_Object_o *__this_00;
  undefined4 uVar10;
  Il2CppClass *pIVar11;
  UnityEngine_Object_o *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 in_XMM3_Db;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 in_XMM6_Db;
  undefined8 in_XMM7_Qa;
  float fStack_58;
  float fStack_54;
  
  fVar29 = color.fields.b;
  fVar30 = color.fields.a;
  fVar25 = color.fields.r;
  fVar27 = color.fields.g;
  fVar20 = direction.fields.z;
  fVar16 = direction.fields.x;
  fVar19 = direction.fields.y;
  fVar13 = origin.fields.z;
  fVar14 = fVar13;
  fVar15 = fVar16;
  fVar17 = fVar19;
  fVar21 = fVar20;
  fVar26 = fVar25;
  fVar28 = fVar27;
  fVar18 = fVar29;
  fVar31 = fVar30;
  fVar22 = duration;
  if (g_data_057ae8a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a5 = '\x01';
  }
  pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae8ab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
      g_data_057ae8ab = '\x01';
    }
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
    System_Object___ctor(pIVar9,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar9[1].klass = 0;
    if (pIVar9 != (Il2CppObject *)0x0) {
      fStack_58 = origin.fields.x;
      fStack_54 = origin.fields.y;
      *(float *)&pIVar9[2].klass = fStack_58;
      *(float *)((long)&pIVar9[2].klass + 4) = fStack_54;
      *(float *)&pIVar9[2].monitor = fVar13;
      *(ulong *)((long)&pIVar9[2].monitor + 4) = CONCAT44(fVar19 + fStack_54,fVar16 + fStack_58);
      *(float *)((long)&pIVar9[3].klass + 4) = fVar20 + fVar13;
      *(float *)&pIVar9[3].monitor = fVar25;
      *(float *)((long)&pIVar9[3].monitor + 4) = fVar27;
      *(float *)&pIVar9[4].klass = fVar29;
      *(float *)((long)&pIVar9[4].klass + 4) = fVar30;
      *(float *)&pIVar9[4].monitor = duration;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar1,(System_Collections_IEnumerator_o *)pIVar9,(MethodInfo *)0x0);
      return;
    }
  }
  pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  fVar13 = fVar14;
  fVar16 = fVar15;
  fVar19 = fVar17;
  fVar20 = fVar21;
  fVar25 = fVar26;
  fVar27 = fVar28;
  fVar29 = fVar18;
  fVar30 = fVar31;
  fVar32 = fVar22;
  if (g_data_057ae8ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
    g_data_057ae8ab = '\x01';
  }
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar9[1].klass = 0;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar9[2].klass = pIVar11;
    *(float *)&pIVar9[2].monitor = fVar14;
    *(ulong *)((long)&pIVar9[2].monitor + 4) = CONCAT44(fVar17,fVar15);
    *(float *)((long)&pIVar9[3].klass + 4) = fVar21;
    *(float *)&pIVar9[3].monitor = fVar26;
    *(float *)((long)&pIVar9[3].monitor + 4) = fVar28;
    *(float *)&pIVar9[4].klass = fVar18;
    *(float *)((long)&pIVar9[4].klass + 4) = fVar31;
    *(float *)&pIVar9[4].monitor = fVar22;
    return;
  }
  pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  fVar14 = fVar13;
  fVar15 = fVar16;
  fVar17 = fVar19;
  fVar21 = fVar20;
  fVar26 = fVar25;
  fVar28 = fVar27;
  fVar18 = fVar29;
  fVar31 = fVar30;
  fVar22 = fVar32;
  if (g_data_057ae8a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a6 = '\x01';
  }
  pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae8ab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
      g_data_057ae8ab = '\x01';
    }
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
    System_Object___ctor(pIVar9,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar9[1].klass = 0;
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar9[2].klass = pIVar11;
      *(float *)&pIVar9[2].monitor = fVar13;
      *(ulong *)((long)&pIVar9[2].monitor + 4) = CONCAT44(fVar19,fVar16);
      *(float *)((long)&pIVar9[3].klass + 4) = fVar20;
      *(float *)&pIVar9[3].monitor = fVar25;
      *(float *)((long)&pIVar9[3].monitor + 4) = fVar27;
      *(float *)&pIVar9[4].klass = fVar29;
      *(float *)((long)&pIVar9[4].klass + 4) = fVar30;
      *(float *)&pIVar9[4].monitor = fVar32;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar1,(System_Collections_IEnumerator_o *)pIVar9,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  fVar13 = fVar14;
  fVar16 = fVar15;
  fVar19 = fVar17;
  fVar20 = fVar21;
  uVar23 = in_XMM3_Db;
  fVar25 = fVar26;
  if (g_data_057ae8a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a7 = '\x01';
  }
  pIVar11 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar10 = 0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    pIVar11 = (Il2CppClass *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  uVar5 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  pIVar6 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  if (g_data_057a6932 == '\0') {
    pIVar11 = (Il2CppClass *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pIVar2 = *(Il2CppClass **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    uVar24 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    uVar10 = 0;
    pIVar11 = __this;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    *(undefined4 *)&((UnityEngine_Object_Fields *)&(__this->_1).name)->m_CachedPtr = 0;
    if (__this != (Il2CppClass *)0x0) {
      (__this->_1).byval_arg.data = pUVar1;
      il2cpp_runtime_helper_022b4080(&(__this->_1).byval_arg,pUVar1);
      (__this->_1).byval_arg.bits = 3;
      *(undefined8 *)&(__this->_1).byval_arg.field_0xc = uVar4;
      *(float *)((long)&(__this->_1).this_arg.data + 4) = fVar14;
      *(undefined8 *)&(__this->_1).this_arg.bits = uVar5;
      (__this->_1).element_class = pIVar6;
      (__this->_1).castClass = pIVar2;
      *(undefined4 *)&(__this->_1).declaringType = uVar24;
      *(float *)((long)&(__this->_1).declaringType + 4) = fVar15;
      *(float *)&(__this->_1).parent = fVar17;
      *(float *)((long)&(__this->_1).parent + 4) = fVar21;
      *(undefined4 *)&(__this->_1).generic_class = in_XMM3_Db;
      *(float *)((long)&(__this->_1).generic_class + 4) = fVar26;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar1,(System_Collections_IEnumerator_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  pvVar3 = (void *)CONCAT44(fVar28,fVar25);
  fVar15 = fVar13;
  fVar17 = fVar16;
  fVar21 = fVar20;
  uVar24 = uVar23;
  fVar26 = fVar18;
  fVar27 = fVar22;
  if (g_data_057ae8ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
    g_data_057ae8ac = '\x01';
  }
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar9[1].klass = 0;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar9[2].klass = pIVar11;
    il2cpp_runtime_helper_022b4080(pIVar9 + 2,pIVar11);
    *(undefined4 *)&pIVar9[2].monitor = uVar10;
    *(undefined8 *)((long)&pIVar9[2].monitor + 4) = uVar4;
    *(float *)((long)&pIVar9[3].klass + 4) = fVar13;
    *(float *)&pIVar9[3].monitor = fVar16;
    *(float *)((long)&pIVar9[3].monitor + 4) = fVar19;
    *(float *)&pIVar9[4].klass = fVar20;
    *(undefined4 *)((long)&pIVar9[4].klass + 4) = uVar23;
    pIVar9[4].monitor = pvVar3;
    *(float *)&pIVar9[5].klass = fVar18;
    *(float *)((long)&pIVar9[5].klass + 4) = fVar22;
    *(undefined4 *)&pIVar9[5].monitor = in_XMM6_Db;
    *(int *)((long)&pIVar9[5].monitor + 4) = (int)in_XMM7_Qa;
    *(int *)&pIVar9[6].klass = (int)((ulong)in_XMM7_Qa >> 0x20);
    *(float *)((long)&pIVar9[6].klass + 4) = fVar14;
    return;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  fVar14 = fVar15;
  fVar18 = fVar17;
  fVar22 = fVar21;
  fVar13 = fVar25;
  fVar16 = fVar28;
  fVar19 = fVar26;
  if (g_data_057ae8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a8 = '\x01';
  }
  pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pIVar11 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    if (pIVar11 != (Il2CppClass *)0x0) {
      pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      pIVar6 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar9[1].klass = 0;
      if (pIVar9 != (Il2CppObject *)0x0) {
        pIVar9[2].klass = pIVar11;
        il2cpp_runtime_helper_022b4080(pIVar9 + 2,pIVar11);
        *(undefined4 *)&pIVar9[2].monitor = 0;
        *(undefined8 *)((long)&pIVar9[2].monitor + 4) = uVar4;
        *(float *)((long)&pIVar9[3].klass + 4) = fVar15;
        pIVar9[3].monitor = pvVar3;
        pIVar9[4].klass = pIVar6;
        pIVar9[4].monitor = (void *)CONCAT44(fVar17,fVar17);
        *(float *)&pIVar9[5].klass = fVar17;
        *(float *)((long)&pIVar9[5].klass + 4) = fVar21;
        *(undefined4 *)&pIVar9[5].monitor = uVar24;
        *(float *)((long)&pIVar9[5].monitor + 4) = fVar25;
        *(float *)&pIVar9[6].klass = fVar28;
        *(float *)((long)&pIVar9[6].klass + 4) = fVar26;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar11,(System_Collections_IEnumerator_o *)pIVar9,
                   (MethodInfo *)0x0);
        return;
      }
    }
    uVar4 = il2cpp_runtime_helper_022b2c90();
    fVar15 = fVar14;
    fVar17 = fVar18;
    fVar21 = fVar22;
    fVar26 = fVar13;
    fVar28 = fVar16;
    fVar20 = fVar19;
    fVar25 = fVar31;
    fVar29 = fVar27;
    if (g_data_057ae8a9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae8a9 = '\x01';
    }
    pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    pIVar11 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    if (pIVar11 != (Il2CppClass *)0x0) {
      pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      pIVar6 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar9[1].klass = 0;
      if (pIVar9 != (Il2CppObject *)0x0) {
        pIVar9[2].klass = pIVar11;
        il2cpp_runtime_helper_022b4080(pIVar9 + 2,pIVar11);
        *(undefined4 *)&pIVar9[2].monitor = 2;
        *(undefined8 *)((long)&pIVar9[2].monitor + 4) = uVar4;
        *(float *)((long)&pIVar9[3].klass + 4) = fVar14;
        pIVar9[3].monitor = pvVar3;
        pIVar9[4].klass = pIVar6;
        pIVar9[4].monitor = (void *)CONCAT44(fVar22,fVar18);
        *(float *)&pIVar9[5].klass = fVar18;
        *(float *)((long)&pIVar9[5].klass + 4) = fVar13;
        *(float *)&pIVar9[5].monitor = fVar16;
        *(float *)((long)&pIVar9[5].monitor + 4) = fVar19;
        *(float *)&pIVar9[6].klass = fVar31;
        *(float *)((long)&pIVar9[6].klass + 4) = fVar27;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar11,(System_Collections_IEnumerator_o *)pIVar9,
                   (MethodInfo *)0x0);
        return;
      }
    }
    uVar4 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae8aa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae8aa = '\x01';
    }
    pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar23 = 0;
    bVar8 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar12 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar7 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        uVar23 = 0;
        pUVar12 = __this_00;
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
        if (__this_00 != (UnityEngine_Object_o *)0x0) {
          __this_00[1].monitor = pUVar1;
          il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pUVar1);
          *(undefined4 *)&__this_00[1].fields.m_CachedPtr = 1;
          *(undefined8 *)((long)&__this_00[1].fields.m_CachedPtr + 4) = uVar4;
          *(float *)((long)&__this_00[2].klass + 4) = fVar15;
          __this_00[2].monitor = pvVar3;
          __this_00[2].fields.m_CachedPtr = iVar7;
          __this_00[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar21,fVar17);
          *(float *)&__this_00[3].monitor = fVar17;
          *(float *)((long)&__this_00[3].monitor + 4) = fVar26;
          *(float *)&__this_00[3].fields.m_CachedPtr = fVar28;
          *(float *)((long)&__this_00[3].fields.m_CachedPtr + 4) = fVar20;
          *(float *)&__this_00[4].klass = fVar25;
          *(float *)((long)&__this_00[4].klass + 4) = fVar29;
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    (pUVar1,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar12,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar12->fields).m_CachedPtr = uVar23;
      return;
    }
    return;
  }
  return;
}


// Utility.CustomDebug$$DrawLine
// il2cpp: void Utility_CustomDebug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4483610

void Utility_CustomDebug__DrawLine_4383610
               (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,UnityEngine_Color_o color,float duration
               ,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  intptr_t iVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  Il2CppClass *__this;
  UnityEngine_Object_o *__this_00;
  undefined4 uVar9;
  undefined4 uVar10;
  Il2CppClass *pIVar11;
  UnityEngine_Object_o *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 in_XMM3_Db;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 in_XMM6_Db;
  undefined8 in_XMM7_Qa;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  fVar28 = color.fields.b;
  fVar29 = color.fields.a;
  fVar24 = color.fields.r;
  fVar27 = color.fields.g;
  fVar20 = end.fields.z;
  uVar17 = end.fields._0_8_;
  fVar13 = start.fields.z;
  fVar14 = fVar13;
  uVar18 = uVar17;
  fVar15 = fVar20;
  fVar21 = fVar24;
  fVar26 = fVar27;
  fVar22 = fVar28;
  fVar30 = fVar29;
  fVar25 = duration;
  if (g_data_057ae8a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a6 = '\x01';
  }
  pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae8ab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
      g_data_057ae8ab = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[2].klass = start.fields._0_8_;
      *(float *)&pIVar8[2].monitor = fVar13;
      *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar17;
      *(float *)((long)&pIVar8[3].klass + 4) = fVar20;
      *(float *)&pIVar8[3].monitor = fVar24;
      *(float *)((long)&pIVar8[3].monitor + 4) = fVar27;
      *(float *)&pIVar8[4].klass = fVar28;
      *(float *)((long)&pIVar8[4].klass + 4) = fVar29;
      *(float *)&pIVar8[4].monitor = duration;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar1,(System_Collections_IEnumerator_o *)pIVar8,(MethodInfo *)0x0);
      return;
    }
  }
  uVar17 = il2cpp_runtime_helper_022b2c90();
  fVar13 = fVar14;
  uVar19 = uVar18;
  fVar20 = fVar15;
  fVar24 = fVar21;
  uVar10 = in_XMM3_Db;
  if (g_data_057ae8a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a7 = '\x01';
  }
  pIVar11 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar9 = 0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      pIVar11 = (Il2CppClass *)&TypeInfo_Quaternion;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6843 = '\x01';
    }
    uVar4 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar5 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057a6932 == '\0') {
      pIVar11 = (Il2CppClass *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pIVar2 = *(Il2CppClass **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
      uVar23 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      uVar9 = 0;
      pIVar11 = __this;
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      *(undefined4 *)&((UnityEngine_Object_Fields *)&(__this->_1).name)->m_CachedPtr = 0;
      if (__this != (Il2CppClass *)0x0) {
        (__this->_1).byval_arg.data = pUVar1;
        il2cpp_runtime_helper_022b4080(&(__this->_1).byval_arg,pUVar1);
        (__this->_1).byval_arg.bits = 3;
        *(undefined8 *)&(__this->_1).byval_arg.field_0xc = uVar17;
        *(float *)((long)&(__this->_1).this_arg.data + 4) = fVar14;
        *(undefined8 *)&(__this->_1).this_arg.bits = uVar4;
        (__this->_1).element_class = pIVar5;
        (__this->_1).castClass = pIVar2;
        *(undefined4 *)&(__this->_1).declaringType = uVar23;
        uStack_a0 = (undefined4)uVar18;
        uStack_9c = (undefined4)((ulong)uVar18 >> 0x20);
        *(undefined4 *)((long)&(__this->_1).declaringType + 4) = uStack_a0;
        *(undefined4 *)&(__this->_1).parent = uStack_9c;
        *(float *)((long)&(__this->_1).parent + 4) = fVar15;
        *(undefined4 *)&(__this->_1).generic_class = in_XMM3_Db;
        *(float *)((long)&(__this->_1).generic_class + 4) = fVar21;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  (pUVar1,(System_Collections_IEnumerator_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
    uVar18 = il2cpp_runtime_helper_022b2c90();
    pvVar3 = (void *)CONCAT44(fVar26,fVar24);
    fVar15 = fVar13;
    uVar17 = uVar19;
    fVar21 = fVar20;
    fVar27 = fVar22;
    fVar28 = fVar25;
    uVar23 = uVar10;
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    uVar16 = (undefined4)uVar17;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[2].klass = pIVar11;
      il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar11);
      *(undefined4 *)&pIVar8[2].monitor = uVar9;
      *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar18;
      *(float *)((long)&pIVar8[3].klass + 4) = fVar13;
      uStack_148 = (undefined4)uVar19;
      uStack_144 = (undefined4)((ulong)uVar19 >> 0x20);
      *(undefined4 *)&pIVar8[3].monitor = uStack_148;
      *(undefined4 *)((long)&pIVar8[3].monitor + 4) = uStack_144;
      *(float *)&pIVar8[4].klass = fVar20;
      *(undefined4 *)((long)&pIVar8[4].klass + 4) = uVar10;
      pIVar8[4].monitor = pvVar3;
      *(float *)&pIVar8[5].klass = fVar22;
      *(float *)((long)&pIVar8[5].klass + 4) = fVar25;
      *(undefined4 *)&pIVar8[5].monitor = in_XMM6_Db;
      *(int *)((long)&pIVar8[5].monitor + 4) = (int)in_XMM7_Qa;
      *(int *)&pIVar8[6].klass = (int)((ulong)in_XMM7_Qa >> 0x20);
      *(float *)((long)&pIVar8[6].klass + 4) = fVar14;
      return;
    }
    uVar18 = il2cpp_runtime_helper_022b2c90();
    fVar14 = fVar15;
    fVar22 = fVar21;
    fVar25 = fVar24;
    fVar13 = fVar26;
    fVar20 = fVar27;
    uVar10 = uVar16;
    if (g_data_057ae8a8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae8a8 = '\x01';
    }
    pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pIVar11 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar11 != (Il2CppClass *)0x0) {
        pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar5 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar8,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar8[1].klass = 0;
        if (pIVar8 != (Il2CppObject *)0x0) {
          pIVar8[2].klass = pIVar11;
          il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar11);
          *(undefined4 *)&pIVar8[2].monitor = 0;
          *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar18;
          *(float *)((long)&pIVar8[3].klass + 4) = fVar15;
          pIVar8[3].monitor = pvVar3;
          pIVar8[4].klass = pIVar5;
          pIVar8[4].monitor = (void *)CONCAT44(uVar16,uVar16);
          *(undefined4 *)&pIVar8[5].klass = uVar16;
          *(float *)((long)&pIVar8[5].klass + 4) = fVar21;
          *(undefined4 *)&pIVar8[5].monitor = uVar23;
          *(float *)((long)&pIVar8[5].monitor + 4) = fVar24;
          *(float *)&pIVar8[6].klass = fVar26;
          *(float *)((long)&pIVar8[6].klass + 4) = fVar27;
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pIVar11,(System_Collections_IEnumerator_o *)pIVar8,
                     (MethodInfo *)0x0);
          return;
        }
      }
      uVar18 = il2cpp_runtime_helper_022b2c90();
      fVar15 = fVar14;
      fVar21 = fVar22;
      fVar26 = fVar25;
      fVar24 = fVar13;
      fVar27 = fVar20;
      fVar29 = fVar30;
      fVar31 = fVar28;
      uVar9 = uVar10;
      if (g_data_057ae8a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a9 = '\x01';
      }
      pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pIVar11 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar11 != (Il2CppClass *)0x0) {
        pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar5 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar8,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar8[1].klass = 0;
        if (pIVar8 != (Il2CppObject *)0x0) {
          pIVar8[2].klass = pIVar11;
          il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar11);
          *(undefined4 *)&pIVar8[2].monitor = 2;
          *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar18;
          *(float *)((long)&pIVar8[3].klass + 4) = fVar14;
          pIVar8[3].monitor = pvVar3;
          pIVar8[4].klass = pIVar5;
          pIVar8[4].monitor = (void *)CONCAT44(fVar22,uVar10);
          *(undefined4 *)&pIVar8[5].klass = uVar10;
          *(float *)((long)&pIVar8[5].klass + 4) = fVar25;
          *(float *)&pIVar8[5].monitor = fVar13;
          *(float *)((long)&pIVar8[5].monitor + 4) = fVar20;
          *(float *)&pIVar8[6].klass = fVar30;
          *(float *)((long)&pIVar8[6].klass + 4) = fVar28;
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pIVar11,(System_Collections_IEnumerator_o *)pIVar8,
                     (MethodInfo *)0x0);
          return;
        }
      }
      uVar18 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae8aa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8aa = '\x01';
      }
      pUVar12 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar10 = 0;
      bVar7 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (g_data_057a6843 == '\0') {
          pUVar12 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6843 = '\x01';
        }
        if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
          iVar6 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          uVar10 = 0;
          pUVar12 = __this_00;
          System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
          *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
          if (__this_00 != (UnityEngine_Object_o *)0x0) {
            __this_00[1].monitor = pUVar1;
            il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pUVar1);
            *(undefined4 *)&__this_00[1].fields.m_CachedPtr = 1;
            *(undefined8 *)((long)&__this_00[1].fields.m_CachedPtr + 4) = uVar18;
            *(float *)((long)&__this_00[2].klass + 4) = fVar15;
            __this_00[2].monitor = pvVar3;
            __this_00[2].fields.m_CachedPtr = iVar6;
            __this_00[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar21,uVar9);
            *(undefined4 *)&__this_00[3].monitor = uVar9;
            *(float *)((long)&__this_00[3].monitor + 4) = fVar26;
            *(float *)&__this_00[3].fields.m_CachedPtr = fVar24;
            *(float *)((long)&__this_00[3].fields.m_CachedPtr + 4) = fVar27;
            *(float *)&__this_00[4].klass = fVar29;
            *(float *)((long)&__this_00[4].klass + 4) = fVar31;
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      (pUVar1,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pUVar12,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar12->fields).m_CachedPtr = uVar10;
        return;
      }
      return;
    }
    return;
  }
  return;
}


// Utility.CustomDebug$$SpawnCube
// il2cpp: void Utility_CustomDebug__SpawnCube (UnityEngine_Vector3_o position, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4483770

void Utility_CustomDebug__SpawnCube_4383770
               (UnityEngine_Vector3_o position,UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  Il2CppClass *pIVar2;
  undefined8 uVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  intptr_t iVar6;
  bool_conflict bVar7;
  Il2CppClass *__this;
  Il2CppObject *pIVar8;
  UnityEngine_Object_o *__this_00;
  Il2CppClass *pIVar9;
  UnityEngine_Object_o *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined4 in_XMM4_Db;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 in_XMM5_Da;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 in_XMM5_Db;
  undefined4 uVar28;
  undefined4 in_XMM6_Da;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 in_XMM6_Db;
  undefined8 in_XMM7_Qa;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_38;
  float fStack_34;
  
  uVar20 = color.fields._8_8_;
  uVar16 = color.fields._0_8_;
  fVar11 = position.fields.z;
  fVar12 = fVar11;
  fVar22 = duration;
  if (g_data_057ae8a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a7 = '\x01';
  }
  pIVar9 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar27 = 0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    pIVar9 = (Il2CppClass *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  uVar3 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  pIVar4 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  if (g_data_057a6932 == '\0') {
    pIVar9 = (Il2CppClass *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pIVar2 = *(Il2CppClass **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    uVar26 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    uVar27 = 0;
    pIVar9 = __this;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    *(undefined4 *)&((UnityEngine_Object_Fields *)&(__this->_1).name)->m_CachedPtr = 0;
    if (__this != (Il2CppClass *)0x0) {
      (__this->_1).byval_arg.data = pUVar1;
      il2cpp_runtime_helper_022b4080(&(__this->_1).byval_arg,pUVar1);
      (__this->_1).byval_arg.bits = 3;
      *(long *)&(__this->_1).byval_arg.field_0xc = position.fields._0_8_;
      *(float *)((long)&(__this->_1).this_arg.data + 4) = fVar11;
      *(undefined8 *)&(__this->_1).this_arg.bits = uVar3;
      (__this->_1).element_class = pIVar4;
      (__this->_1).castClass = pIVar2;
      *(undefined4 *)&(__this->_1).declaringType = uVar26;
      fStack_38 = color.fields.r;
      fStack_34 = color.fields.g;
      *(float *)((long)&(__this->_1).declaringType + 4) = fStack_38;
      *(float *)&(__this->_1).parent = fStack_34;
      *(float *)((long)&(__this->_1).parent + 4) = color.fields.b;
      *(float *)&(__this->_1).generic_class = color.fields.a;
      *(float *)((long)&(__this->_1).generic_class + 4) = duration;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar1,(System_Collections_IEnumerator_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  fVar13 = fVar12;
  uVar17 = uVar16;
  uVar21 = uVar20;
  fVar23 = fVar22;
  uVar26 = in_XMM5_Da;
  uVar29 = in_XMM6_Da;
  uVar30 = in_XMM4_Db;
  if (g_data_057ae8ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
    g_data_057ae8ac = '\x01';
  }
  uVar25 = (undefined4)uVar17;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = 0;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[2].klass = pIVar9;
    il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar9);
    *(undefined4 *)&pIVar8[2].monitor = uVar27;
    *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar3;
    *(float *)((long)&pIVar8[3].klass + 4) = fVar12;
    uStack_e0 = (undefined4)uVar16;
    uStack_dc = (undefined4)((ulong)uVar16 >> 0x20);
    *(undefined4 *)&pIVar8[3].monitor = uStack_e0;
    *(undefined4 *)((long)&pIVar8[3].monitor + 4) = uStack_dc;
    *(int *)&pIVar8[4].klass = (int)uVar20;
    *(int *)((long)&pIVar8[4].klass + 4) = (int)((ulong)uVar20 >> 0x20);
    pIVar8[4].monitor = (void *)CONCAT44(in_XMM4_Db,fVar22);
    *(undefined4 *)&pIVar8[5].klass = in_XMM5_Da;
    *(undefined4 *)((long)&pIVar8[5].klass + 4) = in_XMM6_Da;
    *(undefined4 *)&pIVar8[5].monitor = in_XMM6_Db;
    *(int *)((long)&pIVar8[5].monitor + 4) = (int)in_XMM7_Qa;
    *(int *)&pIVar8[6].klass = (int)((ulong)in_XMM7_Qa >> 0x20);
    *(float *)((long)&pIVar8[6].klass + 4) = fVar11;
    return;
  }
  uVar16 = il2cpp_runtime_helper_022b2c90();
  fVar12 = fVar13;
  uVar20 = uVar21;
  fVar22 = fVar23;
  uVar27 = uVar26;
  uVar24 = uVar30;
  uVar14 = uVar25;
  if (g_data_057ae8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a8 = '\x01';
  }
  uVar18 = (undefined4)uVar20;
  pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pIVar9 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pIVar9 != (Il2CppClass *)0x0) {
    pvVar5 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar4 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[2].klass = pIVar9;
      il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar9);
      *(undefined4 *)&pIVar8[2].monitor = 0;
      *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar16;
      *(float *)((long)&pIVar8[3].klass + 4) = fVar13;
      pIVar8[3].monitor = pvVar5;
      pIVar8[4].klass = pIVar4;
      pIVar8[4].monitor = (void *)CONCAT44(uVar25,uVar25);
      *(undefined4 *)&pIVar8[5].klass = uVar25;
      uStack_128 = (undefined4)uVar21;
      uStack_124 = (undefined4)((ulong)uVar21 >> 0x20);
      *(undefined4 *)((long)&pIVar8[5].klass + 4) = uStack_128;
      *(undefined4 *)&pIVar8[5].monitor = uStack_124;
      *(float *)((long)&pIVar8[5].monitor + 4) = fVar23;
      *(undefined4 *)&pIVar8[6].klass = uVar30;
      *(undefined4 *)((long)&pIVar8[6].klass + 4) = uVar26;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar9,(System_Collections_IEnumerator_o *)pIVar8,
                 (MethodInfo *)0x0);
      return;
    }
  }
  uVar16 = il2cpp_runtime_helper_022b2c90();
  fVar11 = fVar12;
  fVar13 = fVar22;
  uVar26 = uVar27;
  uVar30 = uVar29;
  uVar25 = uVar24;
  uVar28 = in_XMM5_Db;
  uVar19 = uVar18;
  uVar15 = uVar14;
  if (g_data_057ae8a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a9 = '\x01';
  }
  pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pIVar9 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pIVar9 != (Il2CppClass *)0x0) {
    pvVar5 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar4 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[2].klass = pIVar9;
      il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar9);
      *(undefined4 *)&pIVar8[2].monitor = 2;
      *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar16;
      *(float *)((long)&pIVar8[3].klass + 4) = fVar12;
      pIVar8[3].monitor = pvVar5;
      pIVar8[4].klass = pIVar4;
      pIVar8[4].monitor = (void *)CONCAT44(uVar18,uVar14);
      *(undefined4 *)&pIVar8[5].klass = uVar14;
      *(float *)((long)&pIVar8[5].klass + 4) = fVar22;
      *(undefined4 *)&pIVar8[5].monitor = uVar24;
      *(undefined4 *)((long)&pIVar8[5].monitor + 4) = uVar27;
      *(undefined4 *)&pIVar8[6].klass = in_XMM5_Db;
      *(undefined4 *)((long)&pIVar8[6].klass + 4) = uVar29;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar9,(System_Collections_IEnumerator_o *)pIVar8,
                 (MethodInfo *)0x0);
      return;
    }
  }
  uVar16 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8aa = '\x01';
  }
  pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar27 = 0;
  bVar7 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      pUVar10 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6843 = '\x01';
    }
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pvVar5 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar6 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      uVar27 = 0;
      pUVar10 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
      if (__this_00 != (UnityEngine_Object_o *)0x0) {
        __this_00[1].monitor = pUVar1;
        il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pUVar1);
        *(undefined4 *)&__this_00[1].fields.m_CachedPtr = 1;
        *(undefined8 *)((long)&__this_00[1].fields.m_CachedPtr + 4) = uVar16;
        *(float *)((long)&__this_00[2].klass + 4) = fVar11;
        __this_00[2].monitor = pvVar5;
        __this_00[2].fields.m_CachedPtr = iVar6;
        __this_00[3].klass = (UnityEngine_Object_c *)CONCAT44(uVar19,uVar15);
        *(undefined4 *)&__this_00[3].monitor = uVar15;
        *(float *)((long)&__this_00[3].monitor + 4) = fVar13;
        *(undefined4 *)&__this_00[3].fields.m_CachedPtr = uVar25;
        *(undefined4 *)((long)&__this_00[3].fields.m_CachedPtr + 4) = uVar26;
        *(undefined4 *)&__this_00[4].klass = uVar28;
        *(undefined4 *)((long)&__this_00[4].klass + 4) = uVar30;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  (pUVar1,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar10,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar10->fields).m_CachedPtr = uVar27;
    return;
  }
  return;
}


// Utility.CustomDebug$$SpawnSphere
// il2cpp: void Utility_CustomDebug__SpawnSphere (UnityEngine_Vector3_o position, float radius, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4483a50

void Utility_CustomDebug__SpawnSphere_4383a50
               (UnityEngine_Vector3_o position,float radius,UnityEngine_Color_o color,float duration,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  UnityEngine_MonoBehaviour_o *__this;
  undefined8 uVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  intptr_t iVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Object_o *__this_00;
  undefined4 uVar8;
  UnityEngine_Object_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined4 in_XMM5_Db;
  undefined4 uVar20;
  undefined4 in_XMM6_Da;
  undefined4 uVar21;
  undefined8 uStack_188;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_100;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_24;
  
  uVar16 = color.fields._8_8_;
  fVar13 = color.fields.r;
  fVar10 = position.fields.z;
  fVar11 = fVar10;
  fVar12 = radius;
  fVar18 = duration;
  fVar14 = fVar13;
  if (g_data_057ae8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a8 = '\x01';
  }
  pUVar9 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pIVar1 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pIVar1 != (Il2CppClass *)0x0) {
    pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar4 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar7[1].klass = 0;
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar7[2].klass = pIVar1;
      il2cpp_runtime_helper_022b4080(pIVar7 + 2,pIVar1);
      *(undefined4 *)&pIVar7[2].monitor = 0;
      *(long *)((long)&pIVar7[2].monitor + 4) = position.fields._0_8_;
      *(float *)((long)&pIVar7[3].klass + 4) = fVar10;
      pIVar7[3].monitor = pvVar3;
      pIVar7[4].klass = pIVar4;
      pIVar7[4].monitor = (void *)CONCAT44(radius,radius);
      *(float *)&pIVar7[5].klass = radius;
      fStack_24 = color.fields.g;
      *(float *)((long)&pIVar7[5].klass + 4) = fVar13;
      *(float *)&pIVar7[5].monitor = fStack_24;
      *(float *)((long)&pIVar7[5].monitor + 4) = color.fields.b;
      *(float *)&pIVar7[6].klass = color.fields.a;
      *(float *)((long)&pIVar7[6].klass + 4) = duration;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar1,(System_Collections_IEnumerator_o *)pIVar7,
                 (MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  fVar10 = fVar11;
  fVar13 = fVar12;
  uVar17 = uVar16;
  fVar19 = fVar18;
  uVar21 = in_XMM6_Da;
  uVar20 = in_XMM5_Db;
  fVar15 = fVar14;
  if (g_data_057ae8a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a9 = '\x01';
  }
  pUVar9 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pIVar1 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pIVar1 != (Il2CppClass *)0x0) {
    pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar4 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar7[1].klass = 0;
    if (pIVar7 != (Il2CppObject *)0x0) {
      uStack_100 = (void *)CONCAT44(fVar14,fVar12);
      pIVar7[2].klass = pIVar1;
      il2cpp_runtime_helper_022b4080(pIVar7 + 2,pIVar1);
      *(undefined4 *)&pIVar7[2].monitor = 2;
      *(undefined8 *)((long)&pIVar7[2].monitor + 4) = uVar2;
      *(float *)((long)&pIVar7[3].klass + 4) = fVar11;
      pIVar7[3].monitor = pvVar3;
      pIVar7[4].klass = pIVar4;
      pIVar7[4].monitor = uStack_100;
      *(float *)&pIVar7[5].klass = fVar12;
      uStack_b0 = (undefined4)uVar16;
      uStack_ac = (undefined4)((ulong)uVar16 >> 0x20);
      *(undefined4 *)((long)&pIVar7[5].klass + 4) = uStack_b0;
      *(undefined4 *)&pIVar7[5].monitor = uStack_ac;
      *(float *)((long)&pIVar7[5].monitor + 4) = fVar18;
      *(undefined4 *)&pIVar7[6].klass = in_XMM5_Db;
      *(undefined4 *)((long)&pIVar7[6].klass + 4) = in_XMM6_Da;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar1,(System_Collections_IEnumerator_o *)pIVar7,
                 (MethodInfo *)0x0);
      return;
    }
  }
  uVar16 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8aa = '\x01';
  }
  pUVar9 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar8 = 0;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      pUVar9 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6843 = '\x01';
    }
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar5 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      uVar8 = 0;
      pUVar9 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
      if (__this_00 != (UnityEngine_Object_o *)0x0) {
        uStack_188 = (UnityEngine_Object_c *)CONCAT44(fVar15,fVar13);
        __this_00[1].monitor = __this;
        il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,__this);
        *(undefined4 *)&__this_00[1].fields.m_CachedPtr = 1;
        *(undefined8 *)((long)&__this_00[1].fields.m_CachedPtr + 4) = uVar16;
        *(float *)((long)&__this_00[2].klass + 4) = fVar10;
        __this_00[2].monitor = pvVar3;
        __this_00[2].fields.m_CachedPtr = iVar5;
        __this_00[3].klass = uStack_188;
        *(float *)&__this_00[3].monitor = fVar13;
        uStack_138 = (undefined4)uVar17;
        uStack_134 = (undefined4)((ulong)uVar17 >> 0x20);
        *(undefined4 *)((long)&__this_00[3].monitor + 4) = uStack_138;
        *(undefined4 *)&__this_00[3].fields.m_CachedPtr = uStack_134;
        *(float *)((long)&__this_00[3].fields.m_CachedPtr + 4) = fVar19;
        *(undefined4 *)&__this_00[4].klass = uVar20;
        *(undefined4 *)((long)&__this_00[4].klass + 4) = uVar21;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar9,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar9->fields).m_CachedPtr = uVar8;
    return;
  }
  return;
}


// Utility.CustomDebug$$SpawnCylinder
// il2cpp: void Utility_CustomDebug__SpawnCylinder (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4483c10

void Utility_CustomDebug__SpawnCylinder_4383c10
               (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  Il2CppClass *__this;
  UnityEngine_MonoBehaviour_o *__this_00;
  undefined8 uVar1;
  void *pvVar2;
  Il2CppClass *pIVar3;
  intptr_t iVar4;
  bool_conflict bVar5;
  Il2CppObject *__this_01;
  UnityEngine_Object_o *__this_02;
  undefined4 uVar6;
  UnityEngine_Object_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_28;
  float fStack_24;
  
  uVar13 = color.fields._8_8_;
  uVar12 = color.fields._0_8_;
  fVar8 = position.fields.z;
  fVar9 = fVar8;
  fVar10 = radius;
  fVar11 = height;
  fVar14 = duration;
  if (g_data_057ae8a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a9 = '\x01';
  }
  pUVar7 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  __this = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (__this != (Il2CppClass *)0x0) {
    pvVar2 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar3 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[2].klass = __this;
      il2cpp_runtime_helper_022b4080(__this_01 + 2,__this);
      *(undefined4 *)&__this_01[2].monitor = 2;
      *(long *)((long)&__this_01[2].monitor + 4) = position.fields._0_8_;
      *(float *)((long)&__this_01[3].klass + 4) = fVar8;
      __this_01[3].monitor = pvVar2;
      __this_01[4].klass = pIVar3;
      __this_01[4].monitor = (void *)CONCAT44(height,radius);
      *(float *)&__this_01[5].klass = radius;
      fStack_28 = color.fields.r;
      fStack_24 = color.fields.g;
      *(float *)((long)&__this_01[5].klass + 4) = fStack_28;
      *(float *)&__this_01[5].monitor = fStack_24;
      *(float *)((long)&__this_01[5].monitor + 4) = color.fields.b;
      *(float *)&__this_01[6].klass = color.fields.a;
      *(float *)((long)&__this_01[6].klass + 4) = duration;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8aa = '\x01';
  }
  pUVar7 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar6 = 0;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      pUVar7 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6843 = '\x01';
    }
    if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pvVar2 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar4 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      __this_02 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      uVar6 = 0;
      pUVar7 = __this_02;
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_02->fields).m_CachedPtr = 0;
      if (__this_02 != (UnityEngine_Object_o *)0x0) {
        __this_02[1].monitor = __this_00;
        il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,__this_00);
        *(undefined4 *)&__this_02[1].fields.m_CachedPtr = 1;
        *(undefined8 *)((long)&__this_02[1].fields.m_CachedPtr + 4) = uVar1;
        *(float *)((long)&__this_02[2].klass + 4) = fVar9;
        __this_02[2].monitor = pvVar2;
        __this_02[2].fields.m_CachedPtr = iVar4;
        __this_02[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar11,fVar10);
        *(float *)&__this_02[3].monitor = fVar10;
        uStack_b0 = (undefined4)uVar12;
        uStack_ac = (undefined4)((ulong)uVar12 >> 0x20);
        *(undefined4 *)((long)&__this_02[3].monitor + 4) = uStack_b0;
        *(undefined4 *)&__this_02[3].fields.m_CachedPtr = uStack_ac;
        *(int *)((long)&__this_02[3].fields.m_CachedPtr + 4) = (int)uVar13;
        *(int *)&__this_02[4].klass = (int)((ulong)uVar13 >> 0x20);
        *(float *)((long)&__this_02[4].klass + 4) = fVar14;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  (__this_00,(System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar7->fields).m_CachedPtr = uVar6;
    return;
  }
  return;
}


// Utility.CustomDebug$$SpawnCapsule
// il2cpp: void Utility_CustomDebug__SpawnCapsule (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4483dd0

void Utility_CustomDebug__SpawnCapsule_4383dd0
               (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  void *pvVar1;
  intptr_t iVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *__this_00;
  undefined4 uVar4;
  UnityEngine_Object_o *x;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057ae8aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8aa = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = 0;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      x = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6843 = '\x01';
    }
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      pvVar1 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      uVar4 = 0;
      x = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
      if (__this_00 != (UnityEngine_Object_o *)0x0) {
        __this_00[1].monitor = __this;
        il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,__this);
        *(undefined4 *)&__this_00[1].fields.m_CachedPtr = 1;
        *(long *)((long)&__this_00[1].fields.m_CachedPtr + 4) = position.fields._0_8_;
        *(float *)((long)&__this_00[2].klass + 4) = position.fields.z;
        __this_00[2].monitor = pvVar1;
        __this_00[2].fields.m_CachedPtr = iVar2;
        __this_00[3].klass = (UnityEngine_Object_c *)CONCAT44(height,radius);
        *(float *)&__this_00[3].monitor = radius;
        fStack_28 = color.fields.r;
        fStack_24 = color.fields.g;
        *(float *)((long)&__this_00[3].monitor + 4) = fStack_28;
        *(float *)&__this_00[3].fields.m_CachedPtr = fStack_24;
        *(float *)((long)&__this_00[3].fields.m_CachedPtr + 4) = color.fields.b;
        *(float *)&__this_00[4].klass = color.fields.a;
        *(float *)((long)&__this_00[4].klass + 4) = duration;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)x,(MethodInfo *)0x0);
    *(undefined4 *)&(x->fields).m_CachedPtr = uVar4;
    return;
  }
  return;
}


// Utility.CustomDebug$$DrawLineCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CustomDebug__DrawLineCoroutine (Utility_CustomDebug_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4483550

System_Collections_IEnumerator_o *
Utility_CustomDebug__DrawLineCoroutine
          (Utility_CustomDebug_o *__this,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
          UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  intptr_t iVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  undefined4 extraout_var;
  UnityEngine_Coroutine_o *pUVar9;
  undefined4 extraout_var_00;
  Il2CppClass *__this_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  UnityEngine_Object_o *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar10;
  undefined4 uVar11;
  Il2CppClass *pIVar12;
  UnityEngine_Object_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 in_XMM3_Db;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 in_XMM6_Db;
  undefined8 in_XMM7_Qa;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_f8;
  undefined4 uStack_f4;
  
  fVar29 = color.fields.b;
  fVar30 = color.fields.a;
  fVar26 = color.fields.r;
  fVar27 = color.fields.g;
  fVar22 = end.fields.z;
  uVar19 = end.fields._0_8_;
  fVar14 = start.fields.z;
  fVar15 = fVar14;
  uVar20 = uVar19;
  fVar23 = fVar22;
  fVar17 = fVar26;
  fVar16 = fVar27;
  fVar24 = fVar29;
  fVar28 = fVar30;
  fVar31 = duration;
  if (g_data_057ae8ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
    g_data_057ae8ab = '\x01';
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = 0;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[2].klass = start.fields._0_8_;
    *(float *)&pIVar8[2].monitor = fVar14;
    *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar19;
    *(float *)((long)&pIVar8[3].klass + 4) = fVar22;
    *(float *)&pIVar8[3].monitor = fVar26;
    *(float *)((long)&pIVar8[3].monitor + 4) = fVar27;
    *(float *)&pIVar8[4].klass = fVar29;
    *(float *)((long)&pIVar8[4].klass + 4) = fVar30;
    *(float *)&pIVar8[4].monitor = duration;
    return (System_Collections_IEnumerator_o *)pIVar8;
  }
  pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  fVar14 = fVar15;
  uVar19 = uVar20;
  fVar22 = fVar23;
  fVar26 = fVar17;
  fVar27 = fVar16;
  fVar29 = fVar24;
  fVar30 = fVar28;
  fVar32 = fVar31;
  if (g_data_057ae8a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a6 = '\x01';
  }
  pUVar13 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar7);
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae8ab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
      g_data_057ae8ab = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[2].klass = pIVar12;
      *(float *)&pIVar8[2].monitor = fVar15;
      *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar20;
      *(float *)((long)&pIVar8[3].klass + 4) = fVar23;
      *(float *)&pIVar8[3].monitor = fVar17;
      *(float *)((long)&pIVar8[3].monitor + 4) = fVar16;
      *(float *)&pIVar8[4].klass = fVar24;
      *(float *)((long)&pIVar8[4].klass + 4) = fVar28;
      *(float *)&pIVar8[4].monitor = fVar31;
      pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         (pUVar1,(System_Collections_IEnumerator_o *)pIVar8,(MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar9;
    }
  }
  uVar20 = il2cpp_runtime_helper_022b2c90();
  fVar15 = fVar14;
  uVar21 = uVar19;
  fVar23 = fVar22;
  fVar17 = fVar26;
  uVar11 = in_XMM3_Db;
  if (g_data_057ae8a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a7 = '\x01';
  }
  pIVar12 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar10 = 0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar7);
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    pIVar12 = (Il2CppClass *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  uVar4 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  pIVar5 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  if (g_data_057a6932 == '\0') {
    pIVar12 = (Il2CppClass *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pIVar2 = *(Il2CppClass **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    uVar25 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    uVar10 = 0;
    pIVar12 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&((UnityEngine_Object_Fields *)&(__this_00->_1).name)->m_CachedPtr = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = pUVar1;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pUVar1);
      (__this_00->_1).byval_arg.bits = 3;
      *(undefined8 *)&(__this_00->_1).byval_arg.field_0xc = uVar20;
      *(float *)((long)&(__this_00->_1).this_arg.data + 4) = fVar14;
      *(undefined8 *)&(__this_00->_1).this_arg.bits = uVar4;
      (__this_00->_1).element_class = pIVar5;
      (__this_00->_1).castClass = pIVar2;
      *(undefined4 *)&(__this_00->_1).declaringType = uVar25;
      local_f8 = (undefined4)uVar19;
      uStack_f4 = (undefined4)((ulong)uVar19 >> 0x20);
      *(undefined4 *)((long)&(__this_00->_1).declaringType + 4) = local_f8;
      *(undefined4 *)&(__this_00->_1).parent = uStack_f4;
      *(float *)((long)&(__this_00->_1).parent + 4) = fVar22;
      *(undefined4 *)&(__this_00->_1).generic_class = in_XMM3_Db;
      *(float *)((long)&(__this_00->_1).generic_class + 4) = fVar26;
      pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         (pUVar1,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar9;
    }
  }
  uVar20 = il2cpp_runtime_helper_022b2c90();
  pvVar3 = (void *)CONCAT44(fVar27,fVar17);
  fVar16 = fVar15;
  uVar19 = uVar21;
  fVar24 = fVar23;
  fVar28 = fVar29;
  fVar31 = fVar32;
  uVar25 = uVar11;
  if (g_data_057ae8ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
    g_data_057ae8ac = '\x01';
  }
  uVar18 = (undefined4)uVar19;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = 0;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[2].klass = pIVar12;
    il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar12);
    *(undefined4 *)&pIVar8[2].monitor = uVar10;
    *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar20;
    *(float *)((long)&pIVar8[3].klass + 4) = fVar15;
    local_1a0 = (undefined4)uVar21;
    uStack_19c = (undefined4)((ulong)uVar21 >> 0x20);
    *(undefined4 *)&pIVar8[3].monitor = local_1a0;
    *(undefined4 *)((long)&pIVar8[3].monitor + 4) = uStack_19c;
    *(float *)&pIVar8[4].klass = fVar23;
    *(undefined4 *)((long)&pIVar8[4].klass + 4) = uVar11;
    pIVar8[4].monitor = pvVar3;
    *(float *)&pIVar8[5].klass = fVar29;
    *(float *)((long)&pIVar8[5].klass + 4) = fVar32;
    *(undefined4 *)&pIVar8[5].monitor = in_XMM6_Db;
    *(int *)((long)&pIVar8[5].monitor + 4) = (int)in_XMM7_Qa;
    *(int *)&pIVar8[6].klass = (int)((ulong)in_XMM7_Qa >> 0x20);
    *(float *)((long)&pIVar8[6].klass + 4) = fVar14;
    return (System_Collections_IEnumerator_o *)pIVar8;
  }
  uVar20 = il2cpp_runtime_helper_022b2c90();
  fVar15 = fVar16;
  fVar23 = fVar24;
  fVar14 = fVar17;
  fVar22 = fVar27;
  fVar26 = fVar28;
  uVar11 = uVar18;
  if (g_data_057ae8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a8 = '\x01';
  }
  pUVar13 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_01,bVar7);
  }
  pIVar12 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pIVar12 != (Il2CppClass *)0x0) {
    pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar5 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[2].klass = pIVar12;
      il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar12);
      *(undefined4 *)&pIVar8[2].monitor = 0;
      *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar20;
      *(float *)((long)&pIVar8[3].klass + 4) = fVar16;
      pIVar8[3].monitor = pvVar3;
      pIVar8[4].klass = pIVar5;
      pIVar8[4].monitor = (void *)CONCAT44(uVar18,uVar18);
      *(undefined4 *)&pIVar8[5].klass = uVar18;
      *(float *)((long)&pIVar8[5].klass + 4) = fVar24;
      *(undefined4 *)&pIVar8[5].monitor = uVar25;
      *(float *)((long)&pIVar8[5].monitor + 4) = fVar17;
      *(float *)&pIVar8[6].klass = fVar27;
      *(float *)((long)&pIVar8[6].klass + 4) = fVar28;
      pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)pIVar12,(System_Collections_IEnumerator_o *)pIVar8,
                          (MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar9;
    }
  }
  uVar20 = il2cpp_runtime_helper_022b2c90();
  fVar17 = fVar15;
  fVar16 = fVar23;
  fVar24 = fVar14;
  fVar28 = fVar22;
  fVar27 = fVar26;
  fVar29 = fVar30;
  fVar32 = fVar31;
  uVar10 = uVar11;
  if (g_data_057ae8a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a9 = '\x01';
  }
  pUVar13 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_02,bVar7);
  }
  pIVar12 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pIVar12 != (Il2CppClass *)0x0) {
    pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar5 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[2].klass = pIVar12;
      il2cpp_runtime_helper_022b4080(pIVar8 + 2,pIVar12);
      *(undefined4 *)&pIVar8[2].monitor = 2;
      *(undefined8 *)((long)&pIVar8[2].monitor + 4) = uVar20;
      *(float *)((long)&pIVar8[3].klass + 4) = fVar15;
      pIVar8[3].monitor = pvVar3;
      pIVar8[4].klass = pIVar5;
      pIVar8[4].monitor = (void *)CONCAT44(fVar23,uVar11);
      *(undefined4 *)&pIVar8[5].klass = uVar11;
      *(float *)((long)&pIVar8[5].klass + 4) = fVar14;
      *(float *)&pIVar8[5].monitor = fVar22;
      *(float *)((long)&pIVar8[5].monitor + 4) = fVar26;
      *(float *)&pIVar8[6].klass = fVar30;
      *(float *)((long)&pIVar8[6].klass + 4) = fVar31;
      pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)pIVar12,(System_Collections_IEnumerator_o *)pIVar8,
                          (MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar9;
    }
  }
  uVar20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8aa = '\x01';
  }
  pUVar13 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar11 = 0;
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      pUVar13 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6843 = '\x01';
    }
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar6 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      __this_01 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      uVar11 = 0;
      pUVar13 = __this_01;
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
      if (__this_01 != (UnityEngine_Object_o *)0x0) {
        __this_01[1].monitor = pUVar1;
        il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,pUVar1);
        *(undefined4 *)&__this_01[1].fields.m_CachedPtr = 1;
        *(undefined8 *)((long)&__this_01[1].fields.m_CachedPtr + 4) = uVar20;
        *(float *)((long)&__this_01[2].klass + 4) = fVar17;
        __this_01[2].monitor = pvVar3;
        __this_01[2].fields.m_CachedPtr = iVar6;
        __this_01[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar16,uVar10);
        *(undefined4 *)&__this_01[3].monitor = uVar10;
        *(float *)((long)&__this_01[3].monitor + 4) = fVar24;
        *(float *)&__this_01[3].fields.m_CachedPtr = fVar28;
        *(float *)((long)&__this_01[3].fields.m_CachedPtr + 4) = fVar27;
        *(float *)&__this_01[4].klass = fVar29;
        *(float *)((long)&__this_01[4].klass + 4) = fVar32;
        pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           (pUVar1,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
        return (System_Collections_IEnumerator_o *)pUVar9;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar13->fields).m_CachedPtr = uVar11;
    return extraout_RAX;
  }
  return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_03,bVar7);
}


// Utility.CustomDebug$$SpawnPrimitiveCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CustomDebug__SpawnPrimitiveCoroutine (Utility_CustomDebug_o* __this, int32_t type, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o Rotation, UnityEngine_Vector3_o size, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4483950

System_Collections_IEnumerator_o *
Utility_CustomDebug__SpawnPrimitiveCoroutine
          (Utility_CustomDebug_o *__this,int32_t type,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o Rotation,UnityEngine_Vector3_o size,UnityEngine_Color_o color,
          float duration,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  UnityEngine_MonoBehaviour_o *__this_00;
  undefined8 uVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  intptr_t iVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  undefined4 extraout_var;
  UnityEngine_Coroutine_o *pUVar8;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar9;
  UnityEngine_Object_o *pUVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  void *pvVar16;
  void *pvVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 in_XMM5_Db;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_64;
  float fStack_34;
  
  fVar22 = color.fields.r;
  uVar14 = Rotation.fields._8_8_;
  fVar20 = Rotation.fields.x;
  fVar18 = size.fields.z;
  pvVar16 = size.fields._0_8_;
  fVar11 = position.fields.z;
  fVar12 = fVar11;
  pvVar17 = pvVar16;
  fVar19 = fVar18;
  fVar23 = fVar22;
  fVar24 = fVar20;
  if (g_data_057ae8ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
    g_data_057ae8ac = '\x01';
  }
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
  System_Object___ctor(pIVar7,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar7[1].klass = 0;
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar7[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar7 + 2,__this);
    *(int32_t *)&pIVar7[2].monitor = type;
    *(long *)((long)&pIVar7[2].monitor + 4) = position.fields._0_8_;
    *(float *)((long)&pIVar7[3].klass + 4) = fVar11;
    fStack_64 = Rotation.fields.y;
    *(float *)&pIVar7[3].monitor = fVar20;
    *(float *)((long)&pIVar7[3].monitor + 4) = fStack_64;
    *(float *)&pIVar7[4].klass = Rotation.fields.z;
    *(float *)((long)&pIVar7[4].klass + 4) = Rotation.fields.w;
    pIVar7[4].monitor = pvVar16;
    *(float *)&pIVar7[5].klass = fVar18;
    fStack_34 = color.fields.g;
    *(float *)((long)&pIVar7[5].klass + 4) = fVar22;
    *(float *)&pIVar7[5].monitor = fStack_34;
    *(float *)((long)&pIVar7[5].monitor + 4) = color.fields.b;
    *(float *)&pIVar7[6].klass = color.fields.a;
    *(float *)((long)&pIVar7[6].klass + 4) = duration;
    return (System_Collections_IEnumerator_o *)pIVar7;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  fVar11 = fVar12;
  uVar15 = uVar14;
  pvVar16 = pvVar17;
  fVar20 = fVar19;
  fVar18 = fVar24;
  if (g_data_057ae8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a8 = '\x01';
  }
  uVar9 = (undefined4)uVar15;
  pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar6);
  }
  pIVar1 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pIVar1 != (Il2CppClass *)0x0) {
    pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar4 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (g_data_057ae8ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
      g_data_057ae8ac = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar7[1].klass = 0;
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar7[2].klass = pIVar1;
      il2cpp_runtime_helper_022b4080(pIVar7 + 2,pIVar1);
      *(undefined4 *)&pIVar7[2].monitor = 0;
      *(undefined8 *)((long)&pIVar7[2].monitor + 4) = uVar2;
      *(float *)((long)&pIVar7[3].klass + 4) = fVar12;
      pIVar7[3].monitor = pvVar3;
      pIVar7[4].klass = pIVar4;
      pIVar7[4].monitor = (void *)CONCAT44(fVar24,fVar24);
      *(float *)&pIVar7[5].klass = fVar24;
      uStack_b0 = (undefined4)uVar14;
      uStack_ac = (undefined4)((ulong)uVar14 >> 0x20);
      *(undefined4 *)((long)&pIVar7[5].klass + 4) = uStack_b0;
      *(undefined4 *)&pIVar7[5].monitor = uStack_ac;
      *(int *)((long)&pIVar7[5].monitor + 4) = (int)pvVar17;
      *(int *)&pIVar7[6].klass = (int)((ulong)pvVar17 >> 0x20);
      *(float *)((long)&pIVar7[6].klass + 4) = fVar19;
      pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)pIVar1,(System_Collections_IEnumerator_o *)pIVar7,
                          (MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar8;
    }
  }
  uVar14 = il2cpp_runtime_helper_022b2c90();
  fVar12 = fVar11;
  pvVar17 = pvVar16;
  fVar19 = fVar20;
  fVar24 = fVar23;
  uVar21 = in_XMM5_Db;
  uVar13 = uVar9;
  fVar22 = fVar18;
  if (g_data_057ae8a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a9 = '\x01';
  }
  pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pIVar1 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    if (pIVar1 != (Il2CppClass *)0x0) {
      pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      pIVar4 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor(pIVar7,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar7[1].klass = 0;
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar7[2].klass = pIVar1;
        il2cpp_runtime_helper_022b4080(pIVar7 + 2,pIVar1);
        *(undefined4 *)&pIVar7[2].monitor = 2;
        *(undefined8 *)((long)&pIVar7[2].monitor + 4) = uVar14;
        *(float *)((long)&pIVar7[3].klass + 4) = fVar11;
        pIVar7[3].monitor = pvVar3;
        pIVar7[4].klass = pIVar4;
        pIVar7[4].monitor = (void *)CONCAT44(uVar9,fVar18);
        *(float *)&pIVar7[5].klass = fVar18;
        uStack_138 = SUB84(pvVar16,0);
        uStack_134 = (undefined4)((ulong)pvVar16 >> 0x20);
        *(undefined4 *)((long)&pIVar7[5].klass + 4) = uStack_138;
        *(undefined4 *)&pIVar7[5].monitor = uStack_134;
        *(float *)((long)&pIVar7[5].monitor + 4) = fVar20;
        *(undefined4 *)&pIVar7[6].klass = in_XMM5_Db;
        *(float *)((long)&pIVar7[6].klass + 4) = fVar23;
        pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)pIVar1,(System_Collections_IEnumerator_o *)pIVar7,
                            (MethodInfo *)0x0);
        return (System_Collections_IEnumerator_o *)pUVar8;
      }
    }
    uVar14 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae8aa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae8aa = '\x01';
    }
    pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar9 = 0;
    bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar10 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pvVar16 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar5 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        __this_01 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        uVar9 = 0;
        pUVar10 = __this_01;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
        if (__this_01 != (UnityEngine_Object_o *)0x0) {
          __this_01[1].monitor = __this_00;
          il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,__this_00);
          *(undefined4 *)&__this_01[1].fields.m_CachedPtr = 1;
          *(undefined8 *)((long)&__this_01[1].fields.m_CachedPtr + 4) = uVar14;
          *(float *)((long)&__this_01[2].klass + 4) = fVar12;
          __this_01[2].monitor = pvVar16;
          __this_01[2].fields.m_CachedPtr = iVar5;
          __this_01[3].klass = (UnityEngine_Object_c *)CONCAT44(uVar13,fVar22);
          *(float *)&__this_01[3].monitor = fVar22;
          uStack_1c0 = SUB84(pvVar17,0);
          uStack_1bc = (undefined4)((ulong)pvVar17 >> 0x20);
          *(undefined4 *)((long)&__this_01[3].monitor + 4) = uStack_1c0;
          *(undefined4 *)&__this_01[3].fields.m_CachedPtr = uStack_1bc;
          *(float *)((long)&__this_01[3].fields.m_CachedPtr + 4) = fVar19;
          *(undefined4 *)&__this_01[4].klass = uVar21;
          *(float *)((long)&__this_01[4].klass + 4) = fVar24;
          pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             (__this_00,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
          return (System_Collections_IEnumerator_o *)pUVar8;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar10,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar10->fields).m_CachedPtr = uVar9;
      return extraout_RAX;
    }
    return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_01,bVar6);
  }
  return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar6);
}


// Utility.CustomDebug$$DrawLineObject
// il2cpp: UnityEngine_GameObject_o* Utility_CustomDebug__DrawLineObject (Utility_CustomDebug_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4482460

UnityEngine_GameObject_o *
Utility_CustomDebug__DrawLineObject
          (Utility_CustomDebug_o *__this,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
          UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  UnityEngine_Vector3_Fields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar15;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  System_Collections_Generic_Dictionary_object__object__o *pSVar29;
  long lVar30;
  UnityEngine_Quaternion_Fields *pUVar31;
  UnityEngine_MonoBehaviour_o *pUVar32;
  UnityEngine_Object_c *pUVar33;
  void *pvVar34;
  intptr_t iVar35;
  Il2CppClass *pIVar36;
  UnityEngine_Quaternion_Fields Rotation;
  bool_conflict bVar37;
  int32_t iVar38;
  MethodInfo *pMVar39;
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar40;
  MethodInfo *pMVar41;
  System_String_o *pSVar42;
  UnityEngine_Object_o *pUVar43;
  UnityEngine_Transform_o *pUVar44;
  MethodInfo *pMVar45;
  MethodInfo *__this_01;
  UnityEngine_GameObject_o *pUVar46;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar47;
  undefined4 extraout_var;
  Il2CppObject *pIVar48;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar49;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  UnityEngine_GameObject_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *pMVar50;
  Utility_CustomDebug_o *__this_03;
  undefined8 uVar51;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar52;
  float in_XMM1_Db;
  float in_XMM3_Db;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  float fVar57;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar58;
  UnityEngine_Vector3_o UVar59;
  UnityEngine_Vector3_o UVar60;
  UnityEngine_Vector3_o UVar61;
  UnityEngine_Vector3_o UVar62;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Vector3_o size_03;
  UnityEngine_Vector3_o size_04;
  UnityEngine_Color_o value;
  UnityEngine_Quaternion_o UVar63;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  float fStack_400;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_38c;
  undefined8 uVar56;
  
  fVar8 = color.fields.b;
  fVar21 = color.fields.a;
  fVar17 = color.fields.r;
  fVar7 = color.fields.g;
  fVar16 = end.fields.z;
  fVar2 = end.fields.x;
  fVar3 = end.fields.y;
  fVar6 = start.fields.z;
  fVar5 = duration;
  if (g_data_057ae8ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugLine");
    il2cpp_runtime_helper_023445d0(&"Sprites/Default");
    g_data_057ae8ad = '\x01';
  }
  pMVar39 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pMVar50 = "DebugLine";
  pMVar45 = pMVar39;
  UnityEngine_GameObject___ctor
            ((UnityEngine_GameObject_o *)pMVar39,(System_String_o *)"DebugLine",(MethodInfo *)0x0);
  if ((pMVar39 != (MethodInfo *)0x0) &&
     (pMVar50 = MethodInfo_LineRenderer_AddComponent_LineRenderer, pMVar45 = pMVar39,
     __this_00 = (UnityEngine_LineRenderer_o *)
                 UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)pMVar39,(MethodInfo_255A020 *)MethodInfo_LineRenderer_AddComponent_LineRenderer),
     __this_00 != (UnityEngine_LineRenderer_o *)0x0)) {
    UnityEngine_LineRenderer__set_positionCount(__this_00,2,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__SetPosition(__this_00,0,start,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__SetPosition(__this_00,1,end,(MethodInfo *)0x0);
    shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
    pUVar40 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    UnityEngine_Material___ctor(pUVar40,shader,(MethodInfo *)0x0);
    UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this_00,pUVar40,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_endColor(__this_00,color,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_startColor(__this_00,color,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_endWidth(__this_00,0.05,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_startWidth(__this_00,0.05,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pMVar39,duration,(MethodInfo *)0x0);
    return (UnityEngine_GameObject_o *)pMVar39;
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar22 = fVar6;
  fVar13 = fVar2;
  fVar14 = fVar3;
  fVar9 = fVar16;
  fVar4 = fVar17;
  fVar18 = fVar7;
  fVar19 = fVar8;
  fVar10 = fVar21;
  if (g_data_057ae89f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae89f = '\x01';
  }
  pMVar39 = pMVar45;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar45,pMVar50);
  if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
    fVar5 = 0.0;
    in_XMM6_Db = 0.0;
    in_XMM1_Db = 0.0;
    UVar59.fields.y = fVar3;
    UVar59.fields.x = fVar2;
    in_XMM3_Db = 0.0;
    color_07.fields.g = fVar7;
    color_07.fields.r = fVar17;
    color_07.fields.a = fVar21;
    color_07.fields.b = fVar8;
    UVar58.fields.z = fVar6;
    UVar58.fields.x = (float)(int)uVar51;
    UVar58.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    UVar59.fields.z = fVar16;
    pMVar41 = (MethodInfo *)
              Utility_CustomDebug__DrawLineObject
                        ((Utility_CustomDebug_o *)pMVar39,UVar58,UVar59,color_07,0.0,pMVar50);
    fVar22 = fVar6;
    fVar13 = fVar2;
    fVar14 = fVar3;
    fVar9 = fVar16;
    fVar4 = fVar17;
    fVar18 = fVar7;
    fVar19 = fVar8;
    fVar10 = fVar21;
    if (pMVar41 != (MethodInfo *)0x0) {
      pMVar50 = pMVar45;
      pMVar39 = pMVar41;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar41,(System_String_o *)pMVar45,(MethodInfo *)0x0);
      fVar22 = fVar6;
      fVar13 = fVar2;
      fVar14 = fVar3;
      fVar9 = fVar16;
      fVar4 = fVar17;
      fVar18 = fVar7;
      fVar19 = fVar8;
      fVar10 = fVar21;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar50 = (MethodInfo *)0x0;
        pMVar39 = pMVar41;
        pSVar42 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar41,(MethodInfo *)0x0);
        fVar22 = fVar6;
        fVar13 = fVar2;
        fVar14 = fVar3;
        fVar9 = fVar16;
        fVar4 = fVar17;
        fVar18 = fVar7;
        fVar19 = fVar8;
        fVar10 = fVar21;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar42,(Il2CppObject *)pMVar41,MethodInfo_Void_Add);
          return (UnityEngine_GameObject_o *)pMVar45;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar6 = fVar22;
  if (g_data_057ae8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a0 = '\x01';
  }
  pMVar41 = pMVar39;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar39,pMVar50);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar45 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    pMVar41 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar45 = extraout_RDX_00;
  }
  pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pUVar31->x;
  fVar16 = pUVar31->y;
  fVar3 = pUVar31->z;
  fVar17 = pUVar31->w;
  Rotation = *pUVar31;
  if (g_data_057a6932 == '\0') {
    pMVar41 = (MethodInfo *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
    pMVar45 = extraout_RDX_01;
  }
  if (lVar30 != 0) {
    pUVar1 = (UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    fVar4 = pUVar1->x;
    fVar18 = pUVar1->y;
    fVar19 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    fVar10 = 0.0;
    pMVar50 = (MethodInfo *)0x3;
    in_XMM1_Db = 0.0;
    color_00.fields.g = fVar14;
    color_00.fields.r = fVar13;
    color_00.fields.a = in_XMM3_Db;
    color_00.fields.b = fVar9;
    UVar60.fields.z = fVar22;
    UVar60.fields.x = (float)(int)uVar51;
    UVar60.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    pUVar43 = (UnityEngine_Object_o *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar41,3,UVar60,(UnityEngine_Quaternion_o)Rotation,
                         (UnityEngine_Vector3_o)*pUVar1,color_00,pMVar45);
    fVar6 = fVar22;
    fVar5 = fVar13;
    in_XMM6_Db = fVar14;
    in_XMM7_Da = fVar9;
    in_XMM7_Db = in_XMM3_Db;
    if (pUVar43 != (UnityEngine_Object_o *)0x0) {
      pMVar50 = pMVar39;
      UnityEngine_Object__set_name(pUVar43,(System_String_o *)pMVar39,(MethodInfo *)0x0);
      fVar6 = fVar22;
      fVar5 = fVar13;
      in_XMM6_Db = fVar14;
      in_XMM7_Da = fVar9;
      in_XMM7_Db = in_XMM3_Db;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar50 = (MethodInfo *)0x0;
        pSVar42 = UnityEngine_Object__get_name(pUVar43,(MethodInfo *)0x0);
        fVar6 = fVar22;
        fVar5 = fVar13;
        in_XMM6_Db = fVar14;
        in_XMM7_Da = fVar9;
        in_XMM7_Db = in_XMM3_Db;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar42,(Il2CppObject *)pUVar43,MethodInfo_Void_Add);
          return (UnityEngine_GameObject_o *)pMVar39;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar7 = fVar6;
  fVar8 = fVar2;
  fVar21 = fVar16;
  fVar22 = fVar3;
  fVar13 = fVar17;
  fVar14 = fVar4;
  fVar9 = fVar18;
  fVar23 = fVar19;
  fVar11 = fVar5;
  fVar12 = in_XMM6_Db;
  fVar53 = in_XMM7_Da;
  fVar57 = in_XMM7_Db;
  if (g_data_057ae8ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugPrimitive");
    il2cpp_runtime_helper_023445d0(&"Standard");
    g_data_057ae8ae = '\x01';
  }
  pMVar39 = (MethodInfo *)((ulong)pMVar50 & 0xffffffff);
  pMVar45 = (MethodInfo *)0x0;
  pMVar50 = (MethodInfo *)UnityEngine_GameObject__CreatePrimitive((int32_t)pMVar50,(MethodInfo *)0x0);
  if (pMVar50 != (MethodInfo *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar50,"DebugPrimitive",(MethodInfo *)0x0);
    pMVar45 = (MethodInfo *)0x0;
    pMVar39 = pMVar50;
    pUVar44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar50,(MethodInfo *)0x0);
    if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
      in_XMM1_Db = 0.0;
      UVar61.fields.z = fVar6;
      UVar61.fields.x = (float)(int)uVar51;
      UVar61.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
      UnityEngine_Transform__set_position(pUVar44,UVar61,(MethodInfo *)0x0);
      pMVar45 = (MethodInfo *)0x0;
      pMVar39 = pMVar50;
      pUVar44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar50,(MethodInfo *)0x0);
      fVar7 = fVar6;
      if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
        UVar63.fields.y = fVar16;
        UVar63.fields.x = fVar2;
        UVar63.fields.w = fVar17;
        UVar63.fields.z = fVar3;
        UnityEngine_Transform__set_rotation(pUVar44,UVar63,(MethodInfo *)0x0);
        pMVar45 = (MethodInfo *)0x0;
        pMVar39 = pMVar50;
        pUVar44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar50,(MethodInfo *)0x0)
        ;
        fVar7 = fVar3;
        in_XMM1_Db = fVar17;
        if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
          UVar62.fields.y = fVar18;
          UVar62.fields.x = fVar4;
          in_XMM1_Db = 0.0;
          UVar62.fields.z = fVar19;
          UnityEngine_Transform__set_localScale(pUVar44,UVar62,(MethodInfo *)0x0);
          pMVar41 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar50,MethodInfo_Renderer_GetComponent_Renderer);
          fVar7 = fVar19;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            fVar7 = fVar19;
          }
          bVar37 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 != '\0') {
            pMVar45 = (MethodInfo *)UnityEngine_Shader__Find("Standard",(MethodInfo *)0x0);
            __this_01 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
            pMVar39 = __this_01;
            UnityEngine_Material___ctor
                      ((UnityEngine_Material_o *)__this_01,(UnityEngine_Shader_o *)pMVar45,(MethodInfo *)0x0);
            if (pMVar41 == (MethodInfo *)0x0) goto label_04482b04;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pMVar41,(UnityEngine_Material_o *)__this_01,(MethodInfo *)0x0
                      );
            pMVar45 = (MethodInfo *)0x0;
            pUVar40 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pMVar41,(MethodInfo *)0x0);
            pMVar39 = pMVar41;
            if (pUVar40 == (UnityEngine_Material_o *)0x0) goto label_04482b04;
            value.fields.g = in_XMM6_Db;
            value.fields.r = fVar5;
            value.fields.a = in_XMM7_Db;
            value.fields.b = in_XMM7_Da;
            UnityEngine_Material__set_color(pUVar40,value,(MethodInfo *)0x0);
            fVar7 = in_XMM7_Da;
            in_XMM1_Db = in_XMM7_Db;
          }
          pMVar41 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar50,MethodInfo_Collider_GetComponent_Collider);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar45 = (MethodInfo *)0x0;
          pMVar39 = pMVar41;
          bVar37 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 == '\0') {
            return (UnityEngine_GameObject_o *)pMVar50;
          }
          if (pMVar41 != (MethodInfo *)0x0) {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pMVar41,0,(MethodInfo *)0x0);
            return (UnityEngine_GameObject_o *)pMVar50;
          }
        }
      }
    }
  }
label_04482b04:
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar2 = fVar7;
  fVar5 = fVar8;
  fVar19 = fVar21;
  fVar6 = fVar22;
  fVar20 = fVar13;
  fVar3 = fVar14;
  fVar16 = fVar9;
  if (g_data_057ae8a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a1 = '\x01';
  }
  pMVar41 = pMVar39;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar39,pMVar45);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar50 = extraout_RDX_02;
  if (g_data_057a6843 == '\0') {
    pMVar41 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar50 = extraout_RDX_03;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar5 = pUVar31->x;
    fVar19 = pUVar31->y;
    fVar6 = pUVar31->z;
    fVar20 = pUVar31->w;
    pMVar45 = (MethodInfo *)0x0;
    in_XMM1_Db = 0.0;
    color_01.fields.g = fVar13;
    color_01.fields.r = fVar22;
    color_01.fields.a = fVar9;
    color_01.fields.b = fVar14;
    position.fields.z = fVar7;
    position.fields.x = (float)(int)uVar51;
    position.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    size.fields.y = fVar8;
    size.fields.x = fVar8;
    size.fields.z = fVar8;
    fVar16 = fVar8;
    fVar23 = fVar8;
    pMVar50 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar41,0,position,(UnityEngine_Quaternion_o)*pUVar31,size,
                         color_01,pMVar50);
    fVar2 = fVar7;
    fVar3 = fVar8;
    fVar10 = fVar21;
    fVar11 = fVar22;
    fVar12 = fVar13;
    fVar53 = fVar14;
    fVar57 = fVar9;
    if (pMVar50 != (MethodInfo *)0x0) {
      pMVar45 = pMVar39;
      pMVar41 = pMVar50;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar50,(System_String_o *)pMVar39,(MethodInfo *)0x0);
      fVar2 = fVar7;
      fVar3 = fVar8;
      fVar10 = fVar21;
      fVar11 = fVar22;
      fVar12 = fVar13;
      fVar53 = fVar14;
      fVar57 = fVar9;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar45 = (MethodInfo *)0x0;
        pMVar41 = pMVar50;
        pSVar42 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar50,(MethodInfo *)0x0);
        fVar2 = fVar7;
        fVar3 = fVar8;
        fVar10 = fVar21;
        fVar11 = fVar22;
        fVar12 = fVar13;
        fVar53 = fVar14;
        fVar57 = fVar9;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar42,(Il2CppObject *)pMVar50,MethodInfo_Void_Add);
          return (UnityEngine_GameObject_o *)pMVar39;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar17 = fVar2;
  fVar7 = fVar5;
  fVar21 = fVar19;
  fVar8 = fVar6;
  fVar22 = fVar20;
  fVar4 = fVar3;
  fVar18 = fVar16;
  fVar13 = fVar23;
  fVar14 = fVar10;
  if (g_data_057ae8a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a2 = '\x01';
    fVar22 = fVar20;
  }
  pMVar39 = pMVar41;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar41,pMVar45);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar50 = extraout_RDX_04;
  if (g_data_057a6843 == '\0') {
    pMVar39 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar50 = extraout_RDX_05;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar7 = pUVar31->x;
    fVar21 = pUVar31->y;
    fVar8 = pUVar31->z;
    fVar22 = pUVar31->w;
    pMVar45 = (MethodInfo *)0x2;
    in_XMM1_Db = 0.0;
    color_02.fields.g = fVar16;
    color_02.fields.r = fVar3;
    color_02.fields.a = fVar10;
    color_02.fields.b = fVar23;
    position_00.fields.z = fVar2;
    position_00.fields.x = (float)(int)uVar51;
    position_00.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    size_00.fields.y = fVar6;
    size_00.fields.x = fVar5;
    size_00.fields.z = fVar5;
    fVar13 = fVar5;
    pMVar50 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar39,2,position_00,(UnityEngine_Quaternion_o)*pUVar31,
                         size_00,color_02,pMVar50);
    fVar17 = fVar2;
    fVar4 = fVar5;
    fVar18 = fVar6;
    fVar14 = fVar19;
    fVar11 = fVar3;
    fVar12 = fVar16;
    fVar53 = fVar23;
    fVar57 = fVar10;
    if (pMVar50 != (MethodInfo *)0x0) {
      pMVar45 = pMVar41;
      pMVar39 = pMVar50;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar50,(System_String_o *)pMVar41,(MethodInfo *)0x0);
      fVar17 = fVar2;
      fVar4 = fVar5;
      fVar18 = fVar6;
      fVar14 = fVar19;
      fVar11 = fVar3;
      fVar12 = fVar16;
      fVar53 = fVar23;
      fVar57 = fVar10;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar45 = (MethodInfo *)0x0;
        pMVar39 = pMVar50;
        pSVar42 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar50,(MethodInfo *)0x0);
        fVar17 = fVar2;
        fVar4 = fVar5;
        fVar18 = fVar6;
        fVar14 = fVar19;
        fVar11 = fVar3;
        fVar12 = fVar16;
        fVar53 = fVar23;
        fVar57 = fVar10;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar42,(Il2CppObject *)pMVar50,MethodInfo_Void_Add);
          return (UnityEngine_GameObject_o *)pMVar41;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  fVar5 = fVar17;
  fVar9 = fVar7;
  fVar23 = fVar21;
  fVar10 = fVar8;
  fVar24 = fVar22;
  fStack_400 = fVar4;
  fVar6 = fVar18;
  fVar2 = fVar13;
  fVar3 = fVar14;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar24 = fVar22;
  }
  pMVar41 = pMVar39;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar39,pMVar45);
  lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar50 = extraout_RDX_06;
  if (g_data_057a6843 == '\0') {
    pMVar41 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar50 = extraout_RDX_07;
  }
  if (lVar30 != 0) {
    pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar9 = pUVar31->x;
    fVar23 = pUVar31->y;
    fVar10 = pUVar31->z;
    fVar24 = pUVar31->w;
    pMVar45 = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    color_03.fields.g = fVar18;
    color_03.fields.r = fVar4;
    color_03.fields.a = fVar14;
    color_03.fields.b = fVar13;
    position_01.fields.z = fVar17;
    position_01.fields.x = (float)(int)uVar51;
    position_01.fields.y = (float)(int)((ulong)uVar51 >> 0x20);
    size_01.fields.y = fVar8;
    size_01.fields.x = fVar7;
    size_01.fields.z = fVar7;
    fVar2 = fVar7;
    pMVar50 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar41,1,position_01,(UnityEngine_Quaternion_o)*pUVar31,
                         size_01,color_03,pMVar50);
    fVar5 = fVar17;
    fStack_400 = fVar7;
    fVar6 = fVar8;
    fVar3 = fVar21;
    fVar11 = fVar4;
    fVar12 = fVar18;
    fVar53 = fVar13;
    fVar57 = fVar14;
    if (pMVar50 != (MethodInfo *)0x0) {
      pMVar45 = pMVar39;
      pMVar41 = pMVar50;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar50,(System_String_o *)pMVar39,(MethodInfo *)0x0);
      fVar5 = fVar17;
      fStack_400 = fVar7;
      fVar6 = fVar8;
      fVar3 = fVar21;
      fVar11 = fVar4;
      fVar12 = fVar18;
      fVar53 = fVar13;
      fVar57 = fVar14;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        pMVar45 = (MethodInfo *)0x0;
        pMVar41 = pMVar50;
        pSVar42 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar50,(MethodInfo *)0x0);
        fVar5 = fVar17;
        fStack_400 = fVar7;
        fVar6 = fVar8;
        fVar3 = fVar21;
        fVar11 = fVar4;
        fVar12 = fVar18;
        fVar53 = fVar13;
        fVar57 = fVar14;
        if (pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar29,(Il2CppObject *)pSVar42,(Il2CppObject *)pMVar50,MethodInfo_Void_Add);
          return (UnityEngine_GameObject_o *)pMVar39;
        }
      }
    }
  }
  uVar51 = il2cpp_runtime_helper_022b2c90();
  position_03.fields.z = fVar5;
  fVar13 = fVar9;
  fVar27 = fVar23;
  fVar14 = fVar10;
  fVar28 = fVar24;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar13 = fVar9;
    fVar27 = fVar23;
    fVar14 = fVar10;
    fVar28 = fVar24;
  }
  pUVar43 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar37 = UnityEngine_Object__op_Equality(pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar37 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar37 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pMVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar56 = CONCAT44(fVar12,fVar11);
    if ((char)bVar37 == '\0') {
      if (pMVar41 != (MethodInfo *)0x0) {
        pUVar44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar41,(MethodInfo *)0x0);
        UVar58 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pMVar41,(MethodInfo *)0x0);
        uVar56 = CONCAT44(fVar12,fVar11);
        position_03.fields.z = UVar58.fields.z;
        if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
          UVar58 = UnityEngine_Transform__TransformPoint(pUVar44,UVar58,(MethodInfo *)0x0);
          fVar7 = UVar58.fields.z;
          fVar16 = UnityEngine_CapsuleCollider__get_radius
                             ((UnityEngine_CapsuleCollider_o *)pMVar41,(MethodInfo *)0x0);
          UVar59 = UnityEngine_Transform__get_lossyScale(pUVar44,(MethodInfo *)0x0);
          UVar60 = UnityEngine_Transform__get_lossyScale(pUVar44,(MethodInfo *)0x0);
          fVar17 = UnityEngine_CapsuleCollider__get_height
                             ((UnityEngine_CapsuleCollider_o *)pMVar41,(MethodInfo *)0x0);
          UVar61 = UnityEngine_Transform__get_lossyScale(pUVar44,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar61.fields.x,UVar61.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar56 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar8 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar38 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)pMVar41,(MethodInfo *)0x0);
          if (iVar38 == 2) {
            UVar62 = UnityEngine_Transform__get_forward(pUVar44,(MethodInfo *)0x0);
            fVar8 = UVar62.fields.z;
            fStack_3d0 = UVar62.fields.x;
            fStack_3cc = UVar62.fields.y;
          }
          else if (iVar38 == 1) {
            UVar62 = UnityEngine_Transform__get_up(pUVar44,(MethodInfo *)0x0);
            fVar8 = UVar62.fields.z;
            fStack_3d0 = UVar62.fields.x;
            fStack_3cc = UVar62.fields.y;
          }
          else {
            fStack_3d0 = (float)uVar56;
            fStack_3cc = (float)((ulong)uVar56 >> 0x20);
            if (iVar38 == 0) {
              UVar62 = UnityEngine_Transform__get_right(pUVar44,(MethodInfo *)0x0);
              fVar8 = UVar62.fields.z;
              fStack_3d0 = UVar62.fields.x;
              fStack_3cc = UVar62.fields.y;
            }
          }
          __this_03 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_3cc;
          forward.fields.x = fStack_3d0;
          forward.fields.z = fVar8;
          UVar63 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar56 = CONCAT44(fVar12,fVar11);
          position_03.fields.z = UVar63.fields.z;
          fVar4 = UVar63.fields.w;
          fVar21 = UVar63.fields.x;
          fVar19 = UVar63.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_400 = UVar59.fields.x;
            if (fStack_400 <= UVar60.fields.z) {
              fStack_400 = UVar60.fields.z;
            }
            fStack_38c = UVar61.fields.y;
            fStack_400 = fVar16 * fStack_400;
            size_02.fields.z = fStack_400 + fStack_400;
            fVar6 = fVar17 * fStack_38c - size_02.fields.z;
            fVar16 = 0.0;
            if (0.0 <= fVar6) {
              fVar16 = fVar6;
            }
            color_04.fields.a = in_XMM1_Db;
            color_04.fields.b = fVar5;
            size_02.fields.y = fVar16 * 0.5;
            size_02.fields.x = size_02.fields.z;
            color_04.fields.r = (float)(int)uVar51;
            color_04.fields.g = (float)(int)((ulong)uVar51 >> 0x20);
            fVar6 = fVar7;
            fVar14 = position_03.fields.z;
            uVar56 = uVar51;
            pUVar43 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (__this_03,2,UVar58,UVar63,size_02,color_04,method_00);
            pMVar50 = extraout_RDX_08;
            position_03.fields.z = fVar6;
            fVar13 = fVar21;
            fVar27 = fVar19;
            fVar28 = fVar4;
            if (g_data_057a6932 == '\0') {
              __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar50 = extraout_RDX_09;
              position_03.fields.z = fVar6;
              fVar13 = fVar21;
              fVar27 = fVar19;
              fVar28 = fVar4;
            }
            uVar15 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            fVar53 = (float)uVar15;
            fVar57 = (float)((ulong)uVar15 >> 0x20);
            fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fStack_400;
            lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar50 = extraout_RDX_10;
            }
            fVar3 = 0.0;
            fVar6 = extraout_XMM0_Db;
            if (lVar30 != 0) {
              fVar16 = fVar16 * 0.5 + fStack_400;
              fStack_3c0 = UVar58.fields.x;
              fStack_3bc = UVar58.fields.y;
              fVar53 = fStack_400 * fVar53;
              fStack_400 = fStack_400 * fVar57;
              position_02.fields.x = fStack_3c0 + fVar16 * fStack_3d0;
              position_02.fields.z = fVar7 + fVar16 * fVar8;
              size_03.fields.x = fVar53 + fVar53;
              size_03.fields.y = fStack_400 + fStack_400;
              size_03.fields.z = fVar2 + fVar2;
              pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar11 = pUVar31->x;
              fVar25 = pUVar31->y;
              fVar12 = pUVar31->z;
              fVar26 = pUVar31->w;
              color_05.fields.a = in_XMM1_Db;
              color_05.fields.b = fVar5;
              position_02.fields.y = fStack_3bc + fStack_3cc * fVar16;
              color_05.fields.r = (float)(int)uVar51;
              color_05.fields.g = (float)(int)((ulong)uVar51 >> 0x20);
              fStack_400 = size_03.fields.x;
              fVar6 = size_03.fields.y;
              fVar2 = size_03.fields.z;
              fVar53 = fVar5;
              fVar57 = in_XMM1_Db;
              uVar56 = uVar51;
              pUVar46 = Utility_CustomDebug__SpawnPrimitiveObject
                                  (__this_03,0,position_02,(UnityEngine_Quaternion_o)*pUVar31,size_03,color_05
                                   ,pMVar50);
              lVar30 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar50 = extraout_RDX_11;
              position_03.fields.z = position_02.fields.z;
              fVar13 = fVar11;
              fVar27 = fVar25;
              fVar14 = fVar12;
              fVar28 = fVar26;
              if (g_data_057a6843 == '\0') {
                __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar50 = extraout_RDX_12;
                position_03.fields.z = position_02.fields.z;
                fVar13 = fVar11;
                fVar27 = fVar25;
                fVar14 = fVar12;
                fVar28 = fVar26;
              }
              if (lVar30 != 0) {
                position_03.fields.x = fStack_3c0 - fVar16 * fStack_3d0;
                position_03.fields.z = fVar7 - fVar16 * fVar8;
                pUVar31 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar13 = pUVar31->x;
                fVar27 = pUVar31->y;
                fVar14 = pUVar31->z;
                fVar28 = pUVar31->w;
                size_04.fields.y = size_03.fields.y;
                size_04.fields.x = size_03.fields.x;
                fVar3 = 0.0;
                color_06.fields.a = in_XMM1_Db;
                color_06.fields.b = fVar5;
                position_03.fields.y = fStack_3bc - fStack_3cc * fVar16;
                size_04.fields.z = size_03.fields.z;
                color_06.fields.r = (float)(int)uVar51;
                color_06.fields.g = (float)(int)((ulong)uVar51 >> 0x20);
                uVar56 = uVar51;
                __this_02 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (__this_03,0,position_03,(UnityEngine_Quaternion_o)*pUVar31,size_04,
                                       color_06,pMVar50);
                fStack_400 = size_03.fields.x;
                fVar6 = size_03.fields.y;
                fVar2 = size_03.fields.z;
                fVar53 = fVar5;
                fVar57 = in_XMM1_Db;
                if ((((pUVar46 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar44 = UnityEngine_GameObject__get_transform(pUVar46,(MethodInfo *)0x0),
                     fStack_400 = size_03.fields.x, fVar6 = size_03.fields.y, fVar2 = size_03.fields.z,
                     fVar53 = fVar5, fVar57 = in_XMM1_Db, pUVar43 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar47 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar43,(MethodInfo *)0x0),
                    fStack_400 = size_03.fields.x, fVar6 = size_03.fields.y, fVar2 = size_03.fields.z,
                    fVar53 = fVar5, fVar57 = in_XMM1_Db, pUVar44 != (UnityEngine_Transform_o *)0x0)) &&
                   (UnityEngine_Transform__set_parent(pUVar44,pUVar47,(MethodInfo *)0x0),
                   fStack_400 = size_03.fields.x, fVar6 = size_03.fields.y, fVar2 = size_03.fields.z,
                   fVar53 = fVar5, fVar57 = in_XMM1_Db, __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar44 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar47 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar43,(MethodInfo *)0x0);
                  fStack_400 = size_03.fields.x;
                  fVar6 = size_03.fields.y;
                  fVar2 = size_03.fields.z;
                  fVar53 = fVar5;
                  fVar57 = in_XMM1_Db;
                  if (pUVar44 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar44,pUVar47,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar43,(System_String_o *)pMVar45,(MethodInfo *)0x0);
                    fStack_400 = size_03.fields.x;
                    fVar6 = size_03.fields.y;
                    fVar2 = size_03.fields.z;
                    fVar53 = fVar5;
                    fVar57 = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar29 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar29 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar29,(Il2CppObject *)pMVar45,(Il2CppObject *)pUVar43,MethodInfo_Void_Add);
                      return (UnityEngine_GameObject_o *)pMVar45;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar52 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar54 = (undefined4)uVar56;
      fVar5 = position_03.fields.z;
      fVar16 = fVar13;
      fVar17 = fVar27;
      fVar7 = fVar14;
      fVar8 = fStack_400;
      fVar21 = fVar6;
      fVar19 = fVar2;
      fVar4 = fVar3;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar43 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar37 = UnityEngine_Object__op_Inequality(pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar37 == '\0') {
        return (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar37);
      }
      pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar48 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar48,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar48[1].klass = 0;
        if (pIVar48 != (Il2CppObject *)0x0) {
          pIVar48[2].klass = pIVar52;
          *(float *)&pIVar48[2].monitor = position_03.fields.z;
          *(ulong *)((long)&pIVar48[2].monitor + 4) =
               CONCAT44(fVar27 + (float)((ulong)pIVar52 >> 0x20),fVar13 + SUB84(pIVar52,0));
          *(float *)((long)&pIVar48[3].klass + 4) = fVar14 + position_03.fields.z;
          *(float *)&pIVar48[3].monitor = fStack_400;
          *(float *)((long)&pIVar48[3].monitor + 4) = fVar6;
          *(float *)&pIVar48[4].klass = fVar2;
          *(float *)((long)&pIVar48[4].klass + 4) = fVar3;
          *(undefined4 *)&pIVar48[4].monitor = uVar54;
          pUVar46 = (UnityEngine_GameObject_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar32,(System_Collections_IEnumerator_o *)pIVar48,(MethodInfo *)0x0);
          return pUVar46;
        }
      }
      pvVar34 = (void *)il2cpp_runtime_helper_022b2c90();
      uVar54 = (undefined4)uVar56;
      fVar6 = fVar5;
      fVar2 = fVar16;
      fVar3 = fVar17;
      fVar18 = fVar7;
      fVar22 = fVar8;
      fVar13 = fVar21;
      fVar14 = fVar19;
      fVar9 = fVar4;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pUVar46 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pUVar46,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar46->fields).m_CachedPtr = 0;
      if (pUVar46 == (UnityEngine_GameObject_o *)0x0) {
        pIVar52 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
        uVar54 = (undefined4)uVar56;
        fVar5 = fVar6;
        fVar16 = fVar2;
        fVar17 = fVar3;
        fVar7 = fVar18;
        fVar8 = fVar22;
        fVar21 = fVar13;
        fVar19 = fVar14;
        fVar4 = fVar9;
        if (g_data_057ae8a6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a6 = '\x01';
        }
        pUVar43 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar37 = UnityEngine_Object__op_Inequality(pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar37 == '\0') {
          return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_00,bVar37);
        }
        pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (g_data_057ae8ab == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
            g_data_057ae8ab = '\x01';
          }
          pIVar48 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
          System_Object___ctor(pIVar48,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar48[1].klass = 0;
          if (pIVar48 != (Il2CppObject *)0x0) {
            pIVar48[2].klass = pIVar52;
            *(float *)&pIVar48[2].monitor = fVar6;
            *(ulong *)((long)&pIVar48[2].monitor + 4) = CONCAT44(fVar3,fVar2);
            *(float *)((long)&pIVar48[3].klass + 4) = fVar18;
            *(float *)&pIVar48[3].monitor = fVar22;
            *(float *)((long)&pIVar48[3].monitor + 4) = fVar13;
            *(float *)&pIVar48[4].klass = fVar14;
            *(float *)((long)&pIVar48[4].klass + 4) = fVar9;
            *(undefined4 *)&pIVar48[4].monitor = uVar54;
            pUVar46 = (UnityEngine_GameObject_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar32,(System_Collections_IEnumerator_o *)pIVar48,(MethodInfo *)0x0);
            return pUVar46;
          }
        }
        uVar51 = il2cpp_runtime_helper_022b2c90();
        fVar6 = fVar5;
        fVar2 = fVar16;
        fVar3 = fVar17;
        fVar18 = fVar7;
        fVar22 = fVar28;
        fVar13 = fVar8;
        if (g_data_057ae8a7 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae8a7 = '\x01';
        }
        pUVar43 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar54 = 0;
        bVar37 = UnityEngine_Object__op_Inequality(pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar37 == '\0') {
          return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_01,bVar37);
        }
        pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
        if (g_data_057a6843 == '\0') {
          pUVar43 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6843 = '\x01';
        }
        pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057a6932 == '\0') {
          pUVar43 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6932 = '\x01';
        }
        if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar33 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          uVar55 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          if (g_data_057ae8ac == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
            g_data_057ae8ac = '\x01';
          }
          pUVar49 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
          uVar54 = 0;
          pUVar43 = pUVar49;
          System_Object___ctor((Il2CppObject *)pUVar49,(MethodInfo *)0x0);
          *(undefined4 *)&(pUVar49->fields).m_CachedPtr = 0;
          if (pUVar49 != (UnityEngine_Object_o *)0x0) {
            pUVar49[1].monitor = pUVar32;
            il2cpp_runtime_helper_022b4080(&pUVar49[1].monitor,pUVar32);
            *(undefined4 *)&pUVar49[1].fields.m_CachedPtr = 3;
            *(undefined8 *)((long)&pUVar49[1].fields.m_CachedPtr + 4) = uVar51;
            *(float *)((long)&pUVar49[2].klass + 4) = fVar5;
            pUVar49[2].monitor = pvVar34;
            pUVar49[2].fields.m_CachedPtr = iVar35;
            pUVar49[3].klass = pUVar33;
            *(undefined4 *)&pUVar49[3].monitor = uVar55;
            *(float *)((long)&pUVar49[3].monitor + 4) = fVar16;
            *(float *)&pUVar49[3].fields.m_CachedPtr = fVar17;
            *(float *)((long)&pUVar49[3].fields.m_CachedPtr + 4) = fVar7;
            *(float *)&pUVar49[4].klass = fVar28;
            *(float *)((long)&pUVar49[4].klass + 4) = fVar8;
            pUVar46 = (UnityEngine_GameObject_o *)
                      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                (pUVar32,(System_Collections_IEnumerator_o *)pUVar49,(MethodInfo *)0x0);
            return pUVar46;
          }
        }
        uVar51 = il2cpp_runtime_helper_022b2c90();
        uVar55 = (undefined4)uVar56;
        fVar16 = fVar6;
        fVar17 = fVar2;
        fVar7 = fVar18;
        fVar8 = fVar22;
        fVar14 = fVar13;
        fVar9 = fVar21;
        fVar10 = fVar19;
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar46 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor((Il2CppObject *)pUVar46,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar46->fields).m_CachedPtr = 0;
        if (pUVar46 == (UnityEngine_GameObject_o *)0x0) {
          uVar51 = il2cpp_runtime_helper_022b2c90();
          fVar5 = fVar16;
          fVar6 = fVar17;
          fVar2 = fVar7;
          fVar3 = fVar14;
          fVar21 = fVar9;
          fVar19 = fVar10;
          if (g_data_057ae8a8 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8a8 = '\x01';
          }
          pUVar43 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar37 = UnityEngine_Object__op_Inequality(pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 == '\0') {
            return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_02,bVar37);
          }
          pIVar52 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pIVar52 != (Il2CppClass *)0x0) {
            pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            pIVar36 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pIVar48 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            System_Object___ctor(pIVar48,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar48[1].klass = 0;
            if (pIVar48 != (Il2CppObject *)0x0) {
              pIVar48[2].klass = pIVar52;
              il2cpp_runtime_helper_022b4080(pIVar48 + 2,pIVar52);
              *(undefined4 *)&pIVar48[2].monitor = 0;
              *(undefined8 *)((long)&pIVar48[2].monitor + 4) = uVar51;
              *(float *)((long)&pIVar48[3].klass + 4) = fVar16;
              pIVar48[3].monitor = pvVar34;
              pIVar48[4].klass = pIVar36;
              pIVar48[4].monitor = (void *)CONCAT44(fVar17,fVar17);
              *(float *)&pIVar48[5].klass = fVar17;
              *(float *)((long)&pIVar48[5].klass + 4) = fVar7;
              *(float *)&pIVar48[5].monitor = fVar8;
              *(float *)((long)&pIVar48[5].monitor + 4) = fVar14;
              *(float *)&pIVar48[6].klass = fVar9;
              *(float *)((long)&pIVar48[6].klass + 4) = fVar10;
              pUVar46 = (UnityEngine_GameObject_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)pIVar52,
                                   (System_Collections_IEnumerator_o *)pIVar48,(MethodInfo *)0x0);
              return pUVar46;
            }
          }
          uVar51 = il2cpp_runtime_helper_022b2c90();
          fVar16 = fVar5;
          fVar17 = fVar6;
          fVar7 = fVar2;
          fVar8 = fVar3;
          fVar18 = fVar21;
          fVar22 = fVar19;
          fVar13 = fVar4;
          uVar54 = uVar55;
          if (g_data_057ae8a9 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8a9 = '\x01';
          }
          pUVar43 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar37 = UnityEngine_Object__op_Inequality(pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 == '\0') {
            return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_03,bVar37);
          }
          pIVar52 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pIVar52 != (Il2CppClass *)0x0) {
            pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            pIVar36 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pIVar48 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            System_Object___ctor(pIVar48,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar48[1].klass = 0;
            if (pIVar48 != (Il2CppObject *)0x0) {
              pIVar48[2].klass = pIVar52;
              il2cpp_runtime_helper_022b4080(pIVar48 + 2,pIVar52);
              *(undefined4 *)&pIVar48[2].monitor = 2;
              *(undefined8 *)((long)&pIVar48[2].monitor + 4) = uVar51;
              *(float *)((long)&pIVar48[3].klass + 4) = fVar5;
              pIVar48[3].monitor = pvVar34;
              pIVar48[4].klass = pIVar36;
              pIVar48[4].monitor = (void *)CONCAT44(fVar2,fVar6);
              *(float *)&pIVar48[5].klass = fVar6;
              *(float *)((long)&pIVar48[5].klass + 4) = fVar3;
              *(float *)&pIVar48[5].monitor = fVar21;
              *(float *)((long)&pIVar48[5].monitor + 4) = fVar19;
              *(float *)&pIVar48[6].klass = fVar4;
              *(undefined4 *)((long)&pIVar48[6].klass + 4) = uVar55;
              pUVar46 = (UnityEngine_GameObject_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)pIVar52,
                                   (System_Collections_IEnumerator_o *)pIVar48,(MethodInfo *)0x0);
              return pUVar46;
            }
          }
          uVar51 = il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae8aa == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae8aa = '\x01';
          }
          pUVar43 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar55 = 0;
          bVar37 = UnityEngine_Object__op_Inequality(pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar37 == '\0') {
            return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_04,bVar37);
          }
          pUVar32 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
          if (g_data_057a6843 == '\0') {
            pUVar43 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6843 = '\x01';
          }
          if (pUVar32 != (UnityEngine_MonoBehaviour_o *)0x0) {
            pvVar34 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            iVar35 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if (g_data_057ae8ac == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
              g_data_057ae8ac = '\x01';
            }
            pUVar49 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
            uVar55 = 0;
            pUVar43 = pUVar49;
            System_Object___ctor((Il2CppObject *)pUVar49,(MethodInfo *)0x0);
            *(undefined4 *)&(pUVar49->fields).m_CachedPtr = 0;
            if (pUVar49 != (UnityEngine_Object_o *)0x0) {
              pUVar49[1].monitor = pUVar32;
              il2cpp_runtime_helper_022b4080(&pUVar49[1].monitor,pUVar32);
              *(undefined4 *)&pUVar49[1].fields.m_CachedPtr = 1;
              *(undefined8 *)((long)&pUVar49[1].fields.m_CachedPtr + 4) = uVar51;
              *(float *)((long)&pUVar49[2].klass + 4) = fVar16;
              pUVar49[2].monitor = pvVar34;
              pUVar49[2].fields.m_CachedPtr = iVar35;
              pUVar49[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar7,fVar17);
              *(float *)&pUVar49[3].monitor = fVar17;
              *(float *)((long)&pUVar49[3].monitor + 4) = fVar8;
              *(float *)&pUVar49[3].fields.m_CachedPtr = fVar18;
              *(float *)((long)&pUVar49[3].fields.m_CachedPtr + 4) = fVar22;
              *(float *)&pUVar49[4].klass = fVar13;
              *(undefined4 *)((long)&pUVar49[4].klass + 4) = uVar54;
              pUVar46 = (UnityEngine_GameObject_o *)
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  (pUVar32,(System_Collections_IEnumerator_o *)pUVar49,(MethodInfo *)0x0);
              return pUVar46;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)pUVar43,(MethodInfo *)0x0);
          *(undefined4 *)&(pUVar43->fields).m_CachedPtr = uVar55;
          return extraout_RAX;
        }
        pUVar46[1].monitor = pUVar43;
        il2cpp_runtime_helper_022b4080(&pUVar46[1].monitor,pUVar43);
        *(undefined4 *)&pUVar46[1].fields.m_CachedPtr = uVar54;
        *(undefined8 *)((long)&pUVar46[1].fields.m_CachedPtr + 4) = uVar51;
        *(float *)((long)&pUVar46[2].klass + 4) = fVar6;
        *(float *)&pUVar46[2].monitor = fVar2;
        *(float *)((long)&pUVar46[2].monitor + 4) = fVar3;
        *(float *)&pUVar46[2].fields.m_CachedPtr = fVar18;
        *(float *)((long)&pUVar46[2].fields.m_CachedPtr + 4) = fVar22;
        pUVar46[3].klass = (UnityEngine_GameObject_c *)CONCAT44(fVar21,fVar13);
        *(float *)&pUVar46[3].monitor = fVar19;
        *(undefined8 *)((long)&pUVar46[3].monitor + 4) = uVar56;
        *(float *)((long)&pUVar46[3].fields.m_CachedPtr + 4) = fVar53;
        *(float *)&pUVar46[4].klass = fVar57;
        *(float *)((long)&pUVar46[4].klass + 4) = fVar5;
        return pUVar46;
      }
      pUVar46[1].monitor = pvVar34;
      *(float *)&pUVar46[1].fields.m_CachedPtr = fVar5;
      *(ulong *)((long)&pUVar46[1].fields.m_CachedPtr + 4) = CONCAT44(fVar17,fVar16);
      *(float *)((long)&pUVar46[2].klass + 4) = fVar7;
      *(float *)&pUVar46[2].monitor = fVar8;
      *(float *)((long)&pUVar46[2].monitor + 4) = fVar21;
      *(float *)&pUVar46[2].fields.m_CachedPtr = fVar19;
      *(float *)((long)&pUVar46[2].fields.m_CachedPtr + 4) = fVar4;
      *(undefined4 *)&pUVar46[3].klass = uVar54;
      return pUVar46;
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Utility.CustomDebug$$SpawnPrimitiveObject
// il2cpp: UnityEngine_GameObject_o* Utility_CustomDebug__SpawnPrimitiveObject (Utility_CustomDebug_o* __this, int32_t type, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o Rotation, UnityEngine_Vector3_o size, UnityEngine_Color_o color, const MethodInfo* method);
// 0x44828d0

UnityEngine_GameObject_o *
Utility_CustomDebug__SpawnPrimitiveObject
          (Utility_CustomDebug_o *__this,int32_t type,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o Rotation,UnityEngine_Vector3_o size,UnityEngine_Color_o color,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar11;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long lVar22;
  UnityEngine_Quaternion_Fields *pUVar23;
  System_Collections_Generic_Dictionary_object__object__o *pSVar24;
  UnityEngine_MonoBehaviour_o *pUVar25;
  UnityEngine_Object_c *pUVar26;
  void *pvVar27;
  intptr_t iVar28;
  Il2CppClass *pIVar29;
  bool_conflict bVar30;
  int32_t iVar31;
  MethodInfo *pMVar32;
  UnityEngine_Transform_o *pUVar33;
  MethodInfo *pMVar34;
  MethodInfo *method_00;
  MethodInfo *__this_00;
  UnityEngine_Material_o *__this_01;
  System_String_o *pSVar35;
  MethodInfo *pMVar36;
  UnityEngine_Object_o *pUVar37;
  UnityEngine_GameObject_o *pUVar38;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar39;
  undefined4 extraout_var;
  Il2CppObject *pIVar40;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_Object_o *pUVar41;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  UnityEngine_GameObject_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  Utility_CustomDebug_o *__this_03;
  undefined8 uVar42;
  float extraout_XMM0_Db;
  Il2CppClass *pIVar43;
  float in_XMM1_Db;
  float fVar44;
  float fVar45;
  float in_XMM5_Db;
  undefined4 uVar46;
  undefined4 uVar47;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o UVar51;
  UnityEngine_Vector3_o UVar52;
  UnityEngine_Vector3_o UVar53;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Vector3_o size_03;
  UnityEngine_Quaternion_o Rotation_00;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  float local_2a8;
  float local_278;
  float fStack_274;
  float local_268;
  float fStack_264;
  float fStack_234;
  undefined8 uVar48;
  
  fVar13 = color.fields.b;
  fVar16 = color.fields.a;
  fVar7 = color.fields.r;
  fVar8 = color.fields.g;
  fVar2 = Rotation.fields.z;
  fVar6 = Rotation.fields.w;
  fVar15 = Rotation.fields.x;
  fVar9 = Rotation.fields.y;
  fVar12 = size.fields.z;
  fVar10 = size.fields.x;
  fVar20 = size.fields.y;
  fVar1 = position.fields.z;
  pMVar36 = (MethodInfo *)(ulong)(uint)type;
  fVar3 = fVar1;
  fVar4 = fVar2;
  fVar14 = fVar6;
  fVar5 = fVar12;
  fVar44 = fVar13;
  fVar45 = fVar16;
  if (g_data_057ae8ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DebugPrimitive");
    il2cpp_runtime_helper_023445d0(&"Standard");
    g_data_057ae8ae = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pMVar32 = (MethodInfo *)UnityEngine_GameObject__CreatePrimitive(type,(MethodInfo *)0x0);
  if (pMVar32 != (MethodInfo *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pMVar32,"DebugPrimitive",(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pMVar36 = pMVar32;
    pUVar33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar32,(MethodInfo *)0x0);
    if (pUVar33 != (UnityEngine_Transform_o *)0x0) {
      in_XMM1_Db = 0.0;
      UnityEngine_Transform__set_position(pUVar33,position,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pMVar36 = pMVar32;
      pUVar33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar32,(MethodInfo *)0x0);
      fVar3 = fVar1;
      if (pUVar33 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar33,Rotation,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        pMVar36 = pMVar32;
        pUVar33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar32,(MethodInfo *)0x0)
        ;
        fVar3 = fVar2;
        in_XMM1_Db = fVar6;
        if (pUVar33 != (UnityEngine_Transform_o *)0x0) {
          in_XMM1_Db = 0.0;
          UnityEngine_Transform__set_localScale(pUVar33,size,(MethodInfo *)0x0);
          pMVar34 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar32,MethodInfo_Renderer_GetComponent_Renderer);
          fVar3 = fVar12;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            fVar3 = fVar12;
          }
          bVar30 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar30 != '\0') {
            method_00 = (MethodInfo *)UnityEngine_Shader__Find("Standard",(MethodInfo *)0x0);
            __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
            pMVar36 = __this_00;
            UnityEngine_Material___ctor
                      ((UnityEngine_Material_o *)__this_00,(UnityEngine_Shader_o *)method_00,(MethodInfo *)0x0
                      );
            if (pMVar34 == (MethodInfo *)0x0) goto label_04482b04;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pMVar34,(UnityEngine_Material_o *)__this_00,(MethodInfo *)0x0
                      );
            method_00 = (MethodInfo *)0x0;
            __this_01 = UnityEngine_Renderer__get_material
                                  ((UnityEngine_Renderer_o *)pMVar34,(MethodInfo *)0x0);
            pMVar36 = pMVar34;
            if (__this_01 == (UnityEngine_Material_o *)0x0) goto label_04482b04;
            UnityEngine_Material__set_color(__this_01,color,(MethodInfo *)0x0);
            fVar3 = fVar13;
            in_XMM1_Db = fVar16;
          }
          pMVar34 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar32,MethodInfo_Collider_GetComponent_Collider);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x0;
          pMVar36 = pMVar34;
          bVar30 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pMVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar30 == '\0') {
            return (UnityEngine_GameObject_o *)pMVar32;
          }
          if (pMVar34 != (MethodInfo *)0x0) {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pMVar34,0,(MethodInfo *)0x0);
            return (UnityEngine_GameObject_o *)pMVar32;
          }
        }
      }
    }
  }
label_04482b04:
  uVar42 = il2cpp_runtime_helper_022b2c90();
  fVar6 = fVar3;
  fVar1 = fVar15;
  fVar12 = fVar9;
  fVar2 = fVar4;
  fVar13 = fVar14;
  fVar16 = fVar10;
  fVar17 = fVar20;
  if (g_data_057ae8a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a1 = '\x01';
  }
  pMVar34 = pMVar36;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar36,method_00);
  lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar32 = extraout_RDX;
  if (g_data_057a6843 == '\0') {
    pMVar34 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar32 = extraout_RDX_00;
  }
  if (lVar22 != 0) {
    pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pUVar23->x;
    fVar12 = pUVar23->y;
    fVar2 = pUVar23->z;
    fVar13 = pUVar23->w;
    method_00 = (MethodInfo *)0x0;
    in_XMM1_Db = 0.0;
    color_00.fields.g = fVar14;
    color_00.fields.r = fVar4;
    color_00.fields.a = fVar20;
    color_00.fields.b = fVar10;
    UVar49.fields.z = fVar3;
    UVar49.fields.x = (float)(int)uVar42;
    UVar49.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
    UVar50.fields.y = fVar15;
    UVar50.fields.x = fVar15;
    UVar50.fields.z = fVar15;
    fVar17 = fVar15;
    fVar5 = fVar15;
    pMVar32 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar34,0,UVar49,(UnityEngine_Quaternion_o)*pUVar23,UVar50,
                         color_00,pMVar32);
    fVar6 = fVar3;
    fVar16 = fVar15;
    in_XMM5_Db = fVar9;
    fVar7 = fVar4;
    fVar8 = fVar14;
    fVar44 = fVar10;
    fVar45 = fVar20;
    if (pMVar32 != (MethodInfo *)0x0) {
      method_00 = pMVar36;
      pMVar34 = pMVar32;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar32,(System_String_o *)pMVar36,(MethodInfo *)0x0);
      fVar6 = fVar3;
      fVar16 = fVar15;
      in_XMM5_Db = fVar9;
      fVar7 = fVar4;
      fVar8 = fVar14;
      fVar44 = fVar10;
      fVar45 = fVar20;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method_00 = (MethodInfo *)0x0;
        pMVar34 = pMVar32;
        pSVar35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar32,(MethodInfo *)0x0);
        fVar6 = fVar3;
        fVar16 = fVar15;
        in_XMM5_Db = fVar9;
        fVar7 = fVar4;
        fVar8 = fVar14;
        fVar44 = fVar10;
        fVar45 = fVar20;
        if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar24,(Il2CppObject *)pSVar35,(Il2CppObject *)pMVar32,MethodInfo_Void_Add);
          return (UnityEngine_GameObject_o *)pMVar36;
        }
      }
    }
  }
  uVar42 = il2cpp_runtime_helper_022b2c90();
  fVar9 = fVar6;
  fVar3 = fVar1;
  fVar14 = fVar12;
  fVar4 = fVar2;
  fVar15 = fVar13;
  fVar10 = fVar16;
  fVar20 = fVar17;
  fVar21 = fVar5;
  UVar53.fields.z = in_XMM5_Db;
  if (g_data_057ae8a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a2 = '\x01';
    fVar15 = fVar13;
  }
  pMVar32 = pMVar34;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar34,method_00);
  lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar36 = extraout_RDX_01;
  if (g_data_057a6843 == '\0') {
    pMVar32 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar36 = extraout_RDX_02;
  }
  if (lVar22 != 0) {
    pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar3 = pUVar23->x;
    fVar14 = pUVar23->y;
    fVar4 = pUVar23->z;
    fVar15 = pUVar23->w;
    method_00 = (MethodInfo *)0x2;
    in_XMM1_Db = 0.0;
    color_01.fields.g = fVar17;
    color_01.fields.r = fVar16;
    color_01.fields.a = in_XMM5_Db;
    color_01.fields.b = fVar5;
    UVar51.fields.z = fVar6;
    UVar51.fields.x = (float)(int)uVar42;
    UVar51.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
    UVar52.fields.y = fVar2;
    UVar52.fields.x = fVar1;
    UVar52.fields.z = fVar1;
    fVar21 = fVar1;
    pMVar36 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar32,2,UVar51,(UnityEngine_Quaternion_o)*pUVar23,UVar52,
                         color_01,pMVar36);
    fVar9 = fVar6;
    fVar10 = fVar1;
    fVar20 = fVar2;
    UVar53.fields.z = fVar12;
    fVar7 = fVar16;
    fVar8 = fVar17;
    fVar44 = fVar5;
    fVar45 = in_XMM5_Db;
    if (pMVar36 != (MethodInfo *)0x0) {
      method_00 = pMVar34;
      pMVar32 = pMVar36;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar36,(System_String_o *)pMVar34,(MethodInfo *)0x0);
      fVar9 = fVar6;
      fVar10 = fVar1;
      fVar20 = fVar2;
      UVar53.fields.z = fVar12;
      fVar7 = fVar16;
      fVar8 = fVar17;
      fVar44 = fVar5;
      fVar45 = in_XMM5_Db;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method_00 = (MethodInfo *)0x0;
        pMVar32 = pMVar36;
        pSVar35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar36,(MethodInfo *)0x0);
        fVar9 = fVar6;
        fVar10 = fVar1;
        fVar20 = fVar2;
        UVar53.fields.z = fVar12;
        fVar7 = fVar16;
        fVar8 = fVar17;
        fVar44 = fVar5;
        fVar45 = in_XMM5_Db;
        if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar24,(Il2CppObject *)pSVar35,(Il2CppObject *)pMVar36,MethodInfo_Void_Add);
          return (UnityEngine_GameObject_o *)pMVar34;
        }
      }
    }
  }
  uVar42 = il2cpp_runtime_helper_022b2c90();
  fVar1 = fVar9;
  fVar5 = fVar3;
  fVar16 = fVar14;
  fVar6 = fVar4;
  fVar17 = fVar15;
  local_2a8 = fVar10;
  fVar2 = fVar20;
  fVar12 = fVar21;
  fVar13 = UVar53.fields.z;
  if (g_data_057ae8a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae8a3 = '\x01';
    fVar17 = fVar15;
  }
  pMVar34 = pMVar32;
  Utility_CustomDebug__RemoveDebugVisual((System_String_o *)pMVar32,method_00);
  lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  pMVar36 = extraout_RDX_03;
  if (g_data_057a6843 == '\0') {
    pMVar34 = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
    pMVar36 = extraout_RDX_04;
  }
  if (lVar22 != 0) {
    pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar5 = pUVar23->x;
    fVar16 = pUVar23->y;
    fVar6 = pUVar23->z;
    fVar17 = pUVar23->w;
    method_00 = (MethodInfo *)0x1;
    in_XMM1_Db = 0.0;
    color_02.fields.g = fVar20;
    color_02.fields.r = fVar10;
    color_02.fields.a = UVar53.fields.z;
    color_02.fields.b = fVar21;
    position_00.fields.z = fVar9;
    position_00.fields.x = (float)(int)uVar42;
    position_00.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
    size_00.fields.y = fVar4;
    size_00.fields.x = fVar3;
    size_00.fields.z = fVar3;
    fVar12 = fVar3;
    pMVar36 = (MethodInfo *)
              Utility_CustomDebug__SpawnPrimitiveObject
                        ((Utility_CustomDebug_o *)pMVar34,1,position_00,(UnityEngine_Quaternion_o)*pUVar23,
                         size_00,color_02,pMVar36);
    fVar1 = fVar9;
    local_2a8 = fVar3;
    fVar2 = fVar4;
    fVar13 = fVar14;
    fVar7 = fVar10;
    fVar8 = fVar20;
    fVar44 = fVar21;
    fVar45 = UVar53.fields.z;
    if (pMVar36 != (MethodInfo *)0x0) {
      method_00 = pMVar32;
      pMVar34 = pMVar36;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pMVar36,(System_String_o *)pMVar32,(MethodInfo *)0x0);
      fVar1 = fVar9;
      local_2a8 = fVar3;
      fVar2 = fVar4;
      fVar13 = fVar14;
      fVar7 = fVar10;
      fVar8 = fVar20;
      fVar44 = fVar21;
      fVar45 = UVar53.fields.z;
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        method_00 = (MethodInfo *)0x0;
        pMVar34 = pMVar36;
        pSVar35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar36,(MethodInfo *)0x0);
        fVar1 = fVar9;
        local_2a8 = fVar3;
        fVar2 = fVar4;
        fVar13 = fVar14;
        fVar7 = fVar10;
        fVar8 = fVar20;
        fVar44 = fVar21;
        fVar45 = UVar53.fields.z;
        if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar24,(Il2CppObject *)pSVar35,(Il2CppObject *)pMVar36,MethodInfo_Void_Add);
          return (UnityEngine_GameObject_o *)pMVar32;
        }
      }
    }
  }
  uVar42 = il2cpp_runtime_helper_022b2c90();
  UVar53.fields.z = fVar1;
  fVar9 = fVar5;
  fVar20 = fVar16;
  fVar10 = fVar6;
  fVar21 = fVar17;
  if (g_data_057ae8a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8a4 = '\x01';
    fVar9 = fVar5;
    fVar20 = fVar16;
    fVar10 = fVar6;
    fVar21 = fVar17;
  }
  pUVar37 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar30 = UnityEngine_Object__op_Equality(pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar30 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar30 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pMVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar48 = CONCAT44(fVar8,fVar7);
    if ((char)bVar30 == '\0') {
      if (pMVar34 != (MethodInfo *)0x0) {
        pUVar33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar34,(MethodInfo *)0x0);
        UVar49 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pMVar34,(MethodInfo *)0x0);
        uVar48 = CONCAT44(fVar8,fVar7);
        UVar53.fields.z = UVar49.fields.z;
        if (pUVar33 != (UnityEngine_Transform_o *)0x0) {
          UVar49 = UnityEngine_Transform__TransformPoint(pUVar33,UVar49,(MethodInfo *)0x0);
          fVar14 = UVar49.fields.z;
          fVar3 = UnityEngine_CapsuleCollider__get_radius
                            ((UnityEngine_CapsuleCollider_o *)pMVar34,(MethodInfo *)0x0);
          UVar50 = UnityEngine_Transform__get_lossyScale(pUVar33,(MethodInfo *)0x0);
          UVar51 = UnityEngine_Transform__get_lossyScale(pUVar33,(MethodInfo *)0x0);
          fVar4 = UnityEngine_CapsuleCollider__get_height
                            ((UnityEngine_CapsuleCollider_o *)pMVar34,(MethodInfo *)0x0);
          UVar52 = UnityEngine_Transform__get_lossyScale(pUVar33,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(UVar52.fields.x,UVar52.fields.z,&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar48 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar5 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar31 = UnityEngine_CapsuleCollider__get_direction
                             ((UnityEngine_CapsuleCollider_o *)pMVar34,(MethodInfo *)0x0);
          if (iVar31 == 2) {
            UVar53 = UnityEngine_Transform__get_forward(pUVar33,(MethodInfo *)0x0);
            fVar5 = UVar53.fields.z;
            local_278 = UVar53.fields.x;
            fStack_274 = UVar53.fields.y;
          }
          else if (iVar31 == 1) {
            UVar53 = UnityEngine_Transform__get_up(pUVar33,(MethodInfo *)0x0);
            fVar5 = UVar53.fields.z;
            local_278 = UVar53.fields.x;
            fStack_274 = UVar53.fields.y;
          }
          else {
            local_278 = (float)uVar48;
            fStack_274 = (float)((ulong)uVar48 >> 0x20);
            if (iVar31 == 0) {
              UVar53 = UnityEngine_Transform__get_right(pUVar33,(MethodInfo *)0x0);
              fVar5 = UVar53.fields.z;
              local_278 = UVar53.fields.x;
              fStack_274 = UVar53.fields.y;
            }
          }
          __this_03 = (Utility_CustomDebug_o *)0x0;
          forward.fields.y = fStack_274;
          forward.fields.x = local_278;
          forward.fields.z = fVar5;
          Rotation_00 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
          uVar48 = CONCAT44(fVar8,fVar7);
          UVar53.fields.z = Rotation_00.fields.z;
          fVar6 = Rotation_00.fields.w;
          fVar7 = Rotation_00.fields.x;
          fVar8 = Rotation_00.fields.y;
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            local_2a8 = UVar50.fields.x;
            if (local_2a8 <= UVar51.fields.z) {
              local_2a8 = UVar51.fields.z;
            }
            fStack_234 = UVar52.fields.y;
            local_2a8 = fVar3 * local_2a8;
            size_01.fields.z = local_2a8 + local_2a8;
            fVar4 = fVar4 * fStack_234 - size_01.fields.z;
            fVar3 = 0.0;
            if (0.0 <= fVar4) {
              fVar3 = fVar4;
            }
            color_03.fields.a = in_XMM1_Db;
            color_03.fields.b = fVar1;
            size_01.fields.y = fVar3 * 0.5;
            size_01.fields.x = size_01.fields.z;
            color_03.fields.r = (float)(int)uVar42;
            color_03.fields.g = (float)(int)((ulong)uVar42 >> 0x20);
            fVar4 = fVar14;
            fVar10 = UVar53.fields.z;
            uVar48 = uVar42;
            pUVar37 = (UnityEngine_Object_o *)
                      Utility_CustomDebug__SpawnPrimitiveObject
                                (__this_03,2,UVar49,Rotation_00,size_01,color_03,method_01);
            pMVar36 = extraout_RDX_05;
            UVar53.fields.z = fVar4;
            fVar9 = fVar7;
            fVar20 = fVar8;
            fVar21 = fVar6;
            if (g_data_057a6932 == '\0') {
              __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              pMVar36 = extraout_RDX_06;
              UVar53.fields.z = fVar4;
              fVar9 = fVar7;
              fVar20 = fVar8;
              fVar21 = fVar6;
            }
            uVar11 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            fVar44 = (float)uVar11;
            fVar45 = (float)((ulong)uVar11 >> 0x20);
            fVar12 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * local_2a8;
            lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (g_data_057a6843 == '\0') {
              __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6843 = '\x01';
              pMVar36 = extraout_RDX_07;
            }
            fVar13 = 0.0;
            fVar2 = extraout_XMM0_Db;
            if (lVar22 != 0) {
              fVar3 = fVar3 * 0.5 + local_2a8;
              local_268 = UVar49.fields.x;
              fStack_264 = UVar49.fields.y;
              fVar44 = local_2a8 * fVar44;
              local_2a8 = local_2a8 * fVar45;
              position_01.fields.x = local_268 + fVar3 * local_278;
              position_01.fields.z = fVar14 + fVar3 * fVar5;
              size_02.fields.x = fVar44 + fVar44;
              size_02.fields.y = local_2a8 + local_2a8;
              size_02.fields.z = fVar12 + fVar12;
              pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
              fVar7 = pUVar23->x;
              fVar18 = pUVar23->y;
              fVar8 = pUVar23->z;
              fVar19 = pUVar23->w;
              color_04.fields.a = in_XMM1_Db;
              color_04.fields.b = fVar1;
              position_01.fields.y = fStack_264 + fStack_274 * fVar3;
              color_04.fields.r = (float)(int)uVar42;
              color_04.fields.g = (float)(int)((ulong)uVar42 >> 0x20);
              local_2a8 = size_02.fields.x;
              fVar2 = size_02.fields.y;
              fVar12 = size_02.fields.z;
              fVar44 = fVar1;
              fVar45 = in_XMM1_Db;
              uVar48 = uVar42;
              pUVar38 = Utility_CustomDebug__SpawnPrimitiveObject
                                  (__this_03,0,position_01,(UnityEngine_Quaternion_o)*pUVar23,size_02,color_04
                                   ,pMVar36);
              lVar22 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar36 = extraout_RDX_08;
              UVar53.fields.z = position_01.fields.z;
              fVar9 = fVar7;
              fVar20 = fVar18;
              fVar10 = fVar8;
              fVar21 = fVar19;
              if (g_data_057a6843 == '\0') {
                __this_03 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
                pMVar36 = extraout_RDX_09;
                UVar53.fields.z = position_01.fields.z;
                fVar9 = fVar7;
                fVar20 = fVar18;
                fVar10 = fVar8;
                fVar21 = fVar19;
              }
              if (lVar22 != 0) {
                UVar53.fields.x = local_268 - fVar3 * local_278;
                UVar53.fields.z = fVar14 - fVar3 * fVar5;
                pUVar23 = *(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                fVar9 = pUVar23->x;
                fVar20 = pUVar23->y;
                fVar10 = pUVar23->z;
                fVar21 = pUVar23->w;
                size_03.fields.y = size_02.fields.y;
                size_03.fields.x = size_02.fields.x;
                fVar13 = 0.0;
                color_05.fields.a = in_XMM1_Db;
                color_05.fields.b = fVar1;
                UVar53.fields.y = fStack_264 - fStack_274 * fVar3;
                size_03.fields.z = size_02.fields.z;
                color_05.fields.r = (float)(int)uVar42;
                color_05.fields.g = (float)(int)((ulong)uVar42 >> 0x20);
                uVar48 = uVar42;
                __this_02 = Utility_CustomDebug__SpawnPrimitiveObject
                                      (__this_03,0,UVar53,(UnityEngine_Quaternion_o)*pUVar23,size_03,color_05,
                                       pMVar36);
                local_2a8 = size_02.fields.x;
                fVar2 = size_02.fields.y;
                fVar12 = size_02.fields.z;
                fVar44 = fVar1;
                fVar45 = in_XMM1_Db;
                if ((((pUVar38 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar33 = UnityEngine_GameObject__get_transform(pUVar38,(MethodInfo *)0x0),
                     local_2a8 = size_02.fields.x, fVar2 = size_02.fields.y, fVar12 = size_02.fields.z,
                     fVar44 = fVar1, fVar45 = in_XMM1_Db, pUVar37 != (UnityEngine_Object_o *)0x0)) &&
                    (pUVar39 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar37,(MethodInfo *)0x0),
                    local_2a8 = size_02.fields.x, fVar2 = size_02.fields.y, fVar12 = size_02.fields.z,
                    fVar44 = fVar1, fVar45 = in_XMM1_Db, pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
                   (UnityEngine_Transform__set_parent(pUVar33,pUVar39,(MethodInfo *)0x0),
                   local_2a8 = size_02.fields.x, fVar2 = size_02.fields.y, fVar12 = size_02.fields.z,
                   fVar44 = fVar1, fVar45 = in_XMM1_Db, __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                  pUVar33 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar39 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar37,(MethodInfo *)0x0);
                  local_2a8 = size_02.fields.x;
                  fVar2 = size_02.fields.y;
                  fVar12 = size_02.fields.z;
                  fVar44 = fVar1;
                  fVar45 = in_XMM1_Db;
                  if (pUVar33 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_parent(pUVar33,pUVar39,(MethodInfo *)0x0);
                    UnityEngine_Object__set_name(pUVar37,(System_String_o *)method_00,(MethodInfo *)0x0);
                    local_2a8 = size_02.fields.x;
                    fVar2 = size_02.fields.y;
                    fVar12 = size_02.fields.z;
                    fVar44 = fVar1;
                    fVar45 = in_XMM1_Db;
                    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                       (pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                   (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                       pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar24,(Il2CppObject *)method_00,(Il2CppObject *)pUVar37,MethodInfo_Void_Add);
                      return (UnityEngine_GameObject_o *)method_00;
                    }
                  }
                }
              }
            }
          }
        }
      }
      pIVar43 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar46 = (undefined4)uVar48;
      fVar3 = UVar53.fields.z;
      fVar4 = fVar9;
      fVar14 = fVar20;
      fVar5 = fVar10;
      fVar7 = local_2a8;
      fVar8 = fVar2;
      fVar1 = fVar12;
      fVar6 = fVar13;
      if (g_data_057ae8a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a5 = '\x01';
      }
      pUVar37 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar30 = UnityEngine_Object__op_Inequality(pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar30 == '\0') {
        return (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar30);
      }
      pUVar25 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar25 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar40 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar40,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar40[1].klass = 0;
        if (pIVar40 != (Il2CppObject *)0x0) {
          pIVar40[2].klass = pIVar43;
          *(float *)&pIVar40[2].monitor = UVar53.fields.z;
          *(ulong *)((long)&pIVar40[2].monitor + 4) =
               CONCAT44(fVar20 + (float)((ulong)pIVar43 >> 0x20),fVar9 + SUB84(pIVar43,0));
          *(float *)((long)&pIVar40[3].klass + 4) = fVar10 + UVar53.fields.z;
          *(float *)&pIVar40[3].monitor = local_2a8;
          *(float *)((long)&pIVar40[3].monitor + 4) = fVar2;
          *(float *)&pIVar40[4].klass = fVar12;
          *(float *)((long)&pIVar40[4].klass + 4) = fVar13;
          *(undefined4 *)&pIVar40[4].monitor = uVar46;
          pUVar38 = (UnityEngine_GameObject_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar25,(System_Collections_IEnumerator_o *)pIVar40,(MethodInfo *)0x0);
          return pUVar38;
        }
      }
      pvVar27 = (void *)il2cpp_runtime_helper_022b2c90();
      uVar46 = (undefined4)uVar48;
      fVar2 = fVar3;
      fVar12 = fVar4;
      fVar13 = fVar14;
      fVar16 = fVar5;
      fVar15 = fVar7;
      fVar9 = fVar8;
      fVar10 = fVar1;
      fVar20 = fVar6;
      if (g_data_057ae8ab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
        g_data_057ae8ab = '\x01';
      }
      pUVar38 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor((Il2CppObject *)pUVar38,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar38->fields).m_CachedPtr = 0;
      if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
        pUVar38[1].monitor = pvVar27;
        *(float *)&pUVar38[1].fields.m_CachedPtr = fVar3;
        *(ulong *)((long)&pUVar38[1].fields.m_CachedPtr + 4) = CONCAT44(fVar14,fVar4);
        *(float *)((long)&pUVar38[2].klass + 4) = fVar5;
        *(float *)&pUVar38[2].monitor = fVar7;
        *(float *)((long)&pUVar38[2].monitor + 4) = fVar8;
        *(float *)&pUVar38[2].fields.m_CachedPtr = fVar1;
        *(float *)((long)&pUVar38[2].fields.m_CachedPtr + 4) = fVar6;
        *(undefined4 *)&pUVar38[3].klass = uVar46;
        return pUVar38;
      }
      pIVar43 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      uVar46 = (undefined4)uVar48;
      fVar3 = fVar2;
      fVar4 = fVar12;
      fVar14 = fVar13;
      fVar5 = fVar16;
      fVar7 = fVar15;
      fVar8 = fVar9;
      fVar1 = fVar10;
      fVar6 = fVar20;
      if (g_data_057ae8a6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a6 = '\x01';
      }
      pUVar37 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar30 = UnityEngine_Object__op_Inequality(pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar30 == '\0') {
        return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_00,bVar30);
      }
      pUVar25 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (pUVar25 != (UnityEngine_MonoBehaviour_o *)0x0) {
        if (g_data_057ae8ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DrawLineCoroutine_d__17);
          g_data_057ae8ab = '\x01';
        }
        pIVar40 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DrawLineCoroutine_d__17);
        System_Object___ctor(pIVar40,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar40[1].klass = 0;
        if (pIVar40 != (Il2CppObject *)0x0) {
          pIVar40[2].klass = pIVar43;
          *(float *)&pIVar40[2].monitor = fVar2;
          *(ulong *)((long)&pIVar40[2].monitor + 4) = CONCAT44(fVar13,fVar12);
          *(float *)((long)&pIVar40[3].klass + 4) = fVar16;
          *(float *)&pIVar40[3].monitor = fVar15;
          *(float *)((long)&pIVar40[3].monitor + 4) = fVar9;
          *(float *)&pIVar40[4].klass = fVar10;
          *(float *)((long)&pIVar40[4].klass + 4) = fVar20;
          *(undefined4 *)&pIVar40[4].monitor = uVar46;
          pUVar38 = (UnityEngine_GameObject_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar25,(System_Collections_IEnumerator_o *)pIVar40,(MethodInfo *)0x0);
          return pUVar38;
        }
      }
      uVar42 = il2cpp_runtime_helper_022b2c90();
      fVar2 = fVar3;
      fVar12 = fVar4;
      fVar13 = fVar14;
      fVar16 = fVar5;
      fVar15 = fVar21;
      fVar9 = fVar7;
      if (g_data_057ae8a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a7 = '\x01';
      }
      pUVar37 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar46 = 0;
      bVar30 = UnityEngine_Object__op_Inequality(pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar30 == '\0') {
        return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_01,bVar30);
      }
      pUVar25 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar37 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      pvVar27 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      iVar28 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (g_data_057a6932 == '\0') {
        pUVar37 = (UnityEngine_Object_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar25 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar26 = *(UnityEngine_Object_c **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        uVar47 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar41 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        uVar46 = 0;
        pUVar37 = pUVar41;
        System_Object___ctor((Il2CppObject *)pUVar41,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar41->fields).m_CachedPtr = 0;
        if (pUVar41 != (UnityEngine_Object_o *)0x0) {
          pUVar41[1].monitor = pUVar25;
          il2cpp_runtime_helper_022b4080(&pUVar41[1].monitor,pUVar25);
          *(undefined4 *)&pUVar41[1].fields.m_CachedPtr = 3;
          *(undefined8 *)((long)&pUVar41[1].fields.m_CachedPtr + 4) = uVar42;
          *(float *)((long)&pUVar41[2].klass + 4) = fVar3;
          pUVar41[2].monitor = pvVar27;
          pUVar41[2].fields.m_CachedPtr = iVar28;
          pUVar41[3].klass = pUVar26;
          *(undefined4 *)&pUVar41[3].monitor = uVar47;
          *(float *)((long)&pUVar41[3].monitor + 4) = fVar4;
          *(float *)&pUVar41[3].fields.m_CachedPtr = fVar14;
          *(float *)((long)&pUVar41[3].fields.m_CachedPtr + 4) = fVar5;
          *(float *)&pUVar41[4].klass = fVar21;
          *(float *)((long)&pUVar41[4].klass + 4) = fVar7;
          pUVar38 = (UnityEngine_GameObject_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar25,(System_Collections_IEnumerator_o *)pUVar41,(MethodInfo *)0x0);
          return pUVar38;
        }
      }
      uVar42 = il2cpp_runtime_helper_022b2c90();
      uVar47 = (undefined4)uVar48;
      fVar4 = fVar2;
      fVar14 = fVar12;
      fVar5 = fVar16;
      fVar7 = fVar15;
      fVar10 = fVar9;
      fVar20 = fVar8;
      fVar17 = fVar1;
      if (g_data_057ae8ac == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        g_data_057ae8ac = '\x01';
      }
      pUVar38 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor((Il2CppObject *)pUVar38,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar38->fields).m_CachedPtr = 0;
      if (pUVar38 != (UnityEngine_GameObject_o *)0x0) {
        pUVar38[1].monitor = pUVar37;
        il2cpp_runtime_helper_022b4080(&pUVar38[1].monitor,pUVar37);
        *(undefined4 *)&pUVar38[1].fields.m_CachedPtr = uVar46;
        *(undefined8 *)((long)&pUVar38[1].fields.m_CachedPtr + 4) = uVar42;
        *(float *)((long)&pUVar38[2].klass + 4) = fVar2;
        *(float *)&pUVar38[2].monitor = fVar12;
        *(float *)((long)&pUVar38[2].monitor + 4) = fVar13;
        *(float *)&pUVar38[2].fields.m_CachedPtr = fVar16;
        *(float *)((long)&pUVar38[2].fields.m_CachedPtr + 4) = fVar15;
        pUVar38[3].klass = (UnityEngine_GameObject_c *)CONCAT44(fVar8,fVar9);
        *(float *)&pUVar38[3].monitor = fVar1;
        *(undefined8 *)((long)&pUVar38[3].monitor + 4) = uVar48;
        *(float *)((long)&pUVar38[3].fields.m_CachedPtr + 4) = fVar44;
        *(float *)&pUVar38[4].klass = fVar45;
        *(float *)((long)&pUVar38[4].klass + 4) = fVar3;
        return pUVar38;
      }
      uVar42 = il2cpp_runtime_helper_022b2c90();
      fVar3 = fVar4;
      fVar8 = fVar14;
      fVar44 = fVar5;
      fVar45 = fVar10;
      fVar1 = fVar20;
      fVar2 = fVar17;
      if (g_data_057ae8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a8 = '\x01';
      }
      pUVar37 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar30 = UnityEngine_Object__op_Inequality(pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar30 == '\0') {
        return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_02,bVar30);
      }
      pIVar43 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar43 != (Il2CppClass *)0x0) {
        pvVar27 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar29 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar40 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar40,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar40[1].klass = 0;
        if (pIVar40 != (Il2CppObject *)0x0) {
          pIVar40[2].klass = pIVar43;
          il2cpp_runtime_helper_022b4080(pIVar40 + 2,pIVar43);
          *(undefined4 *)&pIVar40[2].monitor = 0;
          *(undefined8 *)((long)&pIVar40[2].monitor + 4) = uVar42;
          *(float *)((long)&pIVar40[3].klass + 4) = fVar4;
          pIVar40[3].monitor = pvVar27;
          pIVar40[4].klass = pIVar29;
          pIVar40[4].monitor = (void *)CONCAT44(fVar14,fVar14);
          *(float *)&pIVar40[5].klass = fVar14;
          *(float *)((long)&pIVar40[5].klass + 4) = fVar5;
          *(float *)&pIVar40[5].monitor = fVar7;
          *(float *)((long)&pIVar40[5].monitor + 4) = fVar10;
          *(float *)&pIVar40[6].klass = fVar20;
          *(float *)((long)&pIVar40[6].klass + 4) = fVar17;
          pUVar38 = (UnityEngine_GameObject_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar43,
                               (System_Collections_IEnumerator_o *)pIVar40,(MethodInfo *)0x0);
          return pUVar38;
        }
      }
      uVar42 = il2cpp_runtime_helper_022b2c90();
      fVar4 = fVar3;
      fVar14 = fVar8;
      fVar5 = fVar44;
      fVar7 = fVar45;
      fVar12 = fVar1;
      fVar13 = fVar2;
      fVar16 = fVar6;
      uVar46 = uVar47;
      if (g_data_057ae8a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8a9 = '\x01';
      }
      pUVar37 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar30 = UnityEngine_Object__op_Inequality(pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar30 == '\0') {
        return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_03,bVar30);
      }
      pIVar43 = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pIVar43 != (Il2CppClass *)0x0) {
        pvVar27 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        pIVar29 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pIVar40 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        System_Object___ctor(pIVar40,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar40[1].klass = 0;
        if (pIVar40 != (Il2CppObject *)0x0) {
          pIVar40[2].klass = pIVar43;
          il2cpp_runtime_helper_022b4080(pIVar40 + 2,pIVar43);
          *(undefined4 *)&pIVar40[2].monitor = 2;
          *(undefined8 *)((long)&pIVar40[2].monitor + 4) = uVar42;
          *(float *)((long)&pIVar40[3].klass + 4) = fVar3;
          pIVar40[3].monitor = pvVar27;
          pIVar40[4].klass = pIVar29;
          pIVar40[4].monitor = (void *)CONCAT44(fVar44,fVar8);
          *(float *)&pIVar40[5].klass = fVar8;
          *(float *)((long)&pIVar40[5].klass + 4) = fVar45;
          *(float *)&pIVar40[5].monitor = fVar1;
          *(float *)((long)&pIVar40[5].monitor + 4) = fVar2;
          *(float *)&pIVar40[6].klass = fVar6;
          *(undefined4 *)((long)&pIVar40[6].klass + 4) = uVar47;
          pUVar38 = (UnityEngine_GameObject_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pIVar43,
                               (System_Collections_IEnumerator_o *)pIVar40,(MethodInfo *)0x0);
          return pUVar38;
        }
      }
      uVar42 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae8aa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomDebug);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae8aa = '\x01';
      }
      pUVar37 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar47 = 0;
      bVar30 = UnityEngine_Object__op_Inequality(pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar30 == '\0') {
        return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_04,bVar30);
      }
      pUVar25 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
      if (g_data_057a6843 == '\0') {
        pUVar37 = (UnityEngine_Object_o *)&TypeInfo_Quaternion;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6843 = '\x01';
      }
      if (pUVar25 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pvVar27 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        iVar28 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        if (g_data_057ae8ac == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
          g_data_057ae8ac = '\x01';
        }
        pUVar41 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SpawnPrimitiveCoroutine_d__18);
        uVar47 = 0;
        pUVar37 = pUVar41;
        System_Object___ctor((Il2CppObject *)pUVar41,(MethodInfo *)0x0);
        *(undefined4 *)&(pUVar41->fields).m_CachedPtr = 0;
        if (pUVar41 != (UnityEngine_Object_o *)0x0) {
          pUVar41[1].monitor = pUVar25;
          il2cpp_runtime_helper_022b4080(&pUVar41[1].monitor,pUVar25);
          *(undefined4 *)&pUVar41[1].fields.m_CachedPtr = 1;
          *(undefined8 *)((long)&pUVar41[1].fields.m_CachedPtr + 4) = uVar42;
          *(float *)((long)&pUVar41[2].klass + 4) = fVar4;
          pUVar41[2].monitor = pvVar27;
          pUVar41[2].fields.m_CachedPtr = iVar28;
          pUVar41[3].klass = (UnityEngine_Object_c *)CONCAT44(fVar5,fVar14);
          *(float *)&pUVar41[3].monitor = fVar14;
          *(float *)((long)&pUVar41[3].monitor + 4) = fVar7;
          *(float *)&pUVar41[3].fields.m_CachedPtr = fVar12;
          *(float *)((long)&pUVar41[3].fields.m_CachedPtr + 4) = fVar13;
          *(float *)&pUVar41[4].klass = fVar16;
          *(undefined4 *)((long)&pUVar41[4].klass + 4) = uVar46;
          pUVar38 = (UnityEngine_GameObject_o *)
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar25,(System_Collections_IEnumerator_o *)pUVar41,(MethodInfo *)0x0);
          return pUVar38;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pUVar37,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar37->fields).m_CachedPtr = uVar47;
      return extraout_RAX;
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Utility.CustomDebug$$.ctor
// il2cpp: void Utility_CustomDebug___ctor (Utility_CustomDebug_o* __this, const MethodInfo* method);
// 0x4483fd0

void Utility_CustomDebug___ctor(Utility_CustomDebug_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (cRam00000000057ae8af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GameObject);
    cRam00000000057ae8af = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
  (__this->fields)._debugObjects = (System_Collections_Generic_Dictionary_string__GameObject__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._debugObjects);
  if (g_data_057b4c9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057b4c9f = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


