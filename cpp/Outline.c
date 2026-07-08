// Type: Outline
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Outline.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Gizmos/Outline.cs  [CHANGED since prior version]
// --------------------------------

// Outline.ListVector3$$.ctor
// il2cpp: void Outline_ListVector3___ctor (Outline_ListVector3_o* __this, const MethodInfo* method);
// 0x3d69180

void Outline_ListVector3___ctor(Outline_ListVector3_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c$$.cctor
// il2cpp: void Outline___c___cctor (const MethodInfo* method);
// 0x3d69a00

void Outline_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057025e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057025e6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Outline.<>c$$.ctor
// il2cpp: void Outline___c___ctor (Outline___c_o* __this, const MethodInfo* method);
// 0x3d69a70

void Outline_<>c___ctor(Outline___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c$$<SmoothNormals>b__31_0
// il2cpp: System_Collections_Generic_KeyValuePair_Vector3__int__o Outline___c___SmoothNormals_b__31_0 (Outline___c_o* __this, UnityEngine_Vector3_o vertex, int32_t index, const MethodInfo* method);
// 0x3d69a80

System_Collections_Generic_KeyValuePair_Vector3__int__o
Outline_<>c__<SmoothNormals>b__31_0
          (Outline___c_o *__this,UnityEngine_Vector3_o vertex,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_Vector3__int__Fields SVar1;
  float fVar2;
  float fVar3;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  ulong uVar4;
  UnityEngine_Vector3_o key;
  System_Collections_Generic_KeyValuePair_Vector3__int__o __this_00;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  uVar4 = CONCAT44((int)((ulong)register0x00001240 >> 0x20),vertex.fields.z);
  fVar2 = vertex.fields.x;
  fVar3 = vertex.fields.y;
  if (DAT_057025e7 == '\0') {
    local_18._8_4_ = in_XMM0_Dc;
    local_18._0_8_ = vertex.fields._0_8_;
    local_18._12_4_ = in_XMM0_Dd;
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_System_Int32);
    uVar4 = (ulong)(uint)vertex.fields.z;
    DAT_057025e7 = '\x01';
    fVar2 = (float)local_18._0_4_;
    fVar3 = (float)local_18._4_4_;
  }
  local_28 = 0;
  uStack_20 = 0;
  key.fields.z = 0.0;
  key.fields.x = (float)(int)uVar4;
  key.fields.y = (float)(int)(uVar4 >> 0x20);
  __this_00.fields.key.fields.y = fVar3;
  __this_00.fields.key.fields.x = fVar2;
  __this_00.fields._8_8_ = &local_28;
  System_Collections_Generic_KeyValuePair<Vector3__int>___ctor(__this_00,key,index,MethodInfo_KeyValuePair_2_UnityEngine_Vector3_System_Int32);
  SVar1.key.fields.z = (float)(undefined4)uStack_20;
  SVar1.value = uStack_20._4_4_;
  SVar1.key.fields.x = (float)(undefined4)local_28;
  SVar1.key.fields.y = (float)local_28._4_4_;
  return (System_Collections_Generic_KeyValuePair_Vector3__int__o)SVar1;
}


// Outline.<>c$$<SmoothNormals>b__31_1
// il2cpp: UnityEngine_Vector3_o Outline___c___SmoothNormals_b__31_1 (Outline___c_o* __this, System_Collections_Generic_KeyValuePair_Vector3__int__o pair, const MethodInfo* method);
// 0x3d69af0

UnityEngine_Vector3_o
Outline_<>c__<SmoothNormals>b__31_1
          (Outline___c_o *__this,System_Collections_Generic_KeyValuePair_Vector3__int__o pair,
          MethodInfo *method)

{
  if (DAT_057025e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Key);
    DAT_057025e8 = '\x01';
  }
  return (UnityEngine_Vector3_o)pair.fields.key.fields.fields;
}


// Outline.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Outline___c__DisplayClass23_0___ctor (Outline___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x3d694c0

