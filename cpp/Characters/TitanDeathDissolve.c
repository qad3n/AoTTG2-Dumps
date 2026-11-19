// Type: Characters.TitanDeathDissolve
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/TitanDeathDissolve.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanDeathDissolve.SteamSource$$.ctor
// il2cpp: void Characters_TitanDeathDissolve_SteamSource___ctor (Characters_TitanDeathDissolve_SteamSource_o __this, UnityEngine_Mesh_o* mesh, bool regrowing, float growth, const MethodInfo* method);
// 0x5c4ab00

void Characters_TitanDeathDissolve_SteamSource___ctor
               (Characters_TitanDeathDissolve_SteamSource_o *__this,UnityEngine_Mesh_o *mesh,bool regrowing,
               float growth,MethodInfo *method)

{
  (__this->fields).Mesh = mesh;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Regrowing = regrowing;
  (__this->fields).Growth = growth;
  return;
}


// Characters.TitanDeathDissolve.Part$$.ctor
// il2cpp: void Characters_TitanDeathDissolve_Part___ctor (Characters_TitanDeathDissolve_Part_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Material_array* materials, UnityEngine_MaterialPropertyBlock_o* properties, int32_t layer, int32_t shadows, float dissolvedProgress, System_Nullable_Matrix4x4__o localMatrix, const MethodInfo* method);
// 0x5c4af10

void Characters_TitanDeathDissolve_Part___ctor
               (Characters_TitanDeathDissolve_Part_o *__this,UnityEngine_Mesh_o *mesh,
               UnityEngine_Material_array *materials,UnityEngine_MaterialPropertyBlock_o *properties,
               int32_t layer,int32_t shadows,float dissolvedProgress,System_Nullable_Matrix4x4__o localMatrix,
               MethodInfo *method)

{
  UnityEngine_Matrix4x4_StaticFields *pUVar1;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (Il2CppMethodInitialized_07547849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Matrix4x4_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Matrix4x4_get_HasValue);
    Il2CppMethodInitialized_07547849 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Mesh = mesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Mesh);
  (__this->fields).Materials = materials;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Materials);
  (__this->fields).Properties = properties;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Properties);
  (__this->fields).Layer = layer;
  (__this->fields).Shadows = shadows;
  (__this->fields).DissolvedProgress = dissolvedProgress;
  if (localMatrix.fields.hasValue == false) {
    if (Il2CppMethodInitialized_0754773d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
      Il2CppMethodInitialized_0754773d = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
    uStack_b8._0_4_ = (pUVar1->identityMatrix).fields.m00;
    uStack_b8._4_4_ = (pUVar1->identityMatrix).fields.m10;
    uStack_b0._0_4_ = (pUVar1->identityMatrix).fields.m20;
    uStack_b0._4_4_ = (pUVar1->identityMatrix).fields.m30;
    uStack_a8._0_4_ = (pUVar1->identityMatrix).fields.m01;
    uStack_a8._4_4_ = (pUVar1->identityMatrix).fields.m11;
    uStack_a0._0_4_ = (pUVar1->identityMatrix).fields.m21;
    uStack_a0._4_4_ = (pUVar1->identityMatrix).fields.m31;
    uStack_98._0_4_ = (pUVar1->identityMatrix).fields.m02;
    uStack_98._4_4_ = (pUVar1->identityMatrix).fields.m12;
    uStack_90._0_4_ = (pUVar1->identityMatrix).fields.m22;
    uStack_90._4_4_ = (pUVar1->identityMatrix).fields.m32;
    uStack_88._0_4_ = (pUVar1->identityMatrix).fields.m03;
    uStack_88._4_4_ = (pUVar1->identityMatrix).fields.m13;
    uStack_80._0_4_ = (pUVar1->identityMatrix).fields.m23;
    uStack_80._4_4_ = (pUVar1->identityMatrix).fields.m33;
  }
  else {
    uStack_b8 = localMatrix.fields.value.fields._0_8_;
    uStack_b0 = localMatrix.fields.value.fields._8_8_;
    uStack_a8 = localMatrix.fields.value.fields._16_8_;
    uStack_a0 = localMatrix.fields.value.fields._24_8_;
    uStack_98 = localMatrix.fields.value.fields._32_8_;
    uStack_90 = localMatrix.fields.value.fields._40_8_;
    uStack_88 = localMatrix.fields.value.fields._48_8_;
    uStack_80 = localMatrix.fields.value.fields._56_8_;
  }
  (__this->fields).LocalMatrix.fields.m03 = (float)(undefined4)uStack_88;
  (__this->fields).LocalMatrix.fields.m13 = (float)uStack_88._4_4_;
  (__this->fields).LocalMatrix.fields.m23 = (float)uStack_80;
  (__this->fields).LocalMatrix.fields.m33 = uStack_80._4_4_;
  (__this->fields).LocalMatrix.fields.m02 = (float)(undefined4)uStack_98;
  (__this->fields).LocalMatrix.fields.m12 = (float)uStack_98._4_4_;
  (__this->fields).LocalMatrix.fields.m22 = (float)(undefined4)uStack_90;
  (__this->fields).LocalMatrix.fields.m32 = (float)uStack_90._4_4_;
  (__this->fields).LocalMatrix.fields.m01 = (float)(undefined4)uStack_a8;
  (__this->fields).LocalMatrix.fields.m11 = (float)uStack_a8._4_4_;
  (__this->fields).LocalMatrix.fields.m21 = (float)(undefined4)uStack_a0;
  (__this->fields).LocalMatrix.fields.m31 = (float)uStack_a0._4_4_;
  (__this->fields).LocalMatrix.fields.m00 = (float)(undefined4)uStack_b8;
  (__this->fields).LocalMatrix.fields.m10 = (float)uStack_b8._4_4_;
  (__this->fields).LocalMatrix.fields.m20 = (float)(undefined4)uStack_b0;
  (__this->fields).LocalMatrix.fields.m30 = (float)uStack_b0._4_4_;
  return;
}


// Characters.TitanDeathDissolve$$get_CollidersDisabled
// il2cpp: bool Characters_TitanDeathDissolve__get_CollidersDisabled (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x5c48260

bool Characters_TitanDeathDissolve__get_CollidersDisabled
               (Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  return (__this->fields)._CollidersDisabled_k__BackingField;
}


// Characters.TitanDeathDissolve$$set_CollidersDisabled
// il2cpp: void Characters_TitanDeathDissolve__set_CollidersDisabled (Characters_TitanDeathDissolve_o* __this, bool value, const MethodInfo* method);
// 0x5c48270

void Characters_TitanDeathDissolve__set_CollidersDisabled
               (Characters_TitanDeathDissolve_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._CollidersDisabled_k__BackingField = value;
  return;
}


