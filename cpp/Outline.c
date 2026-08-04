// Type: Outline
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Outline.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/Outline.cs
// --------------------------------

// Outline.ListVector3$$.ctor
// il2cpp: void Outline_ListVector3___ctor (Outline_ListVector3_o* __this, const MethodInfo* method);
// 0x405ead0

void Outline_ListVector3___ctor(Outline_ListVector3_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c$$.cctor
// il2cpp: void Outline___c___cctor (const MethodInfo* method);
// 0x405f350

void Outline___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac296 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac296 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Outline.<>c$$.ctor
// il2cpp: void Outline___c___ctor (Outline___c_o* __this, const MethodInfo* method);
// 0x405f3c0

void Outline___c___ctor(Outline___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c$$<SmoothNormals>b__31_0
// il2cpp: System_Collections_Generic_KeyValuePair_Vector3__int__o Outline___c___SmoothNormals_b__31_0 (Outline___c_o* __this, UnityEngine_Vector3_o vertex, int32_t index, const MethodInfo* method);
// 0x405f3d0

System_Collections_Generic_KeyValuePair_Vector3__int__o
Outline___c___SmoothNormals_b__31_0
          (Outline___c_o *__this,UnityEngine_Vector3_o vertex,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_Vector3__int__Fields SVar1;
  float fVar2;
  float fVar3;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  ulong uVar4;
  System_Collections_Generic_KeyValuePair_Vector3__int__o __this_00;
  UnityEngine_Vector3_o key;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  uVar4 = CONCAT44((int)((ulong)register0x00001240 >> 0x20),vertex.fields.z);
  fVar2 = vertex.fields.x;
  fVar3 = vertex.fields.y;
  if (g_data_057ac297 == '\0') {
    local_18._8_4_ = in_XMM0_Dc;
    local_18._0_8_ = vertex.fields._0_8_;
    local_18._12_4_ = in_XMM0_Dd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_System_Int32);
    uVar4 = (ulong)(uint)vertex.fields.z;
    g_data_057ac297 = '\x01';
    fVar2 = (float)local_18._0_4_;
    fVar3 = (float)local_18._4_4_;
  }
  local_28 = 0;
  uStack_20 = 0;
  __this_00.fields.key.fields.y = fVar3;
  __this_00.fields.key.fields.x = fVar2;
  __this_00.fields._8_8_ = &local_28;
  key.fields.z = 0.0;
  key.fields.x = (float)(int)uVar4;
  key.fields.y = (float)(int)(uVar4 >> 0x20);
  System_Collections_Generic_KeyValuePair_Vector3__int____ctor(__this_00,key,index,MethodInfo_KeyValuePair_2_UnityEngine_Vector3_System_Int32);
  SVar1.key.fields.z = (float)(undefined4)uStack_20;
  SVar1.value = uStack_20._4_4_;
  SVar1.key.fields.x = (float)(undefined4)local_28;
  SVar1.key.fields.y = (float)local_28._4_4_;
  return (System_Collections_Generic_KeyValuePair_Vector3__int__o)SVar1;
}


// Outline.<>c$$<SmoothNormals>b__31_1
// il2cpp: UnityEngine_Vector3_o Outline___c___SmoothNormals_b__31_1 (Outline___c_o* __this, System_Collections_Generic_KeyValuePair_Vector3__int__o pair, const MethodInfo* method);
// 0x405f440

UnityEngine_Vector3_o
Outline___c___SmoothNormals_b__31_1
          (Outline___c_o *__this,System_Collections_Generic_KeyValuePair_Vector3__int__o pair,
          MethodInfo *method)

{
  if (g_data_057ac298 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Key);
    g_data_057ac298 = '\x01';
  }
  return (UnityEngine_Vector3_o)pair.fields.key.fields.fields;
}


// Outline.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Outline___c__DisplayClass23_0___ctor (Outline___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x405ee10

void Outline___c__DisplayClass23_0___ctor(Outline___c__DisplayClass23_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass23_0$$<RefreshRenderers>b__1
// il2cpp: bool Outline___c__DisplayClass23_0___RefreshRenderers_b__1 (Outline___c__DisplayClass23_0_o* __this, System_String_o* a, const MethodInfo* method);
// 0x405f480

bool_conflict
Outline___c__DisplayClass23_0___RefreshRenderers_b__1
          (Outline___c__DisplayClass23_0_o *__this,System_String_o *a,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_String_o *pSVar4;
  System_String_o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_MonoBehaviour_o *__this_03;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  float fStack_40;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  
  pUVar6 = (UnityEngine_Object_o *)(__this->fields).e;
  pSVar5 = a;
  if (pUVar6 != (UnityEngine_Object_o *)0x0) {
    pSVar5 = (System_String_o *)0x0;
    pSVar4 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(pSVar4,a,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (UnityEngine_Object_o *)(pUVar6->fields).m_CachedPtr;
  pSVar4 = pSVar5;
  if (pUVar6 != (UnityEngine_Object_o *)0x0) {
    pSVar4 = (System_String_o *)0x0;
    __this_00 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(__this_00,pSVar5,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (UnityEngine_MonoBehaviour_o *)(pUVar6->fields).m_CachedPtr;
  if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
    if (pSVar5 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(pSVar5,pSVar4,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (__this_02[1].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
    uVar2 = *(undefined8 *)((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4);
    fVar1 = *(float *)((long)&__this_02[1].fields.m_CachedPtr + 4);
    UVar9 = UnityEngine_Transform__get_position
                      ((UnityEngine_Transform_o *)__this_02[1].klass,(MethodInfo *)0x0);
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar7 = fVar7 * *(float *)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr;
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
    fStack_30 = (float)uVar2;
    fStack_2c = (float)((ulong)uVar2 >> 0x20);
    fStack_40 = UVar9.fields.x;
    fStack_3c = UVar9.fields.y;
    *(ulong *)((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4) =
         CONCAT44(fVar8 * (fStack_3c - fStack_2c) + fStack_2c,fVar8 * (fStack_40 - fStack_30) + fStack_30);
    *(float *)((long)&__this_02[1].fields.m_CachedPtr + 4) = (UVar9.fields.z - fVar1) * fVar8 + fVar1;
    __this_03 = __this_02;
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__LookAt_4e0aa40
                (__this_01,
                 (UnityEngine_Vector3_o)
                 *(UnityEngine_Vector3_Fields *)
                  ((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4),
                 (MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_03[1].monitor = 0x3f000000;
  UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// Outline.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Outline___c__DisplayClass30_0___ctor (Outline___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x405f1f0

void Outline___c__DisplayClass30_0___ctor(Outline___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass30_0$$<LoadSmoothNormals>b__2
// il2cpp: bool Outline___c__DisplayClass30_0___LoadSmoothNormals_b__2 (Outline___c__DisplayClass30_0_o* __this, System_String_o* a, const MethodInfo* method);
// 0x405f4b0

bool_conflict
Outline___c__DisplayClass30_0___LoadSmoothNormals_b__2
          (Outline___c__DisplayClass30_0_o *__this,System_String_o *a,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_String_o *pSVar4;
  UnityEngine_Transform_o *__this_00;
  System_String_o *value;
  UnityEngine_Object_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_MonoBehaviour_o *__this_03;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  
  __this_01 = (UnityEngine_Object_o *)(__this->fields).e;
  value = a;
  if (__this_01 != (UnityEngine_Object_o *)0x0) {
    value = (System_String_o *)0x0;
    pSVar4 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(pSVar4,a,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (UnityEngine_MonoBehaviour_o *)(__this_01->fields).m_CachedPtr;
  if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(pSVar4,value,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (__this_02[1].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
    uVar2 = *(undefined8 *)((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4);
    fVar1 = *(float *)((long)&__this_02[1].fields.m_CachedPtr + 4);
    UVar7 = UnityEngine_Transform__get_position
                      ((UnityEngine_Transform_o *)__this_02[1].klass,(MethodInfo *)0x0);
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 * *(float *)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr;
    fVar6 = 1.0;
    if (fVar5 <= 1.0) {
      fVar6 = fVar5;
    }
    fVar6 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6);
    fStack_28 = (float)uVar2;
    fStack_24 = (float)((ulong)uVar2 >> 0x20);
    fStack_38 = UVar7.fields.x;
    fStack_34 = UVar7.fields.y;
    *(ulong *)((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4) =
         CONCAT44(fVar6 * (fStack_34 - fStack_24) + fStack_24,fVar6 * (fStack_38 - fStack_28) + fStack_28);
    *(float *)((long)&__this_02[1].fields.m_CachedPtr + 4) = (UVar7.fields.z - fVar1) * fVar6 + fVar1;
    __this_03 = __this_02;
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__LookAt_4e0aa40
                (__this_00,
                 (UnityEngine_Vector3_o)
                 *(UnityEngine_Vector3_Fields *)
                  ((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4),
                 (MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_03[1].monitor = 0x3f000000;
  UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// Outline.<>c__DisplayClass30_1$$.ctor
// il2cpp: void Outline___c__DisplayClass30_1___ctor (Outline___c__DisplayClass30_1_o* __this, const MethodInfo* method);
// 0x405f340

void Outline___c__DisplayClass30_1___ctor(Outline___c__DisplayClass30_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass30_1$$<LoadSmoothNormals>b__3
// il2cpp: bool Outline___c__DisplayClass30_1___LoadSmoothNormals_b__3 (Outline___c__DisplayClass30_1_o* __this, System_String_o* a, const MethodInfo* method);
// 0x405f4e0

bool_conflict
Outline___c__DisplayClass30_1___LoadSmoothNormals_b__3
          (Outline___c__DisplayClass30_1_o *__this,System_String_o *a,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_String_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_MonoBehaviour_o *__this_03;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  
  __this_02 = (UnityEngine_MonoBehaviour_o *)(__this->fields).e;
  if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
    __this_00 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(__this_00,a,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (__this_02[1].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
    uVar2 = *(undefined8 *)((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4);
    fVar1 = *(float *)((long)&__this_02[1].fields.m_CachedPtr + 4);
    UVar6 = UnityEngine_Transform__get_position
                      ((UnityEngine_Transform_o *)__this_02[1].klass,(MethodInfo *)0x0);
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 * *(float *)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr;
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
    fStack_20 = (float)uVar2;
    fStack_1c = (float)((ulong)uVar2 >> 0x20);
    fStack_30 = UVar6.fields.x;
    fStack_2c = UVar6.fields.y;
    *(ulong *)((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4) =
         CONCAT44(fVar5 * (fStack_2c - fStack_1c) + fStack_1c,fVar5 * (fStack_30 - fStack_20) + fStack_20);
    *(float *)((long)&__this_02[1].fields.m_CachedPtr + 4) = (UVar6.fields.z - fVar1) * fVar5 + fVar1;
    __this_03 = __this_02;
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__LookAt_4e0aa40
                (__this_01,
                 (UnityEngine_Vector3_o)
                 *(UnityEngine_Vector3_Fields *)
                  ((long)&((UnityEngine_Object_Fields *)&__this_02[1].monitor)->m_CachedPtr + 4),
                 (MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_03[1].monitor = 0x3f000000;
  UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// Outline$$get_OutlineMode
// il2cpp: int32_t Outline__get_OutlineMode (Outline_o* __this, const MethodInfo* method);
// 0x405c940

int32_t Outline__get_OutlineMode(Outline_o *__this,MethodInfo *method)

{
  return (__this->fields).outlineMode;
}


// Outline$$set_OutlineMode
// il2cpp: void Outline__set_OutlineMode (Outline_o* __this, int32_t value, const MethodInfo* method);
// 0x405c950

void Outline__set_OutlineMode(Outline_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).outlineMode = value;
  *(undefined1 *)&(__this->fields).needsUpdate = 1;
  return;
}


// Outline$$get_OutlineColor
// il2cpp: UnityEngine_Color_o Outline__get_OutlineColor (Outline_o* __this, const MethodInfo* method);
// 0x405c960

UnityEngine_Color_o Outline__get_OutlineColor(Outline_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields).outlineColor.fields;
}


// Outline$$set_OutlineColor
// il2cpp: void Outline__set_OutlineColor (Outline_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x405c970

void Outline__set_OutlineColor(Outline_o *__this,UnityEngine_Color_o value,MethodInfo *method)

{
  (__this->fields).outlineColor.fields = value.fields;
  *(undefined1 *)&(__this->fields).needsUpdate = 1;
  return;
}


// Outline$$get_OutlineWidth
// il2cpp: float Outline__get_OutlineWidth (Outline_o* __this, const MethodInfo* method);
// 0x405c980

float Outline__get_OutlineWidth(Outline_o *__this,MethodInfo *method)

{
  return (__this->fields).outlineWidth;
}


// Outline$$set_OutlineWidth
// il2cpp: void Outline__set_OutlineWidth (Outline_o* __this, float value, const MethodInfo* method);
// 0x405c990

void Outline__set_OutlineWidth(Outline_o *__this,float value,MethodInfo *method)

{
  (__this->fields).outlineWidth = value;
  *(undefined1 *)&(__this->fields).needsUpdate = 1;
  return;
}


// Outline$$Awake
// il2cpp: void Outline__Awake (Outline_o* __this, const MethodInfo* method);
// 0x405c9a0

void Outline__Awake(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  bool_conflict bVar2;
  int32_t iVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_HashSet_TSource__o *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Material_o *pUVar7;
  System_Predicate_T__o *pSVar8;
  UnityEngine_Mesh_o *pUVar9;
  Il2CppClass *uvs;
  Outline_o *pOVar10;
  UnityEngine_Material_array *pUVar11;
  UnityEngine_Mesh_o *__this_08;
  UnityEngine_Vector2_array *value;
  long *plVar12;
  MethodInfo *pMVar13;
  MethodInfo *method_00;
  UnityEngine_Object_o *__this_09;
  long lVar14;
  Outline_o *pOVar15;
  long *unaff_R13;
  undefined1 auVar16 [12];
  _union_332932 _Var17;
  Il2CppType *pIVar18;
  Outline_o *pOVar19;
  _union_332932 _Stack_80;
  Il2CppType *pIStack_78;
  Outline_o *pOStack_70;
  _union_332932 _Stack_60;
  Il2CppType *pIStack_58;
  Outline_o *pOStack_50;
  Outline_o *pOStack_48;
  
  if (g_data_057ac285 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Renderer_ToHashSet_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_Instantiate_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_Load_Material);
    il2cpp_runtime_helper_023445d0(&"OutlineMaskAndFill (Instance)");
    il2cpp_runtime_helper_023445d0(&"Materials/OutlineMaskAndFill");
    g_data_057ac285 = '\x01';
  }
  pSVar4 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
  pSVar5 = System_Linq_Enumerable__ToHashSet_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_Renderer_ToHashSet_Renderer);
  (__this->fields).renderers = (System_Collections_Generic_HashSet_Renderer__o *)pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).renderers,pSVar5);
  pIVar6 = UnityEngine_Resources__Load_object_("Materials/OutlineMaskAndFill",MethodInfo_Material_Load_Material);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = (UnityEngine_Material_o *)UnityEngine_Object__Instantiate_object_(pIVar6,MethodInfo_Material_Instantiate_Material);
  (__this->fields).outlineMaskAndFillMaterial = pUVar7;
  il2cpp_runtime_helper_022b4080(&(__this->fields).outlineMaskAndFillMaterial,pUVar7);
  __this_09 = (UnityEngine_Object_o *)(__this->fields).outlineMaskAndFillMaterial;
  if (__this_09 != (UnityEngine_Object_o *)0x0) {
    pMVar13 = "OutlineMaskAndFill (Instance)";
    UnityEngine_Object__set_name(__this_09,(System_String_o *)"OutlineMaskAndFill (Instance)",(MethodInfo *)0x0);
    Outline__LoadSmoothNormals(__this,pMVar13);
    *(undefined1 *)&(__this->fields).needsUpdate = 1;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pOStack_48 = __this;
  if (g_data_057ac28c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponentsInChildren_SkinnedMeshR);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_MeshFilter_ToHashSet_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_SkinnedMeshRenderer_ToHashSet_Skin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_SkinnedMeshRenderer_G);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_MeshFilter_GetEnumera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Outline_ListVector3_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSmoothNormals_b__30_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSmoothNormals_b__30_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Outline);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_MeshFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057ac28c = '\x01';
  }
  _Stack_80.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_78 = (Il2CppType *)0x0;
  pOStack_70 = (Outline_o *)0x0;
  _Var17.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar18 = (Il2CppType *)0x0;
  pOVar19 = (Outline_o *)0x0;
  pSVar4 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this_09,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
  pSVar5 = System_Linq_Enumerable__ToHashSet_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_MeshFilter_ToHashSet_MeshFilter);
  pSVar8 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_MeshFilter);
  System_Predicate_object____ctor();
  if (pSVar5 == (System_Collections_Generic_HashSet_TSource__o *)0x0) goto label_0405d064;
  System_Collections_Generic_HashSet_object___RemoveWhere
            ((System_Collections_Generic_HashSet_object__o *)pSVar5,pSVar8,MethodInfo_Int32_RemoveWhere);
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_60,
             (System_Collections_Generic_HashSet_object__o *)pSVar5,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_MeshFilter_GetEnumera);
  pOStack_70 = pOStack_50;
  _Stack_80 = _Stack_60;
  pIStack_78 = pIStack_58;
  unaff_R13 = &TypeInfo_Outline;
  while( true ) {
    do {
      do {
        __this_01.fields._8_8_ = pIVar18;
        __this_01.fields._set = _Var17.genericMethod;
        __this_01.fields._current = (Il2CppObject *)pOVar19;
        bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_3219C40 *)&_Stack_80);
        pOVar15 = pOStack_70;
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar18;
          __this_02.fields._set = _Var17.genericMethod;
          __this_02.fields._current = (Il2CppObject *)pOVar19;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_3219C30 *)&_Stack_80);
          goto label_0405ce79;
        }
        if (*(int *)(TypeInfo_Outline + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pOVar15 == (Outline_o *)0x0) goto label_0405d037;
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_Outline + 0xb8);
        pUVar9 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar15,(MethodInfo *)0x0)
        ;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0405d03c;
        bVar2 = System_Collections_Generic_HashSet_object___Add(pSVar1,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Add);
      } while ((char)bVar2 == '\0');
      __this_00 = (System_Collections_Generic_List_object__o *)__this_09[2].fields.m_CachedPtr;
      pUVar9 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar15,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_0405d04b;
      iVar3 = System_Collections_Generic_List_object___IndexOf(__this_00,(Il2CppObject *)pUVar9,MethodInfo_Int32_IndexOf);
      if (iVar3 < 0) {
        pOVar10 = pOVar15;
        pUVar9 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar15,(MethodInfo *)0x0)
        ;
        uvs = (Il2CppClass *)Outline__SmoothNormals(pOVar10,pUVar9,method_00);
      }
      else {
        if (__this_09[3].klass == (UnityEngine_Object_c *)0x0) goto label_0405d055;
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_09[3].klass,iVar3,MethodInfo_Outline_ListVector3_get_Item
                           );
        if (pIVar6 == (Il2CppObject *)0x0) goto label_0405d05a;
        uvs = pIVar6[1].klass;
      }
      pUVar9 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar15,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_Mesh_o *)0x0) goto label_0405d050;
      pMVar13 = (MethodInfo *)0x0;
      UnityEngine_Mesh__SetUVs(pUVar9,3,(System_Collections_Generic_List_Vector3__o *)uvs,(MethodInfo *)0x0);
      pOVar10 = (Outline_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pOVar15,MethodInfo_Renderer_GetComponent_Renderer);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pOVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    pUVar9 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar15,(MethodInfo *)0x0);
    if (pOVar10 == (Outline_o *)0x0) break;
    pUVar11 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)pOVar10,(MethodInfo *)0x0);
    Outline__CombineSubmeshes(pOVar10,pUVar9,pUVar11,pMVar13);
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0405d064:
    do {
      auVar16 = il2cpp_runtime_helper_022b2c90();
      if (auVar16._8_4_ != 1) {
        __this_06.fields._8_8_ = pIVar18;
        __this_06.fields._set = _Var17.genericMethod;
        __this_06.fields._current = (Il2CppObject *)pOVar19;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_3219C30 *)&_Stack_80);
label_0405d35e:
        _Unwind_Resume(auVar16._0_8_);
      }
      plVar12 = (long *)__cxa_begin_catch(auVar16._0_8_);
      lVar14 = *plVar12;
      __cxa_end_catch();
      __this_05.fields._8_8_ = pIVar18;
      __this_05.fields._set = _Var17.genericMethod;
      __this_05.fields._current = (Il2CppObject *)pOVar19;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_05,(MethodInfo_3219C30 *)&_Stack_80);
      if (lVar14 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar14);
        __this_07.fields._8_8_ = pIVar18;
        __this_07.fields._set = _Var17.genericMethod;
        __this_07.fields._current = (Il2CppObject *)pOVar19;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_3219C30 *)&stack0xffffffffffffff60);
        goto label_0405d35e;
      }
label_0405ce79:
      pSVar4 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                         ((UnityEngine_Component_o *)__this_09,MethodInfo_SkinnedMeshRenderer_GetComponentsInChildren_SkinnedMeshR);
      pSVar5 = System_Linq_Enumerable__ToHashSet_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_SkinnedMeshRenderer_ToHashSet_Skin);
      pSVar8 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_SkinnedMeshRenderer);
      System_Predicate_object____ctor();
    } while (pSVar5 == (System_Collections_Generic_HashSet_TSource__o *)0x0);
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)pSVar5,pSVar8,MethodInfo_Int32_RemoveWhere);
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_60,
               (System_Collections_Generic_HashSet_object__o *)pSVar5,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_SkinnedMeshRenderer_G);
    __this_09 = (UnityEngine_Object_o *)&MethodInfo_Boolean_MoveNext;
    _Var17 = _Stack_60;
    pIVar18 = pIStack_58;
    pOVar19 = pOStack_50;
    while( true ) {
      pOVar15 = pOVar19;
      __this_03.fields._8_8_ = pIVar18;
      __this_03.fields._set = _Var17.genericMethod;
      __this_03.fields._current = (Il2CppObject *)pOVar15;
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_03,(MethodInfo_3219C40 *)&stack0xffffffffffffff60);
      if ((char)bVar2 == '\0') {
        __this_04.fields._8_8_ = pIVar18;
        __this_04.fields._set = _Var17.genericMethod;
        __this_04.fields._current = (Il2CppObject *)pOVar15;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff60);
        return;
      }
      lVar14 = *unaff_R13;
      pOVar19 = pOVar15;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar14 = *unaff_R13;
      }
      if (pOVar15 == (Outline_o *)0x0) break;
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(lVar14 + 0xb8);
      pUVar9 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                         ((UnityEngine_SkinnedMeshRenderer_o *)pOVar15,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0405d032;
      pMVar13 = (MethodInfo *)&MethodInfo_Boolean_Add;
      bVar2 = System_Collections_Generic_HashSet_object___Add(pSVar1,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Add);
      if ((char)bVar2 != '\0') {
        pUVar9 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pOVar15,(MethodInfo *)0x0);
        __this_08 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                              ((UnityEngine_SkinnedMeshRenderer_o *)pOVar15,(MethodInfo *)0x0);
        if (__this_08 == (UnityEngine_Mesh_o *)0x0) goto label_0405d041;
        iVar3 = UnityEngine_Mesh__get_vertexCount(__this_08,(MethodInfo *)0x0);
        value = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar3);
        if (pUVar9 == (UnityEngine_Mesh_o *)0x0) goto label_0405d046;
        UnityEngine_Mesh__set_uv4(pUVar9,value,(MethodInfo *)0x0);
        pUVar9 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pOVar15,(MethodInfo *)0x0);
        pUVar11 = UnityEngine_Renderer__get_sharedMaterials
                            ((UnityEngine_Renderer_o *)pOVar15,(MethodInfo *)0x0);
        Outline__CombineSubmeshes(pOVar15,pUVar9,pUVar11,pMVar13);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_0405d032:
    il2cpp_runtime_helper_022b2c90();
