// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgProfileEntitlementCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5903c00

void Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$<HasRole>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___HasRole_b__0 (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, System_String_o* role, const MethodInfo* method);
// 0x5903c10

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___HasRole_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *__this,
               System_String_o *role,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30(role,(__this->fields).required,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel (System_String_o* id, const MethodInfo* method);
// 0x58ff180

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
          (System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07545620 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"label");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_07545620 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("PresetGuilds",id,in_RDX);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"label",(pSVar2->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        return pSVar3;
      }
    }
    ThrowNullReferenceException();
  }
  return id;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel (System_String_o* id, const MethodInfo* method);
// 0x58ff660

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07545621 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"label");
    Il2CppMethodInitialized_07545621 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",id,in_RDX);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"label",(pSVar2->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        return pSVar3;
      }
    }
    ThrowNullReferenceException();
  }
  return id;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon (System_String_o* id, const MethodInfo* method);
// 0x58ff730

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07545622 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Roles/");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_07545622 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",id,in_RDX);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"id",(pSVar2->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        pSVar3 = System_String__Concat_52f0320("UI/Icons/Roles/",pSVar3,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (SimpleJSONFixed_JSONNode_o* requested, const MethodInfo* method);
// 0x58ff820
// eh: try 0x58ffabf..0x58ffd40 -> pad 0x58ffd64 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58ffd7c..0x58ffd81 -> pad 0x58ffd86 cleanup
// eh: try 0x58ffd89..0x58ffd93 -> pad 0x58ffd9b catch (...) [compiler noexcept guard]
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ffa17: jmp 0x58ff966
// asm:   0x58ffa5c: lea r12, [rip + 0x1979995]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58ffa63: lea r15, [rip + 0x19f7266]  ; "id"
// asm:   0x58ffa6a: lea r14, [rip + 0x1991cb7]  ; MethodInfo_System_Collections_Generic_HashSet_string_Contains
// asm:   0x58ffa71: jmp 0x58ffa8e
// asm:   0x58ffa80: mov rbx, qword ptr [rsp + 8]
// asm:   0x58ffa85: test rbx, rbx
// asm:   0x58ffa88: je 0x58ffd1d
// asm:   0x58ffaae: nop 
// asm:   0x58ffcce: nop 
// asm:   0x58ffd40: mov rdi, r14
// asm:   0x58ffd43: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58ffd48: jmp 0x58ffd64
// asm:   0x58ffd4a: jmp 0x58ffd64
// asm:   0x58ffd4c: jmp 0x58ffd64
// asm:   0x58ffd4e: jmp 0x58ffd64
// asm:   0x58ffd50: jmp 0x58ffd64
// asm:   0x58ffd52: jmp 0x58ffd64
// asm:   0x58ffd54: jmp 0x58ffd64
// asm:   0x58ffd56: jmp 0x58ffd64
// asm:   0x58ffd58: jmp 0x58ffd64
// asm:   0x58ffd5a: jmp 0x58ffd64
// asm:   0x58ffd5c: jmp 0x58ffd64
// asm:   0x58ffd5e: jmp 0x58ffd64
// asm:   0x58ffd60: jmp 0x58ffd64
// asm:   0x58ffd62: jmp 0x58ffd64
// asm:   0x58ffd64: mov rbx, rax
// asm:   0x58ffd67: cmp edx, 1
// asm:   0x58ffd6a: jne 0x58ffd89
// asm:   0x58ffd6c: mov rdi, rbx
// asm:   0x58ffd6f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58ffd74: mov r14, qword ptr [rax]
// asm:   0x58ffd77: mov qword ptr [rsp + 0x18], r14
// asm:   0x58ffd7c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58ffd81: jmp 0x58ffc99
// asm:   0x58ffd86: mov rbx, rax
// asm:   0x58ffd89: lea rdi, [rsp + 0x18]
// asm:   0x58ffd8e: call 0x2fd0dd0  ; il2cpp_runtime_helper_02fd0dd0()
// asm:   0x58ffd93: mov rdi, rbx
// asm:   0x58ffd96: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58ffd9b: mov rdi, rax
// asm:   0x58ffd9e: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
          (SimpleJSONFixed_JSONNode_o *requested,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *group;
  bool bVar4;
  char cVar5;
  SimpleJSONFixed_JSONArray_o *pSVar6;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  System_String_o *id;
  ulong uVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar12;
  MethodInfo *method_01;
  long lVar13;
  Il2CppObject *local_50;
  SimpleJSONFixed_JSONArray_o *local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07545623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_07545623 = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(requested,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return pSVar6;
  }
  if (requested != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar12 = (requested->klass->vtable)._27_get_Children.method;
    method_00 = (MethodInfo *)(*(requested->klass->vtable)._27_get_Children.methodPtr)(requested,pMVar12);
    __this = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
                       ((System_Collections_Generic_IEnumerable_JSONNode__o *)method_00,pMVar12);
    pSVar7 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    else {
      pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar7,"Badges",(pSVar7->klass->vtable)._7_get_Item.method);
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return pSVar6;
    }
    if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pIVar8 = (Il2CppObject *)
                 (*(pSVar7->klass->vtable)._27_get_Children.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable)._27_get_Children.method),
       pIVar8 != (Il2CppObject *)0x0)) {
      pIVar2 = pIVar8->klass;
      uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
      local_48 = pSVar6;
      if (uVar11 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar3->interfaceType + lVar13)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
            goto label_058ffa2f;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar11 * 0x10 != lVar13);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058ffa2f:
      pIVar8 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      local_40 = 0;
      local_38 = &local_50;
      do {
        local_50 = pIVar8;
        if (pIVar8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar8->klass;
        uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar13) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
              goto label_058ffae3;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar11 * 0x10 != lVar13);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058ffae3:
        cVar5 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
        pSVar6 = local_48;
        pIVar8 = local_50;
        if (cVar5 == '\0') {
          if (local_50 == (Il2CppObject *)0x0) {
            return local_48;
          }
          pIVar2 = local_50->klass;
          uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar11 == 0) goto label_058ffcdf;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar13 = 0;
          goto label_058ffcd0;
        }
        if (local_50 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_50->klass;
        uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                 ((long)&pIVar3->interfaceType + lVar13) ==
                TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
              goto label_058ffb63;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar11 * 0x10 != lVar13);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_50,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                           );
label_058ffb63:
        pIVar8 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
        if (pIVar8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar10 = (long *)(*pIVar8->klass->vtable[7].methodPtr)
                                    (pIVar8,"id",pIVar8->klass->vtable[7].method);
        if (plVar10 == (long *)0x0) {
          ThrowNullReferenceException();
        }
        id = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)id,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        group = "Badges";
        pIVar8 = local_50;
        if (bVar4) {
          pMVar12 = extraout_RDX;
          if (Il2CppMethodInitialized_07545631 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
            Il2CppMethodInitialized_07545631 = '\x01';
            pMVar12 = extraout_RDX_00;
          }
          pSVar7 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,pMVar12);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pMVar12 = (MethodInfo *)0x0;
          bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pIVar8 = local_50;
          if (((bVar4) &&
              (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_5802a00
                                 (pSVar7,pMVar12), pIVar8 = local_50, bVar4)) &&
             (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains(local_48,id,method_01),
             pIVar8 = local_50, !bVar4)) {
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(id,(MethodInfo *)0x0);
            if (local_48 == (SimpleJSONFixed_JSONArray_o *)0x0) {
              ThrowNullReferenceException();
            }
            (*(local_48->klass->vtable)._21_Add.methodPtr)
                      (local_48,pSVar7,(local_48->klass->vtable)._21_Add.method);
            pIVar8 = local_50;
          }
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
  while (lVar13 = lVar13 + 0x10, uVar11 * 0x10 != lVar13) {
label_058ffcd0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
      goto label_058ffcfd;
    }
  }