void Outline_<>c__DisplayClass23_0___ctor
               (Outline___c__DisplayClass23_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass23_0$$<RefreshRenderers>b__1
// il2cpp: bool Outline___c__DisplayClass23_0___RefreshRenderers_b__1 (Outline___c__DisplayClass23_0_o* __this, System_String_o* a, const MethodInfo* method);
// 0x3d69b30

bool_conflict
Outline_<>c__DisplayClass23_0__<RefreshRenderers>b__1
          (Outline___c__DisplayClass23_0_o *__this,System_String_o *a,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  bool_conflict bVar1;
  System_String_o *__this_01;
  
  __this_00 = (UnityEngine_Object_o *)(__this->fields).e;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_01,a,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Outline___c__DisplayClass30_0___ctor (Outline___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x3d698a0

void Outline_<>c__DisplayClass30_0___ctor
               (Outline___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass30_0$$<LoadSmoothNormals>b__2
// il2cpp: bool Outline___c__DisplayClass30_0___LoadSmoothNormals_b__2 (Outline___c__DisplayClass30_0_o* __this, System_String_o* a, const MethodInfo* method);
// 0x3d69b60

bool_conflict
Outline_<>c__DisplayClass30_0__<LoadSmoothNormals>b__2
          (Outline___c__DisplayClass30_0_o *__this,System_String_o *a,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  bool_conflict bVar1;
  System_String_o *__this_01;
  
  __this_00 = (UnityEngine_Object_o *)(__this->fields).e;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_01,a,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline.<>c__DisplayClass30_1$$.ctor
// il2cpp: void Outline___c__DisplayClass30_1___ctor (Outline___c__DisplayClass30_1_o* __this, const MethodInfo* method);
// 0x3d699f0

void Outline_<>c__DisplayClass30_1___ctor
               (Outline___c__DisplayClass30_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass30_1$$<LoadSmoothNormals>b__3
// il2cpp: bool Outline___c__DisplayClass30_1___LoadSmoothNormals_b__3 (Outline___c__DisplayClass30_1_o* __this, System_String_o* a, const MethodInfo* method);
// 0x3d69b90

bool_conflict
Outline_<>c__DisplayClass30_1__<LoadSmoothNormals>b__3
          (Outline___c__DisplayClass30_1_o *__this,System_String_o *a,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  bool_conflict bVar1;
  System_String_o *__this_01;
  
  __this_00 = (UnityEngine_Object_o *)(__this->fields).e;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_01,a,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$get_OutlineMode
// il2cpp: int32_t Outline__get_OutlineMode (Outline_o* __this, const MethodInfo* method);
// 0x3d66ff0

int32_t Outline__get_OutlineMode(Outline_o *__this,MethodInfo *method)

{
  return (__this->fields).outlineMode;
}


// Outline$$set_OutlineMode
// il2cpp: void Outline__set_OutlineMode (Outline_o* __this, int32_t value, const MethodInfo* method);
// 0x3d67000

void Outline__set_OutlineMode(Outline_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).outlineMode = value;
  *(undefined1 *)&(__this->fields).needsUpdate = 1;
  return;
}


// Outline$$get_OutlineColor
// il2cpp: UnityEngine_Color_o Outline__get_OutlineColor (Outline_o* __this, const MethodInfo* method);
// 0x3d67010

UnityEngine_Color_o Outline__get_OutlineColor(Outline_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields).outlineColor.fields;
}


// Outline$$set_OutlineColor
// il2cpp: void Outline__set_OutlineColor (Outline_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x3d67020

void Outline__set_OutlineColor(Outline_o *__this,UnityEngine_Color_o value,MethodInfo *method)

{
  (__this->fields).outlineColor.fields = value.fields;
  *(undefined1 *)&(__this->fields).needsUpdate = 1;
  return;
}


// Outline$$get_OutlineWidth
// il2cpp: float Outline__get_OutlineWidth (Outline_o* __this, const MethodInfo* method);
// 0x3d67030

float Outline__get_OutlineWidth(Outline_o *__this,MethodInfo *method)

{
  return (__this->fields).outlineWidth;
}


// Outline$$set_OutlineWidth
// il2cpp: void Outline__set_OutlineWidth (Outline_o* __this, float value, const MethodInfo* method);
// 0x3d67040

void Outline__set_OutlineWidth(Outline_o *__this,float value,MethodInfo *method)

{
  (__this->fields).outlineWidth = value;
  *(undefined1 *)&(__this->fields).needsUpdate = 1;
  return;
}


// Outline$$Awake
// il2cpp: void Outline__Awake (Outline_o* __this, const MethodInfo* method);
// 0x3d67050

void Outline__Awake(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_Object_array *source;
  System_Collections_Generic_HashSet_TSource__o *pSVar1;
  Il2CppObject *original;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *method_00;
  
  if (DAT_057025d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Renderer__ToHashSet_Render);
    il2cpp_init_method_metadata(&MethodInfo_Material_Instantiate_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Material_Load_Material);
    il2cpp_init_method_metadata(&"OutlineMaskAndFill (Instance)");
    il2cpp_init_method_metadata(&"Materials/OutlineMaskAndFill");
    DAT_057025d5 = '\x01';
  }
  source = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
  pSVar1 = System_Linq_Enumerable__ToHashSet<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_HashSet_1_UnityEngine_Renderer__ToHashSet_Render);
  (__this->fields).renderers = (System_Collections_Generic_HashSet_Renderer__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields).renderers,pSVar1);
  original = UnityEngine_Resources__Load<object>("Materials/OutlineMaskAndFill",MethodInfo_Material_Load_Material);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = (UnityEngine_Material_o *)UnityEngine_Object__Instantiate<object>(original,MethodInfo_Material_Instantiate_Material);
  (__this->fields).outlineMaskAndFillMaterial = pUVar2;
  il2cpp_runtime_glue(&(__this->fields).outlineMaskAndFillMaterial,pUVar2);
  __this_00 = (UnityEngine_Object_o *)(__this->fields).outlineMaskAndFillMaterial;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    method_00 = "OutlineMaskAndFill (Instance)";
    UnityEngine_Object__set_name(__this_00,(System_String_o *)"OutlineMaskAndFill (Instance)",(MethodInfo *)0x0);
    Outline__LoadSmoothNormals(__this,method_00);
    *(undefined1 *)&(__this->fields).needsUpdate = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$RefreshRenderers
// il2cpp: void Outline__RefreshRenderers (Outline_o* __this, System_Collections_Generic_List_string__o* namesToIgnore, const MethodInfo* method);
// 0x3d67a30

void Outline__RefreshRenderers
               (Outline_o *__this,System_Collections_Generic_List_string__o *namesToIgnore,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar3;
  System_Collections_Generic_List_Mesh__o *pSVar4;
  bool_conflict bVar5;
  System_Object_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  
  if (DAT_057025d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Renderer__ToHashSet_Render);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_UnityEngine_Renderer__Where_Render);
    il2cpp_init_method_metadata(&TypeInfo_Func_Renderer__bool);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RefreshRenderers_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_Outline);
    DAT_057025d6 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._namesToIgnore = namesToIgnore;
  il2cpp_runtime_glue(&(__this->fields)._namesToIgnore,namesToIgnore,method);
  if (*(int *)(TypeInfo_Outline + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_Outline + 0xb8) !=
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear
              ((System_Collections_Generic_HashSet_object__o *)
               **(undefined8 **)(TypeInfo_Outline + 0xb8),MethodInfo_Void_Clear);
    pSVar3 = (__this->fields).bakeValues;
    if (pSVar3 != (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).bakeKeys;
      if (pSVar4 != (System_Collections_Generic_List_Mesh__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar2 = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        pMVar6 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Behaviour__get_enabled
                          ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
        Outline__OnDisable(__this,pMVar6);
        source = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)__this,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_Renderer__bool);
        System_Func<object__bool>___ctor();
        source_00 = System_Linq_Enumerable__Where<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate
                               ,MethodInfo_IEnumerable_1_UnityEngine_Renderer__Where_Render);
        pMVar6 = (MethodInfo *)System_Linq_Enumerable__ToHashSet<object>(source_00,MethodInfo_HashSet_1_UnityEngine_Renderer__ToHashSet_Render);
        (__this->fields).renderers = (System_Collections_Generic_HashSet_Renderer__o *)pMVar6;
        il2cpp_runtime_glue(&(__this->fields).renderers);
        Outline__LoadSmoothNormals(__this,pMVar6);
        Outline__OnEnable(__this,pMVar6);
        *(undefined1 *)&(__this->fields).needsUpdate = 1;
        if ((char)bVar5 != '\0') {
          Outline__OnEnable(__this,pMVar6);
          return;
        }
        Outline__OnDisable(__this,pMVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$OnEnable
// il2cpp: void Outline__OnEnable (Outline_o* __this, const MethodInfo* method);
// 0x3d67cc0

void Outline__OnEnable(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Predicate_T__o *match;
  
  if (DAT_057025d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__OnEnable_b__24_0);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Renderer);
    DAT_057025d7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).renderers;
  match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Renderer);
  System_Predicate<object>___ctor();
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere(__this_00,match,MethodInfo_Int32_RemoveWhere);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$OnValidate
// il2cpp: void Outline__OnValidate (Outline_o* __this, const MethodInfo* method);
// 0x3d67d50

void Outline__OnValidate(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_Mesh__o *pSVar3;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar4;
  Outline_o *__this_00;
  UnityEngine_Mesh_array *pUVar5;
  Outline_ListVector3_array *pOVar6;
  long lVar7;
  bool_conflict bVar8;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Object_array *pSVar9;
  UnityEngine_Mesh_o *pUVar10;
  System_Collections_Generic_List_Vector3__o *pSVar11;
  Outline_ListVector3_o *__this_02;
  int iVar12;
  MethodInfo *method_00;
  Outline_o *__this_03;
  uint uVar13;
  
  if (DAT_057025d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057025d8 = '\x01';
  }
  *(undefined1 *)&(__this->fields).needsUpdate = 1;
  pSVar3 = (__this->fields).bakeKeys;
  if ((char)(__this->fields).precomputeOutline == '\0') {
    if (pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) goto LAB_03d67e2b;
    iVar12 = (pSVar3->fields)._size;
    if (iVar12 == 0) goto LAB_03d67dab;
LAB_03d67dca:
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < iVar12) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar12,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).bakeValues;
    if (pSVar4 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto LAB_03d67e2b;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
  }
  else {
    if (pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) goto LAB_03d67e2b;
LAB_03d67dab:
    pSVar4 = (__this->fields).bakeValues;
    if (pSVar4 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto LAB_03d67e2b;
    iVar12 = (pSVar3->fields)._size;
    if (iVar12 != (pSVar4->fields)._size) goto LAB_03d67dca;
  }
  if ((char)(__this->fields).precomputeOutline != '\0') {
    pSVar3 = (__this->fields).bakeKeys;
    if (pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) {
LAB_03d67e2b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSVar3->fields)._size == 0) {
      if (DAT_057025db == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
        il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Mesh);
        il2cpp_init_method_metadata(&TypeInfo_HashSet_Mesh);
        il2cpp_init_method_metadata(&TypeInfo_ListVector3);
        il2cpp_init_method_metadata(&MethodInfo_Void_Add);
        il2cpp_init_method_metadata(&MethodInfo_Void_Add);
        DAT_057025db = '\x01';
      }
      __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Mesh);
      System_Collections_Generic_HashSet<object>___ctor(__this_01,MethodInfo_HashSet_1_UnityEngine_Mesh);
      pSVar9 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)__this,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
      if (pSVar9 != (System_Object_array *)0x0) {
        iVar12 = (int)pSVar9->max_length;
        if (iVar12 < 1) {
          return;
        }
        uVar13 = 0;
        if (iVar12 != 0) {
          do {
            __this_00 = (Outline_o *)pSVar9->m_Items[(int)uVar13];
            if ((__this_00 == (Outline_o *)0x0) ||
               (pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                                    ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0),
               __this_01 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_03d6809f;
            bVar8 = System_Collections_Generic_HashSet<object>__Add
                              (__this_01,(Il2CppObject *)pUVar10,MethodInfo_Boolean_Add);
            if ((char)bVar8 != '\0') {
              __this_03 = __this_00;
              pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                                  ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
              pSVar11 = Outline__SmoothNormals(__this_03,pUVar10,method_00);
              pSVar3 = (__this->fields).bakeKeys;
              pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                                  ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
              lVar7 = MethodInfo_Void_Add;
              if (pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) goto LAB_03d6809f;
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (pSVar3->fields)._items;
              if (pUVar5 == (UnityEngine_Mesh_array *)0x0) goto LAB_03d6809f;
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = pUVar10;
                il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,
                           (Il2CppObject *)pUVar10,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              pSVar4 = (__this->fields).bakeValues;
              __this_02 = (Outline_ListVector3_o *)il2cpp_runtime_glue(TypeInfo_ListVector3);
              System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
              if (__this_02 == (Outline_ListVector3_o *)0x0) goto LAB_03d6809f;
              (__this_02->fields).data = pSVar11;
              il2cpp_runtime_glue(&__this_02->fields,pSVar11);
              lVar7 = MethodInfo_Void_Add;
              if (pSVar4 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0)
              goto LAB_03d6809f;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pOVar6 = (pSVar4->fields)._items;
              if (pOVar6 == (Outline_ListVector3_array *)0x0) goto LAB_03d6809f;
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pOVar6->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pOVar6->m_Items[(int)uVar2] = __this_02;
                il2cpp_runtime_glue(pOVar6->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar13 = uVar13 + 1;
            uVar2 = (uint)pSVar9->max_length;
            if ((int)uVar2 <= (int)uVar13) {
              return;
            }
          } while (uVar13 < uVar2);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03d6809f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Outline$$Update
// il2cpp: void Outline__Update (Outline_o* __this, const MethodInfo* method);
// 0x3d680b0

void Outline__Update(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  uint uVar2;
  UnityEngine_Material_o *pUVar3;
  float fVar4;
  
  if ((char)(__this->fields).needsUpdate == '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).needsUpdate = 0;
  if (DAT_057025de == '\0') {
    il2cpp_init_method_metadata(&"_ZTest");
    il2cpp_init_method_metadata(&"_OutlineWidth");
    il2cpp_init_method_metadata(&"_ZTestMask");
    il2cpp_init_method_metadata(&"_OutlineColor");
    il2cpp_init_method_metadata(&"_ZTest2");
    DAT_057025de = '\x01';
  }
  pUVar3 = (__this->fields).outlineMaskAndFillMaterial;
  if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
  UnityEngine_Material__SetColor
            (pUVar3,"_OutlineColor",(UnityEngine_Color_o)(__this->fields).outlineColor.fields,
             (MethodInfo *)0x0);
  uVar2 = (__this->fields).outlineMode;
  if (5 < uVar2) {
    return;
  }
  ppUVar1 = &(__this->fields).outlineMaskAndFillMaterial;
  switch(uVar2) {
  case 0:
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 8.0;
    goto LAB_03d682bf;
  case 1:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 4.0;
    break;
  case 2:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 5.0;
    break;
  case 3:
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 4.0;
LAB_03d682bf:
    UnityEngine_Material__SetFloat(pUVar3,"_ZTestMask",fVar4,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 8.0;
    break;
  case 4:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",4.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest",5.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 0.0;
    goto LAB_03d68327;
  case 5:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 5.0;
    goto LAB_03d68309;
  }
  UnityEngine_Material__SetFloat(pUVar3,"_ZTest",fVar4,(MethodInfo *)0x0);
  pUVar3 = *ppUVar1;
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    fVar4 = 1.0;
LAB_03d68309:
    UnityEngine_Material__SetFloat(pUVar3,"_ZTest2",fVar4,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
      fVar4 = (__this->fields).outlineWidth;
LAB_03d68327:
      UnityEngine_Material__SetFloat(pUVar3,"_OutlineWidth",fVar4,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03d68396:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$OnDisable
// il2cpp: void Outline__OnDisable (Outline_o* __this, const MethodInfo* method);
// 0x3d67c30

void Outline__OnDisable(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Predicate_T__o *match;
  
  if (DAT_057025d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__OnDisable_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Renderer);
    DAT_057025d9 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).renderers;
  match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Renderer);
  System_Predicate<object>___ctor();
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere(__this_00,match,MethodInfo_Int32_RemoveWhere);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$OnDestroy
// il2cpp: void Outline__OnDestroy (Outline_o* __this, const MethodInfo* method);
// 0x3d683a0

void Outline__OnDestroy(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (DAT_057025da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025da = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields).outlineMaskAndFillMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
  return;
}


// Outline$$Bake
// il2cpp: void Outline__Bake (Outline_o* __this, const MethodInfo* method);
// 0x3d67e30

void Outline__Bake(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Outline_o *__this_00;
  System_Collections_Generic_List_Mesh__o *__this_01;
  UnityEngine_Mesh_array *pUVar4;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_02;
  Outline_ListVector3_array *pOVar5;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_HashSet_object__o *__this_03;
  System_Object_array *pSVar8;
  UnityEngine_Mesh_o *pUVar9;
  System_Collections_Generic_List_Vector3__o *pSVar10;
  Outline_ListVector3_o *__this_04;
  MethodInfo *method_00;
  Outline_o *__this_05;
  uint uVar11;
  
  if (DAT_057025db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_ListVector3);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057025db = '\x01';
  }
  __this_03 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Mesh);
  System_Collections_Generic_HashSet<object>___ctor(__this_03,MethodInfo_HashSet_1_UnityEngine_Mesh);
  pSVar8 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
  if (pSVar8 != (System_Object_array *)0x0) {
    iVar2 = (int)pSVar8->max_length;
    if (iVar2 < 1) {
      return;
    }
    uVar11 = 0;
    if (iVar2 != 0) {
      do {
        __this_00 = (Outline_o *)pSVar8->m_Items[(int)uVar11];
        if ((__this_00 == (Outline_o *)0x0) ||
           (pUVar9 = UnityEngine_MeshFilter__get_sharedMesh
                               ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0),
           __this_03 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_03d6809f;
        bVar7 = System_Collections_Generic_HashSet<object>__Add
                          (__this_03,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Add);
        if ((char)bVar7 != '\0') {
          __this_05 = __this_00;
          pUVar9 = UnityEngine_MeshFilter__get_sharedMesh
                             ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
          pSVar10 = Outline__SmoothNormals(__this_05,pUVar9,method_00);
          __this_01 = (__this->fields).bakeKeys;
          pUVar9 = UnityEngine_MeshFilter__get_sharedMesh
                             ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          if (__this_01 == (System_Collections_Generic_List_Mesh__o *)0x0) goto LAB_03d6809f;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_01->fields)._items;
          if (pUVar4 == (UnityEngine_Mesh_array *)0x0) goto LAB_03d6809f;
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pUVar4->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            pUVar4->m_Items[(int)uVar3] = pUVar9;
            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar9
                       ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          __this_02 = (__this->fields).bakeValues;
          __this_04 = (Outline_ListVector3_o *)il2cpp_runtime_glue(TypeInfo_ListVector3);
          System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
          if (__this_04 == (Outline_ListVector3_o *)0x0) goto LAB_03d6809f;
          (__this_04->fields).data = pSVar10;
          il2cpp_runtime_glue(&__this_04->fields,pSVar10);
          lVar6 = MethodInfo_Void_Add;
          if (__this_02 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0)
          goto LAB_03d6809f;
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pOVar5 = (__this_02->fields)._items;
          if (pOVar5 == (Outline_ListVector3_array *)0x0) goto LAB_03d6809f;
          uVar3 = (__this_02->fields)._size;
          if (uVar3 < (uint)pOVar5->max_length) {
            (__this_02->fields)._size = uVar3 + 1;
            pOVar5->m_Items[(int)uVar3] = __this_04;
            il2cpp_runtime_glue(pOVar5->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)__this_04,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar11 = uVar11 + 1;
        uVar3 = (uint)pSVar8->max_length;
        if ((int)uVar3 <= (int)uVar11) {
          return;
        }
      } while (uVar11 < uVar3);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03d6809f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$LoadSmoothNormals
// il2cpp: void Outline__LoadSmoothNormals (Outline_o* __this, const MethodInfo* method);
// 0x3d67180

void Outline__LoadSmoothNormals(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
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
  UnityEngine_Mesh_o *__this_06;
  UnityEngine_Vector2_array *value;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  Outline_o *pOVar12;
  Il2CppMethodPointer pIVar13;
  _union_329995 _Var14;
  Il2CppMethodPointer pIVar15;
  Il2CppType *pIVar16;
  Il2CppObject *pIVar17;
  _union_329995 local_68;
  Il2CppType *pIStack_60;
  Outline_o *local_58;
  _union_329995 local_48;
  Il2CppType *pIStack_40;
  Outline_o *local_38;
  
  if (DAT_057025dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer___GetComponentsInChildren_Sk);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_MeshFilter__ToHashSet_Mesh);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_SkinnedMeshRenderer__ToHas);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_UnityEngine_SkinnedMeshR);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_UnityEngine_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&MethodInfo_Int32_IndexOf);
    il2cpp_init_method_metadata(&MethodInfo_Outline_ListVector3_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__LoadSmoothNormals_b__30_0);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__LoadSmoothNormals_b__30_1);
    il2cpp_init_method_metadata(&TypeInfo_Outline);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_MeshFilter);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_SkinnedMeshRenderer);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_057025dc = '\x01';
  }
  local_68.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Outline_o *)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  pIVar15 = (Il2CppMethodPointer)0x0;
  pIVar17 = (Il2CppObject *)0x0;
  pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
  pSVar5 = System_Linq_Enumerable__ToHashSet<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_MeshFilter__ToHashSet_Mesh);
  pSVar6 = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_MeshFilter);
  System_Predicate<object>___ctor();
  if (pSVar5 != (System_Collections_Generic_HashSet_TSource__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)pSVar5,pSVar6,MethodInfo_Int32_RemoveWhere);
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_HashSet_object__o *)pSVar5,MethodInfo_HashSet_1_T__Enumerator_UnityEngine_MeshFilter);
    local_58 = local_38;
    local_68 = local_48;
    pIStack_60 = pIStack_40;
    while( true ) {
      __this_02.fields._8_8_ = pIVar15;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar13;
      __this_02.fields._current = pIVar17;
      bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185890 *)&local_68);
      pOVar12 = local_58;
      if ((char)bVar2 == '\0') break;
      if (*(int *)(TypeInfo_Outline + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pOVar12 == (Outline_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)
               **(undefined8 **)(TypeInfo_Outline + 0xb8);
      pUVar7 = UnityEngine_MeshFilter__get_sharedMesh
                         ((UnityEngine_MeshFilter_o *)pOVar12,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = System_Collections_Generic_HashSet<object>__Add
                        (pSVar1,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Add);
      if ((char)bVar2 != '\0') {
        __this_00 = (__this->fields).bakeKeys;
        pUVar7 = UnityEngine_MeshFilter__get_sharedMesh
                           ((UnityEngine_MeshFilter_o *)pOVar12,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_List_Mesh__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar3 = System_Collections_Generic_List<object>__IndexOf
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)pUVar7,MethodInfo_Int32_IndexOf);
        if (iVar3 < 0) {
          pOVar9 = pOVar12;
          pUVar7 = UnityEngine_MeshFilter__get_sharedMesh
                             ((UnityEngine_MeshFilter_o *)pOVar12,(MethodInfo *)0x0);
          uvs = (Il2CppClass *)Outline__SmoothNormals(pOVar9,pUVar7,method_00);
        }
        else {
          __this_01 = (__this->fields).bakeValues;
          if (__this_01 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar8 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,iVar3,
                              MethodInfo_Outline_ListVector3_get_Item);
          if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uvs = pIVar8[1].klass;
        }
        pUVar7 = UnityEngine_MeshFilter__get_sharedMesh
                           ((UnityEngine_MeshFilter_o *)pOVar12,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Mesh_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pMVar11 = (MethodInfo *)0x0;
        UnityEngine_Mesh__SetUVs
                  (pUVar7,3,(System_Collections_Generic_List_Vector3__o *)uvs,(MethodInfo *)0x0);
        pOVar9 = (Outline_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pOVar12,MethodInfo_Renderer_GetComponent_Renderer);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pOVar9,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pUVar7 = UnityEngine_MeshFilter__get_sharedMesh
                             ((UnityEngine_MeshFilter_o *)pOVar12,(MethodInfo *)0x0);
          if (pOVar9 == (Outline_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar10 = UnityEngine_Renderer__get_sharedMaterials
                              ((UnityEngine_Renderer_o *)pOVar9,(MethodInfo *)0x0);
          Outline__CombineSubmeshes(pOVar9,pUVar7,pUVar10,pMVar11);
        }
      }
    }
    __this_03.fields._8_8_ = pIVar15;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar13;
    __this_03.fields._current = pIVar17;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185880 *)&local_68);
    pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_SkinnedMeshRenderer___GetComponentsInChildren_Sk);
    pSVar5 = System_Linq_Enumerable__ToHashSet<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_SkinnedMeshRenderer__ToHas);
    pSVar6 = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_SkinnedMeshRenderer);
    System_Predicate<object>___ctor();
    if (pSVar5 != (System_Collections_Generic_HashSet_TSource__o *)0x0) {
      System_Collections_Generic_HashSet<object>__RemoveWhere
                ((System_Collections_Generic_HashSet_object__o *)pSVar5,pSVar6,MethodInfo_Int32_RemoveWhere);
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,
                 (System_Collections_Generic_HashSet_object__o *)pSVar5,MethodInfo_HashSet_1_T__Enumerator_UnityEngine_SkinnedMeshR);
      _Var14 = local_48;
      pIVar16 = pIStack_40;
      while( true ) {
        do {
          pOVar12 = local_38;
          __this_04.fields._8_8_ = pIVar16;
          __this_04.fields._set = _Var14.genericMethod;
          __this_04.fields._current = (Il2CppObject *)pOVar12;
          bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_04,(MethodInfo_3185890 *)&stack0xffffffffffffff78);
          if ((char)bVar2 == '\0') {
            __this_05.fields._8_8_ = pIVar16;
            __this_05.fields._set = _Var14.genericMethod;
            __this_05.fields._current = (Il2CppObject *)pOVar12;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_05,(MethodInfo_3185880 *)&stack0xffffffffffffff78);
            return;
          }
          pOVar9 = pOVar12;
          if (*(int *)(TypeInfo_Outline + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pOVar12 == (Outline_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                   **(undefined8 **)(TypeInfo_Outline + 0xb8);
          pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                             ((UnityEngine_SkinnedMeshRenderer_o *)pOVar12,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar11 = (MethodInfo *)&MethodInfo_Boolean_Add;
          bVar2 = System_Collections_Generic_HashSet<object>__Add
                            (pSVar1,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Add);
          local_38 = pOVar9;
        } while ((char)bVar2 == '\0');
        pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pOVar12,(MethodInfo *)0x0);
        __this_06 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                              ((UnityEngine_SkinnedMeshRenderer_o *)pOVar12,(MethodInfo *)0x0);
        if (__this_06 == (UnityEngine_Mesh_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar3 = UnityEngine_Mesh__get_vertexCount(__this_06,(MethodInfo *)0x0);
        value = (UnityEngine_Vector2_array *)il2cpp_glue_02274930(TypeInfo_Vector2,iVar3);
        if (pUVar7 == (UnityEngine_Mesh_o *)0x0) break;
        UnityEngine_Mesh__set_uv4(pUVar7,value,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pOVar12,(MethodInfo *)0x0);
        pUVar10 = UnityEngine_Renderer__get_sharedMaterials
                            ((UnityEngine_Renderer_o *)pOVar12,(MethodInfo *)0x0);
        Outline__CombineSubmeshes(pOVar12,pUVar7,pUVar10,pMVar11);
        local_38 = pOVar9;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$SmoothNormals
// il2cpp: System_Collections_Generic_List_Vector3__o* Outline__SmoothNormals (Outline_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x3d68400

/* WARNING: Removing unreachable block (ram,0x03d69062) */
/* WARNING: Removing unreachable block (ram,0x03d69079) */
/* WARNING: Removing unreachable block (ram,0x03d6905d) */

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
  System_Collections_Generic_List_Vector3__o *__this_00;
  VirtualInvokeData *pVVar12;
  long *plVar13;
  undefined8 *puVar14;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  long *plVar15;
  int32_t index;
  int32_t index_00;
  long lVar16;
  long lVar17;
  float fVar18;
  float extraout_XMM0_Dc;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar21 [16];
  UnityEngine_Vector3_o UVar22;
  float local_64;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  
  if (DAT_057025dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_Count_KeyValuePair_2_UnityEngine_Vector3_S);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_UnityEngin);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_KeyValuePair_2_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_Vector3__int___Vector3);
    il2cpp_init_method_metadata(&TypeInfo_Func_Vector3__int__KeyValuePair_Vector3__int);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_KeyValuePair_Vector3__int);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_IGrouping_Vector3__KeyValuePair_Vect);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_KeyValuePair_Vector3__int);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_IGrouping_Vector3__KeyValuePair_Vect);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_UnityEngine_Vector3_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Vector3__SmoothNormals_b__31_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057025dd = '\x01';
  }
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    pUVar10 = UnityEngine_Mesh__get_vertices(mesh,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__int__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__int__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__int__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__int__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_Vector3__int__KeyValuePair_Vector3__int);
      System_Func<Vector3__int__KeyValuePair<Vector3__int>>___ctor();
      lVar16 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__int__TResult__o **)(lVar16 + 8) = selector;
      il2cpp_runtime_glue(lVar16 + 8,selector);
    }
    source = System_Linq_Enumerable__Select<Vector3__KeyValuePair<Vector3__int>>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar10,selector,
                        MethodInfo_IEnumerable_1_KeyValuePair_2_UnityEngine_Vector3);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_Vector3__int___Vector3);
      System_Func<KeyValuePair<Vector3__int>__Vector3>___ctor();
      lVar16 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar16 + 0x10) = keySelector;
      il2cpp_runtime_glue(lVar16 + 0x10,keySelector);
    }
    pSVar11 = System_Linq_Enumerable__GroupBy<KeyValuePair<Vector3__int>__Vector3>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                         MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_UnityEngin);
    pUVar10 = UnityEngine_Mesh__get_normals(mesh,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
    System_Collections_Generic_List<Vector3>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pUVar10,MethodInfo_List_1_UnityEngine_Vector3);
    if (pSVar11 != (System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *)0x0) {
      pSVar5 = pSVar11->klass;
      uVar1._0_1_ = (pSVar5->_2).rank;
      uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerable_IGrouping_Vector3__KeyValuePair_Vect) {
            pVVar12 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar16);
            goto LAB_03d68721;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar16);
      }
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar11,TypeInfo_IEnumerable_IGrouping_Vector3__KeyValuePair_Vect,0);
LAB_03d68721:
      plVar13 = (long *)(*pVVar12->methodPtr)(pSVar11,pVVar12->method);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03d6876c:
      do {
        lVar16 = *plVar13;
        if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
              puVar14 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 +
                        0x138);
              goto LAB_03d687d3;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
        }
        puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IEnumerator,0);