label_0405d037:
    il2cpp_runtime_helper_022b2c90();
label_0405d03c:
    il2cpp_runtime_helper_022b2c90();
label_0405d041:
    il2cpp_runtime_helper_022b2c90();
label_0405d046:
    il2cpp_runtime_helper_022b2c90();
label_0405d04b:
    il2cpp_runtime_helper_022b2c90();
label_0405d050:
    il2cpp_runtime_helper_022b2c90();
label_0405d055:
    il2cpp_runtime_helper_022b2c90();
label_0405d05a:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// Outline$$RefreshRenderers
// il2cpp: void Outline__RefreshRenderers (Outline_o* __this, System_Collections_Generic_List_string__o* namesToIgnore, const MethodInfo* method);
// 0x405d380

void Outline__RefreshRenderers
               (Outline_o *__this,System_Collections_Generic_List_string__o *namesToIgnore,MethodInfo *method)

{
  int32_t *piVar1;
  System_Reflection_MethodInfo_o **ppSVar2;
  int32_t iVar3;
  uint uVar4;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar5;
  System_Collections_Generic_List_Mesh__o *pSVar6;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  long lVar8;
  MethodInfo_362C220 *pMVar9;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar10;
  UnityEngine_Object_o *obj;
  UnityEngine_Color_Fields value;
  bool_conflict bVar11;
  System_Object_array *pSVar12;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  MethodInfo *pMVar13;
  System_Predicate_T__o *pSVar14;
  System_Predicate_T__o *pSVar15;
  UnityEngine_Mesh_o *pUVar16;
  System_Predicate_T__o *__this_01;
  undefined8 uVar17;
  int iVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  System_Predicate_T__o **ppSVar19;
  Outline_ListVector3_array *__this_02;
  System_Predicate_T__o *pSVar20;
  System_Predicate_T__o *pSVar21;
  UnityEngine_Material_o *pUVar22;
  long lVar23;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  uint uVar24;
  float fVar25;
  System_Predicate_T__o *pSStack_60;
  System_Predicate_T__o *pSStack_58;
  Outline_ListVector3_array *pOStack_50;
  System_Collections_Generic_HashSet_object__o *pSStack_48;
  Outline_o *pOStack_40;
  
  if (g_data_057ac286 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Renderer_ToHashSet_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Renderer_Where_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Renderer_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RefreshRenderers_b__23_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Outline);
    g_data_057ac286 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._namesToIgnore = namesToIgnore;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._namesToIgnore,namesToIgnore,method);
  if (*(int *)(TypeInfo_Outline + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (Outline_ListVector3_array *)**(undefined8 **)(TypeInfo_Outline + 0xb8);
  if (__this_02 != (Outline_ListVector3_array *)0x0) {
    System_Collections_Generic_HashSet_object___Clear
              ((System_Collections_Generic_HashSet_object__o *)__this_02,MethodInfo_Void_Clear);
    pSVar5 = (__this->fields).bakeValues;
    if (pSVar5 != (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar3 = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < iVar3) {
        __this_02 = (pSVar5->fields)._items;
        System_Array__Clear((System_Array_o *)__this_02,0,iVar3,(MethodInfo *)0x0);
      }
      pSVar6 = (__this->fields).bakeKeys;
      if (pSVar6 != (System_Collections_Generic_List_Mesh__o *)0x0) {
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar3 = (pSVar6->fields)._size;
        (pSVar6->fields)._size = 0;
        if (0 < iVar3) {
          System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        pMVar13 = (MethodInfo *)0x0;
        bVar11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
        Outline__OnDisable(__this,pMVar13);
        pSVar12 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                            ((UnityEngine_Component_o *)__this,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Renderer_bool);
        System_Func_object__bool____ctor();
        source = System_Linq_Enumerable__Where_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar12,predicate,
                            MethodInfo_IEnumerable_1_UnityEngine_Renderer_Where_Renderer);
        pMVar13 = (MethodInfo *)System_Linq_Enumerable__ToHashSet_object_(source,MethodInfo_HashSet_1_UnityEngine_Renderer_ToHashSet_Renderer);
        (__this->fields).renderers = (System_Collections_Generic_HashSet_Renderer__o *)pMVar13;
        il2cpp_runtime_helper_022b4080(&(__this->fields).renderers);
        Outline__LoadSmoothNormals(__this,pMVar13);
        Outline__OnEnable(__this,pMVar13);
        *(undefined1 *)&(__this->fields).needsUpdate = 1;
        if ((char)bVar11 != '\0') {
          Outline__OnEnable(__this,pMVar13);
          return;
        }
        Outline__OnDisable(__this,pMVar13);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pOStack_40 = __this;
  if (g_data_057ac289 == '\0') {
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x405d59d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x405d5a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_OnDisable_b__27_0);
    pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x405d5b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Renderer);
    g_data_057ac289 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)__this_02->m_Items[6];
  pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x405d5cf;
  pSVar14 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Renderer);
  pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x405d5e9;
  pSVar20 = pSVar14;
  System_Predicate_object____ctor();
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(pSVar7,pSVar14,MethodInfo_Int32_RemoveWhere);
    return;
  }
  pSStack_48 = (System_Collections_Generic_HashSet_object__o *)0x405d60d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_58 = pSVar14;
  pOStack_50 = __this_02;
  pSStack_48 = pSVar7;
  if (g_data_057ac287 == '\0') {
    pSStack_60 = (System_Predicate_T__o *)0x405d62d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    pSStack_60 = (System_Predicate_T__o *)0x405d639;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_OnEnable_b__24_0);
    pSStack_60 = (System_Predicate_T__o *)0x405d645;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Renderer);
    g_data_057ac287 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)(pSVar20->fields).interp_invoke_impl;
  pSStack_60 = (System_Predicate_T__o *)0x405d65f;
  pSVar15 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Renderer);
  pSStack_60 = (System_Predicate_T__o *)0x405d679;
  pSVar14 = pSVar15;
  System_Predicate_object____ctor();
  if (pSVar7 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(pSVar7,pSVar15,MethodInfo_Int32_RemoveWhere);
    return;
  }
  pSStack_60 = (System_Predicate_T__o *)0x405d69d;
  il2cpp_runtime_helper_022b2c90();
  ppSVar19 = &pSStack_60;
  pSVar21 = pSVar14;
  pSStack_60 = pSVar15;
  if (g_data_057ac288 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSVar21 = (System_Predicate_T__o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac288 = '\x01';
  }
  *(undefined1 *)&(pSVar14->fields).original_method_info = 1;
  lVar23 = (pSVar14->fields).method_code;
  if ((char)(pSVar14->fields).extra_arg == '\0') {
    if (lVar23 == 0) goto label_0405d77b;
    iVar18 = *(int *)(lVar23 + 0x18);
    if (iVar18 == 0) goto label_0405d6fb;
label_0405d71a:
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    *(undefined4 *)(lVar23 + 0x18) = 0;
    if (0 < iVar18) {
      pSVar21 = *(System_Predicate_T__o **)(lVar23 + 0x10);
      System_Array__Clear((System_Array_o *)pSVar21,0,iVar18,(MethodInfo *)0x0);
    }
    lVar23 = (pSVar14->fields).interp_method;
    if (lVar23 == 0) goto label_0405d77b;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    iVar3 = *(int32_t *)(lVar23 + 0x18);
    *(undefined4 *)(lVar23 + 0x18) = 0;
    if (0 < iVar3) {
      pSVar21 = *(System_Predicate_T__o **)(lVar23 + 0x10);
      System_Array__Clear((System_Array_o *)pSVar21,0,iVar3,(MethodInfo *)0x0);
    }
label_0405d75e:
    if ((char)(pSVar14->fields).extra_arg == '\0') {
      return;
    }
    lVar23 = (pSVar14->fields).method_code;
    if (lVar23 == 0) goto label_0405d77b;
    if (*(int *)(lVar23 + 0x18) != 0) {
      return;
    }
    ppSVar19 = &pSStack_58;
    pSVar15 = pSStack_60;
    pSVar21 = pSVar14;
  }
  else {
    if (lVar23 != 0) {
label_0405d6fb:
      lVar8 = (pSVar14->fields).interp_method;
      if (lVar8 != 0) {
        iVar18 = *(int *)(lVar23 + 0x18);
        if (iVar18 != *(int *)(lVar8 + 0x18)) goto label_0405d71a;
        goto label_0405d75e;
      }
    }
label_0405d77b:
    il2cpp_runtime_helper_022b2c90();
    pSVar15 = pSVar14;
  }
  *(long **)((long)ppSVar19 + -8) = &TypeInfo_Outline;
  *(undefined8 *)((long)ppSVar19 + -0x10) = 0;
  *(System_Predicate_T__o **)((long)ppSVar19 + -0x18) = pSVar20;
  *(undefined8 *)((long)ppSVar19 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppSVar19 + -0x28) = unaff_R12;
  *(System_Predicate_T__o **)((long)ppSVar19 + -0x30) = pSVar15;
  *(System_Predicate_T__o **)((long)ppSVar19 + -0x40) = pSVar21;
  if (g_data_057ac28b == '\0') {
    *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d7a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d7b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d7c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Mesh);
    *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d7cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Mesh);
    *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d7d8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListVector3);
    *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d7e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d7f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac28b = '\x01';
  }
  *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d806;
  pSVar21 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Mesh);
  *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d81b;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar21,MethodInfo_HashSet_1_UnityEngine_Mesh);
  pSVar14 = *(System_Predicate_T__o **)((long)ppSVar19 + -0x40);
  *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d82f;
  pSVar12 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)pSVar14,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
  if (pSVar12 == (System_Object_array *)0x0) {
label_0405d9ef:
    *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d9f4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar18 = (int)pSVar12->max_length;
    if (iVar18 < 1) {
      return;
    }
    pSVar20 = (System_Predicate_T__o *)0x0;
    *(System_Object_array **)((long)ppSVar19 + -0x38) = pSVar12;
    if (iVar18 != 0) {
      do {
        pSVar15 = (System_Predicate_T__o *)pSVar12->m_Items[(int)pSVar20];
        if (pSVar15 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
        *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d8b3;
        pSVar14 = pSVar15;
        pUVar16 = UnityEngine_MeshFilter__get_sharedMesh
                            ((UnityEngine_MeshFilter_o *)pSVar15,(MethodInfo *)0x0);
        if (pSVar21 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
        *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d8ca;
        pSVar14 = pSVar21;
        bVar11 = System_Collections_Generic_HashSet_object___Add
                           ((System_Collections_Generic_HashSet_object__o *)pSVar21,(Il2CppObject *)pUVar16,
                            MethodInfo_Boolean_Add);
        if ((char)bVar11 != '\0') {
          *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d8d8;
          pSVar14 = pSVar15;
          pUVar16 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)pSVar15,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d8e0;
          pSVar12 = (System_Object_array *)Outline__SmoothNormals((Outline_o *)pSVar14,pUVar16,method_00);
          __this_00 = *(System_Collections_Generic_List_object__o **)
                       (*(long *)((long)ppSVar19 + -0x40) + 0x40);
          *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d8f6;
          pSVar14 = pSVar15;
          pUVar16 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)pSVar15,(MethodInfo *)0x0);
          lVar23 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_0405d9ef;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar10 = (__this_00->fields)._items;
          if (pSVar10 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar4 = (__this_00->fields)._size;
          if (uVar4 < (uint)pSVar10->max_length) {
            (__this_00->fields)._size = uVar4 + 1;
            pSVar10->m_Items[(int)uVar4] = (Il2CppObject *)pUVar16;
            *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d93e;
            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar4);
          }
          else {
            pMVar9 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d95a;
            System_Collections_Generic_List_object___AddWithResize(__this_00,(Il2CppObject *)pUVar16,pMVar9);
          }
          pSVar15 = *(System_Predicate_T__o **)(*(long *)((long)ppSVar19 + -0x40) + 0x48);
          *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d972;
          __this_01 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListVector3);
          *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d97f;
          pSVar14 = __this_01;
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          if (__this_01 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
          pSVar14 = (System_Predicate_T__o *)&__this_01->fields;
          (__this_01->fields).method_ptr = (intptr_t)pSVar12;
          *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d997;
          il2cpp_runtime_helper_022b4080();
          lVar23 = MethodInfo_Void_Add;
          if (pSVar15 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
          piVar1 = (int32_t *)((long)&(pSVar15->fields).invoke_impl + 4);
          *piVar1 = *piVar1 + 1;
          pSVar12 = (System_Object_array *)(pSVar15->fields).method_ptr;
          if (pSVar12 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar4 = (uint)(pSVar15->fields).invoke_impl;
          if (uVar4 < (uint)pSVar12->max_length) {
            *(uint *)&(pSVar15->fields).invoke_impl = uVar4 + 1;
            pSVar14 = (System_Predicate_T__o *)(pSVar12->m_Items + (int)uVar4);
            pSVar12->m_Items[(int)uVar4] = (Il2CppObject *)__this_01;
            *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d9db;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            pMVar9 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d87a;
            pSVar14 = pSVar15;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar15,(Il2CppObject *)__this_01,pMVar9);
          }
          pSVar12 = *(System_Object_array **)((long)ppSVar19 + -0x38);
        }
        uVar24 = (int)pSVar20 + 1;
        pSVar20 = (System_Predicate_T__o *)(ulong)uVar24;
        uVar4 = (uint)pSVar12->max_length;
        if ((int)uVar4 <= (int)uVar24) {
          return;
        }
      } while (uVar24 < uVar4);
    }
  }
  *(undefined8 *)((long)ppSVar19 + -0x50) = 0x405d9f9;
  uVar17 = il2cpp_runtime_helper_022b2ca0();
  if (*(char *)&(pSVar14->fields).original_method_info == '\0') {
    return;
  }
  *(undefined1 *)&(pSVar14->fields).original_method_info = 0;
  *(System_Predicate_T__o **)((long)ppSVar19 + -0x50) = pSVar20;
  *(System_Predicate_T__o **)((long)ppSVar19 + -0x58) = pSVar15;
  *(undefined8 *)((long)ppSVar19 + -0x60) = uVar17;
  if (g_data_057ac28e == '\0') {
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405da2c;
    il2cpp_runtime_helper_023445d0(&"_ZTest");
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405da38;
    il2cpp_runtime_helper_023445d0(&"_OutlineWidth");
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405da44;
    il2cpp_runtime_helper_023445d0(&"_ZTestMask");
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405da50;
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405da5c;
    il2cpp_runtime_helper_023445d0(&"_ZTest2");
    g_data_057ac28e = '\x01';
  }
  pUVar22 = (UnityEngine_Material_o *)(pSVar14->fields).method_info;
  if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
  value = *(UnityEngine_Color_Fields *)((long)&(pSVar14->fields).m_target + 4);
  *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405da8b;
  UnityEngine_Material__SetColor(pUVar22,"_OutlineColor",(UnityEngine_Color_o)value,(MethodInfo *)0x0);
  uVar4 = *(uint *)&(pSVar14->fields).m_target;
  if (5 < uVar4) {
    return;
  }
  ppSVar2 = &(pSVar14->fields).method_info;
  switch(uVar4) {
  case 0:
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar25 = 8.0;
    goto label_0405dc0f;
  case 1:
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405db89;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar25 = 4.0;
    break;
  case 2:
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405dbd1;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar25 = 5.0;
    break;
  case 3:
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar25 = 4.0;
label_0405dc0f:
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405dc16;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTestMask",fVar25,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar25 = 8.0;
    break;
  case 4:
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405daf4;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTestMask",4.0,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405db19;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTest",5.0,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405db3e;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar25 = 0.0;
    goto label_0405dc77;
  case 5:
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405dca6;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405dcc7;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar25 = 5.0;
    goto label_0405dc59;
  }
  *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405dc3b;
  UnityEngine_Material__SetFloat(pUVar22,"_ZTest",fVar25,(MethodInfo *)0x0);
  pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
  if (pUVar22 != (UnityEngine_Material_o *)0x0) {
    fVar25 = 1.0;
label_0405dc59:
    *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405dc60;
    UnityEngine_Material__SetFloat(pUVar22,"_ZTest2",fVar25,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar22 != (UnityEngine_Material_o *)0x0) {
      fVar25 = *(float *)((long)&(pSVar14->fields).delegate_trampoline + 4);
label_0405dc77:
      UnityEngine_Material__SetFloat(pUVar22,"_OutlineWidth",fVar25,(MethodInfo *)0x0);
      return;
    }
  }