label_058ffcdf:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(local_50,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058ffcfd:
  (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
  return pSVar6;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (SimpleJSONFixed_JSONNode_o* requested, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x5900680
// eh: try 0x59008ff..0x5900b22 -> pad 0x5900b46 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5900b5e..0x5900b63 -> pad 0x5900b68 cleanup
// eh: try 0x5900b6b..0x5900b75 -> pad 0x5900b7d catch (...) [compiler noexcept guard]
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x590082e: nop 
// asm:   0x5900861: jmp 0x59007c7
// asm:   0x59008a3: lea r12, [rip + 0x1978b4e]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x59008aa: lea r15, [rip + 0x19f641f]  ; "id"
// asm:   0x59008b1: lea r14, [rip + 0x1990e70]  ; MethodInfo_System_Collections_Generic_HashSet_string_Contains
// asm:   0x59008b8: jmp 0x59008cd
// asm:   0x59008c0: mov rbx, qword ptr [rsp]
// asm:   0x59008c4: test rbx, rbx
// asm:   0x59008c7: je 0x5900aff
// asm:   0x59008ed: nop dword ptr [rax]
// asm:   0x5900b22: mov rdi, rbp
// asm:   0x5900b25: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5900b2a: jmp 0x5900b46
// asm:   0x5900b2c: jmp 0x5900b46
// asm:   0x5900b2e: jmp 0x5900b46
// asm:   0x5900b30: jmp 0x5900b46
// asm:   0x5900b32: jmp 0x5900b46
// asm:   0x5900b34: jmp 0x5900b46
// asm:   0x5900b36: jmp 0x5900b46
// asm:   0x5900b38: jmp 0x5900b46
// asm:   0x5900b3a: jmp 0x5900b46
// asm:   0x5900b3c: jmp 0x5900b46
// asm:   0x5900b3e: jmp 0x5900b46
// asm:   0x5900b40: jmp 0x5900b46
// asm:   0x5900b42: jmp 0x5900b46
// asm:   0x5900b44: jmp 0x5900b46
// asm:   0x5900b46: mov rbx, rax
// asm:   0x5900b49: cmp edx, 1
// asm:   0x5900b4c: jne 0x5900b6b
// asm:   0x5900b4e: mov rdi, rbx
// asm:   0x5900b51: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5900b56: mov rbp, qword ptr [rax]
// asm:   0x5900b59: mov qword ptr [rsp + 0x18], rbp
// asm:   0x5900b5e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5900b63: jmp 0x5900a81
// asm:   0x5900b68: mov rbx, rax
// asm:   0x5900b6b: lea rdi, [rsp + 0x18]
// asm:   0x5900b70: call 0x2fd0e60  ; il2cpp_runtime_helper_02fd0e60()
// asm:   0x5900b75: mov rdi, rbx
// asm:   0x5900b78: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5900b7d: mov rdi, rax
// asm:   0x5900b80: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_5800680
          (SimpleJSONFixed_JSONNode_o *requested,System_Collections_Generic_IEnumerable_string__o *roles,
          MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  char cVar5;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *item;
  long *plVar9;
  System_String_o *value;
  ulong uVar10;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  long lVar11;
  Il2CppObject *local_58;
  SimpleJSONFixed_JSONArray_o *local_50;
  System_Collections_Generic_IEnumerable_string__o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  local_48 = roles;
  if (Il2CppMethodInitialized_07545624 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_07545624 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  local_50 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(local_50,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(requested,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return local_50;
  }
  if (requested != (SimpleJSONFixed_JSONNode_o *)0x0) {
    method_03 = (requested->klass->vtable)._27_get_Children.method;
    method_00 = (MethodInfo *)(*(requested->klass->vtable)._27_get_Children.methodPtr)(requested,method_03);
    __this = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
                       ((System_Collections_Generic_IEnumerable_JSONNode__o *)method_00,method_03);
    pSVar6 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    else {
      pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar6,"Badges",(pSVar6->klass->vtable)._7_get_Item.method);
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return local_50;
    }
    if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pIVar7 = (Il2CppObject *)
                 (*(pSVar6->klass->vtable)._27_get_Children.methodPtr)
                           (pSVar6,(pSVar6->klass->vtable)._27_get_Children.method),
       pIVar7 != (Il2CppObject *)0x0)) {
      pIVar2 = pIVar7->klass;
      uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar3->interfaceType + lVar11)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
            goto label_05900879;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05900879:
      pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
      local_40 = 0;
      local_38 = (undefined1 *)&local_58;
      do {
        local_58 = pIVar7;
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar7->klass;
        uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar11) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
              goto label_05900923;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05900923:
        cVar5 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        pIVar7 = local_58;
        if (cVar5 == '\0') {
          if (local_58 == (Il2CppObject *)0x0) {
            return local_50;
          }
          pIVar2 = local_58->klass;
          uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar10 == 0) goto label_05900abf;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar11 = 0;
          goto label_05900ab0;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                 ((long)&pIVar3->interfaceType + lVar11) ==
                TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
              goto label_059009a3;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                           );
label_059009a3:
        item = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        if (item == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar9 = (long *)(*item->klass->vtable[7].methodPtr)
                                   (item,"id",item->klass->vtable[7].method);
        if (plVar9 == (long *)0x0) {
          ThrowNullReferenceException();
        }
        value = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)value,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        pIVar7 = local_58;
        if (((bVar4) &&
            (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed_5800b90
                               ((SimpleJSONFixed_JSONNode_o *)item,local_48,method_01), pIVar7 = local_58,
            bVar4)) &&
           (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains(local_50,value,method_02),
           pIVar7 = local_58, !bVar4)) {
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(value,(MethodInfo *)0x0);
          if (local_50 == (SimpleJSONFixed_JSONArray_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(local_50->klass->vtable)._21_Add.methodPtr)
                    (local_50,pSVar6,(local_50->klass->vtable)._21_Add.method);
          pIVar7 = local_58;
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
label_05900ab0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
      goto label_05900add;
    }
  }
label_05900abf:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(local_58,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05900add:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  return local_50;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$OrderedBadgeIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds (System_Collections_Generic_IEnumerable_string__o* requested, const MethodInfo* method);
// 0x5900f50
// eh: try 0x590127f..0x59014df -> pad 0x59014ec (+12 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x590151a..0x590151f -> pad 0x5901524 cleanup
// eh: try 0x5901527..0x5901531 -> pad 0x5901539 catch (...) [compiler noexcept guard]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x590117f: nop 
// asm:   0x59011be: jmp 0x5901092
// asm:   0x590120f: jmp 0x5901122
// asm:   0x5901251: lea r13, [rip + 0x19781a0]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5901258: lea r15, [rip + 0x19f5a71]  ; "id"
// asm:   0x590125f: lea rbp, [rip + 0x19904c2]  ; MethodInfo_System_Collections_Generic_HashSet_string_Contains
// asm:   0x5901266: jmp 0x5901297
// asm:   0x590128a: mov rbx, qword ptr [rsp]
// asm:   0x590128e: test rbx, rbx
// asm:   0x5901291: je 0x59014c1
// asm:   0x590145d: nop dword ptr [rax]
// asm:   0x59014e4: mov rdi, rbp
// asm:   0x59014e7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59014ec: jmp 0x5901502
// asm:   0x59014ee: jmp 0x5901502
// asm:   0x59014f0: jmp 0x5901502
// asm:   0x59014f2: jmp 0x5901502
// asm:   0x59014f4: jmp 0x5901502
// asm:   0x59014f6: jmp 0x5901502
// asm:   0x59014f8: jmp 0x5901502
// asm:   0x59014fa: jmp 0x5901502
// asm:   0x59014fc: jmp 0x5901502
// asm:   0x59014fe: jmp 0x5901502
// asm:   0x5901500: jmp 0x5901502
// asm:   0x5901502: mov rbx, rax
// asm:   0x5901505: cmp edx, 1
// asm:   0x5901508: jne 0x5901527
// asm:   0x590150a: mov rdi, rbx
// asm:   0x590150d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5901512: mov rbp, qword ptr [rax]
// asm:   0x5901515: mov qword ptr [rsp + 8], rbp
// asm:   0x590151a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x590151f: jmp 0x590142e
// asm:   0x5901524: mov rbx, rax
// asm:   0x5901527: lea rdi, [rsp + 8]
// asm:   0x590152c: call 0x2fd0ef0  ; il2cpp_runtime_helper_02fd0ef0()
// asm:   0x5901531: mov rdi, rbx
// asm:   0x5901534: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5901539: mov rdi, rax
// asm:   0x590153c: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
          (System_Collections_Generic_IEnumerable_string__o *requested,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  char cVar7;
  System_Collections_Generic_HashSet_string__o *__this;
  MethodInfo *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_array *pSVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *pIVar11;
  VirtualInvokeData *pVVar12;
  long *plVar13;
  System_String_o *item;
  ulong uVar14;
  MethodInfo *pMVar15;
  long lVar16;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545625 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_07545625 = '\x01';
  }
  pMVar15 = MethodInfo_System_Array_Empty_string;
  local_48 = (Il2CppObject *)0x0;
  if (requested == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar10 = *(Il2CppClass **)((long)(pMVar15->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar10->_2).bitflags1;
    }
    else {
      pIVar10 = *(Il2CppClass **)
                 ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar10->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
      uVar3 = (pIVar10->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = *(uint32_t *)((long)pIVar10 + 0xe4);
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar10);
      pIVar10 = (pMVar15->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar10->_2).bitflags1;
    }
    else {
      pIVar10 = (pMVar15->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar10->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    return *(System_String_array **)pIVar10->static_fields;
  }
  __this = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet_5801550(requested,method);
  __this_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  pMVar15 = __this_00;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(pMVar15);
  if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Badges",(pSVar8->klass->vtable)._7_get_Item.method);
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (__this_00 != (MethodInfo *)0x0) {
      pSVar9 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar9;
    }
  }
  else if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
          (pIVar11 = (Il2CppObject *)
                     (*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method),
          pIVar11 != (Il2CppObject *)0x0)) {
    pIVar10 = pIVar11->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar5 = (pIVar10->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar5->interfaceType + lVar16) ==
            TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
          pVVar12 = (VirtualInvokeData *)&pIVar10->vtable[*(int *)((long)&pIVar5->offset + lVar16)].methodPtr;
          goto label_05901227;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar14 * 0x10 != lVar16);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05901227:
    pIVar11 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
    local_40 = 0;
    local_38 = (undefined1 *)&local_48;
joined_r0x0590124b:
    do {
      local_48 = pIVar11;
      if (pIVar11 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar10 = pIVar11->klass;
      uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar5 = (pIVar10->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar16) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar12 = (VirtualInvokeData *)
                      &pIVar10->vtable[*(int *)((long)&pIVar5->offset + lVar16)].methodPtr;
            goto label_059012f3;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar14 * 0x10 != lVar16);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059012f3:
      cVar7 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
      pIVar11 = local_48;
      if (cVar7 == '\0') {
        if (local_48 == (Il2CppObject *)0x0) goto label_05901496;
        pIVar10 = local_48->klass;
        uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
        if (uVar14 == 0) goto label_0590146f;
        pIVar5 = (pIVar10->_1).interfaceOffsets;
        lVar16 = 0;
        goto label_05901460;
      }
      if (local_48 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar10 = local_48->klass;
      uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar5 = (pIVar10->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar5->interfaceType + lVar16)
              == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar12 = (VirtualInvokeData *)
                      &pIVar10->vtable[*(int *)((long)&pIVar5->offset + lVar16)].methodPtr;
            goto label_05901373;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar14 * 0x10 != lVar16);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0)
      ;
label_05901373:
      pIVar11 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
      if (pIVar11 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      plVar13 = (long *)(*pIVar11->klass->vtable[7].methodPtr)
                                  (pIVar11,"id",pIVar11->klass->vtable[7].method);
      if (plVar13 == (long *)0x0) {
        ThrowNullReferenceException();
      }
      item = (System_String_o *)(**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)item,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
      pIVar11 = local_48;
    } while (!bVar6);
    if (__this_00 != (MethodInfo *)0x0) {
      piVar1 = (int32_t *)((long)&__this_00->name + 4);
      *piVar1 = *piVar1 + 1;
      pSVar9 = ((System_Collections_Generic_List_string__Fields *)&__this_00->invoker_method)->_items;
      if (pSVar9 != (System_String_array *)0x0) {
        uVar4 = *(uint *)&__this_00->name;
        if (uVar4 < (uint)pSVar9->max_length) {
          *(uint *)&__this_00->name = uVar4 + 1;
          pSVar9->m_Items[(int)uVar4] = item;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar4);
          pIVar11 = local_48;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
          pIVar11 = local_48;
        }
        goto joined_r0x0590124b;
      }
    }
    ThrowNullReferenceException();
  }
  goto label_059014df;
  while (lVar16 = lVar16 + 0x10, uVar14 * 0x10 != lVar16) {
label_05901460:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar12 = (VirtualInvokeData *)&pIVar10->vtable[*(int *)((long)&pIVar5->offset + lVar16)].methodPtr;
      goto label_0590148d;
    }
  }
label_0590146f:
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0590148d:
  (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
label_05901496:
  if (__this_00 != (MethodInfo *)0x0) {
    pSVar9 = (System_String_array *)
             System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return pSVar9;
  }
label_059014df:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuild
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild (System_String_o* id, const MethodInfo* method);
// 0x5901940

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *group;
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONString_o *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545626 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_07545626 = '\x01';
    in_RDX = extraout_RDX;
  }
  group = "PresetGuilds";
  if (Il2CppMethodInitialized_07545631 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545631 = '\x01';
    in_RDX = extraout_RDX_00;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,in_RDX);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_5802a00(pSVar2,method_00);
    if (bVar1) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
      SimpleJSONFixed_JSONString___ctor(__this,id,(MethodInfo *)0x0);
      return (SimpleJSONFixed_JSONNode_o *)__this;
    }
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsSupporter
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter (const MethodInfo* method);
// 0x5901a40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5901a68: jmp 0x5901aed

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *method_00;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545627 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"active_patron");
    il2cpp_codegen_initialize_runtime_metadata(&"patronStatus");
    Il2CppMethodInitialized_07545627 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  else {
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  if (bVar2) {
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue
                          ("patronStatus",in_RSI);
    bVar2 = System_String__Equals_52ffe30
                      ((System_String_o *)method_00,"active_patron",5,(MethodInfo *)0x0);
    if (bVar2) {
      bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(method_00);
      return bVar2;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuilds
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuilds (const MethodInfo* method);
// 0x5901d80

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuilds(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_07545628 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions("PresetGuilds",in_RSI)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisiblePresetGuilds
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds (const MethodInfo* method);
// 0x59022c0

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_07545629 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions("PresetGuilds",in_RSI)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (const MethodInfo* method);
// 0x59027d0

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_58027d0(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754562a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    Il2CppMethodInitialized_0754562a = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions("Badges",in_RSI)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleBadges
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges (const MethodInfo* method);
// 0x5902800

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754562b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    Il2CppMethodInitialized_0754562b = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions("Badges",in_RSI)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildIdForLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildIdForLabel (System_String_o* label, const MethodInfo* method);
// 0x5902830

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildIdForLabel
          (System_String_o *label,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_0754562c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_0754562c = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel
                     ("PresetGuilds",label,in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedOptions
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions (System_String_o* group, const MethodInfo* method);
// 0x5901db0
// eh: try 0x5901fbf..0x5902259 -> pad 0x5902266 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5902294..0x5902299 -> pad 0x590229e cleanup
// eh: try 0x59022a1..0x59022ab -> pad 0x59022b3 catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5901f0e: nop 
// asm:   0x5901f47: jmp 0x5901ea7
// asm:   0x5901f8c: lea rbp, [rip + 0x1977465]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5901f93: lea r15, [rip + 0x196f036]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x5901f9a: lea r12, [rip + 0x19f4d2f]  ; "id"
// asm:   0x5901fa1: jmp 0x5901fe8
// asm:   0x5901fda: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x5901fdf: test rbx, rbx
// asm:   0x5901fe2: je 0x5902240
// asm:   0x59021ee: nop 
// asm:   0x590225e: mov rdi, rbp
// asm:   0x5902261: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5902266: jmp 0x590227c
// asm:   0x5902268: jmp 0x590227c
// asm:   0x590226a: jmp 0x590227c
// asm:   0x590226c: jmp 0x590227c
// asm:   0x590226e: jmp 0x590227c
// asm:   0x5902270: jmp 0x590227c
// asm:   0x5902272: jmp 0x590227c
// asm:   0x5902274: jmp 0x590227c
// asm:   0x5902276: jmp 0x590227c
// asm:   0x5902278: jmp 0x590227c
// asm:   0x590227a: jmp 0x590227c
// asm:   0x590227c: mov r14, rax
// asm:   0x590227f: cmp edx, 1
// asm:   0x5902282: jne 0x59022a1
// asm:   0x5902284: mov rdi, r14
// asm:   0x5902287: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x590228c: mov rbp, qword ptr [rax]
// asm:   0x590228f: mov qword ptr [rsp + 0x50], rbp
// asm:   0x5902294: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5902299: jmp 0x59021be
// asm:   0x590229e: mov r14, rax
// asm:   0x59022a1: lea rdi, [rsp + 0x50]
// asm:   0x59022a6: call 0x2fd0f80  ; il2cpp_runtime_helper_02fd0f80()
// asm:   0x59022ab: mov rdi, r14
// asm:   0x59022ae: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59022b3: mov rdi, rax
// asm:   0x59022b6: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
          (System_String_o *group,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  uint32_t uVar3;
  uint uVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *pGVar7;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o item;
  bool bVar8;
  char cVar9;
  MethodInfo *__this;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  Il2CppObject *pIVar11;
  VirtualInvokeData *pVVar12;
  Il2CppObject *item_00;
  long *plVar13;
  ulong uVar14;
  MethodInfo *pMVar15;
  long lVar16;
  MethodInfo *in_R8;
  Il2CppObject *local_90;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o local_88;
  undefined8 local_68;
  Il2CppObject **local_60;
  System_String_o *local_58;
  System_String_o *pSStack_50;
  System_String_o *local_48;
  bool bStack_40;
  undefined7 uStack_3f;
  
  if (Il2CppMethodInitialized_0754562d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgProfileEntitlementOption);
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_0754562d = '\x01';
  }
  local_90 = (Il2CppObject *)0x0;
  __this = (MethodInfo *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfileEntitlementOption);
  pMVar15 = __this;
  System_Collections_Generic_List_AottgProfileEntitlementOption____ctor
            ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,
             (MethodInfo_51C7280 *)
             MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_ctor);
  pSVar10 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(pMVar15);
  if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,group,(pSVar10->klass->vtable)._7_get_Item.method);
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
  }
  if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pIVar11 = (Il2CppObject *)
                (*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                          (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method),
     pIVar11 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar5 = pIVar11->klass;
  uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
  if (uVar14 != 0) {
    pIVar6 = (pIVar5->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar6->interfaceType + lVar16) ==
          TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
        pVVar12 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
        goto label_05901f5f;
      }
      lVar16 = lVar16 + 0x10;
    } while (uVar14 * 0x10 != lVar16);
  }
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05901f5f:
  pIVar11 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
  local_68 = 0;
  local_60 = &local_90;
joined_r0x05901f86:
  do {
    local_90 = pIVar11;
    if (pIVar11 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = pIVar11->klass;
    uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar6->interfaceType + lVar16) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar12 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
          goto label_05902043;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar14 * 0x10 != lVar16);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05902043:
    cVar9 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
    pIVar11 = local_90;
    if (cVar9 == '\0') {
      if (local_90 == (Il2CppObject *)0x0) {
        return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
      }
      pIVar5 = local_90->klass;
      uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar14 == 0) goto label_059021ff;
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      lVar16 = 0;
      goto label_059021f0;
    }
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = local_90->klass;
    uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar6->interfaceType + lVar16) ==
            TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
          pVVar12 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
          goto label_059020c3;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar14 * 0x10 != lVar16);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_90,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_059020c3:
    item_00 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
    if (item_00 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    plVar13 = (long *)(*item_00->klass->vtable[7].methodPtr)
                                (item_00,"id",item_00->klass->vtable[7].method);
    if (plVar13 == (long *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar15 = *(MethodInfo **)(*plVar13 + 0x1d0);
    (**(code **)(*plVar13 + 0x1c8))(plVar13);
    bVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_5802a00
                      ((SimpleJSONFixed_JSONNode_o *)item_00,pMVar15);
    pIVar11 = local_90;
  } while (!bVar8);
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
            (&local_88,group,(SimpleJSONFixed_JSONNode_o *)item_00,true,in_R8);
  pMVar15 = MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_Add;
  local_48 = local_88.fields.Icon;
  bStack_40 = local_88.fields.Enabled;
  uStack_3f = local_88.fields._25_7_;
  local_58 = local_88.fields.Id;
  pSStack_50 = local_88.fields.Label;
  if (__this != (MethodInfo *)0x0) {
    piVar1 = (int32_t *)((long)&__this->name + 4);
    *piVar1 = *piVar1 + 1;
    pGVar7 = ((System_Collections_Generic_List_AottgProfileEntitlementOption__Fields *)&__this->invoker_method
             )->_items;
    if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *)0x0) {
      uVar4 = *(uint *)&__this->name;
      if (uVar4 < (uint)pGVar7->max_length) {
        *(uint *)&__this->name = uVar4 + 1;
        ppSVar2 = &pGVar7->m_Items[(int)uVar4].fields.Icon;
        *ppSVar2 = local_88.fields.Icon;
        ppSVar2[1] = (System_String_o *)local_88.fields._24_8_;
        pGVar7->m_Items[(int)uVar4].fields.Id = local_88.fields.Id;
        pGVar7->m_Items[(int)uVar4].fields.Label = local_88.fields.Label;
        Il2CppCodeGenWriteBarrier((void **)(pGVar7->m_Items + (int)uVar4));
        pIVar11 = local_90;
      }
      else {
        item.fields.Label = local_88.fields.Label;
        item.fields.Id = local_88.fields.Id;
        item.fields.Icon = local_88.fields.Icon;
        item.fields.Enabled = local_88.fields.Enabled;
        item.fields._25_7_ = local_88.fields._25_7_;
        System_Collections_Generic_List_AottgProfileEntitlementOption___AddWithResize
                  ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,item,
                   (MethodInfo_51C7C30 *)pMVar15->klass->rgctx_data[0xe].method);
        pIVar11 = local_90;
      }
      goto joined_r0x05901f86;
    }
  }
  ThrowNullReferenceException();
  while (lVar16 = lVar16 + 0x10, uVar14 * 0x10 != lVar16) {
label_059021f0:
    if (*(System_IDisposable_c **)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar12 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
      goto label_0590221d;
    }
  }
