// Type: Characters.HumanSpecials
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSpecials.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanSpecials.cs
// --------------------------------

// Characters.HumanSpecials$$GetSpecialNames
// il2cpp: System_Collections_Generic_List_string__o* Characters_HumanSpecials__GetSpecialNames (System_String_o* loadout, bool includeShifters, const MethodInfo* method);
// 0x5bf7a20
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bf7b80: cmp byte ptr [rip + 0x194fab8], 0
// asm:   0x5bf7b87: jne 0x5bf7b98
// asm:   0x5bf7bee: jmp 0x5bf7b98
// asm:   0x5bf7ce0: cmp byte ptr [rip + 0x194f958], 0
// asm:   0x5bf7ce7: jne 0x5bf7cf8
// asm:   0x5bf7d4e: jmp 0x5bf7cf8
// asm:   0x5bf7e30: cmp byte ptr [rip + 0x194f808], 0
// asm:   0x5bf7e37: jne 0x5bf7e48
// asm:   0x5bf7e9e: jmp 0x5bf7e48
// asm:   0x5bf7f61: cmp byte ptr [rip + 0x194f6d7], 0
// asm:   0x5bf7f68: jne 0x5bf7f79
// asm:   0x5bf7fce: jmp 0x5bf7f79
// asm:   0x5bf802a: lea rax, [rip + 0x16f16b7]  ; "Stock"
// asm:   0x5bf8031: mov r15, qword ptr [rax]
// asm:   0x5bf8034: cmp byte ptr [rip + 0x194f604], 0
// asm:   0x5bf803b: je 0x5bf805f
// asm:   0x5bf803d: test r13, r13
// asm:   0x5bf8040: jne 0x5bf807b
// asm:   0x5bf8042: jmp 0x5bf826c
// asm:   0x5bf814e: lea rax, [rip + 0x16eb8fb]  ; "None"
// asm:   0x5bf8155: mov rbp, qword ptr [rax]
// asm:   0x5bf8158: cmp byte ptr [rip + 0x194f4e0], 0
// asm:   0x5bf815f: je 0x5bf8183
// asm:   0x5bf8161: test r13, r13
// asm:   0x5bf8164: jne 0x5bf819f
// asm:   0x5bf8166: jmp 0x5bf826c
// asm:   0x5bf8238: jmp 0x5bf80cc

System_Collections_Generic_List_string__o *
Characters_HumanSpecials__GetSpecialNames(System_String_o *loadout,bool includeShifters,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  int iVar9;
  System_Collections_Generic_List_string__o *__this;
  ulong uVar10;
  ulong uVar11;
  
  if (Il2CppMethodInitialized_0754763e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Stock");
    Il2CppMethodInitialized_0754763e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
  }
  pSVar4 = TypeInfo_Characters_HumanSpecials->static_fields->AnySpecials;
  if (pSVar4 == (System_String_array *)0x0) goto label_05bf826c;
  iVar9 = (int)pSVar4->max_length;
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    if (iVar9 < 1) goto label_05bf7bf8;
label_05bf8242:
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    }
    if (Il2CppMethodInitialized_0754763f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
      Il2CppMethodInitialized_0754763f = '\x01';
    }
    goto label_05bf826c;
  }
  if (0 < iVar9) {
    uVar10 = pSVar4->max_length & 0xffffffff;
    uVar11 = 0;
    do {
      if (uVar10 <= uVar11) goto label_05bf823d;
      pSVar5 = pSVar4->m_Items[uVar11];
      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
      }
      if (Il2CppMethodInitialized_0754763f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
        Il2CppMethodInitialized_0754763f = '\x01';
      }
      pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this->fields)._items;
      if (pSVar6 == (System_String_array *)0x0) goto label_05bf826c;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
      }
      uVar11 = uVar11 + 1;
      uVar2 = (uint)pSVar4->max_length;
      uVar10 = (ulong)uVar2;
    } while ((long)uVar11 < (long)(int)uVar2);
  }
label_05bf7bf8:
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar8 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    }
    pSVar4 = TypeInfo_Characters_HumanSpecials->static_fields->BladeSpecials;
    if (pSVar4 == (System_String_array *)0x0) goto label_05bf826c;
    iVar9 = (int)pSVar4->max_length;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
