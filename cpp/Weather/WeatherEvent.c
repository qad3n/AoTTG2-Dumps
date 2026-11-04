// Type: Weather.WeatherEvent
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherEvent.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherEvent.cs
// --------------------------------

// Weather.WeatherEvent$$.ctor
// il2cpp: void Weather_WeatherEvent___ctor (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x181db2a90

void Weather_WeatherEvent___ctor(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_float__o *__this_01;
  
  if (Il2CppMethodInitialized_184344926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_184344926 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).Values = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Values,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
  System_Collections_Generic_List_float____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_float_ctor);
  (__this->fields).Weights = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Weights,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherEvent$$GetValue
// il2cpp: Il2CppObject* Weather_WeatherEvent__GetValue (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x181db1d80
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db20e7: mov edx, dword ptr [rbx + 0x10]
// asm:   0x181db20ea: xor r8d, r8d
// asm:   0x181db20ed: mov ecx, dword ptr [rdi + 0x10]
// asm:   0x181db20f0: call 0x182f24d40  ; UnityEngine_Random__Range()
// asm:   0x181db20f5: mov rcx, qword ptr [rip + 0x232f0ec]  ; TypeInfo_Utility_Color255
// asm:   0x181db20fc: mov ebx, eax
// asm:   0x181db20fe: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181db2103: mov r9d, ebx
// asm:   0x181db2106: mov qword ptr [rsp + 0x28], 0
// asm:   0x181db210f: mov r8d, ebx
// asm:   0x181db2112: mov dword ptr [rsp + 0x20], 0xff
// asm:   0x181db211a: mov edx, ebx
// asm:   0x181db211c: mov rcx, rax
// asm:   0x181db211f: mov rdi, rax
// asm:   0x181db2122: call 0x182332760  ; Utility_Color255___ctor()
// asm:   0x181db2127: mov rax, rdi
// asm:   0x181db212a: jmp 0x181db1fa9
// asm:   0x181db21d0: mov edx, dword ptr [rdi + 0x1c]
// asm:   0x181db21d3: xor r8d, r8d
// asm:   0x181db21d6: mov ecx, dword ptr [r9 + 0x1c]
// asm:   0x181db21da: call 0x182f24d40  ; UnityEngine_Random__Range()
// asm:   0x181db21df: mov rcx, qword ptr [rip + 0x232f002]  ; TypeInfo_Utility_Color255
// asm:   0x181db21e6: mov ebx, eax
// asm:   0x181db21e8: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181db21ed: mov r9d, esi
// asm:   0x181db21f0: mov qword ptr [rsp + 0x28], 0
// asm:   0x181db21f9: mov r8d, ebp
// asm:   0x181db21fc: mov dword ptr [rsp + 0x20], ebx
// asm:   0x181db2200: mov edx, r14d
// asm:   0x181db2203: mov rcx, rax
// asm:   0x181db2206: mov rdi, rax
// asm:   0x181db2209: call 0x182332760  ; Utility_Color255___ctor()
// asm:   0x181db220e: mov r14, qword ptr [rsp + 0x90]
// asm:   0x181db2216: mov rax, rdi
// asm:   0x181db2219: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x181db2221: mov rbp, qword ptr [rsp + 0xb8]
// asm:   0x181db2229: jmp 0x181db1fa9
// asm:   0x181db22b7: mov ebx, dword ptr [rax]
// asm:   0x181db22b9: call 0x180416360  ; il2cpp_object_unbox()
// asm:   0x181db22be: xor r8d, r8d
// asm:   0x181db22c1: lea edx, [rbx + 1]
// asm:   0x181db22c4: mov ecx, dword ptr [rax]
// asm:   0x181db22c6: call 0x182f24d40  ; UnityEngine_Random__Range()
// asm:   0x181db22cb: mov rcx, qword ptr [rip + 0x25a2b36]
// asm:   0x181db22d2: lea rdx, [rsp + 0xb0]
// asm:   0x181db22da: mov dword ptr [rsp + 0xb0], eax
// asm:   0x181db22e1: call 0x180416160  ; il2cpp_value_box()
// asm:   0x181db22e6: jmp 0x181db1fa9
// asm:   0x181db2374: movss xmm6, dword ptr [rax]
// asm:   0x181db2378: call 0x180416360  ; il2cpp_object_unbox()
// asm:   0x181db237d: xor r8d, r8d
// asm:   0x181db2380: movaps xmm1, xmm6
// asm:   0x181db2383: movss xmm0, dword ptr [rax]
// asm:   0x181db2387: call 0x182f24d80  ; UnityEngine_Random__Range()
// asm:   0x181db238c: mov rcx, qword ptr [rip + 0x25a2aa5]
// asm:   0x181db2393: lea rdx, [rsp + 0xb0]
// asm:   0x181db239b: movss dword ptr [rsp + 0xb0], xmm0
// asm:   0x181db23a4: call 0x180416160  ; il2cpp_value_box()
// asm:   0x181db23a9: jmp 0x181db1fa9
// asm:   0x181db23b7: mov r8, qword ptr [rip + 0x2313702]  ; MethodInfo_System_Collections_Generic_List_object_get_Item
// asm:   0x181db23be: xor edx, edx
// asm:   0x181db23c0: call 0x18092b830  ; System_Collections_Generic_List_Nullable_int____get_Item()
// asm:   0x181db23c5: jmp 0x181db1fa9