label_059021ff:
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0590221d:
  (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
  return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleOptions
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions (System_String_o* group, const MethodInfo* method);
// 0x59022f0
// eh: try 0x59024ef..0x590276f -> pad 0x590277c (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59027a4..0x59027a9 -> pad 0x59027ae cleanup
// eh: try 0x59027b1..0x59027bb -> pad 0x59027c3 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5902487: jmp 0x59023db
// asm:   0x59024cc: lea r15, [rip + 0x1976f25]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x59024d3: lea r12, [rip + 0x196eaf6]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x59024da: jmp 0x5902518
// asm:   0x590250a: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x590250f: test rbx, rbx
// asm:   0x5902512: je 0x5902765
// asm:   0x59026d0: jmp 0x5902611
// asm:   0x5902774: mov rdi, rbp
// asm:   0x5902777: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x590277c: jmp 0x590278c
// asm:   0x590277e: jmp 0x590278c
// asm:   0x5902780: jmp 0x590278c
// asm:   0x5902782: jmp 0x590278c
// asm:   0x5902784: jmp 0x590278c
// asm:   0x5902786: jmp 0x590278c
// asm:   0x5902788: jmp 0x590278c
// asm:   0x590278a: jmp 0x590278c
// asm:   0x590278c: mov r14, rax
// asm:   0x590278f: cmp edx, 1
// asm:   0x5902792: jne 0x59027b1
// asm:   0x5902794: mov rdi, r14
// asm:   0x5902797: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x590279c: mov rbp, qword ptr [rax]
// asm:   0x590279f: mov qword ptr [rsp + 0x50], rbp
// asm:   0x59027a4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59027a9: jmp 0x59026d7
// asm:   0x59027ae: mov r14, rax
// asm:   0x59027b1: lea rdi, [rsp + 0x50]
// asm:   0x59027b6: call 0x2fd1010  ; il2cpp_runtime_helper_02fd1010()
// asm:   0x59027bb: mov rdi, r14
// asm:   0x59027be: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59027c3: mov rdi, rax
// asm:   0x59027c6: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
          (System_String_o *group,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  uint32_t uVar3;
  uint uVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *pGVar7;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o item;
  bool bVar8;
  char cVar9;
  bool bVar10;
  MethodInfo *__this;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  Il2CppObject *pIVar12;
  VirtualInvokeData *pVVar13;
  Il2CppObject *item_00;
  ulong uVar14;
  MethodInfo *pMVar15;
  long lVar16;
  MethodInfo *in_R8;
  Il2CppObject *local_90;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o local_88;
  undefined8 local_68;
  Il2CppObject **local_60;
  System_String_o *local_58;
  System_String_o *pSStack_50;
  System_String_o *local_48;
  bool bStack_40;
  undefined7 uStack_3f;
  
  if (Il2CppMethodInitialized_0754562e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgProfileEntitlementOption);
    Il2CppMethodInitialized_0754562e = '\x01';
  }
  local_90 = (Il2CppObject *)0x0;
  __this = (MethodInfo *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfileEntitlementOption);
  pMVar15 = __this;
  System_Collections_Generic_List_AottgProfileEntitlementOption____ctor
            ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,
             (MethodInfo_51C7280 *)
             MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_ctor);
  pSVar11 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(pMVar15);
  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar11 = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar11 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar11,group,(pSVar11->klass->vtable)._7_get_Item.method);
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
  }
  if ((pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pIVar12 = (Il2CppObject *)
                (*(pSVar11->klass->vtable)._27_get_Children.methodPtr)
                          (pSVar11,(pSVar11->klass->vtable)._27_get_Children.method),
     pIVar12 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar5 = pIVar12->klass;
  uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
  if (uVar14 != 0) {
    pIVar6 = (pIVar5->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar6->interfaceType + lVar16) ==
          TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
        pVVar13 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
        goto label_0590249f;
      }
      lVar16 = lVar16 + 0x10;
    } while (uVar14 * 0x10 != lVar16);
  }
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_0590249f:
  pIVar12 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
  local_68 = 0;
  local_60 = &local_90;
