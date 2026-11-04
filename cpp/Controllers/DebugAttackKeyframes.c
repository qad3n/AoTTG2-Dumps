// Type: Controllers.DebugAttackKeyframes
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/DebugAttackKeyframes.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DebugAttackKeyframes.cs
// --------------------------------

// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$.ctor
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3___ctor (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3___ctor(Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.IDisposable.Dispose
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_IDisposable_Dispose (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x180547020

void
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_IDisposable_Dispose(Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, MethodInfo* method)

{
  return;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$MoveNext
// il2cpp: bool Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__MoveNext (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x182101bf0
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182101f49: jmp 0x182102217
// asm:   0x182101fe9: nop dword ptr [rax]
// asm:   0x182102809: lea rcx, [rdi + 0x18]
// asm:   0x18210280d: mov qword ptr [rdi + 0x18], 0
// asm:   0x182102815: xor edx, edx
// asm:   0x182102817: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18210281c: mov dword ptr [rdi + 0x10], 2
// asm:   0x182102823: jmp 0x182101f04
// asm:   0x182102b2a: mov rax, qword ptr [rcx]
// asm:   0x182102b2d: mov r8, qword ptr [rdi + 0x90]
// asm:   0x182102b34: mov rdx, qword ptr [rdi + 0x88]
// asm:   0x182102b3b: mov r9, qword ptr [rax + 0x1c0]
// asm:   0x182102b42: call qword ptr [rax + 0x1b8]  ; vtable slot 8
// asm:   0x182102b48: mov rcx, qword ptr [rip + 0x1f93ee1]  ; TypeInfo_UnityEngine_WaitForSeconds
// asm:   0x182102b4f: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x182102b54: movss xmm1, dword ptr [rip + 0x12560a8]
// asm:   0x182102b5c: xor r8d, r8d
// asm:   0x182102b5f: mov rcx, rax
// asm:   0x182102b62: mov rbx, rax
// asm:   0x182102b65: call 0x181d89ae0  ; UnityEngine_WaitForSeconds___ctor()
// asm:   0x182102b6a: lea rcx, [rdi + 0x18]
// asm:   0x182102b6e: mov qword ptr [rdi + 0x18], rbx
// asm:   0x182102b72: mov rdx, rbx
// asm:   0x182102b75: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x182102b7a: mov dword ptr [rdi + 0x10], 3
// asm:   0x182102b81: jmp 0x182101f04
// asm:   0x182102c38: xor edx, edx
// asm:   0x182102c3a: mov rcx, rbx
// asm:   0x182102c3d: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x182102c42: xor al, al
// asm:   0x182102c44: jmp 0x182101f06
// asm:   0x182102d38: mov rax, qword ptr [rip + 0x1fe09e9]  ; TypeInfo_UnityEngine_Quaternion
// asm:   0x182102d3f: xor r8d, r8d
// asm:   0x182102d42: mov rcx, rbx
// asm:   0x182102d45: mov rdx, qword ptr [rax + 0xb8]
// asm:   0x182102d4c: movups xmm0, xmmword ptr [rdx]
// asm:   0x182102d4f: lea rdx, [rsp + 0x50]
// asm:   0x182102d54: movaps xmmword ptr [rsp + 0x50], xmm0
// asm:   0x182102d59: call 0x182f5c560  ; UnityEngine_Transform__set_rotation()
// asm:   0x182102d5e: mov rcx, qword ptr [rip + 0x1f93ccb]  ; TypeInfo_UnityEngine_WaitForSeconds
// asm:   0x182102d65: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x182102d6a: movss xmm1, dword ptr [rip + 0x1255e96]
// asm:   0x182102d72: xor r8d, r8d
// asm:   0x182102d75: mov rcx, rax
// asm:   0x182102d78: mov rbx, rax
// asm:   0x182102d7b: call 0x181d89ae0  ; UnityEngine_WaitForSeconds___ctor()
// asm:   0x182102d80: lea rcx, [rdi + 0x18]
// asm:   0x182102d84: mov qword ptr [rdi + 0x18], rbx
// asm:   0x182102d88: mov rdx, rbx
// asm:   0x182102d8b: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x182102d90: mov dword ptr [rdi + 0x10], 1
// asm:   0x182102d97: jmp 0x182101f04

bool Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__MoveNext
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  Controllers_DebugAttackKeyframes_o *__this_00;
  UnityEngine_Quaternion_StaticFields *pUVar22;
  Characters_BaseTitan_o *pCVar23;
  Utility_BaseComponentCache_o *pUVar24;
  Characters_BaseTitanComponentCache_o *pCVar25;
  Characters_BaseHitbox_o *pCVar26;
  System_Single_array *pSVar27;
  SimpleJSONFixed_JSONObject_o *pSVar28;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar29;
  Il2CppObject *pIVar30;
  System_Collections_Generic_List_T__o *pSVar31;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar32;
  undefined4 uVar33;
  int32_t iVar34;
  int32_t iVar35;
  undefined4 uVar36;
  int32_t iVar37;
  int32_t iVar38;
  float fVar39;
  bool bVar40;
  char cVar41;
  int32_t iVar42;
  longlong lVar43;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar44;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar45;
  System_String_o *pSVar46;
  System_Xml_Schema_XmlSchema_o *pSVar47;
  SimpleJSONFixed_JSONObject_o *pSVar48;
  SimpleJSONFixed_JSONArray_o *pSVar49;
  UnityEngine_Vector3_o *pUVar50;
  System_Single_array *pSVar51;
  UnityEngine_Transform_o *pUVar52;
  SimpleJSONFixed_JSONNode_o *pSVar53;
  SimpleJSONFixed_JSONArray_o *__this_02;
  SimpleJSONFixed_JSONArray_o *__this_03;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar54;
  System_String_o *path;
  Il2CppObject *pIVar55;
  int iVar56;
  float fVar57;
  int32_t local_res8 [2];
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Quaternion_Fields local_e8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_88;
  
  if (Il2CppMethodInitialized_184346a75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44DAD8B67745FAF4DF
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD402B7A50049F7EB84
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"Ranges");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Keyframes");
    il2cpp_codegen_initialize_runtime_metadata(&"Far");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"/Keyframes.txt");
    Il2CppMethodInitialized_184346a75 = '\x01';
  }
  iVar56 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if (iVar56 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    if (((__this_00 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
        (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos,
        __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (pSVar53 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_01,(Il2CppObject *)(__this_00->fields)._name,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
       pSVar53 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pSVar47 = (*(pSVar53->klass->vtable)._7_get_Item.methodPtr)(pSVar53,(MethodInfo *)"AttackInfo")
      ;
      (__this->fields)._data_5__2 = (SimpleJSONFixed_JSONNode_o *)pSVar47;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._data_5__2,pSVar47);
      pSVar48 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(pSVar48,(MethodInfo *)0x0);
      (__this->fields)._newData_5__3 = (SimpleJSONFixed_JSONNode_o *)pSVar48;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._newData_5__3,pSVar48);
      pCVar23 = (__this_00->fields)._titan;
      if ((pCVar23 != (Characters_BaseTitan_o *)0x0) &&
         (pUVar24 = (pCVar23->fields).Cache, pUVar24 != (Utility_BaseComponentCache_o *)0x0)) {
        pUVar52 = (pUVar24->fields).Transform;
        if (Il2CppMethodInitialized_18433de5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_18433de5b = '\x01';
        }
        if (pUVar52 != (UnityEngine_Transform_o *)0x0) {
          pUVar22 = TypeInfo_UnityEngine_Quaternion->static_fields;
          local_e8.x = (pUVar22->identityQuaternion).fields.x;
          local_e8.y = (pUVar22->identityQuaternion).fields.y;
          local_e8.z = (pUVar22->identityQuaternion).fields.z;
          local_e8.w = (pUVar22->identityQuaternion).fields.w;
          UnityEngine_Transform__set_rotation(pUVar52,(UnityEngine_Quaternion_o *)&local_e8,(MethodInfo *)0x0)
          ;
          pPVar54 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(pPVar54,1.0,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pPVar54;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar54);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
    goto label_182102d9c;
  }
  if (iVar56 == 1) {
    pSVar53 = (__this->fields)._data_5__2;
    (__this->fields).__1__state = -1;
    (__this->fields)._total_5__4 = 0;
    if (pSVar53 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182102d9c;
    pSVar44 = SimpleJSONFixed_JSONNode__get_Values(&local_88,pSVar53,(MethodInfo *)0x0);
    local_d8.type = (pSVar44->fields).m_Enumerator.fields.type;
    local_d8._4_4_ = *(undefined4 *)&(pSVar44->fields).m_Enumerator.fields.field_0x4;
    local_d8.m_Object.fields._dictionary = (pSVar44->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar32 = &(pSVar44->fields).m_Enumerator;
    local_d8.m_Object.fields._version = (pSVar32->fields).m_Object.fields._version;
    local_d8.m_Object.fields._index = (pSVar32->fields).m_Object.fields._index;
    local_d8.m_Object.fields._current.fields.key =
         (pSVar44->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_d8.m_Object.fields._current.fields.value =
         (pSVar44->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar32 = &(pSVar44->fields).m_Enumerator;
    local_d8.m_Object.fields._getEnumeratorRetType = (pSVar32->fields).m_Object.fields._getEnumeratorRetType;
    local_d8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar32->fields).m_Object.fields.field_0x24;
    local_d8.m_Array.fields._list = (pSVar44->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar32 = &(pSVar44->fields).m_Enumerator;
    local_d8.m_Array.fields._index = (pSVar32->fields).m_Array.fields._index;
    local_d8.m_Array.fields._version = (pSVar32->fields).m_Array.fields._version;
    local_d8.m_Array.fields._current = (pSVar44->fields).m_Enumerator.fields.m_Array.fields._current;
    pSVar45 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_88,
                         (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    uVar33 = *(undefined4 *)&(pSVar45->fields).m_Enumerator.fields.field_0x4;
    pSVar29 = (pSVar45->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar32 = &(pSVar45->fields).m_Enumerator;
    iVar42 = (pSVar32->fields).m_Object.fields._version;
    iVar34 = (pSVar32->fields).m_Object.fields._index;
    pIVar55 = (pSVar45->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    pIVar30 = (pSVar45->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar32 = &(pSVar45->fields).m_Enumerator;
    iVar35 = (pSVar32->fields).m_Object.fields._getEnumeratorRetType;
    uVar36 = *(undefined4 *)&(pSVar32->fields).m_Object.fields.field_0x24;
    pSVar31 = (pSVar45->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar32 = &(pSVar45->fields).m_Enumerator;
    iVar37 = (pSVar32->fields).m_Array.fields._index;
    iVar38 = (pSVar32->fields).m_Array.fields._version;
    pSVar53 = (pSVar45->fields).m_Enumerator.fields.m_Array.fields._current;
    lVar43 = 0x48;
    pSVar1 = &(__this->fields).__7__wrap4;
    (pSVar1->fields).m_Enumerator.fields.type = (pSVar45->fields).m_Enumerator.fields.type;
    *(undefined4 *)&(pSVar1->fields).m_Enumerator.fields.field_0x4 = uVar33;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar29;
    pSVar32 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar32->fields).m_Object.fields._version = iVar42;
    (pSVar32->fields).m_Object.fields._index = iVar34;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar55;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = pIVar30;
    pSVar32 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar32->fields).m_Object.fields._getEnumeratorRetType = iVar35;
    *(undefined4 *)&(pSVar32->fields).m_Object.fields.field_0x24 = uVar36;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._list = pSVar31;
    pSVar32 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar32->fields).m_Array.fields._index = iVar37;
    (pSVar32->fields).m_Array.fields._version = iVar38;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._current = pSVar53;
label_182101fde:
    Il2CppCodeGenWriteBarrier((void **)((longlong)&__this->klass + lVar43),(void *)0x0);
    do {
      bVar40 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                         (&(__this->fields).__7__wrap4,(MethodInfo *)0x0);
      if (!bVar40) {
        *(undefined8 *)&(__this->fields).__7__wrap4.fields.m_Enumerator.fields = 0;
        (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        pSVar32 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
        (pSVar32->fields).m_Object.fields._version = 0;
        (pSVar32->fields).m_Object.fields._index = 0;
        (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)0x0;
        (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)0x0;
        *(undefined8 *)
         &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
        (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)0x0;
        pSVar32 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
        (pSVar32->fields).m_Array.fields._index = 0;
        (pSVar32->fields).m_Array.fields._version = 0;
        (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)0x0;
        pSVar53 = (__this->fields)._newData_5__3;
        if (pSVar53 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar46 = (*(pSVar53->klass->vtable)._30_ToString.methodPtr)
                            (pSVar53,4,(pSVar53->klass->vtable)._30_ToString.method);
        if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
        }
        path = System_String__Concat_1969e50
                         (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/Keyframes.txt",
                          (MethodInfo *)0x0);
        System_IO_File__WriteAllText(path,pSVar46,(MethodInfo *)0x0);
        local_res8[0] = (__this->fields)._total_5__4;
        pIVar55 = il2cpp_value_box(g_data_184354e08,local_res8);
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__Log(pIVar55,(MethodInfo *)0x0);
        return false;
      }
      pSVar46 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                          (&(__this->fields).__7__wrap4,(MethodInfo *)0x0);
      (__this->fields)._attackName_5__6 = pSVar46;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._attackName_5__6,pSVar46);
      pSVar53 = (__this->fields)._data_5__2;
      if (pSVar53 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182102d9c;
      pSVar47 = (*(pSVar53->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar53,(MethodInfo *)(__this->fields)._attackName_5__6);
      pSVar48 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(pSVar48,(MethodInfo *)0x0);
      (__this->fields)._newInfo_5__7 = pSVar48;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._newInfo_5__7,pSVar48);
      if ((pSVar47 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
         (pSVar46 = (*(pSVar47->klass->vtable)._7_get_IdAttribute.methodPtr)
                              (pSVar47,(MethodInfo *)"Far"), pSVar46 == (System_String_o *)0x0
         )) goto label_182102d9c;
      cVar41 = (*(code *)((Il2CppClass *)pSVar46->klass)->vtable[39].methodPtr)(pSVar46);
    } while ((cVar41 != '\0') ||
            (bVar40 = System_String__op_Equality
                                ((__this->fields)._attackName_5__6,"AttackBellyFlop",(MethodInfo *)0x0),
            bVar40));
    pSVar49 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
    SimpleJSONFixed_JSONArray___ctor(pSVar49,(MethodInfo *)0x0);
    (__this->fields)._frames_5__8 = pSVar49;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._frames_5__8,pSVar49);
    fVar57 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
    (__this->fields)._startTime_5__9 = fVar57;
    if ((((__this_00 == (Controllers_DebugAttackKeyframes_o *)0x0) ||
         (pCVar23 = (__this_00->fields)._titan, pCVar23 == (Characters_BaseTitan_o *)0x0)) ||
        (pUVar24 = (pCVar23->fields).Cache, pUVar24 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar52 = (pUVar24->fields).Transform, pUVar52 == (UnityEngine_Transform_o *)0x0)) goto label_182102d9c;
    pUVar50 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_f8,pUVar52,(MethodInfo *)0x0);
    fVar57 = (pUVar50->fields).z;
    fVar39 = (pUVar50->fields).y;
    (__this->fields)._startPosition_5__10.fields.x = (pUVar50->fields).x;
    (__this->fields)._startPosition_5__10.fields.y = fVar39;
    (__this->fields)._startPosition_5__10.fields.z = fVar57;
    pSVar51 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
              ((System_Array_o *)pSVar51,
               FieldRva_PrivateImplementationDetails_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44DAD8B67745FAF4DF
               ,(MethodInfo *)0x0);
    (__this->fields)._mins_5__11 = pSVar51;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._mins_5__11,pSVar51);
    pSVar51 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
              ((System_Array_o *)pSVar51,
               FieldRva_PrivateImplementationDetails_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD402B7A50049F7EB84
               ,(MethodInfo *)0x0);
    (__this->fields)._maxes_5__12 = pSVar51;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._maxes_5__12,pSVar51);
    pCVar23 = (__this_00->fields)._titan;
    if (pCVar23 == (Characters_BaseTitan_o *)0x0) goto label_182102d9c;
    (*(pCVar23->klass->vtable)._150_Attack.methodPtr)
              (pCVar23,(__this->fields)._attackName_5__6,(pCVar23->klass->vtable)._150_Attack.method);
    (__this->fields)._currFrame_5__13 = -100;
  }
  else {
    if (iVar56 != 2) {
      if (iVar56 == 3) {
        (__this->fields).__1__state = -1;
        if (((__this_00 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
            (pCVar23 = (__this_00->fields)._titan, pCVar23 != (Characters_BaseTitan_o *)0x0)) &&
           ((pUVar24 = (pCVar23->fields).Cache, pUVar24 != (Utility_BaseComponentCache_o *)0x0 &&
            (pUVar52 = (pUVar24->fields).Transform, pUVar52 != (UnityEngine_Transform_o *)0x0)))) {
          local_f8.x = (__this->fields)._startPosition_5__10.fields.x;
          local_f8.y = (__this->fields)._startPosition_5__10.fields.y;
          local_f8.z = (__this->fields)._startPosition_5__10.fields.z;
          UnityEngine_Transform__set_position(pUVar52,(UnityEngine_Vector3_o *)&local_f8,(MethodInfo *)0x0);
          pCVar23 = (__this_00->fields)._titan;
          if ((pCVar23 != (Characters_BaseTitan_o *)0x0) &&
             (pUVar24 = (pCVar23->fields).Cache, pUVar24 != (Utility_BaseComponentCache_o *)0x0)) {
            pUVar52 = (pUVar24->fields).Transform;
            if (Il2CppMethodInitialized_18433de5b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_18433de5b = '\x01';
            }
            if (pUVar52 != (UnityEngine_Transform_o *)0x0) {
              pUVar22 = TypeInfo_UnityEngine_Quaternion->static_fields;
              local_e8.x = (pUVar22->identityQuaternion).fields.x;
              local_e8.y = (pUVar22->identityQuaternion).fields.y;
              local_e8.z = (pUVar22->identityQuaternion).fields.z;
              local_e8.w = (pUVar22->identityQuaternion).fields.w;
              UnityEngine_Transform__set_rotation
                        (pUVar52,(UnityEngine_Quaternion_o *)&local_e8,(MethodInfo *)0x0);
              pPVar54 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(pPVar54,0.5,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)pPVar54;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar54);
              (__this->fields).__1__state = 4;
              return true;
            }
          }
        }
        goto label_182102d9c;
      }
      if (iVar56 != 4) {
        return false;
      }
      (__this->fields).__1__state = -1;
      (__this->fields)._newInfo_5__7 = (SimpleJSONFixed_JSONObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._newInfo_5__7,(void *)0x0);
      (__this->fields)._frames_5__8 = (SimpleJSONFixed_JSONArray_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._frames_5__8,(void *)0x0);
      (__this->fields)._startPosition_5__10.fields.x = 0.0;
      (__this->fields)._startPosition_5__10.fields.y = 0.0;
      (__this->fields)._startPosition_5__10.fields.z = 0.0;
      (__this->fields)._mins_5__11 = (System_Single_array *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._mins_5__11,(void *)0x0);
      (__this->fields)._maxes_5__12 = (System_Single_array *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._maxes_5__12,(void *)0x0);
      lVar43 = 0x88;
      (__this->fields)._attackName_5__6 = (System_String_o *)0x0;
      goto label_182101fde;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Controllers_DebugAttackKeyframes_o *)0x0) goto label_182102d9c;
  }
  pCVar23 = (__this_00->fields)._titan;
  if (pCVar23 != (Characters_BaseTitan_o *)0x0) {
    if ((pCVar23->fields).State == 10) {
      fVar57 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
      iVar56 = (int)((fVar57 - (__this->fields)._startTime_5__9) * 50.0);
      if (iVar56 <= (__this->fields)._currFrame_5__13) {
label_182102809:
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
        (__this->fields).__1__state = 2;
        return true;
      }
      (__this->fields)._currFrame_5__13 = iVar56;
      pCVar23 = (__this_00->fields)._titan;
      if (((pCVar23 == (Characters_BaseTitan_o *)0x0) ||
          (pCVar25 = (pCVar23->fields).BaseTitanCache, pCVar25 == (Characters_BaseTitanComponentCache_o *)0x0)
          ) || (pCVar26 = (pCVar25->fields).HandLHitbox, pCVar26 == (Characters_BaseHitbox_o *)0x0))
      goto label_182102d9c;
      bVar40 = Characters_BaseHitbox__IsActive(pCVar26,(MethodInfo *)0x0);
      if (bVar40) {
        pCVar23 = (__this_00->fields)._titan;
        if (((pCVar23 == (Characters_BaseTitan_o *)0x0) ||
            (pCVar25 = (pCVar23->fields).BaseTitanCache,
            pCVar25 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
           (pCVar26 = (pCVar25->fields).HandLHitbox, pCVar26 == (Characters_BaseHitbox_o *)0x0))
        goto label_182102d9c;
        pSVar49 = (__this->fields)._frames_5__8;
        pSVar51 = (__this->fields)._mins_5__11;
        pSVar27 = (__this->fields)._maxes_5__12;
        pUVar52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar26,(MethodInfo *)0x0);
        if (pUVar52 == (UnityEngine_Transform_o *)0x0) goto label_182102d9c;
        pUVar50 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_e8,pUVar52,(MethodInfo *)0x0);
        uVar2 = (__this->fields)._startPosition_5__10.fields.x;
        uVar12 = (__this->fields)._startPosition_5__10.fields.y;
        uVar3 = (pUVar50->fields).x;
        uVar13 = (pUVar50->fields).y;
        local_f8.z = (pUVar50->fields).z - (__this->fields)._startPosition_5__10.fields.z;
        local_f8.y = (float)uVar13 - (float)uVar12;
        local_f8.x = (float)uVar3 - (float)uVar2;
        pSVar48 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                            (__this_00,iVar56,pCVar26,pSVar51,pSVar27,(UnityEngine_Vector3_o *)&local_f8,
                             (MethodInfo *)0x0);
        if (pSVar49 == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_182102d9c;
        (*(pSVar49->klass->vtable)._21_Add.methodPtr)
                  (pSVar49,(SimpleJSONFixed_JSONNode_o *)pSVar48,(pSVar49->klass->vtable)._21_Add.method);
      }
      pCVar23 = (__this_00->fields)._titan;
      if (((pCVar23 == (Characters_BaseTitan_o *)0x0) ||
          (pCVar25 = (pCVar23->fields).BaseTitanCache, pCVar25 == (Characters_BaseTitanComponentCache_o *)0x0)
          ) || (pCVar26 = (pCVar25->fields).HandRHitbox, pCVar26 == (Characters_BaseHitbox_o *)0x0))
      goto label_182102d9c;
      bVar40 = Characters_BaseHitbox__IsActive(pCVar26,(MethodInfo *)0x0);
      if (bVar40) {
        pCVar23 = (__this_00->fields)._titan;
        if (((pCVar23 == (Characters_BaseTitan_o *)0x0) ||
            (pCVar25 = (pCVar23->fields).BaseTitanCache,
            pCVar25 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
           (pCVar26 = (pCVar25->fields).HandRHitbox, pCVar26 == (Characters_BaseHitbox_o *)0x0))
        goto label_182102d9c;
        pSVar49 = (__this->fields)._frames_5__8;
        pSVar51 = (__this->fields)._mins_5__11;
        pSVar27 = (__this->fields)._maxes_5__12;
        pUVar52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar26,(MethodInfo *)0x0);
        if (pUVar52 == (UnityEngine_Transform_o *)0x0) goto label_182102d9c;
        pUVar50 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_e8,pUVar52,(MethodInfo *)0x0);
        uVar4 = (__this->fields)._startPosition_5__10.fields.x;
        uVar14 = (__this->fields)._startPosition_5__10.fields.y;
        uVar5 = (pUVar50->fields).x;
        uVar15 = (pUVar50->fields).y;
        local_f8.z = (pUVar50->fields).z - (__this->fields)._startPosition_5__10.fields.z;
        local_f8.y = (float)uVar15 - (float)uVar14;
        local_f8.x = (float)uVar5 - (float)uVar4;
        pSVar48 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                            (__this_00,iVar56,pCVar26,pSVar51,pSVar27,(UnityEngine_Vector3_o *)&local_f8,
                             (MethodInfo *)0x0);
        if (pSVar49 == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_182102d9c;
        (*(pSVar49->klass->vtable)._21_Add.methodPtr)
                  (pSVar49,(SimpleJSONFixed_JSONNode_o *)pSVar48,(pSVar49->klass->vtable)._21_Add.method);
      }
      pCVar23 = (__this_00->fields)._titan;
      if (((pCVar23 == (Characters_BaseTitan_o *)0x0) ||
          (pCVar25 = (pCVar23->fields).BaseTitanCache, pCVar25 == (Characters_BaseTitanComponentCache_o *)0x0)
          ) || (pCVar26 = (pCVar25->fields).FootLHitbox, pCVar26 == (Characters_BaseHitbox_o *)0x0))
      goto label_182102d9c;
      bVar40 = Characters_BaseHitbox__IsActive(pCVar26,(MethodInfo *)0x0);
      if (bVar40) {
        pCVar23 = (__this_00->fields)._titan;
        if (((pCVar23 == (Characters_BaseTitan_o *)0x0) ||
            (pCVar25 = (pCVar23->fields).BaseTitanCache,
            pCVar25 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
           (pCVar26 = (pCVar25->fields).FootLHitbox, pCVar26 == (Characters_BaseHitbox_o *)0x0))
        goto label_182102d9c;
        pSVar49 = (__this->fields)._frames_5__8;
        pSVar51 = (__this->fields)._mins_5__11;
        pSVar27 = (__this->fields)._maxes_5__12;
        pUVar52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar26,(MethodInfo *)0x0);
        if (pUVar52 == (UnityEngine_Transform_o *)0x0) goto label_182102d9c;
        pUVar50 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_e8,pUVar52,(MethodInfo *)0x0);
        uVar6 = (__this->fields)._startPosition_5__10.fields.x;
        uVar16 = (__this->fields)._startPosition_5__10.fields.y;
        uVar7 = (pUVar50->fields).x;
        uVar17 = (pUVar50->fields).y;
        local_f8.z = (pUVar50->fields).z - (__this->fields)._startPosition_5__10.fields.z;
        local_f8.y = (float)uVar17 - (float)uVar16;
        local_f8.x = (float)uVar7 - (float)uVar6;
        pSVar48 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                            (__this_00,iVar56,pCVar26,pSVar51,pSVar27,(UnityEngine_Vector3_o *)&local_f8,
                             (MethodInfo *)0x0);
        if (pSVar49 == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_182102d9c;
        (*(pSVar49->klass->vtable)._21_Add.methodPtr)
                  (pSVar49,(SimpleJSONFixed_JSONNode_o *)pSVar48,(pSVar49->klass->vtable)._21_Add.method);
      }
      pCVar23 = (__this_00->fields)._titan;
      if (((pCVar23 == (Characters_BaseTitan_o *)0x0) ||
          (pCVar25 = (pCVar23->fields).BaseTitanCache, pCVar25 == (Characters_BaseTitanComponentCache_o *)0x0)
          ) || (pCVar26 = (pCVar25->fields).FootRHitbox, pCVar26 == (Characters_BaseHitbox_o *)0x0))
      goto label_182102d9c;
      bVar40 = Characters_BaseHitbox__IsActive(pCVar26,(MethodInfo *)0x0);
      if (bVar40) {
        pCVar23 = (__this_00->fields)._titan;
        if (((pCVar23 == (Characters_BaseTitan_o *)0x0) ||
            (pCVar25 = (pCVar23->fields).BaseTitanCache,
            pCVar25 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
           (pCVar26 = (pCVar25->fields).FootRHitbox, pCVar26 == (Characters_BaseHitbox_o *)0x0))
        goto label_182102d9c;
        pSVar49 = (__this->fields)._frames_5__8;
        pSVar51 = (__this->fields)._mins_5__11;
        pSVar27 = (__this->fields)._maxes_5__12;
        pUVar52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar26,(MethodInfo *)0x0);
        if (pUVar52 == (UnityEngine_Transform_o *)0x0) goto label_182102d9c;
        pUVar50 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_e8,pUVar52,(MethodInfo *)0x0);
        uVar8 = (__this->fields)._startPosition_5__10.fields.x;
        uVar18 = (__this->fields)._startPosition_5__10.fields.y;
        uVar9 = (pUVar50->fields).x;
        uVar19 = (pUVar50->fields).y;
        local_f8.z = (pUVar50->fields).z - (__this->fields)._startPosition_5__10.fields.z;
        local_f8.y = (float)uVar19 - (float)uVar18;
        local_f8.x = (float)uVar9 - (float)uVar8;
        pSVar48 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                            (__this_00,iVar56,pCVar26,pSVar51,pSVar27,(UnityEngine_Vector3_o *)&local_f8,
                             (MethodInfo *)0x0);
        if (pSVar49 == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_182102d9c;
        (*(pSVar49->klass->vtable)._21_Add.methodPtr)
                  (pSVar49,(SimpleJSONFixed_JSONNode_o *)pSVar48,(pSVar49->klass->vtable)._21_Add.method);
      }
      pCVar23 = (__this_00->fields)._titan;
      if ((pCVar23 != (Characters_BaseTitan_o *)0x0) &&
         (pCVar25 = (pCVar23->fields).BaseTitanCache, pCVar25 != (Characters_BaseTitanComponentCache_o *)0x0))
      {
        pCVar26 = (pCVar25->fields).MouthHitbox;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar40 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar40) goto label_182102809;
        pCVar23 = (__this_00->fields)._titan;
        if (((pCVar23 != (Characters_BaseTitan_o *)0x0) &&
            (pCVar25 = (pCVar23->fields).BaseTitanCache,
            pCVar25 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
           (pCVar26 = (pCVar25->fields).MouthHitbox, pCVar26 != (Characters_BaseHitbox_o *)0x0)) {
          bVar40 = Characters_BaseHitbox__IsActive(pCVar26,(MethodInfo *)0x0);
          if (!bVar40) goto label_182102809;
          pCVar23 = (__this_00->fields)._titan;
          if (((pCVar23 != (Characters_BaseTitan_o *)0x0) &&
              (pCVar25 = (pCVar23->fields).BaseTitanCache,
              pCVar25 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
             (pCVar26 = (pCVar25->fields).MouthHitbox, pCVar26 != (Characters_BaseHitbox_o *)0x0)) {
            pSVar49 = (__this->fields)._frames_5__8;
            pSVar51 = (__this->fields)._mins_5__11;
            pSVar27 = (__this->fields)._maxes_5__12;
            pUVar52 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar26,(MethodInfo *)0x0);
            if (pUVar52 != (UnityEngine_Transform_o *)0x0) {
              pUVar50 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_e8,pUVar52,(MethodInfo *)0x0);
              uVar10 = (__this->fields)._startPosition_5__10.fields.x;
              uVar20 = (__this->fields)._startPosition_5__10.fields.y;
              uVar11 = (pUVar50->fields).x;
              uVar21 = (pUVar50->fields).y;
              local_f8.z = (pUVar50->fields).z - (__this->fields)._startPosition_5__10.fields.z;
              local_f8.y = (float)uVar21 - (float)uVar20;
              local_f8.x = (float)uVar11 - (float)uVar10;
              pSVar48 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                  (__this_00,iVar56,pCVar26,pSVar51,pSVar27,(UnityEngine_Vector3_o *)&local_f8
                                   ,(MethodInfo *)0x0);
              if (pSVar49 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                (*(pSVar49->klass->vtable)._21_Add.methodPtr)
                          (pSVar49,(SimpleJSONFixed_JSONNode_o *)pSVar48,
                           (pSVar49->klass->vtable)._21_Add.method);
                goto label_182102809;
              }
            }
          }
        }
      }
    }
    else {
      pSVar49 = (__this->fields)._frames_5__8;
      if (pSVar49 != (SimpleJSONFixed_JSONArray_o *)0x0) {
        iVar56 = (__this->fields)._total_5__4;
        iVar42 = (*(pSVar49->klass->vtable)._11_get_Count.methodPtr)
                           (pSVar49,(pSVar49->klass->vtable)._11_get_Count.method);
        (__this->fields)._total_5__4 = iVar42 + iVar56;
        pSVar48 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
        SimpleJSONFixed_JSONObject___ctor(pSVar48,(MethodInfo *)0x0);
        pSVar49 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(pSVar49,(MethodInfo *)0x0);
        pSVar51 = (__this->fields)._mins_5__11;
        if (pSVar51 != (System_Single_array *)0x0) {
          if ((int)pSVar51->max_length == 0) goto label_182102da2;
          fVar57 = pSVar51->m_Items[0];
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar53 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260(fVar57,(MethodInfo *)0x0);
          if (pSVar49 != (SimpleJSONFixed_JSONArray_o *)0x0) {
            (*(pSVar49->klass->vtable)._21_Add.methodPtr)
                      (pSVar49,pSVar53,(pSVar49->klass->vtable)._21_Add.method);
            pSVar51 = (__this->fields)._maxes_5__12;
            if (pSVar51 != (System_Single_array *)0x0) {
              if ((int)pSVar51->max_length == 0) {
label_182102da2:
                ThrowIndexOutOfRangeException();
              }
              pSVar53 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260(pSVar51->m_Items[0],(MethodInfo *)0x0);
              (*(pSVar49->klass->vtable)._21_Add.methodPtr)
                        (pSVar49,pSVar53,(pSVar49->klass->vtable)._21_Add.method);
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
              SimpleJSONFixed_JSONArray___ctor(__this_02,(MethodInfo *)0x0);
              pSVar51 = (__this->fields)._mins_5__11;
              if (pSVar51 != (System_Single_array *)0x0) {
                if ((uint)pSVar51->max_length < 2) goto label_182102da2;
                pSVar53 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260(pSVar51->m_Items[1],(MethodInfo *)0x0)
                ;
                if (__this_02 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                  (*(__this_02->klass->vtable)._21_Add.methodPtr)
                            (__this_02,pSVar53,(__this_02->klass->vtable)._21_Add.method);
                  pSVar51 = (__this->fields)._maxes_5__12;
                  if (pSVar51 != (System_Single_array *)0x0) {
                    if ((uint)pSVar51->max_length < 2) goto label_182102da2;
                    pSVar53 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260
                                        (pSVar51->m_Items[1],(MethodInfo *)0x0);
                    (*(__this_02->klass->vtable)._21_Add.methodPtr)
                              (__this_02,pSVar53,(__this_02->klass->vtable)._21_Add.method);
                    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
                    SimpleJSONFixed_JSONArray___ctor(__this_03,(MethodInfo *)0x0);
                    pSVar51 = (__this->fields)._mins_5__11;
                    if (pSVar51 != (System_Single_array *)0x0) {
                      if ((uint)pSVar51->max_length < 3) goto label_182102da2;
                      pSVar53 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260
                                          (pSVar51->m_Items[2],(MethodInfo *)0x0);
                      if (__this_03 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                        (*(__this_03->klass->vtable)._21_Add.methodPtr)
                                  (__this_03,pSVar53,(__this_03->klass->vtable)._21_Add.method);
                        pSVar51 = (__this->fields)._maxes_5__12;
                        if (pSVar51 != (System_Single_array *)0x0) {
                          if ((uint)pSVar51->max_length < 3) goto label_182102da2;
                          pSVar53 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260
                                              (pSVar51->m_Items[2],(MethodInfo *)0x0);
                          (*(__this_03->klass->vtable)._21_Add.methodPtr)
                                    (__this_03,pSVar53,(__this_03->klass->vtable)._21_Add.method);
                          if (pSVar48 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                            (*(pSVar48->klass->vtable)._8_set_Item.methodPtr)
                                      (pSVar48,"X",(SimpleJSONFixed_JSONNode_o *)pSVar49,
                                       (pSVar48->klass->vtable)._8_set_Item.method);
                            (*(pSVar48->klass->vtable)._8_set_Item.methodPtr)
                                      (pSVar48,"Y",(SimpleJSONFixed_JSONNode_o *)__this_02,
                                       (pSVar48->klass->vtable)._8_set_Item.method);
                            (*(pSVar48->klass->vtable)._8_set_Item.methodPtr)
                                      (pSVar48,"Z",(SimpleJSONFixed_JSONNode_o *)__this_03,
                                       (pSVar48->klass->vtable)._8_set_Item.method);
                            pSVar28 = (__this->fields)._newInfo_5__7;
                            if (pSVar28 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                              (*(pSVar28->klass->vtable)._8_set_Item.methodPtr)
                                        (pSVar28,"Ranges",(SimpleJSONFixed_JSONNode_o *)pSVar48,
                                         (pSVar28->klass->vtable)._8_set_Item.method);
                              pSVar48 = (__this->fields)._newInfo_5__7;
                              if (pSVar48 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                                (*(pSVar48->klass->vtable)._8_set_Item.methodPtr)
                                          (pSVar48,"Keyframes",
                                           (SimpleJSONFixed_JSONNode_o *)(__this->fields)._frames_5__8,
                                           (pSVar48->klass->vtable)._8_set_Item.method);
                                pSVar53 = (__this->fields)._newData_5__3;
                                if (pSVar53 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                  (*(pSVar53->klass->vtable)._8_set_Item.methodPtr)
                                            (pSVar53,(System_Type_o *)(__this->fields)._attackName_5__6,
                                             (MethodInfo *)(__this->fields)._newInfo_5__7);
                                  pPVar54 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                                            il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
                                  UnityEngine_WaitForSeconds___ctor
                                            (pPVar54,0.5,(MethodInfo *)0x0);
                                  (__this->fields).__2__current = (Il2CppObject *)pPVar54;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar54);
                                  (__this->fields).__1__state = 3;
                                  return true;
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
            }
          }
        }
      }
    }
  }
label_182102d9c:
  ThrowNullReferenceException();
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current(Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_Reset (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x182102db0

void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_Reset
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_get_Current (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_get_Current(Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Controllers.DebugAttackKeyframes$$Awake
// il2cpp: void Controllers_DebugAttackKeyframes__Awake (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x1820fd060

void Controllers_DebugAttackKeyframes__Awake(Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  Characters_BaseTitan_c *pCVar2;
  Characters_BaseTitan_o *pCVar3;
  System_Type_o *pSVar4;
  System_String_o *pSVar5;
  Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *routine;
  
  if (Il2CppMethodInitialized_184346a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&"Characters.");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346a72 = '\x01';
  }
  pCVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
  (__this->fields)._titan = pCVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titan,pCVar3);
  pCVar3 = (__this->fields)._titan;
  if (pCVar3 != (Characters_BaseTitan_o *)0x0) {
    (pCVar3->fields).AttackSpeedMultiplier = 1.0;
    pCVar3 = (__this->fields)._titan;
    if ((pCVar3 != (Characters_BaseTitan_o *)0x0) &&
       (__this_00 = (pCVar3->fields).AttackSpeeds,
       __this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
      pCVar3 = (__this->fields)._titan;
      if (pCVar3 != (Characters_BaseTitan_o *)0x0) {
        pCVar2 = pCVar3->klass;
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)
           ) {
          pCVar2 = ((__this->fields)._titan)->klass;
          bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
          if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BaseShifter)) goto label_1820fd25c;
          pSVar4 = System_Object__GetType((Il2CppObject *)(__this->fields)._titan,(MethodInfo *)0x0);
          if (pSVar4 == (System_Type_o *)0x0) goto label_1820fd2c5;
          pSVar5 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                             (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
          (__this->fields)._name = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._name,pSVar5);
          pSVar5 = (__this->fields)._name;
          if (pSVar5 == (System_String_o *)0x0) goto label_1820fd2c5;
          pSVar5 = System_String__Replace_1970e80
                             (pSVar5,"Shifter","",(MethodInfo *)0x0);
          (__this->fields)._name = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._name,pSVar5);
          pSVar5 = (__this->fields)._name;
          if (pSVar5 == (System_String_o *)0x0) goto label_1820fd2c5;
          pSVar5 = System_String__Replace_1970e80
                             (pSVar5,"Characters.","",(MethodInfo *)0x0);
          (__this->fields)._name = pSVar5;
        }
        else {
          (__this->fields)._name = "Titan";
          pSVar5 = "Titan";
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields)._name,pSVar5);
      }
label_1820fd25c:
      if (Il2CppMethodInitialized_184346a73 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3);
        Il2CppMethodInitialized_184346a73 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3)
      ;
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_1820fd2c5:
  ThrowNullReferenceException();
}


// Controllers.DebugAttackKeyframes$$GenerateAttackFrames
// il2cpp: System_Collections_IEnumerator_o* Controllers_DebugAttackKeyframes__GenerateAttackFrames (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x1820fd600

System_Collections_IEnumerator_o *
Controllers_DebugAttackKeyframes__GenerateAttackFrames
          (Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this_00;
  
  if (Il2CppMethodInitialized_184346a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3);
    Il2CppMethodInitialized_184346a73 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Controllers.DebugAttackKeyframes$$DebugCreateFrameJSON
// il2cpp: SimpleJSONFixed_JSONObject_o* Controllers_DebugAttackKeyframes__DebugCreateFrameJSON (Controllers_DebugAttackKeyframes_o* __this, int32_t frame, Characters_BaseHitbox_o* hitbox, System_Single_array* mins, System_Single_array* maxes, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x1820fd2d0

SimpleJSONFixed_JSONObject_o *
Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
          (Controllers_DebugAttackKeyframes_o *__this,int32_t frame,Characters_BaseHitbox_o *hitbox,
          System_Single_array *mins,System_Single_array *maxes,UnityEngine_Vector3_o *position,
          MethodInfo *method)

{
  byte bVar1;
  UnityEngine_SphereCollider_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar2;
  SimpleJSONFixed_JSONObject_o *__this_02;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184346a74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&"x");
    il2cpp_codegen_initialize_runtime_metadata(&"f");
    il2cpp_codegen_initialize_runtime_metadata(&"y");
    il2cpp_codegen_initialize_runtime_metadata(&"z");
    il2cpp_codegen_initialize_runtime_metadata(&"r");
    Il2CppMethodInitialized_184346a74 = '\x01';
  }
  if ((hitbox != (Characters_BaseHitbox_o *)0x0) &&
     (__this_00 = (UnityEngine_SphereCollider_o *)(hitbox->fields)._collider,
     __this_00 != (UnityEngine_SphereCollider_o *)0x0)) {
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UnityEngine_SphereCollider);
    }
    fVar4 = UnityEngine_SphereCollider__get_radius(__this_00,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_lossyScale(local_38,__this_01,(MethodInfo *)0x0);
      fVar6 = (pUVar2->fields).x;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_1dc41d0(frame,(MethodInfo *)0x0);
      if (__this_02 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        fVar6 = fVar6 * fVar4;
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"f",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260(fVar6,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"r",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260((position->fields).x,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"x",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260((position->fields).y,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"y",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4260((position->fields).z,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"z",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        if (mins != (System_Single_array *)0x0) {
          if ((int)mins->max_length != 0) {
            fVar5 = (position->fields).x - fVar6;
            fVar4 = mins->m_Items[0];
            if (fVar5 <= mins->m_Items[0]) {
              fVar4 = fVar5;
            }
            mins->m_Items[0] = fVar4;
            if (1 < (uint)mins->max_length) {
              fVar5 = (position->fields).y - fVar6;
              fVar4 = mins->m_Items[1];
              if (fVar5 <= mins->m_Items[1]) {
                fVar4 = fVar5;
              }
              mins->m_Items[1] = fVar4;
              if (2 < (uint)mins->max_length) {
                fVar5 = (position->fields).z - fVar6;
                fVar4 = mins->m_Items[2];
                if (fVar5 <= mins->m_Items[2]) {
                  fVar4 = fVar5;
                }
                mins->m_Items[2] = fVar4;
                if (maxes == (System_Single_array *)0x0) goto label_1820fd5dc;
                if ((int)maxes->max_length != 0) {
                  fVar5 = fVar6 + (position->fields).x;
                  fVar4 = maxes->m_Items[0];
                  if (maxes->m_Items[0] <= fVar5) {
                    fVar4 = fVar5;
                  }
                  maxes->m_Items[0] = fVar4;
                  if (1 < (uint)maxes->max_length) {
                    fVar5 = fVar6 + (position->fields).y;
                    fVar4 = maxes->m_Items[1];
                    if (maxes->m_Items[1] <= fVar5) {
                      fVar4 = fVar5;
                    }
                    maxes->m_Items[1] = fVar4;
                    if (2 < (uint)maxes->max_length) {
                      fVar6 = fVar6 + (position->fields).z;
                      fVar4 = maxes->m_Items[2];
                      if (maxes->m_Items[2] <= fVar6) {
                        fVar4 = fVar6;
                      }
                      maxes->m_Items[2] = fVar4;
                      return __this_02;
                    }
                  }
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_1820fd5dc:
  ThrowNullReferenceException();
}


// Controllers.DebugAttackKeyframes$$.ctor
// il2cpp: void Controllers_DebugAttackKeyframes___ctor (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x180528540

void
Controllers_DebugAttackKeyframes___ctor(Controllers_DebugAttackKeyframes_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


