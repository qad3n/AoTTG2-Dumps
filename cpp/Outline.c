// Type: Outline
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Outline.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/Outline.cs
// --------------------------------

// Outline.ListVector3$$.ctor
// il2cpp: void Outline_ListVector3___ctor (Outline_ListVector3_o* __this, const MethodInfo* method);
// 0x5848470

void Outline_ListVector3___ctor(Outline_ListVector3_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c$$.cctor
// il2cpp: void Outline___c___cctor (const MethodInfo* method);
// 0x5848f60

void Outline___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545016 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c);
    Il2CppMethodInitialized_07545016 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Outline_c->static_fields->__9 = (Outline___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Outline_c->static_fields->__9);
  return;
}


// Outline.<>c$$.ctor
// il2cpp: void Outline___c___ctor (Outline___c_o* __this, const MethodInfo* method);
// 0x5848fd0

void Outline___c___ctor(Outline___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c$$<SmoothNormals>b__47_0
// il2cpp: System_Collections_Generic_KeyValuePair_Vector3__int__o Outline___c___SmoothNormals_b__47_0 (Outline___c_o* __this, UnityEngine_Vector3_o vertex, int32_t index, const MethodInfo* method);
// 0x5848fe0

System_Collections_Generic_KeyValuePair_Vector3__int__o
Outline___c___SmoothNormals_b__47_0
          (Outline___c_o *__this,UnityEngine_Vector3_o vertex,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_Vector3__int__Fields SVar1;
  float fVar2;
  float fVar3;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o key;
  System_Collections_Generic_KeyValuePair_Vector3__int__o local_28;
  undefined1 local_18 [16];
  
  key.fields.z = vertex.fields.z;
  fVar2 = vertex.fields.x;
  fVar3 = vertex.fields.y;
  if (g_data_07545017 == '\0') {
    local_18._8_4_ = in_XMM0_Dc;
    local_18._0_8_ = vertex.fields._0_8_;
    local_18._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_int_ctor);
    g_data_07545017 = '\x01';
    fVar2 = (float)local_18._0_4_;
    fVar3 = (float)local_18._4_4_;
  }
  local_28.fields.key.fields.x = 0.0;
  local_28.fields.key.fields.y = 0.0;
  local_28.fields.key.fields.z = 0.0;
  local_28.fields.value = 0;
  key.fields.y = fVar3;
  key.fields.x = fVar2;
  System_Collections_Generic_KeyValuePair_Vector3__int____ctor
            (&local_28,key,index,
             (MethodInfo_513B750 *)MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_int_ctor);
  SVar1.key.fields.z = local_28.fields.key.fields.z;
  SVar1.value = local_28.fields.value;
  SVar1.key.fields.x = local_28.fields.key.fields.x;
  SVar1.key.fields.y = local_28.fields.key.fields.y;
  return (System_Collections_Generic_KeyValuePair_Vector3__int__o)SVar1;
}


// Outline.<>c$$<SmoothNormals>b__47_1
// il2cpp: UnityEngine_Vector3_o Outline___c___SmoothNormals_b__47_1 (Outline___c_o* __this, System_Collections_Generic_KeyValuePair_Vector3__int__o pair, const MethodInfo* method);
// 0x5849050

UnityEngine_Vector3_o
Outline___c___SmoothNormals_b__47_1
          (Outline___c_o *__this,System_Collections_Generic_KeyValuePair_Vector3__int__o pair,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545018 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Vector3_int_get_Key);
    Il2CppMethodInitialized_07545018 = '\x01';
  }
  return (UnityEngine_Vector3_o)pair.fields.key.fields.fields;
}


// Outline.<>c__DisplayClass39_0$$.ctor
// il2cpp: void Outline___c__DisplayClass39_0___ctor (Outline___c__DisplayClass39_0_o* __this, const MethodInfo* method);
// 0x5848960