LAB_03d687d3:
        cVar8 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if (cVar8 == '\0') goto LAB_03d68eb3;
        lVar16 = *plVar13;
        if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_IGrouping_Vector3__KeyValuePair_Vect) {
              puVar14 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 +
                        0x138);
              goto LAB_03d68853;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
        }
        puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IEnumerator_IGrouping_Vector3__KeyValuePair_Vect,0);
LAB_03d68853:
        source_00 = (System_Collections_Generic_IEnumerable_TSource__o *)
                    (*(code *)*puVar14)(plVar13,puVar14[1]);
        iVar9 = System_Linq_Enumerable__Count<KeyValuePair<Vector3__int>>(source_00,MethodInfo_Int32_Count_KeyValuePair_2_UnityEngine_Vector3_S);
        if (iVar9 != 1) {
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata();
            DAT_056fdd15 = '\x01';
          }
          if (source_00 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          local_58 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
          local_64 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
          pSVar7 = source_00->klass;
          uVar2._0_1_ = (pSVar7->_2).rank;
          uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pSVar7->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerable_KeyValuePair_Vector3__int) {
                pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar6->offset + lVar16);
                goto LAB_03d68921;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar16);
          }
          pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(source_00,TypeInfo_IEnumerable_KeyValuePair_Vector3__int,0);
