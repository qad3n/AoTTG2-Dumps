// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileEntitlementCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$<HasRole>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___HasRole_b__0 (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, System_String_o* role, const MethodInfo* method);
// 0x181e25350

bool
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___HasRole_b__0(Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, System_String_o* role, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_196c550(requested,(__this->fields).required,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel (System_String_o* id, const MethodInfo* method);
// 0x181e186e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
          (System_String_o *id,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344cac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"label");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_184344cac = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("PresetGuilds",id,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"label");
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        pSVar4 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        return pSVar4;
      }
    }
    ThrowNullReferenceException();
  }
  return id;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel (System_String_o* id, const MethodInfo* method);
// 0x181e16950

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel(System_String_o *id,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344cad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"label");
    Il2CppMethodInitialized_184344cad = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",id,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"label");
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        pSVar4 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        return pSVar4;
      }
    }
    ThrowNullReferenceException();
  }
  return id;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon (System_String_o* id, const MethodInfo* method);
// 0x181e16860

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon(System_String_o *id,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344cae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Roles/");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_184344cae = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",id,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"id");
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        pSVar4 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        pSVar4 = System_String__Concat_1969e50("UI/Icons/Roles/",pSVar4,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (SimpleJSONFixed_JSONNode_o* requested, const MethodInfo* method);
// 0x181e15c50
// eh: try 0x181e15e00..0x181e16002 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e15dfc: nop dword ptr [rax]
// asm:   0x181e15f9e: jmp 0x181e15fcb
// asm:   0x181e15fa0: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e15fa5: cmp qword ptr [r8], 0
// asm:   0x181e15fa9: je 0x181e15fbc
// asm:   0x181e15fab: xor ecx, ecx
// asm:   0x181e15fad: mov r8, qword ptr [r8]
// asm:   0x181e15fb0: mov rdx, qword ptr [rip + 0x2283349]  ; TypeInfo_System_IDisposable
// asm:   0x181e15fb7: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e15fbc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e15fc1: test rcx, rcx
// asm:   0x181e15fc4: jne 0x181e16002
// asm:   0x181e15fc6: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181e16002: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
          (SimpleJSONFixed_JSONNode_o *requested,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  System_Collections_Generic_IEnumerable_JSONNode__o *ids;
  System_Collections_Generic_HashSet_string__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *a;
  Il2CppObject *pIVar6;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  longlong *plVar10;
  System_String_o *id;
  ushort uVar11;
  
  if (Il2CppMethodInitialized_184344caf == '\0') {
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
    Il2CppMethodInitialized_184344caf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(requested,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (requested == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181e15fdc:
      ThrowNullReferenceException();
    }
    ids = (*(requested->klass->vtable)._27_get_Children.methodPtr)
                    (requested,(requested->klass->vtable)._27_get_Children.method);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet(ids,(MethodInfo *)0x0);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root((MethodInfo *)0x0);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      a = (System_Xml_Schema_XmlSchema_o *)0x0;
    }
    else {
      a = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"Badges");
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((a == (System_Xml_Schema_XmlSchema_o *)0x0) ||
         (pIVar6 = (Il2CppObject *)
                   (*((Il2CppClass *)a->klass)->vtable[27].methodPtr)(a,((Il2CppClass *)a->klass)->vtable[27].method),
         pIVar6 == (Il2CppObject *)0x0)) goto label_181e15fdc;
      pIVar6 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar6);
      while( true ) {
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar6);
        if ((char)pvVar7 == '\0') break;
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar6->klass;
        uVar1 = (pIVar2->_2).interface_offsets_count;
        if (uVar1 != 0) {
          uVar11 = 0;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          do {
            if (pIVar3[uVar11].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar8 = pIVar2->vtable + pIVar3[uVar11].offset;
              goto label_181e15e86;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar1);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181e15e86:
        pIVar9 = (*pVVar8->methodPtr)(pIVar6,pVVar8->method);
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar10 = (longlong *)
                  (*pIVar9->klass->vtable[7].methodPtr)
                            (pIVar9,"id",pIVar9->klass->vtable[7].method);
        if (plVar10 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        id = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)id,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (((bVar4) &&
            (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed
                               ("Badges",id,(MethodInfo *)0x0), bVar4)) &&
           (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
                              (__this,id,(MethodInfo *)0x0), !bVar4)) {
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(id,(MethodInfo *)0x0);
          if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
        }
      }
      if (pIVar6 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar6);
      }
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (SimpleJSONFixed_JSONNode_o* requested, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x181e16050
// eh: try 0x181e16210..0x181e16418 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e163ad: jmp 0x181e163dd
// asm:   0x181e163af: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e163b4: cmp qword ptr [r8], 0
// asm:   0x181e163b8: je 0x181e163cb
// asm:   0x181e163ba: xor ecx, ecx
// asm:   0x181e163bc: mov r8, qword ptr [r8]
// asm:   0x181e163bf: mov rdx, qword ptr [rip + 0x2282f3a]  ; TypeInfo_System_IDisposable
// asm:   0x181e163c6: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e163cb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e163d0: test rcx, rcx
// asm:   0x181e163d3: jne 0x181e16418
// asm:   0x181e163d5: mov r14, qword ptr [rsp + 0x88]
// asm:   0x181e16418: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_1e16050
          (SimpleJSONFixed_JSONNode_o *requested,System_Collections_Generic_IEnumerable_string__o *roles,
          MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  System_Collections_Generic_IEnumerable_JSONNode__o *ids;
  System_Collections_Generic_HashSet_string__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *a;
  Il2CppObject *pIVar6;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *item;
  longlong *plVar9;
  System_String_o *value;
  ushort uVar10;
  
  if (Il2CppMethodInitialized_184344cb0 == '\0') {
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
    Il2CppMethodInitialized_184344cb0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(requested,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (requested == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181e163f2:
      ThrowNullReferenceException();
    }
    ids = (*(requested->klass->vtable)._27_get_Children.methodPtr)
                    (requested,(requested->klass->vtable)._27_get_Children.method);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet(ids,(MethodInfo *)0x0);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root((MethodInfo *)0x0);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      a = (System_Xml_Schema_XmlSchema_o *)0x0;
    }
    else {
      a = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"Badges");
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((a == (System_Xml_Schema_XmlSchema_o *)0x0) ||
         (pIVar6 = (Il2CppObject *)
                   (*((Il2CppClass *)a->klass)->vtable[27].methodPtr)(a,((Il2CppClass *)a->klass)->vtable[27].method),
         pIVar6 == (Il2CppObject *)0x0)) goto label_181e163f2;
      pIVar6 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar6);
      while( true ) {
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar6);
        if ((char)pvVar7 == '\0') break;
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar6->klass;
        uVar1 = (pIVar2->_2).interface_offsets_count;
        if (uVar1 != 0) {
          uVar10 = 0;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          do {
            if (pIVar3[uVar10].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar8 = pIVar2->vtable + pIVar3[uVar10].offset;
              goto label_181e16296;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar1);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181e16296:
        item = (*pVVar8->methodPtr)(pIVar6,pVVar8->method);
        if (item == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar9 = (longlong *)
                 (*item->klass->vtable[7].methodPtr)(item,"id",item->klass->vtable[7].method)
        ;
        if (plVar9 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        value = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)value,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (((bVar4) &&
            (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed_1e187c0
                               ((SimpleJSONFixed_JSONNode_o *)item,roles,(MethodInfo *)0x0), bVar4)) &&
           (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
                              (__this,value,(MethodInfo *)0x0), !bVar4)) {
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(value,(MethodInfo *)0x0);
          if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method);
        }
      }
      if (pIVar6 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar6);
      }
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$OrderedBadgeIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds (System_Collections_Generic_IEnumerable_string__o* requested, const MethodInfo* method);
// 0x181e17ee0
// eh: try 0x181e18090..0x181e18263 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e181da: jmp 0x181e18207
// asm:   0x181e181dc: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e181e1: cmp qword ptr [r8], 0
// asm:   0x181e181e5: je 0x181e181f8
// asm:   0x181e181e7: xor ecx, ecx
// asm:   0x181e181e9: mov r8, qword ptr [r8]
// asm:   0x181e181ec: mov rdx, qword ptr [rip + 0x228110d]  ; TypeInfo_System_IDisposable
// asm:   0x181e181f3: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e181f8: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e181fd: test rcx, rcx
// asm:   0x181e18200: jne 0x181e18263
// asm:   0x181e18202: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181e18263: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_array *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
          (System_Collections_Generic_IEnumerable_string__o *requested,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_Collections_Generic_HashSet_string__o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *a;
  Il2CppObject *pIVar6;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  longlong *plVar10;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar11;
  System_String_array *pSVar12;
  ushort uVar13;
  
  if (Il2CppMethodInitialized_184344cb1 == '\0') {
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
    Il2CppMethodInitialized_184344cb1 = '\x01';
  }
  if (requested == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    pSVar12 = (System_String_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_string);
    return pSVar12;
  }
  __this = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet_1e178f0(requested,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root((MethodInfo *)0x0);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  else {
    a = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"Badges");
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((a == (System_Xml_Schema_XmlSchema_o *)0x0) ||
       (pIVar6 = (Il2CppObject *)
                 (*((Il2CppClass *)a->klass)->vtable[27].methodPtr)(a,((Il2CppClass *)a->klass)->vtable[27].method),
       pIVar6 == (Il2CppObject *)0x0)) goto label_181e18269;
    pIVar6 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar6);
    while( true ) {
      if (pIVar6 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar6);
      if ((char)pvVar7 == '\0') break;
      if (pIVar6 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar6->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        uVar13 = 0;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar13].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar8 = pIVar2->vtable + pIVar3[uVar13].offset;
            goto label_181e18116;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar1);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181e18116:
      pIVar9 = (*pVVar8->methodPtr)(pIVar6,pVVar8->method);
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      plVar10 = (longlong *)
                (*pIVar9->klass->vtable[7].methodPtr)
                          (pIVar9,"id",pIVar9->klass->vtable[7].method);
      if (plVar10 == (longlong *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar9 = (Il2CppObject *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)__this,pIVar9,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar4) {
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_00,pIVar9,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
    if (pIVar6 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar6);
    }
  }
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pUVar11 = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)__this_00,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return (System_String_array *)pUVar11;
  }
label_181e18269:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuild
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild (System_String_o* id, const MethodInfo* method);
// 0x181e16770

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild
          (System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONString_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344cb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_184344cb2 = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed
                    ("PresetGuilds",id,(MethodInfo *)0x0);
  if (bVar1) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    SimpleJSONFixed_JSONString___ctor(__this,id,(MethodInfo *)0x0);
    return (SimpleJSONFixed_JSONNode_o *)__this;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNull->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull);
  }
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsSupporter
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter (const MethodInfo* method);
// 0x181e17cb0

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter(MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184344cb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"active_patron");
    il2cpp_codegen_initialize_runtime_metadata(&"patronStatus");
    Il2CppMethodInitialized_184344cb3 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue
                  ("patronStatus",(MethodInfo *)0x0);
    bVar1 = System_String__Equals_196c550(a,"active_patron",5,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier((MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuilds
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuilds (const MethodInfo* method);
// 0x181e16820

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuilds(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344cb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_184344cb4 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
                     ("PresetGuilds",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisiblePresetGuilds
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds (const MethodInfo* method);
// 0x181e19060

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344cb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_184344cb5 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
                     ("PresetGuilds",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (const MethodInfo* method);
// 0x181e16010

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_1e16010(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    Il2CppMethodInitialized_184344cb6 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
                     ("Badges",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleBadges
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges (const MethodInfo* method);
// 0x181e18d20

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344cb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    Il2CppMethodInitialized_184344cb7 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
                     ("Badges",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildIdForLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildIdForLabel (System_String_o* label, const MethodInfo* method);
// 0x181e186a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildIdForLabel
          (System_String_o *label,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344cb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PresetGuilds");
    Il2CppMethodInitialized_184344cb8 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel
                     ("PresetGuilds",label,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedOptions
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions (System_String_o* group, const MethodInfo* method);
// 0x181e16420
// eh: try 0x181e16590..0x181e16761 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e16506: mov rbx, r15
// asm:   0x181e166f4: jmp 0x181e16724
// asm:   0x181e166f6: mov r8, qword ptr [rsp + 0x40]
// asm:   0x181e166fb: cmp qword ptr [r8], 0
// asm:   0x181e166ff: je 0x181e16712
// asm:   0x181e16701: xor ecx, ecx
// asm:   0x181e16703: mov r8, qword ptr [r8]
// asm:   0x181e16706: mov rdx, qword ptr [rip + 0x2282bf3]  ; TypeInfo_System_IDisposable
// asm:   0x181e1670d: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e16712: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e16717: test rcx, rcx
// asm:   0x181e1671a: jne 0x181e16761
// asm:   0x181e1671c: mov rsi, qword ptr [rsp + 0xc8]
// asm:   0x181e16761: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
          (System_String_o *group,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  Il2CppObject *pIVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *item;
  longlong *plVar10;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *pGVar11;
  ushort uVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o local_38;
  
  if (Il2CppMethodInitialized_184344cb9 == '\0') {
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
    Il2CppMethodInitialized_184344cb9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfileEntitlementOption);
  System_Collections_Generic_List_AottgProfileEntitlementOption____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_ctor);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root((MethodInfo *)0x0);
  pSVar6 = (System_Xml_Schema_XmlSchema_o *)0x0;
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)group);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
       (pIVar7 = (Il2CppObject *)
                 (*((Il2CppClass *)pSVar6->klass)->vtable[27].methodPtr)
                           (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[27].method),
       pIVar7 == (Il2CppObject *)0x0)) {
      ThrowNullReferenceException();
    }
    pIVar7 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar7);
    while( true ) {
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar7);
      if ((char)pvVar8 == '\0') break;
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar7->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        pSVar6 = (System_Xml_Schema_XmlSchema_o *)0x0;
        do {
          if (pIVar3[(longlong)pSVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar9 = pIVar2->vtable + pIVar3[(longlong)pSVar6].offset;
            goto label_181e16616;
          }
          uVar12 = (short)pSVar6 + 1;
          pSVar6 = (System_Xml_Schema_XmlSchema_o *)(ulonglong)uVar12;
        } while (uVar12 < uVar1);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181e16616:
      item = (*pVVar9->methodPtr)(pIVar7,pVVar9->method);
      if (item == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      plVar10 = (longlong *)
                (*item->klass->vtable[7].methodPtr)(item,"id",item->klass->vtable[7].method);
      if (plVar10 == (longlong *)0x0) {
        ThrowNullReferenceException();
      }
      (**(code **)(*plVar10 + 0x1c8))(plVar10);
      bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_1e17c10
                        ((SimpleJSONFixed_JSONNode_o *)item,(MethodInfo *)0x0);
      if (bVar4) {
        pGVar11 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
                            (&local_38,group,(SimpleJSONFixed_JSONNode_o *)item,true,(MethodInfo *)0x0);
        if (__this == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
          ThrowNullReferenceException();
        }
        local_58 = *(undefined4 *)&(pGVar11->fields).Id;
        uStack_54 = *(undefined4 *)((longlong)&(pGVar11->fields).Id + 4);
        uStack_50 = *(undefined4 *)&(pGVar11->fields).Label;
        uStack_4c = *(undefined4 *)((longlong)&(pGVar11->fields).Label + 4);
        local_48 = *(undefined4 *)&(pGVar11->fields).Icon;
        uStack_44 = *(undefined4 *)((longlong)&(pGVar11->fields).Icon + 4);
        uStack_40 = *(undefined4 *)&(pGVar11->fields).Enabled;
        uStack_3c = *(undefined4 *)&(pGVar11->fields).field_0x1c;
        il2cpp_runtime_helper_18003ecd0(__this,&local_58,
                      MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_Add);
      }
    }
    if (pIVar7 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar7);
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleOptions
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions (System_String_o* group, const MethodInfo* method);
// 0x181e18d60
// eh: try 0x181e18ec0..0x181e19057 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e18e38: mov rbx, r12
// asm:   0x181e18ebd: nop dword ptr [rax]
// asm:   0x181e18ff5: jmp 0x181e19025
// asm:   0x181e18ff7: mov r8, qword ptr [rsp + 0x40]
// asm:   0x181e18ffc: cmp qword ptr [r8], 0
// asm:   0x181e19000: je 0x181e19013
// asm:   0x181e19002: xor ecx, ecx
// asm:   0x181e19004: mov r8, qword ptr [r8]
// asm:   0x181e19007: mov rdx, qword ptr [rip + 0x22802f2]  ; TypeInfo_System_IDisposable
// asm:   0x181e1900e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e19013: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e19018: test rcx, rcx
// asm:   0x181e1901b: jne 0x181e19057
// asm:   0x181e1901d: mov r14, qword ptr [rsp + 0xd8]
// asm:   0x181e19057: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
          (System_String_o *group,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  bool bVar5;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  Il2CppObject *pIVar8;
  void *pvVar9;
  VirtualInvokeData *pVVar10;
  Il2CppObject *item;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *pGVar11;
  ushort uVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o local_48;
  
  if (Il2CppMethodInitialized_184344cba == '\0') {
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
    Il2CppMethodInitialized_184344cba = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfileEntitlementOption);
  System_Collections_Generic_List_AottgProfileEntitlementOption____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_ctor);
  pSVar6 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root((MethodInfo *)0x0);
  pSVar7 = (System_Xml_Schema_XmlSchema_o *)0x0;
  if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar7 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)group);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
       (pIVar8 = (Il2CppObject *)
                 (*((Il2CppClass *)pSVar7->klass)->vtable[27].methodPtr)
                           (pSVar7,((Il2CppClass *)pSVar7->klass)->vtable[27].method),
       pIVar8 == (Il2CppObject *)0x0)) {
      ThrowNullReferenceException();
    }
    pIVar8 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar8);
    while( true ) {
      if (pIVar8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar9 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar8);
      if ((char)pvVar9 == '\0') break;
      if (pIVar8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar8->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        pSVar7 = (System_Xml_Schema_XmlSchema_o *)0x0;
        do {
          if (pIVar3[(longlong)pSVar7].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar10 = pIVar2->vtable + pIVar3[(longlong)pSVar7].offset;
            goto label_181e18f46;
          }
          uVar12 = (short)pSVar7 + 1;
          pSVar7 = (System_Xml_Schema_XmlSchema_o *)(ulonglong)uVar12;
        } while (uVar12 < uVar1);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181e18f46:
      item = (*pVVar10->methodPtr)(pIVar8,pVVar10->method);
      bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_1e17c10
                        ((SimpleJSONFixed_JSONNode_o *)item,(MethodInfo *)0x0);
      if ((bVar4) ||
         (bVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked
                            ((SimpleJSONFixed_JSONNode_o *)item,(MethodInfo *)0x0), bVar5)) {
        pGVar11 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
                            (&local_48,group,(SimpleJSONFixed_JSONNode_o *)item,bVar4,(MethodInfo *)0x0);
        if (__this == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
          ThrowNullReferenceException();
        }
        local_68 = *(undefined4 *)&(pGVar11->fields).Id;
        uStack_64 = *(undefined4 *)((longlong)&(pGVar11->fields).Id + 4);
        uStack_60 = *(undefined4 *)&(pGVar11->fields).Label;
        uStack_5c = *(undefined4 *)((longlong)&(pGVar11->fields).Label + 4);
        local_58 = *(undefined4 *)&(pGVar11->fields).Icon;
        uStack_54 = *(undefined4 *)((longlong)&(pGVar11->fields).Icon + 4);
        uStack_50 = *(undefined4 *)&(pGVar11->fields).Enabled;
        uStack_4c = *(undefined4 *)&(pGVar11->fields).field_0x1c;
        il2cpp_runtime_helper_18003ecd0(__this,&local_68,
                      MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_Add);
      }
    }
    if (pIVar8 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar8);
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Option
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option (System_String_o* group, SimpleJSONFixed_JSONNode_o* item, bool enabled, const MethodInfo* method);
// 0x181e17d50

Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
          (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *__return_storage_ptr__,
          System_String_o *group,SimpleJSONFixed_JSONNode_o *item,bool enabled,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *str1;
  System_String_o *value;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184344cbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Roles/");
    il2cpp_codegen_initialize_runtime_metadata(&"label");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_184344cbb = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"id");
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar1 = pSVar3->klass;
      str1 = (System_String_o *)
             (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar1);
      pSVar3 = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"label");
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        value = (System_String_o *)
                (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                          (pSVar3,(UnityEngine_GameObject_o *)
                                  (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        bVar2 = System_String__op_Equality(group,"Badges",(MethodInfo *)0x0);
        if (bVar2) {
          value_00 = System_String__Concat_1969e50("UI/Icons/Roles/",str1,(MethodInfo *)0x0);
        }
        else {
          value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
        (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
        *(undefined8 *)&(__return_storage_ptr__->fields).Enabled = 0;
        (__return_storage_ptr__->fields).Id = str1;
        Il2CppCodeGenWriteBarrier((void **)__return_storage_ptr__,str1);
        (__return_storage_ptr__->fields).Label = value;
        Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).Label,value);
        (__return_storage_ptr__->fields).Icon = value_00;
        Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).Icon,value_00);
        (__return_storage_ptr__->fields).Enabled = enabled;
        return __return_storage_ptr__;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdForLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel (System_String_o* group, System_String_o* label, const MethodInfo* method);
// 0x181e17460
// eh: try 0x181e17530..0x181e17564 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1759c: mov rdx, qword ptr [rip + 0x225ca75]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose
// asm:   0x181e175a3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e175a8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e175ad: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e175b2: test rcx, rcx
// asm:   0x181e175b5: jne 0x181e175d0
// asm:   0x181e175d0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel
          (System_String_o *group,System_String_o *label,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  System_String_o *pSStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  System_String_o *pSStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (Il2CppMethodInitialized_184344cbc == '\0') {
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
    Il2CppMethodInitialized_184344cbc = '\x01';
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  __this = (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
           Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions(group,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)0x0) {
    System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___GetEnumerator
              (&local_40,__this,
               (MethodInfo_942C50 *)
               MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
    local_70.fields._list = local_40.fields._list;
    local_70.fields._index = local_40.fields._index;
    local_70.fields._version = local_40.fields._version;
    local_70.fields._current = local_40.fields._current;
    pSStack_58 = pSStack_28;
    local_50 = local_20;
    uStack_48 = uStack_18;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator_VisualTreeAsset_AssetEntry___MoveNext
                        (&local_70,
                         (MethodInfo_1529610 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext
                        );
      pIVar1 = local_70.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
                   MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose
                  );
        return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      bVar2 = System_String__Equals_196c550(pSStack_58,label,5,(MethodInfo *)0x0);
    } while (!bVar2);
    System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
               MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
    return (System_String_o *)pIVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed (System_String_o* group, System_String_o* id, const MethodInfo* method);
// 0x181e17b80

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed
               (System_String_o *group,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  
  if (Il2CppMethodInitialized_184344cbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344cbd = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_1e17c10(a,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x181e17c10

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_1e17c10
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344cbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344cbe = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(item,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed(item,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed(item,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleWhenLocked
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x181e190a0

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344cc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredPatreonTierIds");
    Il2CppMethodInitialized_184344cc4 = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"requiredPatreonTierIds");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar2 = (*(pSVar2->klass->vtable)._11_get_NameAttribute.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._11_get_NameAttribute.method);
      if ((int)pSVar2 < 1) {
        return false;
      }
      if (Il2CppMethodInitialized_184344cc3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
        il2cpp_codegen_initialize_runtime_metadata(&"requiredRoles");
        Il2CppMethodInitialized_184344cc3 = '\x01';
      }
      pSVar2 = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"requiredRoles");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar2 = (*(pSVar2->klass->vtable)._11_get_NameAttribute.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._11_get_NameAttribute.method);
        return (int)pSVar2 < 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Find
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find (System_String_o* group, System_String_o* id, const MethodInfo* method);
// 0x181e16be0
// eh: try 0x181e16d10..0x181e16e40 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e16c8e: mov rbx, rdi
// asm:   0x181e16df0: jmp 0x181e16e18
// asm:   0x181e16df2: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e16df7: cmp qword ptr [r8], 0
// asm:   0x181e16dfb: je 0x181e16e0e
// asm:   0x181e16dfd: xor ecx, ecx
// asm:   0x181e16dff: mov r8, qword ptr [r8]
// asm:   0x181e16e02: mov rdx, qword ptr [rip + 0x22824f7]  ; TypeInfo_System_IDisposable
// asm:   0x181e16e09: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e16e0e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e16e13: test rcx, rcx
// asm:   0x181e16e16: jne 0x181e16e40
// asm:   0x181e16e40: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find
          (System_String_o *group,System_String_o *id,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  Il2CppObject *pIVar5;
  void *pvVar6;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184344cbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    Il2CppMethodInitialized_184344cbf = '\x01';
  }
  pSVar4 = (System_Xml_Schema_XmlSchema_o *)0x0;
  bVar2 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root((MethodInfo *)0x0);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,(MethodInfo *)group);
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
         (pIVar5 = (Il2CppObject *)
                   (*((Il2CppClass *)pSVar4->klass)->vtable[27].methodPtr)
                             (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[27].method),
         pIVar5 == (Il2CppObject *)0x0)) {
        ThrowNullReferenceException();
      }
      pIVar5 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar5);
      while( true ) {
        if (pIVar5 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar5);
        if ((char)pvVar6 == '\0') break;
        if (pIVar5 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar5);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,(MethodInfo *)"id");
        if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar1 = pSVar4->klass;
        a = (System_String_o *)
            (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                      (pSVar4,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                       (MethodInfo *)pSVar1);
        bVar2 = System_String__Equals_196c550(a,id,5,(MethodInfo *)0x0);
        if (bVar2) {
          if (pIVar5 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar5);
          }
          return pSVar3;
        }
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar5);
      }
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x181e189f0
// eh: try 0x181e18b70..0x181e18c64 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e18bf2: jmp 0x181e18c40
// asm:   0x181e18c0d: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e18c12: cmp qword ptr [r8], 0
// asm:   0x181e18c16: je 0x181e18c29
// asm:   0x181e18c18: xor ecx, ecx
// asm:   0x181e18c1a: mov r8, qword ptr [r8]
// asm:   0x181e18c1d: mov rdx, qword ptr [rip + 0x22806dc]  ; TypeInfo_System_IDisposable
// asm:   0x181e18c24: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e18c29: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e18c2e: test rcx, rcx
// asm:   0x181e18c31: jne 0x181e18c64
// asm:   0x181e18c64: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  System_String_array *roles;
  Il2CppObject *pIVar3;
  void *pvVar4;
  longlong *plVar5;
  System_String_o *required;
  
  if (Il2CppMethodInitialized_184344cc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredRoles");
    Il2CppMethodInitialized_184344cc0 = '\x01';
  }
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181e18c4d:
    ThrowNullReferenceException();
  }
  a = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"requiredRoles");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (a == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e18c4d;
    pSVar2 = (*(a->klass->vtable)._11_get_NameAttribute.methodPtr)
                       (a,(a->klass->vtable)._11_get_NameAttribute.method);
    if ((int)pSVar2 != 0) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      roles = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      if (roles == (System_String_array *)0x0) {
        roles = (System_String_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_string);
      }
      pIVar3 = (Il2CppObject *)
               (*((Il2CppClass *)a->klass)->vtable[27].methodPtr)(a,((Il2CppClass *)a->klass)->vtable[27].method);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_181e18c4d;
      pIVar3 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar3);
      do {
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar4 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar3);
        if ((char)pvVar4 == '\0') {
          if (pIVar3 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar3);
          }
          return false;
        }
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar5 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar3);
        if (plVar5 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        required = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
                          ((System_Collections_Generic_IEnumerable_string__o *)roles,required,
                           (MethodInfo *)0x0);
      } while (!bVar1);
      if (pIVar3 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar3);
      }
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed (SimpleJSONFixed_JSONNode_o* item, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x181e187c0
// eh: try 0x181e188f0..0x181e189e4 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e18972: jmp 0x181e189c0
// asm:   0x181e1898d: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e18992: cmp qword ptr [r8], 0
// asm:   0x181e18996: je 0x181e189a9
// asm:   0x181e18998: xor ecx, ecx
// asm:   0x181e1899a: mov r8, qword ptr [r8]
// asm:   0x181e1899d: mov rdx, qword ptr [rip + 0x228095c]  ; TypeInfo_System_IDisposable
// asm:   0x181e189a4: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e189a9: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e189ae: test rcx, rcx
// asm:   0x181e189b1: jne 0x181e189e4
// asm:   0x181e189e4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed_1e187c0
               (SimpleJSONFixed_JSONNode_o *item,System_Collections_Generic_IEnumerable_string__o *roles,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  Il2CppObject *pIVar3;
  void *pvVar4;
  longlong *plVar5;
  System_String_o *required;
  
  if (Il2CppMethodInitialized_184344cc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredRoles");
    Il2CppMethodInitialized_184344cc1 = '\x01';
  }
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181e189cd:
    ThrowNullReferenceException();
  }
  a = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"requiredRoles");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (a == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e189cd;
    pSVar2 = (*(a->klass->vtable)._11_get_NameAttribute.methodPtr)
                       (a,(a->klass->vtable)._11_get_NameAttribute.method);
    if ((int)pSVar2 != 0) {
      pIVar3 = (Il2CppObject *)
               (*((Il2CppClass *)a->klass)->vtable[27].methodPtr)(a,((Il2CppClass *)a->klass)->vtable[27].method);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_181e189cd;
      pIVar3 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar3);
      do {
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar4 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar3);
        if ((char)pvVar4 == '\0') {
          if (pIVar3 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar3);
          }
          return false;
        }
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar5 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar3);
        if (plVar5 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        required = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
                          (roles,required,(MethodInfo *)0x0);
      } while (!bVar1);
      if (pIVar3 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar3);
      }
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x181e18270
// eh: try 0x181e183e2..0x181e1852d -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e184bb: jmp 0x181e18509
// asm:   0x181e184d6: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e184db: cmp qword ptr [r8], 0
// asm:   0x181e184df: je 0x181e184f2
// asm:   0x181e184e1: xor ecx, ecx
// asm:   0x181e184e3: mov r8, qword ptr [r8]
// asm:   0x181e184e6: mov rdx, qword ptr [rip + 0x2280e13]  ; TypeInfo_System_IDisposable
// asm:   0x181e184ed: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e184f2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e184f7: test rcx, rcx
// asm:   0x181e184fa: jne 0x181e1852d
// asm:   0x181e1852d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  void *pvVar5;
  longlong *plVar6;
  
  if (Il2CppMethodInitialized_184344cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredPatreonTierIds");
    il2cpp_codegen_initialize_runtime_metadata(&"active_patron");
    il2cpp_codegen_initialize_runtime_metadata(&"patronStatus");
    il2cpp_codegen_initialize_runtime_metadata(&"*");
    Il2CppMethodInitialized_184344cc2 = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"requiredPatreonTierIds");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (a == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e18516;
      pSVar2 = (*(a->klass->vtable)._11_get_NameAttribute.methodPtr)
                         (a,(a->klass->vtable)._11_get_NameAttribute.method);
      if ((int)pSVar2 != 0) {
        pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue
                           ("patronStatus",(MethodInfo *)0x0);
        bVar1 = System_String__Equals_196c550(pSVar3,"active_patron",5,(MethodInfo *)0x0);
        if (!bVar1) {
          return false;
        }
        pIVar4 = (Il2CppObject *)
                 (*((Il2CppClass *)a->klass)->vtable[27].methodPtr)(a,((Il2CppClass *)a->klass)->vtable[27].method);
        if (pIVar4 == (Il2CppObject *)0x0) goto label_181e18516;
        pIVar4 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar4);
        do {
          if (pIVar4 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar4);
          if ((char)pvVar5 == '\0') {
            if (pIVar4 == (Il2CppObject *)0x0) {
              return false;
            }
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar4);
            return false;
          }
          if (pIVar4 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          plVar6 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar4
                             );
          if (plVar6 == (longlong *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
          bVar1 = System_String__op_Equality(pSVar3,"*",(MethodInfo *)0x0);
          if ((bVar1) &&
             (bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier
                                ((MethodInfo *)0x0), bVar1)) {
            if (pIVar4 == (Il2CppObject *)0x0) {
              return true;
            }
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar4);
            return true;
          }
          pSVar3 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
          bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier
                            (pSVar3,(MethodInfo *)0x0);
        } while (!bVar1);
        if (pIVar4 != (Il2CppObject *)0x0) {
          InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar4);
        }
      }
    }
    return true;
  }