void Outline___c__DisplayClass39_0___ctor(Outline___c__DisplayClass39_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass39_0$$<FindRenderers>b__1
// il2cpp: bool Outline___c__DisplayClass39_0___FindRenderers_b__1 (Outline___c__DisplayClass39_0_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5849090

bool Outline___c__DisplayClass39_0___FindRenderers_b__1
               (Outline___c__DisplayClass39_0_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  bool bVar1;
  System_String_o *__this_01;
  
  __this_00 = (UnityEngine_Object_o *)(__this->fields).e;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_01,name,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Outline.<>c__DisplayClass46_0$$.ctor
// il2cpp: void Outline___c__DisplayClass46_0___ctor (Outline___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x5848e00

void Outline___c__DisplayClass46_0___ctor(Outline___c__DisplayClass46_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass46_0$$<LoadSmoothNormals>b__2
// il2cpp: bool Outline___c__DisplayClass46_0___LoadSmoothNormals_b__2 (Outline___c__DisplayClass46_0_o* __this, System_String_o* a, const MethodInfo* method);
// 0x58490c0

bool Outline___c__DisplayClass46_0___LoadSmoothNormals_b__2
               (Outline___c__DisplayClass46_0_o *__this,System_String_o *a,MethodInfo *method)

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
// 0x5848f50

void Outline___c__DisplayClass46_1___ctor(Outline___c__DisplayClass46_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Outline.<>c__DisplayClass46_1$$<LoadSmoothNormals>b__3
// il2cpp: bool Outline___c__DisplayClass46_1___LoadSmoothNormals_b__3 (Outline___c__DisplayClass46_1_o* __this, System_String_o* a, const MethodInfo* method);
// 0x58490f0

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
// 0x5846150

int32_t Outline__get_OutlineMode(Outline_o *__this,MethodInfo *method)

{
  return (__this->fields).outlineMode;
}


// Outline$$set_OutlineMode
// il2cpp: void Outline__set_OutlineMode (Outline_o* __this, int32_t value, const MethodInfo* method);
// 0x5846160

void Outline__set_OutlineMode(Outline_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields).outlineMode = value;
  (__this->fields).needsUpdate = true;
  return;
}


// Outline$$get_OutlineColor
// il2cpp: UnityEngine_Color_o Outline__get_OutlineColor (Outline_o* __this, const MethodInfo* method);
// 0x5846170

UnityEngine_Color_o Outline__get_OutlineColor(Outline_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields).outlineColor.fields;
}


// Outline$$set_OutlineColor
// il2cpp: void Outline__set_OutlineColor (Outline_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x5846180

void Outline__set_OutlineColor(Outline_o *__this,UnityEngine_Color_o value,MethodInfo *method)

{
  (__this->fields).outlineColor.fields = value.fields;
  (__this->fields).needsUpdate = true;
  return;
}


// Outline$$get_OutlineWidth
// il2cpp: float Outline__get_OutlineWidth (Outline_o* __this, const MethodInfo* method);
// 0x5846190

float Outline__get_OutlineWidth(Outline_o *__this,MethodInfo *method)

{
  return (__this->fields).outlineWidth;
}


// Outline$$set_OutlineWidth
// il2cpp: void Outline__set_OutlineWidth (Outline_o* __this, float value, const MethodInfo* method);
// 0x58461a0

void Outline__set_OutlineWidth(Outline_o *__this,float value,MethodInfo *method)

{
  (__this->fields).outlineWidth = value;
  (__this->fields).needsUpdate = true;
  return;
}


// Outline$$CreateQueueBlocks
// il2cpp: System_Collections_Generic_Stack_int__o* Outline__CreateQueueBlocks (const MethodInfo* method);
// 0x58461b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5846224: cmp byte ptr [rip + 0x1cfedd6], 0
// asm:   0x584622b: je 0x5846278
// asm:   0x584622d: test rbx, rbx
// asm:   0x5846230: je 0x584629c

System_Collections_Generic_Stack_int__o * Outline__CreateQueueBlocks(MethodInfo *method)

{
  System_Collections_Generic_Stack_int__o *__this;
  int32_t item;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07544fff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_ctor_719d468);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Stack_int);
    Il2CppMethodInitialized_07544fff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_int);
  System_Collections_Generic_Stack_int____ctor_41028d0
            (__this,400,(MethodInfo_41028D0 *)MethodInfo_System_Collections_Generic_Stack_int_ctor_719d468);
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  if (Il2CppMethodInitialized_07545001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_07545001 = '\x01';
  }
  if (__this == (System_Collections_Generic_Stack_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Stack_int___Clear
            (__this,(MethodInfo_4102A40 *)MethodInfo_System_Collections_Generic_Stack_int_Clear);
  item = 399;
  do {
    System_Collections_Generic_Stack_int___Push
              (__this,item,(MethodInfo_4102F50 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
    bVar1 = item != 0;
    item = item + -1;
  } while (bVar1);
  return __this;
}


// Outline$$ResetQueueBlocks
// il2cpp: void Outline__ResetQueueBlocks (const MethodInfo* method);
// 0x5846330
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5846368: test rbx, rbx
// asm:   0x584636b: je 0x5846415
// asm:   0x584638f: nop 

void Outline__ResetQueueBlocks(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Stack_int__o *__this;
  int32_t item;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    Il2CppMethodInitialized_07545000 = '\x01';
    uVar1 = (TypeInfo_Outline->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Outline->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
    __this = TypeInfo_Outline->static_fields->freeQueueBlocks;
  }
  else {
    __this = *(System_Collections_Generic_Stack_int__o **)
              ((long)((Il2CppClass *)TypeInfo_Outline)->static_fields + 8);
  }
  if (Il2CppMethodInitialized_07545001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_07545001 = '\x01';
  }
  if (__this == (System_Collections_Generic_Stack_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Stack_int___Clear
            (__this,(MethodInfo_4102A40 *)MethodInfo_System_Collections_Generic_Stack_int_Clear);
  item = 399;
  do {
    System_Collections_Generic_Stack_int___Push
              (__this,item,(MethodInfo_4102F50 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
    bVar2 = item != 0;
    item = item + -1;
  } while (bVar2);
  return;
}


// Outline$$FillQueueBlocks
// il2cpp: void Outline__FillQueueBlocks (System_Collections_Generic_Stack_int__o* blocks, const MethodInfo* method);
// 0x58462b0

void Outline__FillQueueBlocks(System_Collections_Generic_Stack_int__o *blocks,MethodInfo *method)

{
  int32_t item;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_07545001 = '\x01';
  }
  if (blocks == (System_Collections_Generic_Stack_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Stack_int___Clear
            (blocks,(MethodInfo_4102A40 *)MethodInfo_System_Collections_Generic_Stack_int_Clear);
  item = 399;
  do {
    System_Collections_Generic_Stack_int___Push
              (blocks,item,(MethodInfo_4102F50 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
    bVar1 = item != 0;
    item = item + -1;
  } while (bVar1);
  return;
}


// Outline$$Awake
// il2cpp: void Outline__Awake (Outline_o* __this, const MethodInfo* method);
// 0x5846420

void Outline__Awake(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **targetAddress;
  UnityEngine_Material_o **targetAddress_00;
  UnityEngine_Material_o **targetAddress_01;
  int iVar1;
  Il2CppClass *obj;
  Outline_c *klass;
  int32_t iVar2;
  System_Collections_Generic_HashSet_Renderer__o *pSVar3;
  System_Collections_Generic_Stack_int__o *__this_00;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Material_array *method_00;
  Il2CppObject *pIVar5;
  MethodInfo **in_RCX;
  
  if (Il2CppMethodInitialized_07545002 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Pop);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&"Mask");
    il2cpp_codegen_initialize_runtime_metadata(&"FillLighten");
    il2cpp_codegen_initialize_runtime_metadata(&"Reset");
    il2cpp_codegen_initialize_runtime_metadata(&"Fill");
    Il2CppMethodInitialized_07545002 = '\x01';
  }
  pSVar3 = Outline__FindRenderers(__this,method);
  (__this->fields).renderers = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).renderers);
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  klass = TypeInfo_Outline;
  __this_00 = TypeInfo_Outline->static_fields->freeQueueBlocks;
  if (__this_00 == (System_Collections_Generic_Stack_int__o *)0x0) {
label_05846713:
    ThrowNullReferenceException();
  }
  iVar1 = (__this_00->fields)._size;
  (__this->fields).ownsQueueBlock = 0 < iVar1;
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
      __this_00 = TypeInfo_Outline->static_fields->freeQueueBlocks;
      if (__this_00 == (System_Collections_Generic_Stack_int__o *)0x0) goto label_05846713;
    }
    in_RCX = &MethodInfo_System_Collections_Generic_Stack_int_Pop;
    iVar2 = System_Collections_Generic_Stack_int___Pop
                      (__this_00,(MethodInfo_4102E90 *)MethodInfo_System_Collections_Generic_Stack_int_Pop);
  }
  (__this->fields).queueBlock = iVar2;
  pUVar4 = Outline__CreateOutlineMaterial(__this,"Mask",0,(MethodInfo *)in_RCX);
  (__this->fields).outlineMaskMaterial = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).outlineMaskMaterial);
  pUVar4 = Outline__CreateOutlineMaterial(__this,"Fill",1,(MethodInfo *)in_RCX);
  targetAddress = &(__this->fields).outlineFillMaterial;
  (__this->fields).outlineFillMaterial = pUVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar4 = Outline__CreateOutlineMaterial(__this,"FillLighten",2,(MethodInfo *)in_RCX);
  targetAddress_00 = &(__this->fields).outlineFillLightenMaterial;
  (__this->fields).outlineFillLightenMaterial = pUVar4;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pUVar4 = Outline__CreateOutlineMaterial(__this,"Reset",3,(MethodInfo *)in_RCX);
  targetAddress_01 = &(__this->fields).outlineResetMaterial;
  (__this->fields).outlineResetMaterial = pUVar4;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  method_00 = (UnityEngine_Material_array *)SZArrayNew(TypeInfo_UnityEngine_Material_array,4);
  if (method_00 == (UnityEngine_Material_array *)0x0) goto label_05846713;
  obj = (Il2CppClass *)(__this->fields).outlineMaskMaterial;
  if (obj != (Il2CppClass *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((method_00->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05846718;
  }
  if (*(int *)&method_00->max_length != 0) {
    method_00->m_Items[0] = (UnityEngine_Material_o *)obj;
    Il2CppCodeGenWriteBarrier(method_00->m_Items);
    pUVar4 = *targetAddress;
    if (pUVar4 != (UnityEngine_Material_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar4,(((method_00->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05846718;
    }
    if (((ulong)method_00->max_length & 0xfffffffe) == 0) goto label_0584670e;
    method_00->m_Items[1] = pUVar4;
    Il2CppCodeGenWriteBarrier(method_00->m_Items + 1);
    pUVar4 = *targetAddress_00;
    if (pUVar4 != (UnityEngine_Material_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar4,(((method_00->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05846718;
    }
    if (2 < *(uint *)&method_00->max_length) {
      method_00->m_Items[2] = pUVar4;
      Il2CppCodeGenWriteBarrier(method_00->m_Items + 2);
      pUVar4 = *targetAddress_01;
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar4,(((method_00->obj).klass)->_1).element_class);
        if (pIVar5 == (Il2CppObject *)0x0) {
label_05846718:
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
      }
      if (((ulong)method_00->max_length & 0xfffffffc) != 0) {
        ((_union_13 *)(method_00->m_Items + 3))->methodMetadataHandle = pUVar4;
        Il2CppCodeGenWriteBarrier(&((_union_13 *)(method_00->m_Items + 3))->methodMetadataHandle);
        (__this->fields).outlineMaterials = method_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).outlineMaterials);
        Outline__LoadSmoothNormals(__this,(MethodInfo *)method_00);
        (__this->fields).needsUpdate = true;
        return;
      }
    }
  }
label_0584670e:
  ThrowIndexOutOfRangeException();
}


// Outline$$CreateOutlineMaterial
// il2cpp: UnityEngine_Material_o* Outline__CreateOutlineMaterial (Outline_o* __this, System_String_o* stage, int32_t stageOffset, const MethodInfo* method);
// 0x58467f0

UnityEngine_Material_o *
Outline__CreateOutlineMaterial
          (Outline_o *__this,System_String_o *stage,int32_t stageOffset,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_07545003 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/OutlineMaskAndFill_");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineMaskAndFill");
    il2cpp_codegen_initialize_runtime_metadata(&" (Instance)");
    Il2CppMethodInitialized_07545003 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("Shaders/OutlineMaskAndFill_",stage,(MethodInfo *)0x0);
  shader = UnityEngine_Resources__Load_object_
                     (pSVar1,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Shader);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10("OutlineMaskAndFill",stage," (Instance)",(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_00,pSVar1,(MethodInfo *)0x0);
  UnityEngine_Material__set_renderQueue
            (__this_00,stageOffset + (__this->fields).queueBlock * 4 + 0xc26,(MethodInfo *)0x0);
  return __this_00;
}


// Outline$$RefreshRenderers
// il2cpp: void Outline__RefreshRenderers (Outline_o* __this, System_Collections_Generic_List_string__o* namesToIgnore, const MethodInfo* method);
// 0x5846fb0

void Outline__RefreshRenderers
               (Outline_o *__this,System_Collections_Generic_List_string__o *namesToIgnore,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar3;
  System_Collections_Generic_List_Mesh__o *pSVar4;
  bool bVar5;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_07545004 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    Il2CppMethodInitialized_07545004 = '\x01';
  }
  (__this->fields)._namesToIgnore = namesToIgnore;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._namesToIgnore);
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              TypeInfo_Outline->static_fields->registeredMeshes;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Clear
              (__this_00,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Clear);
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
        bVar5 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
        Outline__OnDisable(__this,pMVar6);
        pMVar6 = (MethodInfo *)Outline__FindRenderers(__this,pMVar6);
        (__this->fields).renderers = (System_Collections_Generic_HashSet_Renderer__o *)pMVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).renderers);
        Outline__LoadSmoothNormals(__this,pMVar6);
        Outline__OnEnable(__this,pMVar6);
        (__this->fields).needsUpdate = true;
        if (bVar5) {
          Outline__OnEnable(__this,pMVar6);
          return;
        }
        Outline__OnDisable(__this,pMVar6);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Outline$$FindRenderers
// il2cpp: System_Collections_Generic_HashSet_Renderer__o* Outline__FindRenderers (Outline_o* __this, const MethodInfo* method);
// 0x5846730

System_Collections_Generic_HashSet_Renderer__o * Outline__FindRenderers(Outline_o *__this,MethodInfo *method)

{
  System_Object_array *source;
  System_Func_Renderer__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_HashSet_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545005 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToHashSet_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_FindRenderers_b__39_0);
    Il2CppMethodInitialized_07545005 = '\x01';
  }
  source = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer)
  ;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Outline_FindRenderers_b__39_0,(MethodInfo_4F19300 *)0x0);
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Renderer);
  pSVar1 = System_Linq_Enumerable__ToHashSet_object_
                     (source_00,(MethodInfo_3500A90 *)MethodInfo_System_Linq_Enumerable_ToHashSet_Renderer);
  return (System_Collections_Generic_HashSet_Renderer__o *)pSVar1;
}


// Outline$$OnEnable
// il2cpp: void Outline__OnEnable (Outline_o* __this, const MethodInfo* method);
// 0x58471a0

void Outline__OnEnable(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_07545006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Renderer_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_OnEnable_b__40_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Renderer);
    Il2CppMethodInitialized_07545006 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).renderers;
  match = (System_Predicate_T__o *)
          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Renderer);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Outline_OnEnable_b__40_0,(MethodInfo_3DC95B0 *)0x0);
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___RemoveWhere
            (__this_00,match,
             (MethodInfo_4FB6160 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_RemoveWhere);
  return;
}