label_0405dce6:
  lVar23 = 0;
  *(undefined8 *)((long)ppSVar19 + -0x68) = 0x405dceb;
  il2cpp_runtime_helper_022b2c90();
  *(System_Predicate_T__o **)((long)ppSVar19 + -0x68) = pSVar14;
  if (g_data_057ac28a == '\0') {
    *(undefined8 *)((long)ppSVar19 + -0x70) = 0x405dd09;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac28a = '\x01';
  }
  obj = *(UnityEngine_Object_o **)(lVar23 + 0x58);
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)ppSVar19 + -0x70) = 0x405dd37;
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$OnEnable
// il2cpp: void Outline__OnEnable (Outline_o* __this, const MethodInfo* method);
// 0x405d610

void Outline__OnEnable(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Reflection_MethodInfo_o **ppSVar2;
  int32_t length;
  uint uVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar4;
  MethodInfo_362C220 *pMVar5;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *obj;
  UnityEngine_Color_Fields value;
  bool_conflict bVar7;
  System_Predicate_T__o *pSVar8;
  System_Object_array *pSVar9;
  UnityEngine_Mesh_o *pUVar10;
  System_Predicate_T__o *__this_02;
  undefined8 uVar11;
  int iVar12;
  MethodInfo *method_00;
  System_Predicate_T__o **ppSVar13;
  undefined8 unaff_RBP;
  System_Predicate_T__o *pSVar14;
  System_Predicate_T__o *pSVar15;
  UnityEngine_Material_o *pUVar16;
  long lVar17;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  uint uVar18;
  float fVar19;
  System_Predicate_T__o *pSStack_20;
  
  if (g_data_057ac287 == '\0') {
    pSStack_20 = (System_Predicate_T__o *)0x405d62d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    pSStack_20 = (System_Predicate_T__o *)0x405d639;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_OnEnable_b__24_0);
    pSStack_20 = (System_Predicate_T__o *)0x405d645;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Renderer);
    g_data_057ac287 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).renderers;
  pSStack_20 = (System_Predicate_T__o *)0x405d65f;
  pSVar8 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Renderer);
  pSStack_20 = (System_Predicate_T__o *)0x405d679;
  pSVar14 = pSVar8;
  System_Predicate_object____ctor();
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(__this_00,pSVar8,MethodInfo_Int32_RemoveWhere);
    return;
  }
  pSStack_20 = (System_Predicate_T__o *)0x405d69d;
  il2cpp_runtime_helper_022b2c90();
  ppSVar13 = &pSStack_20;
  pSVar15 = pSVar14;
  pSStack_20 = pSVar8;
  if (g_data_057ac288 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSVar15 = (System_Predicate_T__o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac288 = '\x01';
  }
  *(undefined1 *)&(pSVar14->fields).original_method_info = 1;
  lVar17 = (pSVar14->fields).method_code;
  if ((char)(pSVar14->fields).extra_arg == '\0') {
    if (lVar17 == 0) goto label_0405d77b;
    iVar12 = *(int *)(lVar17 + 0x18);
    if (iVar12 == 0) goto label_0405d6fb;
label_0405d71a:
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    *(undefined4 *)(lVar17 + 0x18) = 0;
    if (0 < iVar12) {
      pSVar15 = *(System_Predicate_T__o **)(lVar17 + 0x10);
      System_Array__Clear((System_Array_o *)pSVar15,0,iVar12,(MethodInfo *)0x0);
    }
    lVar17 = (pSVar14->fields).interp_method;
    if (lVar17 == 0) goto label_0405d77b;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    length = *(int32_t *)(lVar17 + 0x18);
    *(undefined4 *)(lVar17 + 0x18) = 0;
    if (0 < length) {
      pSVar15 = *(System_Predicate_T__o **)(lVar17 + 0x10);
      System_Array__Clear((System_Array_o *)pSVar15,0,length,(MethodInfo *)0x0);
    }
label_0405d75e:
    if ((char)(pSVar14->fields).extra_arg == '\0') {
      return;
    }
    lVar17 = (pSVar14->fields).method_code;
    if (lVar17 == 0) goto label_0405d77b;
    if (*(int *)(lVar17 + 0x18) != 0) {
      return;
    }
    ppSVar13 = (System_Predicate_T__o **)&stack0xffffffffffffffe8;
    pSVar8 = pSStack_20;
    pSVar15 = pSVar14;
  }
  else {
    if (lVar17 != 0) {
label_0405d6fb:
      lVar4 = (pSVar14->fields).interp_method;
      if (lVar4 != 0) {
        iVar12 = *(int *)(lVar17 + 0x18);
        if (iVar12 != *(int *)(lVar4 + 0x18)) goto label_0405d71a;
        goto label_0405d75e;
      }
    }
label_0405d77b:
    il2cpp_runtime_helper_022b2c90();
    pSVar8 = pSVar14;
  }
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_RBP;
  *(undefined8 *)((long)ppSVar13 + -0x10) = 0;
  *(Outline_o **)((long)ppSVar13 + -0x18) = __this;
  *(undefined8 *)((long)ppSVar13 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppSVar13 + -0x28) = unaff_R12;
  *(System_Predicate_T__o **)((long)ppSVar13 + -0x30) = pSVar8;
  *(System_Predicate_T__o **)((long)ppSVar13 + -0x40) = pSVar15;
  if (g_data_057ac28b == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d7a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d7b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d7c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Mesh);
    *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d7cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Mesh);
    *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d7d8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListVector3);
    *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d7e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d7f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac28b = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d806;
  pSVar15 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Mesh);
  *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d81b;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar15,MethodInfo_HashSet_1_UnityEngine_Mesh);
  pSVar14 = *(System_Predicate_T__o **)((long)ppSVar13 + -0x40);
  *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d82f;
  pSVar9 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)pSVar14,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
  if (pSVar9 == (System_Object_array *)0x0) {
label_0405d9ef:
    *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d9f4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar12 = (int)pSVar9->max_length;
    if (iVar12 < 1) {
      return;
    }
    __this = (Outline_o *)0x0;
    *(System_Object_array **)((long)ppSVar13 + -0x38) = pSVar9;
    if (iVar12 != 0) {
      do {
        pSVar8 = (System_Predicate_T__o *)pSVar9->m_Items[(int)__this];
        if (pSVar8 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
        *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d8b3;
        pSVar14 = pSVar8;
        pUVar10 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pSVar8,(MethodInfo *)0x0)
        ;
        if (pSVar15 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
        *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d8ca;
        pSVar14 = pSVar15;
        bVar7 = System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)pSVar15,(Il2CppObject *)pUVar10,
                           MethodInfo_Boolean_Add);
        if ((char)bVar7 != '\0') {
          *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d8d8;
          pSVar14 = pSVar8;
          pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)pSVar8,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d8e0;
          pSVar9 = (System_Object_array *)Outline__SmoothNormals((Outline_o *)pSVar14,pUVar10,method_00);
          __this_01 = *(System_Collections_Generic_List_object__o **)
                       (*(long *)((long)ppSVar13 + -0x40) + 0x40);
          *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d8f6;
          pSVar14 = pSVar8;
          pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)pSVar8,(MethodInfo *)0x0);
          lVar17 = MethodInfo_Void_Add;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_0405d9ef;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_01->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pSVar6->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pUVar10;
            *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d93e;
            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3);
          }
          else {
            pMVar5 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d95a;
            System_Collections_Generic_List_object___AddWithResize(__this_01,(Il2CppObject *)pUVar10,pMVar5);
          }
          pSVar8 = *(System_Predicate_T__o **)(*(long *)((long)ppSVar13 + -0x40) + 0x48);
          *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d972;
          __this_02 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListVector3);
          *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d97f;
          pSVar14 = __this_02;
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
          pSVar14 = (System_Predicate_T__o *)&__this_02->fields;
          (__this_02->fields).method_ptr = (intptr_t)pSVar9;
          *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d997;
          il2cpp_runtime_helper_022b4080();
          lVar17 = MethodInfo_Void_Add;
          if (pSVar8 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
          piVar1 = (int32_t *)((long)&(pSVar8->fields).invoke_impl + 4);
          *piVar1 = *piVar1 + 1;
          pSVar9 = (System_Object_array *)(pSVar8->fields).method_ptr;
          if (pSVar9 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar3 = (uint)(pSVar8->fields).invoke_impl;
          if (uVar3 < (uint)pSVar9->max_length) {
            *(uint *)&(pSVar8->fields).invoke_impl = uVar3 + 1;
            pSVar14 = (System_Predicate_T__o *)(pSVar9->m_Items + (int)uVar3);
            pSVar9->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
            *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d9db;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            pMVar5 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d87a;
            pSVar14 = pSVar8;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)__this_02,pMVar5);
          }
          pSVar9 = *(System_Object_array **)((long)ppSVar13 + -0x38);
        }
        uVar18 = (int)__this + 1;
        __this = (Outline_o *)(ulong)uVar18;
        uVar3 = (uint)pSVar9->max_length;
        if ((int)uVar3 <= (int)uVar18) {
          return;
        }
      } while (uVar18 < uVar3);
    }
  }
  *(undefined8 *)((long)ppSVar13 + -0x50) = 0x405d9f9;
  uVar11 = il2cpp_runtime_helper_022b2ca0();
  if (*(char *)&(pSVar14->fields).original_method_info == '\0') {
    return;
  }
  *(undefined1 *)&(pSVar14->fields).original_method_info = 0;
  *(Outline_o **)((long)ppSVar13 + -0x50) = __this;
  *(System_Predicate_T__o **)((long)ppSVar13 + -0x58) = pSVar8;
  *(undefined8 *)((long)ppSVar13 + -0x60) = uVar11;
  if (g_data_057ac28e == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405da2c;
    il2cpp_runtime_helper_023445d0(&"_ZTest");
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405da38;
    il2cpp_runtime_helper_023445d0(&"_OutlineWidth");
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405da44;
    il2cpp_runtime_helper_023445d0(&"_ZTestMask");
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405da50;
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405da5c;
    il2cpp_runtime_helper_023445d0(&"_ZTest2");
    g_data_057ac28e = '\x01';
  }
  pUVar16 = (UnityEngine_Material_o *)(pSVar14->fields).method_info;
  if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
  value = *(UnityEngine_Color_Fields *)((long)&(pSVar14->fields).m_target + 4);
  *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405da8b;
  UnityEngine_Material__SetColor(pUVar16,"_OutlineColor",(UnityEngine_Color_o)value,(MethodInfo *)0x0);
  uVar3 = *(uint *)&(pSVar14->fields).m_target;
  if (5 < uVar3) {
    return;
  }
  ppSVar2 = &(pSVar14->fields).method_info;
  switch(uVar3) {
  case 0:
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar19 = 8.0;
    goto label_0405dc0f;
  case 1:
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405db89;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar19 = 4.0;
    break;
  case 2:
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405dbd1;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar19 = 5.0;
    break;
  case 3:
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar19 = 4.0;
label_0405dc0f:
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405dc16;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTestMask",fVar19,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar19 = 8.0;
    break;
  case 4:
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405daf4;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTestMask",4.0,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405db19;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTest",5.0,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405db3e;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar19 = 0.0;
    goto label_0405dc77;
  case 5:
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405dca6;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405dcc7;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar19 = 5.0;
    goto label_0405dc59;
  }
  *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405dc3b;
  UnityEngine_Material__SetFloat(pUVar16,"_ZTest",fVar19,(MethodInfo *)0x0);
  pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
  if (pUVar16 != (UnityEngine_Material_o *)0x0) {
    fVar19 = 1.0;
label_0405dc59:
    *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405dc60;
    UnityEngine_Material__SetFloat(pUVar16,"_ZTest2",fVar19,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar16 != (UnityEngine_Material_o *)0x0) {
      fVar19 = *(float *)((long)&(pSVar14->fields).delegate_trampoline + 4);
label_0405dc77:
      UnityEngine_Material__SetFloat(pUVar16,"_OutlineWidth",fVar19,(MethodInfo *)0x0);
      return;
    }
  }
