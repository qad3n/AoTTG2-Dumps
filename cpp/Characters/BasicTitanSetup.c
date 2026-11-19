// Type: Characters.BasicTitanSetup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BasicTitanSetup.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanSetup.cs
// --------------------------------

// Characters.BasicTitanSetup$$PreloadAIAssets
// il2cpp: void Characters_BasicTitanSetup__PreloadAIAssets (const MethodInfo* method);
// 0x5c421b0
// eh: try 0x5c42520..0x5c42692 -> pad 0x5c42698 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c426ba..0x5c426bf -> pad 0x5c426de cleanup
// eh: try 0x5c426e1..0x5c426eb -> pad 0x5c42744 catch (...) [compiler noexcept guard]
// eh: try 0x5c42705..0x5c4270a -> pad 0x5c4272f cleanup
// eh: try 0x5c42732..0x5c4273c -> pad 0x5c42744 catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c42692: jmp 0x5c426a2
// asm:   0x5c42694: jmp 0x5c426a2
// asm:   0x5c42696: jmp 0x5c426a2
// asm:   0x5c42698: jmp 0x5c426a2
// asm:   0x5c4269a: jmp 0x5c426ed
// asm:   0x5c4269c: jmp 0x5c426ed
// asm:   0x5c4269e: jmp 0x5c426a2
// asm:   0x5c426a0: jmp 0x5c426ed
// asm:   0x5c426a2: mov rbx, rax
// asm:   0x5c426a5: cmp edx, 1
// asm:   0x5c426a8: jne 0x5c426e1
// asm:   0x5c426aa: mov rdi, rbx
// asm:   0x5c426ad: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c426b2: mov rbx, qword ptr [rax]
// asm:   0x5c426b5: mov qword ptr [rsp + 8], rbx
// asm:   0x5c426ba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c426bf: lea rax, [rip + 0x164c432]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5c426c6: mov rsi, qword ptr [rax]
// asm:   0x5c426c9: lea rdi, [rsp + 0x20]
// asm:   0x5c426ce: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c426d3: test rbx, rbx
// asm:   0x5c426d6: je 0x5c425a7
// asm:   0x5c426dc: jmp 0x5c42727
// asm:   0x5c426de: mov rbx, rax
// asm:   0x5c426e1: lea rdi, [rsp + 8]
// asm:   0x5c426e6: call 0x2fd93a0  ; il2cpp_runtime_helper_02fd93a0()
// asm:   0x5c426eb: jmp 0x5c4273c
// asm:   0x5c426ed: mov rbx, rax
// asm:   0x5c426f0: cmp edx, 1
// asm:   0x5c426f3: jne 0x5c42732
// asm:   0x5c426f5: mov rdi, rbx
// asm:   0x5c426f8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c426fd: mov rbx, qword ptr [rax]
// asm:   0x5c42700: mov qword ptr [rsp + 8], rbx
// asm:   0x5c42705: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4270a: lea rax, [rip + 0x164bae7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c42711: mov rsi, qword ptr [rax]
// asm:   0x5c42714: lea rdi, [rsp + 0x40]
// asm:   0x5c42719: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c4271e: test rbx, rbx
// asm:   0x5c42721: je 0x5c42674
// asm:   0x5c42727: mov rdi, rbx
// asm:   0x5c4272a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4272f: mov rbx, rax
// asm:   0x5c42732: lea rdi, [rsp + 8]
// asm:   0x5c42737: call 0x2fd93d0  ; il2cpp_runtime_helper_02fd93d0()
// asm:   0x5c4273c: mov rdi, rbx
// asm:   0x5c4273f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c42744: mov rdi, rax
// asm:   0x5c42747: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BasicTitanSetup__PreloadAIAssets(MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameTitanSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  bool bVar7;
  int32_t iVar8;
  System_String_o *str1;
  System_String_o *pSVar9;
  ulong uVar10;
  System_String_o *pSVar11;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  int iVar12;
  ulong uVar13;
  MethodInfo *method_00;
  int32_t local_88;
  int local_84;
  undefined1 local_80 [16];
  System_String_o *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  System_String_o *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_0754781a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    Il2CppMethodInitialized_0754781a = '\x01';
    in_RDX = extraout_RDX;
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  local_88 = 0;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).Titan, pSVar4 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar5 = (pSVar4->fields).TitanStandardModels, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
    bVar7 = (pSVar5->fields)._value;
    iVar12 = 0;
    while( true ) {
      iVar8 = 1;
      local_84 = iVar12;
      if (bVar7 == false) {
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
          in_RDX = extraout_RDX_01;
        }
        iVar8 = TypeInfo_Characters_BasicTitanSetup->static_fields->BodyCount;
      }
      if (iVar8 <= iVar12) break;
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar11 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
      }
      pSVar9 = TypeInfo_Characters_CharacterPrefabs->static_fields->BasicTitanPrefix;
      str1 = System_Int32__ToString(&local_84,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat_52f0320(pSVar9,str1,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__LoadAsset(pSVar11,pSVar9,true,false,(MethodInfo *)0x0);
      iVar12 = local_84 + 1;
      in_RDX = extraout_RDX_00;
    }
    iVar12 = 0;
    while( true ) {
      iVar8 = 1;
      if (bVar7 == false) {
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
          in_RDX = extraout_RDX_02;
        }
        iVar8 = TypeInfo_Characters_BasicTitanSetup->static_fields->HeadCount;
      }
      uVar1 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      if (iVar8 <= iVar12) break;
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
        in_RDX = extraout_RDX_03;
      }
      pSVar6 = TypeInfo_Characters_BasicTitanSetup->static_fields->HeadParts;
      if (pSVar6 == (System_String_array *)0x0) goto label_05c42688;
      if (0 < (int)pSVar6->max_length) {
        uVar10 = pSVar6->max_length & 0xffffffff;
        uVar13 = 0;
        do {
          if (uVar10 <= uVar13) {
            ThrowIndexOutOfRangeException();
          }
          pSVar11 = pSVar6->m_Items[uVar13];
          if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
            in_RDX = extraout_RDX_05;
          }
          Characters_BasicTitanSetup__LoadHeadPart(pSVar11,iVar12,in_RDX);
          uVar13 = uVar13 + 1;
          uVar2 = (uint)pSVar6->max_length;
          uVar10 = (ulong)uVar2;
          in_RDX = extraout_RDX_04;
        } while ((long)uVar13 < (long)(int)uVar2);
      }
      iVar12 = iVar12 + 1;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    __this = TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairs;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                 (System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_58 = local_70;
      local_68 = (undefined1  [8])local_80._0_8_;
      pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_80._8_8_;
      local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
      while( true ) {
        method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pSVar11 = local_58;
        if (!bVar7) break;
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
        }
        Characters_BasicTitanSetup__LoadHair(pSVar11,method_00);
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)pSVar11,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
        if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
        }
        Characters_HumanSetupMaterials__GetHairMaterial(pSVar11,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      __this_01 = TypeInfo_Characters_BasicTitanSetup->static_fields->AIEyes;
      if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List_int___GetEnumerator
                  (&local_48,__this_01,
                   (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
        local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_80._8_8_ = &local_48;
        while( true ) {
          bVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext
                            ((System_Collections_Generic_List_Enumerator_int__o *)&local_48,
                             (MethodInfo_4C3B4A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
          if (!bVar7) break;
          local_88 = (int32_t)local_48.fields._current;
          pSVar11 = System_Int32__ToString(&local_88,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat_52f0320("Eye",pSVar11,(MethodInfo *)0x0);
          if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
          }
          Characters_HumanSetupMaterials__GetTitanEyeMaterial(pSVar11,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_int___Dispose
                  ((System_Collections_Generic_List_Enumerator_int__o *)&local_48,
                   (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        return;
      }
    }
  }
label_05c42688:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$LoadHair
// il2cpp: UnityEngine_GameObject_o* Characters_BasicTitanSetup__LoadHair (System_String_o* hair, const MethodInfo* method);
// 0x5c42850

UnityEngine_GameObject_o * Characters_BasicTitanSetup__LoadHair(System_String_o *hair,MethodInfo *method)

{
  System_String_o *path;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  
  if (Il2CppMethodInitialized_0754781b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Hairs/Prefabs/");
    Il2CppMethodInitialized_0754781b = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (__this,(Il2CppObject *)hair,
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
  pSVar1 = System_String__Concat_52f0320("Titans/Hairs/Prefabs/",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,pSVar1,true,false,(MethodInfo *)0x0);
  if ((pUVar2 != (UnityEngine_Object_o *)0x0) &&
     (pUVar2->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
  }
  return (UnityEngine_GameObject_o *)pUVar2;
}


// Characters.BasicTitanSetup$$ResetCloth
// il2cpp: void Characters_BasicTitanSetup__ResetCloth (UnityEngine_Transform_o* hairSocket, const MethodInfo* method);
// 0x5c42980
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c429e1: lea r12, [rip + 0x1662358]  ; MethodInfo_UnityEngine_Component_GetComponentInChildren_Cloth
// asm:   0x5c429e8: lea r13, [rip + 0x1638a01]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c429ef: jmp 0x5c42a09
// asm:   0x5c42a00: dec r15d
// asm:   0x5c42a03: js 0x5c42ae8

void Characters_BasicTitanSetup__ResetCloth(UnityEngine_Transform_o *hairSocket,MethodInfo *method)

{
  bool bVar1;
  int index;
  UnityEngine_Transform_o *__this;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_0754781c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Cloth)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8b0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754781c = '\x01';
  }
  if (hairSocket != (UnityEngine_Transform_o *)0x0) {
    index = UnityEngine_Transform__get_childCount(hairSocket,(MethodInfo *)0x0);
    while( true ) {
      do {
        index = index + -1;
        if (index < 0) {
          return;
        }
        __this = UnityEngine_Transform__GetChild(hairSocket,index,(MethodInfo *)0x0);
        if (__this == (UnityEngine_Transform_o *)0x0) goto label_05c42af7;
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponentInChildren_object__34b09d0
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B09D0 *)
                            MethodInfo_UnityEngine_Component_GetComponentInChildren_Cloth);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (bVar1);
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_Object__Instantiate_object__35a4410
                         ((Il2CppObject *)pUVar3,hairSocket,
                          (MethodInfo_35A4410 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8b0);
      value = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_Object__set_name(pUVar2,value,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) break;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      UnityEngine_Transform__SetParent_692d510(__this,(UnityEngine_Transform_o *)0x0,false,(MethodInfo *)0x0);
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    }
  }
label_05c42af7:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$LoadHeadPart
// il2cpp: UnityEngine_Transform_o* Characters_BasicTitanSetup__LoadHeadPart (System_String_o* part, int32_t head, const MethodInfo* method);
// 0x5c42750

UnityEngine_Transform_o *
Characters_BasicTitanSetup__LoadHeadPart(System_String_o *part,int32_t head,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *pSVar1;
  UnityEngine_Object_o *__this;
  UnityEngine_Transform_o *pUVar2;
  int32_t local_1c;
  
  local_1c = head;
  if (Il2CppMethodInitialized_0754781d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Heads/Prefabs/");
    Il2CppMethodInitialized_0754781d = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar1 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10("Titans/Heads/Prefabs/",part,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset(path,pSVar1,true,false,(MethodInfo *)0x0);
  if (__this == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (__this->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
    il2cpp_codegen_raise_invalid_cast_exception(__this);
  }
  pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
  return pUVar2;
}


// Characters.BasicTitanSetup$$Init
// il2cpp: void Characters_BasicTitanSetup__Init (const MethodInfo* method);
// 0x5c42b00
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c42f1b: mov rbx, rsp
// asm:   0x5c42f1e: jmp 0x5c42f4c
// asm:   0x5c43200: mov r15, rsp
// asm:   0x5c43203: lea r12, [rip + 0x1636e76]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x5c4320a: lea r13, [rip + 0x164e0ef]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5c43211: nop word ptr cs:[rax + rax]

void Characters_BasicTitanSetup__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Characters_BasicTitanSetup_StaticFields *pCVar3;
  System_Collections_Generic_List_Color255__o *__this;
  Utility_Color255_array *pUVar4;
  System_Collections_Generic_List_int__o *__this_00;
  System_Int32_array *pSVar5;
  bool bVar6;
  int32_t iVar7;
  int32_t g;
  int32_t b;
  int32_t a;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONArray_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  Utility_Color255_o *__this_01;
  System_Collections_Generic_HashSet_int__o *__this_02;
  MethodInfo *pMVar12;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar13;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754781e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color255_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"HeadCount");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSetupInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"BodyCount");
    il2cpp_codegen_initialize_runtime_metadata(&"HairColors");
    il2cpp_codegen_initialize_runtime_metadata(&"EyeCount");
    il2cpp_codegen_initialize_runtime_metadata(&"AIExcludedEyes");
    il2cpp_codegen_initialize_runtime_metadata(&"HairF");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM");
    Il2CppMethodInitialized_0754781e = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar8 = TypeInfo_Utility_ResourcePaths->static_fields->CharacterData;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar8 = ApplicationManagers_ResourceManager__TryLoadText(pSVar8,"TitanSetupInfo",(MethodInfo *)0x0);
  pSVar9 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  TypeInfo_Characters_BasicTitanSetup->static_fields->Info = pSVar9;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitanSetup->static_fields->Info);
  pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
  if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,"BodyCount",(pSVar9->klass->vtable)._7_get_Item.method),
     pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    iVar7 = (*(pSVar9->klass->vtable)._35_get_AsInt.methodPtr)
                      (pSVar9,(pSVar9->klass->vtable)._35_get_AsInt.method);
    pCVar3 = TypeInfo_Characters_BasicTitanSetup->static_fields;
    pCVar3->BodyCount = iVar7;
    pSVar9 = pCVar3->Info;
    if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar9,"HeadCount",(pSVar9->klass->vtable)._7_get_Item.method),
       pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      iVar7 = (*(pSVar9->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar9,(pSVar9->klass->vtable)._35_get_AsInt.method);
      pCVar3 = TypeInfo_Characters_BasicTitanSetup->static_fields;
      pCVar3->HeadCount = iVar7;
      pSVar9 = pCVar3->Info;
      if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar9,"EyeCount",(pSVar9->klass->vtable)._7_get_Item.method),
         pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
        iVar7 = (*(pSVar9->klass->vtable)._35_get_AsInt.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._35_get_AsInt.method);
        pCVar3 = TypeInfo_Characters_BasicTitanSetup->static_fields;
        pCVar3->EyeCount = iVar7;
        pSVar9 = pCVar3->Info;
        if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar9,"HairM",(pSVar9->klass->vtable)._7_get_Item.method),
           pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          iVar7 = (*(pSVar9->klass->vtable)._11_get_Count.methodPtr)
                            (pSVar9,(pSVar9->klass->vtable)._11_get_Count.method);
          pCVar3 = TypeInfo_Characters_BasicTitanSetup->static_fields;
          pCVar3->HairMCount = iVar7;
          pSVar9 = pCVar3->Info;
          if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
             (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar9,"HairF",(pSVar9->klass->vtable)._7_get_Item.method),
             pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
            pMVar12 = (pSVar9->klass->vtable)._11_get_Count.method;
            iVar7 = (*(pSVar9->klass->vtable)._11_get_Count.methodPtr)(pSVar9,pMVar12);
            TypeInfo_Characters_BasicTitanSetup->static_fields->HairFCount = iVar7;
            Characters_BasicTitanSetup__LoadHairs("HairM",pMVar12);
            Characters_BasicTitanSetup__LoadHairs("HairF",pMVar12);
            pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
            if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               ((pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar9,"HairColors",(pSVar9->klass->vtable)._7_get_Item.method),
                pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0 &&
                (pSVar10 = (*(pSVar9->klass->vtable)._45_get_AsArray.methodPtr)
                                     (pSVar9,(pSVar9->klass->vtable)._45_get_AsArray.method),
                pSVar10 != (SimpleJSONFixed_JSONArray_o *)0x0)))) {
              (*(pSVar10->klass->vtable)._32_GetEnumerator.methodPtr)
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,pSVar10,
                         (pSVar10->klass->vtable)._32_GetEnumerator.method);
              local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
              local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
              local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
              local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
              local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
              local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
              local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
              local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
              local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
              local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
              local_c8.type = local_78.type;
              local_c8._4_4_ = local_78._4_4_;
              local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
              bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
              if (bVar6) {
                do {
                  SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                     ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
                  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                  }
                  if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c433c9;
                  __this = TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairColors;
                  pSVar11 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                                      (pSVar9,0,(pSVar9->klass->vtable)._5_get_Item.method);
                  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c433c9;
                  iVar7 = (*(pSVar11->klass->vtable)._35_get_AsInt.methodPtr)
                                    (pSVar11,(pSVar11->klass->vtable)._35_get_AsInt.method);
                  pSVar11 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                                      (pSVar9,1,(pSVar9->klass->vtable)._5_get_Item.method);
                  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c433c9;
                  g = (*(pSVar11->klass->vtable)._35_get_AsInt.methodPtr)
                                (pSVar11,(pSVar11->klass->vtable)._35_get_AsInt.method);
                  pSVar11 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                                      (pSVar9,2,(pSVar9->klass->vtable)._5_get_Item.method);
                  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c433c9;
                  b = (*(pSVar11->klass->vtable)._35_get_AsInt.methodPtr)
                                (pSVar11,(pSVar11->klass->vtable)._35_get_AsInt.method);
                  pSVar9 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                                     (pSVar9,3,(pSVar9->klass->vtable)._5_get_Item.method);
                  if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c433c9;
                  a = (*(pSVar9->klass->vtable)._35_get_AsInt.methodPtr)
                                (pSVar9,(pSVar9->klass->vtable)._35_get_AsInt.method);
                  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                  Utility_Color255___ctor(__this_01,iVar7,g,b,a,(MethodInfo *)0x0);
                  pMVar12 = MethodInfo_System_Collections_Generic_List_Color255_Add;
                  if (__this == (System_Collections_Generic_List_Color255__o *)0x0) goto label_05c433c9;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar4 = (__this->fields)._items;
                  if (pUVar4 == (Utility_Color255_array *)0x0) goto label_05c433c9;
                  uVar2 = (__this->fields)._size;
                  if (uVar2 < (uint)pUVar4->max_length) {
                    (__this->fields)._size = uVar2 + 1;
                    pUVar4->m_Items[(int)uVar2] = __this_01;
                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_01,
                               (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
                  }
                  bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
                } while (bVar6);
              }
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
              System_Collections_Generic_HashSet_int____ctor
                        (__this_02,
                         (MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
              if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
              }
              pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
              if (((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                  (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar9,"AIExcludedEyes",(pSVar9->klass->vtable)._7_get_Item.method
                                      ), pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
                 (pSVar10 = (*(pSVar9->klass->vtable)._45_get_AsArray.methodPtr)
                                      (pSVar9,(pSVar9->klass->vtable)._45_get_AsArray.method),
                 pSVar10 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
                (*(pSVar10->klass->vtable)._32_GetEnumerator.methodPtr)
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,pSVar10,
                           (pSVar10->klass->vtable)._32_GetEnumerator.method);
                local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
                local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
                local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
                local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
                local_c8.m_Object.fields._current.fields.value =
                     local_78.m_Object.fields._current.fields.value;
                local_c8.m_Object.fields._getEnumeratorRetType =
                     local_78.m_Object.fields._getEnumeratorRetType;
                local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
                local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
                local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
                local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
                local_c8.type = local_78.type;
                local_c8._4_4_ = local_78._4_4_;
                local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
                bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
                if (bVar6) {
                  if (__this_02 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                    SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                       ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
                    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                    }
                    pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
                    if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                      (*(pSVar9->klass->vtable)._35_get_AsInt.methodPtr)
                                (pSVar9,(pSVar9->klass->vtable)._35_get_AsInt.method);
                      ThrowNullReferenceException();
                    }
                    goto label_05c433c9;
                  }
                  do {
                    SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                       ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
                    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                    }
                    pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
                    if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c433c9;
                    iVar7 = (*(pSVar9->klass->vtable)._35_get_AsInt.methodPtr)
                                      (pSVar9,(pSVar9->klass->vtable)._35_get_AsInt.method);
                    System_Collections_Generic_HashSet_int___Add
                              (__this_02,iVar7,
                               (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                      ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
                  } while (bVar6);
                }
                if (__this_02 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                  }
                  if (0 < TypeInfo_Characters_BasicTitanSetup->static_fields->EyeCount) goto label_05c433c9;
                }
                else {
                  iVar7 = 0;
                  while( true ) {
                    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                    }
                    if (TypeInfo_Characters_BasicTitanSetup->static_fields->EyeCount <= iVar7) break;
                    bVar6 = System_Collections_Generic_HashSet_int___Contains
                                      (__this_02,iVar7,
                                       (MethodInfo_4FA7E00 *)
                                       MethodInfo_System_Collections_Generic_HashSet_int_Contains);
                    if (!bVar6) {
                      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                      }
                      pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add;
                      __this_00 = TypeInfo_Characters_BasicTitanSetup->static_fields->AIEyes;
                      if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c433c9;
                      piVar1 = &(__this_00->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar5 = (__this_00->fields)._items;
                      if (pSVar5 == (System_Int32_array *)0x0) goto label_05c433c9;
                      uVar2 = (__this_00->fields)._size;
                      if (uVar2 < (uint)pSVar5->max_length) {
                        (__this_00->fields)._size = uVar2 + 1;
                        pSVar5->m_Items[(int)uVar2] = iVar7;
                      }
                      else {
                        System_Collections_Generic_List_int___AddWithResize
                                  (__this_00,iVar7,
                                   (MethodInfo_3916AC0 *)pMVar12->klass->rgctx_data[0xe].method);
                      }
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
label_05c433c9:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$LoadHairs
// il2cpp: void Characters_BasicTitanSetup__LoadHairs (System_String_o* key, const MethodInfo* method);
// 0x5c433f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4358c: nop dword ptr [rax]
// asm:   0x5c43606: lea r15, [rip + 0x165334b]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5c4360d: jmp 0x5c4362f

void Characters_BasicTitanSetup__LoadHairs(System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *value;
  int iVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar11;
  int32_t local_d4;
  System_Collections_Generic_HashSet_string__o *local_d0;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754781f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"AIExcluded");
    Il2CppMethodInitialized_0754781f = '\x01';
  }
  local_d4 = 0;
  local_d0 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)local_d0,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
  pSVar8 = System_String__Concat_52f0320("AIExcluded",key,(MethodInfo *)0x0);
  if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,pSVar8,(pSVar9->klass->vtable)._7_get_Item.method),
     pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    (*(pSVar9->klass->vtable)._32_unknown.methodPtr)
              (&local_78,pSVar9,(pSVar9->klass->vtable)._32_unknown.method);
    local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
    local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
    local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
    local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
    local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
    local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
    local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
    local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
    local_c8.type = local_78.type;
    local_c8._4_4_ = local_78._4_4_;
    local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
    iVar10 = 0;
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
    if (bVar6) {
      if (local_d0 == (System_Collections_Generic_HashSet_string__o *)0x0) {
        SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar11,(MethodInfo *)0x0);
        if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                    (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
          ThrowNullReferenceException();
        }
        goto label_05c438b0;
      }
      do {
        SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar11,(MethodInfo *)0x0);
        if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c438b0;
        pSVar8 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)local_d0,(Il2CppObject *)pSVar8,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
      } while (bVar6);
    }
    while( true ) {
      local_d4 = iVar10;
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
      if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar9,key,(pSVar9->klass->vtable)._7_get_Item.method),
         pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0)) break;
      iVar7 = (*(pSVar9->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar9,(pSVar9->klass->vtable)._11_get_Count.method);
      if (iVar7 <= iVar10) {
        return;
      }
      pSVar8 = System_Int32__ToString(&local_d4,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_52f0320(key,pSVar8,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
      if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar9,key,(pSVar9->klass->vtable)._7_get_Item.method),
         pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0)) break;
      pSVar9 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar9,local_d4,(pSVar9->klass->vtable)._5_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      value = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar9,(MethodInfo *)0x0);
      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
      pSVar3 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) break;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar3->fields)._items;
      if (pSVar4 == (System_String_array *)0x0) break;
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pSVar8;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar8,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs;
      if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this,(Il2CppObject *)pSVar8,(Il2CppObject *)value,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item),
         local_d0 == (System_Collections_Generic_HashSet_string__o *)0x0)) break;
      bVar6 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)local_d0,(Il2CppObject *)value,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (!bVar6) {
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
        }
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        pSVar3 = TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairs;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) break;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) break;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pSVar8;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar8,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
      iVar10 = local_d4 + 1;
    }
  }