// Outline$$OnValidate
// il2cpp: void Outline__OnValidate (Outline_o* __this, const MethodInfo* method);
// 0x5847230
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584729f: jmp 0x58472ef

void Outline__OnValidate(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Mesh__o *pSVar2;
  System_Collections_Generic_List_Outline_ListVector3__o *pSVar3;
  int length_00;
  
  if (Il2CppMethodInitialized_07545007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_get_Count);
    Il2CppMethodInitialized_07545007 = '\x01';
  }
  (__this->fields).needsUpdate = true;
  pSVar2 = (__this->fields).bakeKeys;
  if ((__this->fields).precomputeOutline == false) {
    if (pSVar2 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_0584730f;
    length_00 = (pSVar2->fields)._size;
    if (length_00 == 0) goto label_0584728e;
label_058472ad:
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length_00) {
      method = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length_00,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).bakeValues;
    if (pSVar3 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto label_0584730f;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      method = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
  }
  else {
    if (pSVar2 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_0584730f;
label_0584728e:
    pSVar3 = (__this->fields).bakeValues;
    if (pSVar3 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto label_0584730f;
    length_00 = (pSVar2->fields)._size;
    if (length_00 != (pSVar3->fields)._size) goto label_058472ad;
  }
  if ((__this->fields).precomputeOutline != false) {
    pSVar2 = (__this->fields).bakeKeys;
    if (pSVar2 == (System_Collections_Generic_List_Mesh__o *)0x0) {
label_0584730f:
      ThrowNullReferenceException();
    }
    if ((pSVar2->fields)._size == 0) {
      Outline__Bake(__this,method);
      return;
    }
  }
  return;
}


// Outline$$Update
// il2cpp: void Outline__Update (Outline_o* __this, const MethodInfo* method);
// 0x58475c0

void Outline__Update(Outline_o *__this,MethodInfo *method)

{
  if ((__this->fields).needsUpdate == false) {
    return;
  }
  (__this->fields).needsUpdate = false;
  Outline__UpdateMaterialProperties(__this,method);
  return;
}


// Outline$$OnDisable
// il2cpp: void Outline__OnDisable (Outline_o* __this, const MethodInfo* method);
// 0x5847110

void Outline__OnDisable(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_07545008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Renderer_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_OnDisable_b__43_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Renderer);
    Il2CppMethodInitialized_07545008 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).renderers;
  match = (System_Predicate_T__o *)
          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Renderer);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Outline_OnDisable_b__43_0,(MethodInfo_3DC95B0 *)0x0);
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___RemoveWhere
            (__this_00,match,
             (MethodInfo_4FB6160 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_RemoveWhere);
  return;
}


// Outline$$OnDestroy
// il2cpp: void Outline__OnDestroy (Outline_o* __this, const MethodInfo* method);
// 0x5847700

