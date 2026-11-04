// Type: Outline
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Outline.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/Outline.cs
// --------------------------------

// Outline.ListVector3$$.ctor
// il2cpp: void Outline_ListVector3___ctor (Outline_ListVector3_o* __this, const MethodInfo* method);
// 0x18054c890

void
Outline_ListVector3___ctor(Outline_ListVector3_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c$$.cctor
// il2cpp: void Outline___c___cctor (const MethodInfo* method);
// 0x181db1340

void Outline___c___cctor(MethodInfo *method)

{
  Outline___c_o *__this;
  
  if (Il2CppMethodInitialized_1843448c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c);
    Il2CppMethodInitialized_1843448c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Outline_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Outline_c->static_fields->__9,__this);
  return;
}


// Outline.<>c$$.ctor
// il2cpp: void Outline___c___ctor (Outline___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Outline___c___ctor(Outline___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c$$<SmoothNormals>b__47_0
// il2cpp: System_Collections_Generic_KeyValuePair_Vector3__int__o Outline___c___SmoothNormals_b__47_0 (Outline___c_o* __this, UnityEngine_Vector3_o vertex, int32_t index, const MethodInfo* method);
// 0x181db11c0

System_Collections_Generic_KeyValuePair_Vector3__int__o *
Outline___c___SmoothNormals_b__47_0
          (System_Collections_Generic_KeyValuePair_Vector3__int__o *__return_storage_ptr__,
          Outline___c_o *__this,UnityEngine_Vector3_o *vertex,int32_t index,MethodInfo *method)

{
  UnityEngine_Vector3Int_Fields local_18;
  
  if (Il2CppMethodInitialized_1843448c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_int_ctor);
    Il2CppMethodInitialized_1843448c6 = '\x01';
  }
  local_18.m_Z = (int32_t)(vertex->fields).z;
  (__return_storage_ptr__->fields).key.fields.x = 0.0;
  (__return_storage_ptr__->fields).key.fields.y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).key.fields.z = 0;
  local_18.m_X = (int32_t)(vertex->fields).x;
  local_18.m_Y = (int32_t)(vertex->fields).y;
  System_Collections_Generic_KeyValuePair_Vector3__int____ctor
            ((UnityEngine_Rendering_ProbeBrickIndex_Brick_o *)__return_storage_ptr__,
             (UnityEngine_Vector3Int_o *)&local_18,index,
             MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_int_ctor);
  return __return_storage_ptr__;
}


// Outline.<>c$$<SmoothNormals>b__47_1
// il2cpp: UnityEngine_Vector3_o Outline___c___SmoothNormals_b__47_1 (Outline___c_o* __this, System_Collections_Generic_KeyValuePair_Vector3__int__o pair, const MethodInfo* method);
// 0x181db1240

UnityEngine_Vector3_o *
Outline___c___SmoothNormals_b__47_1
          (UnityEngine_Vector3_o *__return_storage_ptr__,Outline___c_o *__this,
          System_Collections_Generic_KeyValuePair_Vector3__int__o *pair,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843448c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_int_get_Key);
    Il2CppMethodInitialized_1843448c7 = '\x01';
  }
  fVar1 = (pair->fields).key.fields.z;
  fVar2 = (pair->fields).key.fields.y;
  (__return_storage_ptr__->fields).x = (pair->fields).key.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Outline.<>c__DisplayClass39_0$$.ctor
// il2cpp: void Outline___c__DisplayClass39_0___ctor (Outline___c__DisplayClass39_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Outline___c__DisplayClass39_0___ctor(Outline___c__DisplayClass39_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass39_0$$<FindRenderers>b__1
// il2cpp: bool Outline___c__DisplayClass39_0___FindRenderers_b__1 (Outline___c__DisplayClass39_0_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181db1290

bool
Outline___c__DisplayClass39_0___FindRenderers_b__1(Outline___c__DisplayClass39_0_o* __this, System_String_o* name, MethodInfo* method)