Il2CppObject * Weather_WeatherEvent__GetValue(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Collections_Generic_List_float__o *weights;
  int32_t iVar7;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  Il2CppObject *pIVar8;
  float *pfVar9;
  Il2CppObject *pIVar10;
  Utility_Color255_o *pUVar11;
  int *piVar12;
  int32_t *piVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  float fVar16;
  float fVar17;
  float maxInclusive;
  float maxInclusive_00;
  float minInclusive;
  float local_res8 [2];
  float local_78;
  float local_74;
  float local_70;
  
  if (Il2CppMethodInitialized_184344927 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184344927 = '\x01';
  }
  iVar7 = Weather_WeatherEvent__GetValueType(__this,(MethodInfo *)0x0);
  iVar4 = (__this->fields).ValueSelectType;
  if (iVar4 == 1) {
    pSVar6 = (__this->fields).Values;
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (pSVar6,0,(MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_object_get_Item);
      return pIVar8;
    }
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 != 3) {
        return (Il2CppObject *)0x0;
      }
      pSVar6 = (__this->fields).Values;
      weights = (__this->fields).Weights;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pIVar8 = Utility_Util__GetRandomFromWeightedList(pSVar6,weights,(MethodInfo *)0x0);
      return pIVar8;
    }
    if (iVar7 == 1) {
      pSVar6 = (__this->fields).Values;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           (pSVar6,0,(MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_object_get_Item);
        pSVar6 = (__this->fields).Values;
        if ((pSVar6 != (System_Collections_Generic_List_object__o *)0x0) &&
           (pIVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                (pSVar6,1,(MethodInfo_92B830 *)
                                          MethodInfo_System_Collections_Generic_List_object_get_Item),
           pIVar10 != (Il2CppObject *)0x0)) {
          if ((pIVar10->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar10,g_data_184354e38);
          }
          pfVar9 = il2cpp_object_unbox(pIVar10);
          if (pIVar8 != (Il2CppObject *)0x0) {
            if ((pIVar8->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar8,g_data_184354e38);
            }
            fVar17 = *pfVar9;
            pfVar9 = il2cpp_object_unbox(pIVar8);
            local_res8[0] = UnityEngine_Random__Range(*pfVar9,fVar17,(MethodInfo *)0x0);
            pIVar8 = il2cpp_value_box(g_data_184354e38,local_res8);
            return pIVar8;
          }
        }
      }
      ThrowNullReferenceException();
    }
    if (iVar7 == 2) {
      pSVar6 = (__this->fields).Values;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           (pSVar6,0,(MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_object_get_Item);
        pSVar6 = (__this->fields).Values;
        if ((pSVar6 != (System_Collections_Generic_List_object__o *)0x0) &&
           (pIVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                (pSVar6,1,(MethodInfo_92B830 *)
                                          MethodInfo_System_Collections_Generic_List_object_get_Item),
           pIVar10 != (Il2CppObject *)0x0)) {
          if ((pIVar10->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar10,g_data_184354e08);
          }
          piVar12 = il2cpp_object_unbox(pIVar10);
          if (pIVar8 != (Il2CppObject *)0x0) {
            if ((pIVar8->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar8,g_data_184354e08);
            }
            iVar4 = *piVar12;
            piVar13 = il2cpp_object_unbox(pIVar8);
            local_res8[0] = (float)UnityEngine_Random__RandomRangeInt(*piVar13,iVar4 + 1,(MethodInfo *)0x0);
            pIVar8 = il2cpp_value_box(g_data_184354e08,local_res8);
            return pIVar8;
          }
        }
      }
      ThrowNullReferenceException();
    }
    if (iVar7 != 4) {
      if (iVar7 != 6) {
        return (Il2CppObject *)0x0;
      }
      pSVar6 = (__this->fields).Values;
      if ((pSVar6 != (System_Collections_Generic_List_object__o *)0x0) &&
         (pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (pSVar6,0,(MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item),
         pIVar8 != (Il2CppObject *)0x0)) {
        if ((pIVar8->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar8,TypeInfo_UnityEngine_Vector3);
        }
        pfVar9 = il2cpp_object_unbox(pIVar8);
        pSVar6 = (__this->fields).Values;
        if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
          fVar17 = *pfVar9;
          maxInclusive = pfVar9[1];
          maxInclusive_00 = pfVar9[2];
          pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (pSVar6,1,(MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item);
          if (pIVar8 != (Il2CppObject *)0x0) {
            if ((pIVar8->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar8,TypeInfo_UnityEngine_Vector3);
            }
            pfVar9 = il2cpp_object_unbox(pIVar8);
            fVar16 = *pfVar9;
            fVar1 = pfVar9[1];
            fVar2 = pfVar9[2];
            minInclusive = fVar17;
            if (fVar16 <= fVar17) {
              minInclusive = fVar16;
            }
            if (fVar17 <= fVar16) {
              fVar17 = fVar16;
            }
            fVar16 = UnityEngine_Random__Range(minInclusive,fVar17,(MethodInfo *)0x0);
            fVar17 = maxInclusive;
            if (fVar1 <= maxInclusive) {
              fVar17 = fVar1;
            }
            if (maxInclusive <= fVar1) {
              maxInclusive = fVar1;
            }
            local_74 = UnityEngine_Random__Range(fVar17,maxInclusive,(MethodInfo *)0x0);
            fVar17 = maxInclusive_00;
            if (fVar2 <= maxInclusive_00) {
              fVar17 = fVar2;
            }
            if (maxInclusive_00 <= fVar2) {
              maxInclusive_00 = fVar2;
            }
            local_70 = UnityEngine_Random__Range(fVar17,maxInclusive_00,(MethodInfo *)0x0);
            local_78 = fVar16;
            pIVar8 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_78);
            return pIVar8;
          }
        }
      }
      ThrowNullReferenceException();
    }
    pSVar6 = (__this->fields).Values;
    if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_181db23ca;
    pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       (pSVar6,0,(MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_object_get_Item);
    if (pIVar8 != (Il2CppObject *)0x0) {
      bVar3 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
      if (((pIVar8->klass->_2).typeHierarchyDepth < bVar3) ||
         ((pIVar8->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Utility_Color255)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar8);
      }
    }
    pSVar6 = (__this->fields).Values;
    if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_181db23ca;
    pIVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        (pSVar6,1,(MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_object_get_Item);
    if (pIVar10 != (Il2CppObject *)0x0) {
      bVar3 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
      if (((pIVar10->klass->_2).typeHierarchyDepth < bVar3) ||
         ((pIVar10->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Utility_Color255
         )) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar10);
      }
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto label_181db23ca;
    if (((*(int *)&pIVar8[1].klass == *(int *)((longlong)&pIVar8[1].klass + 4)) &&
        (*(int *)&pIVar8[1].klass == *(int *)&pIVar8[1].monitor)) &&
       (*(int *)((longlong)&pIVar8[1].monitor + 4) == 0xff)) {
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      if (pIVar10 == (Il2CppObject *)0x0) goto label_181db23ca;
      if ((*(int *)&pIVar10[1].klass != *(int *)((longlong)&pIVar10[1].klass + 4)) ||
         (*(int *)&pIVar10[1].klass != *(int *)&pIVar10[1].monitor)) goto label_181db2138;
      if (*(int *)((longlong)&pIVar10[1].monitor + 4) == 0xff) {
        iVar7 = UnityEngine_Random__RandomRangeInt
                          (*(int32_t *)&pIVar8[1].klass,*(int32_t *)&pIVar10[1].klass,(MethodInfo *)0x0);
        pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        Utility_Color255___ctor
                  ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar11,iVar7,iVar7,iVar7,0xff,
                   (MethodInfo *)0x0);
        return (Il2CppObject *)pUVar11;
      }
    }
    if (pIVar10 != (Il2CppObject *)0x0) {
label_181db2138:
      pIVar14 = pIVar8;
      if (*(int *)&pIVar10[1].klass <= *(int *)&pIVar8[1].klass) {
        pIVar14 = pIVar10;
      }
      pIVar15 = pIVar8;
      if (*(int *)&pIVar8[1].klass <= *(int *)&pIVar10[1].klass) {
        pIVar15 = pIVar10;
      }
      iVar7 = UnityEngine_Random__RandomRangeInt
                        (*(int32_t *)&pIVar14[1].klass,*(int32_t *)&pIVar15[1].klass,(MethodInfo *)0x0);
      iVar4 = *(int *)((longlong)&pIVar10[1].klass + 4);
      iVar5 = *(int *)((longlong)&pIVar8[1].klass + 4);
      pIVar14 = pIVar8;
      if (iVar4 <= iVar5) {
        pIVar14 = pIVar10;
      }
      pIVar15 = pIVar8;
      if (iVar5 <= iVar4) {
        pIVar15 = pIVar10;
      }
      tryEnd = UnityEngine_Random__RandomRangeInt
                         (*(int32_t *)((longlong)&pIVar14[1].klass + 4),
                          *(int32_t *)((longlong)&pIVar15[1].klass + 4),(MethodInfo *)0x0);
      pIVar14 = pIVar8;
      if (*(int *)&pIVar10[1].monitor <= *(int *)&pIVar8[1].monitor) {
        pIVar14 = pIVar10;
      }
      pIVar15 = pIVar8;
      if (*(int *)&pIVar8[1].monitor <= *(int *)&pIVar10[1].monitor) {
        pIVar15 = pIVar10;
      }
      finallyStart = UnityEngine_Random__RandomRangeInt
                               (*(int32_t *)&pIVar14[1].monitor,*(int32_t *)&pIVar15[1].monitor,
                                (MethodInfo *)0x0);
      iVar4 = *(int *)((longlong)&pIVar10[1].monitor + 4);
      iVar5 = *(int *)((longlong)&pIVar8[1].monitor + 4);
      pIVar14 = pIVar8;
      if (iVar4 <= iVar5) {
        pIVar14 = pIVar10;
      }
      if (iVar5 <= iVar4) {
        pIVar8 = pIVar10;
      }
      finallyEnd = UnityEngine_Random__RandomRangeInt
                             (*(int32_t *)((longlong)&pIVar14[1].monitor + 4),
                              *(int32_t *)((longlong)&pIVar8[1].monitor + 4),(MethodInfo *)0x0);
      pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor
                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar11,iVar7,tryEnd,finallyStart,
                 finallyEnd,(MethodInfo *)0x0);
      return (Il2CppObject *)pUVar11;
    }
  }