label_0405dce6:
  lVar17 = 0;
  *(undefined8 *)((long)ppSVar13 + -0x68) = 0x405dceb;
  il2cpp_runtime_helper_022b2c90();
  *(System_Predicate_T__o **)((long)ppSVar13 + -0x68) = pSVar14;
  if (g_data_057ac28a == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x70) = 0x405dd09;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac28a = '\x01';
  }
  obj = *(UnityEngine_Object_o **)(lVar17 + 0x58);
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)ppSVar13 + -0x70) = 0x405dd37;
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$OnValidate
// il2cpp: void Outline__OnValidate (Outline_o* __this, const MethodInfo* method);
// 0x405d6a0

void Outline__OnValidate(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Material_o **ppUVar2;
  int32_t length;
  uint uVar3;
  System_Collections_Generic_List_Mesh__o *pSVar4;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar5;
  MethodInfo_362C220 *pMVar6;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar7;
  UnityEngine_Object_o *obj;
  UnityEngine_Color_Fields value;
  bool_conflict bVar8;
  Outline_o *__this_01;
  System_Object_array *pSVar9;
  UnityEngine_Mesh_o *pUVar10;
  Outline_o *__this_02;
  undefined8 uVar11;
  int iVar12;
  MethodInfo *method_00;
  Outline_o *unaff_RBX;
  undefined8 unaff_RBP;
  Outline_ListVector3_array *array;
  Outline_o *pOVar13;
  UnityEngine_Material_o *pUVar14;
  long lVar15;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  uint uVar16;
  ulong unaff_R14;
  undefined8 unaff_R15;
  float fVar17;
  
  array = (Outline_ListVector3_array *)__this;
  if (g_data_057ac288 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    array = (Outline_ListVector3_array *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac288 = '\x01';
  }
  *(undefined1 *)&(__this->fields).needsUpdate = 1;
  pSVar4 = (__this->fields).bakeKeys;
  if ((char)(__this->fields).precomputeOutline == '\0') {
    if (pSVar4 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_0405d77b;
    iVar12 = (pSVar4->fields)._size;
    if (iVar12 == 0) goto label_0405d6fb;
label_0405d71a:
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar4->fields)._size = 0;
    if (0 < iVar12) {
      array = (Outline_ListVector3_array *)(pSVar4->fields)._items;
      System_Array__Clear((System_Array_o *)array,0,iVar12,(MethodInfo *)0x0);
    }
    pSVar5 = (__this->fields).bakeValues;
    if (pSVar5 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto label_0405d77b;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    if (0 < length) {
      array = (pSVar5->fields)._items;
      System_Array__Clear((System_Array_o *)array,0,length,(MethodInfo *)0x0);
    }
label_0405d75e:
    if ((char)(__this->fields).precomputeOutline == '\0') {
      return;
    }
    pSVar4 = (__this->fields).bakeKeys;
    if (pSVar4 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_0405d77b;
    if ((pSVar4->fields)._size != 0) {
      return;
    }
  }
  else {
    if (pSVar4 != (System_Collections_Generic_List_Mesh__o *)0x0) {
label_0405d6fb:
      pSVar5 = (__this->fields).bakeValues;
      if (pSVar5 != (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) {
        iVar12 = (pSVar4->fields)._size;
        if (iVar12 != (pSVar5->fields)._size) goto label_0405d71a;
        goto label_0405d75e;
      }
    }
label_0405d77b:
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = __this;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    __this = (Outline_o *)array;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(Outline_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(Outline_o **)((long)register0x00000020 + -0x40) = __this;
  if (g_data_057ac28b == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d7a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d7b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d7c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Mesh);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d7cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Mesh);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d7d8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListVector3);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d7e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d7f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac28b = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d806;
  __this_01 = (Outline_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Mesh);
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d81b;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,MethodInfo_HashSet_1_UnityEngine_Mesh);
  pOVar13 = *(Outline_o **)((long)register0x00000020 + -0x40);
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d82f;
  pSVar9 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)pOVar13,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
  if (pSVar9 == (System_Object_array *)0x0) {
label_0405d9ef:
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d9f4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar12 = (int)pSVar9->max_length;
    if (iVar12 < 1) {
      return;
    }
    unaff_R14 = 0;
    *(System_Object_array **)((long)register0x00000020 + -0x38) = pSVar9;
    if (iVar12 != 0) {
      do {
        unaff_RBX = (Outline_o *)pSVar9->m_Items[(int)unaff_R14];
        if (unaff_RBX == (Outline_o *)0x0) goto label_0405d9ef;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d8b3;
        pOVar13 = unaff_RBX;
        pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                            ((UnityEngine_MeshFilter_o *)unaff_RBX,(MethodInfo *)0x0);
        if (__this_01 == (Outline_o *)0x0) goto label_0405d9ef;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d8ca;
        pOVar13 = __this_01;
        bVar8 = System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)pUVar10,
                           MethodInfo_Boolean_Add);
        if ((char)bVar8 != '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d8d8;
          pOVar13 = unaff_RBX;
          pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)unaff_RBX,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d8e0;
          pSVar9 = (System_Object_array *)Outline__SmoothNormals(pOVar13,pUVar10,method_00);
          __this_00 = *(System_Collections_Generic_List_object__o **)
                       (*(long *)((long)register0x00000020 + -0x40) + 0x40);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d8f6;
          pOVar13 = unaff_RBX;
          pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)unaff_RBX,(MethodInfo *)0x0);
          lVar15 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_0405d9ef;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_00->fields)._items;
          if (pSVar7 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)pUVar10;
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d93e;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar3);
          }
          else {
            pMVar6 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d95a;
            System_Collections_Generic_List_object___AddWithResize(__this_00,(Il2CppObject *)pUVar10,pMVar6);
          }
          unaff_RBX = *(Outline_o **)(*(long *)((long)register0x00000020 + -0x40) + 0x48);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d972;
          __this_02 = (Outline_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListVector3);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d97f;
          pOVar13 = __this_02;
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 == (Outline_o *)0x0) goto label_0405d9ef;
          pOVar13 = (Outline_o *)&__this_02->fields;
          (__this_02->fields).m_CachedPtr = (intptr_t)pSVar9;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d997;
          il2cpp_runtime_helper_022b4080();
          lVar15 = MethodInfo_Void_Add;
          if (unaff_RBX == (Outline_o *)0x0) goto label_0405d9ef;
          piVar1 = (int32_t *)((long)&(unaff_RBX->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar9 = (System_Object_array *)(unaff_RBX->fields).m_CachedPtr;
          if (pSVar9 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar3 = *(uint *)&(unaff_RBX->fields).m_CancellationTokenSource;
          if (uVar3 < (uint)pSVar9->max_length) {
            *(uint *)&(unaff_RBX->fields).m_CancellationTokenSource = uVar3 + 1;
            pOVar13 = (Outline_o *)(pSVar9->m_Items + (int)uVar3);
            pSVar9->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d9db;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            pMVar6 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d87a;
            pOVar13 = unaff_RBX;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_RBX,(Il2CppObject *)__this_02,pMVar6
                      );
          }
          pSVar9 = *(System_Object_array **)((long)register0x00000020 + -0x38);
        }
        uVar16 = (int)unaff_R14 + 1;
        unaff_R14 = (ulong)uVar16;
        uVar3 = (uint)pSVar9->max_length;
        if ((int)uVar3 <= (int)uVar16) {
          return;
        }
      } while (uVar16 < uVar3);
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x405d9f9;
  uVar11 = il2cpp_runtime_helper_022b2ca0();
  if ((char)(pOVar13->fields).needsUpdate == '\0') {
    return;
  }
  *(undefined1 *)&(pOVar13->fields).needsUpdate = 0;
  *(ulong *)((long)register0x00000020 + -0x50) = unaff_R14;
  *(Outline_o **)((long)register0x00000020 + -0x58) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x60) = uVar11;
  if (g_data_057ac28e == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405da2c;
    il2cpp_runtime_helper_023445d0(&"_ZTest");
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405da38;
    il2cpp_runtime_helper_023445d0(&"_OutlineWidth");
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405da44;
    il2cpp_runtime_helper_023445d0(&"_ZTestMask");
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405da50;
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405da5c;
    il2cpp_runtime_helper_023445d0(&"_ZTest2");
    g_data_057ac28e = '\x01';
  }
  pUVar14 = (pOVar13->fields).outlineMaskAndFillMaterial;
  if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
  value = (pOVar13->fields).outlineColor.fields;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405da8b;
  UnityEngine_Material__SetColor(pUVar14,"_OutlineColor",(UnityEngine_Color_o)value,(MethodInfo *)0x0);
  uVar3 = (pOVar13->fields).outlineMode;
  if (5 < uVar3) {
    return;
  }
  ppUVar2 = &(pOVar13->fields).outlineMaskAndFillMaterial;
  switch(uVar3) {
  case 0:
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar17 = 8.0;
    goto label_0405dc0f;
  case 1:
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405db89;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar17 = 4.0;
    break;
  case 2:
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405dbd1;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar17 = 5.0;
    break;
  case 3:
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar17 = 4.0;
label_0405dc0f:
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405dc16;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTestMask",fVar17,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar17 = 8.0;
    break;
  case 4:
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405daf4;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTestMask",4.0,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405db19;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTest",5.0,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405db3e;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar17 = 0.0;
    goto label_0405dc77;
  case 5:
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405dca6;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405dcc7;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar17 = 5.0;
    goto label_0405dc59;
  }
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405dc3b;
  UnityEngine_Material__SetFloat(pUVar14,"_ZTest",fVar17,(MethodInfo *)0x0);
  pUVar14 = *ppUVar2;
  if (pUVar14 != (UnityEngine_Material_o *)0x0) {
    fVar17 = 1.0;
label_0405dc59:
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405dc60;
    UnityEngine_Material__SetFloat(pUVar14,"_ZTest2",fVar17,(MethodInfo *)0x0);
    pUVar14 = *ppUVar2;
    if (pUVar14 != (UnityEngine_Material_o *)0x0) {
      fVar17 = (pOVar13->fields).outlineWidth;
label_0405dc77:
      UnityEngine_Material__SetFloat(pUVar14,"_OutlineWidth",fVar17,(MethodInfo *)0x0);
      return;
    }
  }