void Outline__OnDestroy(Outline_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Material_array *pUVar2;
  UnityEngine_Material_o *obj;
  System_Collections_Generic_Stack_int__o *__this_00;
  ulong uVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_07545009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    Il2CppMethodInitialized_07545009 = '\x01';
  }
  pUVar2 = (__this->fields).outlineMaterials;
  if (pUVar2 != (UnityEngine_Material_array *)0x0) {
    if (0 < (int)pUVar2->max_length) {
      uVar3 = pUVar2->max_length & 0xffffffff;
      uVar4 = 0;
      do {
        if (uVar3 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        obj = pUVar2->m_Items[uVar4];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        uVar1 = (uint)pUVar2->max_length;
        uVar3 = (ulong)uVar1;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    if ((__this->fields).ownsQueueBlock == false) {
      return;
    }
    (__this->fields).ownsQueueBlock = false;
    if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
    }
    __this_00 = TypeInfo_Outline->static_fields->freeQueueBlocks;
    if (__this_00 != (System_Collections_Generic_Stack_int__o *)0x0) {
      System_Collections_Generic_Stack_int___Push
                (__this_00,(__this->fields).queueBlock,
                 (MethodInfo_4102F50 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Outline$$Bake
// il2cpp: void Outline__Bake (Outline_o* __this, const MethodInfo* method);
// 0x5847320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584741a: mov rbp, qword ptr [rsp + 0x10]

void Outline__Bake(Outline_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Outline_o *__this_00;
  System_Collections_Generic_List_Mesh__o *__this_01;
  UnityEngine_Mesh_array *pUVar2;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_02;
  Outline_ListVector3_array *pOVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  uint uVar6;
  System_Collections_Generic_HashSet_Mesh__o *__this_03;
  System_Object_array *pSVar7;
  UnityEngine_Mesh_o *pUVar8;
  System_Collections_Generic_List_Vector3__o *pSVar9;
  Outline_ListVector3_o *__this_04;
  MethodInfo *method_00;
  Outline_o *__this_05;
  uint uVar10;
  
  if (Il2CppMethodInitialized_0754500a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_ListVector3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Add);
    Il2CppMethodInitialized_0754500a = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Mesh);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_03,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
  pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter);
  if (pSVar7 == (System_Object_array *)0x0) {
label_058475a0:
    ThrowNullReferenceException();
  }
  uVar6 = (uint)pSVar7->max_length;
  if (__this_03 == (System_Collections_Generic_HashSet_Mesh__o *)0x0) {
    if (0 < (int)uVar6) {
      if ((UnityEngine_MeshFilter_o *)pSVar7->m_Items[0] != (UnityEngine_MeshFilter_o *)0x0) {
        UnityEngine_MeshFilter__get_sharedMesh
                  ((UnityEngine_MeshFilter_o *)pSVar7->m_Items[0],(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      goto label_058475a0;
    }
  }
  else if (0 < (int)uVar6) {
    uVar10 = 0;
    do {
      if (uVar6 <= uVar10) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (Outline_o *)pSVar7->m_Items[(int)uVar10];
      if (__this_00 == (Outline_o *)0x0) goto label_058475a0;
      pUVar8 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0)
      ;
      bVar5 = System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_03,(Il2CppObject *)pUVar8,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
      if (bVar5) {
        __this_05 = __this_00;
        pUVar8 = UnityEngine_MeshFilter__get_sharedMesh
                           ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
        pSVar9 = Outline__SmoothNormals(__this_05,pUVar8,method_00);
        __this_01 = (__this->fields).bakeKeys;
        pUVar8 = UnityEngine_MeshFilter__get_sharedMesh
                           ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
        if (__this_01 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_058475a0;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar2 = (__this_01->fields)._items;
        if (pUVar2 == (UnityEngine_Mesh_array *)0x0) goto label_058475a0;
        uVar6 = (__this_01->fields)._size;
        if (uVar6 < (uint)pUVar2->max_length) {
          (__this_01->fields)._size = uVar6 + 1;
          pUVar2->m_Items[(int)uVar6] = pUVar8;
          Il2CppCodeGenWriteBarrier(pUVar2->m_Items + (int)uVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar8,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        __this_02 = (__this->fields).bakeValues;
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_ListVector3);
        System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
        if (__this_04 == (Outline_ListVector3_o *)0x0) goto label_058475a0;
        (__this_04->fields).data = pSVar9;
        Il2CppCodeGenWriteBarrier(&(__this_04->fields).data);
        pMVar4 = MethodInfo_System_Collections_Generic_List_Outline_ListVector3_Add;
        if (__this_02 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) goto label_058475a0;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pOVar3 = (__this_02->fields)._items;
        if (pOVar3 == (Outline_ListVector3_array *)0x0) goto label_058475a0;
        uVar6 = (__this_02->fields)._size;
        if (uVar6 < (uint)pOVar3->max_length) {
          (__this_02->fields)._size = uVar6 + 1;
          pOVar3->m_Items[(int)uVar6] = __this_04;
          Il2CppCodeGenWriteBarrier(pOVar3->m_Items + (int)uVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_04,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
      uVar10 = uVar10 + 1;
      uVar6 = (uint)pSVar7->max_length;
    } while ((int)uVar10 < (int)uVar6);
  }
  return;
}


// Outline$$LoadSmoothNormals
// il2cpp: void Outline__LoadSmoothNormals (Outline_o* __this, const MethodInfo* method);
// 0x5846900
// eh: try 0x5846b33..0x5846eb6 -> pad 0x5846f01 (+36 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5846f19..0x5846f1e -> pad 0x5846f3d cleanup
// eh: try 0x5846f40..0x5846f4a -> pad 0x5846fa3 catch (...) [compiler noexcept guard]
// eh: try 0x5846f64..0x5846f69 -> pad 0x5846f8e cleanup
// eh: try 0x5846f91..0x5846f9b -> pad 0x5846fa3 catch (...) [compiler noexcept guard]
// asm: 77 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5846ebb: jmp 0x5846f01
// asm:   0x5846ebd: jmp 0x5846f01
// asm:   0x5846ebf: jmp 0x5846f01
// asm:   0x5846ec1: jmp 0x5846f01
// asm:   0x5846ec3: jmp 0x5846f01
// asm:   0x5846ec5: jmp 0x5846f01
// asm:   0x5846ec7: jmp 0x5846f01
// asm:   0x5846ec9: jmp 0x5846f01
// asm:   0x5846ecb: jmp 0x5846f01
// asm:   0x5846ecd: jmp 0x5846f4c
// asm:   0x5846ecf: jmp 0x5846f01
// asm:   0x5846ed1: jmp 0x5846f01
// asm:   0x5846ed3: jmp 0x5846f01
// asm:   0x5846ed5: jmp 0x5846f01
// asm:   0x5846ed7: jmp 0x5846f01
// asm:   0x5846ed9: jmp 0x5846f01
// asm:   0x5846edb: jmp 0x5846f01
// asm:   0x5846edd: jmp 0x5846f01
// asm:   0x5846edf: jmp 0x5846f01
// asm:   0x5846ee1: jmp 0x5846f4c
// asm:   0x5846ee3: jmp 0x5846f4c
// asm:   0x5846ee5: jmp 0x5846f4c
// asm:   0x5846ee7: jmp 0x5846f4c
// asm:   0x5846ee9: jmp 0x5846f4c
// asm:   0x5846eeb: jmp 0x5846f4c
// asm:   0x5846eed: jmp 0x5846f01
// asm:   0x5846eef: jmp 0x5846f01
// asm:   0x5846ef1: jmp 0x5846f01
// asm:   0x5846ef3: jmp 0x5846f01
// asm:   0x5846ef5: jmp 0x5846f4c
// asm:   0x5846ef7: jmp 0x5846f4c
// asm:   0x5846ef9: jmp 0x5846f4c
// asm:   0x5846efb: jmp 0x5846f4c
// asm:   0x5846efd: jmp 0x5846f4c
// asm:   0x5846eff: jmp 0x5846f4c
// asm:   0x5846f01: mov rbx, rax
// asm:   0x5846f04: cmp edx, 1
// asm:   0x5846f07: jne 0x5846f40
// asm:   0x5846f09: mov rdi, rbx
// asm:   0x5846f0c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5846f11: mov rbx, qword ptr [rax]
// asm:   0x5846f14: mov qword ptr [rsp + 8], rbx
// asm:   0x5846f19: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5846f1e: lea rax, [rip + 0x1a475eb]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose
// asm:   0x5846f25: mov rsi, qword ptr [rax]
// asm:   0x5846f28: lea rdi, [rsp + 0x40]
// asm:   0x5846f2d: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5846f32: test rbx, rbx
// asm:   0x5846f35: je 0x5846cb9
// asm:   0x5846f3b: jmp 0x5846f86
// asm:   0x5846f3d: mov rbx, rax
// asm:   0x5846f40: lea rdi, [rsp + 8]
// asm:   0x5846f45: call 0x2fce100  ; il2cpp_runtime_helper_02fce100()
// asm:   0x5846f4a: jmp 0x5846f9b
// asm:   0x5846f4c: mov rbx, rax
// asm:   0x5846f4f: cmp edx, 1
// asm:   0x5846f52: jne 0x5846f91
// asm:   0x5846f54: mov rdi, rbx
// asm:   0x5846f57: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5846f5c: mov rbx, qword ptr [rax]
// asm:   0x5846f5f: mov qword ptr [rsp + 8], rbx
// asm:   0x5846f64: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5846f69: lea rax, [rip + 0x1a47b10]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_Dispose
// asm:   0x5846f70: mov rsi, qword ptr [rax]
// asm:   0x5846f73: lea rdi, [rsp + 0x20]
// asm:   0x5846f78: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5846f7d: test rbx, rbx
// asm:   0x5846f80: je 0x5846e70
// asm:   0x5846f86: mov rdi, rbx
// asm:   0x5846f89: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5846f8e: mov rbx, rax
// asm:   0x5846f91: lea rdi, [rsp + 8]
// asm:   0x5846f96: call 0x2fce130  ; il2cpp_runtime_helper_02fce130()
// asm:   0x5846f9b: mov rdi, rbx
// asm:   0x5846f9e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5846fa3: mov rdi, rax
// asm:   0x5846fa6: call 0x2ab61e0  ; __clang_call_terminate()

void Outline__LoadSmoothNormals(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  bool bVar2;
  int32_t index;
  uint32_t length;
  System_Object_array *pSVar3;
  System_Collections_Generic_HashSet_TSource__o *pSVar4;
  System_Predicate_T__o *pSVar5;
  UnityEngine_Mesh_o *pUVar6;
  Il2CppObject *pIVar7;
  Il2CppClass *uvs;
  Outline_o *pOVar8;
  UnityEngine_Material_array *pUVar9;
  UnityEngine_Mesh_o *__this_02;
  UnityEngine_Vector2_array *value;
  MethodInfo *method_00;
  MethodInfo **method_01;
  MethodInfo *method_02;
  Outline_o *pOVar10;
  undefined1 local_80 [16];
  Outline_o *local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  Outline_o *local_58;
  undefined1 local_48 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_40;
  Outline_o *local_38;
  
  if (Il2CppMethodInitialized_0754500b == '\0') {
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
    Il2CppMethodInitialized_0754500b = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_38 = (Outline_o *)0x0;
  local_68 = (undefined1  [8])0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_58 = (Outline_o *)0x0;
  pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_MeshFilter);
  pSVar4 = System_Linq_Enumerable__ToHashSet_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                      (MethodInfo_3500A90 *)MethodInfo_System_Linq_Enumerable_ToHashSet_MeshFilter);
  pSVar5 = (System_Predicate_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MeshFilter);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)pSVar5,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Outline_LoadSmoothNormals_b__46_0,(MethodInfo_3DC95B0 *)0x0);
  if (pSVar4 != (System_Collections_Generic_HashSet_TSource__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)pSVar4,pSVar5,
               (MethodInfo_4FB6160 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_RemoveWhere);
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,
               (System_Collections_Generic_HashSet_object__o *)pSVar4,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_GetEnumerator);
    local_38 = local_70;
    local_48 = (undefined1  [8])local_80._0_8_;
    pSStack_40 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_80._8_8_;
    local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_80._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48;
    while( true ) {
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_MoveNext);
      pOVar10 = local_38;
      if (!bVar2) break;
      if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
      }
      if (pOVar10 == (Outline_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_Outline->static_fields->registeredMeshes;
      pUVar6 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar10,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_HashSet_object___Add
                        (pSVar1,(Il2CppObject *)pUVar6,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
      if (bVar2) {
        __this_00 = (__this->fields).bakeKeys;
        pUVar6 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar10,(MethodInfo *)0x0)
        ;
        if (__this_00 == (System_Collections_Generic_List_Mesh__o *)0x0) {
          ThrowNullReferenceException();
        }
        index = System_Collections_Generic_List_object___IndexOf
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar6,
                           (MethodInfo_395E250 *)MethodInfo_System_Collections_Generic_List_Mesh_IndexOf);
        if (index < 0) {
          pOVar8 = pOVar10;
          pUVar6 = UnityEngine_MeshFilter__get_sharedMesh
                             ((UnityEngine_MeshFilter_o *)pOVar10,(MethodInfo *)0x0);
          uvs = (Il2CppClass *)Outline__SmoothNormals(pOVar8,pUVar6,method_02);
        }
        else {
          __this_01 = (__this->fields).bakeValues;
          if (__this_01 == (System_Collections_Generic_List_Outline_ListVector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar7 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_Outline_ListVector3_get_Item);
          if (pIVar7 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          uvs = pIVar7[1].klass;
        }
        pUVar6 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)pOVar10,(MethodInfo *)0x0)
        ;
        if (pUVar6 == (UnityEngine_Mesh_o *)0x0) {
          ThrowNullReferenceException();
        }
        method_00 = (MethodInfo *)0x0;
        UnityEngine_Mesh__SetUVs_68e9880
                  (pUVar6,3,(System_Collections_Generic_List_Vector3__o *)uvs,(MethodInfo *)0x0);
        pOVar8 = (Outline_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pOVar10,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pOVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pUVar6 = UnityEngine_MeshFilter__get_sharedMesh
                             ((UnityEngine_MeshFilter_o *)pOVar10,(MethodInfo *)0x0);
          if (pOVar8 == (Outline_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar9 = UnityEngine_Renderer__get_sharedMaterials
                             ((UnityEngine_Renderer_o *)pOVar8,(MethodInfo *)0x0);
          Outline__CombineSubmeshes(pOVar8,pUVar6,pUVar9,method_00);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose);
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer);
    pSVar4 = System_Linq_Enumerable__ToHashSet_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                        (MethodInfo_3500A90 *)MethodInfo_System_Linq_Enumerable_ToHashSet_SkinnedMeshRenderer)
    ;
    pSVar5 = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_SkinnedMeshRenderer);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)pSVar5,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Outline_LoadSmoothNormals_b__46_1,(MethodInfo_3DC95B0 *)0x0);
    if (pSVar4 != (System_Collections_Generic_HashSet_TSource__o *)0x0) {
      System_Collections_Generic_HashSet_object___RemoveWhere
                ((System_Collections_Generic_HashSet_object__o *)pSVar4,pSVar5,
                 (MethodInfo_4FB6160 *)
                 MethodInfo_System_Collections_Generic_HashSet_SkinnedMeshRenderer_RemoveWhere);
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,
                 (System_Collections_Generic_HashSet_object__o *)pSVar4,
                 (MethodInfo_4FB3DA0 *)
                 MethodInfo_System_Collections_Generic_HashSet_SkinnedMeshRenderer_GetEnumerator);
      local_58 = local_70;
      local_68 = (undefined1  [8])local_80._0_8_;
      uStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_80._8_8_;
      local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_80._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
      while( true ) {
        do {
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_MoveNext
                            );
          pOVar10 = local_58;
          if (!bVar2) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_SkinnedMeshRenderer_Dispose);
            return;
          }
          if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
          }
          if (pOVar10 == (Outline_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                   TypeInfo_Outline->static_fields->registeredMeshes;
          pUVar6 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                             ((UnityEngine_SkinnedMeshRenderer_o *)pOVar10,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          method_01 = &MethodInfo_System_Collections_Generic_HashSet_Mesh_Add;
          bVar2 = System_Collections_Generic_HashSet_object___Add
                            (pSVar1,(Il2CppObject *)pUVar6,
                             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_Add);
        } while (!bVar2);
        pUVar6 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pOVar10,(MethodInfo *)0x0);
        __this_02 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                              ((UnityEngine_SkinnedMeshRenderer_o *)pOVar10,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Mesh_o *)0x0) {
          ThrowNullReferenceException();
        }
        length = UnityEngine_Mesh__get_vertexCount(__this_02,(MethodInfo *)0x0);
        value = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,length);
        if (pUVar6 == (UnityEngine_Mesh_o *)0x0) break;
        UnityEngine_Mesh__set_uv4(pUVar6,value,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)pOVar10,(MethodInfo *)0x0);
        pUVar9 = UnityEngine_Renderer__get_sharedMaterials
                           ((UnityEngine_Renderer_o *)pOVar10,(MethodInfo *)0x0);
        Outline__CombineSubmeshes(pOVar10,pUVar6,pUVar9,(MethodInfo *)method_01);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Outline$$SmoothNormals
// il2cpp: System_Collections_Generic_List_Vector3__o* Outline__SmoothNormals (Outline_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x5847820
// eh: try 0x5847bdf..0x5847d6a -> pad 0x5848427 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5847ddf..0x5847ed6 -> pad 0x5848307 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5847f2f..0x584809a -> pad 0x5848419 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58480ef..0x58481db -> pad 0x58482de (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x584822f..0x5848256 -> pad 0x5848417 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x584826b..0x584828e -> pad 0x58482b6 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58482fd..0x58483dc -> pad 0x58483fb (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58483ef..0x584840b -> pad 0x5848461 catch (...) [compiler noexcept guard]
// eh: try 0x5848442..0x5848447 -> pad 0x584844c cleanup
// eh: try 0x584844f..0x5848459 -> pad 0x5848461 catch (...) [compiler noexcept guard]
// asm: 99 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5847975: jmp 0x5847990
// asm:   0x5847a25: jmp 0x5847a40
// asm:   0x5847b7e: lea r15, [rip + 0x1a31873]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5847b85: lea r14, [rip + 0x1a292bc]  ; TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int
// asm:   0x5847b8c: lea r12, [rip + 0x1a29325]  ; TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_Vector3_int
// asm:   0x5847b93: jmp 0x5847bae
// asm:   0x5847ba0: mov rbp, qword ptr [rsp + 0x18]
// asm:   0x5847ba5: test rbp, rbp
// asm:   0x5847ba8: je 0x58483bd
// asm:   0x5847bce: nop 
// asm:   0x5847da4: nop word ptr cs:[rax + rax]
// asm:   0x5847f7b: jmp 0x5847fa3
// asm:   0x58480be: nop 
// asm:   0x5848256: test r14, r14
// asm:   0x5848259: jne 0x58483cc
// asm:   0x584825f: lea r14, [rip + 0x1a28be2]  ; TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int
// asm:   0x5848266: jmp 0x5847ba0
// asm:   0x58482ae: jmp 0x58482de
// asm:   0x58482b0: jmp 0x58482de
// asm:   0x58482b2: jmp 0x58482de
// asm:   0x58482b4: jmp 0x5848307
// asm:   0x58482b6: mov rbp, rdx
// asm:   0x58482b9: mov r14, rax
// asm:   0x58482bc: movaps xmm0, xmmword ptr [rsp + 0x40]
// asm:   0x58482c1: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x58482c6: movss xmm0, dword ptr [rsp + 0x14]
// asm:   0x58482cc: movss dword ptr [rsp + 4], xmm0
// asm:   0x58482d2: jmp 0x584830d
// asm:   0x58482d4: jmp 0x5848307
// asm:   0x58482d6: jmp 0x58482de
// asm:   0x58482d8: jmp 0x5848307
// asm:   0x58482da: jmp 0x58482de
// asm:   0x58482dc: jmp 0x5848307
// asm:   0x58482de: mov rbp, rdx
// asm:   0x58482e1: mov r14, rax
// asm:   0x58482e4: cmp ebp, 1
// asm:   0x58482e7: jne 0x5848401
// asm:   0x58482ed: mov rdi, r14
// asm:   0x58482f0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58482f5: mov r14, qword ptr [rax]
// asm:   0x58482f8: mov qword ptr [rsp + 0x30], r14
// asm:   0x58482fd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5848302: jmp 0x58481e3
// asm:   0x5848307: mov rbp, rdx
// asm:   0x584830a: mov r14, rax
// asm:   0x584830d: cmp ebp, 1
// asm:   0x5848310: jne 0x58483ef
// asm:   0x5848316: mov rdi, r14
// asm:   0x5848319: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x584831e: mov rbp, qword ptr [rax]
// asm:   0x5848321: mov qword ptr [rsp + 0x30], rbp
// asm:   0x5848326: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x584832b: jmp 0x5847ee2
// asm:   0x58483cc: mov rdi, r14
// asm:   0x58483cf: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58483d4: mov rdi, rbp
// asm:   0x58483d7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58483e1: mov rdi, r14
// asm:   0x58483e4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58483e9: mov rbp, rdx
// asm:   0x58483ec: mov r14, rax
// asm:   0x58483ef: lea rdi, [rsp + 0x30]
// asm:   0x58483f4: call 0x2fce160  ; il2cpp_runtime_helper_02fce160()
// asm:   0x58483f9: jmp 0x584842d
// asm:   0x58483fb: mov rbp, rdx
// asm:   0x58483fe: mov r14, rax
// asm:   0x5848401: lea rdi, [rsp + 0x30]
// asm:   0x5848406: call 0x2fce1f0  ; il2cpp_runtime_helper_02fce1f0()
// asm:   0x584840b: jmp 0x584842d
// asm:   0x584840d: jmp 0x5848427
// asm:   0x584840f: jmp 0x5848427
// asm:   0x5848411: jmp 0x5848427
// asm:   0x5848413: jmp 0x5848427
// asm:   0x5848415: jmp 0x5848427
// asm:   0x5848417: jmp 0x5848427
// asm:   0x5848419: jmp 0x5848427
// asm:   0x584841b: jmp 0x5848427
// asm:   0x584841d: jmp 0x5848427
// asm:   0x584841f: jmp 0x5848427
// asm:   0x5848421: jmp 0x5848427
// asm:   0x5848423: jmp 0x5848427
// asm:   0x5848425: jmp 0x5848427
// asm:   0x5848427: mov rbp, rdx
// asm:   0x584842a: mov r14, rax
// asm:   0x584842d: cmp ebp, 1
// asm:   0x5848430: jne 0x584844f
// asm:   0x5848432: mov rdi, r14
// asm:   0x5848435: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x584843a: mov r14, qword ptr [rax]
// asm:   0x584843d: mov qword ptr [rsp + 0x58], r14
// asm:   0x5848442: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5848447: jmp 0x5848333
// asm:   0x584844c: mov r14, rax
// asm:   0x584844f: lea rdi, [rsp + 0x58]
// asm:   0x5848454: call 0x2fce280  ; il2cpp_runtime_helper_02fce280()
// asm:   0x5848459: mov rdi, r14
// asm:   0x584845c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5848461: mov rdi, rax
// asm:   0x5848464: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_Vector3__o *
Outline__SmoothNormals(Outline_o *__this,UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Vector3_array *pUVar9;
  System_Func_Vector3__int__KeyValuePair_Vector3__int___o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  Outline___c_StaticFields *pOVar10;
  System_Func_KeyValuePair_Vector3__int___Vector3__o *__this_01;
  Il2CppObject *pIVar11;
  System_Collections_Generic_List_Vector3__o *__this_02;
  VirtualInvokeData *pVVar12;
  Il2CppObject *pIVar13;
  int32_t index;
  int32_t index_00;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar17;
  float local_94;
  Il2CppObject *local_90;
  float local_84;
  Il2CppObject *local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  Il2CppObject **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_0754500c == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197568);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c_SmoothNormals_b__47_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c_SmoothNormals_b__47_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c);
    Il2CppMethodInitialized_0754500c = '\x01';
  }
  local_80 = (Il2CppObject *)0x0;
  local_90 = (Il2CppObject *)0x0;
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    pUVar9 = UnityEngine_Mesh__get_vertices(mesh,(MethodInfo *)0x0);
    if ((TypeInfo_Outline_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline_c);
      pOVar10 = TypeInfo_Outline_c->static_fields;
      __this_00 = pOVar10->__9__47_0;
    }
    else {
      pOVar10 = TypeInfo_Outline_c->static_fields;
      __this_00 = pOVar10->__9__47_0;
    }
    if (__this_00 == (System_Func_Vector3__int__KeyValuePair_Vector3__int___o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Outline_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline_c);
        pOVar10 = TypeInfo_Outline_c->static_fields;
      }
      pIVar11 = (Il2CppObject *)pOVar10->__9;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_Vector3_int_KeyValuePair_Vector3_int);
      System_Func_Vector3__int__KeyValuePair_Vector3__int_____ctor
                (__this_00,pIVar11,(intptr_t)MethodInfo_Outline_c_SmoothNormals_b__47_0,
                 (MethodInfo_4F24710 *)0x0);
      pOVar10 = TypeInfo_Outline_c->static_fields;
      pOVar10->__9__47_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pOVar10->__9__47_0);
    }
    source = System_Linq_Enumerable__Select_Vector3__KeyValuePair_Vector3__int__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar9,
                        (System_Func_TSource__int__TResult__o *)__this_00,
                        (MethodInfo_34F6760 *)
                        MethodInfo_System_Linq_Enumerable_Select_Vector3_KeyValuePair_Vector3_int);
    if ((TypeInfo_Outline_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline_c);
      pOVar10 = TypeInfo_Outline_c->static_fields;
      __this_01 = pOVar10->__9__47_1;
    }
    else {
      pOVar10 = TypeInfo_Outline_c->static_fields;
      __this_01 = pOVar10->__9__47_1;
    }
    if (__this_01 == (System_Func_KeyValuePair_Vector3__int___Vector3__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Outline_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline_c);
        pOVar10 = TypeInfo_Outline_c->static_fields;
      }
      pIVar11 = (Il2CppObject *)pOVar10->__9;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_Vector3_int_Vector3);
      System_Func_KeyValuePair_Vector3__int___Vector3____ctor
                (__this_01,pIVar11,(intptr_t)MethodInfo_Outline_c_SmoothNormals_b__47_1,
                 (MethodInfo_4F106E0 *)0x0);
      pOVar10 = TypeInfo_Outline_c->static_fields;
      pOVar10->__9__47_1 = __this_01;
      Il2CppCodeGenWriteBarrier(&pOVar10->__9__47_1);
    }
    pIVar11 = (Il2CppObject *)
              System_Linq_Enumerable__GroupBy_KeyValuePair_Vector3__int___Vector3_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TKey__o *)__this_01,
                         (MethodInfo_34EE500 *)
                         MethodInfo_System_Linq_Enumerable_GroupBy_KeyValuePair_Vector3_int_Vector3);
    pUVar9 = UnityEngine_Mesh__get_normals(mesh,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_39ff120
              (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pUVar9,
               (MethodInfo_39FF120 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197568);
    if (pIVar11 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar11->klass;
      uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_IGrouping_Vector3__KeyValuePair_Vector3__int____c **)
               ((long)&pIVar3->interfaceType + lVar15) ==
              TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_Vector3_KeyValuePair_Vector3_int) {
            pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
            goto label_05847b51;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar14 * 0x10 != lVar15);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar11,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_Vector3_KeyValuePair_Vector3_int
                           ,0);