LAB_03d68921:
          plVar15 = (long *)(*pVVar12->methodPtr)(source_00,pVVar12->method);
          _fStack_50 = 0;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          do {
            lVar16 = *plVar15;
            if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
              lVar17 = 0;
              do {
                if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                  puVar14 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 +
                            0x138);
                  goto LAB_03d689a3;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IEnumerator,0);
LAB_03d689a3:
            cVar8 = (*(code *)*puVar14)(plVar15,puVar14[1]);
            if (cVar8 == '\0') goto LAB_03d68a60;
            lVar16 = *plVar15;
            if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
              lVar17 = 0;
              do {
                if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_KeyValuePair_Vector3__int) {
                  puVar14 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 +
                            0x138);
                  goto LAB_03d68a13;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IEnumerator_KeyValuePair_Vector3__int,0);
LAB_03d68a13:
            (*(code *)*puVar14)(plVar15,puVar14[1]);
            if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UVar22 = System_Collections_Generic_List<Vector3>__get_Item
                               (__this_00,index,MethodInfo_Vector3_get_Item);
            local_58._4_4_ = (float)local_58._4_4_ + UVar22.fields.y;
            local_58._0_4_ = (float)local_58._0_4_ + UVar22.fields.x;
            fStack_50 = fStack_50 + extraout_XMM0_Dc;
            fStack_4c = fStack_4c + extraout_XMM0_Dd;
            local_64 = local_64 + UVar22.fields.z;
          } while( true );
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03d68a60:
  if (plVar15 != (long *)0x0) {
    lVar16 = *plVar15;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar14 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto LAB_03d68acd;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IDisposable,0);