label_181db23ca:
  ThrowNullReferenceException();
}


// Weather.WeatherEvent$$GetValueType
// il2cpp: int32_t Weather_WeatherEvent__GetValueType (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x181db1c90

int32_t Weather_WeatherEvent__GetValueType(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  switch((__this->fields).Action) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0x10:
    goto switchD_181db1cab_caseD_0;
  case 2:
  case 3:
    return 2;
  default:
    switch((__this->fields).Effect) {
    case 1:
    case 4:
    case 6:
    case 7:
    case 9:
      return 4;
    case 2:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x11:
      goto switchD_181db1cab_caseD_b;
    case 3:
    case 0xe:
      return 6;
    case 5:
      goto switchD_181db1cab_caseD_e;
    }
switchD_181db1cab_caseD_0:
    return 0;
  case 0xb:
  case 0xc:
  case 0xd:
switchD_181db1cab_caseD_b:
    return 1;
  case 0xe:
  case 0xf:
  case 0x11:
switchD_181db1cab_caseD_e:
    return 3;
  }
}


// Weather.WeatherEvent$$GetSettingType
// il2cpp: int32_t Weather_WeatherEvent__GetSettingType (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x181db1c00

int32_t Weather_WeatherEvent__GetSettingType(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = Weather_WeatherEvent__GetValueType(__this,(MethodInfo *)0x0);
  switch(iVar1) {
  case 1:
    return 3;
  case 2:
    return 2;
  case 3:
    return 4;
  case 4:
    return 6;
  case 5:
    return 1;
  case 6:
    return 8;
  default:
    return 0;
  }
}