label_05c438b0:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$GetRandomBodyHeadCombo
// il2cpp: System_Int32_array* Characters_BasicTitanSetup__GetRandomBodyHeadCombo (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5c438d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c43a5a: jmp 0x5c43e4b

System_Int32_array *
Characters_BasicTitanSetup__GetRandomBodyHeadCombo(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameTitanSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar8;
  System_Single_array *pSVar9;
  Il2CppClass *pIVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  int32_t iVar13;
  System_Int32_array *pSVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_float__o *__this_01;
  Il2CppObject *pIVar16;
  long *plVar17;
  float item;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar18;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07547820 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Chance");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"BodyHeadCombos");
    Il2CppMethodInitialized_07547820 = '\x01';
  }
  pSVar14 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,2);
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar5 != (Settings_InGameSet_o *)0x0) &&
      (pSVar6 = (pSVar5->fields).Titan, pSVar6 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar7 = (pSVar6->fields).TitanStandardModels, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar7->fields)._value == false) {
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar12 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar12) {
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
        if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pSVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this,(Il2CppObject *)"Titan",
                                 (MethodInfo_4AAD450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
           pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05c43e46;
        node = (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar15,"Default",(pSVar15->klass->vtable)._7_get_Item.method);
      }
      if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar15 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                            (node,"BodyHeadCombos",(node->klass->vtable)._7_get_Item.method);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
        System_Collections_Generic_List_object____ctor
                  (__this_00,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_object_ctor);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
        System_Collections_Generic_List_float____ctor
                  (__this_01,(MethodInfo_39ABE80 *)MethodInfo_System_Collections_Generic_List_float_ctor);
        if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          (*(pSVar15->klass->vtable)._32_unknown.methodPtr)
                    (&local_78,pSVar15,(pSVar15->klass->vtable)._32_unknown.method);
          local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
          local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
          local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
          local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
          local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
          local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
          local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
          local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
          local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
          local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
          local_c8.type = local_78.type;
          local_c8._4_4_ = local_78._4_4_;
          local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
          bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
          if (bVar12) {
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
              SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar18,(MethodInfo *)0x0);
              ThrowNullReferenceException();
            }
            do {
              SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              pIVar16 = (Il2CppObject *)
                        SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar18,(MethodInfo *)0x0);
              pMVar11 = MethodInfo_System_Collections_Generic_List_object_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) goto label_05c43e46;
              uVar4 = (__this_00->fields)._size;
              if (uVar4 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar4 + 1;
                pSVar8->m_Items[(int)uVar4] = pIVar16;
                Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,pIVar16,(MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
              }
              if (((pIVar16 == (Il2CppObject *)0x0) ||
                  (plVar17 = (long *)(*pIVar16->klass->vtable[7].methodPtr)
                                               (pIVar16,"Chance",pIVar16->klass->vtable[7].method
                                               ), plVar17 == (long *)0x0)) ||
                 (item = (float)(**(code **)(*plVar17 + 0x388))(plVar17),
                 pMVar11 = MethodInfo_System_Collections_Generic_List_float_Add,
                 __this_01 == (System_Collections_Generic_List_float__o *)0x0)) goto label_05c43e46;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar9 = (__this_01->fields)._items;
              if (pSVar9 == (System_Single_array *)0x0) goto label_05c43e46;
              uVar4 = (__this_01->fields)._size;
              if (uVar4 < (uint)pSVar9->max_length) {
                (__this_01->fields)._size = uVar4 + 1;
                pSVar9->m_Items[(int)uVar4] = item;
              }
              else {
                System_Collections_Generic_List_float___AddWithResize
                          (__this_01,item,(MethodInfo_39AC7A0 *)pMVar11->klass->rgctx_data[0xe].method);
              }
              bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                 ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
            } while (bVar12);
          }
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          pIVar16 = Utility_Util__GetRandomFromWeightedList(__this_00,__this_01,(MethodInfo *)0x0);
          if (pIVar16 != (Il2CppObject *)0x0) {
            pIVar10 = pIVar16->klass;
            bVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).typeHierarchyDepth;
            if (((pIVar10->_2).typeHierarchyDepth < bVar2) ||
               ((pIVar10->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar16);
            }
            plVar17 = (long *)(*pIVar10->vtable[7].methodPtr)
                                        (pIVar16,"Body",pIVar10->vtable[7].method);
            if ((plVar17 != (long *)0x0) &&
               (iVar13 = (**(code **)(*plVar17 + 0x368))(plVar17,*(undefined8 *)(*plVar17 + 0x370)),
               pSVar14 != (System_Int32_array *)0x0)) {
              if ((int)pSVar14->max_length != 0) {
                pSVar14->m_Items[0] = iVar13;
                plVar17 = (long *)(*pIVar16->klass->vtable[7].methodPtr)
                                            (pIVar16,"Head",pIVar16->klass->vtable[7].method);
                if (plVar17 == (long *)0x0) goto label_05c43e46;
                iVar13 = (**(code **)(*plVar17 + 0x368))(plVar17,*(undefined8 *)(*plVar17 + 0x370));
                if ((pSVar14->max_length & 0xfffffffe) != 0) goto label_05c43e2e;
              }
label_05c43e4b:
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
    else if (pSVar14 != (System_Int32_array *)0x0) {
      iVar3 = (int)pSVar14->max_length;
      if (iVar3 != 0) {
        pSVar14->m_Items[0] = 0;
        iVar13 = 0;
        if (iVar3 != 1) {
label_05c43e2e:
          pSVar14->m_Items[1] = iVar13;
          return pSVar14;
        }
      }
      goto label_05c43e4b;
    }
  }
label_05c43e46:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$CreateRandomSet
// il2cpp: Settings_TitanCustomSet_o* Characters_BasicTitanSetup__CreateRandomSet (Characters_BasicTitanSetup_o* __this, int32_t headPrefab, const MethodInfo* method);
// 0x5c43ea0

Settings_TitanCustomSet_o *
Characters_BasicTitanSetup__CreateRandomSet
          (Characters_BasicTitanSetup_o *__this,int32_t headPrefab,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_string__o *list;
  Settings_ColorSetting_o *pSVar2;
  int32_t iVar3;
  Settings_TitanCustomSet_o *__this_01;
  System_String_o *value;
  Utility_Color255_o *pUVar4;
  
  if (Il2CppMethodInitialized_07547821 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547821 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSet);
  Settings_TitanCustomSet___ctor(__this_01,(MethodInfo *)0x0);
  if ((__this_01 != (Settings_TitanCustomSet_o *)0x0) &&
     (pSVar1 = (__this_01->fields).Head, pSVar1 != (Settings_IntSetting_o *)0x0)) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,headPrefab,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    __this_00 = (__this_01->fields).Hair;
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    list = TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairs;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    value = MiscExtensions__GetRandomItem_object_
                      ((System_Collections_Generic_List_T__o *)list,
                       (MethodInfo_358DA10 *)MethodInfo_MiscExtensions_GetRandomItem_string);
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar2 = (__this_01->fields).HairColor;
      pUVar4 = MiscExtensions__GetRandomItem_object_
                         ((System_Collections_Generic_List_T__o *)
                          TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairColors,
                          (MethodInfo_358DA10 *)MethodInfo_MiscExtensions_GetRandomItem_Color255);
      if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pUVar4,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        pSVar1 = (__this_01->fields).Eye;
        iVar3 = MiscExtensions__GetRandomItem_int_
                          ((System_Collections_Generic_List_T__o *)
                           TypeInfo_Characters_BasicTitanSetup->static_fields->AIEyes,
                           (MethodInfo_358D9C0 *)MethodInfo_MiscExtensions_GetRandomItem_int);
        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar1,iVar3,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          iVar3 = UnityEngine_Random__Range_690e2b0(0xa0,0x100,(MethodInfo *)0x0);
          pSVar2 = (__this_01->fields).SkinColor;
          pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          Utility_Color255___ctor(pUVar4,iVar3,iVar3,iVar3,0xff,(MethodInfo *)0x0);
          if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pUVar4,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
            return __this_01;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$Load
// il2cpp: void Characters_BasicTitanSetup__Load (Characters_BasicTitanSetup_o* __this, Settings_TitanCustomSet_o* set, const MethodInfo* method);
// 0x5c440d0
// eh: try 0x5c44ced..0x5c44dcb -> pad 0x5c44dcb (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c44ded..0x5c44df2 -> pad 0x5c44e23 cleanup
// eh: try 0x5c44e26..0x5c44e30 -> pad 0x5c44e38 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c44448: lea r14, [rip + 0x1636fa1]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c4444f: jmp 0x5c4446e
// asm:   0x5c44d4a: jmp 0x5c44ce0
// asm:   0x5c44dcb: jmp 0x5c44dd5
// asm:   0x5c44dcd: jmp 0x5c44dd5
// asm:   0x5c44dcf: jmp 0x5c44dd5
// asm:   0x5c44dd1: jmp 0x5c44dd5
// asm:   0x5c44dd3: jmp 0x5c44dd5
// asm:   0x5c44dd5: mov rbx, rax
// asm:   0x5c44dd8: cmp edx, 1
// asm:   0x5c44ddb: jne 0x5c44e26
// asm:   0x5c44ddd: mov rdi, rbx
// asm:   0x5c44de0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c44de5: mov rbx, qword ptr [rax]
// asm:   0x5c44de8: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c44ded: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c44df2: lea rax, [rip + 0x1649687]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c44df9: mov rsi, qword ptr [rax]
// asm:   0x5c44dfc: lea rdi, [rsp + 0x40]
// asm:   0x5c44e01: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c44e06: test rbx, rbx
// asm:   0x5c44e09: mov r12, qword ptr [rsp + 0x18]
// asm:   0x5c44e0e: lea r13, [rip + 0x16365db]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c44e15: je 0x5c44d67
// asm:   0x5c44e1b: mov rdi, rbx
// asm:   0x5c44e1e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c44e23: mov rbx, rax
// asm:   0x5c44e26: lea rdi, [rsp + 0x20]
// asm:   0x5c44e2b: call 0x2fd9400  ; il2cpp_runtime_helper_02fd9400()
// asm:   0x5c44e30: mov rdi, rbx
// asm:   0x5c44e33: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c44e38: mov rdi, rax
// asm:   0x5c44e3b: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BasicTitanSetup__Load
               (Characters_BasicTitanSetup_o *__this,Settings_TitanCustomSet_o *set,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Material__o *collection;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  Utility_Color255_o *pUVar3;
  UnityEngine_Renderer_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Characters_BasicTitanSetup_o *__this_02;
  bool bVar4;
  int32_t head;
  int index;
  uint uVar5;
  System_Collections_Generic_List_Material__o *__this_03;
  UnityEngine_Transform_o *pUVar6;
  Characters_BasicTitanSetup_o *pCVar7;
  UnityEngine_SkinnedMeshRenderer_o *pUVar8;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  System_Object_array *pSVar14;
  System_String_o *texture;
  UnityEngine_SkinnedMeshRenderer_o *__this_04;
  UnityEngine_Mesh_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_BoxCollider_o *__this_05;
  UnityEngine_MeshFilter_o *__this_06;
  UnityEngine_MeshFilter_o *__this_07;
  UnityEngine_MeshRenderer_o *__this_08;
  Characters_BaseCharacter_o *__this_09;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar17;
  Characters_BasicTitanSetup_o *pCVar18;
  MethodInfo *in_R9;
  uint uVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Color_o UVar21;
  UnityEngine_Quaternion_o UVar22;
  int32_t local_8c;
  Characters_BasicTitanSetup_o *local_88;
  Characters_BasicTitanSetup_o *local_80;
  undefined1 local_78 [12];
  uint uStack_6c;
  UnityEngine_Object_o *local_68;
  Settings_TitanCustomSet_o *local_60;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  UnityEngine_Object_o *local_48;
  System_Collections_Generic_List_Material__o *local_40;
  UnityEngine_Material_o *local_38;
  
  if (Il2CppMethodInitialized_07547822 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Material_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_ctor_7195760);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"EyesHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanHeadCollider");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanEyes");
    il2cpp_codegen_initialize_runtime_metadata(&"Eyes");
    il2cpp_codegen_initialize_runtime_metadata(&"Bone");
    il2cpp_codegen_initialize_runtime_metadata(&"Nose");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"HairSocket");
    Il2CppMethodInitialized_07547822 = '\x01';
  }
  local_8c = 0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_48 = (UnityEngine_Object_o *)0x0;
  collection = (__this->fields)._ownedMaterials;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor_395ca70
            ((System_Collections_Generic_List_object__o *)__this_03,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_Material_ctor_7195760);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Clear
              (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
       (pCVar7 = (Characters_BasicTitanSetup_o *)
                 UnityEngine_Transform__Find(pUVar6,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head",(MethodInfo *)0x0),
       set != (Settings_TitanCustomSet_o *)0x0)) {
      head = Settings_TitanCustomSet__GetHead(set,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar6 = UnityEngine_Transform__Find(pUVar6,"Body",(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        pUVar8 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar6,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
        if (Il2CppMethodInitialized_07547823 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
          Il2CppMethodInitialized_07547823 = '\x01';
        }
        if (pUVar8 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          pUVar9 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar8,(MethodInfo *)0x0);
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
          if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Add
                      (pSVar1,(Il2CppObject *)pUVar9,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
            pSVar2 = (set->fields).SkinColor;
            if ((((pSVar2 != (Settings_ColorSetting_o *)0x0) &&
                 (pUVar3 = (pSVar2->fields)._value, pUVar3 != (Utility_Color255_o *)0x0)) &&
                (UVar21 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0),
                pUVar9 != (UnityEngine_Material_o *)0x0)) &&
               ((UnityEngine_Material__set_color(pUVar9,UVar21,(MethodInfo *)0x0),
                pCVar7 != (Characters_BasicTitanSetup_o *)0x0 &&
                (local_88 = pCVar7, local_40 = __this_03, local_38 = pUVar9,
                pUVar6 = UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pCVar7,"HairSocket",(MethodInfo *)0x0)
                , pUVar6 != (UnityEngine_Transform_o *)0x0)))) {
              index = UnityEngine_Transform__get_childCount(pUVar6,(MethodInfo *)0x0);
              while (index = index + -1, -1 < index) {
                pUVar10 = UnityEngine_Transform__GetChild(pUVar6,index,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c44dbc;
                pUVar11 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__DestroyImmediate_6921750(pUVar11,(MethodInfo *)0x0);
              }
              pMVar17 = (MethodInfo *)0x0;
              local_80 = __this;
              local_60 = set;
              pSVar12 = Settings_TitanCustomSet__GetHair(set,(MethodInfo *)0x0);
              if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
              }
              pUVar13 = Characters_BasicTitanSetup__LoadHair(pSVar12,pMVar17);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              pUVar13 = UnityEngine_Object__Instantiate_object__35a4190
                                  ((Il2CppObject *)pUVar13,
                                   (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject)
              ;
              if ((pUVar13 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar10 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0),
                 pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar10,pUVar6,(MethodInfo *)0x0);
                pUVar6 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                }
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar6,(UnityEngine_Vector3_o)
                                    (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  pUVar6 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                  local_78._0_8_ = (System_Collections_Generic_List_T__o *)0xbfc90fdb;
                  stack0xffffffffffffff90 =
                       (System_Collections_Generic_List_Enumerator_object__o *)((ulong)uStack_6c << 0x20);
                  UVar22 = UnityEngine_Quaternion__Internal_FromEulerRad
                                     ((UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localRotation(pUVar6,UVar22,(MethodInfo *)0x0);
                    pUVar6 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_0753e4b7 = '\x01';
                    }
                    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__set_localScale
                                (pUVar6,(UnityEngine_Vector3_o)
                                        (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                                 (MethodInfo *)0x0);
                      pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                          (pUVar13,(MethodInfo_353C030 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer
                                          );
                      if (pSVar14 != (System_Object_array *)0x0) {
                        uVar5 = (uint)pSVar14->max_length;
                        if (0 < (int)uVar5) {
                          uVar19 = 0;
                          do {
                            if (uVar5 <= uVar19) {
                              ThrowIndexOutOfRangeException();
                            }
                            __this_00 = (UnityEngine_Renderer_o *)pSVar14->m_Items[(int)uVar19];
                            if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                            }
                            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                                        TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs;
                            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                            goto label_05c44dbc;
                            texture = System_Collections_Generic_Dictionary_object__object___get_Item
                                                (__this_01,(Il2CppObject *)pSVar12,
                                                 (MethodInfo_4AAD450 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item
                                                );
                            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0)
                            {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
                            }
                            pUVar9 = Characters_HumanSetupMaterials__GetHairMaterial
                                               (texture,(MethodInfo *)0x0);
                            if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_05c44dbc;
                            UnityEngine_Renderer__set_material(__this_00,pUVar9,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_07547823 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                              Il2CppMethodInitialized_07547823 = '\x01';
                            }
                            pUVar9 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
                            pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                                     (local_80->fields)._ownedMaterials;
                            if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0)
                            goto label_05c44dbc;
                            System_Collections_Generic_HashSet_object___Add
                                      (pSVar1,(Il2CppObject *)pUVar9,
                                       (MethodInfo_4FB4450 *)
                                       MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                            pSVar2 = (local_60->fields).HairColor;
                            if (((pSVar2 == (Settings_ColorSetting_o *)0x0) ||
                                (pUVar3 = (pSVar2->fields)._value, pUVar3 == (Utility_Color255_o *)0x0)) ||
                               (UVar21 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0),
                               pUVar9 == (UnityEngine_Material_o *)0x0)) goto label_05c44dbc;
                            UnityEngine_Material__set_color(pUVar9,UVar21,(MethodInfo *)0x0);
                            uVar19 = uVar19 + 1;
                            uVar5 = (uint)pSVar14->max_length;
                          } while ((int)uVar19 < (int)uVar5);
                        }
                        pCVar7 = local_80;
                        pUVar6 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)local_80,(MethodInfo *)0x0);
                        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                          pUVar6 = UnityEngine_Transform__Find(pUVar6,"Head",(MethodInfo *)0x0)
                          ;
                          pMVar17 = extraout_RDX;
                          if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                            pMVar17 = extraout_RDX_00;
                          }
                          pUVar10 = Characters_BasicTitanSetup__LoadHeadPart
                                              ("TitanHead",head,pMVar17);
                          if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
                             (pUVar8 = UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar6,
                                                  (MethodInfo_34B0830 *)
                                                  MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer
                                                 ), pUVar8 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
                            UnityEngine_Renderer__set_material
                                      ((UnityEngine_Renderer_o *)pUVar8,local_38,(MethodInfo *)0x0);
                            pUVar8 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar6,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer
                                               );
                            if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                               ((__this_04 = UnityEngine_Component__GetComponent_object_
                                                       ((UnityEngine_Component_o *)pUVar10,
                                                        (MethodInfo_34B0830 *)
                                                                                                                
                                                       MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer
                                                       ),
                                __this_04 != (UnityEngine_SkinnedMeshRenderer_o *)0x0 &&
                                (pUVar15 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                                     (__this_04,(MethodInfo *)0x0),
                                pUVar8 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)))) {
                              UnityEngine_SkinnedMeshRenderer__set_sharedMesh
                                        (pUVar8,pUVar15,(MethodInfo *)0x0);
                              pCVar18 = (Characters_BasicTitanSetup_o *)"TitanHeadCollider";
                              pUVar6 = Characters_BasicTitanSetup__LoadHeadPart
                                                 ("TitanHeadCollider",head,method_00);
                              __this_02 = local_88;
                              Characters_BasicTitanSetup__CopyColliders
                                        (pCVar18,pUVar6,(UnityEngine_Transform_o *)local_88,true,false,in_R9);
                              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                pUVar10 = UnityEngine_Transform__Find
                                                    (pUVar6,"Bone",(MethodInfo *)0x0);
                                pCVar18 = __this_02;
                                pUVar16 = UnityEngine_Transform__Find
                                                    ((UnityEngine_Transform_o *)__this_02,
                                                     "Bone",(MethodInfo *)0x0);
                                Characters_BasicTitanSetup__CopyColliders
                                          (pCVar18,pUVar10,pUVar16,false,false,in_R9);
                                pUVar10 = UnityEngine_Transform__Find
                                                    (pUVar6,"EyesHurtbox",(MethodInfo *)0x0);
                                pCVar18 = __this_02;
                                pUVar16 = UnityEngine_Transform__Find
                                                    ((UnityEngine_Transform_o *)__this_02,
                                                     "EyesHurtbox",(MethodInfo *)0x0);
                                Characters_BasicTitanSetup__CopyColliders
                                          (pCVar18,pUVar10,pUVar16,false,true,in_R9);
                                pUVar10 = UnityEngine_Transform__Find
                                                    (pUVar6,"HairSocket",(MethodInfo *)0x0);
                                pUVar16 = UnityEngine_Transform__Find
                                                    ((UnityEngine_Transform_o *)__this_02,
                                                     "HairSocket",(MethodInfo *)0x0);
                                if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                                   (UVar20 = UnityEngine_Transform__get_localPosition
                                                       (pUVar10,(MethodInfo *)0x0),
                                   pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                                  UnityEngine_Transform__set_localPosition(pUVar16,UVar20,(MethodInfo *)0x0);
                                  UVar22 = UnityEngine_Transform__get_localRotation(pUVar10,(MethodInfo *)0x0)
                                  ;
                                  UnityEngine_Transform__set_localRotation(pUVar16,UVar22,(MethodInfo *)0x0);
                                  UVar20 = UnityEngine_Transform__get_localScale(pUVar10,(MethodInfo *)0x0);
                                  UnityEngine_Transform__set_localScale(pUVar16,UVar20,(MethodInfo *)0x0);
                                  pUVar10 = UnityEngine_Transform__Find
                                                      (pUVar6,"Nose",(MethodInfo *)0x0);
                                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                  }
                                  bVar4 = UnityEngine_Object__op_Inequality
                                                    ((UnityEngine_Object_o *)pUVar10,
                                                     (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                  if (bVar4) {
                                    pUVar6 = UnityEngine_Transform__Find
                                                       (pUVar6,"Nose",(MethodInfo *)0x0);
                                    pUVar13 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                    UnityEngine_GameObject___ctor_691aa10(pUVar13,(MethodInfo *)0x0);
                                    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                                    }
                                    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_05c44dbc;
                                    UnityEngine_GameObject__set_layer
                                              (pUVar13,TypeInfo_Utility_PhysicsLayer->static_fields->
                                                       TitanPushbox,(MethodInfo *)0x0);
                                    pUVar10 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0)
                                    ;
                                    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c44dbc;
                                    UnityEngine_Transform__SetParent
                                              (pUVar10,(UnityEngine_Transform_o *)local_88,(MethodInfo *)0x0);
                                    pUVar10 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0)
                                    ;
                                    if ((pUVar6 == (UnityEngine_Transform_o *)0x0) ||
                                       (UVar20 = UnityEngine_Transform__get_localPosition
                                                           (pUVar6,(MethodInfo *)0x0),
                                       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_05c44dbc;
                                    UnityEngine_Transform__set_localPosition(pUVar10,UVar20,(MethodInfo *)0x0)
                                    ;
                                    pUVar10 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0)
                                    ;
                                    UVar22 = UnityEngine_Transform__get_localRotation
                                                       (pUVar6,(MethodInfo *)0x0);
                                    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c44dbc;
                                    UnityEngine_Transform__set_localRotation(pUVar10,UVar22,(MethodInfo *)0x0)
                                    ;
                                    pUVar10 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0)
                                    ;
                                    UVar20 = UnityEngine_Transform__get_localScale(pUVar6,(MethodInfo *)0x0);
                                    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c44dbc;
                                    UnityEngine_Transform__set_localScale(pUVar10,UVar20,(MethodInfo *)0x0);
                                    __this_05 = UnityEngine_GameObject__AddComponent_object_
                                                          (pUVar13,(MethodInfo_353B6A0 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider
                                                       );
                                    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector3);
                                      Il2CppMethodInitialized_0753e4b6 = '\x01';
                                    }
                                    if (__this_05 == (UnityEngine_BoxCollider_o *)0x0) goto label_05c44dbc;
                                    UnityEngine_BoxCollider__set_center
                                              (__this_05,
                                               (UnityEngine_Vector3_o)
                                               (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).
                                               fields,(MethodInfo *)0x0);
                                    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector3);
                                      Il2CppMethodInitialized_0753e4b7 = '\x01';
                                    }
                                    UnityEngine_BoxCollider__set_size
                                              (__this_05,
                                               (UnityEngine_Vector3_o)
                                               (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields
                                               ,(MethodInfo *)0x0);
                                  }
                                  local_8c = Settings_TitanCustomSet__GetEye(local_60,(MethodInfo *)0x0);
                                  pUVar6 = UnityEngine_Transform__Find
                                                     ((UnityEngine_Transform_o *)local_88,
                                                      "Eyes",(MethodInfo *)0x0);
                                  pMVar17 = extraout_RDX_01;
                                  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor ==
                                      0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                                    pMVar17 = extraout_RDX_02;
                                  }
                                  pUVar10 = Characters_BasicTitanSetup__LoadHeadPart
                                                      ("TitanEyes",head,pMVar17);
                                  if ((((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
                                       (__this_06 = UnityEngine_Component__GetComponent_object_
                                                              ((UnityEngine_Component_o *)pUVar6,
                                                               (MethodInfo_34B0830 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_Component_GetComponent_MeshFilter
                                                       ), pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                                      (__this_07 = UnityEngine_Component__GetComponent_object_
                                                             ((UnityEngine_Component_o *)pUVar10,
                                                              (MethodInfo_34B0830 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponent_MeshFilter
                                                       ), __this_07 != (UnityEngine_MeshFilter_o *)0x0)) &&
                                     (pUVar15 = UnityEngine_MeshFilter__get_sharedMesh
                                                          (__this_07,(MethodInfo *)0x0),
                                     __this_06 != (UnityEngine_MeshFilter_o *)0x0)) {
                                    UnityEngine_MeshFilter__set_sharedMesh
                                              (__this_06,pUVar15,(MethodInfo *)0x0);
                                    __this_08 = UnityEngine_Component__GetComponent_object_
                                                          ((UnityEngine_Component_o *)pUVar6,
                                                           (MethodInfo_34B0830 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer
                                                       );
                                    pSVar12 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
                                    pSVar12 = System_String__Concat_52f0320
                                                        ("Eye",pSVar12,(MethodInfo *)0x0);
                                    if ((TypeInfo_Characters_HumanSetupMaterials->_2).
                                        cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
                                    }
                                    pUVar9 = Characters_HumanSetupMaterials__GetTitanEyeMaterial
                                                       (pSVar12,(MethodInfo *)0x0);
                                    if ((__this_08 != (UnityEngine_MeshRenderer_o *)0x0) &&
                                       (UnityEngine_Renderer__set_material
                                                  ((UnityEngine_Renderer_o *)__this_08,pUVar9,
                                                   (MethodInfo *)0x0),
                                       local_40 != (System_Collections_Generic_List_Material__o *)0x0)) {
                                      System_Collections_Generic_List_object___GetEnumerator
                                                ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                                                 (System_Collections_Generic_List_object__o *)local_40,
                                                 (MethodInfo_395E050 *)
                                                 MethodInfo_System_Collections_Generic_List_Material_GetEnumerator
                                                );
                                      local_48 = local_68;
                                      local_58 = (undefined1  [8])local_78._0_8_;
                                      pSStack_50 = stack0xffffffffffffff90;
                                      local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                                      unique0x10001359 =
                                           (System_Collections_Generic_List_Enumerator_object__o *)local_58;
                                      while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                                               ((
                                                       System_Collections_Generic_List_Enumerator_object__o *)
                                                       local_58,(MethodInfo_4C45C50 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext
                                                       ), pUVar11 = local_48, bVar4) {
                                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0)
                                        {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                        }
                                        bVar4 = UnityEngine_Object__op_Inequality
                                                          (pUVar11,(UnityEngine_Object_o *)0x0,
                                                           (MethodInfo *)0x0);
                                        if (bVar4) {
                                          pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                                                   (pCVar7->fields)._ownedMaterials;
                                          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                                            ThrowNullReferenceException();
                                          }
                                          bVar4 = System_Collections_Generic_HashSet_object___Contains
                                                            (pSVar1,(Il2CppObject *)pUVar11,
                                                             (MethodInfo_4FB3720 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_HashSet_Material_Contains
                                                       );
                                          if (!bVar4) {
                                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor
                                                == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                            }
                                            UnityEngine_Object__Destroy_69214e0(pUVar11,(MethodInfo *)0x0);
                                          }
                                        }
                                      }
                                      System_Collections_Generic_List_Enumerator_object___Dispose
                                                ((System_Collections_Generic_List_Enumerator_object__o *)
                                                 local_58,(MethodInfo_4C45C40 *)
                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
                                                );
                                      __this_09 = UnityEngine_Component__GetComponent_object_
                                                            ((UnityEngine_Component_o *)pCVar7,
                                                             (MethodInfo_34B0830 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter
                                                       );
                                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                      }
                                      bVar4 = UnityEngine_Object__op_Inequality
                                                        ((UnityEngine_Object_o *)__this_09,
                                                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                      if (bVar4) {
                                        if (__this_09 == (Characters_BaseCharacter_o *)0x0) goto label_05c44dbc;
                                        Characters_BaseCharacter__RefreshRenderers
                                                  (__this_09,(MethodInfo *)0x0);
                                      }
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
                }
              }
            }
          }
        }
      }
    }
  }