label_05847b51:
      pIVar11 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
      local_40 = 0;
      local_38 = &local_80;
joined_r0x05847b78:
      do {
        local_80 = pIVar11;
        if (pIVar11 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar11->klass;
        uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar14 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar15) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
              goto label_05847c03;
            }
            lVar15 = lVar15 + 0x10;
          } while (uVar14 * 0x10 != lVar15);
        }
        pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05847c03:
        cVar6 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
        pIVar11 = local_80;
        if (cVar6 == '\0') {
          if (local_80 == (Il2CppObject *)0x0) {
            return __this_02;
          }
          pIVar2 = local_80->klass;
          uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar14 == 0) goto label_0584837f;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar15 = 0;
          goto label_05848370;
        }
        if (local_80 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_80->klass;
        uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar14 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_IGrouping_Vector3__KeyValuePair_Vector3__int____c **)
                 ((long)&pIVar3->interfaceType + lVar15) ==
                TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int) {
              pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
              goto label_05847c83;
            }
            lVar15 = lVar15 + 0x10;
          } while (uVar14 * 0x10 != lVar15);
        }
        pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_80,(Il2CppClass *)
                                      TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_Vector3_KeyValuePair_Vector3_int
                             ,0);
label_05847c83:
        pIVar13 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
        iVar8 = System_Linq_Enumerable__Count_KeyValuePair_Vector3__int__
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar13,
                           (MethodInfo_34E6EA0 *)
                           MethodInfo_System_Linq_Enumerable_Count_KeyValuePair_Vector3_int);
        pIVar11 = local_80;
        if (iVar8 != 1) {
          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b6 = '\x01';
          }
          if (pIVar13 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_58._0_4_ = (pUVar4->zeroVector).fields.x;
          local_58._4_4_ = (pUVar4->zeroVector).fields.y;
          uStack_50 = 0;
          local_84 = (pUVar4->zeroVector).fields.z;
          pIVar2 = pIVar13->klass;
          uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar14 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(System_Collections_Generic_IEnumerable_KeyValuePair_Vector3__int___c **)
                   ((long)&pIVar3->interfaceType + lVar15) ==
                  TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_Vector3_int) {
                pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
                goto label_05847d61;
              }
              lVar15 = lVar15 + 0x10;
            } while (uVar14 * 0x10 != lVar15);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar13,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_Vector3_int
                               ,0);