LAB_03d68acd:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar4 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  uVar19 = 0;
  uVar20 = 0;
  fVar18 = local_64 * local_64 +
           (float)local_58._4_4_ * (float)local_58._4_4_ +
           (float)local_58._0_4_ * (float)local_58._0_4_;
  if (fVar18 < 0.0) {
    fVar18 = sqrtf(fVar18);
    uVar19 = extraout_XMM0_Dc_00;
    uVar20 = extraout_XMM0_Dd_00;
  }
  else {
    fVar18 = SQRT(fVar18);
  }
  if (1e-05 < fVar18) {
    local_64 = local_64 / fVar18;
    auVar21._4_4_ = fVar18;
    auVar21._0_4_ = fVar18;
    auVar21._8_4_ = uVar19;
    auVar21._12_4_ = uVar20;
    auVar21 = divps(_local_58,auVar21);
    local_58 = auVar21._0_8_;
  }
  else {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
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
      if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerable_KeyValuePair_Vector3__int) {
        pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar6->offset + lVar16);
        goto LAB_03d68c41;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar16);
  }
  pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(source_00,TypeInfo_IEnumerable_KeyValuePair_Vector3__int,0);
LAB_03d68c41:
  plVar15 = (long *)(*pVVar12->methodPtr)(source_00,pVVar12->method);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar16 = *plVar15;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
          goto LAB_03d68cc3;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IEnumerator,0);