label_0405dce6:
  lVar15 = 0;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x405dceb;
  il2cpp_runtime_helper_022b2c90();
  *(Outline_o **)((long)register0x00000020 + -0x68) = pOVar13;
  if (g_data_057ac28a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x405dd09;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac28a = '\x01';
  }
  obj = *(UnityEngine_Object_o **)(lVar15 + 0x58);
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x405dd37;
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$Update
// il2cpp: void Outline__Update (Outline_o* __this, const MethodInfo* method);
// 0x405da00

void Outline__Update(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  uint uVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Material_o *pUVar3;
  long lVar4;
  float fVar5;
  
  if ((char)(__this->fields).needsUpdate == '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).needsUpdate = 0;
  if (g_data_057ac28e == '\0') {
    il2cpp_runtime_helper_023445d0(&"_ZTest");
    il2cpp_runtime_helper_023445d0(&"_OutlineWidth");
    il2cpp_runtime_helper_023445d0(&"_ZTestMask");
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    il2cpp_runtime_helper_023445d0(&"_ZTest2");
    g_data_057ac28e = '\x01';
  }
  pUVar3 = (__this->fields).outlineMaskAndFillMaterial;
  if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
  UnityEngine_Material__SetColor
            (pUVar3,"_OutlineColor",(UnityEngine_Color_o)(__this->fields).outlineColor.fields,(MethodInfo *)0x0);
  uVar2 = (__this->fields).outlineMode;
  if (5 < uVar2) {
    return;
  }
  ppUVar1 = &(__this->fields).outlineMaskAndFillMaterial;
  switch(uVar2) {
  case 0:
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 8.0;
    goto label_0405dc0f;
  case 1:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 4.0;
    break;
  case 2:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 5.0;
    break;
  case 3:
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 4.0;
label_0405dc0f:
    UnityEngine_Material__SetFloat(pUVar3,"_ZTestMask",fVar5,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 8.0;
    break;
  case 4:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",4.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest",5.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 0.0;
    goto label_0405dc77;
  case 5:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 5.0;
    goto label_0405dc59;
  }
  UnityEngine_Material__SetFloat(pUVar3,"_ZTest",fVar5,(MethodInfo *)0x0);
  pUVar3 = *ppUVar1;
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    fVar5 = 1.0;
label_0405dc59:
    UnityEngine_Material__SetFloat(pUVar3,"_ZTest2",fVar5,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
      fVar5 = (__this->fields).outlineWidth;
label_0405dc77:
      UnityEngine_Material__SetFloat(pUVar3,"_OutlineWidth",fVar5,(MethodInfo *)0x0);
      return;
    }
  }
label_0405dce6:
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac28a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac28a = '\x01';
  }
  obj = *(UnityEngine_Object_o **)(lVar4 + 0x58);
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$OnDisable
// il2cpp: void Outline__OnDisable (Outline_o* __this, const MethodInfo* method);
// 0x405d580

void Outline__OnDisable(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Reflection_MethodInfo_o **ppSVar2;
  int32_t length;
  uint uVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  long lVar5;
  MethodInfo_362C220 *pMVar6;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar7;
  UnityEngine_Object_o *obj;
  UnityEngine_Color_Fields value;
  bool_conflict bVar8;
  System_Predicate_T__o *pSVar9;
  System_Predicate_T__o *pSVar10;
  System_Object_array *pSVar11;
  UnityEngine_Mesh_o *pUVar12;
  System_Predicate_T__o *__this_01;
  undefined8 uVar13;
  int iVar14;
  MethodInfo *method_00;
  System_Predicate_T__o **ppSVar15;
  undefined8 unaff_RBP;
  System_Predicate_T__o *pSVar16;
  System_Predicate_T__o *pSVar17;
  UnityEngine_Material_o *pUVar18;
  long lVar19;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  uint uVar20;
  float fVar21;
  System_Predicate_T__o *pSStack_38;
  System_Predicate_T__o *pSStack_30;
  Outline_o *pOStack_28;
  System_Collections_Generic_HashSet_object__o *pSStack_20;
  
  if (g_data_057ac289 == '\0') {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x405d59d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x405d5a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_OnDisable_b__27_0);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x405d5b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Renderer);
    g_data_057ac289 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).renderers;
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x405d5cf;
  pSVar9 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Renderer);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x405d5e9;
  pSVar16 = pSVar9;
  System_Predicate_object____ctor();
  if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(pSVar4,pSVar9,MethodInfo_Int32_RemoveWhere);
    return;
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x405d60d;
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = pSVar9;
  pOStack_28 = __this;
  pSStack_20 = pSVar4;
  if (g_data_057ac287 == '\0') {
    pSStack_38 = (System_Predicate_T__o *)0x405d62d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    pSStack_38 = (System_Predicate_T__o *)0x405d639;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_OnEnable_b__24_0);
    pSStack_38 = (System_Predicate_T__o *)0x405d645;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Renderer);
    g_data_057ac287 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pSVar16->fields).interp_invoke_impl;
  pSStack_38 = (System_Predicate_T__o *)0x405d65f;
  pSVar10 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Renderer);
  pSStack_38 = (System_Predicate_T__o *)0x405d679;
  pSVar9 = pSVar10;
  System_Predicate_object____ctor();
  if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(pSVar4,pSVar10,MethodInfo_Int32_RemoveWhere);
    return;
  }
  pSStack_38 = (System_Predicate_T__o *)0x405d69d;
  il2cpp_runtime_helper_022b2c90();
  ppSVar15 = &pSStack_38;
  pSVar17 = pSVar9;
  pSStack_38 = pSVar10;
  if (g_data_057ac288 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSVar17 = (System_Predicate_T__o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac288 = '\x01';
  }
  *(undefined1 *)&(pSVar9->fields).original_method_info = 1;
  lVar19 = (pSVar9->fields).method_code;
  if ((char)(pSVar9->fields).extra_arg == '\0') {
    if (lVar19 == 0) goto label_0405d77b;
    iVar14 = *(int *)(lVar19 + 0x18);
    if (iVar14 == 0) goto label_0405d6fb;
label_0405d71a:
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    *(undefined4 *)(lVar19 + 0x18) = 0;
    if (0 < iVar14) {
      pSVar17 = *(System_Predicate_T__o **)(lVar19 + 0x10);
      System_Array__Clear((System_Array_o *)pSVar17,0,iVar14,(MethodInfo *)0x0);
    }
    lVar19 = (pSVar9->fields).interp_method;
    if (lVar19 == 0) goto label_0405d77b;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    length = *(int32_t *)(lVar19 + 0x18);
    *(undefined4 *)(lVar19 + 0x18) = 0;
    if (0 < length) {
      pSVar17 = *(System_Predicate_T__o **)(lVar19 + 0x10);
      System_Array__Clear((System_Array_o *)pSVar17,0,length,(MethodInfo *)0x0);
    }
label_0405d75e:
    if ((char)(pSVar9->fields).extra_arg == '\0') {
      return;
    }
    lVar19 = (pSVar9->fields).method_code;
    if (lVar19 == 0) goto label_0405d77b;
    if (*(int *)(lVar19 + 0x18) != 0) {
      return;
    }
    ppSVar15 = &pSStack_30;
    pSVar10 = pSStack_38;
    pSVar17 = pSVar9;
  }
  else {
    if (lVar19 != 0) {
label_0405d6fb:
      lVar5 = (pSVar9->fields).interp_method;
      if (lVar5 != 0) {
        iVar14 = *(int *)(lVar19 + 0x18);
        if (iVar14 != *(int *)(lVar5 + 0x18)) goto label_0405d71a;
        goto label_0405d75e;
      }
    }
label_0405d77b:
    il2cpp_runtime_helper_022b2c90();
    pSVar10 = pSVar9;
  }
  *(undefined8 *)((long)ppSVar15 + -8) = unaff_RBP;
  *(undefined8 *)((long)ppSVar15 + -0x10) = 0;
  *(System_Predicate_T__o **)((long)ppSVar15 + -0x18) = pSVar16;
  *(undefined8 *)((long)ppSVar15 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppSVar15 + -0x28) = unaff_R12;
  *(System_Predicate_T__o **)((long)ppSVar15 + -0x30) = pSVar10;
  *(System_Predicate_T__o **)((long)ppSVar15 + -0x40) = pSVar17;
  if (g_data_057ac28b == '\0') {
    *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d7a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d7b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d7c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Mesh);
    *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d7cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Mesh);
    *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d7d8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListVector3);
    *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d7e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d7f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac28b = '\x01';
  }
  *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d806;
  pSVar17 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Mesh);
  *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d81b;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar17,MethodInfo_HashSet_1_UnityEngine_Mesh);
  pSVar9 = *(System_Predicate_T__o **)((long)ppSVar15 + -0x40);
  *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d82f;
  pSVar11 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)pSVar9,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
  if (pSVar11 == (System_Object_array *)0x0) {
label_0405d9ef:
    *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d9f4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar14 = (int)pSVar11->max_length;
    if (iVar14 < 1) {
      return;
    }
    pSVar16 = (System_Predicate_T__o *)0x0;
    *(System_Object_array **)((long)ppSVar15 + -0x38) = pSVar11;
    if (iVar14 != 0) {
      do {
        pSVar10 = (System_Predicate_T__o *)pSVar11->m_Items[(int)pSVar16];
        if (pSVar10 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
        *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d8b3;
        pSVar9 = pSVar10;
        pUVar12 = UnityEngine_MeshFilter__get_sharedMesh
                            ((UnityEngine_MeshFilter_o *)pSVar10,(MethodInfo *)0x0);
        if (pSVar17 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
        *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d8ca;
        pSVar9 = pSVar17;
        bVar8 = System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)pSVar17,(Il2CppObject *)pUVar12,
                           MethodInfo_Boolean_Add);
        if ((char)bVar8 != '\0') {
          *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d8d8;
          pSVar9 = pSVar10;
          pUVar12 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)pSVar10,(MethodInfo *)0x0);
          *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d8e0;
          pSVar11 = (System_Object_array *)Outline__SmoothNormals((Outline_o *)pSVar9,pUVar12,method_00);
          __this_00 = *(System_Collections_Generic_List_object__o **)
                       (*(long *)((long)ppSVar15 + -0x40) + 0x40);
          *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d8f6;
          pSVar9 = pSVar10;
          pUVar12 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)pSVar10,(MethodInfo *)0x0);
          lVar19 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_0405d9ef;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_00->fields)._items;
          if (pSVar7 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)pUVar12;
            *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d93e;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar3);
          }
          else {
            pMVar6 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d95a;
            System_Collections_Generic_List_object___AddWithResize(__this_00,(Il2CppObject *)pUVar12,pMVar6);
          }
          pSVar10 = *(System_Predicate_T__o **)(*(long *)((long)ppSVar15 + -0x40) + 0x48);
          *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d972;
          __this_01 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListVector3);
          *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d97f;
          pSVar9 = __this_01;
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          if (__this_01 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
          pSVar9 = (System_Predicate_T__o *)&__this_01->fields;
          (__this_01->fields).method_ptr = (intptr_t)pSVar11;
          *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d997;
          il2cpp_runtime_helper_022b4080();
          lVar19 = MethodInfo_Void_Add;
          if (pSVar10 == (System_Predicate_T__o *)0x0) goto label_0405d9ef;
          piVar1 = (int32_t *)((long)&(pSVar10->fields).invoke_impl + 4);
          *piVar1 = *piVar1 + 1;
          pSVar11 = (System_Object_array *)(pSVar10->fields).method_ptr;
          if (pSVar11 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar3 = (uint)(pSVar10->fields).invoke_impl;
          if (uVar3 < (uint)pSVar11->max_length) {
            *(uint *)&(pSVar10->fields).invoke_impl = uVar3 + 1;
            pSVar9 = (System_Predicate_T__o *)(pSVar11->m_Items + (int)uVar3);
            pSVar11->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
            *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d9db;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            pMVar6 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d87a;
            pSVar9 = pSVar10;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)__this_01,pMVar6);
          }
          pSVar11 = *(System_Object_array **)((long)ppSVar15 + -0x38);
        }
        uVar20 = (int)pSVar16 + 1;
        pSVar16 = (System_Predicate_T__o *)(ulong)uVar20;
        uVar3 = (uint)pSVar11->max_length;
        if ((int)uVar3 <= (int)uVar20) {
          return;
        }
      } while (uVar20 < uVar3);
    }
  }
  *(undefined8 *)((long)ppSVar15 + -0x50) = 0x405d9f9;
  uVar13 = il2cpp_runtime_helper_022b2ca0();
  if (*(char *)&(pSVar9->fields).original_method_info == '\0') {
    return;
  }
  *(undefined1 *)&(pSVar9->fields).original_method_info = 0;
  *(System_Predicate_T__o **)((long)ppSVar15 + -0x50) = pSVar16;
  *(System_Predicate_T__o **)((long)ppSVar15 + -0x58) = pSVar10;
  *(undefined8 *)((long)ppSVar15 + -0x60) = uVar13;
  if (g_data_057ac28e == '\0') {
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405da2c;
    il2cpp_runtime_helper_023445d0(&"_ZTest");
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405da38;
    il2cpp_runtime_helper_023445d0(&"_OutlineWidth");
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405da44;
    il2cpp_runtime_helper_023445d0(&"_ZTestMask");
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405da50;
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405da5c;
    il2cpp_runtime_helper_023445d0(&"_ZTest2");
    g_data_057ac28e = '\x01';
  }
  pUVar18 = (UnityEngine_Material_o *)(pSVar9->fields).method_info;
  if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
  value = *(UnityEngine_Color_Fields *)((long)&(pSVar9->fields).m_target + 4);
  *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405da8b;
  UnityEngine_Material__SetColor(pUVar18,"_OutlineColor",(UnityEngine_Color_o)value,(MethodInfo *)0x0);
  uVar3 = *(uint *)&(pSVar9->fields).m_target;
  if (5 < uVar3) {
    return;
  }
  ppSVar2 = &(pSVar9->fields).method_info;
  switch(uVar3) {
  case 0:
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar21 = 8.0;
    goto label_0405dc0f;
  case 1:
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405db89;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar21 = 4.0;
    break;
  case 2:
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405dbd1;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar21 = 5.0;
    break;
  case 3:
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar21 = 4.0;
label_0405dc0f:
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405dc16;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTestMask",fVar21,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar21 = 8.0;
    break;
  case 4:
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405daf4;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTestMask",4.0,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405db19;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTest",5.0,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405db3e;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar21 = 0.0;
    goto label_0405dc77;
  case 5:
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405dca6;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405dcc7;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar21 = 5.0;
    goto label_0405dc59;
  }
  *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405dc3b;
  UnityEngine_Material__SetFloat(pUVar18,"_ZTest",fVar21,(MethodInfo *)0x0);
  pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
  if (pUVar18 != (UnityEngine_Material_o *)0x0) {
    fVar21 = 1.0;
label_0405dc59:
    *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405dc60;
    UnityEngine_Material__SetFloat(pUVar18,"_ZTest2",fVar21,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)*ppSVar2;
    if (pUVar18 != (UnityEngine_Material_o *)0x0) {
      fVar21 = *(float *)((long)&(pSVar9->fields).delegate_trampoline + 4);
label_0405dc77:
      UnityEngine_Material__SetFloat(pUVar18,"_OutlineWidth",fVar21,(MethodInfo *)0x0);
      return;
    }
  }