joined_r0x059024c6:
  do {
    local_90 = pIVar12;
    if (pIVar12 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = pIVar12->klass;
    uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar6->interfaceType + lVar16) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar13 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
          goto label_05902573;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar14 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05902573:
    cVar9 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
    pIVar12 = local_90;
    if (cVar9 == '\0') {
      if (local_90 == (Il2CppObject *)0x0) {
        return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
      }
      pIVar5 = local_90->klass;
      uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar14 == 0) goto label_0590271f;
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      lVar16 = 0;
      goto label_05902710;
    }
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = local_90->klass;
    uVar14 = (ulong)(pIVar5->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar6->interfaceType + lVar16) ==
            TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
          pVVar13 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
          goto label_059025f3;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar14 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_90,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_059025f3:
    pMVar15 = pVVar13->method;
    item_00 = (*pVVar13->methodPtr)(pIVar12,pMVar15);
    bVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_5802a00
                      ((SimpleJSONFixed_JSONNode_o *)item_00,pMVar15);
  } while ((!bVar8) &&
          ((bVar10 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement
                               ((SimpleJSONFixed_JSONNode_o *)item_00,pMVar15), pIVar12 = local_90, !bVar10 ||
           (bVar10 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement
                               ((SimpleJSONFixed_JSONNode_o *)item_00,pMVar15), pIVar12 = local_90, bVar10))))
  ;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
            (&local_88,group,(SimpleJSONFixed_JSONNode_o *)item_00,bVar8,in_R8);
  pMVar15 = MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_Add;
  local_48 = local_88.fields.Icon;
  bStack_40 = local_88.fields.Enabled;
  uStack_3f = local_88.fields._25_7_;
  local_58 = local_88.fields.Id;
  pSStack_50 = local_88.fields.Label;
  if (__this != (MethodInfo *)0x0) {
    piVar1 = (int32_t *)((long)&__this->name + 4);
    *piVar1 = *piVar1 + 1;
    pGVar7 = ((System_Collections_Generic_List_AottgProfileEntitlementOption__Fields *)&__this->invoker_method
             )->_items;
    if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *)0x0) {
      uVar4 = *(uint *)&__this->name;
      if (uVar4 < (uint)pGVar7->max_length) {
        *(uint *)&__this->name = uVar4 + 1;
        ppSVar2 = &pGVar7->m_Items[(int)uVar4].fields.Icon;
        *ppSVar2 = local_88.fields.Icon;
        ppSVar2[1] = (System_String_o *)local_88.fields._24_8_;
        pGVar7->m_Items[(int)uVar4].fields.Id = local_88.fields.Id;
        pGVar7->m_Items[(int)uVar4].fields.Label = local_88.fields.Label;
        Il2CppCodeGenWriteBarrier((void **)(pGVar7->m_Items + (int)uVar4));
        pIVar12 = local_90;
      }
      else {
        item.fields.Label = local_88.fields.Label;
        item.fields.Id = local_88.fields.Id;
        item.fields.Icon = local_88.fields.Icon;
        item.fields.Enabled = local_88.fields.Enabled;
        item.fields._25_7_ = local_88.fields._25_7_;
        System_Collections_Generic_List_AottgProfileEntitlementOption___AddWithResize
                  ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,item,
                   (MethodInfo_51C7C30 *)pMVar15->klass->rgctx_data[0xe].method);
        pIVar12 = local_90;
      }
      goto joined_r0x059024c6;
    }
  }
  ThrowNullReferenceException();
  while (lVar16 = lVar16 + 0x10, uVar14 * 0x10 != lVar16) {
label_05902710:
    if (*(System_IDisposable_c **)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar13 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
      goto label_0590273d;
    }
  }