{
  UnityEngine_Object_o *__this_00;
  bool bVar1;
  System_String_o *__this_01;
  
  __this_00 = (UnityEngine_Object_o *)(__this->fields).e;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_01,a,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Outline.<>c__DisplayClass46_0$$.ctor
// il2cpp: void Outline___c__DisplayClass46_0___ctor (Outline___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Outline___c__DisplayClass46_0___ctor(Outline___c__DisplayClass46_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass46_0$$<LoadSmoothNormals>b__2
// il2cpp: bool Outline___c__DisplayClass46_0___LoadSmoothNormals_b__2 (Outline___c__DisplayClass46_0_o* __this, System_String_o* a, const MethodInfo* method);
// 0x181db1290

bool
Outline___c__DisplayClass46_0___LoadSmoothNormals_b__2(Outline___c__DisplayClass46_0_o* __this, System_String_o* a, MethodInfo* method)

{
  UnityEngine_Object_o *__this_00;
  bool bVar1;
  System_String_o *__this_01;
  
  __this_00 = (UnityEngine_Object_o *)(__this->fields).e;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_01,a,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Outline.<>c__DisplayClass46_1$$.ctor
// il2cpp: void Outline___c__DisplayClass46_1___ctor (Outline___c__DisplayClass46_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Outline___c__DisplayClass46_1___ctor(Outline___c__DisplayClass46_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass46_1$$<LoadSmoothNormals>b__3
// il2cpp: bool Outline___c__DisplayClass46_1___LoadSmoothNormals_b__3 (Outline___c__DisplayClass46_1_o* __this, System_String_o* a, const MethodInfo* method);
// 0x181db1290

bool Outline___c__DisplayClass46_1___LoadSmoothNormals_b__3
               (Outline___c__DisplayClass46_1_o *__this,System_String_o *a,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  bool bVar1;
  System_String_o *__this_01;
  
  __this_00 = (UnityEngine_Object_o *)(__this->fields).e;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_01,a,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Outline$$get_OutlineMode
// il2cpp: int32_t Outline__get_OutlineMode (Outline_o* __this, const MethodInfo* method);
// 0x180a4c170

int32_t
Outline__get_OutlineMode(Outline_o* __this, MethodInfo* method)

{
  return (__this->fields).outlineMode;
}


// Outline$$set_OutlineMode
// il2cpp: void Outline__set_OutlineMode (Outline_o* __this, int32_t value, const MethodInfo* method);
// 0x181dab8f0

void Outline__set_OutlineMode(Outline_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).outlineMode = value;
  (__this->fields).needsUpdate = true;
  return;
}


// Outline$$get_OutlineColor
// il2cpp: UnityEngine_Color_o Outline__get_OutlineColor (Outline_o* __this, const MethodInfo* method);
// 0x181dab8d0

UnityEngine_Color_o *
Outline__get_OutlineColor(UnityEngine_Color_o *__return_storage_ptr__,Outline_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields).outlineColor.fields.g;
  fVar2 = (__this->fields).outlineColor.fields.b;
  fVar3 = (__this->fields).outlineColor.fields.a;
  (__return_storage_ptr__->fields).r = (__this->fields).outlineColor.fields.r;
  (__return_storage_ptr__->fields).g = fVar1;
  (__return_storage_ptr__->fields).b = fVar2;
  (__return_storage_ptr__->fields).a = fVar3;
  return __return_storage_ptr__;
}


// Outline$$set_OutlineColor
// il2cpp: void Outline__set_OutlineColor (Outline_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x181dab8e0

void Outline__set_OutlineColor(Outline_o *__this,UnityEngine_Color_o *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (value->fields).r;
  fVar2 = (value->fields).g;
  fVar3 = (value->fields).b;
  fVar4 = (value->fields).a;
  (__this->fields).needsUpdate = true;
  (__this->fields).outlineColor.fields.r = fVar1;
  (__this->fields).outlineColor.fields.g = fVar2;
  (__this->fields).outlineColor.fields.b = fVar3;
  (__this->fields).outlineColor.fields.a = fVar4;
  return;
}


// Outline$$get_OutlineWidth
// il2cpp: float Outline__get_OutlineWidth (Outline_o* __this, const MethodInfo* method);
// 0x1816ef890

float
Outline__get_OutlineWidth(Outline_o* __this, MethodInfo* method)

{
  return (__this->fields).outlineWidth;
}


// Outline$$set_OutlineWidth
// il2cpp: void Outline__set_OutlineWidth (Outline_o* __this, float value, const MethodInfo* method);
// 0x181dab900

void Outline__set_OutlineWidth(Outline_o *__this,float value,MethodInfo *method)

{
  (__this->fields).outlineWidth = value;
  (__this->fields).needsUpdate = true;
  return;
}


// Outline$$CreateQueueBlocks
// il2cpp: System_Collections_Generic_Stack_int__o* Outline__CreateQueueBlocks (const MethodInfo* method);
// 0x181da9340

System_Collections_Generic_Stack_int__o * Outline__CreateQueueBlocks(MethodInfo *method)

{
  System_Collections_Generic_Stack_BindingRestrictions_TestBuilder_AndNode__o *__this;
  int item;
  
  if (Il2CppMethodInitialized_1843448ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_ctor_40fea50);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Stack_int);
    Il2CppMethodInitialized_1843448ae = '\x01';
  }
  __this = (System_Collections_Generic_Stack_BindingRestrictions_TestBuilder_AndNode__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_int);
  System_Collections_Generic_Stack_int____ctor
            (__this,400,(MethodInfo_B95F40 *)MethodInfo_System_Collections_Generic_Stack_int_ctor_40fea50);
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  if (Il2CppMethodInitialized_1843448b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_1843448b0 = '\x01';
  }
  if (__this != (System_Collections_Generic_Stack_BindingRestrictions_TestBuilder_AndNode__o *)0x0) {
    System_Collections_Generic_Stack_int___Clear
              ((System_Collections_Generic_Stack_ProbeBrickPool_BrickChunkAlloc__o *)__this,
               (MethodInfo_CFB6A0 *)MethodInfo_System_Collections_Generic_Stack_int_Clear);
    item = 399;
    do {
      System_Collections_Generic_Stack_int___Push
                ((System_Collections_Generic_Stack_T__o *)__this,item,
                 (MethodInfo_CFD450 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
      item = item + -1;
    } while (-1 < item);
    return (System_Collections_Generic_Stack_int__o *)__this;
  }
  ThrowNullReferenceException();
}


// Outline$$ResetQueueBlocks
// il2cpp: void Outline__ResetQueueBlocks (const MethodInfo* method);
// 0x181daa300

void Outline__ResetQueueBlocks(MethodInfo *method)

{
  System_Collections_Generic_Stack_ProbeBrickPool_BrickChunkAlloc__o *__this;
  int item;
  
  if (Il2CppMethodInitialized_1843448af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    Il2CppMethodInitialized_1843448af = '\x01';
  }
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  __this = (System_Collections_Generic_Stack_ProbeBrickPool_BrickChunkAlloc__o *)
           TypeInfo_Outline->static_fields->freeQueueBlocks;
  if (Il2CppMethodInitialized_1843448b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_1843448b0 = '\x01';
  }
  if (__this != (System_Collections_Generic_Stack_ProbeBrickPool_BrickChunkAlloc__o *)0x0) {
    System_Collections_Generic_Stack_ProbeBrickPool_BrickChunkAlloc___Clear
              (__this,(MethodInfo_CFB6A0 *)MethodInfo_System_Collections_Generic_Stack_int_Clear);
    item = 399;
    do {
      System_Collections_Generic_Stack_Int32Enum___Push
                ((System_Collections_Generic_Stack_T__o *)__this,item,
                 (MethodInfo_CFD450 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
      item = item + -1;
    } while (-1 < item);
    return;
  }
  ThrowNullReferenceException();
}


// Outline$$FillQueueBlocks
// il2cpp: void Outline__FillQueueBlocks (System_Collections_Generic_Stack_int__o* blocks, const MethodInfo* method);
// 0x181da9430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da947f: nop 

void Outline__FillQueueBlocks(System_Collections_Generic_Stack_int__o *blocks,MethodInfo *method)

{
  int item;
  
  if (Il2CppMethodInitialized_1843448b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_1843448b0 = '\x01';
  }
  if (blocks != (System_Collections_Generic_Stack_int__o *)0x0) {
    System_Collections_Generic_Stack_ProbeBrickPool_BrickChunkAlloc___Clear
              ((System_Collections_Generic_Stack_ProbeBrickPool_BrickChunkAlloc__o *)blocks,
               (MethodInfo_CFB6A0 *)MethodInfo_System_Collections_Generic_Stack_int_Clear);
    item = 399;
    do {
      System_Collections_Generic_Stack_Int32Enum___Push
                ((System_Collections_Generic_Stack_T__o *)blocks,item,
                 (MethodInfo_CFD450 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
      item = item + -1;
    } while (-1 < item);
    return;
  }
  ThrowNullReferenceException();
}


// Outline$$Awake
// il2cpp: void Outline__Awake (Outline_o* __this, const MethodInfo* method);
// 0x181da8c80

void Outline__Awake(Outline_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Stack_int__o *pSVar2;
  System_Collections_Generic_Stack_TextureId__o *__this_00;
  UnityEngine_UIElements_TextureId_o UVar3;
  System_Collections_Generic_HashSet_Renderer__o *value;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Material_array *value_00;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_1843448b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Pop);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&"Mask");
    il2cpp_codegen_initialize_runtime_metadata(&"FillLighten");
    il2cpp_codegen_initialize_runtime_metadata(&"Reset");
    il2cpp_codegen_initialize_runtime_metadata(&"Fill");
    Il2CppMethodInitialized_1843448b1 = '\x01';
  }
  value = Outline__FindRenderers(__this,(MethodInfo *)0x0);
  (__this->fields).renderers = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).renderers,value);
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  pSVar2 = TypeInfo_Outline->static_fields->freeQueueBlocks;
  if (pSVar2 != (System_Collections_Generic_Stack_int__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (__this->fields).ownsQueueBlock = 0 < iVar1;
    if (iVar1 < 1) {
      UVar3.fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
    }
    else {
      if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
      }
      __this_00 = (System_Collections_Generic_Stack_TextureId__o *)
                  TypeInfo_Outline->static_fields->freeQueueBlocks;
      if (__this_00 == (System_Collections_Generic_Stack_TextureId__o *)0x0) goto label_181da8f82;
      UVar3 = System_Collections_Generic_Stack_TextureId___Pop
                        (__this_00,(MethodInfo_CFC6A0 *)MethodInfo_System_Collections_Generic_Stack_int_Pop);
    }
    (__this->fields).queueBlock = (int32_t)UVar3.fields.m_Index;
    pUVar4 = Outline__CreateOutlineMaterial(__this,"Mask",0,(MethodInfo *)0x0);
    (__this->fields).outlineMaskMaterial = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).outlineMaskMaterial,pUVar4);
    pUVar4 = Outline__CreateOutlineMaterial(__this,"Fill",1,(MethodInfo *)0x0);
    (__this->fields).outlineFillMaterial = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).outlineFillMaterial,pUVar4);
    pUVar4 = Outline__CreateOutlineMaterial(__this,"FillLighten",2,(MethodInfo *)0x0);
    (__this->fields).outlineFillLightenMaterial = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).outlineFillLightenMaterial,pUVar4);
    pUVar4 = Outline__CreateOutlineMaterial(__this,"Reset",3,(MethodInfo *)0x0);
    (__this->fields).outlineResetMaterial = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).outlineResetMaterial,pUVar4);
    value_00 = (UnityEngine_Material_array *)SZArrayNew(TypeInfo_UnityEngine_Material_array,4);
    if (value_00 != (UnityEngine_Material_array *)0x0) {
      pUVar4 = (__this->fields).outlineMaskMaterial;
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar4,(((value_00->obj).klass)->_1).element_class);
        if (pIVar5 == (Il2CppObject *)0x0) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
      }
      if ((int)value_00->max_length != 0) {
        value_00->m_Items[0] = pUVar4;
        Il2CppCodeGenWriteBarrier(value_00->m_Items,pUVar4);
        pUVar4 = (__this->fields).outlineFillMaterial;
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar4,(((value_00->obj).klass)->_1).element_class)
          ;
          if (pIVar5 == (Il2CppObject *)0x0) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)value_00->max_length) {
          value_00->m_Items[1] = pUVar4;
          Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,pUVar4);
          pUVar4 = (__this->fields).outlineFillLightenMaterial;
          if (pUVar4 != (UnityEngine_Material_o *)0x0) {
            pIVar5 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pUVar4,(((value_00->obj).klass)->_1).element_class);
            if (pIVar5 == (Il2CppObject *)0x0) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)value_00->max_length) {
            value_00->m_Items[2] = pUVar4;
            Il2CppCodeGenWriteBarrier(value_00->m_Items + 2,pUVar4);
            pUVar4 = (__this->fields).outlineResetMaterial;
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              pIVar5 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pUVar4,(((value_00->obj).klass)->_1).element_class);
              if (pIVar5 == (Il2CppObject *)0x0) {
                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
              }
            }
            if (3 < (uint)value_00->max_length) {
              value_00->m_Items[3] = pUVar4;
              Il2CppCodeGenWriteBarrier(value_00->m_Items + 3,pUVar4);
              (__this->fields).outlineMaterials = value_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields).outlineMaterials,value_00);
              Outline__LoadSmoothNormals(__this,(MethodInfo *)0x0);
              (__this->fields).needsUpdate = true;
              return;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_181da8f82:
  ThrowNullReferenceException();
}