label_0405dce6:
  lVar19 = 0;
  *(undefined8 *)((long)ppSVar15 + -0x68) = 0x405dceb;
  il2cpp_runtime_helper_022b2c90();
  *(System_Predicate_T__o **)((long)ppSVar15 + -0x68) = pSVar9;
  if (g_data_057ac28a == '\0') {
    *(undefined8 *)((long)ppSVar15 + -0x70) = 0x405dd09;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac28a = '\x01';
  }
  obj = *(UnityEngine_Object_o **)(lVar19 + 0x58);
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)ppSVar15 + -0x70) = 0x405dd37;
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$OnDestroy
// il2cpp: void Outline__OnDestroy (Outline_o* __this, const MethodInfo* method);
// 0x405dcf0

void Outline__OnDestroy(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (g_data_057ac28a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac28a = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields).outlineMaskAndFillMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$Bake
// il2cpp: void Outline__Bake (Outline_o* __this, const MethodInfo* method);
// 0x405d780

void Outline__Bake(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Material_o **ppUVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_Mesh__o *__this_00;
  UnityEngine_Mesh_array *pUVar5;
  UnityEngine_Object_o *obj;
  bool_conflict bVar6;
  Outline_o *__this_01;
  System_Object_array *pSVar7;
  UnityEngine_Mesh_o *pUVar8;
  System_Object_array *pSVar9;
  Outline_o *pOVar10;
  MethodInfo *method_00;
  Outline_o *pOVar11;
  Outline_o *__this_02;
  UnityEngine_Material_o *pUVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  
  if (g_data_057ac28b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListVector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac28b = '\x01';
  }
  __this_01 = (Outline_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Mesh);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,MethodInfo_HashSet_1_UnityEngine_Mesh);
  pOVar11 = __this;
  pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
  if (pSVar7 == (System_Object_array *)0x0) {
label_0405d9ef:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar3 = (int)pSVar7->max_length;
    if (iVar3 < 1) {
      return;
    }
    uVar14 = 0;
    __this_02 = pOVar11;
    if (iVar3 != 0) {
      do {
        pOVar10 = (Outline_o *)pSVar7->m_Items[(int)uVar14];
        pOVar11 = __this_02;
        if ((pOVar10 == (Outline_o *)0x0) ||
           (pOVar11 = pOVar10,
           pUVar8 = UnityEngine_MeshFilter__get_sharedMesh
                              ((UnityEngine_MeshFilter_o *)pOVar10,(MethodInfo *)0x0),
           __this_01 == (Outline_o *)0x0)) goto label_0405d9ef;
        __this_02 = __this_01;
        bVar6 = System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)pUVar8,
                           MethodInfo_Boolean_Add);
        if ((char)bVar6 != '\0') {
          pOVar11 = pOVar10;
          pUVar8 = UnityEngine_MeshFilter__get_sharedMesh
                             ((UnityEngine_MeshFilter_o *)pOVar10,(MethodInfo *)0x0);
          pSVar9 = (System_Object_array *)Outline__SmoothNormals(pOVar11,pUVar8,method_00);
          __this_00 = (__this->fields).bakeKeys;
          pUVar8 = UnityEngine_MeshFilter__get_sharedMesh
                             ((UnityEngine_MeshFilter_o *)pOVar10,(MethodInfo *)0x0);
          lVar13 = MethodInfo_Void_Add;
          pOVar11 = pOVar10;
          if (__this_00 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_0405d9ef;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (__this_00->fields)._items;
          if (pUVar5 == (UnityEngine_Mesh_array *)0x0) goto label_0405d9ef;
          uVar4 = (__this_00->fields)._size;
          if (uVar4 < (uint)pUVar5->max_length) {
            (__this_00->fields)._size = uVar4 + 1;
            pUVar5->m_Items[(int)uVar4] = pUVar8;
            il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          __this_02 = (Outline_o *)(__this->fields).bakeValues;
          pOVar10 = (Outline_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListVector3);
          pOVar11 = pOVar10;
          System_Object___ctor((Il2CppObject *)pOVar10,(MethodInfo *)0x0);
          if (pOVar10 == (Outline_o *)0x0) goto label_0405d9ef;
          pOVar11 = (Outline_o *)&pOVar10->fields;
          (pOVar10->fields).m_CachedPtr = (intptr_t)pSVar9;
          il2cpp_runtime_helper_022b4080();
          lVar13 = MethodInfo_Void_Add;
          if (__this_02 == (Outline_o *)0x0) goto label_0405d9ef;
          piVar1 = (int32_t *)((long)&(__this_02->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar9 = (System_Object_array *)(__this_02->fields).m_CachedPtr;
          if (pSVar9 == (System_Object_array *)0x0) goto label_0405d9ef;
          uVar4 = *(uint *)&(__this_02->fields).m_CancellationTokenSource;
          if (uVar4 < (uint)pSVar9->max_length) {
            *(uint *)&(__this_02->fields).m_CancellationTokenSource = uVar4 + 1;
            __this_02 = (Outline_o *)(pSVar9->m_Items + (int)uVar4);
            pSVar9->m_Items[(int)uVar4] = (Il2CppObject *)pOVar10;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pOVar10,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = uVar14 + 1;
        uVar4 = (uint)pSVar7->max_length;
        if ((int)uVar4 <= (int)uVar14) {
          return;
        }
        pOVar11 = __this_02;
      } while (uVar14 < uVar4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((char)(pOVar11->fields).needsUpdate == '\0') {
    return;
  }
  *(undefined1 *)&(pOVar11->fields).needsUpdate = 0;
  if (g_data_057ac28e == '\0') {
    il2cpp_runtime_helper_023445d0(&"_ZTest");
    il2cpp_runtime_helper_023445d0(&"_OutlineWidth");
    il2cpp_runtime_helper_023445d0(&"_ZTestMask");
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    il2cpp_runtime_helper_023445d0(&"_ZTest2");
    g_data_057ac28e = '\x01';
  }
  pUVar12 = (pOVar11->fields).outlineMaskAndFillMaterial;
  if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
  UnityEngine_Material__SetColor
            (pUVar12,"_OutlineColor",(UnityEngine_Color_o)(pOVar11->fields).outlineColor.fields,(MethodInfo *)0x0
            );
  uVar14 = (pOVar11->fields).outlineMode;
  if (5 < uVar14) {
    return;
  }
  ppUVar2 = &(pOVar11->fields).outlineMaskAndFillMaterial;
  switch(uVar14) {
  case 0:
    pUVar12 = *ppUVar2;
    if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar15 = 8.0;
    goto label_0405dc0f;
  case 1:
    if (*ppUVar2 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar2,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar12 = *ppUVar2;
    if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar15 = 4.0;
    break;
  case 2:
    if (*ppUVar2 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar2,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar12 = *ppUVar2;
    if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar15 = 5.0;
    break;
  case 3:
    pUVar12 = *ppUVar2;
    if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar15 = 4.0;
label_0405dc0f:
    UnityEngine_Material__SetFloat(pUVar12,"_ZTestMask",fVar15,(MethodInfo *)0x0);
    pUVar12 = *ppUVar2;
    if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar15 = 8.0;
    break;
  case 4:
    if (*ppUVar2 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar2,"_ZTestMask",4.0,(MethodInfo *)0x0);
    if (*ppUVar2 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar2,"_ZTest",5.0,(MethodInfo *)0x0);
    if (*ppUVar2 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar2,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar12 = *ppUVar2;
    if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar15 = 0.0;
    goto label_0405dc77;
  case 5:
    if (*ppUVar2 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar2,"_ZTestMask",8.0,(MethodInfo *)0x0);
    if (*ppUVar2 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar2,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar12 = *ppUVar2;
    if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar15 = 5.0;
    goto label_0405dc59;
  }
  UnityEngine_Material__SetFloat(pUVar12,"_ZTest",fVar15,(MethodInfo *)0x0);
  pUVar12 = *ppUVar2;
  if (pUVar12 != (UnityEngine_Material_o *)0x0) {
    fVar15 = 1.0;
label_0405dc59:
    UnityEngine_Material__SetFloat(pUVar12,"_ZTest2",fVar15,(MethodInfo *)0x0);
    pUVar12 = *ppUVar2;
    if (pUVar12 != (UnityEngine_Material_o *)0x0) {
      fVar15 = (pOVar11->fields).outlineWidth;
label_0405dc77:
      UnityEngine_Material__SetFloat(pUVar12,"_OutlineWidth",fVar15,(MethodInfo *)0x0);
      return;
    }
  }
label_0405dce6:
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac28a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac28a = '\x01';
  }
  obj = *(UnityEngine_Object_o **)(lVar13 + 0x58);
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$LoadSmoothNormals
// il2cpp: void Outline__LoadSmoothNormals (Outline_o* __this, const MethodInfo* method);
// 0x405cad0

void Outline__LoadSmoothNormals(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  bool_conflict bVar2;
  int32_t iVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_HashSet_TSource__o *pSVar5;
  System_Predicate_T__o *pSVar6;
  UnityEngine_Mesh_o *pUVar7;
  Il2CppObject *pIVar8;
  Il2CppClass *uvs;
  Outline_o *pOVar9;
  UnityEngine_Material_array *pUVar10;
  UnityEngine_Mesh_o *__this_09;
  UnityEngine_Vector2_array *value;
  long *plVar11;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  long lVar13;
  Outline_o *pOVar14;
  long *unaff_R13;
  undefined1 auVar15 [12];
  _union_332932 _Var16;
  Il2CppType *pIVar17;
  Outline_o *pOVar18;
  _union_332932 local_68;
  Il2CppType *pIStack_60;
  Outline_o *local_58;
  _union_332932 local_48;
  Il2CppType *pIStack_40;
  Outline_o *local_38;
  
  if (g_data_057ac28c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponentsInChildren_SkinnedMeshR);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_MeshFilter_ToHashSet_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_SkinnedMeshRenderer_ToHashSet_Skin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_SkinnedMeshRenderer_G);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_MeshFilter_GetEnumera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Outline_ListVector3_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSmoothNormals_b__30_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSmoothNormals_b__30_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Outline);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_MeshFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057ac28c = '\x01';
  }
  local_68.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Outline_o *)0x0;
  _Var16.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar17 = (Il2CppType *)0x0;
  pOVar18 = (Outline_o *)0x0;
  pSVar4 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
  pSVar5 = System_Linq_Enumerable__ToHashSet_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_MeshFilter_ToHashSet_MeshFilter);
  pSVar6 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_MeshFilter);
  System_Predicate_object____ctor();
  if (pSVar5 == (System_Collections_Generic_HashSet_TSource__o *)0x0) goto label_0405d064;
  System_Collections_Generic_HashSet_object___RemoveWhere
            ((System_Collections_Generic_HashSet_object__o *)pSVar5,pSVar6,MethodInfo_Int32_RemoveWhere);
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,
             (System_Collections_Generic_HashSet_object__o *)pSVar5,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_MeshFilter_GetEnumera);
  local_58 = local_38;
  local_68 = local_48;
  pIStack_60 = pIStack_40;
  unaff_R13 = &TypeInfo_Outline;
  while( true ) {
    do {
      do {
        __this_02.fields._8_8_ = pIVar17;
        __this_02.fields._set = _Var16.genericMethod;
        __this_02.fields._current = (Il2CppObject *)pOVar18;
        bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_3219C40 *)&local_68);
        pOVar14 = local_58;
        if ((char)bVar2 == '\0') {
          __this_03.fields._8_8_ = pIVar17;
          __this_03.fields._set = _Var16.genericMethod;
          __this_03.fields._current = (Il2CppObject *)pOVar18;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_3219C30 *)&local_68);
          goto label_0405ce79;
        }
        if (*(int *)(TypeInfo_Outline + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pOVar14 == (Outline_o *)0x0) goto label_0405d037;
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_Outline + 0xb8);
        pUVar7 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar14,(MethodInfo *)0x0)
        ;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0405d03c;
        bVar2 = System_Collections_Generic_HashSet_object___Add(pSVar1,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Add);
      } while ((char)bVar2 == '\0');
      __this_00 = (__this->fields).bakeKeys;
      pUVar7 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar14,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_0405d04b;
      iVar3 = System_Collections_Generic_List_object___IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar7,
                         MethodInfo_Int32_IndexOf);
      if (iVar3 < 0) {
        pOVar9 = pOVar14;
        pUVar7 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar14,(MethodInfo *)0x0)
        ;
        uvs = (Il2CppClass *)Outline__SmoothNormals(pOVar9,pUVar7,method_00);
      }
      else {
        __this_01 = (__this->fields).bakeValues;
        if (__this_01 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto label_0405d055;
        pIVar8 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,iVar3,MethodInfo_Outline_ListVector3_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_0405d05a;
        uvs = pIVar8[1].klass;
      }
      pUVar7 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar14,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Mesh_o *)0x0) goto label_0405d050;
      pMVar12 = (MethodInfo *)0x0;
      UnityEngine_Mesh__SetUVs(pUVar7,3,(System_Collections_Generic_List_Vector3__o *)uvs,(MethodInfo *)0x0);
      pOVar9 = (Outline_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pOVar14,MethodInfo_Renderer_GetComponent_Renderer);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pOVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    pUVar7 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar14,(MethodInfo *)0x0);
    if (pOVar9 == (Outline_o *)0x0) break;
    pUVar10 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)pOVar9,(MethodInfo *)0x0);
    Outline__CombineSubmeshes(pOVar9,pUVar7,pUVar10,pMVar12);
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0405d064:
    do {
      auVar15 = il2cpp_runtime_helper_022b2c90();
      if (auVar15._8_4_ != 1) {
        __this_07.fields._8_8_ = pIVar17;
        __this_07.fields._set = _Var16.genericMethod;
        __this_07.fields._current = (Il2CppObject *)pOVar18;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_3219C30 *)&local_68);