LAB_03d68cc3:
    cVar8 = (*(code *)*puVar14)(plVar15,puVar14[1]);
    if (cVar8 == '\0') break;
    lVar16 = *plVar15;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_KeyValuePair_Vector3__int) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
          goto LAB_03d68d33;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IEnumerator_KeyValuePair_Vector3__int,0);
LAB_03d68d33:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
    if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar22.fields.z = local_64;
    UVar22.fields.x = (float)local_58._0_4_;
    UVar22.fields.y = (float)local_58._4_4_;
    System_Collections_Generic_List<Vector3>__set_Item(__this_00,index_00,UVar22,MethodInfo_Void_set_Item);
  } while( true );
  if (plVar15 != (long *)0x0) {
    lVar16 = *plVar15;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar14 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto LAB_03d6875a;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IDisposable,0);
LAB_03d6875a:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
  }
  goto LAB_03d6876c;
LAB_03d68eb3:
  if (plVar13 != (long *)0x0) {
    lVar16 = *plVar13;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar14 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto LAB_03d68f1d;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable,0);
LAB_03d68f1d:
    (*(code *)*puVar14)(plVar13,puVar14[1]);
  }
  return __this_00;
}


// Outline$$CombineSubmeshes
// il2cpp: void Outline__CombineSubmeshes (Outline_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Material_array* materials, const MethodInfo* method);
// 0x3d69190