// Characters.TitanDeathDissolve$$.ctor
// il2cpp: void Characters_TitanDeathDissolve___ctor (Characters_TitanDeathDissolve_o* __this, Characters_BaseTitan_o* titan, UnityEngine_SkinnedMeshRenderer_o* body, float scale, System_Func_Renderer__bool__o* isFlesh, const MethodInfo* method);
// 0x5c48280
// eh: try 0x5c4873a..0x5c49d1d -> pad 0x5c49e45 (+99 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c49e69..0x5c49e6e -> pad 0x5c49e78 cleanup
// eh: try 0x5c49e7b..0x5c49e88 -> pad 0x5c49e90 catch (...) [compiler noexcept guard]
// asm: 122 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4872c: nop dword ptr [rax]
// asm:   0x5c48817: jmp 0x5c48dd3
// asm:   0x5c48c71: jmp 0x5c48c94
// asm:   0x5c49bae: mov qword ptr [rsp + 0x48], r12
// asm:   0x5c49bb3: jmp 0x5c49bbc
// asm:   0x5c49bb5: xor eax, eax
// asm:   0x5c49bb7: mov qword ptr [rsp + 0x58], rax
// asm:   0x5c49d1d: jmp 0x5c49e45
// asm:   0x5c49d22: jmp 0x5c49e45
// asm:   0x5c49d27: jmp 0x5c49e45
// asm:   0x5c49d2c: jmp 0x5c49e45
// asm:   0x5c49d31: jmp 0x5c49e4c
// asm:   0x5c49d36: jmp 0x5c49e45
// asm:   0x5c49d3b: jmp 0x5c49e4c
// asm:   0x5c49d40: jmp 0x5c49e45
// asm:   0x5c49d45: jmp 0x5c49e45
// asm:   0x5c49d4a: jmp 0x5c49e4c
// asm:   0x5c49d4f: jmp 0x5c49e4c
// asm:   0x5c49d54: jmp 0x5c49e45
// asm:   0x5c49d59: jmp 0x5c49e45
// asm:   0x5c49d5e: jmp 0x5c49e4c
// asm:   0x5c49d63: jmp 0x5c49e45
// asm:   0x5c49d68: jmp 0x5c49e45
// asm:   0x5c49d6d: jmp 0x5c49e45
// asm:   0x5c49d72: jmp 0x5c49e45
// asm:   0x5c49d77: jmp 0x5c49e45
// asm:   0x5c49d7c: jmp 0x5c49e45
// asm:   0x5c49d81: jmp 0x5c49e45
// asm:   0x5c49d86: jmp 0x5c49e45
// asm:   0x5c49d8b: jmp 0x5c49e45
// asm:   0x5c49d90: jmp 0x5c49e45
// asm:   0x5c49d95: jmp 0x5c49e45
// asm:   0x5c49d9a: jmp 0x5c49e45
// asm:   0x5c49d9f: jmp 0x5c49e4c
// asm:   0x5c49da4: jmp 0x5c49e4c
// asm:   0x5c49da9: jmp 0x5c49e45
// asm:   0x5c49dae: jmp 0x5c49e4c
// asm:   0x5c49db3: jmp 0x5c49e45
// asm:   0x5c49db8: jmp 0x5c49e45
// asm:   0x5c49dbd: jmp 0x5c49e4c
// asm:   0x5c49dc2: jmp 0x5c49e4c
// asm:   0x5c49dc7: jmp 0x5c49e45
// asm:   0x5c49dc9: jmp 0x5c49e45
// asm:   0x5c49dcb: jmp 0x5c49e4c
// asm:   0x5c49dcd: jmp 0x5c49e45
// asm:   0x5c49dcf: jmp 0x5c49e4c
// asm:   0x5c49dd1: jmp 0x5c49e45
// asm:   0x5c49dd3: jmp 0x5c49e45
// asm:   0x5c49dd5: jmp 0x5c49e4c
// asm:   0x5c49dd7: jmp 0x5c49e45
// asm:   0x5c49dd9: jmp 0x5c49e45
// asm:   0x5c49ddb: jmp 0x5c49e4c
// asm:   0x5c49ddd: jmp 0x5c49e45
// asm:   0x5c49ddf: jmp 0x5c49e4c
// asm:   0x5c49de1: jmp 0x5c49e45
// asm:   0x5c49de3: jmp 0x5c49e4c
// asm:   0x5c49de5: jmp 0x5c49e45
// asm:   0x5c49de7: jmp 0x5c49e45
// asm:   0x5c49de9: jmp 0x5c49e4c
// asm:   0x5c49deb: jmp 0x5c49e45
// asm:   0x5c49ded: jmp 0x5c49e45
// asm:   0x5c49def: jmp 0x5c49e45
// asm:   0x5c49df1: jmp 0x5c49e4c
// asm:   0x5c49df3: jmp 0x5c49e4c
// asm:   0x5c49df5: jmp 0x5c49e45
// asm:   0x5c49df7: jmp 0x5c49e4c
// asm:   0x5c49df9: jmp 0x5c49e45
// asm:   0x5c49dfb: jmp 0x5c49e4c
// asm:   0x5c49dfd: jmp 0x5c49e4c
// asm:   0x5c49dff: jmp 0x5c49e45
// asm:   0x5c49e01: jmp 0x5c49e45
// asm:   0x5c49e03: jmp 0x5c49e45
// asm:   0x5c49e05: jmp 0x5c49e4c
// asm:   0x5c49e07: jmp 0x5c49e45
// asm:   0x5c49e09: jmp 0x5c49e45
// asm:   0x5c49e0b: jmp 0x5c49e4c
// asm:   0x5c49e0d: jmp 0x5c49e45
// asm:   0x5c49e0f: jmp 0x5c49e45
// asm:   0x5c49e11: jmp 0x5c49e45
// asm:   0x5c49e13: jmp 0x5c49e4c
// asm:   0x5c49e15: jmp 0x5c49e4c
// asm:   0x5c49e17: jmp 0x5c49e4c
// asm:   0x5c49e19: jmp 0x5c49e45
// asm:   0x5c49e1b: jmp 0x5c49e45
// asm:   0x5c49e1d: jmp 0x5c49e45
// asm:   0x5c49e1f: jmp 0x5c49e45
// asm:   0x5c49e21: jmp 0x5c49e45
// asm:   0x5c49e23: jmp 0x5c49e45
// asm:   0x5c49e25: jmp 0x5c49e4c
// asm:   0x5c49e27: jmp 0x5c49e45
// asm:   0x5c49e29: jmp 0x5c49e45
// asm:   0x5c49e2b: jmp 0x5c49e45
// asm:   0x5c49e2d: jmp 0x5c49e45
// asm:   0x5c49e2f: jmp 0x5c49e45
// asm:   0x5c49e31: jmp 0x5c49e45
// asm:   0x5c49e33: jmp 0x5c49e37
// asm:   0x5c49e35: jmp 0x5c49e37
// asm:   0x5c49e37: mov rbp, rax
// asm:   0x5c49e3a: xor eax, eax
// asm:   0x5c49e3c: mov qword ptr [rsp + 0x58], rax
// asm:   0x5c49e41: jmp 0x5c49e4f
// asm:   0x5c49e43: jmp 0x5c49e45
// asm:   0x5c49e45: mov qword ptr [rsp + 0x48], r12
// asm:   0x5c49e4a: jmp 0x5c49e4c
// asm:   0x5c49e4c: mov rbp, rax
// asm:   0x5c49e4f: cmp edx, 1
// asm:   0x5c49e52: jne 0x5c49e7b
// asm:   0x5c49e54: mov rdi, rbp
// asm:   0x5c49e57: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c49e5c: mov r14, qword ptr [rax]
// asm:   0x5c49e5f: mov qword ptr [rsp + 0x118], r14
// asm:   0x5c49e67: xor ebx, ebx
// asm:   0x5c49e69: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c49e6e: mov r12, qword ptr [rsp + 0x48]
// asm:   0x5c49e73: jmp 0x5c49a1b
// asm:   0x5c49e78: mov rbp, rax
// asm:   0x5c49e7b: lea rdi, [rsp + 0x118]
// asm:   0x5c49e83: call 0x2fd9550  ; il2cpp_runtime_helper_02fd9550()
// asm:   0x5c49e88: mov rdi, rbp
// asm:   0x5c49e8b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c49e90: mov rdi, rax
// asm:   0x5c49e93: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanDeathDissolve___ctor
               (Characters_TitanDeathDissolve_o *__this,Characters_BaseTitan_o *titan,
               UnityEngine_SkinnedMeshRenderer_o *body,float scale,System_Func_Renderer__bool__o *isFlesh,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_Renderer__Fields *pSVar2;
  byte bVar3;
  byte bVar4;
  uint32_t uVar5;
  uint uVar6;
  int length;
  System_Collections_Generic_List_Renderer__o *__this_00;
  UnityEngine_Object_c *pUVar7;
  UnityEngine_Matrix4x4_StaticFields *pUVar8;
  UnityEngine_Object_o *pUVar9;
  System_Collections_Generic_List_TitanDeathDissolve_SteamSource__o *pSVar10;
  Characters_TitanDeathDissolve_SteamSource_array *pCVar11;
  Characters_TitanDeathDissolve_Part_array *pCVar12;
  UnityEngine_Mesh_array *pUVar13;
  UnityEngine_Matrix4x4_o value;
  UnityEngine_Matrix4x4_o value_00;
  Characters_TitanDeathDissolve_SteamSource_o item;
  Characters_TitanDeathDissolve_SteamSource_o item_00;
  Characters_TitanDeathDissolve_SteamSource_o *pCVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  bool bVar28;
  char cVar29;
  int32_t iVar30;
  int32_t iVar31;
  System_Collections_Generic_List_TitanDeathDissolve_Part__o *pSVar32;
  System_Collections_Generic_List_Mesh__o *pSVar33;
  System_Collections_Generic_List_Material__o *pSVar34;
  System_Collections_Generic_List_ParticleSystem__o *__this_01;
  UnityEngine_Shader_o *pUVar35;
  UnityEngine_Object_o *pUVar36;
  UnityEngine_MaterialPropertyBlock_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Material_array *pUVar37;
  UnityEngine_Material_o *pUVar38;
  UnityEngine_Material_o *pUVar39;
  Il2CppObject *pIVar40;
  System_String_o *pSVar41;
  UnityEngine_GameObject_o *pUVar42;
  Characters_TitanDeathDissolve_Part_o *pCVar43;
  UnityEngine_Mesh_o *pUVar44;
  UnityEngine_Material_array *pUVar45;
  Characters_TitanDeathDissolve_StaticFields *pCVar46;
  Il2CppObject *pIVar47;
  MethodInfo *pMVar48;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar49;
  ulong uVar50;
  long lVar51;
  Characters_BaseTitan_o *method_03;
  MethodInfo *method_04;
  Characters_BasicTitanComponentCache_c *method_05;
  UnityEngine_Material_o **targetAddress;
  float fVar52;
  float fVar53;
  UnityEngine_Object_o *local_340;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  System_Collections_Generic_List_Enumerator_object__o local_2a8;
  UnityEngine_SkinnedMeshRenderer_o **local_290;
  System_Collections_Generic_List_TitanDeathDissolve_Part__o **local_288;
  long local_280;
  System_Collections_Generic_List_Enumerator_object__o *local_278;
  UnityEngine_MeshFilter_o *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  UnityEngine_Transform_o *local_218;
  System_Collections_Generic_List_Mesh__o **local_210;
  undefined3 local_208;
  undefined5 uStack_205;
  undefined3 uStack_200;
  undefined5 uStack_1fd;
  undefined3 local_1f8;
  undefined5 uStack_1f5;
  undefined3 uStack_1f0;
  undefined5 uStack_1ed;
  undefined3 local_1e8;
  undefined5 uStack_1e5;
  undefined3 uStack_1e0;
  undefined5 uStack_1dd;
  undefined3 local_1d8;
  undefined5 uStack_1d5;
  undefined3 uStack_1d0;
  undefined4 uStack_1cd;
  float fStack_1c9;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined7 uStack_140;
  float fStack_139;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_0754783b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer_71a4fd8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_TitanDeathDissolve_Part);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Matrix4x4_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve_Part);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata(&"_Regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/TitanWound");
    il2cpp_codegen_initialize_runtime_metadata(&"_UseMeshPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"_Growth");
    il2cpp_codegen_initialize_runtime_metadata(&"_VertexColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_Flesh");
    il2cpp_codegen_initialize_runtime_metadata(&"_MeshToDissolve");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/TitanRegrowth");
    Il2CppMethodInitialized_0754783b = '\x01';
  }
  local_2a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_2a8.fields._index = 0;
  local_2a8.fields._version = 0;
  local_2a8.fields._current = (Il2CppObject *)0x0;
  local_270 = (UnityEngine_MeshFilter_o *)0x0;
  pSVar32 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TitanDeathDissolve_Part);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar32,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_ctor);
  local_288 = &(__this->fields)._parts;
  (__this->fields)._parts = pSVar32;
  Il2CppCodeGenWriteBarrier(local_288);
  pSVar33 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar33,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Mesh_ctor);
  local_210 = &(__this->fields)._meshes;
  (__this->fields)._meshes = pSVar33;
  Il2CppCodeGenWriteBarrier(local_210);
  pSVar34 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar34,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._materials = pSVar34;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materials);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
  (__this->fields)._steam = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._steam);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._titan = titan;
  method_03 = titan;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titan);
  if (titan == (Characters_BaseTitan_o *)0x0) goto label_05c49ba9;
  bVar28 = (titan->fields)._GoreEnabled_k__BackingField;
  (__this->fields)._hideOnFinish = (bool)(bVar28 ^ 1);
  if (bVar28 != false) {
    method_05 = TypeInfo_Characters_BasicTitanComponentCache;
    if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
    }
    pUVar35 = Characters_BasicTitanComponentCache__LoadDissolveShader((MethodInfo *)method_05);
    (__this->fields)._shader = pUVar35;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._shader);
    pUVar36 = (UnityEngine_Object_o *)(__this->fields)._shader;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_03 = (Characters_BaseTitan_o *)0x0;
    bVar28 = UnityEngine_Object__op_Equality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar28) {
      return;
    }
  }
  if ((titan->fields).EffectsEnabled == false) {
    if ((__this->fields)._hideOnFinish == false) {
      Characters_TitanDeathDissolve__HideRenderers(__this,(MethodInfo *)method_03);
      return;
    }
    return;
  }
  local_218 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)titan,(MethodInfo *)0x0);
  local_290 = &(__this->fields)._bodyRenderer;
  (__this->fields)._bodyRenderer = body;
  Il2CppCodeGenWriteBarrier(local_290);
  if (scale <= 0.001) {
    scale = 0.001;
  }
  (__this->fields)._scale = scale;
  if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
  }
  UnityEngine_Component__GetComponentsInChildren_object__34b12b0
            ((UnityEngine_Component_o *)titan,
             (System_Collections_Generic_List_T__o *)
             TypeInfo_Characters_TitanDeathDissolve->static_fields->Renderers,
             (MethodInfo_34B12B0 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer_71a4fd8);
  __this_00 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Renderers;
  if (__this_00 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_05c49ba9;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_328,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
  local_2a8.fields._current = (Il2CppObject *)CONCAT44(fStack_314,local_318);
  local_2a8.fields._list = (System_Collections_Generic_List_T__o *)CONCAT44(local_328._4_4_,local_328._0_4_);
  local_2a8.fields._version = (int32_t)fStack_31c;
  local_2a8.fields._index = (int32_t)fStack_320;
  local_280 = 0;
  local_278 = &local_2a8;
  if (isFlesh == (System_Func_Renderer__bool__o *)0x0) {
    lVar51 = 0;
    while (bVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_2a8,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
          pIVar47 = local_2a8.fields._current, bVar28) {
      if ((UnityEngine_Object_o *)local_2a8.fields._current == (UnityEngine_Object_o *)0x0) goto label_05c49bbc;
      bVar28 = UnityEngine_Renderer__get_enabled
                         ((UnityEngine_Renderer_o *)local_2a8.fields._current,(MethodInfo *)0x0);
      if (bVar28) {
        pUVar7 = (UnityEngine_Object_c *)pIVar47->klass;
        bVar3 = (pUVar7->_2).typeHierarchyDepth;
        bVar4 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
        if (((bVar4 <= bVar3) &&
            ((pUVar7->_2).typeHierarchy[(ulong)bVar4 - 1] ==
             (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) ||
           ((bVar4 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth, bVar4 <= bVar3 &&
            ((pUVar7->_2).typeHierarchy[(ulong)bVar4 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)
            ))) {
          ThrowNullReferenceException();
        }
      }
    }
    local_340 = (UnityEngine_Object_o *)0x0;
  }
  else {
    local_340 = (UnityEngine_Object_o *)0x0;
label_05c48730:
    bVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (&local_2a8,
                        (MethodInfo_4C45C50 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    pIVar47 = local_2a8.fields._current;
    if (bVar28) {
      if ((UnityEngine_Object_o *)local_2a8.fields._current == (UnityEngine_Object_o *)0x0) {
label_05c49bbc:
        ThrowNullReferenceException();
      }
      bVar28 = UnityEngine_Renderer__get_enabled
                         ((UnityEngine_Renderer_o *)local_2a8.fields._current,(MethodInfo *)0x0);
      if (bVar28) {
        pUVar7 = (UnityEngine_Object_c *)pIVar47->klass;
        bVar3 = (pUVar7->_2).typeHierarchyDepth;
        bVar4 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
        if (((bVar4 <= bVar3) &&
            ((pUVar7->_2).typeHierarchy[(ulong)bVar4 - 1] ==
             (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) ||
           ((bVar4 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth, bVar4 <= bVar3 &&
            ((pUVar7->_2).typeHierarchy[(ulong)bVar4 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)
            ))) {
          cVar29 = (*(code *)(isFlesh->fields).invoke_impl)
                             ((isFlesh->fields).method_code,pIVar47,(isFlesh->fields).method);
          if ((__this->fields)._hideOnFinish == false) {
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
            UnityEngine_MaterialPropertyBlock___ctor(__this_02,(MethodInfo *)0x0);
            UnityEngine_Renderer__GetPropertyBlock
                      ((UnityEngine_Renderer_o *)pIVar47,__this_02,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0754773d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
              Il2CppMethodInitialized_0754773d = '\x01';
            }
            pUVar8 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
            local_2d8._0_4_ = (pUVar8->identityMatrix).fields.m00;
            local_2d8._4_4_ = (pUVar8->identityMatrix).fields.m10;
            uStack_2d0._0_4_ = (pUVar8->identityMatrix).fields.m20;
            uStack_2d0._4_4_ = (pUVar8->identityMatrix).fields.m30;
            local_228._0_4_ = (pUVar8->identityMatrix).fields.m01;
            local_228._4_4_ = (pUVar8->identityMatrix).fields.m11;
            uStack_220._0_4_ = (pUVar8->identityMatrix).fields.m21;
            uStack_220._4_4_ = (pUVar8->identityMatrix).fields.m31;
            local_238._0_4_ = (pUVar8->identityMatrix).fields.m02;
            local_238._4_4_ = (pUVar8->identityMatrix).fields.m12;
            uStack_230._0_4_ = (pUVar8->identityMatrix).fields.m22;
            uStack_230._4_4_ = (pUVar8->identityMatrix).fields.m32;
            local_248._0_4_ = (pUVar8->identityMatrix).fields.m03;
            local_248._4_4_ = (pUVar8->identityMatrix).fields.m13;
            fStack_240 = (pUVar8->identityMatrix).fields.m23;
            fStack_23c = (pUVar8->identityMatrix).fields.m33;
            bVar3 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
            pMVar48 = (MethodInfo *)(ulong)bVar3;
            if ((((((UnityEngine_Object_c *)pIVar47->klass)->_2).typeHierarchyDepth < bVar3) ||
                ((((UnityEngine_Object_c *)pIVar47->klass)->_2).typeHierarchy[(long)&pMVar48[-1].field_0x57]
                 != (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) ||
               (bVar28 = UnityEngine_Component__TryGetComponent_object_
                                   ((UnityEngine_Component_o *)pIVar47,(Il2CppObject **)&local_270,
                                    (MethodInfo_34B1690 *)
                                    MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter),
               pMVar48 = extraout_RDX, !bVar28)) {
              pUVar36 = (UnityEngine_Object_o *)
                        Characters_TitanDeathDissolve__Bake(__this,(UnityEngine_Renderer_o *)pIVar47,pMVar48);
              uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
            }
            else {
              if (local_270 == (UnityEngine_MeshFilter_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar36 = (UnityEngine_Object_o *)
                        UnityEngine_MeshFilter__get_sharedMesh(local_270,(MethodInfo *)0x0);
              if (local_218 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Transform__get_worldToLocalMatrix
                        ((UnityEngine_Matrix4x4_o *)local_328,local_218,(MethodInfo *)0x0);
              fVar16 = fStack_2ec;
              fVar15 = fStack_2f0;
              fVar53 = fStack_2f4;
              fVar52 = local_2f8;
              local_268 = (UnityEngine_Object_o *)CONCAT44(local_328._4_4_,local_328._0_4_);
              uStack_260 = CONCAT44(fStack_31c,fStack_320);
              local_2b8 = (UnityEngine_MaterialPropertyBlock_o *)CONCAT44(fStack_314,local_318);
              uStack_2b0 = CONCAT44(fStack_30c,fStack_310);
              local_258 = CONCAT44(fStack_304,local_308);
              uStack_250 = CONCAT44(fStack_2fc,fStack_300);
              __this_03 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pIVar47,(MethodInfo *)0x0);
              if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Transform__get_localToWorldMatrix
                        ((UnityEngine_Matrix4x4_o *)local_328,__this_03,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                ThrowNullReferenceException();
              }
              local_128 = CONCAT44(local_328._4_4_,local_328._0_4_);
              uStack_120 = CONCAT44(fStack_31c,fStack_320);
              local_118 = CONCAT44(fStack_320,local_328._4_4_);
              uStack_110 = CONCAT44(local_318,fStack_31c);
              local_108 = CONCAT44(fStack_31c,fStack_320);
              uStack_100 = CONCAT44(fStack_314,local_318);
              local_2d8 = CONCAT44(local_318,fStack_31c);
              uStack_2d0 = CONCAT44(fStack_310,fStack_314);
              local_f8 = CONCAT44(fStack_314,local_318);
              uStack_f0 = CONCAT44(fStack_30c,fStack_310);
              local_e8 = CONCAT44(fStack_310,fStack_314);
              uStack_e0 = CONCAT44(local_308,fStack_30c);
              local_d8 = CONCAT44(fStack_30c,fStack_310);
              uStack_d0 = CONCAT44(fStack_304,local_308);
              local_228 = CONCAT44(local_308,fStack_30c);
              uStack_220 = CONCAT44(fStack_300,fStack_304);
              local_c8 = CONCAT44(fStack_304,local_308);
              uStack_c0 = CONCAT44(fStack_2fc,fStack_300);
              local_b8 = CONCAT44(fStack_300,fStack_304);
              uStack_b0 = CONCAT44(local_2f8,fStack_2fc);
              local_a8 = CONCAT44(fStack_2fc,fStack_300);
              uStack_a0 = CONCAT44(fStack_2f4,local_2f8);
              local_238 = CONCAT44(local_2f8,fStack_2fc);
              uStack_230 = CONCAT44(fStack_2f0,fStack_2f4);
              local_98 = CONCAT44(fStack_2f4,local_2f8);
              uStack_90 = CONCAT44(fStack_2ec,fStack_2f0);
              local_88 = ZEXT416((uint)fStack_2f4);
              local_2c8 = ZEXT416((uint)fStack_2f0);
              _local_248 = ZEXT416((uint)fStack_2ec);
              UnityEngine_MaterialPropertyBlock__SetFloat
                        (__this_02,"_UseMeshPosition",1.0,(MethodInfo *)0x0);
              local_78 = (float)local_2d8 * fVar52 +
                         (float)local_108 * (float)local_258 +
                         (float)local_118 * (float)local_2b8 + (float)local_128 * (float)local_268;
              fStack_74 = (float)local_2d8 * fVar53 +
                          (float)local_108 * local_258._4_4_ +
                          (float)local_118 * local_2b8._4_4_ + (float)local_128 * local_268._4_4_;
              fStack_70 = (float)local_2d8 * fVar15 +
                          (float)local_108 * (float)uStack_250 +
                          (float)local_118 * (float)uStack_2b0 + (float)local_128 * (float)uStack_260;
              fStack_6c = (float)local_2d8 * fVar16 +
                          (float)local_108 * uStack_250._4_4_ +
                          (float)local_118 * uStack_2b0._4_4_ + (float)local_128 * uStack_260._4_4_;
              local_68 = (float)local_228 * fVar52 +
                         (float)local_d8 * (float)local_258 +
                         (float)local_e8 * (float)local_2b8 + (float)local_f8 * (float)local_268;
              fStack_64 = (float)local_228 * fVar53 +
                          (float)local_d8 * local_258._4_4_ +
                          (float)local_e8 * local_2b8._4_4_ + (float)local_f8 * local_268._4_4_;
              fStack_60 = (float)local_228 * fVar15 +
                          (float)local_d8 * (float)uStack_250 +
                          (float)local_e8 * (float)uStack_2b0 + (float)local_f8 * (float)uStack_260;
              fStack_5c = (float)local_228 * fVar16 +
                          (float)local_d8 * uStack_250._4_4_ +
                          (float)local_e8 * uStack_2b0._4_4_ + (float)local_f8 * uStack_260._4_4_;
              local_58 = (float)local_238 * fVar52 +
                         (float)local_a8 * (float)local_258 +
                         (float)local_b8 * (float)local_2b8 + (float)local_c8 * (float)local_268;
              fStack_54 = (float)local_238 * fVar53 +
                          (float)local_a8 * local_258._4_4_ +
                          (float)local_b8 * local_2b8._4_4_ + (float)local_c8 * local_268._4_4_;
              fStack_50 = (float)local_238 * fVar15 +
                          (float)local_a8 * (float)uStack_250 +
                          (float)local_b8 * (float)uStack_2b0 + (float)local_c8 * (float)uStack_260;
              fStack_4c = (float)local_238 * fVar16 +
                          (float)local_a8 * uStack_250._4_4_ +
                          (float)local_b8 * uStack_2b0._4_4_ + (float)local_c8 * uStack_260._4_4_;
              local_48 = (float)local_248._0_4_ * fVar52 +
                         (float)local_2c8._0_4_ * (float)local_258 +
                         (float)local_88._0_4_ * (float)local_2b8 + (float)local_98 * (float)local_268;
              fStack_44 = (float)local_248._0_4_ * fVar53 +
                          (float)local_2c8._0_4_ * local_258._4_4_ +
                          (float)local_88._0_4_ * local_2b8._4_4_ + (float)local_98 * local_268._4_4_;
              fStack_40 = (float)local_248._0_4_ * fVar15 +
                          (float)local_2c8._0_4_ * (float)uStack_250 +
                          (float)local_88._0_4_ * (float)uStack_2b0 + (float)local_98 * (float)uStack_260;
              fStack_3c = (float)local_248._0_4_ * fVar16 +
                          (float)local_2c8._0_4_ * uStack_250._4_4_ +
                          (float)local_88._0_4_ * uStack_2b0._4_4_ + (float)local_98 * uStack_260._4_4_;
              local_2d8 = CONCAT44(fStack_74,local_78);
              uStack_2d0 = CONCAT44(fStack_6c,fStack_70);
              local_228 = CONCAT44(fStack_64,local_68);
              uStack_220 = CONCAT44(fStack_5c,fStack_60);
              local_238 = CONCAT44(fStack_54,local_58);
              uStack_230 = CONCAT44(fStack_4c,fStack_50);
              local_248._4_4_ = fStack_44;
              local_248._0_4_ = local_48;
              fStack_240 = fStack_40;
              fStack_23c = fStack_3c;
              value.fields.m10 = fStack_74;
              value.fields.m00 = local_78;
              value.fields.m30 = fStack_6c;
              value.fields.m20 = fStack_70;
              value.fields.m11 = fStack_64;
              value.fields.m01 = local_68;
              value.fields.m31 = fStack_5c;
              value.fields.m21 = fStack_60;
              value.fields.m12 = fStack_54;
              value.fields.m02 = local_58;
              value.fields.m32 = fStack_4c;
              value.fields.m22 = fStack_50;
              value.fields.m13 = fStack_44;
              value.fields.m03 = local_48;
              value.fields.m33 = fStack_3c;
              value.fields.m23 = fStack_40;
              UnityEngine_MaterialPropertyBlock__SetMatrix
                        (__this_02,"_MeshToDissolve",value,(MethodInfo *)0x0);
              uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
            }
            if (uVar5 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar28 = UnityEngine_Object__op_Equality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar28) {
              pUVar9 = (UnityEngine_Object_o *)*local_290;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar28 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pIVar47,pUVar9,(MethodInfo *)0x0);
              if (bVar28) {
                local_340 = pUVar36;
              }
              if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
              }
              UnityEngine_Renderer__GetSharedMaterials
                        ((UnityEngine_Renderer_o *)pIVar47,
                         TypeInfo_Characters_TitanDeathDissolve->static_fields->SourceMaterials,
                         (MethodInfo *)0x0);
              pSVar34 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SourceMaterials;
              if (pSVar34 == (System_Collections_Generic_List_Material__o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar37 = (UnityEngine_Material_array *)
                        SZArrayNew(TypeInfo_UnityEngine_Material_array,(pSVar34->fields)._size);
              local_2b8 = __this_02;
              local_268 = pUVar36;
              if (pUVar37 == (UnityEngine_Material_array *)0x0) {
                ThrowNullReferenceException();
              }
              targetAddress = pUVar37->m_Items;
              local_2c8._0_8_ = targetAddress;
              if (0 < (int)pUVar37->max_length) {
                local_258 = CONCAT44(local_258._4_4_,0x3f800000);
                if (cVar29 == '\0') {
                  local_258 = (ulong)(uint)local_258._4_4_ << 0x20;
                }
                uVar50 = 0;
                do {
                  if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
                  }
                  pSVar34 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SourceMaterials;
                  if (pSVar34 == (System_Collections_Generic_List_Material__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar38 = System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar34,(int32_t)uVar50,
                                       (MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_Material_get_Item);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar28 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar38,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if (!bVar28) {
                    pUVar39 = Characters_TitanDeathDissolve__CreateMaterial(__this,pUVar38,0.0,method_01);
                    if ((pUVar39 != (UnityEngine_Material_o *)0x0) &&
                       (pIVar40 = il2cpp_vm_Object_IsInst
                                            ((Il2CppObject *)pUVar39,
                                             (((pUVar37->obj).klass)->_1).element_class),
                       pIVar40 == (Il2CppObject *)0x0)) {
                      pIVar47 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar47,(MethodInfo *)0x0);
                    }
                    if ((uint)pUVar37->max_length <= uVar50) {
                      ThrowIndexOutOfRangeException();
                    }
                    *targetAddress = pUVar39;
                    Il2CppCodeGenWriteBarrier(targetAddress);
                    if ((uint)pUVar37->max_length <= uVar50) {
                      ThrowIndexOutOfRangeException();
                    }
                    if (*targetAddress == (UnityEngine_Material_o *)0x0) {
label_05c49bc1:
                      ThrowNullReferenceException();
                    }
                    UnityEngine_Material__SetFloat
                              (*targetAddress,"_Flesh",(float)local_258,(MethodInfo *)0x0);
                    if ((uint)pUVar37->max_length <= uVar50) {
                      ThrowIndexOutOfRangeException();
                    }
                    if (pUVar38 == (UnityEngine_Material_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pUVar39 = *targetAddress;
                    pUVar36 = (UnityEngine_Object_o *)
                              UnityEngine_Material__get_shader(pUVar38,(MethodInfo *)0x0);
                    if (pUVar36 == (UnityEngine_Object_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar41 = UnityEngine_Object__get_name(pUVar36,(MethodInfo *)0x0);
                    bVar28 = System_String__op_Equality(pSVar41,"AoTTG/TitanWound",(MethodInfo *)0x0);
                    if (pUVar39 == (UnityEngine_Material_o *)0x0) goto label_05c49bc1;
                    fVar52 = 1.0;
                    if (!bVar28) {
                      fVar52 = 0.0;
                    }
                    UnityEngine_Material__SetFloat(pUVar39,"_VertexColor",fVar52,(MethodInfo *)0x0);
                    if ((uint)pUVar37->max_length <= uVar50) {
                      ThrowIndexOutOfRangeException();
                    }
                    pUVar39 = *targetAddress;
                    pUVar36 = (UnityEngine_Object_o *)
                              UnityEngine_Material__get_shader(pUVar38,(MethodInfo *)0x0);
                    if (pUVar36 == (UnityEngine_Object_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar41 = UnityEngine_Object__get_name(pUVar36,(MethodInfo *)0x0);
                    bVar28 = System_String__op_Equality(pSVar41,"AoTTG/TitanRegrowth",(MethodInfo *)0x0);
                    if (pUVar39 == (UnityEngine_Material_o *)0x0) goto label_05c49bc1;
                    fVar52 = 1.0;
                    if (!bVar28) {
                      fVar52 = 0.0;
                    }
                    UnityEngine_Material__SetFloat(pUVar39,"_Regrowth",fVar52,(MethodInfo *)0x0);
                  }
                  uVar50 = uVar50 + 1;
                  targetAddress = targetAddress + 1;
                } while ((long)uVar50 < (long)(int)pUVar37->max_length);
              }
              pSVar32 = *local_288;
              pUVar42 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pIVar47,(MethodInfo *)0x0);
              if (pUVar42 == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              iVar30 = UnityEngine_GameObject__get_layer(pUVar42,(MethodInfo *)0x0);
              iVar31 = UnityEngine_Renderer__get_shadowCastingMode
                                 ((UnityEngine_Renderer_o *)pIVar47,(MethodInfo *)0x0);
              local_2f8 = 0.0;
              fStack_2f4 = 0.0;
              fStack_2f0 = 0.0;
              fStack_2ec = 0.0;
              local_308 = 0.0;
              fStack_304 = 0.0;
              fStack_300 = 0.0;
              fStack_2fc = 0.0;
              local_318 = 0.0;
              fStack_314 = 0.0;
              fStack_310 = 0.0;
              fStack_30c = 0.0;
              local_328._0_4_ = 0.0;
              local_328._4_4_ = 0.0;
              fStack_320 = 0.0;
              fStack_31c = 0.0;
              local_2e8 = 0.0;
              local_208 = (undefined3)local_2d8;
              uStack_205 = (undefined5)((ulong)local_2d8 >> 0x18);
              uStack_200 = (undefined3)uStack_2d0;
              uStack_1fd = (undefined5)((ulong)uStack_2d0 >> 0x18);
              local_1f8 = (undefined3)local_228;
              uStack_1f5 = (undefined5)((ulong)local_228 >> 0x18);
              uStack_1f0 = (undefined3)uStack_220;
              uStack_1ed = (undefined5)((ulong)uStack_220 >> 0x18);
              local_1e8 = (undefined3)local_238;
              uStack_1e5 = (undefined5)((ulong)local_238 >> 0x18);
              uStack_1e0 = (undefined3)uStack_230;
              uStack_1dd = (undefined5)((ulong)uStack_230 >> 0x18);
              local_1d8 = local_248._0_3_;
              uStack_1d5 = local_248._3_5_;
              uStack_1d0 = local_248._8_3_;
              uStack_1cd = local_248._11_4_;
              fStack_1c9._0_1_ = local_248[0xf];
              value_00.fields.m20 = (float)(undefined4)uStack_2d0;
              value_00.fields.m30 = (float)uStack_2d0._4_4_;
              value_00.fields.m00 = (float)local_2d8;
              value_00.fields.m10 = (float)local_2d8._4_4_;
              value_00.fields.m01 = (float)local_228;
              value_00.fields.m11 = (float)local_228._4_4_;
              value_00.fields.m21 = (float)(undefined4)uStack_220;
              value_00.fields.m31 = (float)uStack_220._4_4_;
              value_00.fields.m02 = (float)local_238;
              value_00.fields.m12 = (float)local_238._4_4_;
              value_00.fields.m22 = (float)(undefined4)uStack_230;
              value_00.fields.m32 = (float)uStack_230._4_4_;
              value_00.fields.m03 = (float)local_248._0_4_;
              value_00.fields.m13 = (float)local_248._4_4_;
              value_00.fields.m23 = (float)local_248._8_4_;
              value_00.fields.m33 = (float)local_248._12_4_;
              System_Nullable_Matrix4x4____ctor
                        ((System_Nullable_Matrix4x4__o *)local_328,value_00,
                         (MethodInfo_3CD6190 *)MethodInfo_System_Nullable_Matrix4x4_ctor);
              pCVar43 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve_Part);
              local_2d8 = CONCAT71(local_2d8._1_7_,local_328[0]);
              local_178 = CONCAT17(fStack_320._0_1_,CONCAT43(local_328._4_4_,local_328._1_3_));
              uStack_170 = CONCAT17(local_318._0_1_,CONCAT43(fStack_31c,fStack_320._1_3_));
              local_168 = CONCAT17(fStack_310._0_1_,CONCAT43(fStack_314,local_318._1_3_));
              uStack_160 = CONCAT17(local_308._0_1_,CONCAT43(fStack_30c,fStack_310._1_3_));
              local_158 = CONCAT17(fStack_300._0_1_,CONCAT43(fStack_304,local_308._1_3_));
              uStack_150 = CONCAT17(local_2f8._0_1_,CONCAT43(fStack_2fc,fStack_300._1_3_));
              local_148 = CONCAT17(fStack_2f0._0_1_,CONCAT43(fStack_2f4,local_2f8._1_3_));
              uStack_140 = CONCAT43(fStack_2ec,fStack_2f0._1_3_);
              fStack_139 = local_2e8;
              if (Il2CppMethodInitialized_07547849 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Nullable_Matrix4x4_GetValueOrDefault);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Matrix4x4_get_HasValue)
                ;
                Il2CppMethodInitialized_07547849 = '\x01';
              }
              System_Object___ctor((Il2CppObject *)pCVar43,(MethodInfo *)0x0);
              (pCVar43->fields).Mesh = (UnityEngine_Mesh_o *)local_268;
              Il2CppCodeGenWriteBarrier(&(pCVar43->fields).Mesh);
              (pCVar43->fields).Materials = pUVar37;
              Il2CppCodeGenWriteBarrier(&(pCVar43->fields).Materials);
              (pCVar43->fields).Properties = local_2b8;
              Il2CppCodeGenWriteBarrier(&(pCVar43->fields).Properties);
              (pCVar43->fields).Layer = iVar30;
              (pCVar43->fields).Shadows = iVar31;
              (pCVar43->fields).DissolvedProgress = 0.85950404;
              local_1d8 = (undefined3)local_148;
              uStack_1d5 = (undefined5)((ulong)local_148 >> 0x18);
              uStack_1d0 = (undefined3)uStack_140;
              uStack_1cd = (undefined4)((uint7)uStack_140 >> 0x18);
              fStack_1c9 = fStack_139;
              local_1e8 = (undefined3)local_158;
              uStack_1e5 = (undefined5)((ulong)local_158 >> 0x18);
              uStack_1e0 = (undefined3)uStack_150;
              uStack_1dd = (undefined5)((ulong)uStack_150 >> 0x18);
              local_1f8 = (undefined3)local_168;
              uStack_1f5 = (undefined5)((ulong)local_168 >> 0x18);
              uStack_1f0 = (undefined3)uStack_160;
              uStack_1ed = (undefined5)((ulong)uStack_160 >> 0x18);
              local_208 = (undefined3)local_178;
              uStack_205 = (undefined5)((ulong)local_178 >> 0x18);
              uStack_200 = (undefined3)uStack_170;
              uStack_1fd = (undefined5)((ulong)uStack_170 >> 0x18);
              if ((char)local_2d8 == '\0') {
                if (Il2CppMethodInitialized_0754773d == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
                  Il2CppMethodInitialized_0754773d = '\x01';
                }
                pUVar8 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
                local_1b8._0_4_ = (pUVar8->identityMatrix).fields.m00;
                local_1b8._4_4_ = (pUVar8->identityMatrix).fields.m10;
                uStack_1b0._0_4_ = (pUVar8->identityMatrix).fields.m20;
                uStack_1b0._4_4_ = (pUVar8->identityMatrix).fields.m30;
                local_1a8._0_4_ = (pUVar8->identityMatrix).fields.m01;
                local_1a8._4_4_ = (pUVar8->identityMatrix).fields.m11;
                uStack_1a0._0_4_ = (pUVar8->identityMatrix).fields.m21;
                uStack_1a0._4_4_ = (pUVar8->identityMatrix).fields.m31;
                local_198._0_4_ = (pUVar8->identityMatrix).fields.m02;
                local_198._4_4_ = (pUVar8->identityMatrix).fields.m12;
                uStack_190._0_4_ = (pUVar8->identityMatrix).fields.m22;
                uStack_190._4_4_ = (pUVar8->identityMatrix).fields.m32;
                local_188._0_4_ = (pUVar8->identityMatrix).fields.m03;
                local_188._4_4_ = (pUVar8->identityMatrix).fields.m13;
                uStack_180._0_4_ = (pUVar8->identityMatrix).fields.m23;
                uStack_180._4_4_ = (pUVar8->identityMatrix).fields.m33;
              }
              else {
                local_1b8 = CONCAT35(uStack_200,uStack_205);
                uStack_1b0 = CONCAT35(local_1f8,uStack_1fd);
                local_1a8 = CONCAT35(uStack_1f0,uStack_1f5);
                uStack_1a0 = CONCAT35(local_1e8,uStack_1ed);
                local_198 = CONCAT35(uStack_1e0,uStack_1e5);
                uStack_190 = CONCAT35(local_1d8,uStack_1dd);
                local_188 = CONCAT35(uStack_1d0,uStack_1d5);
                uStack_180 = CONCAT44(fStack_139,uStack_1cd);
              }
              (pCVar43->fields).LocalMatrix.fields.m03 = (float)(undefined4)local_188;
              (pCVar43->fields).LocalMatrix.fields.m13 = (float)local_188._4_4_;
              (pCVar43->fields).LocalMatrix.fields.m23 = (float)(undefined4)uStack_180;
              (pCVar43->fields).LocalMatrix.fields.m33 = (float)uStack_180._4_4_;
              (pCVar43->fields).LocalMatrix.fields.m02 = (float)(undefined4)local_198;
              (pCVar43->fields).LocalMatrix.fields.m12 = (float)local_198._4_4_;
              (pCVar43->fields).LocalMatrix.fields.m22 = (float)(undefined4)uStack_190;
              (pCVar43->fields).LocalMatrix.fields.m32 = (float)uStack_190._4_4_;
              (pCVar43->fields).LocalMatrix.fields.m01 = (float)(undefined4)local_1a8;
              (pCVar43->fields).LocalMatrix.fields.m11 = (float)local_1a8._4_4_;
              (pCVar43->fields).LocalMatrix.fields.m21 = (float)(undefined4)uStack_1a0;
              (pCVar43->fields).LocalMatrix.fields.m31 = (float)uStack_1a0._4_4_;
              (pCVar43->fields).LocalMatrix.fields.m00 = (float)(undefined4)local_1b8;
              (pCVar43->fields).LocalMatrix.fields.m10 = (float)local_1b8._4_4_;
              (pCVar43->fields).LocalMatrix.fields.m20 = (float)(undefined4)uStack_1b0;
              pMVar48 = MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_Add;
              (pCVar43->fields).LocalMatrix.fields.m30 = (float)uStack_1b0._4_4_;
              if (pSVar32 != (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0) {
                piVar1 = &(pSVar32->fields)._version;
                *piVar1 = *piVar1 + 1;
                pCVar12 = (pSVar32->fields)._items;
                if (pCVar12 != (Characters_TitanDeathDissolve_Part_array *)0x0) {
                  uVar6 = (pSVar32->fields)._size;
                  if (uVar6 < (uint)pCVar12->max_length) {
                    (pSVar32->fields)._size = uVar6 + 1;
                    pCVar12->m_Items[(int)uVar6] = pCVar43;
                    Il2CppCodeGenWriteBarrier(pCVar12->m_Items + (int)uVar6);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar32,(Il2CppObject *)pCVar43,
                               (MethodInfo_395D230 *)pMVar48->klass->rgctx_data[0xe].method);
                  }
                  pUVar36 = local_268;
                  if (cVar29 != '\0') {
                    if (pUVar37->max_length != 0) {
                      if ((int)pUVar37->max_length == 0) {
                        ThrowIndexOutOfRangeException();
                      }
                      pUVar9 = *(UnityEngine_Object_o **)local_2c8._0_8_;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      pCVar43 = (Characters_TitanDeathDissolve_Part_o *)0x0;
                      bVar28 = UnityEngine_Object__op_Inequality
                                         (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if (bVar28) {
                        if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
                        }
                        if ((int)pUVar37->max_length == 0) {
                          ThrowIndexOutOfRangeException();
                        }
                        if (*(UnityEngine_Material_o **)local_2c8._0_8_ == (UnityEngine_Material_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar10 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SteamSources;
                        fVar52 = UnityEngine_Material__GetFloat
                                           (*(UnityEngine_Material_o **)local_2c8._0_8_,"_Regrowth",
                                            (MethodInfo *)0x0);
                        if (local_2b8 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        fVar53 = UnityEngine_MaterialPropertyBlock__GetFloat
                                           (local_2b8,"_Growth",(MethodInfo *)0x0);
                        local_2d8 = CONCAT44(local_2d8._4_4_,fVar53);
                        fStack_320 = 0.0;
                        fStack_31c = 0.0;
                        local_328._0_4_ = SUB84(pUVar36,0);
                        local_328._4_4_ = SUB84((ulong)pUVar36 >> 0x20,0);
                        Il2CppCodeGenWriteBarrier((void **)local_328);
                        pMVar48 = 
                        MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_Add;
                        fStack_320 = (float)CONCAT31(fStack_320._1_3_,0.5 < fVar52);
                        fStack_31c = (float)local_2d8;
                        if (pSVar10 ==
                            (System_Collections_Generic_List_TitanDeathDissolve_SteamSource__o *)0x0) {
label_05c49ceb:
                          ThrowNullReferenceException();
                        }
                        pCVar43 = (Characters_TitanDeathDissolve_Part_o *)
                                  CONCAT44(local_328._4_4_,local_328._0_4_);
                        item_00.fields._8_4_ = fStack_320;
                        item_00.fields.Mesh = (UnityEngine_Mesh_o *)pCVar43;
                        item_00.fields.Growth = (float)local_2d8;
                        piVar1 = &(pSVar10->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pCVar11 = (pSVar10->fields)._items;
                        if (pCVar11 == (Characters_TitanDeathDissolve_SteamSource_array *)0x0)
                        goto label_05c49ceb;
                        uVar6 = (pSVar10->fields)._size;
                        if (uVar6 < (uint)pCVar11->max_length) {
                          (pSVar10->fields)._size = uVar6 + 1;
                          pCVar11->m_Items[(int)uVar6].fields.Mesh =
                               (UnityEngine_Mesh_o *)CONCAT44(local_328._4_4_,local_328._0_4_);
                          pCVar14 = pCVar11->m_Items + (int)uVar6;
                          (pCVar14->fields).Regrowing = 0.5 < fVar52;
                          *(undefined3 *)&(pCVar14->fields).field_0x9 = fStack_320._1_3_;
                          (pCVar14->fields).Growth = (float)local_2d8;
                          pCVar43 = (Characters_TitanDeathDissolve_Part_o *)0x0;
                          Il2CppCodeGenWriteBarrier((void **)(pCVar11->m_Items + (int)uVar6));
                        }
                        else {
                          System_Collections_Generic_List_TitanDeathDissolve_SteamSource___AddWithResize
                                    (pSVar10,item_00,
                                     (MethodInfo_3B07490 *)pMVar48->klass->rgctx_data[0xe].method);
                        }
                      }
                    }
                    fVar52 = (__this->fields)._scale;
                    if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve)
                      ;
                    }
                    pUVar44 = Characters_TitanDeathDissolve__CreateTissueMesh
                                        ((UnityEngine_Mesh_o *)pUVar36,fVar52,(MethodInfo *)pCVar43);
                    pMVar48 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
                    pSVar33 = *local_210;
                    if (pSVar33 == (System_Collections_Generic_List_Mesh__o *)0x0) {
label_05c49ccd:
                      ThrowNullReferenceException();
                    }
                    piVar1 = &(pSVar33->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar13 = (pSVar33->fields)._items;
                    if (pUVar13 == (UnityEngine_Mesh_array *)0x0) goto label_05c49ccd;
                    uVar6 = (pSVar33->fields)._size;
                    if (uVar6 < (uint)pUVar13->max_length) {
                      (pSVar33->fields)._size = uVar6 + 1;
                      pUVar13->m_Items[(int)uVar6] = pUVar44;
                      Il2CppCodeGenWriteBarrier(pUVar13->m_Items + (int)uVar6);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar33,(Il2CppObject *)pUVar44,
                                 (MethodInfo_395D230 *)pMVar48->klass->rgctx_data[0xe].method);
                    }
                    pUVar45 = (UnityEngine_Material_array *)
                              SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)pUVar37->max_length);
                    if (0 < (int)pUVar37->max_length) {
                      uVar50 = pUVar37->max_length & 0xffffffff;
                      lVar51 = 0x20;
                      uVar49 = 0;
                      do {
                        if (uVar50 <= uVar49) {
                          ThrowIndexOutOfRangeException();
                        }
                        pUVar36 = *(UnityEngine_Object_o **)((long)pUVar37->m_Items + lVar51 + -0x20);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar28 = UnityEngine_Object__op_Inequality
                                           (pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if (bVar28) {
                          if ((uint)pUVar37->max_length <= uVar49) {
                            ThrowIndexOutOfRangeException();
                          }
                          pUVar38 = Characters_TitanDeathDissolve__CreateMaterial
                                              (__this,*(UnityEngine_Material_o **)
                                                       ((long)pUVar37->m_Items + lVar51 + -0x20),1.0,method_02
                                              );
                          if (pUVar45 == (UnityEngine_Material_array *)0x0) {
                            ThrowNullReferenceException();
                          }
                          if ((pUVar38 != (UnityEngine_Material_o *)0x0) &&
                             (pIVar40 = il2cpp_vm_Object_IsInst
                                                  ((Il2CppObject *)pUVar38,
                                                   (((pUVar45->obj).klass)->_1).element_class),
                             pIVar40 == (Il2CppObject *)0x0)) {
                            pIVar47 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar47,(MethodInfo *)0x0);
                          }
                          if ((uint)pUVar45->max_length <= uVar49) {
                            ThrowIndexOutOfRangeException();
                          }
                          *(UnityEngine_Material_o **)((long)pUVar45->m_Items + lVar51 + -0x20) = pUVar38;
                          Il2CppCodeGenWriteBarrier((void **)((long)pUVar45->m_Items + lVar51 + -0x20));
                        }
                        uVar49 = uVar49 + 1;
                        uVar6 = (uint)pUVar37->max_length;
                        uVar50 = (ulong)uVar6;
                        lVar51 = lVar51 + 8;
                      } while ((long)uVar49 < (long)(int)uVar6);
                    }
                    pSVar32 = *local_288;
                    pUVar42 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pIVar47,(MethodInfo *)0x0);
                    if (pUVar42 == (UnityEngine_GameObject_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    iVar30 = UnityEngine_GameObject__get_layer(pUVar42,(MethodInfo *)0x0);
                    iVar31 = UnityEngine_Renderer__get_shadowCastingMode
                                       ((UnityEngine_Renderer_o *)pIVar47,(MethodInfo *)0x0);
                    local_2d8 = CONCAT44(local_2d8._4_4_,iVar31);
                    pCVar43 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve_Part);
                    if (Il2CppMethodInitialized_07547849 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_System_Nullable_Matrix4x4_GetValueOrDefault);
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_System_Nullable_Matrix4x4_get_HasValue);
                      Il2CppMethodInitialized_07547849 = '\x01';
                    }
                    System_Object___ctor((Il2CppObject *)pCVar43,(MethodInfo *)0x0);
                    (pCVar43->fields).Mesh = pUVar44;
                    Il2CppCodeGenWriteBarrier(&(pCVar43->fields).Mesh);
                    (pCVar43->fields).Materials = pUVar45;
                    Il2CppCodeGenWriteBarrier(&(pCVar43->fields).Materials);
                    (pCVar43->fields).Properties = local_2b8;
                    Il2CppCodeGenWriteBarrier(&(pCVar43->fields).Properties);
                    (pCVar43->fields).Layer = iVar30;
                    (pCVar43->fields).Shadows = (int32_t)(float)local_2d8;
                    (pCVar43->fields).DissolvedProgress = 0.9917355;
                    if (Il2CppMethodInitialized_0754773d == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
                      Il2CppMethodInitialized_0754773d = '\x01';
                    }
                    pUVar8 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
                    fVar24 = (pUVar8->identityMatrix).fields.m00;
                    fVar25 = (pUVar8->identityMatrix).fields.m10;
                    fVar26 = (pUVar8->identityMatrix).fields.m20;
                    fVar27 = (pUVar8->identityMatrix).fields.m30;
                    fVar20 = (pUVar8->identityMatrix).fields.m01;
                    fVar21 = (pUVar8->identityMatrix).fields.m11;
                    fVar22 = (pUVar8->identityMatrix).fields.m21;
                    fVar23 = (pUVar8->identityMatrix).fields.m31;
                    fVar16 = (pUVar8->identityMatrix).fields.m02;
                    fVar17 = (pUVar8->identityMatrix).fields.m12;
                    fVar18 = (pUVar8->identityMatrix).fields.m22;
                    fVar19 = (pUVar8->identityMatrix).fields.m32;
                    fVar52 = (pUVar8->identityMatrix).fields.m13;
                    fVar53 = (pUVar8->identityMatrix).fields.m23;
                    fVar15 = (pUVar8->identityMatrix).fields.m33;
                    (pCVar43->fields).LocalMatrix.fields.m03 = (pUVar8->identityMatrix).fields.m03;
                    (pCVar43->fields).LocalMatrix.fields.m13 = fVar52;
                    (pCVar43->fields).LocalMatrix.fields.m23 = fVar53;
                    (pCVar43->fields).LocalMatrix.fields.m33 = fVar15;
                    (pCVar43->fields).LocalMatrix.fields.m02 = fVar16;
                    (pCVar43->fields).LocalMatrix.fields.m12 = fVar17;
                    (pCVar43->fields).LocalMatrix.fields.m22 = fVar18;
                    (pCVar43->fields).LocalMatrix.fields.m32 = fVar19;
                    (pCVar43->fields).LocalMatrix.fields.m01 = fVar20;
                    (pCVar43->fields).LocalMatrix.fields.m11 = fVar21;
                    (pCVar43->fields).LocalMatrix.fields.m21 = fVar22;
                    (pCVar43->fields).LocalMatrix.fields.m31 = fVar23;
                    (pCVar43->fields).LocalMatrix.fields.m00 = fVar24;
                    (pCVar43->fields).LocalMatrix.fields.m10 = fVar25;
                    (pCVar43->fields).LocalMatrix.fields.m20 = fVar26;
                    pMVar48 = MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_Add;
                    (pCVar43->fields).LocalMatrix.fields.m30 = fVar27;
                    if (pSVar32 == (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0) {
label_05c49caf:
                      ThrowNullReferenceException();
                    }
                    piVar1 = &(pSVar32->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pCVar12 = (pSVar32->fields)._items;
                    if (pCVar12 == (Characters_TitanDeathDissolve_Part_array *)0x0) goto label_05c49caf;
                    uVar6 = (pSVar32->fields)._size;
                    if (uVar6 < (uint)pCVar12->max_length) {
                      (pSVar32->fields)._size = uVar6 + 1;
                      pCVar12->m_Items[(int)uVar6] = pCVar43;
                      Il2CppCodeGenWriteBarrier(pCVar12->m_Items + (int)uVar6);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar32,(Il2CppObject *)pCVar43,
                                 (MethodInfo_395D230 *)pMVar48->klass->rgctx_data[0xe].method);
                    }
                  }
                  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)pIVar47,false,(MethodInfo *)0x0)
                  ;
                  goto label_05c48730;
                }
              }
              ThrowNullReferenceException();
            }
            goto label_05c48730;
          }
          if (cVar29 == '\0') {
            pUVar36 = (UnityEngine_Object_o *)0x0;
            uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
          }
          else {
            pUVar36 = (UnityEngine_Object_o *)
                      Characters_TitanDeathDissolve__Bake(__this,(UnityEngine_Renderer_o *)pIVar47,method_00);
            uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
          }
          if (uVar5 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar28 = UnityEngine_Object__op_Equality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar28) {
            pUVar9 = (UnityEngine_Object_o *)*local_290;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar28 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)pIVar47,pUVar9,(MethodInfo *)0x0)
            ;
            if (bVar28) {
              local_340 = pUVar36;
            }
            if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
            }
            pSVar10 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SteamSources;
            fStack_320 = 0.0;
            fStack_31c = 0.0;
            local_328._0_4_ = SUB84(pUVar36,0);
            local_328._4_4_ = SUB84((ulong)pUVar36 >> 0x20,0);
            Il2CppCodeGenWriteBarrier((void **)local_328);
            pMVar48 = MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_Add;
            fStack_320 = (float)((uint)fStack_320 & 0xffffff00);
            fStack_31c = 0.0;
            if (pSVar10 != (System_Collections_Generic_List_TitanDeathDissolve_SteamSource__o *)0x0) {
              uVar50 = (ulong)(uint)fStack_320;
              item.fields.Mesh._4_4_ = local_328._4_4_;
              item.fields.Mesh._0_4_ = local_328._0_4_;
              item.fields._8_4_ = fStack_320;
              item.fields.Growth = 0.0;
              piVar1 = &(pSVar10->fields)._version;
              *piVar1 = *piVar1 + 1;
              pCVar11 = (pSVar10->fields)._items;
              if (pCVar11 != (Characters_TitanDeathDissolve_SteamSource_array *)0x0) {
                uVar6 = (pSVar10->fields)._size;
                if (uVar6 < (uint)pCVar11->max_length) {
                  (pSVar10->fields)._size = uVar6 + 1;
                  pCVar11->m_Items[(int)uVar6].fields.Mesh =
                       (UnityEngine_Mesh_o *)CONCAT44(local_328._4_4_,local_328._0_4_);
                  pCVar14 = pCVar11->m_Items + (int)uVar6;
                  (pCVar14->fields).Regrowing = (bool)(char)uVar50;
                  *(int3 *)&(pCVar14->fields).field_0x9 = (int3)(uVar50 >> 8);
                  (pCVar14->fields).Growth = (float)(int)(uVar50 >> 0x20);
                  Il2CppCodeGenWriteBarrier((void **)(pCVar11->m_Items + (int)uVar6));
                }
                else {
                  System_Collections_Generic_List_TitanDeathDissolve_SteamSource___AddWithResize
                            (pSVar10,item,(MethodInfo_3B07490 *)pMVar48->klass->rgctx_data[0xe].method);
                }
                goto label_05c48730;
              }
            }
            ThrowNullReferenceException();
          }
        }
      }
      goto label_05c48730;
    }
    lVar51 = local_280;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (local_278,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  if (lVar51 != 0) {
    il2cpp_codegen_rethrow(lVar51);
  }
  if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
  }
  pCVar46 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pMVar48 = (MethodInfo *)pCVar46->Renderers;
  if (pMVar48 == (MethodInfo *)0x0) goto label_05c49ba9;
  piVar1 = (int32_t *)((long)&pMVar48->name + 4);
  *piVar1 = *piVar1 + 1;
  iVar30 = *(int32_t *)&pMVar48->name;
  *(int32_t *)&pMVar48->name = 0;
  if (0 < iVar30) {
    pSVar2 = (System_Collections_Generic_List_Renderer__Fields *)&pMVar48->invoker_method;
    pMVar48 = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)pSVar2->_items,0,iVar30,(MethodInfo *)0x0);
    pCVar46 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  }
  pSVar34 = pCVar46->SourceMaterials;
  if (pSVar34 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c49ba9;
  piVar1 = &(pSVar34->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar34->fields)._size;
  (pSVar34->fields)._size = 0;
  if (0 < length) {
    pMVar48 = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)(pSVar34->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_04 = (MethodInfo *)0x0;
  bVar28 = UnityEngine_Object__op_Inequality(local_340,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar28) {
    pUVar44 = Characters_TitanDeathDissolve__CreateSteamSurface(__this,method_04);
    Characters_TitanDeathDissolve__CreateSteam(__this,pUVar44,false,pMVar48);
    Characters_TitanDeathDissolve__CreateSteam(__this,pUVar44,true,pMVar48);
    if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor != 0) goto label_05c49b0e;
label_05c49b8d:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
    pSVar10 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SteamSources;
  }
  else {
    if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) goto label_05c49b8d;
label_05c49b0e:
    pSVar10 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SteamSources;
  }
  if (pSVar10 != (System_Collections_Generic_List_TitanDeathDissolve_SteamSource__o *)0x0) {
    piVar1 = &(pSVar10->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar30 = (pSVar10->fields)._size;
    (pSVar10->fields)._size = 0;
    if (0 < iVar30) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar30,(MethodInfo *)0x0);
    }
    return;
  }
label_05c49ba9:
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$CreateTissueMesh
// il2cpp: UnityEngine_Mesh_o* Characters_TitanDeathDissolve__CreateTissueMesh (UnityEngine_Mesh_o* source, float scale, const MethodInfo* method);
// 0x5c4b0d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4b212: nop word ptr cs:[rax + rax]
// asm:   0x5c4b387: jmp 0x5c4b220

UnityEngine_Mesh_o *
Characters_TitanDeathDissolve__CreateTissueMesh(UnityEngine_Mesh_o *source,float scale,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_Vector3__o *__this;
  UnityEngine_Object_o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  int32_t index;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  float local_68;
  float local_58;
  float fStack_54;
  
  if (Il2CppMethodInitialized_0754783c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata(&"Dissolving tissue");
    Il2CppMethodInitialized_0754783c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Object__Instantiate_object__35a4190
                        ((Il2CppObject *)source,
                         (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    index = 0;
    UnityEngine_Object__set_name(__this_00,"Dissolving tissue",(MethodInfo *)0x0);
    if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
    }
    if (scale <= 0.001) {
      scale = 0.001;
    }
    UnityEngine_Mesh__GetVertices
              ((UnityEngine_Mesh_o *)__this_00,TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices
               ,(MethodInfo *)0x0);
    UnityEngine_Mesh__GetNormals
              ((UnityEngine_Mesh_o *)__this_00,TypeInfo_Characters_TitanDeathDissolve->static_fields->Normals,
               (MethodInfo *)0x0);
    uVar1 = (TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor;
    while( true ) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
      }
      pSVar2 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices;
      if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      uVar1 = (TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor;
      if ((pSVar2->fields)._size <= index) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
          pSVar2 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices;
        }
        UnityEngine_Mesh__SetVertices((UnityEngine_Mesh_o *)__this_00,pSVar2,(MethodInfo *)0x0);
        UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)__this_00,(MethodInfo *)0x0);
        return (UnityEngine_Mesh_o *)__this_00;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
        pSVar2 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices;
        if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      }
      UVar5 = System_Collections_Generic_List_Vector3___get_Item
                        (pSVar2,index,
                         (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      pSVar2 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Normals;
      if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      __this = TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices;
      UVar6 = System_Collections_Generic_List_Vector3___get_Item
                        (pSVar2,index,
                         (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      local_68 = UVar5.fields.x;
      fVar3 = UnityEngine_Mathf__PerlinNoise
                        ((local_68 * 8.0) / scale,((UVar5.fields.y + UVar5.fields.z) * 8.0) / scale,
                         (MethodInfo *)0x0);
      if (__this == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      fVar4 = 1.0;
      if (fVar3 <= 1.0) {
        fVar4 = fVar3;
      }
      fVar3 = (float)(~-(uint)(0.0 <= fVar3) & 0x3b83126f |
                     (uint)(fVar4 * 0.004 + 0.004) & -(uint)(0.0 <= fVar3)) * scale;
      value.fields.z = UVar5.fields.z - UVar6.fields.z * fVar3;
      local_58 = UVar6.fields.x;
      fStack_54 = UVar6.fields.y;
      value.fields.x = local_68 - local_58 * fVar3;
      value.fields.y = UVar5.fields.y - fStack_54 * fVar3;
      System_Collections_Generic_List_Vector3___set_Item
                (__this,index,value,
                 (MethodInfo_39FF620 *)MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
      index = index + 1;
      uVar1 = (TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$Bake
// il2cpp: UnityEngine_Mesh_o* Characters_TitanDeathDissolve__Bake (Characters_TitanDeathDissolve_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5c4a120
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4a2d9: jmp 0x5c4a394
// asm:   0x5c4a95f: jmp 0x5c4a994

UnityEngine_Mesh_o *
Characters_TitanDeathDissolve__Bake
          (Characters_TitanDeathDissolve_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint32_t uVar5;
  uint uVar6;
  Characters_BaseTitan_o *__this_00;
  System_Collections_Generic_List_Mesh__o *__this_01;
  UnityEngine_Mesh_array *pUVar7;
  undefined1 auVar8 [16];
  MethodInfo *pMVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 __this_02;
  bool bVar14;
  int32_t iVar15;
  UnityEngine_Object_o *pUVar16;
  UnityEngine_Mesh_o *original;
  System_Collections_Generic_List_Material__o *pSVar17;
  System_String_o *pSVar18;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Vector3_StaticFields *pUVar20;
  System_Collections_Generic_List_Vector3__o *pSVar21;
  float fVar22;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar23 [16];
  float fVar24;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar25;
  undefined1 local_1b8 [64];
  UnityEngine_MeshFilter_o *local_178;
  float local_16c;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  UnityEngine_Matrix4x4_Fields local_158;
  undefined1 local_118 [40];
  Characters_TitanDeathDissolve_o *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  UnityEngine_Matrix4x4_Fields local_70;
  
  if (Il2CppMethodInitialized_0754783d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata(&"Dissolving ");
    Il2CppMethodInitialized_0754783d = '\x01';
  }
  local_158.m03 = 0.0;
  local_158.m13 = 0.0;
  local_158.m23 = 0.0;
  local_158.m33 = 0.0;
  local_158.m02 = 0.0;
  local_158.m12 = 0.0;
  local_158.m22 = 0.0;
  local_158.m32 = 0.0;
  local_158.m01 = 0.0;
  local_158.m11 = 0.0;
  local_158.m21 = 0.0;
  local_158.m31 = 0.0;
  local_158.m00 = 0.0;
  local_158.m10 = 0.0;
  local_158.m20 = 0.0;
  local_158.m30 = 0.0;
  local_178 = (UnityEngine_MeshFilter_o *)0x0;
  if (renderer == (UnityEngine_Renderer_o *)0x0) goto label_05c4aaf9;
  bVar4 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
  if (((renderer->klass->_2).typeHierarchyDepth < bVar4) ||
     ((renderer->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
      (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
label_05c4a2de:
    bVar14 = UnityEngine_Component__TryGetComponent_object_
                       ((UnityEngine_Component_o *)renderer,(Il2CppObject **)&local_178,
                        (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    if (!bVar14) {
      return (UnityEngine_Mesh_o *)0x0;
    }
    if (local_178 == (UnityEngine_MeshFilter_o *)0x0) goto label_05c4aaf9;
    pUVar16 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(local_178,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar14 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar14) {
      return (UnityEngine_Mesh_o *)0x0;
    }
    if (local_178 == (UnityEngine_MeshFilter_o *)0x0) goto label_05c4aaf9;
    original = UnityEngine_MeshFilter__get_sharedMesh(local_178,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar16 = (UnityEngine_Object_o *)
              UnityEngine_Object__Instantiate_object__35a4190
                        ((Il2CppObject *)original,
                         (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh);
    uVar5 = (TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar16 = (UnityEngine_Object_o *)
              UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                        ((UnityEngine_SkinnedMeshRenderer_o *)renderer,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar14 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar14) goto label_05c4a2de;
    pUVar16 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar16,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    MiscExtensions__BakeLocalMesh
              ((UnityEngine_SkinnedMeshRenderer_o *)renderer,(UnityEngine_Mesh_o *)pUVar16,(MethodInfo *)0x0);
    uVar5 = (TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
  }
  UnityEngine_Renderer__GetSharedMaterials
            (renderer,TypeInfo_Characters_TitanDeathDissolve->static_fields->SourceMaterials,(MethodInfo *)0x0
            );
  pSVar17 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SourceMaterials;
  if (pSVar17 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c4aaf9;
  if (0 < (pSVar17->fields)._size) {
    if (pUVar16 == (UnityEngine_Object_o *)0x0) goto label_05c4aaf9;
    iVar15 = UnityEngine_Mesh__get_subMeshCount((UnityEngine_Mesh_o *)pUVar16,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
    }
    pSVar17 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SourceMaterials;
    if (pSVar17 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c4aaf9;
    if ((pSVar17->fields)._size < iVar15) {
      if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
        pSVar17 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SourceMaterials;
        if (pSVar17 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c4aaf9;
      }
      UnityEngine_Mesh__set_subMeshCount
                ((UnityEngine_Mesh_o *)pUVar16,(pSVar17->fields)._size,(MethodInfo *)0x0);
    }
  }
  pSVar18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)renderer,(MethodInfo *)0x0);
  pSVar18 = System_String__Concat_52f0320("Dissolving ",pSVar18,(MethodInfo *)0x0);
  if (pUVar16 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(pUVar16,pSVar18,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._titan;
    if ((__this_00 != (Characters_BaseTitan_o *)0x0) &&
       (pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
       , pUVar19 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_worldToLocalMatrix
                ((UnityEngine_Matrix4x4_o *)local_1b8,pUVar19,(MethodInfo *)0x0);
      uVar13 = local_1b8._60_4_;
      uVar12 = local_1b8._56_4_;
      uVar11 = local_1b8._52_4_;
      uVar10 = local_1b8._48_4_;
      local_118._8_4_ = local_1b8._8_4_;
      local_118._12_4_ = local_1b8._12_4_;
      local_118._0_8_ = local_1b8._0_8_;
      local_118._16_8_ = CONCAT44(local_1b8._20_4_,local_1b8._16_4_);
      local_118._24_4_ = local_1b8._24_4_;
      local_118._28_4_ = local_1b8._28_4_;
      local_168._4_4_ = local_1b8._36_4_;
      local_168._0_4_ = local_1b8._32_4_;
      uStack_160._4_4_ = (float)local_1b8._44_4_;
      uStack_160._0_4_ = (float)local_1b8._40_4_;
      pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)renderer,(MethodInfo *)0x0);
      if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
        iVar15 = 0;
        UnityEngine_Transform__get_localToWorldMatrix
                  ((UnityEngine_Matrix4x4_o *)local_1b8,pUVar19,(MethodInfo *)0x0);
        local_158.m10 =
             (float)local_1b8._12_4_ * (float)uVar11 +
             (float)local_1b8._8_4_ * (float)local_168._4_4_ +
             (float)local_1b8._4_4_ * (float)local_118._20_4_ +
             (float)local_1b8._0_4_ * (float)local_118._4_4_;
        local_158.m00 =
             (float)local_1b8._12_4_ * (float)uVar10 +
             (float)local_1b8._8_4_ * (float)local_168._0_4_ +
             (float)local_1b8._4_4_ * (float)local_118._16_4_ +
             (float)local_1b8._0_4_ * (float)local_118._0_4_;
        local_158.m30 =
             (float)local_1b8._12_4_ * (float)uVar13 +
             (float)local_1b8._8_4_ * uStack_160._4_4_ +
             (float)local_1b8._4_4_ * (float)local_118._28_4_ +
             (float)local_1b8._0_4_ * (float)local_118._12_4_;
        local_158.m20 =
             (float)local_1b8._12_4_ * (float)uVar12 +
             (float)local_1b8._8_4_ * (float)uStack_160 +
             (float)local_1b8._4_4_ * (float)local_118._24_4_ +
             (float)local_1b8._0_4_ * (float)local_118._8_4_;
        local_158.m11 =
             (float)local_1b8._28_4_ * (float)uVar11 +
             (float)local_1b8._24_4_ * (float)local_168._4_4_ +
             (float)local_1b8._20_4_ * (float)local_118._20_4_ +
             (float)local_1b8._16_4_ * (float)local_118._4_4_;
        local_158.m01 =
             (float)local_1b8._28_4_ * (float)uVar10 +
             (float)local_1b8._24_4_ * (float)local_168._0_4_ +
             (float)local_1b8._20_4_ * (float)local_118._16_4_ +
             (float)local_1b8._16_4_ * (float)local_118._0_4_;
        local_158.m31 =
             (float)local_1b8._28_4_ * (float)uVar13 +
             (float)local_1b8._24_4_ * uStack_160._4_4_ +
             (float)local_1b8._20_4_ * (float)local_118._28_4_ +
             (float)local_1b8._16_4_ * (float)local_118._12_4_;
        local_158.m21 =
             (float)local_1b8._28_4_ * (float)uVar12 +
             (float)local_1b8._24_4_ * (float)uStack_160 +
             (float)local_1b8._20_4_ * (float)local_118._24_4_ +
             (float)local_1b8._16_4_ * (float)local_118._8_4_;
        local_158.m12 =
             (float)local_1b8._44_4_ * (float)uVar11 +
             (float)local_1b8._40_4_ * (float)local_168._4_4_ +
             (float)local_1b8._36_4_ * (float)local_118._20_4_ +
             (float)local_1b8._32_4_ * (float)local_118._4_4_;
        local_158.m02 =
             (float)local_1b8._44_4_ * (float)uVar10 +
             (float)local_1b8._40_4_ * (float)local_168._0_4_ +
             (float)local_1b8._36_4_ * (float)local_118._16_4_ +
             (float)local_1b8._32_4_ * (float)local_118._0_4_;
        local_158.m32 =
             (float)local_1b8._44_4_ * (float)uVar13 +
             (float)local_1b8._40_4_ * uStack_160._4_4_ +
             (float)local_1b8._36_4_ * (float)local_118._28_4_ +
             (float)local_1b8._32_4_ * (float)local_118._12_4_;
        local_158.m22 =
             (float)local_1b8._44_4_ * (float)uVar12 +
             (float)local_1b8._40_4_ * (float)uStack_160 +
             (float)local_1b8._36_4_ * (float)local_118._24_4_ +
             (float)local_1b8._32_4_ * (float)local_118._8_4_;
        local_158.m13 =
             (float)local_1b8._60_4_ * (float)uVar11 +
             (float)local_1b8._56_4_ * (float)local_168._4_4_ +
             (float)local_1b8._52_4_ * (float)local_118._20_4_ +
             (float)local_1b8._48_4_ * (float)local_118._4_4_;
        local_158.m03 =
             (float)local_1b8._60_4_ * (float)uVar10 +
             (float)local_1b8._56_4_ * (float)local_168._0_4_ +
             (float)local_1b8._52_4_ * (float)local_118._16_4_ +
             (float)local_1b8._48_4_ * (float)local_118._0_4_;
        local_158.m33 =
             (float)local_1b8._60_4_ * (float)uVar13 +
             (float)local_1b8._56_4_ * uStack_160._4_4_ +
             (float)local_1b8._52_4_ * (float)local_118._28_4_ +
             (float)local_1b8._48_4_ * (float)local_118._12_4_;
        local_158.m23 =
             (float)local_1b8._60_4_ * (float)uVar12 +
             (float)local_1b8._56_4_ * (float)uStack_160 +
             (float)local_1b8._52_4_ * (float)local_118._24_4_ +
             (float)local_1b8._48_4_ * (float)local_118._8_4_;
        UnityEngine_Matrix4x4__Internal_Inverse
                  ((UnityEngine_Matrix4x4_o *)&local_70,(UnityEngine_Matrix4x4_o *)&local_158,
                   (MethodInfo *)0x0);
        local_88 = local_70.m03;
        fStack_84 = local_70.m13;
        fStack_80 = local_70.m23;
        fStack_7c = local_70.m33;
        local_98 = local_70.m02;
        fStack_94 = local_70.m12;
        fStack_90 = local_70.m22;
        fStack_8c = local_70.m32;
        local_a8._0_4_ = local_70.m01;
        local_a8._4_4_ = local_70.m11;
        local_a8._8_4_ = local_70.m21;
        local_a8._12_4_ = local_70.m31;
        local_c8._16_4_ = local_70.m00;
        local_c8._20_4_ = local_70.m10;
        local_c8._24_4_ = local_70.m20;
        local_c8._28_4_ = local_70.m30;
        UnityEngine_Matrix4x4__Internal_Transpose
                  ((UnityEngine_Matrix4x4_o *)local_1b8,(UnityEngine_Matrix4x4_o *)(local_c8 + 0x10),
                   (MethodInfo *)0x0);
        local_118._16_4_ = local_1b8._8_4_;
        local_118._0_4_ = local_1b8._24_4_;
        local_c8._0_8_ = local_1b8._0_8_;
        local_c8._8_8_ = 0;
        local_d8 = CONCAT44(local_1b8._20_4_,local_1b8._16_4_);
        uStack_d0 = 0;
        local_e8 = CONCAT44(local_1b8._36_4_,local_1b8._32_4_);
        uStack_e0 = 0;
        local_16c = (float)local_1b8._40_4_;
        local_f0 = __this;
        if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
        }
        UnityEngine_Mesh__GetVertices
                  ((UnityEngine_Mesh_o *)pUVar16,
                   TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices,(MethodInfo *)0x0);
        local_118._32_8_ = pUVar16;
        UnityEngine_Mesh__GetNormals
                  ((UnityEngine_Mesh_o *)pUVar16,
                   TypeInfo_Characters_TitanDeathDissolve->static_fields->Normals,(MethodInfo *)0x0);
        while( true ) {
          if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
          }
          pSVar21 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices;
          if (pSVar21 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c4aaf9;
          uVar5 = (TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor;
          if ((pSVar21->fields)._size <= iVar15) break;
          if (uVar5 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
            pSVar21 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices;
            if (pSVar21 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c4aaf9;
          }
          UVar25 = System_Collections_Generic_List_Vector3___get_Item
                             (pSVar21,iVar15,
                              (MethodInfo_39FF5D0 *)
                              MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          UVar25.fields.z = UVar25.fields.z;
          fVar24 = UVar25.fields.x;
          fVar22 = UVar25.fields.y;
          UVar25.fields.x =
               fVar24 * local_158.m00 + local_158.m01 * fVar22 + UVar25.fields.z * local_158.m02 +
               local_158.m03;
          UVar25.fields.y =
               fVar24 * local_158.m10 + local_158.m11 * fVar22 + UVar25.fields.z * local_158.m12 +
               local_158.m13;
          UVar25.fields.z =
               UVar25.fields.z * local_158.m22 + local_158.m21 * fVar22 + local_158.m20 * fVar24 +
               local_158.m23;
          System_Collections_Generic_List_Vector3___set_Item
                    (pSVar21,iVar15,UVar25,
                     (MethodInfo_39FF620 *)MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
          pSVar21 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Normals;
          if (pSVar21 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c4aaf9;
          UVar25 = System_Collections_Generic_List_Vector3___get_Item
                             (pSVar21,iVar15,
                              (MethodInfo_39FF5D0 *)
                              MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          fVar24 = UVar25.fields.z;
          uStack_160._0_4_ = (float)extraout_XMM0_Dc;
          local_168 = (undefined1  [8])UVar25.fields._0_8_;
          uStack_160._4_4_ = (float)extraout_XMM0_Dd;
          if (Il2CppMethodInitialized_0753e72d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72d = '\x01';
            local_1b8._0_4_ = 0.0;
            local_1b8._4_4_ = 0.0;
            if (g_data_0753e729 == '\0') goto label_05c4a9dd;
label_05c4a8bc:
            local_1b8._0_4_ = 0.0;
            local_1b8._4_4_ = 0.0;
            uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            local_1b8._0_4_ = 0.0;
            local_1b8._4_4_ = 0.0;
            if (g_data_0753e729 != '\0') goto label_05c4a8bc;
label_05c4a9dd:
            local_1b8._0_4_ = 0.0;
            local_1b8._4_4_ = 0.0;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            g_data_0753e729 = '\x01';
            uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar5 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          auVar23._0_4_ =
               fVar24 * (float)local_e8 +
               (float)local_d8 * (float)local_168._4_4_ + (float)local_168._0_4_ * (float)local_c8._0_4_;
          auVar23._4_4_ =
               fVar24 * local_e8._4_4_ +
               local_d8._4_4_ * (float)local_168._4_4_ + (float)local_168._0_4_ * (float)local_c8._4_4_;
          auVar23._8_4_ =
               fVar24 * (float)uStack_e0 +
               (float)uStack_d0 * (float)local_168._4_4_ + (float)local_168._0_4_ * (float)local_c8._8_4_;
          auVar23._12_4_ =
               fVar24 * uStack_e0._4_4_ +
               uStack_d0._4_4_ * (float)local_168._4_4_ + (float)local_168._0_4_ * (float)local_c8._12_4_;
          fVar24 = (float)local_168._4_4_ * (float)local_118._0_4_ +
                   (float)local_118._16_4_ * (float)local_168._0_4_ + local_16c * fVar24;
          fVar22 = fVar24 * fVar24 + auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_;
          if (fVar22 < 0.0) {
            local_168._0_4_ = fVar24;
            uStack_160._0_4_ = (float)local_168._4_4_;
            uStack_160._4_4_ = (float)local_168._4_4_;
            fVar22 = sqrtf(fVar22);
            UVar25.fields.z = extraout_XMM0_Db;
            fVar24 = (float)local_168._0_4_;
            if (1e-05 < fVar22) goto label_05c4a750;
label_05c4a994:
            pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar24 = (pUVar20->zeroVector).fields.z;
          }
          else {
            fVar22 = SQRT(fVar22);
            UVar25.fields.z = (float)local_168._4_4_;
            if (fVar22 <= 1e-05) goto label_05c4a994;
label_05c4a750:
            fVar24 = fVar24 / fVar22;
            auVar8._4_4_ = fVar22;
            auVar8._0_4_ = fVar22;
            auVar8._8_4_ = UVar25.fields.z;
            auVar8._12_4_ = UVar25.fields.z;
            auVar23 = divps(auVar23,auVar8);
            local_1b8._0_4_ = auVar23._0_4_;
            local_1b8._4_4_ = auVar23._4_4_;
            pUVar20 = (UnityEngine_Vector3_StaticFields *)local_1b8;
          }
          uVar2 = (pUVar20->zeroVector).fields.x;
          uVar3 = (pUVar20->zeroVector).fields.y;
          value.fields.y = (float)uVar3;
          value.fields.x = (float)uVar2;
          value.fields.z = fVar24;
          System_Collections_Generic_List_Vector3___set_Item
                    (pSVar21,iVar15,value,
                     (MethodInfo_39FF620 *)MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
          iVar15 = iVar15 + 1;
        }
        if (uVar5 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
          pSVar21 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices;
        }
        __this_02 = local_118._32_8_;
        UnityEngine_Mesh__SetVertices((UnityEngine_Mesh_o *)local_118._32_8_,pSVar21,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetNormals
                  ((UnityEngine_Mesh_o *)__this_02,
                   TypeInfo_Characters_TitanDeathDissolve->static_fields->Normals,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetUVs_68e9880
                  ((UnityEngine_Mesh_o *)__this_02,3,
                   TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices,(MethodInfo *)0x0);
        UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)__this_02,(MethodInfo *)0x0);
        pMVar9 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
        __this_01 = (local_f0->fields)._meshes;
        if (__this_01 != (System_Collections_Generic_List_Mesh__o *)0x0) {
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (__this_01->fields)._items;
          if (pUVar7 != (UnityEngine_Mesh_array *)0x0) {
            uVar6 = (__this_01->fields)._size;
            if (uVar6 < (uint)pUVar7->max_length) {
              (__this_01->fields)._size = uVar6 + 1;
              pUVar7->m_Items[(int)uVar6] = (UnityEngine_Mesh_o *)__this_02;
              Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar6);
              return (UnityEngine_Mesh_o *)(UnityEngine_Object_o *)__this_02;
            }
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_02,
                       (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
            return (UnityEngine_Mesh_o *)(UnityEngine_Object_o *)__this_02;
          }
        }
      }
    }
  }
label_05c4aaf9:
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$CreateMaterial
// il2cpp: UnityEngine_Material_o* Characters_TitanDeathDissolve__CreateMaterial (Characters_TitanDeathDissolve_o* __this, UnityEngine_Material_o* source, float layer, const MethodInfo* method);
// 0x5c4ab30

UnityEngine_Material_o *
Characters_TitanDeathDissolve__CreateMaterial
          (Characters_TitanDeathDissolve_o *__this,UnityEngine_Material_o *source,float layer,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Shader_o *shader;
  Characters_BaseTitan_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  System_Collections_Generic_List_Material__o *__this_00;
  UnityEngine_Material_array *pUVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  UnityEngine_Material_o *__this_01;
  System_String_o *pSVar9;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Color_o value_00;
  float local_34;
  
  if (Il2CppMethodInitialized_0754783e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Titan dissolve ");
    il2cpp_codegen_initialize_runtime_metadata(&"_Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"_Color");
    il2cpp_codegen_initialize_runtime_metadata(&"_MainTex");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    il2cpp_codegen_initialize_runtime_metadata(&"_DissolveSeed");
    il2cpp_codegen_initialize_runtime_metadata(&"_DissolveScale");
    Il2CppMethodInitialized_0754783e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    shader = (__this->fields)._shader;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
  }
  else {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor_68dcfd0(__this_01,source,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Material_o *)0x0) goto label_05c4aefd;
    UnityEngine_Material__set_shader(__this_01,(__this->fields)._shader,(MethodInfo *)0x0);
  }
  pSVar9 = System_Single__ToString(&local_34,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_52f0320("Titan dissolve ",pSVar9,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_01,pSVar9,(MethodInfo *)0x0);
    UnityEngine_Material__set_renderQueue(__this_01,(int)layer + 2000,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat(__this_01,"_Layer",layer,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (__this_01,"_DissolveScale",12.0 / (__this->fields)._scale,(MethodInfo *)0x0);
    pCVar3 = (__this->fields)._titan;
    if (((pCVar3 != (Characters_BaseTitan_o *)0x0) &&
        (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pPVar5 = (pUVar4->fields).PhotonView, pPVar5 != (Photon_Pun_PhotonView_o *)0x0)) {
      UnityEngine_Material__SetFloat
                (__this_01,"_DissolveSeed",(float)((pPVar5->fields).viewIdField % 0x3e5) * 0.17,
                 (MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        if (source == (UnityEngine_Material_o *)0x0) goto label_05c4aefd;
        bVar8 = UnityEngine_Material__HasProperty_68dd940(source,"_BaseMap",(MethodInfo *)0x0);
        if (!bVar8) {
          bVar8 = UnityEngine_Material__HasProperty_68dd940(source,"_MainTex",(MethodInfo *)0x0);
          if (bVar8) {
            value = UnityEngine_Material__GetTexture(source,"_MainTex",(MethodInfo *)0x0);
            UnityEngine_Material__SetTexture(__this_01,"_BaseMap",value,(MethodInfo *)0x0);
            UVar10 = UnityEngine_Material__GetTextureScale(source,"_MainTex",(MethodInfo *)0x0);
            UnityEngine_Material__SetTextureScale(__this_01,"_BaseMap",UVar10,(MethodInfo *)0x0);
            UVar10 = UnityEngine_Material__GetTextureOffset(source,"_MainTex",(MethodInfo *)0x0);
            UnityEngine_Material__SetTextureOffset(__this_01,"_BaseMap",UVar10,(MethodInfo *)0x0);
          }
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        if (source == (UnityEngine_Material_o *)0x0) goto label_05c4aefd;
        bVar8 = UnityEngine_Material__HasProperty_68dd940(source,"_BaseColor",(MethodInfo *)0x0);
        if (!bVar8) {
          bVar8 = UnityEngine_Material__HasProperty_68dd940(source,"_Color",(MethodInfo *)0x0);
          if (bVar8) {
            value_00 = UnityEngine_Material__GetColor(source,"_Color",(MethodInfo *)0x0);
            UnityEngine_Material__SetColor(__this_01,"_BaseColor",value_00,(MethodInfo *)0x0);
          }
        }
      }
      pMVar7 = MethodInfo_System_Collections_Generic_List_Material_Add;
      __this_00 = (__this->fields)._materials;
      if (__this_00 != (System_Collections_Generic_List_Material__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (__this_00->fields)._items;
        if (pUVar6 != (UnityEngine_Material_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pUVar6->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar6->m_Items[(int)uVar2] = __this_01;
            Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          }
          return __this_01;
        }
      }
    }
  }
label_05c4aefd:
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$CreateSteamSurface
// il2cpp: UnityEngine_Mesh_o* Characters_TitanDeathDissolve__CreateSteamSurface (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x5c4b3d0
// eh: try 0x5c4b57a..0x5c4ba69 -> pad 0x5c4ba79 (+39 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c4bac6..0x5c4bacb -> pad 0x5c4bc0e cleanup
// eh: try 0x5c4bc1b..0x5c4bc3a -> pad 0x5c4bc3a (+1 call sites) catch (...) [compiler noexcept guard]
// asm: 76 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4b4ea: jmp 0x5c4bbfd
// asm:   0x5c4b8d8: jmp 0x5c4b719
// asm:   0x5c4ba69: jmp 0x5c4baaf
// asm:   0x5c4ba6b: jmp 0x5c4baaf
// asm:   0x5c4ba6d: jmp 0x5c4baaf
// asm:   0x5c4ba6f: jmp 0x5c4baaf
// asm:   0x5c4ba71: jmp 0x5c4baaf
// asm:   0x5c4ba73: jmp 0x5c4baaf
// asm:   0x5c4ba75: jmp 0x5c4baaf
// asm:   0x5c4ba77: jmp 0x5c4baaf
// asm:   0x5c4ba79: jmp 0x5c4baaf
// asm:   0x5c4ba7b: jmp 0x5c4baaf
// asm:   0x5c4ba7d: jmp 0x5c4baaf
// asm:   0x5c4ba7f: jmp 0x5c4baaf
// asm:   0x5c4ba81: jmp 0x5c4baaf
// asm:   0x5c4ba83: jmp 0x5c4baaf
// asm:   0x5c4ba85: jmp 0x5c4baaf
// asm:   0x5c4ba87: jmp 0x5c4baaf
// asm:   0x5c4ba89: jmp 0x5c4baaf
// asm:   0x5c4ba8b: jmp 0x5c4baaf
// asm:   0x5c4ba8d: jmp 0x5c4baaf
// asm:   0x5c4ba8f: jmp 0x5c4baaf
// asm:   0x5c4ba91: jmp 0x5c4baaf
// asm:   0x5c4ba93: jmp 0x5c4baaf
// asm:   0x5c4ba95: jmp 0x5c4baaf
// asm:   0x5c4ba97: jmp 0x5c4baaf
// asm:   0x5c4ba99: jmp 0x5c4baaf
// asm:   0x5c4ba9b: jmp 0x5c4baaf
// asm:   0x5c4ba9d: jmp 0x5c4baaf
// asm:   0x5c4ba9f: jmp 0x5c4baaf
// asm:   0x5c4baa1: jmp 0x5c4baaf
// asm:   0x5c4baa3: jmp 0x5c4baaf
// asm:   0x5c4baa5: jmp 0x5c4baaf
// asm:   0x5c4baa7: jmp 0x5c4baaf
// asm:   0x5c4baa9: jmp 0x5c4baaf
// asm:   0x5c4baab: jmp 0x5c4baaf
// asm:   0x5c4baad: jmp 0x5c4baaf
// asm:   0x5c4baaf: mov rbx, rax
// asm:   0x5c4bab2: cmp edx, 1
// asm:   0x5c4bab5: jne 0x5c4bc02
// asm:   0x5c4babb: mov rdi, rbx
// asm:   0x5c4babe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4bac3: mov rbp, qword ptr [rax]
// asm:   0x5c4bac6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4bacb: lea rax, [rip + 0x16439ce]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource_Dispose
// asm:   0x5c4bad2: mov rsi, qword ptr [rax]
// asm:   0x5c4bad5: lea rdi, [rsp + 0x20]
// asm:   0x5c4bada: call 0x4d88cc0  ; System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource___Dispose()
// asm:   0x5c4badf: test rbp, rbp
// asm:   0x5c4bae2: jne 0x5c4bc06
// asm:   0x5c4bae8: lea rax, [rip + 0x162f119]  ; TypeInfo_UnityEngine_Mesh
// asm:   0x5c4baef: mov rdi, qword ptr [rax]
// asm:   0x5c4baf2: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5c4baf7: mov rbx, rax
// asm:   0x5c4bafa: mov rdi, rax
// asm:   0x5c4bafd: xor esi, esi
// asm:   0x5c4baff: call 0x69e5650  ; UnityEngine_Mesh___ctor()
// asm:   0x5c4bb04: test rbx, rbx
// asm:   0x5c4bb07: je 0x5c4bbfd
// asm:   0x5c4bc02: xor ebp, ebp
// asm:   0x5c4bc04: jmp 0x5c4bc11
// asm:   0x5c4bc06: mov rdi, rbp
// asm:   0x5c4bc09: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4bc0e: mov rbx, rax
// asm:   0x5c4bc11: lea rax, [rip + 0x1643888]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource_Dispose
// asm:   0x5c4bc18: mov rsi, qword ptr [rax]
// asm:   0x5c4bc1b: lea rdi, [rsp + 0x20]
// asm:   0x5c4bc20: call 0x4d88cc0  ; System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource___Dispose()
// asm:   0x5c4bc25: test rbp, rbp
// asm:   0x5c4bc28: jne 0x5c4bc32
// asm:   0x5c4bc2a: mov rdi, rbx
// asm:   0x5c4bc2d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c4bc32: mov rdi, rbp
// asm:   0x5c4bc35: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4bc3a: mov rdi, rax
// asm:   0x5c4bc3d: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Mesh_o *
Characters_TitanDeathDissolve__CreateSteamSurface(Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  int index;
  int32_t *piVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_List_Vector3__o *pSVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  System_Int32_array *pSVar7;
  System_Collections_Generic_List_Vector2__o *pSVar8;
  System_Collections_Generic_List_Mesh__o *__this_00;
  UnityEngine_Mesh_array *pUVar9;
  UnityEngine_Vector2_o UVar10;
  MethodInfo *pMVar11;
  Il2CppObject *__this_01;
  ulong uVar12;
  UnityEngine_Mesh_o *__this_02;
  bool bVar13;
  float fVar14;
  int32_t iVar15;
  UnityEngine_Object_o *__this_03;
  System_Collections_Generic_List_int__o *pSVar16;
  int submesh;
  Characters_TitanDeathDissolve_StaticFields *pCVar17;
  int index_00;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  ulong uStack_70;
  Characters_TitanDeathDissolve_o *local_60;
  UnityEngine_Mesh_o *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  ulong uStack_38;
  
  local_60 = __this;
  if (Il2CppMethodInitialized_0754783f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata(&"Titan steam surface");
    Il2CppMethodInitialized_0754783f = '\x01';
  }
  local_88.fields._current = (Il2CppObject *)0x0;
  uStack_70 = 0;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
    pCVar17 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
    pSVar5 = pCVar17->SurfaceVertices;
  }
  else {
    pCVar17 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
    pSVar5 = pCVar17->SurfaceVertices;
  }
  if (pSVar5 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar5->fields)._size = 0;
    pSVar16 = pCVar17->SurfaceTriangles;
    if (pSVar16 != (System_Collections_Generic_List_int__o *)0x0) {
      piVar1 = &(pSVar16->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar16->fields)._size = 0;
      if (pCVar17->SteamSources != (System_Collections_Generic_List_TitanDeathDissolve_SteamSource__o *)0x0) {
        System_Collections_Generic_List_TitanDeathDissolve_SteamSource___GetEnumerator
                  (&local_50,pCVar17->SteamSources,
                   (MethodInfo_3B083C0 *)
                   MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_GetEnumerator);
        local_88.fields._current = local_50.fields._current;
        uStack_70 = uStack_38;
        local_88.fields._list = local_50.fields._list;
        local_88.fields._index = local_50.fields._index;
        local_88.fields._version = local_50.fields._version;
        while (bVar13 = System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource___MoveNext
                                  (&local_88,
                                   (MethodInfo_4C88CD0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource_MoveNext
                                  ), uVar12 = uStack_70, __this_01 = local_88.fields._current, bVar13) {
          if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
          }
          pSVar5 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SurfaceVertices;
          if (pSVar5 == (System_Collections_Generic_List_Vector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((UnityEngine_Mesh_o *)__this_01 == (UnityEngine_Mesh_o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar2 = (pSVar5->fields)._size;
          UnityEngine_Mesh__GetVertices
                    ((UnityEngine_Mesh_o *)__this_01,
                     TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices,(MethodInfo *)0x0);
          pSVar5 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SurfaceVertices;
          if (pSVar5 == (System_Collections_Generic_List_Vector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_Vector3___AddRange
                    (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)
                            TypeInfo_Characters_TitanDeathDissolve->static_fields->Vertices,
                     (MethodInfo_39FFBC0 *)MethodInfo_System_Collections_Generic_List_Vector3_AddRange);
          if ((uVar12 & 1) != 0) {
            if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
            }
            UnityEngine_Mesh__GetUVs
                      ((UnityEngine_Mesh_o *)__this_01,1,
                       TypeInfo_Characters_TitanDeathDissolve->static_fields->GrowthCoordinates,
                       (MethodInfo *)0x0);
          }
          fVar14 = (float)(uVar12 >> 0x20);
          local_58 = (UnityEngine_Mesh_o *)__this_01;
          for (submesh = 0; __this_02 = local_58,
              iVar15 = UnityEngine_Mesh__get_subMeshCount(local_58,(MethodInfo *)0x0), submesh < iVar15;
              submesh = submesh + 1) {
            if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
            }
            UnityEngine_Mesh__GetTriangles_68ea7f0
                      (__this_02,TypeInfo_Characters_TitanDeathDissolve->static_fields->Triangles,submesh,
                       (MethodInfo *)0x0);
            index_00 = 2;
            while( true ) {
              if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
              }
              pCVar17 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
              pSVar16 = pCVar17->Triangles;
              if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) {
                ThrowNullReferenceException();
              }
              index = index_00 + -2;
              if ((pSVar16->fields)._size <= index) break;
              if ((uVar12 & 1) == 0) {
                uVar3 = (TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor;
joined_r0x05c4b8d2:
                if (uVar3 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
                }
                pSVar16 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Triangles;
                if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar6 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SurfaceTriangles;
                iVar15 = System_Collections_Generic_List_int___get_Item
                                   (pSVar16,index,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
                if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c4ba19:
                  ThrowNullReferenceException();
                }
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (pSVar6->fields)._items;
                if (pSVar7 == (System_Int32_array *)0x0) goto label_05c4ba19;
                uVar4 = (pSVar6->fields)._size;
                if (uVar4 < (uint)pSVar7->max_length) {
                  (pSVar6->fields)._size = uVar4 + 1;
                  pSVar7->m_Items[(int)uVar4] = iVar15 + iVar2;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize
                            (pSVar6,iVar15 + iVar2,
                             (MethodInfo_3916AC0 *)pMVar11->klass->rgctx_data[0xe].method);
                }
                pSVar16 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Triangles;
                if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar6 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SurfaceTriangles;
                iVar15 = System_Collections_Generic_List_int___get_Item
                                   (pSVar16,index_00 + -1,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
                if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c4ba1e:
                  ThrowNullReferenceException();
                }
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (pSVar6->fields)._items;
                if (pSVar7 == (System_Int32_array *)0x0) goto label_05c4ba1e;
                uVar4 = (pSVar6->fields)._size;
                if (uVar4 < (uint)pSVar7->max_length) {
                  (pSVar6->fields)._size = uVar4 + 1;
                  pSVar7->m_Items[(int)uVar4] = iVar15 + iVar2;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize
                            (pSVar6,iVar15 + iVar2,
                             (MethodInfo_3916AC0 *)pMVar11->klass->rgctx_data[0xe].method);
                }
                pSVar16 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Triangles;
                if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar6 = TypeInfo_Characters_TitanDeathDissolve->static_fields->SurfaceTriangles;
                iVar15 = System_Collections_Generic_List_int___get_Item
                                   (pSVar16,index_00,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
                if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c4ba23:
                  ThrowNullReferenceException();
                }
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (pSVar6->fields)._items;
                if (pSVar7 == (System_Int32_array *)0x0) goto label_05c4ba23;
                uVar4 = (pSVar6->fields)._size;
                if (uVar4 < (uint)pSVar7->max_length) {
                  (pSVar6->fields)._size = uVar4 + 1;
                  pSVar7->m_Items[(int)uVar4] = iVar15 + iVar2;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize
                            (pSVar6,iVar15 + iVar2,
                             (MethodInfo_3916AC0 *)pMVar11->klass->rgctx_data[0xe].method);
                }
              }
              else {
                if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
                  pCVar17 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
                  pSVar16 = pCVar17->Triangles;
                  if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                }
                pSVar8 = pCVar17->GrowthCoordinates;
                iVar15 = System_Collections_Generic_List_int___get_Item
                                   (pSVar16,index,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                if (pSVar8 == (System_Collections_Generic_List_Vector2__o *)0x0) {
                  ThrowNullReferenceException();
                }
                UVar10 = System_Collections_Generic_List_Vector2___get_Item
                                   (pSVar8,iVar15,
                                    (MethodInfo_39F9280 *)
                                    MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
                if (UVar10.fields.x <= fVar14) {
                  if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
                  }
                  pSVar16 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Triangles;
                  if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar8 = TypeInfo_Characters_TitanDeathDissolve->static_fields->GrowthCoordinates;
                  iVar15 = System_Collections_Generic_List_int___get_Item
                                     (pSVar16,index_00 + -1,
                                      (MethodInfo_39167D0 *)
                                      MethodInfo_System_Collections_Generic_List_int_get_Item);
                  if (pSVar8 == (System_Collections_Generic_List_Vector2__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UVar10 = System_Collections_Generic_List_Vector2___get_Item
                                     (pSVar8,iVar15,
                                      (MethodInfo_39F9280 *)
                                      MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
                  if (UVar10.fields.x <= fVar14) {
                    if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve)
                      ;
                    }
                    pSVar16 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Triangles;
                    if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar8 = TypeInfo_Characters_TitanDeathDissolve->static_fields->GrowthCoordinates;
                    iVar15 = System_Collections_Generic_List_int___get_Item
                                       (pSVar16,index_00,
                                        (MethodInfo_39167D0 *)
                                        MethodInfo_System_Collections_Generic_List_int_get_Item);
                    if (pSVar8 == (System_Collections_Generic_List_Vector2__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    UVar10 = System_Collections_Generic_List_Vector2___get_Item
                                       (pSVar8,iVar15,
                                        (MethodInfo_39F9280 *)
                                        MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
                    if (UVar10.fields.x <= fVar14) {
                      uVar3 = (TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor;
                      goto joined_r0x05c4b8d2;
                    }
                  }
                }
              }
              index_00 = index_00 + 3;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource___Dispose
                  (&local_88,
                   (MethodInfo_4C88CC0 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource_Dispose
                  );
        __this_03 = (UnityEngine_Object_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
        UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this_03,(MethodInfo *)0x0);
        if (__this_03 != (UnityEngine_Object_o *)0x0) {
          UnityEngine_Object__set_name(__this_03,"Titan steam surface",(MethodInfo *)0x0);
          UnityEngine_Mesh__set_indexFormat((UnityEngine_Mesh_o *)__this_03,1,(MethodInfo *)0x0);
          if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
          }
          UnityEngine_Mesh__SetVertices
                    ((UnityEngine_Mesh_o *)__this_03,
                     TypeInfo_Characters_TitanDeathDissolve->static_fields->SurfaceVertices,(MethodInfo *)0x0)
          ;
          UnityEngine_Mesh__SetTriangles_68eb1e0
                    ((UnityEngine_Mesh_o *)__this_03,
                     TypeInfo_Characters_TitanDeathDissolve->static_fields->SurfaceTriangles,0,
                     (MethodInfo *)0x0);
          UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)__this_03,(MethodInfo *)0x0);
          UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)__this_03,(MethodInfo *)0x0);
          pMVar11 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
          __this_00 = (local_60->fields)._meshes;
          if (__this_00 != (System_Collections_Generic_List_Mesh__o *)0x0) {
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar9 = (__this_00->fields)._items;
            if (pUVar9 != (UnityEngine_Mesh_array *)0x0) {
              uVar4 = (__this_00->fields)._size;
              if (uVar4 < (uint)pUVar9->max_length) {
                (__this_00->fields)._size = uVar4 + 1;
                pUVar9->m_Items[(int)uVar4] = (UnityEngine_Mesh_o *)__this_03;
                Il2CppCodeGenWriteBarrier(pUVar9->m_Items + (int)uVar4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_03,
                           (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
              }
              return (UnityEngine_Mesh_o *)__this_03;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$CreateSteam
// il2cpp: void Characters_TitanDeathDissolve__CreateSteam (Characters_TitanDeathDissolve_o* __this, UnityEngine_Mesh_o* surface, bool plume, const MethodInfo* method);
// 0x5c4bc50

void Characters_TitanDeathDissolve__CreateSteam
               (Characters_TitanDeathDissolve_o *__this,UnityEngine_Mesh_o *surface,bool plume,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  Characters_BaseTitan_o *pCVar4;
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  UnityEngine_ParticleSystem_array *pUVar5;
  UnityEngine_GameObject_o *original;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Object_o *__this_01;
  System_String_o **ppSVar7;
  UnityEngine_ParticleSystem_o *particles;
  MethodInfo *pMVar8;
  float rate;
  UnityEngine_Vector3_o UVar9;
  
  pMVar8 = (MethodInfo *)surface;
  if (Il2CppMethodInitialized_07547840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ParticleSystem_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8b0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Dissolve steam plumes");
    il2cpp_codegen_initialize_runtime_metadata(&"Dissolve steam wisps");
    il2cpp_codegen_initialize_runtime_metadata(&"ArmSmokeParticle");
    Il2CppMethodInitialized_07547840 = '\x01';
  }
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  original = Characters_BasicTitanComponentCache__LoadParticle("ArmSmokeParticle",pMVar8);
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    __this_01 = (UnityEngine_Object_o *)
                UnityEngine_Object__Instantiate_object__35a4410
                          ((Il2CppObject *)original,pUVar6,
                           (MethodInfo_35A4410 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8b0)
    ;
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      if (plume) {
        ppSVar7 = &"Dissolve steam plumes";
      }
      else {
        ppSVar7 = &"Dissolve steam wisps";
      }
      UnityEngine_Object__set_name(__this_01,*ppSVar7,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar6,(UnityEngine_Vector3_o)
                          (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localRotation
                    (pUVar6,(UnityEngine_Quaternion_o)
                            *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                     (MethodInfo *)0x0);
          pUVar6 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (pUVar6,(UnityEngine_Vector3_o)
                              (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            particles = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)__this_01,
                                   (MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
            pCVar4 = (__this->fields)._titan;
            if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
              fVar2 = (__this->fields)._scale;
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                UVar9 = UnityEngine_Transform__get_lossyScale(pUVar6,(MethodInfo *)0x0);
                if (plume) {
                  rate = 42.0;
                }
                else {
                  rate = 80.0;
                }
                if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
                }
                Characters_TitanSteamEffect__Configure
                          (particles,fVar2 * ABS(UVar9.fields.y),plume,rate,(MethodInfo *)0x0);
                Characters_TitanSteamEffect__SetSurface(particles,surface,(MethodInfo *)0x0);
                pMVar8 = MethodInfo_System_Collections_Generic_List_ParticleSystem_Add;
                __this_00 = (__this->fields)._steam;
                if (__this_00 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (__this_00->fields)._items;
                  if (pUVar5 != (UnityEngine_ParticleSystem_array *)0x0) {
                    uVar3 = (__this_00->fields)._size;
                    if (uVar3 < (uint)pUVar5->max_length) {
                      (__this_00->fields)._size = uVar3 + 1;
                      pUVar5->m_Items[(int)uVar3] = particles;
                      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar3);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_00,
                                 (Il2CppObject *)particles,
                                 (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                    }
                    if (particles != (UnityEngine_ParticleSystem_o *)0x0) {
                      UnityEngine_ParticleSystem__Play(particles,false,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$Finish
// il2cpp: void Characters_TitanDeathDissolve__Finish (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x5c3eb00
// eh: try 0x5c3ebc3..0x5c3ec0b -> pad 0x5c3ec14 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c3ec2c..0x5c3ec31 -> pad 0x5c3ec54 cleanup
// eh: try 0x5c3ec57..0x5c3ec61 -> pad 0x5c3ec69 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3ebb9: nop dword ptr [rax]
// asm:   0x5c3ec10: jmp 0x5c3ec14
// asm:   0x5c3ec12: jmp 0x5c3ec14
// asm:   0x5c3ec14: mov rbx, rax
// asm:   0x5c3ec17: cmp edx, 1
// asm:   0x5c3ec1a: jne 0x5c3ec57
// asm:   0x5c3ec1c: mov rdi, rbx
// asm:   0x5c3ec1f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c3ec24: mov rbx, qword ptr [rax]
// asm:   0x5c3ec27: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c3ec2c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c3ec31: lea rax, [rip + 0x164fa70]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x5c3ec38: mov rsi, qword ptr [rax]
// asm:   0x5c3ec3b: mov rdi, rsp
// asm:   0x5c3ec3e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c3ec43: test rbx, rbx
// asm:   0x5c3ec46: je 0x5c3eb60
// asm:   0x5c3ec4c: mov rdi, rbx
// asm:   0x5c3ec4f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c3ec54: mov rbx, rax
// asm:   0x5c3ec57: lea rdi, [rsp + 0x18]
// asm:   0x5c3ec5c: call 0x2fd9580  ; il2cpp_runtime_helper_02fd9580()
// asm:   0x5c3ec61: mov rdi, rbx
// asm:   0x5c3ec64: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c3ec69: mov rdi, rax
// asm:   0x5c3ec6c: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanDeathDissolve__Finish(Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  undefined8 local_20;
  undefined1 *local_18;
  
  if (Il2CppMethodInitialized_07547841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    Il2CppMethodInitialized_07547841 = '\x01';
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._finished != false) {
    return;
  }
  (__this->fields)._finished = true;
  Characters_TitanDeathDissolve__DisableColliders(__this,method);
  if ((__this->fields)._hideOnFinish != false) {
    Characters_TitanDeathDissolve__HideRenderers(__this,method);
  }
  __this_00 = (__this->fields)._steam;
  if (__this_00 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
  local_20 = 0;
  local_18 = (undefined1 *)&local_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
      return;
    }
    if ((UnityEngine_ParticleSystem_o *)local_38.fields._current == (UnityEngine_ParticleSystem_o *)0x0)
    break;
    UnityEngine_ParticleSystem__Stop
              ((UnityEngine_ParticleSystem_o *)local_38.fields._current,true,1,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$Update
// il2cpp: void Characters_TitanDeathDissolve__Update (Characters_TitanDeathDissolve_o* __this, float progress, const MethodInfo* method);
// 0x5c4c200
// eh: try 0x5c4c4b9..0x5c4c581 -> pad 0x5c4cba4 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c4c6aa..0x5c4cb6b -> pad 0x5c4cb9a (+15 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c4cb6b..0x5c4cb7a -> pad 0x5c4cba2 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c4cb7a..0x5c4cb84 -> pad 0x5c4cb98 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c4cbc7..0x5c4cbcc -> pad 0x5c4cbf1 cleanup
// eh: try 0x5c4cbf4..0x5c4cc01 -> pad 0x5c4cc56 catch (...) [compiler noexcept guard]
// eh: try 0x5c4cc34..0x5c4cc39 -> pad 0x5c4cc3e cleanup
// eh: try 0x5c4cc41..0x5c4cc4e -> pad 0x5c4cc56 catch (...) [compiler noexcept guard]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4c378: jmp 0x5c4cb84
// asm:   0x5c4c37d: movaps xmm5, xmm3
// asm:   0x5c4c380: movaps xmm4, xmm0
// asm:   0x5c4c383: test al, 1
// asm:   0x5c4cac8: jmp 0x5c4cb61
// asm:   0x5c4cb89: jmp 0x5c4cc19
// asm:   0x5c4cb8e: jmp 0x5c4cc19
// asm:   0x5c4cb93: jmp 0x5c4cc19
// asm:   0x5c4cb98: jmp 0x5c4cc19
// asm:   0x5c4cb9a: jmp 0x5c4cc19
// asm:   0x5c4cb9c: jmp 0x5c4cbac
// asm:   0x5c4cb9e: jmp 0x5c4cbac
// asm:   0x5c4cba0: jmp 0x5c4cbac
// asm:   0x5c4cba2: jmp 0x5c4cbac
// asm:   0x5c4cba4: jmp 0x5c4cbac
// asm:   0x5c4cba6: jmp 0x5c4cbac
// asm:   0x5c4cba8: jmp 0x5c4cbac
// asm:   0x5c4cbaa: jmp 0x5c4cbac
// asm:   0x5c4cbac: mov rbx, rax
// asm:   0x5c4cbaf: cmp edx, 1
// asm:   0x5c4cbb2: jne 0x5c4cbf4
// asm:   0x5c4cbb4: mov rdi, rbx
// asm:   0x5c4cbb7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4cbbc: mov rbx, qword ptr [rax]
// asm:   0x5c4cbbf: mov qword ptr [rsp + 0x90], rbx
// asm:   0x5c4cbc7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4cbcc: lea rax, [rip + 0x1641ad5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x5c4cbd3: mov rsi, qword ptr [rax]
// asm:   0x5c4cbd6: lea rdi, [rsp + 0x70]
// asm:   0x5c4cbdb: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c4cbe0: test rbx, rbx
// asm:   0x5c4cbe3: je 0x5c4c5b2
// asm:   0x5c4cbf1: mov rbx, rax
// asm:   0x5c4cbf4: lea rdi, [rsp + 0x90]
// asm:   0x5c4cbfc: call 0x2fd95b0  ; il2cpp_runtime_helper_02fd95b0()
// asm:   0x5c4cc01: jmp 0x5c4cc4e
// asm:   0x5c4cc03: jmp 0x5c4cc19
// asm:   0x5c4cc05: jmp 0x5c4cc19
// asm:   0x5c4cc07: jmp 0x5c4cc19
// asm:   0x5c4cc09: jmp 0x5c4cc19
// asm:   0x5c4cc0b: jmp 0x5c4cc19
// asm:   0x5c4cc0d: jmp 0x5c4cc19
// asm:   0x5c4cc0f: jmp 0x5c4cc19
// asm:   0x5c4cc11: jmp 0x5c4cc19
// asm:   0x5c4cc13: jmp 0x5c4cc19
// asm:   0x5c4cc15: jmp 0x5c4cc19
// asm:   0x5c4cc17: jmp 0x5c4cc19
// asm:   0x5c4cc19: mov rbx, rax
// asm:   0x5c4cc1c: cmp edx, 1
// asm:   0x5c4cc1f: jne 0x5c4cc41
// asm:   0x5c4cc21: mov rdi, rbx
// asm:   0x5c4cc24: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4cc29: mov rbx, qword ptr [rax]
// asm:   0x5c4cc2c: mov qword ptr [rsp + 0x90], rbx
// asm:   0x5c4cc34: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4cc39: jmp 0x5c4cb16
// asm:   0x5c4cc3e: mov rbx, rax
// asm:   0x5c4cc41: lea rdi, [rsp + 0x90]
// asm:   0x5c4cc49: call 0x2fd95e0  ; il2cpp_runtime_helper_02fd95e0()
// asm:   0x5c4cc4e: mov rdi, rbx
// asm:   0x5c4cc51: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c4cc56: mov rdi, rax
// asm:   0x5c4cc59: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanDeathDissolve__Update
               (Characters_TitanDeathDissolve_o *__this,float progress,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *pSVar1;
  Characters_BaseTitan_o *pCVar2;
  System_Collections_Generic_List_TitanDeathDissolve_Part__o *__this_00;
  UnityEngine_MaterialPropertyBlock_o *pUVar3;
  UnityEngine_ParticleSystem_c *pUVar4;
  char *pcVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *pUVar6;
  UnityEngine_Material_o *material;
  UnityEngine_Matrix4x4_o matrix;
  intptr_t iVar7;
  UnityEngine_ParticleSystem_o *pUVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int32_t iVar12;
  UnityEngine_ParticleSystem_o *y;
  UnityEngine_Transform_o *__this_01;
  ulong uVar13;
  int iVar14;
  UnityEngine_Mesh_o *__this_02;
  float fVar16;
  undefined1 auVar17 [12];
  undefined4 in_XMM0_Db;
  float fVar15;
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  int32_t iStack_264;
  UnityEngine_ParticleSystem_EmissionModule_o UStack_260;
  undefined1 auStack_258 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_250;
  UnityEngine_ParticleSystem_o *pUStack_248;
  undefined1 auStack_238 [16];
  UnityEngine_ParticleSystem_o *pUStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  UnityEngine_Mesh_o *pUStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  UnityEngine_ParticleSystem_o *pUStack_1c8;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  fStack_1f8 = progress;
  uStack_1f4 = in_XMM0_Db;
  if (Il2CppMethodInitialized_07547842 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Graphics);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    Il2CppMethodInitialized_07547842 = '\x01';
  }
  auStack_258 = (undefined1  [8])0x0;
  pSStack_250 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_248 = (UnityEngine_ParticleSystem_o *)0x0;
  UStack_260.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  auStack_1d8 = (undefined1  [8])0x0;
  uStack_1d0._0_4_ = 0;
  uStack_1d0._4_4_ = 0;
  pUStack_1c8 = (UnityEngine_ParticleSystem_o *)0x0;
  if (1.0 <= fStack_1f8) {
    Characters_TitanDeathDissolve__Finish(__this,method);
  }
  if ((__this->fields)._finished != false) {
    return;
  }
  auVar18._0_4_ = fStack_1f8 + -0.7;
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = uStack_1f4;
  auVar18._8_8_ = auVar19._8_8_;
  auVar18._4_4_ = fStack_1f8;
  auVar20 = divps(auVar18,_DAT_01009620);
  fVar15 = auVar20._0_4_;
  fVar22 = auVar20._4_4_;
  auVar20._4_4_ = -(uint)(1.0 < fVar15);
  auVar20._0_4_ = -(uint)(1.0 < fVar15);
  auVar20._8_4_ = -(uint)(1.0 < fVar22);
  auVar20._12_4_ = -(uint)(1.0 < fVar22);
  uVar11 = movmskpd((int)__this,auVar20);
  fVar21 = fVar22;
  if ((uVar11 & 2) != 0) {
    fVar21 = 1.0;
  }
  if ((uVar11 & 1) == 0) {
    pSVar1 = (__this->fields)._steam;
    fVar16 = fVar15;
  }
  else {
    pSVar1 = (__this->fields)._steam;
    fVar16 = 1.0;
  }
  if (pSVar1 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    fVar21 = (float)(-(uint)(0.0 <= fVar22) & (uint)fVar21);
    fVar22 = fVar21 * 3.0 * fVar21 - (fVar21 + fVar21) * fVar21 * fVar21;
    fVar16 = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar16);
    fVar21 = fVar16 * 3.0 * fVar16 - (fVar16 + fVar16) * fVar16 * fVar16;
    fVar21 = (1.0 - fVar21) * 0.0 + fVar21;
    auVar17 = ZEXT812(0x3f800000);
    if (fVar21 <= auVar17._0_4_) {
      auVar17._4_8_ = auVar17._4_8_;
      auVar17._0_4_ = fVar21;
    }
    pUStack_1e8 = (UnityEngine_Mesh_o *)
                  (ulong)(uint)((float)(~-(uint)(0.0 <= fVar21) & 0x3f800000 |
                                       (uint)(auVar17._0_4_ * -0.65 + 1.0) & -(uint)(0.0 <= fVar21)) *
                               ((1.0 - fVar22) * 0.0 + fVar22));
    uStack_1e0 = 0;
    uStack_1dc = 0;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_238,
               (System_Collections_Generic_List_object__o *)pSVar1,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    pUStack_248 = pUStack_228;
    auStack_258 = (undefined1  [8])auStack_238._0_8_;
    pSStack_250 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_238._8_8_;
    auStack_238._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_238._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_258;
    while (bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_258,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext),
          pUVar8 = pUStack_248, bVar10) {
      if (pUStack_248 == (UnityEngine_ParticleSystem_o *)0x0) {
        ThrowNullReferenceException();
      }
      UStack_260 = UnityEngine_ParticleSystem__get_emission(pUStack_248,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._titan;
      if (pCVar2 == (Characters_BaseTitan_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pCVar2->fields).EffectsEnabled == false) {
        bVar10 = false;
      }
      else {
        bVar10 = (pCVar2->fields).IsVisible != false && 0.0 < pUStack_1e8._0_4_;
      }
      UnityEngine_ParticleSystem_EmissionModule__set_enabled(&UStack_260,bVar10,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._steam;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
        ThrowNullReferenceException();
      }
      y = System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar1,0,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      fVar21 = 80.0;
      if (!bVar10) {
        fVar21 = 42.0;
      }
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTimeMultiplier
                (&UStack_260,fVar21 * pUStack_1e8._0_4_,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_258,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
      if ((pCVar2->fields).IsVisible == false) {
        return;
      }
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__get_localToWorldMatrix
                  ((UnityEngine_Matrix4x4_o *)auStack_238,__this_01,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._parts;
        if (__this_00 != (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0) {
          uStack_188 = (System_Collections_Generic_List_T__o *)auStack_238._0_8_;
          uStack_180 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_238._8_8_;
          uStack_198 = pUStack_228;
          fStack_190 = fStack_220;
          fStack_18c = fStack_21c;
          fStack_1a8 = fStack_218;
          fStack_1a4 = fStack_214;
          fStack_1a0 = fStack_210;
          fStack_19c = fStack_20c;
          fStack_1b8 = fStack_208;
          fStack_1b4 = fStack_204;
          fStack_1b0 = fStack_200;
          fStack_1ac = fStack_1fc;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_238,
                     (System_Collections_Generic_List_object__o *)__this_00,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_GetEnumerator);
          pUStack_1c8 = pUStack_228;
          auStack_1d8 = (undefined1  [8])auStack_238._0_8_;
          uStack_1d0 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_238._8_8_;
          auStack_238._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          auStack_238._8_8_ = auStack_1d8;
          while( true ) {
            do {
              bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)auStack_1d8,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_MoveNext
                                 );
              pUVar8 = pUStack_1c8;
              uVar9 = auStack_238._0_8_;
              if (!bVar10) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_238._8_8_,
                           (MethodInfo_4C45C40 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_Dispose
                          );
                if ((System_Collections_Generic_List_T__o *)uVar9 !=
                    (System_Collections_Generic_List_T__o *)0x0) {
                  il2cpp_codegen_rethrow(uVar9);
                }
                return;
              }
              if (pUStack_1c8 == (UnityEngine_ParticleSystem_o *)0x0) {
                ThrowNullReferenceException();
              }
            } while (*(float *)&(*(uint64_t *)((char *)pUStack_1c8 + 0x70)) <= fStack_1f8 &&
                     fStack_1f8 != *(float *)&(*(uint64_t *)((char *)pUStack_1c8 + 0x70)));
            pUVar3 = (*(uint64_t *)((char *)pUStack_1c8 + 0x20));
            if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
            }
            if (pUVar3 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
                      (pUVar3,TypeInfo_Characters_TitanDeathDissolve->static_fields->Dissolve,fStack_1f8,
                       (MethodInfo *)0x0);
            __this_02 = (UnityEngine_Mesh_o *)(pUVar8->fields).m_CachedPtr;
            if (__this_02 == (UnityEngine_Mesh_o *)0x0) break;
            uVar13 = 0;
            while( true ) {
              iVar12 = UnityEngine_Mesh__get_subMeshCount(__this_02,(MethodInfo *)0x0);
              pUVar4 = (*(uint64_t *)((char *)pUVar8 + 0x18));
              if (pUVar4 == (UnityEngine_ParticleSystem_c *)0x0) {
                ThrowNullReferenceException();
              }
              pcVar5 = (pUVar4->_1).namespaze;
              iVar14 = (int)pcVar5;
              if (iVar12 < iVar14) {
                iVar14 = iVar12;
              }
              if ((long)iVar14 <= (long)uVar13) break;
              if (((ulong)pcVar5 & 0xffffffff) <= uVar13) {
                ThrowIndexOutOfRangeException();
              }
              x = (&(pUVar4->_1).byval_arg.data)[uVar13];
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar10) {
                pUVar4 = (*(uint64_t *)((char *)pUVar8 + 0x18));
                if (pUVar4 == (UnityEngine_ParticleSystem_c *)0x0) {
                  ThrowNullReferenceException();
                }
                if (*(uint *)&(pUVar4->_1).namespaze <= uVar13) {
                  ThrowIndexOutOfRangeException();
                }
                pUVar6 = (UnityEngine_Renderer_o *)(__this->fields)._bodyRenderer;
                if (pUVar6 == (UnityEngine_Renderer_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUStack_1e8 = (UnityEngine_Mesh_o *)(pUVar8->fields).m_CachedPtr;
                auStack_178 = ZEXT416(*(uint *)&(*(uint64_t *)((char *)pUVar8 + 0x30)));
                auStack_168 = ZEXT416(*(uint *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x30)) + 4));
                auStack_158 = ZEXT416(*(uint *)&(*(uint64_t *)((char *)pUVar8 + 0x38)));
                auStack_88 = ZEXT416(*(uint *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x38)) + 4));
                auStack_148 = ZEXT416((uint)(*(uint64_t *)((char *)pUVar8 + 0x40)));
                auStack_138 = ZEXT416(*(uint *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x40)) + 4));
                auStack_128 = ZEXT416(*(uint *)&(*(uint64_t *)((char *)pUVar8 + 0x48)));
                auStack_98 = ZEXT416(*(uint *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x48)) + 4));
                auStack_118 = ZEXT416(*(uint *)&(*(uint64_t *)((char *)pUVar8 + 0x50)));
                auStack_108 = ZEXT416(*(uint *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x50)) + 4));
                auStack_f8 = ZEXT416((uint)(*(uint64_t *)((char *)pUVar8 + 0x58)));
                auStack_a8 = ZEXT416(*(uint *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x58)) + 4));
                auStack_e8 = ZEXT416(*(uint *)&(*(uint64_t *)((char *)pUVar8 + 0x60)));
                auStack_d8 = ZEXT416(*(uint *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x60)) + 4));
                auStack_c8 = ZEXT416(*(uint *)&(*(uint64_t *)((char *)pUVar8 + 0x68)));
                auStack_b8 = ZEXT416(*(uint *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x68)) + 4));
                material = (&(pUVar4->_1).byval_arg.data)[uVar13];
                iVar7 = (*(uint64_t *)((char *)pUVar8 + 0x28));
                pUVar3 = (*(uint64_t *)((char *)pUVar8 + 0x20));
                iVar12 = UnityEngine_Renderer__get_shadowCastingMode(pUVar6,(MethodInfo *)0x0);
                if (iVar12 == 0) {
                  iStack_264 = 0;
                  pUVar6 = (UnityEngine_Renderer_o *)(__this->fields)._bodyRenderer;
                }
                else {
                  iStack_264 = *(int32_t *)((long)&(*(uint64_t *)((char *)pUVar8 + 0x28)) + 4);
                  pUVar6 = (UnityEngine_Renderer_o *)(__this->fields)._bodyRenderer;
                }
                if (pUVar6 == (UnityEngine_Renderer_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar10 = UnityEngine_Renderer__get_receiveShadows(pUVar6,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Graphics->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Graphics);
                }
                fStack_78 = (float)auStack_88._0_4_ * fStack_1b8 +
                            (float)auStack_158._0_4_ * fStack_1a8 +
                            (float)auStack_168._0_4_ * (float)uStack_198 +
                            (float)auStack_178._0_4_ * (float)uStack_188;
                fStack_74 = (float)auStack_88._0_4_ * fStack_1b4 +
                            (float)auStack_158._0_4_ * fStack_1a4 +
                            (float)auStack_168._0_4_ * uStack_198._4_4_ +
                            (float)auStack_178._0_4_ * uStack_188._4_4_;
                fStack_70 = (float)auStack_88._0_4_ * fStack_1b0 +
                            (float)auStack_158._0_4_ * fStack_1a0 +
                            (float)auStack_168._0_4_ * fStack_190 +
                            (float)auStack_178._0_4_ * (float)uStack_180;
                fStack_6c = (float)auStack_88._0_4_ * fStack_1ac +
                            (float)auStack_158._0_4_ * fStack_19c +
                            (float)auStack_168._0_4_ * fStack_18c +
                            (float)auStack_178._0_4_ * uStack_180._4_4_;
                fStack_68 = (float)auStack_98._0_4_ * fStack_1b8 +
                            (float)auStack_128._0_4_ * fStack_1a8 +
                            (float)auStack_138._0_4_ * (float)uStack_198 +
                            (float)auStack_148._0_4_ * (float)uStack_188;
                fStack_64 = (float)auStack_98._0_4_ * fStack_1b4 +
                            (float)auStack_128._0_4_ * fStack_1a4 +
                            (float)auStack_138._0_4_ * uStack_198._4_4_ +
                            (float)auStack_148._0_4_ * uStack_188._4_4_;
                fStack_60 = (float)auStack_98._0_4_ * fStack_1b0 +
                            (float)auStack_128._0_4_ * fStack_1a0 +
                            (float)auStack_138._0_4_ * fStack_190 +
                            (float)auStack_148._0_4_ * (float)uStack_180;
                fStack_5c = (float)auStack_98._0_4_ * fStack_1ac +
                            (float)auStack_128._0_4_ * fStack_19c +
                            (float)auStack_138._0_4_ * fStack_18c +
                            (float)auStack_148._0_4_ * uStack_180._4_4_;
                fStack_58 = (float)auStack_a8._0_4_ * fStack_1b8 +
                            (float)auStack_f8._0_4_ * fStack_1a8 +
                            (float)auStack_108._0_4_ * (float)uStack_198 +
                            (float)auStack_118._0_4_ * (float)uStack_188;
                fStack_54 = (float)auStack_a8._0_4_ * fStack_1b4 +
                            (float)auStack_f8._0_4_ * fStack_1a4 +
                            (float)auStack_108._0_4_ * uStack_198._4_4_ +
                            (float)auStack_118._0_4_ * uStack_188._4_4_;
                fStack_50 = (float)auStack_a8._0_4_ * fStack_1b0 +
                            (float)auStack_f8._0_4_ * fStack_1a0 +
                            (float)auStack_108._0_4_ * fStack_190 +
                            (float)auStack_118._0_4_ * (float)uStack_180;
                fStack_4c = (float)auStack_a8._0_4_ * fStack_1ac +
                            (float)auStack_f8._0_4_ * fStack_19c +
                            (float)auStack_108._0_4_ * fStack_18c +
                            (float)auStack_118._0_4_ * uStack_180._4_4_;
                fStack_48 = (float)auStack_b8._0_4_ * fStack_1b8 +
                            (float)auStack_c8._0_4_ * fStack_1a8 +
                            (float)auStack_d8._0_4_ * (float)uStack_198 +
                            (float)auStack_e8._0_4_ * (float)uStack_188;
                fStack_44 = (float)auStack_b8._0_4_ * fStack_1b4 +
                            (float)auStack_c8._0_4_ * fStack_1a4 +
                            (float)auStack_d8._0_4_ * uStack_198._4_4_ +
                            (float)auStack_e8._0_4_ * uStack_188._4_4_;
                fStack_40 = (float)auStack_b8._0_4_ * fStack_1b0 +
                            (float)auStack_c8._0_4_ * fStack_1a0 +
                            (float)auStack_d8._0_4_ * fStack_190 + (float)auStack_e8._0_4_ * (float)uStack_180
                ;
                fStack_3c = (float)auStack_b8._0_4_ * fStack_1ac +
                            (float)auStack_c8._0_4_ * fStack_19c +
                            (float)auStack_d8._0_4_ * fStack_18c + (float)auStack_e8._0_4_ * uStack_180._4_4_;
                matrix.fields.m10 = fStack_74;
                matrix.fields.m00 = fStack_78;
                matrix.fields.m30 = fStack_6c;
                matrix.fields.m20 = fStack_70;
                matrix.fields.m11 = fStack_64;
                matrix.fields.m01 = fStack_68;
                matrix.fields.m21 = fStack_60;
                matrix.fields.m31 = fStack_5c;
                matrix.fields.m12 = fStack_54;
                matrix.fields.m02 = fStack_58;
                matrix.fields.m32 = fStack_4c;
                matrix.fields.m22 = fStack_50;
                matrix.fields.m13 = fStack_44;
                matrix.fields.m03 = fStack_48;
                matrix.fields.m33 = fStack_3c;
                matrix.fields.m23 = fStack_40;
                UnityEngine_Graphics__DrawMesh_68d1a90
                          (pUStack_1e8,matrix,material,(int32_t)iVar7,(UnityEngine_Camera_o *)0x0,
                           (int32_t)uVar13,pUVar3,iStack_264,bVar10,(MethodInfo *)0x0);
              }
              uVar13 = uVar13 + 1;
              __this_02 = (UnityEngine_Mesh_o *)(pUVar8->fields).m_CachedPtr;
              if (__this_02 == (UnityEngine_Mesh_o *)0x0) goto label_05c4cb48;
            }
          }
label_05c4cb48:
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$HideRenderers
// il2cpp: void Characters_TitanDeathDissolve__HideRenderers (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x5c49ea0
// eh: try 0x5c49fe0..0x5c49ff5 -> pad 0x5c4a0b3 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c4a0cd..0x5c4a0d2 -> pad 0x5c4a0f5 cleanup
// eh: try 0x5c4a0f8..0x5c4a102 -> pad 0x5c4a10a catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4a049: jmp 0x5c49fe0
// asm:   0x5c4a0b3: jmp 0x5c4a0b5
// asm:   0x5c4a0b5: mov rbx, rax
// asm:   0x5c4a0b8: cmp edx, 1
// asm:   0x5c4a0bb: jne 0x5c4a0f8
// asm:   0x5c4a0bd: mov rdi, rbx
// asm:   0x5c4a0c0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4a0c5: mov rbx, qword ptr [rax]
// asm:   0x5c4a0c8: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c4a0cd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4a0d2: lea rax, [rip + 0x16447f7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5c4a0d9: mov rsi, qword ptr [rax]
// asm:   0x5c4a0dc: mov rdi, rsp
// asm:   0x5c4a0df: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c4a0e4: test rbx, rbx
// asm:   0x5c4a0e7: je 0x5c4a05d
// asm:   0x5c4a0ed: mov rdi, rbx
// asm:   0x5c4a0f0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4a0f5: mov rbx, rax
// asm:   0x5c4a0f8: lea rdi, [rsp + 0x18]
// asm:   0x5c4a0fd: call 0x2fd9610  ; il2cpp_runtime_helper_02fd9610()
// asm:   0x5c4a102: mov rdi, rbx
// asm:   0x5c4a105: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c4a10a: mov rdi, rax
// asm:   0x5c4a10d: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanDeathDissolve__HideRenderers(Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int32_t length;
  Characters_BaseTitan_o *__this_00;
  System_Collections_Generic_List_Renderer__o *pSVar4;
  UnityEngine_Renderer_c *pUVar5;
  bool bVar6;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07547843 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer_71a4fd8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    Il2CppMethodInitialized_07547843 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._titan;
  if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
  }
  if (__this_00 != (Characters_BaseTitan_o *)0x0) {
    UnityEngine_Component__GetComponentsInChildren_object__34b12b0
              ((UnityEngine_Component_o *)__this_00,
               (System_Collections_Generic_List_T__o *)
               TypeInfo_Characters_TitanDeathDissolve->static_fields->Renderers,
               (MethodInfo_34B12B0 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer_71a4fd8
              );
    pSVar4 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Renderers;
    if (pSVar4 != (System_Collections_Generic_List_Renderer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)pSVar4,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
      local_40 = 0;
      local_38 = (undefined1 *)&local_58;
      while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
            bVar6) {
        if ((UnityEngine_Renderer_o *)local_58.fields._current != (UnityEngine_Renderer_o *)0x0) {
          pUVar5 = (UnityEngine_Renderer_c *)(local_58.fields._current)->klass;
          bVar2 = (pUVar5->_2).typeHierarchyDepth;
          bVar3 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
          if (((bVar3 <= bVar2) &&
              ((pUVar5->_2).typeHierarchy[(ulong)bVar3 - 1] ==
               (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) ||
             ((bVar3 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth, bVar3 <= bVar2 &&
              ((pUVar5->_2).typeHierarchy[(ulong)bVar3 - 1] ==
               (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)))) {
            UnityEngine_Renderer__set_enabled
                      ((UnityEngine_Renderer_o *)local_58.fields._current,false,(MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose)
      ;
      if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
      }
      pSVar4 = TypeInfo_Characters_TitanDeathDissolve->static_fields->Renderers;
      if (pSVar4 != (System_Collections_Generic_List_Renderer__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        length = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$DisableColliders
// il2cpp: void Characters_TitanDeathDissolve__DisableColliders (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x5c4bfc0

void Characters_TitanDeathDissolve__DisableColliders
               (Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Characters_BaseMovementSync_o *pCVar2;
  Characters_TitanColliderToggler_o *__this_00;
  UnityEngine_Rigidbody_o *pUVar3;
  bool bVar4;
  uint uVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  UnityEngine_Rigidbody_o *local_20;
  
  if (Il2CppMethodInitialized_07547844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider_71a4f80);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547844 = '\x01';
  }
  local_20 = (UnityEngine_Rigidbody_o *)0x0;
  if ((__this->fields)._CollidersDisabled_k__BackingField != false) {
    return;
  }
  (__this->fields)._CollidersDisabled_k__BackingField = true;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto label_05c4c1ee;
  bVar4 = UnityEngine_Component__TryGetComponent_object_
                    ((UnityEngine_Component_o *)pCVar1,(Il2CppObject **)&local_20,
                     (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_Rigidbody);
  if (bVar4) {
    if (local_20 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c4c1ee;
    bVar4 = UnityEngine_Rigidbody__get_isKinematic(local_20,(MethodInfo *)0x0);
    pUVar3 = local_20;
    if (!bVar4) {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c4c1ee;
      UnityEngine_Rigidbody__set_linearVelocity
                (pUVar3,(UnityEngine_Vector3_o)
                        (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
      pUVar3 = local_20;
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c4c1ee;
      UnityEngine_Rigidbody__set_angularVelocity
                (pUVar3,(UnityEngine_Vector3_o)
                        (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
    }
    if (local_20 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c4c1ee;
    UnityEngine_Rigidbody__set_isKinematic(local_20,true,(MethodInfo *)0x0);
  }
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    pCVar2 = (pCVar1->fields).MovementSync;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._titan;
    if (bVar4) {
      if ((pCVar1 == (Characters_BaseTitan_o *)0x0) ||
         (pCVar2 = (pCVar1->fields).MovementSync, pCVar2 == (Characters_BaseMovementSync_o *)0x0))
      goto label_05c4c1ee;
      (pCVar2->fields).Disabled = true;
    }
    else if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto label_05c4c1ee;
    __this_00 = (pCVar1->fields).TitanColliderToggler;
    if (__this_00 != (Characters_TitanColliderToggler_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._titan;
      if ((pCVar1 != (Characters_BaseTitan_o *)0x0) &&
         (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                             ((UnityEngine_Component_o *)pCVar1,true,
                              (MethodInfo_34B1260 *)
                              MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider_71a4f80),
         pSVar6 != (System_Object_array *)0x0)) {
        uVar5 = (uint)pSVar6->max_length;
        if ((int)uVar5 < 1) {
          return;
        }
        uVar7 = 0;
        while( true ) {
          if (uVar5 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar7] == (UnityEngine_Collider_o *)0x0) break;
          UnityEngine_Collider__set_enabled
                    ((UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar7],false,(MethodInfo *)0x0);
          uVar7 = uVar7 + 1;
          uVar5 = (uint)pSVar6->max_length;
          if ((int)uVar5 <= (int)uVar7) {
            return;
          }
        }
      }
    }
  }
label_05c4c1ee:
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$Dispose
// il2cpp: void Characters_TitanDeathDissolve__Dispose (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x5c4cc60
// eh: try 0x5c4cde0..0x5c4d046 -> pad 0x5c4d05a (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c4d072..0x5c4d077 -> pad 0x5c4d099 cleanup
// eh: try 0x5c4d09c..0x5c4d0a6 -> pad 0x5c4d14d catch (...) [compiler noexcept guard]
// eh: try 0x5c4d0c3..0x5c4d0c8 -> pad 0x5c4d0e7 cleanup
// eh: try 0x5c4d0ea..0x5c4d0f4 -> pad 0x5c4d14d catch (...) [compiler noexcept guard]
// eh: try 0x5c4d10e..0x5c4d113 -> pad 0x5c4d138 cleanup
// eh: try 0x5c4d13b..0x5c4d145 -> pad 0x5c4d14d catch (...) [compiler noexcept guard]
// asm: 67 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4d04b: jmp 0x5c4d05a
// asm:   0x5c4d04d: jmp 0x5c4d05a
// asm:   0x5c4d04f: jmp 0x5c4d05a
// asm:   0x5c4d051: jmp 0x5c4d05a
// asm:   0x5c4d053: jmp 0x5c4d0ab
// asm:   0x5c4d055: jmp 0x5c4d0f6
// asm:   0x5c4d05a: mov r14, rax
// asm:   0x5c4d05d: cmp edx, 1
// asm:   0x5c4d060: jne 0x5c4d09c
// asm:   0x5c4d062: mov rdi, r14
// asm:   0x5c4d065: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4d06a: mov rbx, qword ptr [rax]
// asm:   0x5c4d06d: mov qword ptr [rsp + 8], rbx
// asm:   0x5c4d072: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4d077: lea rax, [rip + 0x164162a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x5c4d07e: mov rsi, qword ptr [rax]
// asm:   0x5c4d081: lea rdi, [rsp + 0x40]
// asm:   0x5c4d086: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c4d08b: test rbx, rbx
// asm:   0x5c4d08e: je 0x5c4ce5f
// asm:   0x5c4d094: jmp 0x5c4d130
// asm:   0x5c4d099: mov r14, rax
// asm:   0x5c4d09c: lea rdi, [rsp + 8]
// asm:   0x5c4d0a1: call 0x2fd9640  ; il2cpp_runtime_helper_02fd9640()
// asm:   0x5c4d0a6: jmp 0x5c4d145
// asm:   0x5c4d0ab: mov r14, rax
// asm:   0x5c4d0ae: cmp edx, 1
// asm:   0x5c4d0b1: jne 0x5c4d0ea
// asm:   0x5c4d0b3: mov rdi, r14
// asm:   0x5c4d0b6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4d0bb: mov rbx, qword ptr [rax]
// asm:   0x5c4d0be: mov qword ptr [rsp + 8], rbx
// asm:   0x5c4d0c3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4d0c8: lea rax, [rip + 0x16413b1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c4d0cf: mov rsi, qword ptr [rax]
// asm:   0x5c4d0d2: lea rdi, [rsp + 0x60]
// asm:   0x5c4d0d7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c4d0dc: test rbx, rbx
// asm:   0x5c4d0df: je 0x5c4cfb7
// asm:   0x5c4d0e5: jmp 0x5c4d130
// asm:   0x5c4d0e7: mov r14, rax
// asm:   0x5c4d0ea: lea rdi, [rsp + 8]
// asm:   0x5c4d0ef: call 0x2fd96a0  ; il2cpp_runtime_helper_02fd96a0()
// asm:   0x5c4d0f4: jmp 0x5c4d145
// asm:   0x5c4d0f6: mov r14, rax
// asm:   0x5c4d0f9: cmp edx, 1
// asm:   0x5c4d0fc: jne 0x5c4d13b
// asm:   0x5c4d0fe: mov rdi, r14
// asm:   0x5c4d101: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4d106: mov rbx, qword ptr [rax]
// asm:   0x5c4d109: mov qword ptr [rsp + 8], rbx
// asm:   0x5c4d10e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4d113: lea rax, [rip + 0x16413de]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose
// asm:   0x5c4d11a: mov rsi, qword ptr [rax]
// asm:   0x5c4d11d: lea rdi, [rsp + 0x20]
// asm:   0x5c4d122: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c4d127: test rbx, rbx
// asm:   0x5c4d12a: je 0x5c4cf27
// asm:   0x5c4d130: mov rdi, rbx
// asm:   0x5c4d133: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4d138: mov r14, rax
// asm:   0x5c4d13b: lea rdi, [rsp + 8]
// asm:   0x5c4d140: call 0x2fd9670  ; il2cpp_runtime_helper_02fd9670()
// asm:   0x5c4d145: mov rdi, r14
// asm:   0x5c4d148: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c4d14d: mov rdi, rax
// asm:   0x5c4d150: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanDeathDissolve__Dispose(Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_ParticleSystem__o *pSVar3;
  System_Collections_Generic_List_Mesh__o *pSVar4;
  System_Collections_Generic_List_Material__o *pSVar5;
  System_Collections_Generic_List_TitanDeathDissolve_Part__o *pSVar6;
  Il2CppObject *obj;
  bool bVar7;
  UnityEngine_Object_o *pUVar8;
  undefined1 local_a0 [16];
  UnityEngine_Object_o *local_90;
  undefined1 local_88 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_80;
  UnityEngine_Object_o *local_78;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  UnityEngine_Object_o *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07547845 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547845 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_78 = (UnityEngine_Object_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._steam;
  if (pSVar3 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    local_58 = local_90;
    local_68 = (undefined1  [8])local_a0._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_a0._8_8_;
    local_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
    while( true ) {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
      pUVar8 = local_58;
      if (!bVar7) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        if (pUVar8 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar8 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar8,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    pSVar3 = (__this->fields)._steam;
    if (pSVar3 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields)._meshes;
      if (pSVar4 != (System_Collections_Generic_List_Mesh__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                   (System_Collections_Generic_List_object__o *)pSVar4,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator);
        local_78 = local_90;
        local_88 = (undefined1  [8])local_a0._0_8_;
        pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)local_a0._8_8_;
        local_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_88;
        while( true ) {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
          pUVar8 = local_78;
          if (!bVar7) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar8,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
        pSVar5 = (__this->fields)._materials;
        if (pSVar5 != (System_Collections_Generic_List_Material__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    (&local_48,(System_Collections_Generic_List_object__o *)pSVar5,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
          local_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_a0._8_8_ = &local_48;
          while( true ) {
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
            obj = local_48.fields._current;
            if (!bVar7) break;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
          pSVar6 = (__this->fields)._parts;
          if (pSVar6 != (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0) {
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            iVar2 = (pSVar6->fields)._size;
            (pSVar6->fields)._size = 0;
            if (0 < iVar2) {
              System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar2,(MethodInfo *)0x0);
            }
            pSVar4 = (__this->fields)._meshes;
            if (pSVar4 != (System_Collections_Generic_List_Mesh__o *)0x0) {
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              iVar2 = (pSVar4->fields)._size;
              (pSVar4->fields)._size = 0;
              if (0 < iVar2) {
                System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
              }
              pSVar5 = (__this->fields)._materials;
              if (pSVar5 != (System_Collections_Generic_List_Material__o *)0x0) {
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                iVar2 = (pSVar5->fields)._size;
                (pSVar5->fields)._size = 0;
                if (0 < iVar2) {
                  System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$.cctor
// il2cpp: void Characters_TitanDeathDissolve___cctor (const MethodInfo* method);
// 0x5c4d160

void Characters_TitanDeathDissolve___cctor(MethodInfo *method)

{
  Characters_TitanDeathDissolve_StaticFields *pCVar1;
  int32_t iVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_Vector2__o *__this;
  System_Collections_Generic_List_Renderer__o *__this_00;
  System_Collections_Generic_List_Material__o *__this_01;
  System_Collections_Generic_List_TitanDeathDissolve_SteamSource__o *__this_02;
  
  if (Il2CppMethodInitialized_07547846 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata(&"_Dissolve");
    Il2CppMethodInitialized_07547846 = '\x01';
  }
  iVar2 = UnityEngine_Shader__PropertyToID("_Dissolve",(MethodInfo *)0x0);
  TypeInfo_Characters_TitanDeathDissolve->static_fields->Dissolve = iVar2;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar3,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->Vertices = pSVar3;
  Il2CppCodeGenWriteBarrier(&pCVar1->Vertices);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar3,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->Normals = pSVar3;
  Il2CppCodeGenWriteBarrier(&pCVar1->Normals);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar3,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->SurfaceVertices = pSVar3;
  Il2CppCodeGenWriteBarrier(&pCVar1->SurfaceVertices);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar4,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->SurfaceTriangles = pSVar4;
  Il2CppCodeGenWriteBarrier(&pCVar1->SurfaceTriangles);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar4,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->Triangles = pSVar4;
  Il2CppCodeGenWriteBarrier(&pCVar1->Triangles);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
  System_Collections_Generic_List_Vector2____ctor
            (__this,(MethodInfo_39F8C70 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->GrowthCoordinates = __this;
  Il2CppCodeGenWriteBarrier(&pCVar1->GrowthCoordinates);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->Renderers = __this_00;
  Il2CppCodeGenWriteBarrier(&pCVar1->Renderers);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->SourceMaterials = __this_01;
  Il2CppCodeGenWriteBarrier(&pCVar1->SourceMaterials);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource);
  System_Collections_Generic_List_TitanDeathDissolve_SteamSource____ctor
            (__this_02,
             (MethodInfo_3B06B00 *)
             MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_ctor);
  pCVar1 = TypeInfo_Characters_TitanDeathDissolve->static_fields;
  pCVar1->SteamSources = __this_02;
  Il2CppCodeGenWriteBarrier(&pCVar1->SteamSources);
  return;
}