// Outline$$CreateOutlineMaterial
// il2cpp: UnityEngine_Material_o* Outline__CreateOutlineMaterial (Outline_o* __this, System_String_o* stage, int32_t stageOffset, const MethodInfo* method);
// 0x181da9240

UnityEngine_Material_o *
Outline__CreateOutlineMaterial
          (Outline_o *__this,System_String_o *stage,int32_t stageOffset,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_1843448b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/OutlineMaskAndFill_");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineMaskAndFill");
    il2cpp_codegen_initialize_runtime_metadata(&" (Instance)");
    Il2CppMethodInitialized_1843448b2 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50("Shaders/OutlineMaskAndFill_",stage,(MethodInfo *)0x0);
  shader = UnityEngine_Resources__Load_object_
                     (pSVar1,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Shader);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70("OutlineMaskAndFill",stage," (Instance)",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_00,pSVar1,(MethodInfo *)0x0);
    UnityEngine_Material__set_renderQueue
              (__this_00,(__this->fields).queueBlock * 4 + 0xc26 + stageOffset,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Outline$$RefreshRenderers
// il2cpp: void Outline__RefreshRenderers (Outline_o* __this, System_Collections_Generic_List_string__o* namesToIgnore, const MethodInfo* method);
// 0x181daa180

void Outline__RefreshRenderers
               (Outline_o *__this,System_Collections_Generic_List_string__o *namesToIgnore,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar3;
  System_Collections_Generic_List_Mesh__o *pSVar4;
  bool bVar5;
  System_Collections_Generic_HashSet_Renderer__o *value;
  
  if (Il2CppMethodInitialized_1843448b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    Il2CppMethodInitialized_1843448b3 = '\x01';
  }
  (__this->fields)._namesToIgnore = namesToIgnore;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._namesToIgnore,namesToIgnore);
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
              TypeInfo_Outline->static_fields->registeredMeshes;
  if (__this_00 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
              (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Clear);
    pSVar3 = (__this->fields).bakeValues;
    if (pSVar3 != (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) {
      iVar2 = (pSVar3->fields)._size;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).bakeKeys;
      if (pSVar4 != (System_Collections_Generic_List_Mesh__o *)0x0) {
        iVar2 = (pSVar4->fields)._size;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar4->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        bVar5 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
        Outline__OnDisable(__this,(MethodInfo *)0x0);
        value = Outline__FindRenderers(__this,(MethodInfo *)0x0);
        (__this->fields).renderers = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).renderers,value);
        Outline__LoadSmoothNormals(__this,(MethodInfo *)0x0);
        Outline__OnEnable(__this,(MethodInfo *)0x0);
        (__this->fields).needsUpdate = true;
        if (!bVar5) {
          Outline__OnDisable(__this,(MethodInfo *)0x0);
          return;
        }
        Outline__OnEnable(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Outline$$FindRenderers
// il2cpp: System_Collections_Generic_HashSet_Renderer__o* Outline__FindRenderers (Outline_o* __this, const MethodInfo* method);
// 0x181da94b0

System_Collections_Generic_HashSet_Renderer__o * Outline__FindRenderers(Outline_o *__this,MethodInfo *method)

{
  System_Object_array *source;
  System_Func_Renderer__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_HashSet_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToHashSet_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_FindRenderers_b__39_0);
    Il2CppMethodInitialized_1843448b4 = '\x01';
  }
  source = UnityEngine_Component__GetComponentsInChildren_object__665370
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Outline_FindRenderers_b__39_0,(MethodInfo_B61EB0 *)0x0);
  source_00 = System_Linq_Enumerable__Where_float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Renderer);
  pSVar1 = System_Linq_Enumerable__ToHashSet_object_
                     (source_00,(MethodInfo_6C93E0 *)MethodInfo_System_Linq_Enumerable_ToHashSet_Renderer);
  return (System_Collections_Generic_HashSet_Renderer__o *)pSVar1;
}


// Outline$$OnEnable
// il2cpp: void Outline__OnEnable (Outline_o* __this, const MethodInfo* method);
// 0x181da9e00

void Outline__OnEnable(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_1843448b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Renderer_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_OnEnable_b__40_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Renderer);
    Il2CppMethodInitialized_1843448b5 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).renderers;
  match = (System_Predicate_T__o *)
          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Renderer);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Outline_OnEnable_b__40_0,(MethodInfo_B61EB0 *)0x0);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              (__this_00,match,
               (MethodInfo_1766120 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_RemoveWhere);
    return;
  }
  ThrowNullReferenceException();
}


// Outline$$OnValidate
// il2cpp: void Outline__OnValidate (Outline_o* __this, const MethodInfo* method);
// 0x181da9ea0

void Outline__OnValidate(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_Mesh__o *pSVar3;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar4;
  UnityEngine_MeshFilter_o *__this_00;
  bool bVar5;
  System_Collections_Generic_HashSet_Mesh__o *__this_01;
  System_Object_array *pSVar6;
  UnityEngine_Mesh_o *pUVar7;
  System_Collections_Generic_List_Vector3__o *value;
  Outline_ListVector3_o *__this_02;
  uint uVar8;
  
  if (Il2CppMethodInitialized_1843448b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_get_Count);
    Il2CppMethodInitialized_1843448b6 = '\x01';
  }
  (__this->fields).needsUpdate = true;
  if ((__this->fields).precomputeOutline == false) {
    pSVar3 = (__this->fields).bakeKeys;
    if (pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_181daa16c;
    if ((pSVar3->fields)._size == 0) goto label_181da9f24;
label_181da9f46:
    pSVar3 = (__this->fields).bakeKeys;
    if (pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_181daa16c;
    iVar2 = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).bakeValues;
    if (pSVar4 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto label_181daa16c;
    iVar2 = (pSVar4->fields)._size;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar4->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
  }
  else {
label_181da9f24:
    pSVar3 = (__this->fields).bakeKeys;
    if ((pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) ||
       (pSVar4 = (__this->fields).bakeValues,
       pSVar4 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0)) goto label_181daa16c;
    if ((pSVar3->fields)._size != (pSVar4->fields)._size) goto label_181da9f46;
  }
  if ((__this->fields).precomputeOutline != false) {
    pSVar3 = (__this->fields).bakeKeys;
    if (pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) {
label_181daa16c:
      ThrowNullReferenceException();
    }
    if ((pSVar3->fields)._size == 0) {
      if (Il2CppMethodInitialized_1843448b9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Mesh);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_ListVector3);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Add);
        Il2CppMethodInitialized_1843448b9 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Mesh);
      System_Collections_Generic_HashSet_object____ctor
                ((System_Collections_Generic_HashSet_object__o *)__this_01,
                 (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
      pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__665370
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_665370 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter);
      if (pSVar6 == (System_Object_array *)0x0) goto label_181daa16c;
      for (uVar8 = 0; (int)uVar8 < (int)pSVar6->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pSVar6->max_length <= uVar8) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_MeshFilter_o *)pSVar6->m_Items[(int)uVar8];
        if (__this_00 == (UnityEngine_MeshFilter_o *)0x0) goto label_181daa16c;
        pUVar7 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_HashSet_Mesh__o *)0x0) goto label_181daa16c;
        bVar5 = System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)pUVar7,
                           (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
        if (bVar5) {
          pUVar7 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
          value = Outline__SmoothNormals(__this,pUVar7,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).bakeKeys;
          pUVar7 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
          if (pSVar3 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_181daa16c;
          il2cpp_runtime_helper_180012890(pSVar3,pUVar7,MethodInfo_System_Collections_Generic_List_Mesh_Add);
          pSVar4 = (__this->fields).bakeValues;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_ListVector3);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0
                    );
          if (__this_02 == (Outline_ListVector3_o *)0x0) goto label_181daa16c;
          (__this_02->fields).data = value;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).data,value);
          if (pSVar4 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto label_181daa16c;
          il2cpp_runtime_helper_180012890(pSVar4,__this_02,MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Add);
        }
      }
    }
  }
  return;
}


// Outline$$Update
// il2cpp: void Outline__Update (Outline_o* __this, const MethodInfo* method);
// 0x181dab3f0