label_0590271f:
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0590273d:
  (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
  return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Option
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option (System_String_o* group, SimpleJSONFixed_JSONNode_o* item, bool enabled, const MethodInfo* method);
// 0x5902aa0

Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
          (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *__return_storage_ptr__,
          System_String_o *group,SimpleJSONFixed_JSONNode_o *item,bool enabled,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754562f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Roles/");
    il2cpp_codegen_initialize_runtime_metadata(&"label");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_0754562f = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(item->klass->vtable)._7_get_Item.methodPtr)
                       (item,"id",(item->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      str1 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      pSVar2 = (*(item->klass->vtable)._7_get_Item.methodPtr)
                         (item,"label",(item->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        bVar1 = System_String__op_Equality(group,"Badges",(MethodInfo *)0x0);
        if (bVar1) {
          pSVar4 = System_String__Concat_52f0320("UI/Icons/Roles/",str1,(MethodInfo *)0x0);
        }
        else {
          pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
        (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
        *(undefined8 *)&(__return_storage_ptr__->fields).Enabled = 0;
        (__return_storage_ptr__->fields).Id = str1;
        Il2CppCodeGenWriteBarrier((void **)__return_storage_ptr__);
        (__return_storage_ptr__->fields).Label = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).Label);
        (__return_storage_ptr__->fields).Icon = pSVar4;
        Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).Icon);
        (__return_storage_ptr__->fields).Enabled = enabled;
        return __return_storage_ptr__;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdForLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel (System_String_o* group, System_String_o* label, const MethodInfo* method);
// 0x5902870
// eh: try 0x5902924..0x5902949 -> pad 0x59029a5 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59029bc..0x59029c1 -> pad 0x59029e2 cleanup
// eh: try 0x59029e5..0x59029ed -> pad 0x59029f5 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59029a3: jmp 0x59029a5
// asm:   0x59029a5: mov rbx, rax
// asm:   0x59029a8: cmp edx, 1
// asm:   0x59029ab: jne 0x59029e5
// asm:   0x59029ad: mov rdi, rbx
// asm:   0x59029b0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59029b5: mov rbx, qword ptr [rax]
// asm:   0x59029b8: mov qword ptr [rsp], rbx
// asm:   0x59029bc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59029c1: lea rax, [rip + 0x198ac78]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose
// asm:   0x59029c8: mov rsi, qword ptr [rax]
// asm:   0x59029cb: lea rdi, [rsp + 0x10]
// asm:   0x59029d0: call 0x4d24f80  ; System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose()
// asm:   0x59029d5: test rbx, rbx
// asm:   0x59029d8: je 0x5902977
// asm:   0x59029da: mov rdi, rbx
// asm:   0x59029dd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59029e2: mov rbx, rax
// asm:   0x59029e5: mov rdi, rsp
// asm:   0x59029e8: call 0x2fd10a0  ; il2cpp_runtime_helper_02fd10a0()
// asm:   0x59029ed: mov rdi, rbx
// asm:   0x59029f0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59029f5: mov rdi, rax
// asm:   0x59029f8: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel
          (System_String_o *group,System_String_o *label,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  System_String_o *pSStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  method_00 = (MethodInfo *)label;
  if (Il2CppMethodInitialized_07545630 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
    Il2CppMethodInitialized_07545630 = '\x01';
  }
  uStack_38 = 0;
  uStack_30 = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  pSStack_40 = (System_String_o *)0x0;
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  __this = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions(group,method_00);
  if (__this == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_AottgProfileEntitlementOption___GetEnumerator
            (&SStack_58,__this,
             (MethodInfo_51C8C80 *)
             MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___MoveNext
                      (&SStack_58,
                       (MethodInfo_4C24F90 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext
                      );
    pIVar1 = SStack_58.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                (&SStack_58,
                 (MethodInfo_4C24F80 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    bVar2 = System_String__Equals_52ffe30(pSStack_40,label,5,(MethodInfo *)0x0);
  } while (!bVar2);
  System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
            (&SStack_58,
             (MethodInfo_4C24F80 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
  return (System_String_o *)pIVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed (System_String_o* group, System_String_o* id, const MethodInfo* method);
// 0x59002c0

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed
               (System_String_o *group,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545631 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545631 = '\x01';
    method = extraout_RDX;
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_5802a00(a,method_00);
    return bVar1;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x5902a00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5902a72: jmp 0x5902a99

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_5802a00
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545632 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545632 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(item,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    }
    else {
      bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    }
    if ((bVar1) &&
       (bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed(item,method_00), bVar1)) {
      bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed(item,method_00);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleWhenLocked
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x5902c20

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement(item,method);
  if (bVar1) {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement(item,method);
    return !bVar1;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Find
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find (System_String_o* group, System_String_o* id, const MethodInfo* method);
// 0x58ff250
// eh: try 0x58ff44f..0x58ff56f -> pad 0x58ff584 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58ff5a0..0x58ff5a5 -> pad 0x58ff635 cleanup
// eh: try 0x58ff638..0x58ff642 -> pad 0x58ff64a catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ff3b8: jmp 0x58ff312
// asm:   0x58ff43d: nop dword ptr [rax]
// asm:   0x58ff556: jmp 0x58ff616
// asm:   0x58ff574: jmp 0x58ff584
// asm:   0x58ff576: jmp 0x58ff584
// asm:   0x58ff578: jmp 0x58ff584
// asm:   0x58ff57a: jmp 0x58ff584
// asm:   0x58ff57c: jmp 0x58ff584
// asm:   0x58ff57e: jmp 0x58ff584
// asm:   0x58ff580: jmp 0x58ff584
// asm:   0x58ff582: jmp 0x58ff584
// asm:   0x58ff584: mov rbx, rax
// asm:   0x58ff587: cmp edx, 1
// asm:   0x58ff58a: jne 0x58ff638
// asm:   0x58ff590: mov rdi, rbx
// asm:   0x58ff593: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58ff598: mov r14, qword ptr [rax]
// asm:   0x58ff59b: mov qword ptr [rsp + 8], r14
// asm:   0x58ff5a0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58ff616: test r14, r14
// asm:   0x58ff619: jne 0x58ff62d
// asm:   0x58ff62d: mov rdi, r14
// asm:   0x58ff630: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58ff635: mov rbx, rax
// asm:   0x58ff638: lea rdi, [rsp + 8]
// asm:   0x58ff63d: call 0x2fd10d0  ; il2cpp_runtime_helper_02fd10d0()
// asm:   0x58ff642: mov rdi, rbx
// asm:   0x58ff645: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58ff64a: mov rdi, rax
// asm:   0x58ff64d: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find
          (System_String_o *group,System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppObject *__this;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  System_String_o *a;
  ulong uVar9;
  MethodInfo *method_00;
  long lVar10;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545633 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_07545633 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  method_00 = (MethodInfo *)id;
  bVar4 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  if (!bVar4) {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    else {
      pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,group,(pSVar5->klass->vtable)._7_get_Item.method);
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pIVar6 = (Il2CppObject *)0x0;
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pIVar6 = (Il2CppObject *)
                   (*(pSVar5->klass->vtable)._27_get_Children.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._27_get_Children.method),
         pIVar6 == (Il2CppObject *)0x0)) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar6->klass;
      uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar3->interfaceType + lVar10)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar7 = (VirtualInvokeData *)&pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar10)].methodPtr;
            goto label_058ff3d0;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 != lVar10);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058ff3d0:
      local_48 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      local_40 = 0;
      local_38 = (undefined1 *)&local_48;
      do {
        pIVar6 = local_48;
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_48->klass;
        uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar9 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar10) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = (VirtualInvokeData *)
                       &pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar10)].methodPtr;
              goto label_058ff473;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar9 * 0x10 != lVar10);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058ff473:
        bVar4 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
        pIVar6 = local_48;
        if (!bVar4) {
          pIVar6 = (Il2CppObject *)0x0;
          if (local_48 == (Il2CppObject *)0x0) {
            return (SimpleJSONFixed_JSONNode_o *)0x0;
          }
          goto label_058ff5b0;
        }
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_48->klass;
        uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar9 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                 ((long)&pIVar3->interfaceType + lVar10) ==
                TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar7 = (VirtualInvokeData *)
                       &pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar10)].methodPtr;
              goto label_058ff4f3;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar9 * 0x10 != lVar10);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                           );
label_058ff4f3:
        pIVar6 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar8 = (long *)(*pIVar6->klass->vtable[7].methodPtr)
                                   (pIVar6,"id",pIVar6->klass->vtable[7].method);
        if (plVar8 == (long *)0x0) {
          ThrowNullReferenceException();
        }
        a = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        bVar4 = System_String__Equals_52ffe30(a,id,5,(MethodInfo *)0x0);
      } while (!bVar4);
      if (local_48 != (Il2CppObject *)0x0) {
label_058ff5b0:
        __this = local_48;
        pIVar2 = local_48->klass;
        uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar9 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar10) ==
                TypeInfo_System_IDisposable) {
              pVVar7 = (VirtualInvokeData *)
                       &pIVar2->vtable[*(int *)((long)&pIVar3->offset + lVar10)].methodPtr;
              goto label_058ff60d;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar9 * 0x10 != lVar10);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058ff60d:
        (*pVVar7->methodPtr)(__this,pVVar7->method);
      }
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)pIVar6;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x5902c90
// eh: try 0x5902eff..0x59030cd -> pad 0x59030e6 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59030fe..0x5903103 -> pad 0x5903108 cleanup
// eh: try 0x590310b..0x5903115 -> pad 0x590311d catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5902e59: nop dword ptr [rax]
// asm:   0x5902eed: nop dword ptr [rax]
// asm:   0x5902fe4: jmp 0x5903056
// asm:   0x5903056: test r14, r14
// asm:   0x5903059: jne 0x59030d2
// asm:   0x59030b9: jmp 0x5902e0a
// asm:   0x59030d2: mov rdi, r14
// asm:   0x59030d5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59030da: jmp 0x59030e6
// asm:   0x59030dc: jmp 0x59030e6
// asm:   0x59030de: jmp 0x59030e6
// asm:   0x59030e0: jmp 0x59030e6
// asm:   0x59030e2: jmp 0x59030e6
// asm:   0x59030e4: jmp 0x59030e6
// asm:   0x59030e6: mov rbx, rax
// asm:   0x59030e9: cmp edx, 1
// asm:   0x59030ec: jne 0x590310b
// asm:   0x59030ee: mov rdi, rbx
// asm:   0x59030f1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59030f6: mov r14, qword ptr [rax]
// asm:   0x59030f9: mov qword ptr [rsp + 8], r14
// asm:   0x59030fe: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5903103: jmp 0x5902fe9
// asm:   0x5903108: mov rbx, rax
// asm:   0x590310b: lea rdi, [rsp + 8]
// asm:   0x5903110: call 0x2fd1160  ; il2cpp_runtime_helper_02fd1160()
// asm:   0x5903115: mov rdi, rbx
// asm:   0x5903118: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x590311d: mov rdi, rax
// asm:   0x5903120: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  byte bVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  bool bVar5;
  int32_t iVar6;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_array *roles;
  Il2CppClass *pIVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredRoles");
    Il2CppMethodInitialized_07545634 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059030cd;
  a = (*(item->klass->vtable)._7_get_Item.methodPtr)
                (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return true;
  }
  if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059030cd;
  iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
  if (iVar6 == 0) {
    return true;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  roles = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  pMVar3 = MethodInfo_System_Array_Empty_string;
  if (roles == (System_String_array *)0x0) {
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar7 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
      if (((pIVar7->_2).bitflags1 & 1) == 0) goto label_0590308a;
label_05902de4:
      if ((pIVar7->_2).cctor_finished_or_no_cctor != 0) goto label_05902df1;
label_0590309f:
      il2cpp_codegen_runtime_class_init(pIVar7);
      pIVar7 = (pMVar3->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar7->_2).bitflags1;
    }
    else {
      pIVar7 = *(Il2CppClass **)
                ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      if (((pIVar7->_2).bitflags1 & 1) != 0) goto label_05902de4;
label_0590308a:
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
      if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) goto label_0590309f;
label_05902df1:
      pIVar7 = (pMVar3->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar7->_2).bitflags1;
    }
    if ((bVar1 & 1) == 0) {
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    roles = *(System_String_array **)pIVar7->static_fields;
  }
  pIVar8 = (Il2CppObject *)
           (*(a->klass->vtable)._27_get_Children.methodPtr)(a,(a->klass->vtable)._27_get_Children.method);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar7 = pIVar8->klass;
    uVar10 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
          pVVar9 = pIVar7->vtable + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_05902e91;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05902e91:
    local_48 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
    local_40 = 0;
    local_38 = (undefined1 *)&local_48;
    do {
      pIVar8 = local_48;
      if (local_48 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = local_48->klass;
      uVar10 = (ulong)(pIVar7->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pIVar7->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar11) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar7->vtable + *(int *)((long)&pIVar2->offset + lVar11);
            goto label_05902f23;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05902f23:
      bVar4 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      pIVar8 = local_48;
      if (!bVar4) {
        bVar4 = false;
        if (local_48 == (Il2CppObject *)0x0) {
          return false;
        }
        goto label_05902ff5;
      }
      if (local_48 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = local_48->klass;
      uVar10 = (ulong)(pIVar7->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pIVar7->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar2->interfaceType + lVar11)
              == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar9 = pIVar7->vtable + *(int *)((long)&pIVar2->offset + lVar11);
            goto label_05902fa3;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_05902fa3:
      pIVar8 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      if (pIVar8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      auVar12 = (*pIVar8->klass->vtable[9].methodPtr)(pIVar8,pIVar8->klass->vtable[9].method);
      bVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
                        ((System_Collections_Generic_IEnumerable_string__o *)roles,auVar12._0_8_,auVar12._8_8_
                        );
    } while (!bVar5);
    if (local_48 != (Il2CppObject *)0x0) {
label_05902ff5:
      pIVar8 = local_48;
      pIVar7 = local_48->klass;
      uVar10 = (ulong)(pIVar7->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pIVar7->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable
             ) {
            pVVar9 = pIVar7->vtable + *(int *)((long)&pIVar2->offset + lVar11);
            goto label_0590304d;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0)
      ;
label_0590304d:
      (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
    }
    return bVar4;
  }
label_059030cd:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed (SimpleJSONFixed_JSONNode_o* item, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x5900b90
// eh: try 0x5900d6f..0x5900eec -> pad 0x5900f05 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5900f1d..0x5900f22 -> pad 0x5900f27 cleanup
// eh: try 0x5900f2a..0x5900f34 -> pad 0x5900f3c catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5900d5d: nop dword ptr [rax]
// asm:   0x5900e4b: mov rbx, qword ptr [rsp]
// asm:   0x5900e4f: test rbx, rbx
// asm:   0x5900e52: jne 0x5900e65
// asm:   0x5900e54: jmp 0x5900ec6
// asm:   0x5900ec6: test r14, r14
// asm:   0x5900ec9: jne 0x5900ef1
// asm:   0x5900ef1: mov rdi, r14
// asm:   0x5900ef4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5900ef9: jmp 0x5900f05
// asm:   0x5900efb: jmp 0x5900f05
// asm:   0x5900efd: jmp 0x5900f05
// asm:   0x5900eff: jmp 0x5900f05
// asm:   0x5900f01: jmp 0x5900f05
// asm:   0x5900f03: jmp 0x5900f05
// asm:   0x5900f05: mov rbx, rax
// asm:   0x5900f08: cmp edx, 1
// asm:   0x5900f0b: jne 0x5900f2a
// asm:   0x5900f0d: mov rdi, rbx
// asm:   0x5900f10: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5900f15: mov r14, qword ptr [rax]
// asm:   0x5900f18: mov qword ptr [rsp + 8], r14
// asm:   0x5900f1d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5900f22: jmp 0x5900e59
// asm:   0x5900f27: mov rbx, rax
// asm:   0x5900f2a: lea rdi, [rsp + 8]
// asm:   0x5900f2f: call 0x2fd11f0  ; il2cpp_runtime_helper_02fd11f0()
// asm:   0x5900f34: mov rdi, rbx
// asm:   0x5900f37: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5900f3c: mov rdi, rax
// asm:   0x5900f3f: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed_5800b90
               (SimpleJSONFixed_JSONNode_o *item,System_Collections_Generic_IEnumerable_string__o *roles,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  SimpleJSONFixed_JSONNode_o *a;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545635 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredRoles");
    Il2CppMethodInitialized_07545635 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05900eec:
    ThrowNullReferenceException();
  }
  a = (*(item->klass->vtable)._7_get_Item.methodPtr)
                (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  bVar4 = true;
  if (!bVar3) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05900eec;
    iVar5 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    if (iVar5 != 0) {
      pIVar6 = (Il2CppObject *)
               (*(a->klass->vtable)._27_get_Children.methodPtr)(a,(a->klass->vtable)._27_get_Children.method);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05900eec;
      pIVar1 = pIVar6->klass;
      uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar2->interfaceType + lVar9)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
            goto label_05900d01;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05900d01:
      local_48 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      local_38 = (undefined1 *)&local_48;
      local_40 = 0;
      do {
        pIVar6 = local_48;
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = local_48->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
              goto label_05900d93;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05900d93:
        bVar4 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
        pIVar6 = local_48;
        if (!bVar4) {
          bVar4 = false;
          break;
        }
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = local_48->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar2->interfaceType + lVar9)
                == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
              goto label_05900e13;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                           );
label_05900e13:
        pIVar6 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        auVar10 = (*pIVar6->klass->vtable[9].methodPtr)(pIVar6,pIVar6->klass->vtable[9].method);
        bVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
                          (roles,auVar10._0_8_,auVar10._8_8_);
        pIVar6 = local_48;
      } while (!bVar3);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar1 = pIVar6->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        local_48 = pIVar6;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar9) ==
                (Il2CppClass *)TypeInfo_System_IDisposable) {
              pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
              goto label_05900ebd;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0)
        ;
label_05900ebd:
        (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      }
    }
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x5903130
// eh: try 0x590336f..0x590351c -> pad 0x590353b (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5903553..0x5903558 -> pad 0x590355d cleanup
// eh: try 0x5903560..0x590356a -> pad 0x5903572 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59032b9: nop dword ptr [rax]
// asm:   0x590335d: nop dword ptr [rax]
// asm:   0x5903479: mov rbx, qword ptr [rsp]
// asm:   0x590347d: test rbx, rbx
// asm:   0x5903480: jne 0x5903493
// asm:   0x5903482: jmp 0x59034f6
// asm:   0x59034b9: nop dword ptr [rax]
// asm:   0x59034f6: test r14, r14
// asm:   0x59034f9: jne 0x5903521
// asm:   0x5903521: mov rdi, r14
// asm:   0x5903524: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5903529: jmp 0x590353b
// asm:   0x590352b: jmp 0x590353b
// asm:   0x590352d: jmp 0x590353b
// asm:   0x590352f: jmp 0x590353b
// asm:   0x5903531: jmp 0x590353b
// asm:   0x5903533: jmp 0x590353b
// asm:   0x5903535: jmp 0x590353b
// asm:   0x5903537: jmp 0x590353b
// asm:   0x5903539: jmp 0x590353b
// asm:   0x590353b: mov rbx, rax
// asm:   0x590353e: cmp edx, 1
// asm:   0x5903541: jne 0x5903560
// asm:   0x5903543: mov rdi, rbx
// asm:   0x5903546: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x590354b: mov r14, qword ptr [rax]
// asm:   0x590354e: mov qword ptr [rsp + 8], r14
// asm:   0x5903553: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5903558: jmp 0x5903487
// asm:   0x590355d: mov rbx, rax
// asm:   0x5903560: lea rdi, [rsp + 8]
// asm:   0x5903565: call 0x2fd1280  ; il2cpp_runtime_helper_02fd1280()
// asm:   0x590356a: mov rdi, rbx
// asm:   0x590356d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5903572: mov rdi, rax
// asm:   0x5903575: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  MethodInfo *pMVar10;
  ulong uVar11;
  long lVar12;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545636 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredPatreonTierIds");
    il2cpp_codegen_initialize_runtime_metadata(&"active_patron");
    il2cpp_codegen_initialize_runtime_metadata(&"patronStatus");
    il2cpp_codegen_initialize_runtime_metadata(&"*");
    Il2CppMethodInitialized_07545636 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_0590351c:
    ThrowNullReferenceException();
  }
  a = (*(item->klass->vtable)._7_get_Item.methodPtr)
                (item,"requiredPatreonTierIds",(item->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  bVar4 = true;
  if (!bVar3) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0590351c;
    pMVar10 = (a->klass->vtable)._11_get_Count.method;
    iVar5 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,pMVar10);
    if (iVar5 != 0) {
      pSVar6 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue
                         ("patronStatus",pMVar10);
      bVar4 = false;
      bVar3 = System_String__Equals_52ffe30(pSVar6,"active_patron",5,(MethodInfo *)0x0);
      if (bVar3) {
        pIVar7 = (Il2CppObject *)
                 (*(a->klass->vtable)._27_get_Children.methodPtr)
                           (a,(a->klass->vtable)._27_get_Children.method);
        if (pIVar7 == (Il2CppObject *)0x0) goto label_0590351c;
        pIVar1 = pIVar7->klass;
        uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)
                 ((long)&pIVar2->interfaceType + lVar12) ==
                TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
              pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
              goto label_059032f1;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar11 * 0x10 != lVar12);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_059032f1:
        local_48 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        local_38 = (undefined1 *)&local_48;
        local_40 = 0;
        do {
          pIVar7 = local_48;
          if (local_48 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar1 = local_48->klass;
          uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
          if (uVar11 != 0) {
            pIVar2 = (pIVar1->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar12) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
                goto label_05903393;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar11 * 0x10 != lVar12);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05903393:
          bVar4 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
          pIVar7 = local_48;
          if (!bVar4) {
            bVar4 = false;
            break;
          }
          if (local_48 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar1 = local_48->klass;
          uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
          if (uVar11 != 0) {
            pIVar2 = (pIVar1->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                   ((long)&pIVar2->interfaceType + lVar12) ==
                  TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
                pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
                goto label_05903413;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar11 * 0x10 != lVar12);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
                              ,0);
label_05903413:
          pIVar9 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
          if (pIVar9 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar10 = (MethodInfo *)
                    (*pIVar9->klass->vtable[9].methodPtr)(pIVar9,pIVar9->klass->vtable[9].method);
          bVar3 = System_String__op_Equality
                            ((System_String_o *)pMVar10,"*",(MethodInfo *)0x0);
          if ((bVar3) &&
             (bVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(pMVar10),
             pIVar7 = local_48, bVar3)) break;
          pMVar10 = pIVar9->klass->vtable[9].method;
          pSVar6 = (System_String_o *)(*pIVar9->klass->vtable[9].methodPtr)(pIVar9);
          bVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier(pSVar6,pMVar10);
          pIVar7 = local_48;
        } while (!bVar3);
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar1 = pIVar7->klass;
          uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
          local_48 = pIVar7;
          if (uVar11 != 0) {
            pIVar2 = (pIVar1->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar12) ==
                  (Il2CppClass *)TypeInfo_System_IDisposable) {
                pVVar8 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
                goto label_059034ed;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar11 * 0x10 != lVar12);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059034ed:
          (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        }
      }
    }
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRoleRequirement
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x5903630

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545637 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredRoles");
    Il2CppMethodInitialized_07545637 = '\x01';
  }
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_059036d5:
    ThrowNullReferenceException();
  }
  a = (*(item->klass->vtable)._7_get_Item.methodPtr)
                (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = false;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059036d5;
    iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    bVar3 = 0 < iVar2;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonRequirement
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x5903580

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545638 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredPatreonTierIds");
    Il2CppMethodInitialized_07545638 = '\x01';
  }
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05903625:
    ThrowNullReferenceException();
  }
  a = (*(item->klass->vtable)._7_get_Item.methodPtr)
                (item,"requiredPatreonTierIds",(item->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = false;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05903625;
    iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    bVar3 = 0 < iVar2;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue (System_String_o* key, const MethodInfo* method);
// 0x5901b00

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545639 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545639 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,key,(pSVar2->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar1) goto label_05901c37;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar2 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar2,key,(pSVar2->klass->vtable)._7_get_Item.method);
        if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
          return pSVar3;
        }
      }
    }
    ThrowNullReferenceException();
  }