label_0405d35e:
        _Unwind_Resume(auVar15._0_8_);
      }
      plVar11 = (long *)__cxa_begin_catch(auVar15._0_8_);
      lVar13 = *plVar11;
      __cxa_end_catch();
      __this_06.fields._8_8_ = pIVar17;
      __this_06.fields._set = _Var16.genericMethod;
      __this_06.fields._current = (Il2CppObject *)pOVar18;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_06,(MethodInfo_3219C30 *)&local_68);
      if (lVar13 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar13);
        __this_08.fields._8_8_ = pIVar17;
        __this_08.fields._set = _Var16.genericMethod;
        __this_08.fields._current = (Il2CppObject *)pOVar18;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_08,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
        goto label_0405d35e;
      }
label_0405ce79:
      pSVar4 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                         ((UnityEngine_Component_o *)__this,MethodInfo_SkinnedMeshRenderer_GetComponentsInChildren_SkinnedMeshR);
      pSVar5 = System_Linq_Enumerable__ToHashSet_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_SkinnedMeshRenderer_ToHashSet_Skin);
      pSVar6 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_SkinnedMeshRenderer);
      System_Predicate_object____ctor();
    } while (pSVar5 == (System_Collections_Generic_HashSet_TSource__o *)0x0);
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)pSVar5,pSVar6,MethodInfo_Int32_RemoveWhere);
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_HashSet_object__o *)pSVar5,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_SkinnedMeshRenderer_G);
    __this = (Outline_o *)&MethodInfo_Boolean_MoveNext;
    _Var16 = local_48;
    pIVar17 = pIStack_40;
    pOVar18 = local_38;
    while( true ) {
      pOVar14 = pOVar18;
      __this_04.fields._8_8_ = pIVar17;
      __this_04.fields._set = _Var16.genericMethod;
      __this_04.fields._current = (Il2CppObject *)pOVar14;
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_04,(MethodInfo_3219C40 *)&stack0xffffffffffffff78);
      if ((char)bVar2 == '\0') {
        __this_05.fields._8_8_ = pIVar17;
        __this_05.fields._set = _Var16.genericMethod;
        __this_05.fields._current = (Il2CppObject *)pOVar14;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
        return;
      }
      lVar13 = *unaff_R13;
      pOVar18 = pOVar14;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar13 = *unaff_R13;
      }
      if (pOVar14 == (Outline_o *)0x0) break;
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(lVar13 + 0xb8);
      pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                         ((UnityEngine_SkinnedMeshRenderer_o *)pOVar14,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0405d032;
      pMVar12 = (MethodInfo *)&MethodInfo_Boolean_Add;
      bVar2 = System_Collections_Generic_HashSet_object___Add(pSVar1,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Add);
      if ((char)bVar2 != '\0') {
        pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pOVar14,(MethodInfo *)0x0);
        __this_09 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                              ((UnityEngine_SkinnedMeshRenderer_o *)pOVar14,(MethodInfo *)0x0);
        if (__this_09 == (UnityEngine_Mesh_o *)0x0) goto label_0405d041;
        iVar3 = UnityEngine_Mesh__get_vertexCount(__this_09,(MethodInfo *)0x0);
        value = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar3);
        if (pUVar7 == (UnityEngine_Mesh_o *)0x0) goto label_0405d046;
        UnityEngine_Mesh__set_uv4(pUVar7,value,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pOVar14,(MethodInfo *)0x0);
        pUVar10 = UnityEngine_Renderer__get_sharedMaterials
                            ((UnityEngine_Renderer_o *)pOVar14,(MethodInfo *)0x0);
        Outline__CombineSubmeshes(pOVar14,pUVar7,pUVar10,pMVar12);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_0405d032:
    il2cpp_runtime_helper_022b2c90();
label_0405d037:
    il2cpp_runtime_helper_022b2c90();
label_0405d03c:
    il2cpp_runtime_helper_022b2c90();
label_0405d041:
    il2cpp_runtime_helper_022b2c90();
label_0405d046:
    il2cpp_runtime_helper_022b2c90();
label_0405d04b:
    il2cpp_runtime_helper_022b2c90();
label_0405d050:
    il2cpp_runtime_helper_022b2c90();
label_0405d055:
    il2cpp_runtime_helper_022b2c90();
label_0405d05a:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// Outline$$SmoothNormals
// il2cpp: System_Collections_Generic_List_Vector3__o* Outline__SmoothNormals (Outline_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x405dd50

System_Collections_Generic_List_Vector3__o *
Outline__SmoothNormals(Outline_o *__this,UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar7;
  char cVar8;
  int32_t iVar9;
  UnityEngine_Vector3_array *pUVar10;
  System_Func_TSource__int__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *pSVar11;
  VirtualInvokeData *pVVar12;
  undefined8 *puVar13;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  long *plVar14;
  int32_t index;
  long *plVar15;
  int32_t index_00;
  System_Collections_Generic_List_Vector3__o *unaff_RBX;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float extraout_XMM0_Dc;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  UnityEngine_Vector3_o UVar24;
  long *local_70;
  float local_64;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  
  if (g_data_057ac28d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_Count_KeyValuePair_2_UnityEngine_Vector3_System_In);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_UnityEngine_Vector);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_UnityEngine_Vector3_System);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_Vector3_int_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Vector3_int_KeyValuePair_Vector3_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_KeyValuePair_Vector3_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_IGrouping_Vector3_KeyValuePair_Vector3_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_KeyValuePair_Vector3_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Vector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_System_Int32_SmoothNo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_SmoothNormals_b__31_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac28d = '\x01';
  }
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    pUVar10 = UnityEngine_Mesh__get_vertices(mesh,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__int__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__int__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__int__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__int__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Vector3_int_KeyValuePair_Vector3_int);
      System_Func_Vector3__int__KeyValuePair_Vector3__int_____ctor();
      lVar16 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__int__TResult__o **)(lVar16 + 8) = selector;
      il2cpp_runtime_helper_022b4080(lVar16 + 8,selector);
    }
    source = System_Linq_Enumerable__Select_Vector3__KeyValuePair_Vector3__int__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar10,selector,MethodInfo_IEnumerable_1_KeyValuePair_2_UnityEngine_Vector3_System);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_Vector3_int_Vector3);
      System_Func_KeyValuePair_Vector3__int___Vector3____ctor();
      lVar16 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar16 + 0x10) = keySelector;
      il2cpp_runtime_helper_022b4080(lVar16 + 0x10,keySelector);
    }
    pSVar11 = System_Linq_Enumerable__GroupBy_KeyValuePair_Vector3__int___Vector3_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_UnityEngine_Vector)
    ;
    pUVar10 = UnityEngine_Mesh__get_normals(mesh,(MethodInfo *)0x0);
    unaff_RBX = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_36a2470
              (unaff_RBX,(System_Collections_Generic_IEnumerable_T__o *)pUVar10,MethodInfo_List_1_UnityEngine_Vector3);
    if (pSVar11 != (System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *)0x0) {
      pSVar5 = pSVar11->klass;
      uVar1._0_1_ = (pSVar5->_2).rank;
      uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerable_IGrouping_Vector3_KeyValuePair_Vector3_int) {
            pVVar12 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar16);
            goto label_0405e071;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar16);
      }
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IEnumerable_IGrouping_Vector3_KeyValuePair_Vector3_int,0);
label_0405e071:
      local_70 = (long *)(*pVVar12->methodPtr)(pSVar11,pVVar12->method);
      if (local_70 != (long *)0x0) {
label_0405e0bc:
        do {
          lVar16 = *local_70;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                puVar13 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
                goto label_0405e123;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(local_70,TypeInfo_IEnumerator,0);
label_0405e123:
          cVar8 = (*(code *)*puVar13)(local_70,puVar13[1]);
          if (cVar8 == '\0') {
            lVar16 = 0;
            goto label_0405e80a;
          }
          lVar16 = *local_70;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int) {
                puVar13 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
                goto label_0405e1a3;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(local_70,TypeInfo_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int,0);
label_0405e1a3:
          source_00 = (System_Collections_Generic_IEnumerable_TSource__o *)
                      (*(code *)*puVar13)(local_70,puVar13[1]);
          iVar9 = System_Linq_Enumerable__Count_KeyValuePair_Vector3__int__(source_00,MethodInfo_Int32_Count_KeyValuePair_2_UnityEngine_Vector3_System_In);
        } while (iVar9 == 1);
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        if (source_00 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
label_0405e9ba:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          local_58 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
          local_64 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
          pSVar7 = source_00->klass;
          uVar2._0_1_ = (pSVar7->_2).rank;
          uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pSVar7->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerable_KeyValuePair_Vector3_int) {
                pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar6->offset + lVar16);
                goto label_0405e271;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar16);
          }
          pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source_00,TypeInfo_IEnumerable_KeyValuePair_Vector3_int,0);
label_0405e271:
          plVar14 = (long *)(*pVVar12->methodPtr)(source_00,pVVar12->method);
          _fStack_50 = 0;
          if (plVar14 != (long *)0x0) {
            do {
              lVar16 = *plVar14;
              if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                lVar17 = 0;
                do {
                  if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                    puVar13 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
                    goto label_0405e2f3;
                  }
                  lVar17 = lVar17 + 0x10;
                } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
              }
              puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IEnumerator,0);
label_0405e2f3:
              cVar8 = (*(code *)*puVar13)(plVar14,puVar13[1]);
              if (cVar8 == '\0') goto label_0405e3b0;
              lVar16 = *plVar14;
              if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                lVar17 = 0;
                do {
                  if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_KeyValuePair_Vector3_int) {
                    puVar13 = (undefined8 *)
                              ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
                    goto label_0405e363;
                  }
                  lVar17 = lVar17 + 0x10;
                } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
              }
              puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IEnumerator_KeyValuePair_Vector3_int,0);
label_0405e363:
              (*(code *)*puVar13)(plVar14,puVar13[1]);
              if (unaff_RBX == (System_Collections_Generic_List_Vector3__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0405e9ad;
              }
              UVar24 = System_Collections_Generic_List_Vector3___get_Item(unaff_RBX,index,MethodInfo_Vector3_get_Item);
              local_58._4_4_ = (float)local_58._4_4_ + UVar24.fields.y;
              local_58._0_4_ = (float)local_58._0_4_ + UVar24.fields.x;
              fStack_50 = fStack_50 + extraout_XMM0_Dc;
              fStack_4c = fStack_4c + extraout_XMM0_Dd;
              local_64 = local_64 + UVar24.fields.z;
            } while( true );
          }
          il2cpp_runtime_helper_022b2c90();
        }
        goto label_0405e9bf;
      }
      goto label_0405e9c4;
    }
  }
label_0405e9bf:
  il2cpp_runtime_helper_022b2c90();
label_0405e9c4:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar23 = il2cpp_runtime_helper_022fefe0();
    if (auVar23._8_4_ != 1) break;
    plVar14 = (long *)__cxa_begin_catch();
    lVar16 = *plVar14;
    __cxa_end_catch();
label_0405e80a:
    if (local_70 != (long *)0x0) {
      lVar17 = *local_70;
      if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
            puVar13 = (undefined8 *)
                      (lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
            goto label_0405e86d;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(local_70,TypeInfo_IDisposable,0);
label_0405e86d:
      (*(code *)*puVar13)(local_70,puVar13[1]);
    }
    if (lVar16 == 0) {
      return unaff_RBX;
    }
  }
  if (local_70 != (long *)0x0) {
    lVar16 = *local_70;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar13 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto label_0405ea9d;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(local_70,TypeInfo_IDisposable,0);
label_0405ea9d:
    (*(code *)*puVar13)(local_70,puVar13[1]);
  }
  _Unwind_Resume(auVar23._0_8_);
label_0405e3b0:
  if (plVar14 != (long *)0x0) {
    lVar16 = *plVar14;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar13 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto label_0405e41d;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_0405e41d:
    (*(code *)*puVar13)(plVar14,puVar13[1]);
  }
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar4 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar20 = 0;
  uVar21 = 0;
  fVar19 = local_64 * local_64 +
           (float)local_58._4_4_ * (float)local_58._4_4_ + (float)local_58._0_4_ * (float)local_58._0_4_;
  if (fVar19 < 0.0) {
    fVar19 = sqrtf(fVar19);
    uVar20 = extraout_XMM0_Dc_00;
    uVar21 = extraout_XMM0_Dd_00;
  }
  else {
    fVar19 = SQRT(fVar19);
  }
  if (1e-05 < fVar19) {
    local_64 = local_64 / fVar19;
    auVar22._4_4_ = fVar19;
    auVar22._0_4_ = fVar19;
    auVar22._8_4_ = uVar20;
    auVar22._12_4_ = uVar21;
    auVar22 = divps(_local_58,auVar22);
    local_58 = auVar22._0_8_;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    local_58 = (undefined1  [8])**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_64 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  pSVar7 = source_00->klass;
  uVar3._0_1_ = (pSVar7->_2).rank;
  uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar6 = (pSVar7->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerable_KeyValuePair_Vector3_int) {
        pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar6->offset + lVar16);
        goto label_0405e591;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar16);
  }
  pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source_00,TypeInfo_IEnumerable_KeyValuePair_Vector3_int,0);
label_0405e591:
  plVar15 = (long *)(*pVVar12->methodPtr)(source_00,pVVar12->method);
  if (plVar15 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    goto label_0405e9bf;
  }
label_0405e5b0:
  lVar16 = *plVar15;
  if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
    lVar17 = 0;
    do {
      if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
        puVar13 = (undefined8 *)
                  ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
        goto label_0405e613;
      }
      lVar17 = lVar17 + 0x10;
    } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
  }
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IEnumerator,0);
label_0405e613:
  cVar8 = (*(code *)*puVar13)(plVar15,puVar13[1]);
  if (cVar8 != '\0') {
    lVar16 = *plVar15;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_KeyValuePair_Vector3_int) {
          puVar13 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
          goto label_0405e683;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IEnumerator_KeyValuePair_Vector3_int,0);
label_0405e683:
    (*(code *)*puVar13)(plVar15,puVar13[1]);
    if (unaff_RBX != (System_Collections_Generic_List_Vector3__o *)0x0) goto code_r0x0405e695;
    il2cpp_runtime_helper_022b2c90();
label_0405e9ad:
    il2cpp_runtime_helper_022fefe0();
    il2cpp_runtime_helper_022fefe0(plVar14);
    goto label_0405e9ba;
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = *plVar15;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar13 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto label_0405e0aa;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0405e0aa:
    (*(code *)*puVar13)(plVar15,puVar13[1]);
  }
  goto label_0405e0bc;
code_r0x0405e695:
  UVar24.fields.z = local_64;
  UVar24.fields.x = (float)local_58._0_4_;
  UVar24.fields.y = (float)local_58._4_4_;
  System_Collections_Generic_List_Vector3___set_Item(unaff_RBX,index_00,UVar24,MethodInfo_Void_set_Item);
  goto label_0405e5b0;
}


// Outline$$CombineSubmeshes
// il2cpp: void Outline__CombineSubmeshes (Outline_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Material_array* materials, const MethodInfo* method);
// 0x405eae0