label_05847d61:
          local_90 = (*pVVar12->methodPtr)(pIVar13,pVVar12->method);
          local_68 = 0;
          local_60 = &local_90;
          local_94 = local_84;
          uStack_70 = uStack_50;
          local_78 = (undefined1  [8])local_58;
          if (local_90 == (Il2CppObject *)0x0) {
label_05847ed1:
            ThrowNullReferenceException();
          }
          do {
            pIVar11 = local_90;
            pIVar2 = local_90->klass;
            uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar14 != 0) {
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar15 = 0;
              do {
                if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar15) ==
                    TypeInfo_System_Collections_IEnumerator) {
                  pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
                  goto label_05847e03;
                }
                lVar15 = lVar15 + 0x10;
              } while (uVar14 * 0x10 != lVar15);
            }
            pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_90,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05847e03:
            bVar7 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
            pIVar11 = local_90;
            if (!bVar7) goto label_05847ee0;
            if (local_90 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar2 = local_90->klass;
            uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar14 != 0) {
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar15 = 0;
              do {
                if (*(System_Collections_Generic_IEnumerator_KeyValuePair_Vector3__int___c **)
                     ((long)&pIVar3->interfaceType + lVar15) ==
                    TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_Vector3_int) {
                  pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
                  goto label_05847e83;
                }
                lVar15 = lVar15 + 0x10;
              } while (uVar14 * 0x10 != lVar15);
            }
            pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_90,(Il2CppClass *)
                                          TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_Vector3_int
                                 ,0);