label_05901c37:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasAnyPatreonTier
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier (const MethodInfo* method);
// 0x5901c60

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *a;
  
  if (Il2CppMethodInitialized_0754563a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"tierIds");
    Il2CppMethodInitialized_0754563a = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar4 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar4 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05901d76;
    a = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                  (pSVar4,"tierIds",(pSVar4->klass->vtable)._7_get_Item.method);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = false;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05901d76:
      ThrowNullReferenceException();
    }
    iVar3 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    bVar1 = 0 < iVar3;
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonTier
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier (System_String_o* id, const MethodInfo* method);
// 0x59037d0
// eh: try 0x5903a0f..0x5903b9c -> pad 0x5903bb5 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5903bcd..0x5903bd2 -> pad 0x5903bd7 cleanup
// eh: try 0x5903bda..0x5903be4 -> pad 0x5903bec catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5903969: nop dword ptr [rax]
// asm:   0x59039fd: nop dword ptr [rax]
// asm:   0x5903af2: mov rbx, qword ptr [rsp]
// asm:   0x5903af6: test rbx, rbx
// asm:   0x5903af9: jne 0x5903b0c
// asm:   0x5903afb: jmp 0x5903b76
// asm:   0x5903b76: test r14, r14
// asm:   0x5903b79: jne 0x5903ba1
// asm:   0x5903ba1: mov rdi, r14
// asm:   0x5903ba4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5903ba9: jmp 0x5903bb5
// asm:   0x5903bab: jmp 0x5903bb5
// asm:   0x5903bad: jmp 0x5903bb5
// asm:   0x5903baf: jmp 0x5903bb5
// asm:   0x5903bb1: jmp 0x5903bb5
// asm:   0x5903bb3: jmp 0x5903bb5
// asm:   0x5903bb5: mov rbx, rax
// asm:   0x5903bb8: cmp edx, 1
// asm:   0x5903bbb: jne 0x5903bda
// asm:   0x5903bbd: mov rdi, rbx
// asm:   0x5903bc0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5903bc5: mov r14, qword ptr [rax]
// asm:   0x5903bc8: mov qword ptr [rsp + 8], r14
// asm:   0x5903bcd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5903bd2: jmp 0x5903b00
// asm:   0x5903bd7: mov rbx, rax
// asm:   0x5903bda: lea rdi, [rsp + 8]
// asm:   0x5903bdf: call 0x2fd1310  ; il2cpp_runtime_helper_02fd1310()
// asm:   0x5903be4: mov rdi, rbx
// asm:   0x5903be7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5903bec: mov rdi, rax
// asm:   0x5903bef: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier
               (System_String_o *id,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *a;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *a_00;
  ulong uVar8;
  long lVar9;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754563b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"tierIds");
    Il2CppMethodInitialized_0754563b = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  bVar4 = false;
  bVar3 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar5 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar5 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05903b9c;
      a = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                    (pSVar5,"tierIds",(pSVar5->klass->vtable)._7_get_Item.method);
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = false;
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((a == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pIVar6 = (Il2CppObject *)
                   (*(a->klass->vtable)._27_get_Children.methodPtr)
                             (a,(a->klass->vtable)._27_get_Children.method), pIVar6 == (Il2CppObject *)0x0)) {
label_05903b9c:
        ThrowNullReferenceException();
      }
      pIVar1 = pIVar6->klass;
      uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar2->interfaceType + lVar9)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
            goto label_059039a1;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_059039a1:
      local_48 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      local_38 = (undefined1 *)&local_48;
      local_40 = 0;
      do {
        pIVar6 = local_48;
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = local_48->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
              goto label_05903a33;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05903a33:
        bVar4 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
        pIVar6 = local_48;
        if (!bVar4) {
          bVar4 = false;
          break;
        }
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = local_48->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar2->interfaceType + lVar9)
                == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
              goto label_05903ab3;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                           );