void Outline__Update(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  int32_t fillLightenZTest;
  bool bVar2;
  float width;
  UnityEngine_Vector4_Fields local_18;
  
  if ((__this->fields).needsUpdate == false) {
    return;
  }
  bVar2 = Il2CppMethodInitialized_1843448bc == '\0';
  (__this->fields).needsUpdate = false;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&"_OutlineColor");
    Il2CppMethodInitialized_1843448bc = '\x01';
  }
  pUVar1 = (__this->fields).outlineFillMaterial;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    local_18.x = (__this->fields).outlineColor.fields.r;
    local_18.y = (__this->fields).outlineColor.fields.g;
    local_18.z = (__this->fields).outlineColor.fields.b;
    local_18.w = (__this->fields).outlineColor.fields.a;
    UnityEngine_Material__SetVector
              (pUVar1,"_OutlineColor",(UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).outlineFillLightenMaterial;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      local_18.x = (__this->fields).outlineColor.fields.r;
      local_18.y = (__this->fields).outlineColor.fields.g;
      local_18.z = (__this->fields).outlineColor.fields.b;
      local_18.w = (__this->fields).outlineColor.fields.a;
      UnityEngine_Material__SetVector
                (pUVar1,"_OutlineColor",(UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
      switch((__this->fields).outlineMode) {
      case 0:
        Outline__ApplyOutlineState(__this,8,8,1,(__this->fields).outlineWidth,(MethodInfo *)0x0);
        return;
      case 1:
        width = (__this->fields).outlineWidth;
        fillLightenZTest = 1;
        break;
      case 2:
        Outline__ApplyOutlineState(__this,8,5,1,(__this->fields).outlineWidth,(MethodInfo *)0x0);
        return;
      case 3:
        Outline__ApplyOutlineState(__this,4,8,1,(__this->fields).outlineWidth,(MethodInfo *)0x0);
        return;
      case 4:
        Outline__ApplyOutlineState(__this,4,5,1,0.0,(MethodInfo *)0x0);
        return;
      case 5:
        width = (__this->fields).outlineWidth;
        fillLightenZTest = 5;
        break;
      default:
        return;
      }
      Outline__ApplyOutlineState(__this,8,4,fillLightenZTest,width,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Outline$$OnDisable
// il2cpp: void Outline__OnDisable (Outline_o* __this, const MethodInfo* method);
// 0x181da9d60

void Outline__OnDisable(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_1843448b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Renderer_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_OnDisable_b__43_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Renderer);
    Il2CppMethodInitialized_1843448b7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).renderers;
  match = (System_Predicate_T__o *)
          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Renderer);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Outline_OnDisable_b__43_0,(MethodInfo_B61EB0 *)0x0);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              (__this_00,match,
               (MethodInfo_1766120 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_RemoveWhere);
    return;
  }
  ThrowNullReferenceException();
}


// Outline$$OnDestroy
// il2cpp: void Outline__OnDestroy (Outline_o* __this, const MethodInfo* method);
// 0x181da9c50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da9cac: nop dword ptr [rax]