void Outline__CombineSubmeshes
               (Outline_o *__this,UnityEngine_Mesh_o *mesh,UnityEngine_Material_array *materials,
               MethodInfo *method)

{
  int32_t iVar1;
  System_Int32_array *triangles;
  
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
    if (iVar1 != 1) {
      iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
      if (materials == (UnityEngine_Material_array *)0x0) goto LAB_03d69210;
      if (iVar1 <= (int)materials->max_length) {
        iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
        UnityEngine_Mesh__set_subMeshCount(mesh,iVar1 + 1,(MethodInfo *)0x0);
        triangles = UnityEngine_Mesh__get_triangles(mesh,(MethodInfo *)0x0);
        iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetTriangles(mesh,triangles,iVar1 + -1,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_03d69210:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$UpdateMaterialProperties
// il2cpp: void Outline__UpdateMaterialProperties (Outline_o* __this, const MethodInfo* method);
// 0x3d680c0

void Outline__UpdateMaterialProperties(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  uint uVar2;
  UnityEngine_Material_o *pUVar3;
  float fVar4;
  
  if (DAT_057025de == '\0') {
    il2cpp_init_method_metadata(&"_ZTest");
    il2cpp_init_method_metadata(&"_OutlineWidth");
    il2cpp_init_method_metadata(&"_ZTestMask");
    il2cpp_init_method_metadata(&"_OutlineColor");
    il2cpp_init_method_metadata(&"_ZTest2");
    DAT_057025de = '\x01';
  }
  pUVar3 = (__this->fields).outlineMaskAndFillMaterial;
  if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
  UnityEngine_Material__SetColor
            (pUVar3,"_OutlineColor",(UnityEngine_Color_o)(__this->fields).outlineColor.fields,
             (MethodInfo *)0x0);
  uVar2 = (__this->fields).outlineMode;
  if (5 < uVar2) {
    return;
  }
  ppUVar1 = &(__this->fields).outlineMaskAndFillMaterial;
  switch(uVar2) {
  case 0:
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 8.0;
    goto LAB_03d682bf;
  case 1:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 4.0;
    break;
  case 2:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 5.0;
    break;
  case 3:
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 4.0;
LAB_03d682bf:
    UnityEngine_Material__SetFloat(pUVar3,"_ZTestMask",fVar4,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 8.0;
    break;
  case 4:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",4.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest",5.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest2",1.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 0.0;
    goto LAB_03d68327;
  case 5:
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTestMask",8.0,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    UnityEngine_Material__SetFloat(*ppUVar1,"_ZTest",4.0,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03d68396;
    fVar4 = 5.0;
    goto LAB_03d68309;
  }
  UnityEngine_Material__SetFloat(pUVar3,"_ZTest",fVar4,(MethodInfo *)0x0);
  pUVar3 = *ppUVar1;
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    fVar4 = 1.0;
LAB_03d68309:
    UnityEngine_Material__SetFloat(pUVar3,"_ZTest2",fVar4,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
      fVar4 = (__this->fields).outlineWidth;
LAB_03d68327:
      UnityEngine_Material__SetFloat(pUVar3,"_OutlineWidth",fVar4,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03d68396:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$.ctor
// il2cpp: void Outline___ctor (Outline_o* __this, const MethodInfo* method);
// 0x3d69220

void Outline___ctor(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  
  if (DAT_057025df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Outline_ListVector3);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_List_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_List_ListVector3);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057025df = '\x01';
  }
  (__this->fields).outlineColor.fields.r = 1.0;
  (__this->fields).outlineColor.fields.g = 1.0;
  (__this->fields).outlineColor.fields.b = 1.0;
  (__this->fields).outlineColor.fields.a = 1.0;
  (__this->fields).outlineWidth = 2.0;
  __this_00 = (System_Collections_Generic_List_Mesh__o *)il2cpp_runtime_glue(TypeInfo_List_Mesh);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Mesh);
  (__this->fields).bakeKeys = __this_00;
  il2cpp_runtime_glue(&(__this->fields).bakeKeys,__this_00);
  __this_01 = (System_Collections_Generic_List_Outline_ListVector3__o *)
              il2cpp_runtime_glue(TypeInfo_List_ListVector3);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Outline_ListVector3);
  (__this->fields).bakeValues = __this_01;
  il2cpp_runtime_glue(&(__this->fields).bakeValues,__this_01);
  __this_02 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
  (__this->fields)._namesToIgnore = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._namesToIgnore);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline$$.cctor
// il2cpp: void Outline___cctor (const MethodInfo* method);
// 0x3d69350

void Outline___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057025e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_Outline);
    DAT_057025e0 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Mesh);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_UnityEngine_Mesh);
  **(undefined8 **)(TypeInfo_Outline + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Outline + 0xb8),__this);
  return;
}