label_05903ab3:
        pIVar6 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        a_00 = (System_String_o *)
               (*pIVar6->klass->vtable[9].methodPtr)(pIVar6,pIVar6->klass->vtable[9].method);
        bVar3 = System_String__Equals_52ffe30(a_00,id,5,(MethodInfo *)0x0);
        pIVar6 = local_48;
      } while (!bVar3);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar1 = pIVar6->klass;
        uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
        local_48 = pIVar6;
        if (uVar8 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar9) ==
                (Il2CppClass *)TypeInfo_System_IDisposable) {
              pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
              goto label_05903b6d;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0)
        ;
label_05903b6d:
        (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      }
    }
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Root
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root (const MethodInfo* method);
// 0x5900220

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754563c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/ProfileEntitlementInfo");
    Il2CppMethodInitialized_0754563c = '\x01';
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                ("Data/Info/ProfileEntitlementInfo",(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    aJSON = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    pSVar2 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
    return pSVar2;
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Contains
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains (SimpleJSONFixed_JSONArray_o* array, System_String_o* value, const MethodInfo* method);
// 0x5900340
// eh: try 0x590048f..0x590061c -> pad 0x5900635 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x590064d..0x5900652 -> pad 0x5900657 cleanup
// eh: try 0x590065a..0x5900664 -> pad 0x590066c catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x590047d: nop dword ptr [rax]
// asm:   0x5900572: mov rbx, qword ptr [rsp]
// asm:   0x5900576: test rbx, rbx
// asm:   0x5900579: jne 0x590058c
// asm:   0x590057b: jmp 0x59005f6
// asm:   0x5900621: mov rdi, r14
// asm:   0x5900624: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5900629: jmp 0x5900635
// asm:   0x590062b: jmp 0x5900635
// asm:   0x590062d: jmp 0x5900635
// asm:   0x590062f: jmp 0x5900635
// asm:   0x5900631: jmp 0x5900635
// asm:   0x5900633: jmp 0x5900635
// asm:   0x5900635: mov rbx, rax
// asm:   0x5900638: cmp edx, 1
// asm:   0x590063b: jne 0x590065a
// asm:   0x590063d: mov rdi, rbx
// asm:   0x5900640: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5900645: mov r14, qword ptr [rax]
// asm:   0x5900648: mov qword ptr [rsp + 8], r14
// asm:   0x590064d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5900652: jmp 0x5900580
// asm:   0x5900657: mov rbx, rax
// asm:   0x590065a: lea rdi, [rsp + 8]
// asm:   0x590065f: call 0x2fd13a0  ; il2cpp_runtime_helper_02fd13a0()
// asm:   0x5900664: mov rdi, rbx
// asm:   0x5900667: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x590066c: mov rdi, rax
// asm:   0x590066f: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
               (SimpleJSONFixed_JSONArray_o *array,System_String_o *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *a;
  ulong uVar7;
  long lVar8;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754563d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_0754563d = '\x01';
  }
  if ((array == (SimpleJSONFixed_JSONArray_o *)0x0) ||
     (pIVar5 = (Il2CppObject *)
               (*(array->klass->vtable)._27_get_Children.methodPtr)
                         (array,(array->klass->vtable)._27_get_Children.method), pIVar5 == (Il2CppObject *)0x0
     )) {
    ThrowNullReferenceException();
  }
  pIVar1 = pIVar5->klass;
  uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar7 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar2->interfaceType + lVar8) ==
          TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
        pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
        goto label_05900421;
      }
      lVar8 = lVar8 + 0x10;
    } while (uVar7 * 0x10 != lVar8);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05900421:
  local_48 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  local_38 = (undefined1 *)&local_48;
  local_40 = 0;
  do {
    pIVar5 = local_48;
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_48->klass;
    uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_059004b3;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059004b3:
    bVar3 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    pIVar5 = local_48;
    if (!bVar3) {
      bVar3 = false;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_48->klass;
    uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
          pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_05900533;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_05900533:
    pIVar5 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    if (pIVar5 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    a = (System_String_o *)(*pIVar5->klass->vtable[9].methodPtr)(pIVar5,pIVar5->klass->vtable[9].method);
    bVar4 = System_String__Equals_52ffe30(a,value,5,(MethodInfo *)0x0);
    pIVar5 = local_48;
  } while (!bVar4);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar5->klass;
    uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
    local_48 = pIVar5;
    if (uVar7 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar8) ==
            (Il2CppClass *)TypeInfo_System_IDisposable) {
          pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_059005ed;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar5,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059005ed:
    (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet (System_Collections_Generic_IEnumerable_JSONNode__o* ids, const MethodInfo* method);
// 0x58ffdb0
// eh: try 0x58fffdf..0x59001b1 -> pad 0x59001d4 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59001ec..0x59001f1 -> pad 0x59001f6 cleanup
// eh: try 0x59001f9..0x5900203 -> pad 0x590020b catch (...) [compiler noexcept guard]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ffe5c: cmp byte ptr [rip + 0x1c42a23], 0
// asm:   0x58ffe63: je 0x58fff10
// asm:   0x58fff7d: lea r12, [rip + 0x1979474]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58fff84: lea r13, [rip + 0x1971045]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x58fff8b: lea rbp, [rip + 0x197a0ee]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x58fff92: lea r14, [rip + 0x199177f]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x58fff99: jmp 0x58fffad
// asm:   0x58fffa0: mov rbx, qword ptr [rsp]
// asm:   0x58fffa4: test rbx, rbx
// asm:   0x58fffa7: je 0x590019d
// asm:   0x58fffcd: nop dword ptr [rax]
// asm:   0x59001b6: mov rdi, rbp
// asm:   0x59001b9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59001be: jmp 0x59001d4
// asm:   0x59001c0: jmp 0x59001d4
// asm:   0x59001c2: jmp 0x59001d4
// asm:   0x59001c4: jmp 0x59001d4
// asm:   0x59001c6: jmp 0x59001d4
// asm:   0x59001c8: jmp 0x59001d4
// asm:   0x59001ca: jmp 0x59001d4
// asm:   0x59001cc: jmp 0x59001d4
// asm:   0x59001ce: jmp 0x59001d4
// asm:   0x59001d0: jmp 0x59001d4
// asm:   0x59001d2: jmp 0x59001d4
// asm:   0x59001d4: mov r14, rax
// asm:   0x59001d7: cmp edx, 1
// asm:   0x59001da: jne 0x59001f9
// asm:   0x59001dc: mov rdi, r14
// asm:   0x59001df: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59001e4: mov rbp, qword ptr [rax]
// asm:   0x59001e7: mov qword ptr [rsp + 8], rbp
// asm:   0x59001ec: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59001f1: jmp 0x5900114
// asm:   0x59001f6: mov r14, rax
// asm:   0x59001f9: lea rdi, [rsp + 8]
// asm:   0x59001fe: call 0x2fd1430  ; il2cpp_runtime_helper_02fd1430()
// asm:   0x5900203: mov rdi, r14
// asm:   0x5900206: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x590020b: mov rdi, rax
// asm:   0x590020e: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
          (System_Collections_Generic_IEnumerable_JSONNode__o *ids,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_IEnumerable_JSONNode__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppClass *pIVar4;
  char cVar5;
  bool bVar6;
  System_Collections_Generic_HashSet_string__o *__this;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *a;
  System_String_o *value;
  ulong uVar9;
  long lVar10;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754563e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_0754563e = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (ids == (System_Collections_Generic_IEnumerable_JSONNode__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = ids->klass;
  uVar9 = (ulong)(pSVar2->_2).interface_offsets_count;
  if (uVar9 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar3->interfaceType + lVar10) ==
          TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
        pVVar7 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
        goto label_058fff53;
      }
      lVar10 = lVar10 + 0x10;
    } while (uVar9 * 0x10 != lVar10);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)ids,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058fff53:
  pIVar8 = (*pVVar7->methodPtr)((Il2CppObject *)ids,pVVar7->method);
  local_40 = 0;
  local_38 = (undefined1 *)&local_48;
  do {
    local_48 = pIVar8;
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar8->klass;
    uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar10) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_05900003;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05900003:
    cVar5 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    pIVar8 = local_48;
    if (cVar5 == '\0') {
      if (local_48 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar4 = local_48->klass;
      uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar9 == 0) goto label_0590015f;
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar10 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_48->klass;
    uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar3->interfaceType + lVar10) ==
            TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
          pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_05900083;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_05900083:
    a = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pIVar8 = local_48;
    if (bVar6) {
      if (a == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      value = (System_String_o *)(*a->klass->vtable[9].methodPtr)(a);
      bVar6 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
      pIVar8 = local_48;
      if (!bVar6) {
        pIVar8 = (Il2CppObject *)(*a->klass->vtable[9].methodPtr)(a,a->klass->vtable[9].method);
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this,pIVar8,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        pIVar8 = local_48;
      }
    }
  } while( true );
  while (lVar10 = lVar10 + 0x10, uVar9 * 0x10 != lVar10) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar10);
      goto label_0590017d;
    }
  }