label_181e18516:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRoleRequirement
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x181e172b0

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344cc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredRoles");
    Il2CppMethodInitialized_184344cc3 = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"requiredRoles");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar2 = (*(pSVar2->klass->vtable)._11_get_NameAttribute.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._11_get_NameAttribute.method);
      return 0 < (int)pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonRequirement
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x181e16f70

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement
               (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344cc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"requiredPatreonTierIds");
    Il2CppMethodInitialized_184344cc4 = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(item->klass->vtable)._7_get_Item.methodPtr)(item,(MethodInfo *)"requiredPatreonTierIds");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar2 = (*(pSVar2->klass->vtable)._11_get_NameAttribute.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._11_get_NameAttribute.method);
      return 0 < (int)pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue (System_String_o* key, const MethodInfo* method);
// 0x181e18540

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue(System_String_o *key,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_184344cc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344cc5 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,(MethodInfo *)key);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar2) goto label_181e1867e;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
      if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,(MethodInfo *)key);
        if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          pSVar1 = pSVar4->klass;
          pSVar5 = (System_String_o *)
                   (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                             (pSVar4,(UnityEngine_GameObject_o *)
                                     (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
          return pSVar5;
        }
      }
    }
    ThrowNullReferenceException();
  }
label_181e1867e:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasAnyPatreonTier
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier (const MethodInfo* method);
// 0x181e16e50

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344cc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"tierIds");
    Il2CppMethodInitialized_184344cc6 = '\x01';
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
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e16f61;
    pSVar3 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"tierIds");
  }
  else {
    pSVar3 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
    pSVar3 = (*(pSVar3->klass->vtable)._11_get_NameAttribute.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._11_get_NameAttribute.method);
    return 0 < (int)pSVar3;
  }