void Outline__OnDestroy(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_array *pUVar1;
  UnityEngine_Material_o *obj;
  System_Collections_Generic_Stack_int__o *__this_00;
  uint uVar2;
  
  if (Il2CppMethodInitialized_1843448b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_1843448b8 = '\x01';
  }
  pUVar1 = (__this->fields).outlineMaterials;
  if (pUVar1 != (UnityEngine_Material_array *)0x0) {
    for (uVar2 = 0; (int)uVar2 < (int)pUVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pUVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      obj = pUVar1->m_Items[(int)uVar2];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    }
    if ((__this->fields).ownsQueueBlock != false) {
      (__this->fields).ownsQueueBlock = false;
      if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
      }
      __this_00 = TypeInfo_Outline->static_fields->freeQueueBlocks;
      if (__this_00 == (System_Collections_Generic_Stack_int__o *)0x0) goto label_181da9d51;
      System_Collections_Generic_Stack_Int32Enum___Push
                ((System_Collections_Generic_Stack_T__o *)__this_00,(__this->fields).queueBlock,
                 (MethodInfo_CFD450 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
    }
    return;
  }
label_181da9d51:
  ThrowNullReferenceException();
}


// Outline$$Bake
// il2cpp: void Outline__Bake (Outline_o* __this, const MethodInfo* method);
// 0x181da8fd0

void Outline__Bake(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_MeshFilter_o *__this_00;
  System_Collections_Generic_List_Mesh__o *pSVar1;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_HashSet_Mesh__o *__this_01;
  System_Object_array *pSVar4;
  UnityEngine_Mesh_o *pUVar5;
  System_Collections_Generic_List_Vector3__o *value;
  Outline_ListVector3_o *__this_02;
  uint uVar6;
  
  if (Il2CppMethodInitialized_1843448b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_ListVector3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Add);
    Il2CppMethodInitialized_1843448b9 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Mesh);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
  pSVar4 = UnityEngine_Component__GetComponentsInChildren_object__665370
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter
                     );
  if (pSVar4 != (System_Object_array *)0x0) {
    uVar6 = 0;
    do {
      if ((int)pSVar4->max_length <= (int)uVar6) {
        return;
      }
      if ((uint)pSVar4->max_length <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_MeshFilter_o *)pSVar4->m_Items[(int)uVar6];
      if (__this_00 == (UnityEngine_MeshFilter_o *)0x0) break;
      pUVar5 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_HashSet_Mesh__o *)0x0) break;
      bVar3 = System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)pUVar5,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
      if (bVar3) {
        pUVar5 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
        value = Outline__SmoothNormals(__this,pUVar5,(MethodInfo *)0x0);
        pSVar1 = (__this->fields).bakeKeys;
        pUVar5 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_List_Mesh__o *)0x0) break;
        il2cpp_runtime_helper_180012890(pSVar1,pUVar5,MethodInfo_System_Collections_Generic_List_Mesh_Add);
        pSVar2 = (__this->fields).bakeValues;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_ListVector3);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0);
        if (__this_02 == (Outline_ListVector3_o *)0x0) break;
        (__this_02->fields).data = value;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).data,value);
        if (pSVar2 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) break;
        il2cpp_runtime_helper_180012890(pSVar2,__this_02,MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Add);
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Outline$$LoadSmoothNormals
// il2cpp: void Outline__LoadSmoothNormals (Outline_o* __this, const MethodInfo* method);
// 0x181da9580
// eh: try 0x181da9790..0x181da9c40 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da978d: nop dword ptr [rax]
// asm:   0x181da998f: mov rdx, qword ptr [rip + 0x22e3ff2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose
// asm:   0x181da9996: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181da999b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181da99a0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181da99a5: test rcx, rcx
// asm:   0x181da99a8: jne 0x181da9c1b
// asm:   0x181da99ae: mov r14, qword ptr [rsp + 0xb0]
// asm:   0x181da9bc4: mov rdx, qword ptr [rip + 0x22ed02d]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_Dispose
// asm:   0x181da9bcb: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181da9bd0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181da9bd5: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181da9bda: test rcx, rcx
// asm:   0x181da9bdd: jne 0x181da9c40
// asm:   0x181da9c1b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181da9c40: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Outline__LoadSmoothNormals(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  UnityEngine_MeshFilter_o *pUVar2;
  bool bVar3;
  int32_t iVar4;
  uint32_t length;
  System_Object_array *pSVar5;
  System_Collections_Generic_HashSet_TSource__o *pSVar6;
  System_Predicate_T__o *pSVar7;
  UnityEngine_Mesh_o *pUVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *uvs;
  UnityEngine_Object_o *x;
  UnityEngine_Material_array *pUVar10;
  System_Int32_array *pSVar11;
  UnityEngine_Mesh_o *__this_02;
  UnityEngine_Vector2_array *value;
  undefined1 local_78 [16];
  UnityEngine_MeshFilter_o *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  UnityEngine_MeshFilter_o *local_50;
  undefined1 local_48 [8];
  uint64_t uStack_40;
  UnityEngine_MeshFilter_o *local_38;
  
  if (Il2CppMethodInitialized_1843448ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToHashSet_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToHashSet_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SkinnedMeshRenderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MeshFilter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SkinnedMeshRenderer_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MeshFilter_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_LoadSmoothNormals_b__46_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_LoadSmoothNormals_b__46_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    Il2CppMethodInitialized_1843448ba = '\x01';
  }
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (UnityEngine_MeshFilter_o *)0x0;
  local_48 = (undefined1  [8])0x0;
  uStack_40 = 0;
  local_38 = (UnityEngine_MeshFilter_o *)0x0;
  pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__665370
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter
                     );
  pSVar6 = System_Linq_Enumerable__ToHashSet_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                      (MethodInfo_6C93E0 *)MethodInfo_System_Linq_Enumerable_ToHashSet_MeshFilter);
  pSVar7 = (System_Predicate_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MeshFilter);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)pSVar7,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Outline_LoadSmoothNormals_b__46_0,(MethodInfo_B61EB0 *)0x0);
  if (pSVar6 != (System_Collections_Generic_HashSet_TSource__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)pSVar6,pSVar7,
               (MethodInfo_1766120 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_RemoveWhere);
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
               (System_Collections_Generic_HashSet_Vector2Int__o *)pSVar6,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_GetEnumerator);
    local_60 = (undefined1  [8])local_78._0_8_;
    pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
    local_50 = local_68;
    local_78._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_MoveNext);
      pUVar2 = local_50;
      if (!bVar3) break;
      if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
      }
      if (pUVar2 == (UnityEngine_MeshFilter_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_Outline->static_fields->registeredMeshes;
      pUVar8 = UnityEngine_MeshFilter__get_sharedMesh(pUVar2,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = System_Collections_Generic_HashSet_object___Add
                        (pSVar1,(Il2CppObject *)pUVar8,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
      if (bVar3) {
        __this_00 = (__this->fields).bakeKeys;
        pUVar8 = UnityEngine_MeshFilter__get_sharedMesh(pUVar2,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_List_Mesh__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar4 = System_Collections_Generic_List_object___IndexOf
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar8,
                           (MethodInfo_942EC0 *)MethodInfo_System_Collections_Generic_List_Mesh_IndexOf);
        if (iVar4 < 0) {
          pUVar8 = UnityEngine_MeshFilter__get_sharedMesh(pUVar2,(MethodInfo *)0x0);
          uvs = (Il2CppClass *)Outline__SmoothNormals(__this,pUVar8,(MethodInfo *)0x0);
        }
        else {
          __this_01 = (__this->fields).bakeValues;
          if (__this_01 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,iVar4,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_Outline_ListVector3_get_Item);
          if (pIVar9 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          uvs = pIVar9[1].klass;
        }
        pUVar8 = UnityEngine_MeshFilter__get_sharedMesh(pUVar2,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Mesh_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Mesh__SetUVs_2eed4e0
                  (pUVar8,3,(System_Collections_Generic_List_Vector3__o *)uvs,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar2,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar8 = UnityEngine_MeshFilter__get_sharedMesh(pUVar2,(MethodInfo *)0x0);
          if (x == (UnityEngine_Object_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar10 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Mesh_o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar4 = UnityEngine_Mesh__get_subMeshCount(pUVar8,(MethodInfo *)0x0);
          if (iVar4 != 1) {
            iVar4 = UnityEngine_Mesh__get_subMeshCount(pUVar8,(MethodInfo *)0x0);
            if (pUVar10 == (UnityEngine_Material_array *)0x0) {
              ThrowNullReferenceException();
            }
            if (iVar4 <= (int)pUVar10->max_length) {
              iVar4 = UnityEngine_Mesh__get_subMeshCount(pUVar8,(MethodInfo *)0x0);
              UnityEngine_Mesh__set_subMeshCount(pUVar8,iVar4 + 1,(MethodInfo *)0x0);
              pSVar11 = UnityEngine_Mesh__get_triangles(pUVar8,(MethodInfo *)0x0);
              iVar4 = UnityEngine_Mesh__get_subMeshCount(pUVar8,(MethodInfo *)0x0);
              UnityEngine_Mesh__SetTriangles(pUVar8,pSVar11,iVar4 + -1,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose);
    pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_665370 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer);
    pSVar6 = System_Linq_Enumerable__ToHashSet_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                        (MethodInfo_6C93E0 *)MethodInfo_System_Linq_Enumerable_ToHashSet_SkinnedMeshRenderer);
    pSVar7 = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_SkinnedMeshRenderer);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)pSVar7,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Outline_LoadSmoothNormals_b__46_1,(MethodInfo_B61EB0 *)0x0);
    if (pSVar6 != (System_Collections_Generic_HashSet_TSource__o *)0x0) {
      System_Collections_Generic_HashSet_object___RemoveWhere
                ((System_Collections_Generic_HashSet_object__o *)pSVar6,pSVar7,
                 (MethodInfo_1766120 *)
                 MethodInfo_System_Collections_Generic_HashSet_SkinnedMeshRenderer_RemoveWhere);
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                 (System_Collections_Generic_HashSet_Vector2Int__o *)pSVar6,
                 (MethodInfo_175C200 *)
                 MethodInfo_System_Collections_Generic_HashSet_SkinnedMeshRenderer_GetEnumerator);
      local_48 = (undefined1  [8])local_78._0_8_;
      uStack_40 = local_78._8_8_;
      local_38 = local_68;
      local_78._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_MoveNext
                            );
          pUVar2 = local_38;
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_Dispose);
            return;
          }
          if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
          }
          if (pUVar2 == (UnityEngine_MeshFilter_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                   TypeInfo_Outline->static_fields->registeredMeshes;
          pUVar8 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                             ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_HashSet_object___Add
                            (pSVar1,(Il2CppObject *)pUVar8,
                             (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
        } while (!bVar3);
        pUVar8 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0);
        __this_02 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                              ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Mesh_o *)0x0) {
          ThrowNullReferenceException();
        }
        length = UnityEngine_Mesh__get_vertexCount(__this_02,(MethodInfo *)0x0);
        value = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,length);
        if (pUVar8 == (UnityEngine_Mesh_o *)0x0) break;
        UnityEngine_Mesh__set_uv4(pUVar8,value,(MethodInfo *)0x0);
        pUVar8 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0);
        pUVar10 = UnityEngine_Renderer__get_sharedMaterials
                            ((UnityEngine_Renderer_o *)pUVar2,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Mesh_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar4 = UnityEngine_Mesh__get_subMeshCount(pUVar8,(MethodInfo *)0x0);
        if (iVar4 != 1) {
          iVar4 = UnityEngine_Mesh__get_subMeshCount(pUVar8,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_Material_array *)0x0) {
            ThrowNullReferenceException();
          }
          if (iVar4 <= (int)pUVar10->max_length) {
            iVar4 = UnityEngine_Mesh__get_subMeshCount(pUVar8,(MethodInfo *)0x0);
            UnityEngine_Mesh__set_subMeshCount(pUVar8,iVar4 + 1,(MethodInfo *)0x0);
            pSVar11 = UnityEngine_Mesh__get_triangles(pUVar8,(MethodInfo *)0x0);
            iVar4 = UnityEngine_Mesh__get_subMeshCount(pUVar8,(MethodInfo *)0x0);
            UnityEngine_Mesh__SetTriangles(pUVar8,pSVar11,iVar4 + -1,(MethodInfo *)0x0);
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Outline$$SmoothNormals
// il2cpp: System_Collections_Generic_List_Vector3__o* Outline__SmoothNormals (Outline_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x181daa3c0
// eh: try 0x181daa6fd..0x181daab30 -> pad 0x18333bbd0 (+8 call sites) catch Il2CppExceptionWrapper
// asm: 79 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181daa8c0: mov r8, qword ptr [rsp + 0x60]
// asm:   0x181daa8c5: cmp qword ptr [r8], 0
// asm:   0x181daa8c9: je 0x181daa8dc
// asm:   0x181daa8cb: xor ecx, ecx
// asm:   0x181daa8cd: mov r8, qword ptr [r8]
// asm:   0x181daa8d0: mov rdx, qword ptr [rip + 0x22eea29]  ; TypeInfo_System_IDisposable
// asm:   0x181daa8d7: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181daa8dc: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181daa8e1: test rcx, rcx
// asm:   0x181daa8e4: jne 0x181daab05
// asm:   0x181daa8ea: xor r15d, r15d
// asm:   0x181daa8ed: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x181daa8f2: movss xmm8, dword ptr [rsp + 0x28]
// asm:   0x181daa8f9: movss xmm7, dword ptr [rsp + 0x24]
// asm:   0x181daa8ff: movss xmm6, dword ptr [rsp + 0x20]
// asm:   0x181daa905: movss xmm12, dword ptr [rip + 0x15ae2ea]
// asm:   0x181daa90e: mov rsi, qword ptr [rsp + 0x78]
// asm:   0x181daa98d: nop dword ptr [rax]
// asm:   0x181daaa26: jmp 0x181daa710
// asm:   0x181daaa2b: mov r8, qword ptr [rsp + 0x70]
// asm:   0x181daaa30: cmp qword ptr [r8], 0
// asm:   0x181daaa34: je 0x181daaa47
// asm:   0x181daaa36: xor ecx, ecx
// asm:   0x181daaa38: mov r8, qword ptr [r8]
// asm:   0x181daaa3b: mov rdx, qword ptr [rip + 0x22ee8be]  ; TypeInfo_System_IDisposable
// asm:   0x181daaa42: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181daaa47: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181daaa4c: test rcx, rcx
// asm:   0x181daaa4f: jne 0x181daab1b
// asm:   0x181daaa55: xor r15d, r15d
// asm:   0x181daaa58: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x181daaa5d: jmp 0x181daa6fd
// asm:   0x181daaa80: mov r8, qword ptr [rsp + 0x40]
// asm:   0x181daaa85: cmp qword ptr [r8], 0
// asm:   0x181daaa89: je 0x181daaa9c
// asm:   0x181daaa8b: xor ecx, ecx
// asm:   0x181daaa8d: mov r8, qword ptr [r8]
// asm:   0x181daaa90: mov rdx, qword ptr [rip + 0x22ee869]  ; TypeInfo_System_IDisposable
// asm:   0x181daaa97: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181daaa9c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181daaaa1: test rcx, rcx
// asm:   0x181daaaa4: jne 0x181daab30
// asm:   0x181daaaaa: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x181daab05: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181daab1b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181daab30: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333bb70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bb75: push rbp
// asm:   0x18333bb76: sub rsp, 0x20
// asm:   0x18333bb7a: mov rbp, rdx
// asm:   0x18333bb7d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333bb84: mov rcx, qword ptr [rax]
// asm:   0x18333bb87: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333bb8b: movabs rax, 0
// asm:   0x18333bb95: add rsp, 0x20
// asm:   0x18333bb99: pop rbp
// asm:   0x18333bb9a: ret 
// asm:   0x18333bba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bba5: push rbp
// asm:   0x18333bba6: sub rsp, 0x20
// asm:   0x18333bbaa: mov rbp, rdx
// asm:   0x18333bbad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x18333bbb4: mov rcx, qword ptr [rax]
// asm:   0x18333bbb7: mov qword ptr [rbp + 0x68], rcx
// asm:   0x18333bbbb: movabs rax, 0
// asm:   0x18333bbc5: add rsp, 0x20
// asm:   0x18333bbc9: pop rbp
// asm:   0x18333bbca: ret 
// asm:   0x18333bbd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bbd5: push rbp
// asm:   0x18333bbd6: sub rsp, 0x20
// asm:   0x18333bbda: mov rbp, rdx
// asm:   0x18333bbdd: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x18333bbe4: mov rcx, qword ptr [rax]
// asm:   0x18333bbe7: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333bbeb: movabs rax, 0
// asm:   0x18333bbf5: add rsp, 0x20
// asm:   0x18333bbf9: pop rbp
// asm:   0x18333bbfa: ret 

System_Collections_Generic_List_Vector3__o *
Outline__SmoothNormals(Outline_o *__this,UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int32_t iVar4;
  UnityEngine_Vector3_array *pUVar5;
  System_Func_Vector3__int__KeyValuePair_Vector3__int___o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Func_KeyValuePair_Vector3__int___Vector3__o *__this_01;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_Vector3__o *__this_02;
  void *pvVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Il2CppObject *local_res10;
  Il2CppObject *local_res20;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_Fields local_138;
  System_Collections_Generic_List_Vector3__o *local_128;
  undefined8 local_120;
  Il2CppObject **local_118;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_110;
  undefined8 local_100;
  Il2CppObject **local_f8;
  undefined8 local_f0;
  Il2CppObject **local_e8;
  Il2CppObject *local_e0;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_Fields local_d8 [3];
  undefined1 local_b0 [16];
  undefined1 local_a0 [136];
  
  if (Il2CppMethodInitialized_1843448bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Count_KeyValuePair_Vector3_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_GroupBy_KeyValuePair_Vector3_int_Vector3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_Vector3_KeyValuePair_Vector3_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_Vector3_int_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Vector3_int_KeyValuePair_Vector3_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_Vector3_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_Vector3_KeyValuePair_Vector3_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_Vector3_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c_SmoothNormals_b__47_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c_SmoothNormals_b__47_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c);
    Il2CppMethodInitialized_1843448bb = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_138.x = 0;
  local_138.y = 0;
  local_138.z = 0;
  local_res10 = (Il2CppObject *)0x0;
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    pUVar5 = UnityEngine_Mesh__get_vertices(mesh,(MethodInfo *)0x0);
    if ((TypeInfo_Outline_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline_c);
    }
    __this_00 = TypeInfo_Outline_c->static_fields->__9__47_0;
    if (__this_00 == (System_Func_Vector3__int__KeyValuePair_Vector3__int___o *)0x0) {
      if ((TypeInfo_Outline_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline_c);
      }
      pIVar6 = (Il2CppObject *)TypeInfo_Outline_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_Vector3_int_KeyValuePair_Vector3_int);
      System_Func_Vector3__int__KeyValuePair_Vector3__int_____ctor
                (__this_00,pIVar6,(intptr_t)MethodInfo_Outline_c_SmoothNormals_b__47_0,
                 (MethodInfo_172BDE0 *)0x0);
      TypeInfo_Outline_c->static_fields->__9__47_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Outline_c->static_fields->__9__47_0,__this_00);
    }
    source = System_Linq_Enumerable__Select_Vector3__KeyValuePair_Vector3__int__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar5,
                        (System_Func_TSource__int__TResult__o *)__this_00,
                        (MethodInfo_6C2BF0 *)
                        MethodInfo_System_Linq_Enumerable_Select_Vector3_KeyValuePair_Vector3_int);
    if ((TypeInfo_Outline_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline_c);
    }
    __this_01 = TypeInfo_Outline_c->static_fields->__9__47_1;
    if (__this_01 == (System_Func_KeyValuePair_Vector3__int___Vector3__o *)0x0) {
      if ((TypeInfo_Outline_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline_c);
      }
      pIVar6 = (Il2CppObject *)TypeInfo_Outline_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_Vector3_int_Vector3);
      System_Func_KeyValuePair_Vector3__int___Vector3____ctor
                (__this_01,pIVar6,(intptr_t)MethodInfo_Outline_c_SmoothNormals_b__47_1,
                 (MethodInfo_1727E70 *)0x0);
      TypeInfo_Outline_c->static_fields->__9__47_1 = __this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Outline_c->static_fields->__9__47_1,__this_01);
    }
    pIVar6 = (Il2CppObject *)
             System_Linq_Enumerable__GroupBy_KeyValuePair_Vector3__int___Vector3_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__TKey__o *)__this_01,
                        (MethodInfo_6BE9A0 *)
                        MethodInfo_System_Linq_Enumerable_GroupBy_KeyValuePair_Vector3_int_Vector3);
    pUVar5 = UnityEngine_Mesh__get_normals(mesh,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_9aad40
              (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pUVar5,
               (MethodInfo_9AAD40 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
    if (pIVar6 != (Il2CppObject *)0x0) {
      local_128 = __this_02;
      local_res20 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_Vector3_KeyValuePair_Vector3_int
                               ,pIVar6);
      local_120 = 0;
      local_118 = &local_res20;
      do {
        do {
          if (local_res20 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar7 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res20);
          if ((char)pvVar7 == '\0') {
            if (*local_118 != (Il2CppObject *)0x0) {
              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,*local_118);
            }
            return __this_02;
          }
          if (local_res20 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar6 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)
                                TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int
                              ,local_res20);
          local_e0 = pIVar6;
          iVar4 = System_Linq_Enumerable__Count___Il2CppFullySharedGenericType_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar6,
                             (MethodInfo_6BA540 *)
                             MethodInfo_System_Linq_Enumerable_Count_KeyValuePair_Vector3_int);
        } while (iVar4 == 1);
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar9 = (pUVar1->zeroVector).fields.x;
        fVar10 = (pUVar1->zeroVector).fields.y;
        local_138.x = (int32_t)(pUVar1->zeroVector).fields.x;
        local_138.y = (int32_t)(pUVar1->zeroVector).fields.y;
        fVar11 = (pUVar1->zeroVector).fields.z;
        local_138.z = (int32_t)fVar11;
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        local_res10 = InterfaceInvoker0_Invoke
                                (0,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_Vector3_int,
                                 pIVar6);
        local_100 = 0;
        local_f8 = &local_res10;
        while( true ) {
          if (local_res10 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar7 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res10);
          if ((char)pvVar7 == '\0') break;
          if (local_res10 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          lVar8 = il2cpp_runtime_helper_1800146d0(local_b0,0,
                                TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_Vector3_int);
          if (__this_02 == (System_Collections_Generic_List_Vector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    (&local_110,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_02
                     ,*(int32_t *)(lVar8 + 0xc),
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          fVar9 = (float)local_110.fields.x + fVar9;
          fVar10 = (float)local_110.fields.y + fVar10;
          local_138.y = (int32_t)fVar10;
          local_138.x = (int32_t)fVar9;
          fVar11 = (float)local_110.fields.z + fVar11;
          local_138.z = (int32_t)fVar11;
        }
        if (local_res10 != (Il2CppObject *)0x0) {
          InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res10);
        }
        local_138.z = il2cpp_runtime_helper_180546a40(&local_138,0);
        if (1e-05 < (float)local_138.z) {
          local_138.y = (int32_t)(fVar10 / (float)local_138.z);
          local_138.x = (int32_t)(fVar9 / (float)local_138.z);
          local_138.z = (int32_t)(fVar11 / (float)local_138.z);
        }
        else {
          local_138.x = 0;
          local_138.y = 0;
          local_138.z = 0;
        }
        local_res10 = InterfaceInvoker0_Invoke
                                (0,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_Vector3_int,
                                 pIVar6);
        iVar4 = local_138.z;
        uVar2 = local_138._0_8_;
        local_f0 = 0;
        local_e8 = &local_res10;
        while( true ) {
          if (local_res10 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar7 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res10);
          if ((char)pvVar7 == '\0') break;
          if (local_res10 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          lVar8 = il2cpp_runtime_helper_1800146d0(local_a0,0,
                                TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_Vector3_int);
          uVar3 = local_138._0_8_;
          if (__this_02 == (System_Collections_Generic_List_Vector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          local_138.x = (int32_t)uVar2;
          local_138.y = SUB84(uVar2,4);
          local_d8[0].x = local_138.x;
          local_d8[0].y = local_138.y;
          local_d8[0].z = iVar4;
          local_138._0_8_ = uVar3;
          System_Collections_Generic_List_Vector3___set_Item
                    ((System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_02,
                     *(int32_t *)(lVar8 + 0xc),
                     (UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_d8,
                     (MethodInfo_93C170 *)MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
        }
        if (local_res10 != (Il2CppObject *)0x0) {
          InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res10);
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Outline$$CombineSubmeshes
// il2cpp: void Outline__CombineSubmeshes (Outline_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Material_array* materials, const MethodInfo* method);
// 0x181da91b0

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
      if (materials == (UnityEngine_Material_array *)0x0) goto label_181da9234;
      if (iVar1 <= (int)materials->max_length) {
        iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
        UnityEngine_Mesh__set_subMeshCount(mesh,iVar1 + 1,(MethodInfo *)0x0);
        triangles = UnityEngine_Mesh__get_triangles(mesh,(MethodInfo *)0x0);
        iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetTriangles(mesh,triangles,iVar1 + -1,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181da9234:
  ThrowNullReferenceException();
}


// Outline$$UpdateMaterialProperties
// il2cpp: void Outline__UpdateMaterialProperties (Outline_o* __this, const MethodInfo* method);
// 0x181dab210

void Outline__UpdateMaterialProperties(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  int32_t fillLightenZTest;
  float width;
  UnityEngine_Vector4_Fields local_18;
  
  if (Il2CppMethodInitialized_1843448bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_OutlineColor");
    Il2CppMethodInitialized_1843448bc = '\x01';
  }
  pUVar1 = (__this->fields).outlineFillMaterial;
  if (pUVar1 == (UnityEngine_Material_o *)0x0) {
label_181dab3c3:
    ThrowNullReferenceException();
  }
  local_18.x = (__this->fields).outlineColor.fields.r;
  local_18.y = (__this->fields).outlineColor.fields.g;
  local_18.z = (__this->fields).outlineColor.fields.b;
  local_18.w = (__this->fields).outlineColor.fields.a;
  UnityEngine_Material__SetVector
            (pUVar1,"_OutlineColor",(UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).outlineFillLightenMaterial;
  if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_181dab3c3;
  local_18.x = (__this->fields).outlineColor.fields.r;
  local_18.y = (__this->fields).outlineColor.fields.g;
  local_18.z = (__this->fields).outlineColor.fields.b;
  local_18.w = (__this->fields).outlineColor.fields.a;
  UnityEngine_Material__SetVector
            (pUVar1,"_OutlineColor",(UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
  switch((__this->fields).outlineMode) {
  case 0:
    Outline__ApplyOutlineState(__this,8,8,1,(__this->fields).outlineWidth,(MethodInfo *)0x0);
    return;
  case 1:
    width = (__this->fields).outlineWidth;
    fillLightenZTest = 1;
    break;
  case 2:
    Outline__ApplyOutlineState(__this,8,5,1,(__this->fields).outlineWidth,(MethodInfo *)0x0);
    return;
  case 3:
    Outline__ApplyOutlineState(__this,4,8,1,(__this->fields).outlineWidth,(MethodInfo *)0x0);
    return;
  case 4:
    Outline__ApplyOutlineState(__this,4,5,1,0.0,(MethodInfo *)0x0);
    return;
  case 5:
    width = (__this->fields).outlineWidth;
    fillLightenZTest = 5;
    break;
  default:
    goto switchD_181dab2a3_default;
  }
  Outline__ApplyOutlineState(__this,8,4,fillLightenZTest,width,(MethodInfo *)0x0);
switchD_181dab2a3_default:
  return;
}


// Outline$$ApplyOutlineState
// il2cpp: void Outline__ApplyOutlineState (Outline_o* __this, int32_t maskZTest, int32_t fillZTest, int32_t fillLightenZTest, float width, const MethodInfo* method);
// 0x181da8b90

void Outline__ApplyOutlineState
               (Outline_o *__this,int32_t maskZTest,int32_t fillZTest,int32_t fillLightenZTest,float width,
               MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843448bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_ZTest");
    il2cpp_codegen_initialize_runtime_metadata(&"_OutlineWidth");
    Il2CppMethodInitialized_1843448bd = '\x01';
  }
  pUVar1 = (__this->fields).outlineMaskMaterial;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(pUVar1,"_ZTest",(float)maskZTest,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).outlineFillMaterial;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar1,"_ZTest",(float)fillZTest,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).outlineFillMaterial;
      if (pUVar1 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat(pUVar1,"_OutlineWidth",width,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).outlineFillLightenMaterial;
        if (pUVar1 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat
                    (pUVar1,"_ZTest",(float)fillLightenZTest,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).outlineFillLightenMaterial;
          if (pUVar1 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetFloat(pUVar1,"_OutlineWidth",width,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Outline$$.ctor
// il2cpp: void Outline___ctor (Outline_o* __this, const MethodInfo* method);
// 0x181dab770

void Outline___ctor(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  UnityEngine_Material_array *value;
  System_Collections_Generic_List_string__o *__this_02;
  
  if (Il2CppMethodInitialized_1843448be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Outline_ListVector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    Il2CppMethodInitialized_1843448be = '\x01';
  }
  (__this->fields).outlineColor.fields.r = 1.0;
  (__this->fields).outlineColor.fields.g = 1.0;
  (__this->fields).outlineColor.fields.b = 1.0;
  (__this->fields).outlineColor.fields.a = 1.0;
  (__this->fields).outlineWidth = 2.0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Mesh_ctor);
  (__this->fields).bakeKeys = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bakeKeys,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Outline_ListVector3);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Outline_ListVector3_ctor);
  (__this->fields).bakeValues = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bakeValues,__this_01);
  value = (UnityEngine_Material_array *)SZArrayNew(TypeInfo_UnityEngine_Material_array,0);
  (__this->fields).outlineMaterials = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).outlineMaterials,value);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._namesToIgnore = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._namesToIgnore,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline$$.cctor
// il2cpp: void Outline___cctor (const MethodInfo* method);
// 0x181dab5e0

void Outline___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Mesh__o *__this;
  System_Collections_Generic_Stack_BindingRestrictions_TestBuilder_AndNode__o *__this_00;
  int item;
  
  if (Il2CppMethodInitialized_1843448bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    Il2CppMethodInitialized_1843448bf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Mesh);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
  TypeInfo_Outline->static_fields->registeredMeshes = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Outline->static_fields->registeredMeshes,__this);
  if (Il2CppMethodInitialized_1843448ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_ctor_40fea50);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Stack_int);
    Il2CppMethodInitialized_1843448ae = '\x01';
  }
  __this_00 = (System_Collections_Generic_Stack_BindingRestrictions_TestBuilder_AndNode__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_int);
  System_Collections_Generic_Stack_int____ctor
            (__this_00,400,(MethodInfo_B95F40 *)MethodInfo_System_Collections_Generic_Stack_int_ctor_40fea50);
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  if (Il2CppMethodInitialized_1843448b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_1843448b0 = '\x01';
  }
  if (__this_00 != (System_Collections_Generic_Stack_BindingRestrictions_TestBuilder_AndNode__o *)0x0) {
    System_Collections_Generic_Stack_int___Clear
              ((System_Collections_Generic_Stack_ProbeBrickPool_BrickChunkAlloc__o *)__this_00,
               (MethodInfo_CFB6A0 *)MethodInfo_System_Collections_Generic_Stack_int_Clear);
    item = 399;
    do {
      System_Collections_Generic_Stack_int___Push
                ((System_Collections_Generic_Stack_T__o *)__this_00,item,
                 (MethodInfo_CFD450 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
      item = item + -1;
    } while (-1 < item);
    TypeInfo_Outline->static_fields->freeQueueBlocks = (System_Collections_Generic_Stack_int__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Outline->static_fields->freeQueueBlocks,__this_00);
    return;
  }
  ThrowNullReferenceException();
}


// Outline$$<FindRenderers>b__39_0
// il2cpp: bool Outline___FindRenderers_b__39_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x181daab40

bool Outline___FindRenderers_b__39_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Renderer_o *pUVar2;
  UnityEngine_Renderer_c *pUVar3;
  System_Collections_Generic_List_string__o *source;
  bool bVar4;
  Outline___c__DisplayClass39_0_o *object;
  System_Func_string__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_1843448c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c__DisplayClass39_0_FindRenderers_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c__DisplayClass39_0);
    Il2CppMethodInitialized_1843448c0 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_c__DisplayClass39_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Outline___c__DisplayClass39_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).e = e;
  Il2CppCodeGenWriteBarrier(&(object->fields).e,e);
  pUVar2 = (object->fields).e;
  if (pUVar2 == (UnityEngine_Renderer_o *)0x0) {
    return false;
  }
  pUVar3 = pUVar2->klass;
  bVar1 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
  if (((pUVar3->_2).typeHierarchyDepth < bVar1) ||
     ((pUVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) {
    pUVar3 = ((object->fields).e)->klass;
    bVar1 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
    if ((pUVar3->_2).typeHierarchyDepth < bVar1) {
      return false;
    }
    if ((pUVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer) {
      return false;
    }
  }
  source = (__this->fields)._namesToIgnore;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Outline_c__DisplayClass39_0_FindRenderers_b__1,(MethodInfo_B61EB0 *)0x0);
  bVar4 = System_Linq_Enumerable__Any_object__6b6920
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
  return !bVar4;
}


// Outline$$<OnEnable>b__40_0
// il2cpp: bool Outline___OnEnable_b__40_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x181dab080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dab149: nop dword ptr [rax]

bool Outline___OnEnable_b__40_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  UnityEngine_Material_o *item;
  bool bVar1;
  UnityEngine_Material_array *pUVar2;
  System_Collections_Generic_List_TSource__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843448c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448c1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if (!bVar1) {
label_181dab1bf:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
    return !bVar1;
  }
  if (e != (UnityEngine_Renderer_o *)0x0) {
    pUVar2 = UnityEngine_Renderer__get_sharedMaterials(e,(MethodInfo *)0x0);
    __this_00 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar2,
                           (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_Material);
    pUVar2 = (__this->fields).outlineMaterials;
    if (pUVar2 != (UnityEngine_Material_array *)0x0) {
      for (uVar3 = 0; (int)uVar3 < (int)pUVar2->max_length; uVar3 = uVar3 + 1) {
        if ((uint)pUVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_181dab1fb;
        item = pUVar2->m_Items[(int)uVar3];
        bVar1 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_Material_Contains);
        if (!bVar1) {
          il2cpp_runtime_helper_180012890(__this_00,item);
        }
      }
      if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
        value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                          ((System_Collections_Generic_List_T__o *)__this_00,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_Material_ToArray);
        UnityEngine_Renderer__set_sharedMaterials(e,(UnityEngine_Material_array *)value,(MethodInfo *)0x0);
        goto label_181dab1bf;
      }
    }
  }
label_181dab1fb:
  ThrowNullReferenceException();
}


// Outline$$<OnDisable>b__43_0
// il2cpp: bool Outline___OnDisable_b__43_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x181daaf30

bool Outline___OnDisable_b__43_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_array *pUVar2;
  System_Collections_Generic_List_TSource__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843448c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448c2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if (!bVar1) {
label_181dab039:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
    return !bVar1;
  }
  if (e != (UnityEngine_Renderer_o *)0x0) {
    pUVar2 = UnityEngine_Renderer__get_sharedMaterials(e,(MethodInfo *)0x0);
    __this_00 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar2,
                           (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_Material);
    pUVar2 = (__this->fields).outlineMaterials;
    if (pUVar2 != (UnityEngine_Material_array *)0x0) {
      for (uVar3 = 0; (int)uVar3 < (int)pUVar2->max_length; uVar3 = uVar3 + 1) {
        if ((uint)pUVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_181dab06f;
        System_Collections_Generic_List_object___Remove
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)pUVar2->m_Items[(int)uVar3],
                   (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_Material_Remove);
      }
      if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
        value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                          ((System_Collections_Generic_List_T__o *)__this_00,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_Material_ToArray);
        UnityEngine_Renderer__set_sharedMaterials(e,(UnityEngine_Material_array *)value,(MethodInfo *)0x0);
        goto label_181dab039;
      }
    }
  }
label_181dab06f:
  ThrowNullReferenceException();
}


// Outline$$<LoadSmoothNormals>b__46_0
// il2cpp: bool Outline___LoadSmoothNormals_b__46_0 (Outline_o* __this, UnityEngine_MeshFilter_o* e, const MethodInfo* method);
// 0x181daacb0

bool Outline___LoadSmoothNormals_b__46_0(Outline_o *__this,UnityEngine_MeshFilter_o *e,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  System_Collections_Generic_List_string__o *source;
  bool bVar1;
  Outline___c__DisplayClass46_0_o *object;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (Il2CppMethodInitialized_1843448c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c__DisplayClass46_0_LoadSmoothNormals_b__2)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c__DisplayClass46_0);
    Il2CppMethodInitialized_1843448c3 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_c__DisplayClass46_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Outline___c__DisplayClass46_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).e = e;
  Il2CppCodeGenWriteBarrier(&(object->fields).e,e);
  exists = (UnityEngine_Object_o *)(object->fields).e;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  source = (__this->fields)._namesToIgnore;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Outline_c__DisplayClass46_0_LoadSmoothNormals_b__2,(MethodInfo_B61EB0 *)0x0)
  ;
  source_00 = System_Linq_Enumerable__Where_float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
  bVar1 = System_Linq_Enumerable__Any___Il2CppFullySharedGenericType_
                    (source_00,(MethodInfo_6B6590 *)MethodInfo_System_Linq_Enumerable_Any_string);
  return !bVar1;
}


// Outline$$<LoadSmoothNormals>b__46_1
// il2cpp: bool Outline___LoadSmoothNormals_b__46_1 (Outline_o* __this, UnityEngine_SkinnedMeshRenderer_o* e, const MethodInfo* method);
// 0x181daadf0

bool Outline___LoadSmoothNormals_b__46_1
               (Outline_o *__this,UnityEngine_SkinnedMeshRenderer_o *e,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  System_Collections_Generic_List_string__o *source;
  bool bVar1;
  Outline___c__DisplayClass46_1_o *object;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (Il2CppMethodInitialized_1843448c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c__DisplayClass46_1_LoadSmoothNormals_b__3)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c__DisplayClass46_1);
    Il2CppMethodInitialized_1843448c4 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_c__DisplayClass46_1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Outline___c__DisplayClass46_1_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).e = e;
  Il2CppCodeGenWriteBarrier(&(object->fields).e,e);
  exists = (UnityEngine_Object_o *)(object->fields).e;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  source = (__this->fields)._namesToIgnore;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Outline_c__DisplayClass46_1_LoadSmoothNormals_b__3,(MethodInfo_B61EB0 *)0x0)
  ;
  source_00 = System_Linq_Enumerable__Where_float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
  bVar1 = System_Linq_Enumerable__Any___Il2CppFullySharedGenericType_
                    (source_00,(MethodInfo_6B6590 *)MethodInfo_System_Linq_Enumerable_Any_string);
  return !bVar1;
}