label_05bf7ea0:
      if (0 < iVar9) goto label_05bf8242;
    }
    else if (0 < iVar9) {
      uVar10 = pSVar4->max_length & 0xffffffff;
      uVar11 = 0;
      do {
        if (uVar10 <= uVar11) goto label_05bf823d;
        pSVar5 = pSVar4->m_Items[uVar11];
        if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
        }
        if (Il2CppMethodInitialized_0754763f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
          Il2CppMethodInitialized_0754763f = '\x01';
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) goto label_05bf826c;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        uVar11 = uVar11 + 1;
        uVar2 = (uint)pSVar4->max_length;
        uVar10 = (ulong)uVar2;
      } while ((long)uVar11 < (long)(int)uVar2);
    }
  }
  else {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar8 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
    if (bVar8) {
      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
      }
      pSVar4 = TypeInfo_Characters_HumanSpecials->static_fields->AHSSSpecials;
      if (pSVar4 == (System_String_array *)0x0) goto label_05bf826c;
      iVar9 = (int)pSVar4->max_length;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05bf7ea0;
      if (0 < iVar9) {
        uVar10 = pSVar4->max_length & 0xffffffff;
        uVar11 = 0;
        do {
          if (uVar10 <= uVar11) goto label_05bf823d;
          pSVar5 = pSVar4->m_Items[uVar11];
          if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
          }
          if (Il2CppMethodInitialized_0754763f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add)
            ;
            Il2CppMethodInitialized_0754763f = '\x01';
          }
          pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this->fields)._items;
          if (pSVar6 == (System_String_array *)0x0) goto label_05bf826c;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          }
          uVar11 = uVar11 + 1;
          uVar2 = (uint)pSVar4->max_length;
          uVar10 = (ulong)uVar2;
        } while ((long)uVar11 < (long)(int)uVar2);
      }
    }
  }
  if (includeShifters) {
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    }
    pSVar4 = TypeInfo_Characters_HumanSpecials->static_fields->ShifterSpecials;
    if (pSVar4 == (System_String_array *)0x0) goto label_05bf826c;
    iVar9 = (int)pSVar4->max_length;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar9) goto label_05bf8242;
    }
    else if (0 < iVar9) {
      uVar10 = pSVar4->max_length & 0xffffffff;
      uVar11 = 0;
      do {
        if (uVar10 <= uVar11) {
label_05bf823d:
          ThrowIndexOutOfRangeException();
        }
        pSVar5 = pSVar4->m_Items[uVar11];
        if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
        }
        if (Il2CppMethodInitialized_0754763f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
          Il2CppMethodInitialized_0754763f = '\x01';
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) goto label_05bf826c;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        uVar11 = uVar11 + 1;
        uVar2 = (uint)pSVar4->max_length;
        uVar10 = (ulong)uVar2;
      } while ((long)uVar11 < (long)(int)uVar2);
    }
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar8 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,(MethodInfo *)0x0
                    );
  if (bVar8) {
    pSVar5 = "Stock";
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
      pSVar5 = "Stock";
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
    "Stock" = pSVar5;
    if (Il2CppMethodInitialized_0754763f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
      Il2CppMethodInitialized_0754763f = '\x01';
      pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
    }
    MethodInfo_System_Collections_Generic_List_string_Add = pMVar7;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05bf826c;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 == (System_String_array *)0x0) goto label_05bf826c;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pSVar4->m_Items[(int)uVar2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
      goto label_05bf80bf;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
               (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
    uVar3 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05bf80bf:
    uVar3 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar8 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,(MethodInfo *)0x0);
  if (bVar8) {
label_05bf811d:
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05bf826c;
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)"Escape",
               (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_string_Remove);
  }
  else {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar8 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,(MethodInfo *)0x0);
    if (bVar8) goto label_05bf811d;
  }
  pSVar5 = "None";
  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    pSVar5 = "None";
  }
  pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
  "None" = pSVar5;
  if (Il2CppMethodInitialized_0754763f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    Il2CppMethodInitialized_0754763f = '\x01';
    pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
  }
  MethodInfo_System_Collections_Generic_List_string_Add = pMVar7;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
      }
      return __this;
    }
  }
label_05bf826c:
  ThrowNullReferenceException();
}