label_05c44dbc:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$OwnInstance
// il2cpp: UnityEngine_Material_o* Characters_BasicTitanSetup__OwnInstance (Characters_BasicTitanSetup_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5c44e40

UnityEngine_Material_o *
Characters_BasicTitanSetup__OwnInstance
          (Characters_BasicTitanSetup_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Material_o *item;
  
  if (Il2CppMethodInitialized_07547823 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    Il2CppMethodInitialized_07547823 = '\x01';
  }
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    item = UnityEngine_Renderer__get_material(renderer,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                (__this_00,(Il2CppObject *)item,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
      return item;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$OnDestroy
// il2cpp: void Characters_BasicTitanSetup__OnDestroy (Characters_BasicTitanSetup_o* __this, const MethodInfo* method);
// 0x5c450c0
// eh: try 0x5c4517d..0x5c451c4 -> pad 0x5c451eb (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c45207..0x5c4520c -> pad 0x5c4522b cleanup
// eh: try 0x5c4522e..0x5c45238 -> pad 0x5c45240 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c451bd: jmp 0x5c45170
// asm:   0x5c451e9: jmp 0x5c451ef
// asm:   0x5c451eb: jmp 0x5c451ef
// asm:   0x5c451ed: jmp 0x5c451ef
// asm:   0x5c451ef: mov rbx, rax
// asm:   0x5c451f2: cmp edx, 1
// asm:   0x5c451f5: jne 0x5c4522e
// asm:   0x5c451f7: mov rdi, rbx
// asm:   0x5c451fa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c451ff: mov rbx, qword ptr [rax]
// asm:   0x5c45202: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c45207: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4520c: lea rax, [rip + 0x1649255]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose
// asm:   0x5c45213: mov rsi, qword ptr [rax]
// asm:   0x5c45216: mov rdi, rsp
// asm:   0x5c45219: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c4521e: test rbx, rbx
// asm:   0x5c45221: je 0x5c451d8
// asm:   0x5c45223: mov rdi, rbx
// asm:   0x5c45226: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4522b: mov rbx, rax
// asm:   0x5c4522e: lea rdi, [rsp + 0x18]
// asm:   0x5c45233: call 0x2fd9430  ; il2cpp_runtime_helper_02fd9430()
// asm:   0x5c45238: mov rdi, rbx
// asm:   0x5c4523b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c45240: mov rdi, rax
// asm:   0x5c45243: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BasicTitanSetup__OnDestroy(Characters_BasicTitanSetup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_07547824 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547824 = '\x01';
  }
  SStack_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            (&SStack_48,__this_00,
             (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Material_GetEnumerator);
  uStack_30 = 0;
  puStack_28 = (undefined1 *)&SStack_48;
  while( true ) {
    bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (&SStack_48,
                       (MethodInfo_4C456D0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_MoveNext);
    x = SStack_48.fields._current;
    if (!bVar1) break;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (&SStack_48,
             (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose);
  return;
}


// Characters.BasicTitanSetup$$CopyColliders
// il2cpp: void Characters_BasicTitanSetup__CopyColliders (Characters_BasicTitanSetup_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, bool capsule, bool moveTransform, const MethodInfo* method);
// 0x5c44eb0

void Characters_BasicTitanSetup__CopyColliders
               (Characters_BasicTitanSetup_o *__this,UnityEngine_Transform_o *from,UnityEngine_Transform_o *to
               ,bool capsule,bool moveTransform,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_07547825 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    Il2CppMethodInitialized_07547825 = '\x01';
  }
  if (capsule) {
    if (((from == (UnityEngine_Transform_o *)0x0) ||
        (__this_00 = (UnityEngine_Component_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)from,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider),
        to == (UnityEngine_Transform_o *)0x0)) ||
       ((__this_01 = (UnityEngine_Component_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)to,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider),
        __this_00 == (UnityEngine_Component_o *)0x0 ||
        (UVar4 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0),
        __this_01 == (UnityEngine_Component_o *)0x0)))) goto label_05c450b3;
    UnityEngine_CapsuleCollider__set_center
              ((UnityEngine_CapsuleCollider_o *)__this_01,UVar4,(MethodInfo *)0x0);
    fVar3 = UnityEngine_CapsuleCollider__get_radius
                      ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_CapsuleCollider__set_radius
              ((UnityEngine_CapsuleCollider_o *)__this_01,fVar3,(MethodInfo *)0x0);
    fVar3 = UnityEngine_CapsuleCollider__get_height
                      ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_CapsuleCollider__set_height
              ((UnityEngine_CapsuleCollider_o *)__this_01,fVar3,(MethodInfo *)0x0);
  }
  else {
    if ((((from == (UnityEngine_Transform_o *)0x0) ||
         (__this_00 = (UnityEngine_Component_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)from,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_BoxCollider),
         to == (UnityEngine_Transform_o *)0x0)) ||
        (__this_01 = (UnityEngine_Component_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)to,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_BoxCollider),
        __this_00 == (UnityEngine_Component_o *)0x0)) ||
       (UVar4 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Component_o *)0x0)) goto label_05c450b3;
    UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)__this_01,UVar4,(MethodInfo *)0x0);
    UVar4 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)__this_01,UVar4,(MethodInfo *)0x0);
  }
  if (!moveTransform) {
    return;
  }
  pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (UVar4 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localPosition(pUVar1,UVar4,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (value = UnityEngine_Transform__get_localRotation(pUVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localRotation(pUVar1,value,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
         (UVar4 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_localScale(pUVar1,UVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05c450b3:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$.ctor
// il2cpp: void Characters_BasicTitanSetup___ctor (Characters_BasicTitanSetup_o* __this, const MethodInfo* method);
// 0x5c45250

void Characters_BasicTitanSetup___ctor(Characters_BasicTitanSetup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Material__o *__this_00;
  
  if (Il2CppMethodInitialized_07547826 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Material);
    Il2CppMethodInitialized_07547826 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Material);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
  (__this->fields)._ownedMaterials = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ownedMaterials);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanSetup$$.cctor
// il2cpp: void Characters_BasicTitanSetup___cctor (const MethodInfo* method);
// 0x5c452d0

void Characters_BasicTitanSetup___cctor(MethodInfo *method)

{
  Characters_BasicTitanSetup_StaticFields *pCVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_Color255__o *__this_01;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_07547827 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"TitanHeadCollider");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanEyes");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanHead");
    Il2CppMethodInitialized_07547827 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  pCVar1 = TypeInfo_Characters_BasicTitanSetup->static_fields;
  pCVar1->HairPrefabs = __this;
  Il2CppCodeGenWriteBarrier(&pCVar1->HairPrefabs);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pCVar1 = TypeInfo_Characters_BasicTitanSetup->static_fields;
  pCVar1->AllHairs = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->AllHairs);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pCVar1 = TypeInfo_Characters_BasicTitanSetup->static_fields;
  pCVar1->AIHairs = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->AIHairs);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_00,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  pCVar1 = TypeInfo_Characters_BasicTitanSetup->static_fields;
  pCVar1->AIEyes = __this_00;
  Il2CppCodeGenWriteBarrier(&pCVar1->AIEyes);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Color255);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Color255_ctor);
  pCVar1 = TypeInfo_Characters_BasicTitanSetup->static_fields;
  pCVar1->AIHairColors = __this_01;
  Il2CppCodeGenWriteBarrier(&pCVar1->AIHairColors);
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar3 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = "TitanHead";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
    if ((pSVar3->max_length & 0xfffffffe) != 0) {
      pSVar3->m_Items[1] = "TitanHeadCollider";
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
      if (2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[2] = "TitanEyes";
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2);
        pCVar1 = TypeInfo_Characters_BasicTitanSetup->static_fields;
        pCVar1->HeadParts = pSVar3;
        Il2CppCodeGenWriteBarrier(&pCVar1->HeadParts);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