label_05847e83:
            (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
            if (__this_02 == (System_Collections_Generic_List_Vector3__o *)0x0) {
              ThrowNullReferenceException();
            }
            UVar17 = System_Collections_Generic_List_Vector3___get_Item
                               (__this_02,index,
                                (MethodInfo_39FF5D0 *)
                                MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            local_78._4_4_ = (float)local_78._4_4_ + UVar17.fields.y;
            local_78._0_4_ = (float)local_78._0_4_ + UVar17.fields.x;
            uStack_70._0_4_ = (float)uStack_70 + extraout_XMM0_Dc;
            uStack_70._4_4_ = uStack_70._4_4_ + extraout_XMM0_Dd;
            local_94 = local_94 + UVar17.fields.z;
            if (local_90 == (Il2CppObject *)0x0) goto label_05847ed1;
          } while( true );
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
label_05847ee0:
  if (local_90 != (Il2CppObject *)0x0) {
    pIVar2 = local_90->klass;
    uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar15) == TypeInfo_System_IDisposable)
        {
          pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
          goto label_05847f4d;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05847f4d:
    (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar16 = local_94 * local_94 +
           (float)local_78._4_4_ * (float)local_78._4_4_ + (float)local_78._0_4_ * (float)local_78._0_4_;
  if (fVar16 < 0.0) {
    fVar16 = sqrtf(fVar16);
  }
  else {
    fVar16 = SQRT(fVar16);
  }
  if (1e-05 < fVar16) {
    local_94 = local_94 / fVar16;
    auVar5._4_4_ = fVar16;
    auVar5._0_4_ = fVar16;
    auVar5._8_4_ = fVar16;
    auVar5._12_4_ = fVar16;
    _local_78 = divps(_local_78,auVar5);
  }
  else {
    local_94 = 0.0;
    _local_78 = ZEXT816(0);
  }
  pIVar2 = pIVar13->klass;
  uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar14 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar15) ==
          (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_Vector3_int) {
        pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
        goto label_05848091;
      }
      lVar15 = lVar15 + 0x10;
    } while (uVar14 * 0x10 != lVar15);
  }
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar13,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_Vector3_int,0);
label_05848091:
  pIVar11 = (Il2CppObject *)(*pVVar12->methodPtr)(pIVar13,pVVar12->method);
  local_68 = 0;
  local_60 = &local_90;
  do {
    local_90 = pIVar11;
    if (pIVar11 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar11->klass;
    uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar15) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
          goto label_05848113;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05848113:
    cVar6 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
    pIVar13 = local_90;
    if (cVar6 == '\0') break;
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_90->klass;
    uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_KeyValuePair_Vector3__int___c **)
             ((long)&pIVar3->interfaceType + lVar15) ==
            TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_Vector3_int) {
          pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
          goto label_05848193;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_90,(Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_Vector3_int,0);
label_05848193:
    (*pVVar12->methodPtr)(pIVar13,pVVar12->method);
    if (__this_02 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar17.fields.z = local_94;
    UVar17.fields.x = (float)local_78._0_4_;
    UVar17.fields.y = (float)local_78._4_4_;
    System_Collections_Generic_List_Vector3___set_Item
              (__this_02,index_00,UVar17,
               (MethodInfo_39FF620 *)MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
    pIVar11 = local_90;
  } while( true );
  pIVar11 = local_80;
  if (local_90 != (Il2CppObject *)0x0) {
    pIVar2 = local_90->klass;
    uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar15) == TypeInfo_System_IDisposable)
        {
          pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
          goto label_0584824d;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0584824d:
    (*pVVar12->methodPtr)(pIVar13,pVVar12->method);
    pIVar11 = local_80;
  }
  goto joined_r0x05847b78;
  while (lVar15 = lVar15 + 0x10, uVar14 * 0x10 != lVar15) {
label_05848370:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      pVVar12 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
      goto label_0584839d;
    }
  }
label_0584837f:
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(local_80,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0584839d:
  (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
  return __this_02;
}


// Outline$$CombineSubmeshes
// il2cpp: void Outline__CombineSubmeshes (Outline_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Material_array* materials, const MethodInfo* method);
// 0x5848480

void Outline__CombineSubmeshes
               (Outline_o *__this,UnityEngine_Mesh_o *mesh,UnityEngine_Material_array *materials,
               MethodInfo *method)

{
  int32_t iVar1;
  System_Int32_array *triangles;
  
  if (mesh == (UnityEngine_Mesh_o *)0x0) {
label_05848500:
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
  if (iVar1 != 1) {
    iVar1 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
    if (materials == (UnityEngine_Material_array *)0x0) goto label_05848500;
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


// Outline$$UpdateMaterialProperties
// il2cpp: void Outline__UpdateMaterialProperties (Outline_o* __this, const MethodInfo* method);
// 0x58475e0

void Outline__UpdateMaterialProperties(Outline_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  int32_t fillZTest;
  int32_t maskZTest;
  MethodInfo *in_R8;
  float width;
  
  if (Il2CppMethodInitialized_0754500d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_OutlineColor");
    Il2CppMethodInitialized_0754500d = '\x01';
  }
  pUVar1 = (__this->fields).outlineFillMaterial;
  if (pUVar1 == (UnityEngine_Material_o *)0x0) {
label_058476f7:
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetColor
            (pUVar1,"_OutlineColor",(UnityEngine_Color_o)(__this->fields).outlineColor.fields,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields).outlineFillLightenMaterial;
  if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_058476f7;
  UnityEngine_Material__SetColor
            (pUVar1,"_OutlineColor",(UnityEngine_Color_o)(__this->fields).outlineColor.fields,
             (MethodInfo *)0x0);
  switch((__this->fields).outlineMode) {
  case 0:
    width = (__this->fields).outlineWidth;
    maskZTest = 8;
    break;
  case 1:
    width = (__this->fields).outlineWidth;
    maskZTest = 8;
    fillZTest = 4;
    goto label_058476c3;
  case 2:
    width = (__this->fields).outlineWidth;
    maskZTest = 8;
    goto label_058476be;
  case 3:
    width = (__this->fields).outlineWidth;
    maskZTest = 4;
    break;
  case 4:
    width = 0.0;
    maskZTest = 4;
label_058476be:
    fillZTest = 5;
    goto label_058476c3;
  case 5:
    Outline__ApplyOutlineState(__this,8,4,5,(__this->fields).outlineWidth,in_R8);
    return;
  default:
    return;
  }
  fillZTest = 8;
label_058476c3:
  Outline__ApplyOutlineState(__this,maskZTest,fillZTest,1,width,in_R8);
  return;
}


// Outline$$ApplyOutlineState
// il2cpp: void Outline__ApplyOutlineState (Outline_o* __this, int32_t maskZTest, int32_t fillZTest, int32_t fillLightenZTest, float width, const MethodInfo* method);
// 0x5848510

void Outline__ApplyOutlineState
               (Outline_o *__this,int32_t maskZTest,int32_t fillZTest,int32_t fillLightenZTest,float width,
               MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754500e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_ZTest");
    il2cpp_codegen_initialize_runtime_metadata(&"_OutlineWidth");
    Il2CppMethodInitialized_0754500e = '\x01';
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
// 0x5848600

void Outline___ctor(Outline_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Mesh__o *__this_00;
  System_Collections_Generic_List_Outline_ListVector3__o *__this_01;
  UnityEngine_Material_array *pUVar1;
  System_Collections_Generic_List_string__o *__this_02;
  
  if (Il2CppMethodInitialized_0754500f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Outline_ListVector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Outline_ListVector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    Il2CppMethodInitialized_0754500f = '\x01';
  }
  (__this->fields).outlineColor.fields.r = 1.0;
  (__this->fields).outlineColor.fields.g = 1.0;
  (__this->fields).outlineColor.fields.b = 1.0;
  (__this->fields).outlineColor.fields.a = 1.0;
  (__this->fields).outlineWidth = 2.0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Mesh_ctor);
  (__this->fields).bakeKeys = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bakeKeys);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Outline_ListVector3);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Outline_ListVector3_ctor);
  (__this->fields).bakeValues = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bakeValues);
  pUVar1 = (UnityEngine_Material_array *)SZArrayNew(TypeInfo_UnityEngine_Material_array,0);
  (__this->fields).outlineMaterials = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).outlineMaterials);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._namesToIgnore = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._namesToIgnore);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Outline$$.cctor