// Weather.WeatherEvent$$SupportedWeatherEffects
// il2cpp: System_String_array* Weather_WeatherEvent__SupportedWeatherEffects (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x181db2430

System_String_array *
Weather_WeatherEvent__SupportedWeatherEffects(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_184344928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    Il2CppMethodInitialized_184344928 = '\x01';
  }
  switch((__this->fields).Action) {
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xc:
    if ((TypeInfo_Weather_WeatherEvent->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
    }
    return TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects;
  default:
    pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar1;
  }
}


// Weather.WeatherEvent$$SupportsWeatherEffects
// il2cpp: bool Weather_WeatherEvent__SupportsWeatherEffects (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x181db26e0

bool Weather_WeatherEvent__SupportsWeatherEffects(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_184344928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    Il2CppMethodInitialized_184344928 = '\x01';
  }
  switch((__this->fields).Action) {
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xc:
    if ((TypeInfo_Weather_WeatherEvent->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
    }
    pSVar1 = TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects;
    break;
  default:
    pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  if (pSVar1 != (System_String_array *)0x0) {
    return (int)pSVar1->max_length != 0;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherEvent$$SupportedWeatherValueSelectTypes
// il2cpp: System_String_array* Weather_WeatherEvent__SupportedWeatherValueSelectTypes (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x181db24e0

System_String_array *
Weather_WeatherEvent__SupportedWeatherValueSelectTypes(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  System_Enum_o local_38;
  undefined4 local_28;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_184344929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherValueSelectType);
    Il2CppMethodInitialized_184344929 = '\x01';
  }
  iVar1 = Weather_WeatherEvent__GetValueType(__this,(MethodInfo *)0x0);
  switch(iVar1) {
  case 1:
  case 2:
  case 4:
  case 6:
    if ((TypeInfo_Weather_WeatherEvent->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
    }
    return TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherValueSelectTypes;
  case 3:
  case 5:
    break;
  default:
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar3;
  }
  if (((__this->fields).Action != 0x11) && ((__this->fields).Action != 0xf)) {
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    local_38.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
    local_38.monitor = &g_data_ffffffffffffffff;
    local_28 = 1;
    pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar2);
      local_20.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
      local_20.monitor = &g_data_ffffffffffffffff;
      local_10 = 3;
      pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = pSVar2;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar2);
        return pSVar3;
      }
    }
    ThrowIndexOutOfRangeException();
  }
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  local_20.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
  local_20.monitor = &g_data_ffffffffffffffff;
  local_10 = 1;
  pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  if (pSVar3 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pSVar3->m_Items[0] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar2);
  return pSVar3;
}