// Characters.HumanSpecials$$AddSpecialName
// il2cpp: void Characters_HumanSpecials__AddSpecialName (System_Collections_Generic_List_string__o* specials, System_String_o* special, const MethodInfo* method);
// 0x5bf8280

void Characters_HumanSpecials__AddSpecialName
               (System_Collections_Generic_List_string__o *specials,System_String_o *special,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_0754763f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    Il2CppMethodInitialized_0754763f = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (specials != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(specials->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (specials->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (specials->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (specials->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = special;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)specials,(Il2CppObject *)special,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSpecials$$GetSpecialUseable
// il2cpp: Characters_BaseUseable_o* Characters_HumanSpecials__GetSpecialUseable (Characters_BaseCharacter_o* owner, System_String_o* special, const MethodInfo* method);
// 0x5bf8320
// asm: 118 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bf8821: lea rax, [rip + 0x1684738]  ; TypeInfo_Characters_Spin1Special
// asm:   0x5bf8828: mov rdi, qword ptr [rax]
// asm:   0x5bf882b: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf8830: mov r15, rax
// asm:   0x5bf8833: mov rdi, rax
// asm:   0x5bf8836: mov rsi, r14
// asm:   0x5bf8839: xor edx, edx
// asm:   0x5bf883b: call 0x5c0e540  ; Characters_Spin1Special___ctor()
// asm:   0x5bf8840: jmp 0x5bf87f7
// asm:   0x5bf885d: lea rax, [rip + 0x1684c4c]  ; TypeInfo_Characters_SwitchbackSpecial
// asm:   0x5bf8864: mov rdi, qword ptr [rax]
// asm:   0x5bf8867: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf886c: mov r15, rax
// asm:   0x5bf886f: mov rdi, rax
// asm:   0x5bf8872: mov rsi, r14
// asm:   0x5bf8875: xor edx, edx
// asm:   0x5bf8877: call 0x5c0fa60  ; Characters_SwitchbackSpecial___ctor()
// asm:   0x5bf887c: jmp 0x5bf87f7
// asm:   0x5bf88a0: lea rax, [rip + 0x167db71]  ; TypeInfo_Characters_CarrySpecial
// asm:   0x5bf88a7: mov rdi, qword ptr [rax]
// asm:   0x5bf88aa: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf88af: mov r15, rax
// asm:   0x5bf88b2: mov rdi, rax
// asm:   0x5bf88b5: mov rsi, r14
// asm:   0x5bf88b8: xor edx, edx
// asm:   0x5bf88ba: call 0x5c09be0  ; Characters_CarrySpecial___ctor()
// asm:   0x5bf88bf: jmp 0x5bf87f7
// asm:   0x5bf88e3: lea rax, [rip + 0x168455e]  ; TypeInfo_Characters_SmokeBombSpecial
// asm:   0x5bf88ea: mov rdi, qword ptr [rax]
// asm:   0x5bf88ed: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf88f2: mov r15, rax
// asm:   0x5bf88f5: mov rdi, rax
// asm:   0x5bf88f8: mov rsi, r14
// asm:   0x5bf88fb: xor edx, edx
// asm:   0x5bf88fd: call 0x5c0e0a0  ; Characters_SmokeBombSpecial___ctor()
// asm:   0x5bf8902: jmp 0x5bf87f7
// asm:   0x5bf8926: lea rax, [rip + 0x167dfdb]  ; TypeInfo_Characters_ConfuseSpecial
// asm:   0x5bf892d: mov rdi, qword ptr [rax]
// asm:   0x5bf8930: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf8935: mov r15, rax
// asm:   0x5bf8938: mov rdi, rax
// asm:   0x5bf893b: mov rsi, r14
// asm:   0x5bf893e: xor edx, edx
// asm:   0x5bf8940: call 0x5c0a990  ; Characters_ConfuseSpecial___ctor()
// asm:   0x5bf8945: jmp 0x5bf87f7
// asm:   0x5bf8969: lea rax, [rip + 0x16845f8]  ; TypeInfo_Characters_Spin2Special
// asm:   0x5bf8970: mov rdi, qword ptr [rax]
// asm:   0x5bf8973: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf8978: mov r15, rax
// asm:   0x5bf897b: mov rdi, rax
// asm:   0x5bf897e: mov rsi, r14
// asm:   0x5bf8981: xor edx, edx
// asm:   0x5bf8983: call 0x5c0e8b0  ; Characters_Spin2Special___ctor()
// asm:   0x5bf8988: jmp 0x5bf87f7
// asm:   0x5bf89ac: lea rax, [rip + 0x167f1a5]  ; TypeInfo_Characters_DistractSpecial
// asm:   0x5bf89b3: mov rdi, qword ptr [rax]
// asm:   0x5bf89b6: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf89bb: mov r15, rax
// asm:   0x5bf89be: mov rdi, rax
// asm:   0x5bf89c1: mov rsi, r14
// asm:   0x5bf89c4: xor edx, edx
// asm:   0x5bf89c6: call 0x5c0b150  ; Characters_DistractSpecial___ctor()
// asm:   0x5bf89cb: jmp 0x5bf87f7
// asm:   0x5bf89ef: lea rax, [rip + 0x167d58a]  ; TypeInfo_Characters_BladeThrowSpecial
// asm:   0x5bf89f6: mov rdi, qword ptr [rax]
// asm:   0x5bf89f9: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf89fe: mov r15, rax
// asm:   0x5bf8a01: mov rdi, rax
// asm:   0x5bf8a04: mov rsi, r14
// asm:   0x5bf8a07: xor edx, edx
// asm:   0x5bf8a09: call 0x5c09060  ; Characters_BladeThrowSpecial___ctor()
// asm:   0x5bf8a0e: jmp 0x5bf87f7
// asm:   0x5bf8a32: lea rax, [rip + 0x1684407]  ; TypeInfo_Characters_SmellSpecial
// asm:   0x5bf8a39: mov rdi, qword ptr [rax]
// asm:   0x5bf8a3c: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf8a41: mov r15, rax
// asm:   0x5bf8a44: mov rdi, rax
// asm:   0x5bf8a47: mov rsi, r14
// asm:   0x5bf8a4a: xor edx, edx
// asm:   0x5bf8a4c: call 0x5c0dc70  ; Characters_SmellSpecial___ctor()
// asm:   0x5bf8a51: jmp 0x5bf87f7
// asm:   0x5bf8a76: lea rax, [rip + 0x16842c3]  ; TypeInfo_Characters_ShifterTransformSpecial
// asm:   0x5bf8a7d: mov rdi, qword ptr [rax]
// asm:   0x5bf8a80: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf8a85: mov r15, rax
// asm:   0x5bf8a88: mov rdx, qword ptr [r12]
// asm:   0x5bf8a8c: mov rdi, rax
// asm:   0x5bf8a8f: mov rsi, r14
// asm:   0x5bf8a92: xor ecx, ecx
// asm:   0x5bf8a94: call 0x5c0dac0  ; Characters_ShifterTransformSpecial___ctor()
// asm:   0x5bf8a99: jmp 0x5bf87f7
// asm:   0x5bf8abd: lea rax, [rip + 0x1682814]  ; TypeInfo_Characters_NoneSpecial
// asm:   0x5bf8ac4: mov rdi, qword ptr [rax]
// asm:   0x5bf8ac7: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf8acc: mov r15, rax
// asm:   0x5bf8acf: mov rdi, rax
// asm:   0x5bf8ad2: mov rsi, r14
// asm:   0x5bf8ad5: xor edx, edx
// asm:   0x5bf8ad7: call 0x5c0d7b0  ; Characters_NoneSpecial___ctor()
// asm:   0x5bf8adc: jmp 0x5bf87f7
// asm:   0x5bf8b00: lea rax, [rip + 0x167c409]  ; TypeInfo_Characters_AHSSTwinShot
// asm:   0x5bf8b07: mov rdi, qword ptr [rax]
// asm:   0x5bf8b0a: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf8b0f: mov r15, rax
// asm:   0x5bf8b12: mov rdi, rax
// asm:   0x5bf8b15: mov rsi, r14
// asm:   0x5bf8b18: xor edx, edx
// asm:   0x5bf8b1a: call 0x5c07f00  ; Characters_AHSSTwinShot___ctor()
// asm:   0x5bf8b1f: jmp 0x5bf87f7
// asm:   0x5bf8b43: lea rax, [rip + 0x167e736]  ; TypeInfo_Characters_DanceSpecial
// asm:   0x5bf8b4a: mov rdi, qword ptr [rax]
// asm:   0x5bf8b4d: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5bf8b52: mov r15, rax
// asm:   0x5bf8b55: mov rdi, rax
// asm:   0x5bf8b58: mov rsi, r14
// asm:   0x5bf8b5b: xor edx, edx
// asm:   0x5bf8b5d: call 0x5c0ad60  ; Characters_DanceSpecial___ctor()
// asm:   0x5bf8b62: jmp 0x5bf87f7

Characters_BaseUseable_o *
Characters_HumanSpecials__GetSpecialUseable
          (Characters_BaseCharacter_o *owner,System_String_o *special,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  Characters_Spin3Special_o *__this;
  Characters_StockSpecial_o *__this_00;
  Characters_EscapeSpecial_o *__this_01;
  Characters_PotatoSpecial_o *__this_02;
  Characters_DownStrikeSpecial_o *__this_03;
  Characters_SupplySpecial_o *__this_04;
  Characters_Spin1Special_o *__this_05;
  Characters_SwitchbackSpecial_o *__this_06;
  Characters_CarrySpecial_o *__this_07;
  Characters_SmokeBombSpecial_o *__this_08;
  Characters_ConfuseSpecial_o *__this_09;
  Characters_Spin2Special_o *__this_10;
  Characters_DistractSpecial_o *__this_11;
  Characters_BladeThrowSpecial_o *__this_12;
  Characters_SmellSpecial_o *__this_13;
  Characters_ShifterTransformSpecial_o *__this_14;
  Characters_NoneSpecial_o *__this_15;
  Characters_AHSSTwinShot_o *__this_16;
  Characters_DanceSpecial_o *__this_17;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547640 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSTwinShot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeThrowSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CarrySpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ConfuseSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DanceSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DistractSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_EscapeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_NoneSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_PotatoSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_SmellSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_SmokeBombSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin1Special);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin2Special);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_SupplySpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_SwitchbackSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Smell");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin3");
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin2");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"Distract");
    il2cpp_codegen_initialize_runtime_metadata(&"Confuse");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Potato");
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    il2cpp_codegen_initialize_runtime_metadata(&"DownStrike");
    il2cpp_codegen_initialize_runtime_metadata(&"Stock");
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSTwinShot");
    Il2CppMethodInitialized_07547640 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(special,(MethodInfo *)0x0);
  if (uVar2 < 0x50d88c80) {
    if (uVar2 < 0x132fe373) {
      if (uVar2 < 0x23f06bf) {
        if (uVar2 == 0x3f0398) {
          bVar1 = System_String__op_Equality(special,"Spin1",(MethodInfo *)0x0);
          if (bVar1) {
            __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_Spin1Special);
            Characters_Spin1Special___ctor(__this_05,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this_05;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        if (uVar2 == 0x23f06be) {
          bVar1 = System_String__op_Equality(special,"Spin3",(MethodInfo *)0x0);
          if (bVar1) {
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_Spin3Special);
            Characters_Spin3Special___ctor(__this,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
      }
      else {
        if (uVar2 == 0x33f0851) {
          bVar1 = System_String__op_Equality(special,"Spin2",(MethodInfo *)0x0);
          if (bVar1) {
            __this_10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_Spin2Special);
            Characters_Spin2Special___ctor(__this_10,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this_10;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        if (uVar2 == 0xfb12e57) {
          bVar1 = System_String__op_Equality(special,"Distract",(MethodInfo *)0x0);
          if (bVar1) {
            __this_11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DistractSpecial);
            Characters_DistractSpecial___ctor(__this_11,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this_11;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        if (uVar2 == 0x132fe372) {
          bVar1 = System_String__op_Equality(special,"Potato",(MethodInfo *)0x0);
          if (bVar1) {
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_PotatoSpecial);
            Characters_PotatoSpecial___ctor(__this_02,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this_02;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
      }
    }
    else if (uVar2 < 0x27e47193) {
      if (uVar2 == 0x184b43d0) {
        bVar1 = System_String__op_Equality(special,"Carry",(MethodInfo *)0x0);
        if (bVar1) {
          __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_CarrySpecial);
          Characters_CarrySpecial___ctor(__this_07,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_07;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar2 == 0x27e47192) {
        ppSVar3 = &"Annie";
label_05bf8a5d:
        bVar1 = System_String__op_Equality(special,*ppSVar3,(MethodInfo *)0x0);
        if (bVar1) {
          __this_14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial);
          Characters_ShifterTransformSpecial___ctor(__this_14,owner,*ppSVar3,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_14;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
    }
    else {
      if (uVar2 == 0x2ab69de5) {
        ppSVar3 = &"Armored";
        goto label_05bf8a5d;
      }
      if (uVar2 == 0x304ff7fb) {
        bVar1 = System_String__op_Equality(special,"None",(MethodInfo *)0x0);
        if (bVar1) {
          __this_15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_NoneSpecial);
          Characters_NoneSpecial___ctor(__this_15,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_15;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar2 == 0x50d88c7f) {
        bVar1 = System_String__op_Equality(special,"DownStrike",(MethodInfo *)0x0);
        if (bVar1) {
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial);
          Characters_DownStrikeSpecial___ctor(__this_03,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_03;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
    }
  }
  else if (uVar2 < 0x9d6edc06) {
    if (uVar2 < 0x67c7f536) {
      if (uVar2 == 0x548b671e) {
        bVar1 = System_String__op_Equality(special,"Switchback",(MethodInfo *)0x0);
        if (bVar1) {
          __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_SwitchbackSpecial);
          Characters_SwitchbackSpecial___ctor(__this_06,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_06;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar2 == 0x67c7f535) {
        bVar1 = System_String__op_Equality(special,"Stock",(MethodInfo *)0x0);
        if (bVar1) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_StockSpecial);
          Characters_StockSpecial___ctor(__this_00,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_00;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
    }
    else {
      if (uVar2 == 0x8d87a40b) {
        bVar1 = System_String__op_Equality(special,"BladeThrow",(MethodInfo *)0x0);
        if (bVar1) {
          __this_12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BladeThrowSpecial);
          Characters_BladeThrowSpecial___ctor(__this_12,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_12;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar2 == 0x960fb720) {
        bVar1 = System_String__op_Equality(special,"Smell",(MethodInfo *)0x0);
        if (bVar1) {
          __this_13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_SmellSpecial);
          Characters_SmellSpecial___ctor(__this_13,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_13;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar2 == 0x9d6edc05) {
        ppSVar3 = &"Eren";
        goto label_05bf8a5d;
      }
    }
  }
  else if (uVar2 < 0xb7bb7227) {
    if (uVar2 == 0x9fc581fa) {
      bVar1 = System_String__op_Equality(special,"SmokeBomb",(MethodInfo *)0x0);
      if (bVar1) {
        __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_SmokeBombSpecial);
        Characters_SmokeBombSpecial___ctor(__this_08,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_08;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar2 == 0xa499f21e) {
      bVar1 = System_String__op_Equality(special,"Confuse",(MethodInfo *)0x0);
      if (bVar1) {
        __this_09 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ConfuseSpecial);
        Characters_ConfuseSpecial___ctor(__this_09,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_09;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar2 == 0xb7bb7226) {
      bVar1 = System_String__op_Equality(special,"Escape",(MethodInfo *)0x0);
      if (bVar1) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_EscapeSpecial);
        Characters_EscapeSpecial___ctor(__this_01,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_01;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
  }
  else {
    if (uVar2 == 0xc7ef102c) {
      bVar1 = System_String__op_Equality(special,"AHSSTwinShot",(MethodInfo *)0x0);
      if (bVar1) {
        __this_16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AHSSTwinShot);
        Characters_AHSSTwinShot___ctor(__this_16,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_16;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar2 == 0xca0fab3c) {
      bVar1 = System_String__op_Equality(special,"Dance",(MethodInfo *)0x0);
      if (bVar1) {
        __this_17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DanceSpecial);
        Characters_DanceSpecial___ctor(__this_17,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_17;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar2 == 0xdba7f44e) {
      bVar1 = System_String__op_Equality(special,"Supply",(MethodInfo *)0x0);
      if (bVar1) {
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_SupplySpecial);
        Characters_SupplySpecial___ctor(__this_04,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_04;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
  }
  return (Characters_BaseUseable_o *)0x0;
}


// Characters.HumanSpecials$$GetSpecialIcon
// il2cpp: System_String_o* Characters_HumanSpecials__GetSpecialIcon (System_String_o* special, const MethodInfo* method);
// 0x5bf8b70

System_String_o * Characters_HumanSpecials__GetSpecialIcon(System_String_o *special,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547641 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547641 = '\x01';
  }
  if (special == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Replace_5304550
                     (special," ","",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(pSVar1,"SpecialIcon",(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSpecials$$.ctor
// il2cpp: void Characters_HumanSpecials___ctor (Characters_HumanSpecials_o* __this, const MethodInfo* method);
// 0x5bf8bf0

void Characters_HumanSpecials___ctor(Characters_HumanSpecials_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSpecials$$.cctor
// il2cpp: void Characters_HumanSpecials___cctor (const MethodInfo* method);
// 0x5bf8c00

void Characters_HumanSpecials___cctor(MethodInfo *method)

{
  Characters_HumanSpecials_StaticFields *pCVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07547642 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Smell");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin3");
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin2");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"Distract");
    il2cpp_codegen_initialize_runtime_metadata(&"Confuse");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Potato");
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    il2cpp_codegen_initialize_runtime_metadata(&"DownStrike");
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSTwinShot");
    Il2CppMethodInitialized_07547642 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
  if (pSVar2 == (System_String_array *)0x0) goto label_05bf9083;
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "Potato";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "Escape";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "Dance";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        if ((pSVar2->max_length & 0xfffffffc) != 0) {
          pSVar2->m_Items[3] = "Distract";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4] = "Smell";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
            if (5 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[5] = "Supply";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5);
              if (6 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[6] = "SmokeBomb";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6);
                if ((pSVar2->max_length & 0xfffffff8) != 0) {
                  pSVar2->m_Items[7] = "Carry";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7);
                  if (8 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[8] = "Switchback";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 8);
                    if (9 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[9] = "Confuse";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 9);
                      TypeInfo_Characters_HumanSpecials->static_fields->AnySpecials = pSVar2;
                      Il2CppCodeGenWriteBarrier
                                (&TypeInfo_Characters_HumanSpecials->static_fields->AnySpecials);
                      pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
                      if (pSVar2 == (System_String_array *)0x0) {
label_05bf9083:
                        ThrowNullReferenceException();
                      }
                      if ((int)pSVar2->max_length != 0) {
                        pSVar2->m_Items[0] = "AHSSTwinShot";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                        pCVar1 = TypeInfo_Characters_HumanSpecials->static_fields;
                        pCVar1->AHSSSpecials = pSVar2;
                        Il2CppCodeGenWriteBarrier(&pCVar1->AHSSSpecials);
                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
                        if (pSVar2 == (System_String_array *)0x0) goto label_05bf9083;
                        if ((int)pSVar2->max_length != 0) {
                          pSVar2->m_Items[0] = "DownStrike";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                          if ((pSVar2->max_length & 0xfffffffe) != 0) {
                            pSVar2->m_Items[1] = "Spin1";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                            if (2 < (uint)pSVar2->max_length) {
                              pSVar2->m_Items[2] = "Spin2";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
                              if ((pSVar2->max_length & 0xfffffffc) != 0) {
                                pSVar2->m_Items[3] = "Spin3";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
                                if (4 < (uint)pSVar2->max_length) {
                                  pSVar2->m_Items[4] = "BladeThrow";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
                                  pCVar1 = TypeInfo_Characters_HumanSpecials->static_fields;
                                  pCVar1->BladeSpecials = pSVar2;
                                  Il2CppCodeGenWriteBarrier(&pCVar1->BladeSpecials);
                                  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                  if (pSVar2 == (System_String_array *)0x0) goto label_05bf9083;
                                  if ((int)pSVar2->max_length != 0) {
                                    pSVar2->m_Items[0] = "Eren";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                    if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                      pSVar2->m_Items[1] = "Annie";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                      pCVar1 = TypeInfo_Characters_HumanSpecials->static_fields;
                                      pCVar1->ShifterSpecials = pSVar2;
                                      Il2CppCodeGenWriteBarrier(&pCVar1->ShifterSpecials);
                                      pCVar1 = TypeInfo_Characters_HumanSpecials->static_fields;
                                      pCVar1->DefaultSpecial = "Switchback";
                                      Il2CppCodeGenWriteBarrier(&pCVar1->DefaultSpecial);
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
  ThrowIndexOutOfRangeException();
}