void Outline__CombineSubmeshes
               (Outline_o *__this,UnityEngine_Mesh_o *mesh,UnityEngine_Material_array *materials,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t length;
  bool_conflict bVar2;
  int32_t trianglesArrayLength;
  System_Int32_array *values;
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  MethodInfo *pMVar3;
  
  if (mesh == (UnityEngine_Mesh_o *)0x0) {
label_0405eb60:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac28f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Outline_ListVector3);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Mesh);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Mesh);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_ListVector3);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ac28f = '\x01';
    }
    (__this->fields).outlineColor.fields.r = 1.0;
    (__this->fields).outlineColor.fields.g = 1.0;
    (__this->fields).outlineColor.fields.b = 1.0;
    (__this->fields).outlineColor.fields.a = 1.0;
    (__this->fields).outlineWidth = 2.0;
    __this_00 = (System_Collections_Generic_List_Mesh__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Mesh);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Mesh);
    (__this->fields).bakeKeys = __this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).bakeKeys,__this_00);
    __this_01 = (System_Collections_Generic_List_Outline_ListVector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ListVector3);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Outline_ListVector3);
    (__this->fields).bakeValues = __this_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields).bakeValues,__this_01);
    __this_02 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
    (__this->fields)._namesToIgnore = __this_02;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._namesToIgnore);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
  if (iVar1 != 1) {
    __this = (Outline_o *)mesh;
    iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
    if (materials == (UnityEngine_Material_array *)0x0) goto label_0405eb60;
    if (iVar1 <= (int)materials->max_length) {
      iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
      UnityEngine_Mesh__set_subMeshCount(mesh,iVar1 + 1,(MethodInfo *)0x0);
      values = UnityEngine_Mesh__get_triangles(mesh,(MethodInfo *)0x0);
      iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)0x0;
      length = UnityEngine_NoAllocHelpers__SafeLength((System_Array_o *)values,(MethodInfo *)0x0);
      bVar2 = UnityEngine_Mesh__CheckCanAccessSubmesh(mesh,iVar1 + -1,1,pMVar3);
      if ((char)bVar2 != '\0') {
        pMVar3 = (MethodInfo *)0x4ed3edb;
        trianglesArrayLength =
             UnityEngine_NoAllocHelpers__SafeLength((System_Array_o *)values,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetTrianglesImpl
                  (mesh,iVar1 + -1,1,(System_Array_o *)values,trianglesArrayLength,0,length,1,0,pMVar3);
      }
      return;
    }
  }
  return;
}


// Outline$$UpdateMaterialProperties
// il2cpp: void Outline__UpdateMaterialProperties (Outline_o* __this, const MethodInfo* method);
// 0x405da10

void Outline__UpdateMaterialProperties(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  uint uVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Material_o *pUVar3;
  long lVar4;
  float fVar5;
  
  if (g_data_057ac28e == '\0') {
    il2cpp_runtime_helper_023445d0(&"_ZTest");
    il2cpp_runtime_helper_023445d0(&"_OutlineWidth");
    il2cpp_runtime_helper_023445d0(&"_ZTestMask");
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    il2cpp_runtime_helper_023445d0(&"_ZTest2");
    g_data_057ac28e = '\x01';
  }
  pUVar3 = (__this->fields).outlineMaskAndFillMaterial;
  if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
  UnityEngine_Material__SetColor
            (pUVar3,"_OutlineColor",(UnityEngine_Color_o)(__this->fields).outlineColor.fields,(MethodInfo *)0x0);
  uVar2 = (__this->fields).outlineMode;
  if (5 < uVar2) {
    return;
  }
  ppUVar1 = &(__this->fields).outlineMaskAndFillMaterial;
  switch(uVar2) {
  case 0:
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 8.0;
    goto label_0405dc0f;
  case 1:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 4.0;
    break;
  case 2:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 5.0;
    break;
  case 3:
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 4.0;
label_0405dc0f:
    UnityEngine_Material__SetFloat(pUVar3,"_ZTestMask",fVar5,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 8.0;
    break;
  case 4:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",4.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest",5.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 0.0;
    goto label_0405dc77;
  case 5:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0405dce6;
    fVar5 = 5.0;
    goto label_0405dc59;
  }
  UnityEngine_Material__SetFloat(pUVar3,"_ZTest",fVar5,(MethodInfo *)0x0);
  pUVar3 = *ppUVar1;
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    fVar5 = 1.0;
label_0405dc59:
    UnityEngine_Material__SetFloat(pUVar3,"_ZTest2",fVar5,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
      fVar5 = (__this->fields).outlineWidth;
label_0405dc77:
      UnityEngine_Material__SetFloat(pUVar3,"_OutlineWidth",fVar5,(MethodInfo *)0x0);
      return;
    }
  }
label_0405dce6:
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac28a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac28a = '\x01';
  }
  obj = *(UnityEngine_Object_o **)(lVar4 + 0x58);
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$.ctor
// il2cpp: void Outline___ctor (Outline_o* __this, const MethodInfo* method);
// 0x405eb70

void Outline___ctor(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  
  if (g_data_057ac28f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Outline_ListVector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ListVector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac28f = '\x01';
  }
  (__this->fields).outlineColor.fields.r = 1.0;
  (__this->fields).outlineColor.fields.g = 1.0;
  (__this->fields).outlineColor.fields.b = 1.0;
  (__this->fields).outlineColor.fields.a = 1.0;
  (__this->fields).outlineWidth = 2.0;
  __this_00 = (System_Collections_Generic_List_Mesh__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Mesh);
  (__this->fields).bakeKeys = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).bakeKeys,__this_00);
  __this_01 = (System_Collections_Generic_List_Outline_ListVector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ListVector3);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Outline_ListVector3);
  (__this->fields).bakeValues = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).bakeValues,__this_01);
  __this_02 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
  (__this->fields)._namesToIgnore = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._namesToIgnore);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline$$.cctor
// il2cpp: void Outline___cctor (const MethodInfo* method);
// 0x405eca0

void Outline___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ac290 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Outline);
    g_data_057ac290 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Mesh);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_UnityEngine_Mesh);
  **(undefined8 **)(TypeInfo_Outline + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Outline + 0xb8),__this);
  return;
}


// Outline$$<RefreshRenderers>b__23_0
// il2cpp: bool Outline___RefreshRenderers_b__23_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x405ed20

bool_conflict
Outline___RefreshRenderers_b__23_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *source;
  uint uVar1;
  bool_conflict extraout_EAX;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Il2CppObject *__this_01;
  
  if (g_data_057ac291 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RefreshRenderers_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057ac291 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)e;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,e);
    source = (__this->fields)._namesToIgnore;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
    System_Func_object__bool____ctor();
    source_00 = System_Linq_Enumerable__Where_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_IEnumerable_1_System_String_Where_String)
    ;
    uVar1 = System_Linq_Enumerable__Any_object_(source_00,MethodInfo_Boolean_Any_String);
    return uVar1 ^ 1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Outline$$<OnEnable>b__24_0
// il2cpp: bool Outline___OnEnable_b__24_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x405ee20

bool_conflict Outline___OnEnable_b__24_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  int *piVar1;
  Il2CppArrayBounds *pIVar2;
  Il2CppClass *exists;
  long lVar3;
  bool_conflict bVar4;
  uint uVar5;
  bool_conflict extraout_EAX;
  UnityEngine_Material_array *pUVar6;
  UnityEngine_Material_array *pUVar7;
  UnityEngine_Material_array *pUVar8;
  UnityEngine_Material_array *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *__this_01;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar9;
  Il2CppObject *__this_02;
  
  if (g_data_057ac292 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material_ToList_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_ToArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac292 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar8 = (UnityEngine_Material_array *)0x0;
  pUVar6 = (UnityEngine_Material_array *)e;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') goto label_0405ef68;
  if (e != (UnityEngine_Renderer_o *)0x0) {
    pUVar6 = UnityEngine_Renderer__get_sharedMaterials(e,(MethodInfo *)0x0);
    pUVar8 = MethodInfo_List_1_UnityEngine_Material_ToList_Material;
    pUVar7 = (UnityEngine_Material_array *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar6,
                        (MethodInfo_2525430 *)MethodInfo_List_1_UnityEngine_Material_ToList_Material);
    if (pUVar7 != (UnityEngine_Material_array *)0x0) {
      pUVar6 = pUVar7;
      bVar4 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)pUVar7,
                         (Il2CppObject *)(__this->fields).outlineMaskAndFillMaterial,MethodInfo_Boolean_Contains);
      lVar3 = MethodInfo_Void_Add;
      if ((char)bVar4 == '\0') {
        pUVar8 = (UnityEngine_Material_array *)(__this->fields).outlineMaskAndFillMaterial;
        piVar1 = (int *)((long)&pUVar7->max_length + 4);
        *piVar1 = *piVar1 + 1;
        pIVar2 = pUVar7->bounds;
        if (pIVar2 == (Il2CppArrayBounds *)0x0) goto label_0405ef92;
        uVar5 = (uint)pUVar7->max_length;
        if (uVar5 < (uint)pIVar2[1].lower_bound) {
          *(uint *)&pUVar7->max_length = uVar5 + 1;
          (&pIVar2[2].length)[(int)uVar5] = (il2cpp_array_size_t)pUVar8;
          il2cpp_runtime_helper_022b4080(&pIVar2[2].length + (int)uVar5);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pUVar7,(Il2CppObject *)pUVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      pUVar8 = (UnityEngine_Material_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)pUVar7,MethodInfo_Material_ToArray);
      UnityEngine_Renderer__set_materials(e,pUVar8,(MethodInfo *)0x0);
label_0405ef68:
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
      return uVar5 ^ 1;
    }
  }
label_0405ef92:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac293 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material_ToList_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_ToArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac293 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = (UnityEngine_Material_array *)0x0;
  source = pUVar8;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pUVar8 != (UnityEngine_Material_array *)0x0) {
      source = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)pUVar8,(MethodInfo *)0x0);
      pUVar7 = MethodInfo_List_1_UnityEngine_Material_ToList_Material;
      __this_00 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (MethodInfo_2525430 *)MethodInfo_List_1_UnityEngine_Material_ToList_Material);
      if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
        System_Collections_Generic_List_object___Remove
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar6->m_Items[7],
                   MethodInfo_Boolean_Remove);
        pUVar6 = (UnityEngine_Material_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_Material_ToArray);
        UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)pUVar8,pUVar6,(MethodInfo *)0x0);
        goto label_0405f077;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac294 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSmoothNormals_b__2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
      g_data_057ac294 = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
    __this_02 = __this_01;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[1].klass = (Il2CppClass *)pUVar7;
      il2cpp_runtime_helper_022b4080(__this_01 + 1);
      exists = __this_01[1].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar5 = 0;
      bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pSVar9 = (System_Collections_Generic_IEnumerable_TSource__o *)source->m_Items[9];
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
        System_Func_object__bool____ctor();
        pSVar9 = System_Linq_Enumerable__Where_object_(pSVar9,predicate,MethodInfo_IEnumerable_1_System_String_Where_String);
        uVar5 = System_Linq_Enumerable__Any_object_(pSVar9,MethodInfo_Boolean_Any_String);
        uVar5 = uVar5 ^ 1;
      }
      return uVar5;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    return extraout_EAX;
  }
label_0405f077:
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
  return uVar5 ^ 1;
}


// Outline$$<OnDisable>b__27_0
// il2cpp: bool Outline___OnDisable_b__27_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x405efa0

bool_conflict Outline___OnDisable_b__27_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  UnityEngine_Material_o *source;
  bool_conflict bVar1;
  uint uVar2;
  bool_conflict extraout_EAX;
  UnityEngine_Material_array *pUVar3;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *__this_01;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_02;
  
  if (g_data_057ac293 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material_ToList_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_ToArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac293 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar4 = (Il2CppClass *)0x0;
  pUVar3 = (UnityEngine_Material_array *)e;
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (e != (UnityEngine_Renderer_o *)0x0) {
      pUVar3 = UnityEngine_Renderer__get_sharedMaterials(e,(MethodInfo *)0x0);
      pIVar4 = MethodInfo_List_1_UnityEngine_Material_ToList_Material;
      __this_00 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar3,
                             (MethodInfo_2525430 *)MethodInfo_List_1_UnityEngine_Material_ToList_Material);
      if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
        System_Collections_Generic_List_object___Remove
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)(__this->fields).outlineMaskAndFillMaterial,MethodInfo_Boolean_Remove);
        pUVar3 = (UnityEngine_Material_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_Material_ToArray);
        UnityEngine_Renderer__set_materials(e,pUVar3,(MethodInfo *)0x0);
        goto label_0405f077;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac294 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSmoothNormals_b__2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
      g_data_057ac294 = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
    __this_02 = __this_01;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[1].klass = pIVar4;
      il2cpp_runtime_helper_022b4080(__this_01 + 1);
      pIVar4 = __this_01[1].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar2 = 0;
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pIVar4,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        source = pUVar3->m_Items[9];
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
        System_Func_object__bool____ctor();
        source_00 = System_Linq_Enumerable__Where_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                               MethodInfo_IEnumerable_1_System_String_Where_String);
        uVar2 = System_Linq_Enumerable__Any_object_(source_00,MethodInfo_Boolean_Any_String);
        uVar2 = uVar2 ^ 1;
      }
      return uVar2;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    return extraout_EAX;
  }
label_0405f077:
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  return uVar2 ^ 1;
}


// Outline$$<LoadSmoothNormals>b__30_0
// il2cpp: bool Outline___LoadSmoothNormals_b__30_0 (Outline_o* __this, UnityEngine_MeshFilter_o* e, const MethodInfo* method);
// 0x405f0b0

bool_conflict
Outline___LoadSmoothNormals_b__30_0(Outline_o *__this,UnityEngine_MeshFilter_o *e,MethodInfo *method)

{
  Il2CppClass *exists;
  System_Collections_Generic_List_string__o *source;
  bool_conflict bVar1;
  uint uVar2;
  bool_conflict extraout_EAX;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Il2CppObject *__this_01;
  
  if (g_data_057ac294 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSmoothNormals_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    g_data_057ac294 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)e;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    exists = __this_00[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar2 = 0;
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      source = (__this->fields)._namesToIgnore;
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
      System_Func_object__bool____ctor();
      source_00 = System_Linq_Enumerable__Where_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             MethodInfo_IEnumerable_1_System_String_Where_String);
      uVar2 = System_Linq_Enumerable__Any_object_(source_00,MethodInfo_Boolean_Any_String);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Outline$$<LoadSmoothNormals>b__30_1
// il2cpp: bool Outline___LoadSmoothNormals_b__30_1 (Outline_o* __this, UnityEngine_SkinnedMeshRenderer_o* e, const MethodInfo* method);
// 0x405f200

bool_conflict
Outline___LoadSmoothNormals_b__30_1(Outline_o *__this,UnityEngine_SkinnedMeshRenderer_o *e,MethodInfo *method)

{
  Il2CppClass *exists;
  System_Collections_Generic_List_string__o *source;
  bool_conflict bVar1;
  uint uVar2;
  bool_conflict extraout_EAX;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Il2CppObject *__this_01;
  
  if (g_data_057ac295 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSmoothNormals_b__3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_1);
    g_data_057ac295 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_1);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)e;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    exists = __this_00[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar2 = 0;
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      source = (__this->fields)._namesToIgnore;
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
      System_Func_object__bool____ctor();
      source_00 = System_Linq_Enumerable__Where_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             MethodInfo_IEnumerable_1_System_String_Where_String);
      uVar2 = System_Linq_Enumerable__Any_object_(source_00,MethodInfo_Boolean_Any_String);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