// Weather.WeatherEvent$$SupportsWeatherValueSelectTypes
// il2cpp: bool Weather_WeatherEvent__SupportsWeatherValueSelectTypes (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x181db27a0

bool Weather_WeatherEvent__SupportsWeatherValueSelectTypes(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_String_o *value;
  System_String_array *pSVar4;
  System_Enum_o local_38;
  undefined4 local_28;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_184344929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherValueSelectType);
    Il2CppMethodInitialized_184344929 = '\x01';
  }
  iVar1 = Weather_WeatherEvent__GetValueType(__this,(MethodInfo *)0x0);
  switch(iVar1) {
  case 1:
  case 2:
  case 4:
  case 6:
    if ((TypeInfo_Weather_WeatherEvent->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
    }
    pSVar4 = TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherValueSelectTypes;
    break;
  case 3:
  case 5:
    if (((__this->fields).Action != 0x11) && ((__this->fields).Action != 0xf)) {
      pIVar2 = SZArrayNew(TypeInfo_string_array,2);
      local_38.monitor = &g_data_ffffffffffffffff;
      local_38.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
      local_28 = 1;
      pIVar3 = (Il2CppClass *)System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      if (pIVar2 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(int *)&pIVar2[1].monitor != 0) {
        pIVar2[2].klass = pIVar3;
        Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pIVar3);
        local_20.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
        local_20.monitor = &g_data_ffffffffffffffff;
        local_10 = 3;
        value = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
        if (1 < *(uint *)&pIVar2[1].monitor) {
          pIVar2[2].monitor = value;
          Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,value);
          return *(int *)&pIVar2[1].monitor != 0;
        }
      }
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = SZArrayNew(TypeInfo_string_array,1);
    local_20.monitor = &g_data_ffffffffffffffff;
    local_20.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
    local_10 = 1;
    pIVar3 = (Il2CppClass *)System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    if (pIVar2 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (*(int *)&pIVar2[1].monitor == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2[2].klass = pIVar3;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pIVar3);
    return *(int *)&pIVar2[1].monitor != 0;
  default:
    pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  if (pSVar4 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  return (int)pSVar4->max_length != 0;
}


// Weather.WeatherEvent$$.cctor
// il2cpp: void Weather_WeatherEvent___cctor (const MethodInfo* method);
// 0x181db29c0

void Weather_WeatherEvent___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_18434492a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_EnumToStringArrayExceptNone_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_EnumToStringArrayExceptNone_WeatherValueSelectType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    Il2CppMethodInitialized_18434492a = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_
                     ((MethodInfo_869E40 *)MethodInfo_Utility_Util_EnumToStringArrayExceptNone_WeatherEffect);
  TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects,pSVar1);
  pSVar1 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_
                     ((MethodInfo_869E40 *)
                      MethodInfo_Utility_Util_EnumToStringArrayExceptNone_WeatherValueSelectType);
  TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherValueSelectTypes = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherValueSelectTypes,pSVar1);
  return;
}