// Outline$$<RefreshRenderers>b__23_0
// il2cpp: bool Outline___RefreshRenderers_b__23_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x3d693d0

bool_conflict
Outline__<RefreshRenderers>b__23_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *source;
  uint uVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (DAT_057025e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Where_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RefreshRenderers_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass23_0);
    DAT_057025e1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass23_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)e;
    il2cpp_runtime_glue(__this_00 + 1,e);
    source = (__this->fields)._namesToIgnore;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
    System_Func<object__bool>___ctor();
    source_00 = System_Linq_Enumerable__Where<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                           MethodInfo_IEnumerable_1_System_String__Where_String);
    uVar1 = System_Linq_Enumerable__Any<object>(source_00,MethodInfo_Boolean_Any_String);
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$<OnEnable>b__24_0
// il2cpp: bool Outline___OnEnable_b__24_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x3d694d0

bool_conflict
Outline__<OnEnable>b__24_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Material_o *item;
  System_Object_array *pSVar2;
  long lVar3;
  bool_conflict bVar4;
  uint uVar5;
  UnityEngine_Material_array *pUVar6;
  System_Collections_Generic_List_TSource__o *__this_00;
  
  if (DAT_057025e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material__ToList_Material);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Material___ToArray);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025e2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (e != (UnityEngine_Renderer_o *)0x0) {
      pUVar6 = UnityEngine_Renderer__get_sharedMaterials(e,(MethodInfo *)0x0);
      __this_00 = System_Linq_Enumerable__ToList<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar6,
                             MethodInfo_List_1_UnityEngine_Material__ToList_Material);
      if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
        bVar4 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)(__this->fields).outlineMaskAndFillMaterial,MethodInfo_Boolean_Contains)
        ;
        lVar3 = MethodInfo_Void_Add;
        if ((char)bVar4 == '\0') {
          item = (__this->fields).outlineMaskAndFillMaterial;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this_00->fields)._items;
          if (pSVar2 == (System_Object_array *)0x0) goto LAB_03d69642;
          uVar5 = (__this_00->fields)._size;
          if (uVar5 < (uint)pSVar2->max_length) {
            (__this_00->fields)._size = uVar5 + 1;
            pSVar2->m_Items[(int)uVar5] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        pUVar6 = (UnityEngine_Material_array *)
                 System_Collections_Generic_List<object>__ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_Material___ToArray);
        UnityEngine_Renderer__set_materials(e,pUVar6,(MethodInfo *)0x0);
        goto LAB_03d69618;
      }
    }
LAB_03d69642:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03d69618:
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  return uVar5 ^ 1;
}


// Outline$$<OnDisable>b__27_0
// il2cpp: bool Outline___OnDisable_b__27_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x3d69650

bool_conflict
Outline__<OnDisable>b__27_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  UnityEngine_Material_array *pUVar3;
  System_Collections_Generic_List_TSource__o *__this_00;
  
  if (DAT_057025e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material__ToList_Material);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Material___ToArray);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025e3 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (e != (UnityEngine_Renderer_o *)0x0) {
      pUVar3 = UnityEngine_Renderer__get_sharedMaterials(e,(MethodInfo *)0x0);
      __this_00 = System_Linq_Enumerable__ToList<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar3,
                             MethodInfo_List_1_UnityEngine_Material__ToList_Material);
      if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)(__this->fields).outlineMaskAndFillMaterial,MethodInfo_Boolean_Remove);
        pUVar3 = (UnityEngine_Material_array *)
                 System_Collections_Generic_List<object>__ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_Material___ToArray);
        UnityEngine_Renderer__set_materials(e,pUVar3,(MethodInfo *)0x0);
        goto LAB_03d69727;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03d69727:
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  return uVar2 ^ 1;
}


// Outline$$<LoadSmoothNormals>b__30_0
// il2cpp: bool Outline___LoadSmoothNormals_b__30_0 (Outline_o* __this, UnityEngine_MeshFilter_o* e, const MethodInfo* method);
// 0x3d69760

bool_conflict
Outline__<LoadSmoothNormals>b__30_0
          (Outline_o *__this,UnityEngine_MeshFilter_o *e,MethodInfo *method)

{
  Il2CppClass *exists;
  System_Collections_Generic_List_string__o *source;
  bool_conflict bVar1;
  uint uVar2;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (DAT_057025e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Where_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__LoadSmoothNormals_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass30_0);
    DAT_057025e4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass30_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)e;
    il2cpp_runtime_glue(__this_00 + 1);
    exists = __this_00[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar2 = 0;
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      source = (__this->fields)._namesToIgnore;
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
      System_Func<object__bool>___ctor();
      source_00 = System_Linq_Enumerable__Where<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             MethodInfo_IEnumerable_1_System_String__Where_String);
      uVar2 = System_Linq_Enumerable__Any<object>(source_00,MethodInfo_Boolean_Any_String);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Outline$$<LoadSmoothNormals>b__30_1
// il2cpp: bool Outline___LoadSmoothNormals_b__30_1 (Outline_o* __this, UnityEngine_SkinnedMeshRenderer_o* e, const MethodInfo* method);
// 0x3d698b0

bool_conflict
Outline__<LoadSmoothNormals>b__30_1
          (Outline_o *__this,UnityEngine_SkinnedMeshRenderer_o *e,MethodInfo *method)

{
  Il2CppClass *exists;
  System_Collections_Generic_List_string__o *source;
  bool_conflict bVar1;
  uint uVar2;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (DAT_057025e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Where_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__LoadSmoothNormals_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass30_1);
    DAT_057025e5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass30_1);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)e;
    il2cpp_runtime_glue(__this_00 + 1);
    exists = __this_00[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar2 = 0;
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      source = (__this->fields)._namesToIgnore;
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
      System_Func<object__bool>___ctor();
      source_00 = System_Linq_Enumerable__Where<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             MethodInfo_IEnumerable_1_System_String__Where_String);
      uVar2 = System_Linq_Enumerable__Any<object>(source_00,MethodInfo_Boolean_Any_String);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