// il2cpp: void Outline___cctor (const MethodInfo* method);
// 0x5848760

void Outline___cctor(MethodInfo *method)

{
  Outline_StaticFields *pOVar1;
  System_Collections_Generic_HashSet_Mesh__o *__this;
  System_Collections_Generic_Stack_int__o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545010 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    Il2CppMethodInitialized_07545010 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Mesh);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Mesh_ctor);
  TypeInfo_Outline->static_fields->registeredMeshes = __this;
  method_00 = (MethodInfo *)TypeInfo_Outline->static_fields;
  Il2CppCodeGenWriteBarrier((void **)method_00);
  pSVar2 = Outline__CreateQueueBlocks(method_00);
  pOVar1 = TypeInfo_Outline->static_fields;
  pOVar1->freeQueueBlocks = pSVar2;
  Il2CppCodeGenWriteBarrier(&pOVar1->freeQueueBlocks);
  return;
}


// Outline$$<FindRenderers>b__39_0
// il2cpp: bool Outline___FindRenderers_b__39_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x5848810

bool Outline___FindRenderers_b__39_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  UnityEngine_Renderer_o *pUVar3;
  UnityEngine_Renderer_c *pUVar4;
  System_Collections_Generic_List_string__o *source;
  bool bVar5;
  Outline___c__DisplayClass39_0_o *__this_00;
  System_Func_string__bool__o *__this_01;
  
  if (Il2CppMethodInitialized_07545011 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c__DisplayClass39_0_FindRenderers_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c__DisplayClass39_0);
    Il2CppMethodInitialized_07545011 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_c__DisplayClass39_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Outline___c__DisplayClass39_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).e = e;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).e);
  pUVar3 = (__this_00->fields).e;
  if (pUVar3 == (UnityEngine_Renderer_o *)0x0) {
    return false;
  }
  pUVar4 = pUVar3->klass;
  bVar1 = (pUVar4->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pUVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) {
    bVar2 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
    if (bVar1 < bVar2) {
      return false;
    }
    if ((pUVar4->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer) {
      return false;
    }
  }
  source = (__this->fields)._namesToIgnore;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_Outline_c__DisplayClass39_0_FindRenderers_b__1,(MethodInfo_4F19300 *)0x0);
  bVar5 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_01,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
  return !bVar5;
}


// Outline$$<OnEnable>b__40_0
// il2cpp: bool Outline___OnEnable_b__40_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x5848970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5848b4c: test eax, eax

bool Outline___OnEnable_b__40_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Material_o *item;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_Material_array *pUVar6;
  System_Collections_Generic_List_TSource__o *__this_00;
  ulong uVar7;
  ulong uVar8;
  
  if (Il2CppMethodInitialized_07545012 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545012 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if (!bVar5) {
label_05848b1a:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
    return !bVar5;
  }
  if (e != (UnityEngine_Renderer_o *)0x0) {
    pUVar6 = UnityEngine_Renderer__get_sharedMaterials(e,(MethodInfo *)0x0);
    __this_00 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar6,
                           (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_Material);
    pUVar6 = (__this->fields).outlineMaterials;
    if ((pUVar6 != (UnityEngine_Material_array *)0x0) &&
       (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0)) {
      if (0 < (int)pUVar6->max_length) {
        uVar7 = pUVar6->max_length & 0xffffffff;
        uVar8 = 0;
        do {
          if (uVar7 <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          item = pUVar6->m_Items[uVar8];
          bVar5 = System_Collections_Generic_List_object___Contains
                            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                             (MethodInfo_395D6D0 *)
                             MethodInfo_System_Collections_Generic_List_Material_Contains);
          pMVar4 = MethodInfo_System_Collections_Generic_List_Material_Add;
          if (!bVar5) {
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_00->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_05848b4e;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)pUVar6->max_length;
          uVar7 = (ulong)uVar2;
        } while ((long)uVar8 < (long)(int)uVar2);
        if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_05848b4e;
      }
      pUVar6 = (UnityEngine_Material_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_Material_ToArray);
      UnityEngine_Renderer__set_materials(e,pUVar6,(MethodInfo *)0x0);
      goto label_05848b1a;
    }
  }
label_05848b4e:
  ThrowNullReferenceException();
}


// Outline$$<OnDisable>b__43_0
// il2cpp: bool Outline___OnDisable_b__43_0 (Outline_o* __this, UnityEngine_Renderer_o* e, const MethodInfo* method);
// 0x5848b60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5848c2d: nop dword ptr [rax]
// asm:   0x5848cad: test eax, eax

bool Outline___OnDisable_b__43_0(Outline_o *__this,UnityEngine_Renderer_o *e,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_Material_array *pUVar3;
  System_Collections_Generic_List_TSource__o *__this_00;
  ulong uVar4;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_07545013 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545013 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if (!bVar2) {
label_05848c7b:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
    return !bVar2;
  }
  if (e != (UnityEngine_Renderer_o *)0x0) {
    pUVar3 = UnityEngine_Renderer__get_sharedMaterials(e,(MethodInfo *)0x0);
    __this_00 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar3,
                           (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_Material);
    pUVar3 = (__this->fields).outlineMaterials;
    if ((pUVar3 != (UnityEngine_Material_array *)0x0) &&
       (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0)) {
      if (0 < (int)pUVar3->max_length) {
        uVar4 = pUVar3->max_length & 0xffffffff;
        uVar5 = 0;
        do {
          if (uVar4 <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (Il2CppObject *)pUVar3->m_Items[uVar5],
                     (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_Material_Remove);
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pUVar3->max_length;
          uVar4 = (ulong)uVar1;
        } while ((long)uVar5 < (long)(int)uVar1);
        if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_05848caf;
      }
      pUVar3 = (UnityEngine_Material_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_Material_ToArray);
      UnityEngine_Renderer__set_materials(e,pUVar3,(MethodInfo *)0x0);
      goto label_05848c7b;
    }
  }
label_05848caf:
  ThrowNullReferenceException();
}


// Outline$$<LoadSmoothNormals>b__46_0
// il2cpp: bool Outline___LoadSmoothNormals_b__46_0 (Outline_o* __this, UnityEngine_MeshFilter_o* e, const MethodInfo* method);
// 0x5848cc0

bool Outline___LoadSmoothNormals_b__46_0(Outline_o *__this,UnityEngine_MeshFilter_o *e,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  System_Collections_Generic_List_string__o *source;
  bool bVar1;
  bool bVar2;
  Outline___c__DisplayClass46_0_o *__this_00;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (Il2CppMethodInitialized_07545014 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c__DisplayClass46_0_LoadSmoothNormals_b__2)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c__DisplayClass46_0);
    Il2CppMethodInitialized_07545014 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_c__DisplayClass46_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Outline___c__DisplayClass46_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).e = e;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).e);
  exists = (UnityEngine_Object_o *)(__this_00->fields).e;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (!bVar1) {
    source = (__this->fields)._namesToIgnore;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_Outline_c__DisplayClass46_0_LoadSmoothNormals_b__2,
               (MethodInfo_4F19300 *)0x0);
    source_00 = System_Linq_Enumerable__Where_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_01,
                           (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
    bVar2 = System_Linq_Enumerable__Any_object_
                      (source_00,(MethodInfo_34DF4F0 *)MethodInfo_System_Linq_Enumerable_Any_string);
    bVar2 = !bVar2;
  }
  return bVar2;
}


// Outline$$<LoadSmoothNormals>b__46_1
// il2cpp: bool Outline___LoadSmoothNormals_b__46_1 (Outline_o* __this, UnityEngine_SkinnedMeshRenderer_o* e, const MethodInfo* method);
// 0x5848e10

bool Outline___LoadSmoothNormals_b__46_1
               (Outline_o *__this,UnityEngine_SkinnedMeshRenderer_o *e,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  System_Collections_Generic_List_string__o *source;
  bool bVar1;
  bool bVar2;
  Outline___c__DisplayClass46_1_o *__this_00;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (Il2CppMethodInitialized_07545015 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c__DisplayClass46_1_LoadSmoothNormals_b__3)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_c__DisplayClass46_1);
    Il2CppMethodInitialized_07545015 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Outline_c__DisplayClass46_1);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Outline___c__DisplayClass46_1_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).e = e;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).e);
  exists = (UnityEngine_Object_o *)(__this_00->fields).e;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (!bVar1) {
    source = (__this->fields)._namesToIgnore;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_Outline_c__DisplayClass46_1_LoadSmoothNormals_b__3,
               (MethodInfo_4F19300 *)0x0);
    source_00 = System_Linq_Enumerable__Where_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_01,
                           (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
    bVar2 = System_Linq_Enumerable__Any_object_
                      (source_00,(MethodInfo_34DF4F0 *)MethodInfo_System_Linq_Enumerable_Any_string);
    bVar2 = !bVar2;
  }
  return bVar2;
}