label_0590015f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0590017d:
  (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet (System_Collections_Generic_IEnumerable_string__o* ids, const MethodInfo* method);
// 0x5901550
// eh: try 0x590176f..0x5901859 -> pad 0x590186a (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5901886..0x590188b -> pad 0x5901915 cleanup
// eh: try 0x5901918..0x5901922 -> pad 0x590192a catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59015f0: cmp byte ptr [rip + 0x1c4128f], 0
// asm:   0x59015f7: je 0x59016a0
// asm:   0x590166e: nop 
// asm:   0x590170d: lea r12, [rip + 0x1977ce4]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5901714: xor r14d, r14d
// asm:   0x5901717: lea r13, [rip + 0x196f972]  ; TypeInfo_System_Collections_Generic_IEnumerator_string
// asm:   0x590171e: lea rbp, [rip + 0x198fff3]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x5901725: jmp 0x590173d
// asm:   0x5901730: mov rbx, qword ptr [rsp]
// asm:   0x5901734: test rbx, rbx
// asm:   0x5901737: je 0x590184a
// asm:   0x590175d: nop dword ptr [rax]
// asm:   0x590185e: jmp 0x590186a
// asm:   0x5901860: jmp 0x590186a
// asm:   0x5901862: jmp 0x590186a
// asm:   0x5901864: jmp 0x590186a
// asm:   0x5901866: jmp 0x590186a
// asm:   0x5901868: jmp 0x590186a
// asm:   0x590186a: mov rbx, rax
// asm:   0x590186d: cmp edx, 1
// asm:   0x5901870: jne 0x5901918
// asm:   0x5901876: mov rdi, rbx
// asm:   0x5901879: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x590187e: mov r14, qword ptr [rax]
// asm:   0x5901881: mov qword ptr [rsp + 8], r14
// asm:   0x5901886: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x590190d: mov rdi, r14
// asm:   0x5901910: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5901915: mov rbx, rax
// asm:   0x5901918: lea rdi, [rsp + 8]
// asm:   0x590191d: call 0x2fd14c0  ; il2cpp_runtime_helper_02fd14c0()
// asm:   0x5901922: mov rdi, rbx
// asm:   0x5901925: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x590192a: mov rdi, rax
// asm:   0x590192d: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet_5801550
          (System_Collections_Generic_IEnumerable_string__o *ids,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_IEnumerable_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppClass *pIVar4;
  char cVar5;
  bool bVar6;
  System_Collections_Generic_HashSet_string__o *__this;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  System_String_o *value;
  ulong uVar9;
  long lVar10;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754563f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_0754563f = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (ids == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = ids->klass;
  uVar9 = (ulong)(pSVar2->_2).interface_offsets_count;
  if (uVar9 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar3->interfaceType + lVar10) ==
          TypeInfo_System_Collections_Generic_IEnumerable_string) {
        pVVar7 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
        goto label_059016e3;
      }
      lVar10 = lVar10 + 0x10;
    } while (uVar9 * 0x10 != lVar10);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)ids,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_059016e3:
  pIVar8 = (*pVVar7->methodPtr)((Il2CppObject *)ids,pVVar7->method);
  local_40 = 0;
  local_38 = (undefined1 *)&local_48;
  do {
    local_48 = pIVar8;
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar8->klass;
    uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar10) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_05901793;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05901793:
    cVar5 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    pIVar8 = local_48;
    if (cVar5 == '\0') {
      if (local_48 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar4 = local_48->klass;
      uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar9 == 0) goto label_059018cf;
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar10 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_48->klass;
    uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar3->interfaceType + lVar10) ==
            TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_05901813;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_05901813:
    value = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    bVar6 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
    pIVar8 = local_48;
    if (!bVar6) {
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)value,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      pIVar8 = local_48;
    }
  } while( true );
  while (lVar10 = lVar10 + 0x10, uVar9 * 0x10 != lVar10) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar10);
      goto label_059018ed;
    }
  }
label_059018cf:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059018ed:
  (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRole
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole (System_Collections_Generic_IEnumerable_string__o* roles, System_String_o* required, const MethodInfo* method);
// 0x59036e0

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
               (System_Collections_Generic_IEnumerable_string__o *roles,System_String_o *required,
               MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *__this;
  System_Func_string__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_07545640 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0_HasRole_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0);
    Il2CppMethodInitialized_07545640 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).required = required;
  Il2CppCodeGenWriteBarrier(&(__this->fields).required);
  bVar1 = System_String__IsNullOrWhiteSpace((__this->fields).required,(MethodInfo *)0x0);
  if ((roles == (System_Collections_Generic_IEnumerable_string__o *)0x0) || (bVar1)) {
    return false;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0_HasRole_b__0
             ,(MethodInfo_4F19300 *)0x0);
  bVar1 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)roles,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
  return bVar1;
}