label_181e16f61:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonTier
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier (System_String_o* id, const MethodInfo* method);
// 0x181e17020
// eh: try 0x181e171b0..0x181e172a2 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1725c: jmp 0x181e17284
// asm:   0x181e1725e: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e17263: cmp qword ptr [r8], 0
// asm:   0x181e17267: je 0x181e1727a
// asm:   0x181e17269: xor ecx, ecx
// asm:   0x181e1726b: mov r8, qword ptr [r8]
// asm:   0x181e1726e: mov rdx, qword ptr [rip + 0x228208b]  ; TypeInfo_System_IDisposable
// asm:   0x181e17275: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e1727a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e1727f: test rcx, rcx
// asm:   0x181e17282: jne 0x181e172a2
// asm:   0x181e172a2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier
               (System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_o *a;
  Il2CppObject *pIVar3;
  void *pvVar4;
  longlong *plVar5;
  System_String_o *a_00;
  
  if (Il2CppMethodInitialized_184344cc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"tierIds");
    Il2CppMethodInitialized_184344cc7 = '\x01';
  }
  bVar1 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  if (!bVar1) {
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
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e172a8;
      a = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"tierIds");
    }
    else {
      a = (System_Xml_Schema_XmlSchema_o *)0x0;
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((a == (System_Xml_Schema_XmlSchema_o *)0x0) ||
         (pIVar3 = (Il2CppObject *)
                   (*((Il2CppClass *)a->klass)->vtable[27].methodPtr)(a,((Il2CppClass *)a->klass)->vtable[27].method),
         pIVar3 == (Il2CppObject *)0x0)) {
label_181e172a8:
        ThrowNullReferenceException();
      }
      pIVar3 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar3);
      while( true ) {
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar4 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar3);
        if ((char)pvVar4 == '\0') break;
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar5 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar3);
        if (plVar5 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        a_00 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        bVar1 = System_String__Equals_196c550(a_00,id,5,(MethodInfo *)0x0);
        if (bVar1) {
          if (pIVar3 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar3);
          }
          return true;
        }
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar3);
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Root
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root (const MethodInfo* method);
// 0x181e18c70

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344cc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/ProfileEntitlementInfo");
    Il2CppMethodInitialized_184344cc8 = '\x01';
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                ("Data/Info/ProfileEntitlementInfo",(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (UnityEngine_Object_o *)0x0) {
      aJSON = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      pSVar2 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
      return pSVar2;
    }
    ThrowNullReferenceException();
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Contains
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains (SimpleJSONFixed_JSONArray_o* array, System_String_o* value, const MethodInfo* method);
// 0x181e16a30
// eh: try 0x181e16ae0..0x181e16bd8 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e16b8e: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e16b93: cmp qword ptr [r8], 0
// asm:   0x181e16b97: je 0x181e16baa
// asm:   0x181e16b99: xor ecx, ecx
// asm:   0x181e16b9b: mov r8, qword ptr [r8]
// asm:   0x181e16b9e: mov rdx, qword ptr [rip + 0x228275b]  ; TypeInfo_System_IDisposable
// asm:   0x181e16ba5: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e16baa: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e16baf: test rcx, rcx
// asm:   0x181e16bb2: jne 0x181e16bd8
// asm:   0x181e16bd8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
               (SimpleJSONFixed_JSONArray_o *array,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  void *pvVar3;
  longlong *plVar4;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184344cc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_184344cc9 = '\x01';
  }
  if (array != (SimpleJSONFixed_JSONArray_o *)0x0) {
    pIVar2 = (Il2CppObject *)
             (*(array->klass->vtable)._27_get_Children.methodPtr)
                       (array,(array->klass->vtable)._27_get_Children.method);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar2 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar2);
      while( true ) {
        if (pIVar2 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar3 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar2);
        if ((char)pvVar3 == '\0') {
          if (pIVar2 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar2);
          }
          return false;
        }
        if (pIVar2 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar4 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar2);
        if (plVar4 == (longlong *)0x0) break;
        a = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        bVar1 = System_String__Equals_196c550(a,value,5,(MethodInfo *)0x0);
        if (bVar1) {
          if (pIVar2 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar2);
          }
          return true;
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet (System_Collections_Generic_IEnumerable_JSONNode__o* ids, const MethodInfo* method);
// 0x181e175e0
// eh: try 0x181e17730..0x181e178dd -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e17883: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e17888: cmp qword ptr [r8], 0
// asm:   0x181e1788c: je 0x181e1789f
// asm:   0x181e1788e: xor ecx, ecx
// asm:   0x181e17890: mov r8, qword ptr [r8]
// asm:   0x181e17893: mov rdx, qword ptr [rip + 0x2281a66]  ; TypeInfo_System_IDisposable
// asm:   0x181e1789a: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e1789f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e178a4: test rcx, rcx
// asm:   0x181e178a7: jne 0x181e178dd
// asm:   0x181e178a9: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x181e178dd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
          (System_Collections_Generic_IEnumerable_JSONNode__o *ids,MethodInfo *method)

{
  ushort uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_Collections_Generic_HashSet_string__o *__this;
  Il2CppObject *obj;
  void *pvVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  System_String_o *value;
  ushort uVar8;
  
  if (Il2CppMethodInitialized_184344cca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184344cca = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if (ids == (System_Collections_Generic_IEnumerable_JSONNode__o *)0x0) {
    ThrowNullReferenceException();
  }
  obj = InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,
                   (Il2CppObject *)ids);
  do {
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj);
    if ((char)pvVar5 == '\0') {
      if (obj != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
      }
      return __this;
    }
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar8 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar8].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
          pVVar6 = pIVar2->vtable + pIVar3[uVar8].offset;
          goto label_181e177b6;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181e177b6:
    pIVar7 = (*pVVar6->methodPtr)(obj,pVVar6->method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      value = (System_String_o *)(*pIVar7->klass->vtable[9].methodPtr)(pIVar7);
      bVar4 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
      if (!bVar4) {
        pIVar7 = (Il2CppObject *)(*pIVar7->klass->vtable[9].methodPtr)(pIVar7,pIVar7->klass->vtable[9].method)
        ;
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this,pIVar7,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
    }
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet (System_Collections_Generic_IEnumerable_string__o* ids, const MethodInfo* method);
// 0x181e178f0
// eh: try 0x181e17a30..0x181e17b6c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e17b17: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181e17b1c: cmp qword ptr [r8], 0
// asm:   0x181e17b20: je 0x181e17b33
// asm:   0x181e17b22: xor ecx, ecx
// asm:   0x181e17b24: mov r8, qword ptr [r8]
// asm:   0x181e17b27: mov rdx, qword ptr [rip + 0x22817d2]  ; TypeInfo_System_IDisposable
// asm:   0x181e17b2e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e17b33: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e17b38: test rcx, rcx
// asm:   0x181e17b3b: jne 0x181e17b6c
// asm:   0x181e17b3d: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x181e17b6c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet_1e178f0
          (System_Collections_Generic_IEnumerable_string__o *ids,MethodInfo *method)

{
  ushort uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_Collections_Generic_HashSet_string__o *__this;
  Il2CppObject *obj;
  void *pvVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *value;
  ushort uVar7;
  
  if (Il2CppMethodInitialized_184344ccb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184344ccb = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if (ids == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  obj = InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,(Il2CppObject *)ids
                  );
  do {
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj);
    if ((char)pvVar5 == '\0') {
      if (obj != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
      }
      return __this;
    }
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar7 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pVVar6 = pIVar2->vtable + pIVar3[uVar7].offset;
          goto label_181e17aa6;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_181e17aa6:
    value = (*pVVar6->methodPtr)(obj,pVVar6->method);
    bVar4 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
    if (!bVar4) {
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)value,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    }
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRole
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole (System_Collections_Generic_IEnumerable_string__o* roles, System_String_o* required, const MethodInfo* method);
// 0x181e17360

bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
               (System_Collections_Generic_IEnumerable_string__o *roles,System_String_o *required,
               MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *object;
  System_Func_string__bool__o *__this;
  
  if (Il2CppMethodInitialized_184344ccc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0_HasRole_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0);
    Il2CppMethodInitialized_184344ccc = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *)0x0) {
    (object->fields).required = required;
    Il2CppCodeGenWriteBarrier(&(object->fields).required,required);
    bVar1 = System_String__IsNullOrWhiteSpace((object->fields).required,(MethodInfo *)0x0);
    if ((!bVar1) && (roles != (System_Collections_Generic_IEnumerable_string__o *)0x0)) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0_HasRole_b__0
                 ,(MethodInfo_B61EB0 *)0x0);
      bVar1 = System_Linq_Enumerable__Any_object__6b6920
                        ((System_Collections_Generic_IEnumerable_TSource__o *)roles,
                         (System_Func_TSource__bool__o *)__this,
                         (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
      return bVar1;
    }
    return false;
  }
  ThrowNullReferenceException();
}


