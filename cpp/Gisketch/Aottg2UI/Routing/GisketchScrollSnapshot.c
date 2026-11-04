// Type: Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Routing/GisketchScrollSnapshot.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Capture
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture (UnityEngine_UI_ScrollRect_o* scroll, UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x1818a38a0

Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__return_storage_ptr__,
          UnityEngine_UI_ScrollRect_o *scroll,UnityEngine_Transform_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *target;
  System_String_o *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184341fba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fba = '\x01';
  }
  (__return_storage_ptr__->fields)._scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  (__return_storage_ptr__->fields)._path = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._name = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._horizontalOffset = 0.0;
  (__return_storage_ptr__->fields)._verticalOffset = 0.0;
  (__return_storage_ptr__->fields)._horizontalNormalized = 0.0;
  (__return_storage_ptr__->fields)._verticalNormalized = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  if (Il2CppMethodInitialized_184341fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_184341fb1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  fVar3 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,true,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184341fb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_184341fb2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  fVar4 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,false,(MethodInfo *)0x0);
  target = (UnityEngine_Transform_o *)0x0;
  (__return_storage_ptr__->fields)._path = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._name = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._horizontalOffset = 0.0;
  (__return_storage_ptr__->fields)._verticalOffset = 0.0;
  (__return_storage_ptr__->fields)._horizontalNormalized = 0.0;
  (__return_storage_ptr__->fields)._verticalNormalized = 0.0;
  (__return_storage_ptr__->fields)._scroll = scroll;
  Il2CppCodeGenWriteBarrier((void **)__return_storage_ptr__,scroll);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1818a3bb2;
    target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scroll,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  pSVar2 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__PathFromRoot(root,target,(MethodInfo *)0x0);
  (__return_storage_ptr__->fields)._path = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields)._path,pSVar2);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1818a3bb2;
    pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)scroll,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__return_storage_ptr__->fields)._name = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields)._name,pSVar2);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar6 = 0.0;
  if (bVar1) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1818a3bb2;
    fVar5 = UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition(scroll,(MethodInfo *)0x0);
    fVar5 = fVar5 * fVar3;
  }
  else {
    fVar5 = 0.0;
  }
  (__return_storage_ptr__->fields)._horizontalOffset = fVar5;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar3 = 1.0;
  if (bVar1) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1818a3bb2;
    fVar5 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
    fVar4 = (1.0 - fVar5) * fVar4;
  }
  else {
    fVar4 = 0.0;
  }
  (__return_storage_ptr__->fields)._verticalOffset = fVar4;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1818a3bb2;
    fVar6 = UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition(scroll,(MethodInfo *)0x0);
  }
  (__return_storage_ptr__->fields)._horizontalNormalized = fVar6;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) {
label_1818a3bb2:
      ThrowNullReferenceException();
    }
    fVar3 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
  }
  (__return_storage_ptr__->fields)._verticalNormalized = fVar3;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Restore
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Restore (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a4060

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Restore
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__this,
               UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *scroll;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184341fbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fbb = '\x01';
  }
  scroll = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Resolve(__this,root,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(scroll->klass->vtable)._41_StopMovement.methodPtr)
              (scroll,(scroll->klass->vtable)._41_StopMovement.method);
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    if (Il2CppMethodInitialized_184341fb1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      Il2CppMethodInitialized_184341fb1 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    fVar2 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,true,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341fb2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      Il2CppMethodInitialized_184341fb2 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    fVar3 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,false,(MethodInfo *)0x0);
    if (fVar2 <= 0.01) {
      fVar2 = (__this->fields)._horizontalNormalized;
    }
    else {
      fVar2 = (__this->fields)._horizontalOffset / fVar2;
    }
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition(scroll,fVar2,(MethodInfo *)0x0);
    if (fVar3 <= 0.01) {
      fVar2 = (__this->fields)._verticalNormalized;
    }
    else {
      fVar2 = 1.0 - (__this->fields)._verticalOffset / fVar3;
    }
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(scroll,fVar2,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$LiveRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__LiveRoot (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o __this, const MethodInfo* method);
// 0x1818a3bc0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__LiveRoot
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_184341fbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fbc = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      return pUVar3;
    }
    ThrowNullReferenceException();
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Resolve
// il2cpp: UnityEngine_UI_ScrollRect_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Resolve (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a3fa0

UnityEngine_UI_ScrollRect_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Resolve
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__this,UnityEngine_GameObject_o *root,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  
  if (Il2CppMethodInitialized_184341fbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fbd = '\x01';
  }
  pUVar2 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__ResolveFromRoot
                     (__this,root,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = (__this->fields)._scroll;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return (UnityEngine_UI_ScrollRect_o *)0x0;
    }
    return (__this->fields)._scroll;
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$ResolveFromRoot
// il2cpp: UnityEngine_UI_ScrollRect_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__ResolveFromRoot (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a3c40
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a3df8: xor esi, esi
// asm:   0x1818a3e8e: nop 
// asm:   0x1818a3f7e: mov rax, rsi
// asm:   0x1818a3f81: jmp 0x1818a3f5c
// asm:   0x1818a3f83: mov rax, rbx
// asm:   0x1818a3f86: jmp 0x1818a3f5c

UnityEngine_UI_ScrollRect_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__ResolveFromRoot
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__this,UnityEngine_GameObject_o *root,
          MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *root_00;
  System_String_array *pSVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *x;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *__this_00;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184341fbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fbe = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (UnityEngine_UI_ScrollRect_o *)0x0;
  }
  if (root == (UnityEngine_GameObject_o *)0x0) {
label_1818a3f99:
    ThrowNullReferenceException();
  }
  root_00 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._path;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  if (Il2CppMethodInitialized_184341fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fb5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) || (bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0), bVar2)) {
label_1818a3dfa:
    root_00 = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if ((pSVar5 == (System_String_o *)0x0) ||
       (pSVar3 = System_String__Split(pSVar5,0x2f,0,(MethodInfo *)0x0), pSVar3 == (System_String_array *)0x0))
    goto label_1818a3f99;
    for (uVar6 = 0; (int)uVar6 < (int)pSVar3->max_length; uVar6 = uVar6 + 1) {
      if ((uint)pSVar3->max_length <= uVar6) goto label_1818a3f93;
      pSVar5 = pSVar3->m_Items[(int)uVar6];
      if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      }
      root_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindDirectChild
                          (root_00,pSVar5,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)root_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) goto label_1818a3dfa;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root_00 == (UnityEngine_Transform_o *)0x0) goto label_1818a3f99;
    x = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)
        UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)root_00,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
  }
  else {
    x = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar4 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (root,true,
                        (MethodInfo_6F5750 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ScrollRect);
    if (pUVar4 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) goto label_1818a3f99;
    x = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
    for (uVar6 = 0; (int)uVar6 < (int)pUVar4->max_length; uVar6 = uVar6 + 1) {
      if ((uint)pUVar4->max_length <= uVar6) goto label_1818a3f93;
      pUVar1 = (&pUVar4->m_Items[0].klass)[(int)uVar6];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((uint)pUVar4->max_length <= uVar6) goto label_1818a3f93;
        pUVar1 = (&pUVar4->m_Items[0].klass)[(int)uVar6];
        if (pUVar1 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) goto label_1818a3f99;
        pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
        bVar2 = System_String__op_Inequality(pSVar5,(__this->fields)._name,(MethodInfo *)0x0);
        if (!bVar2) {
          if ((uint)pUVar4->max_length <= uVar6) goto label_1818a3f93;
          pUVar1 = (&pUVar4->m_Items[0].klass)[(int)uVar6];
          if ((pUVar1 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) ||
             (__this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_1818a3f99;
          bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
          if (bVar2) {
            if (uVar6 < (uint)pUVar4->max_length) {
              return (UnityEngine_UI_ScrollRect_o *)(&pUVar4->m_Items[0].klass)[(int)uVar6];
            }
label_1818a3f93:
            ThrowIndexOutOfRangeException();
          }
          if (x == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) {
            if ((uint)pUVar4->max_length <= uVar6) goto label_1818a3f93;
            x = (&pUVar4->m_Items[0].klass)[(int)uVar6];
          }
        }
      }
    }
  }
  return (UnityEngine_UI_ScrollRect_o *)x;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10___ctor (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10___ctor(Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_IDisposable_Dispose(Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x1818bfba0

bool Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__MoveNext
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar2;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) ||
       (pGVar2 = (__this_00->fields)._entries,
       pGVar2 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0)) {
label_1818bfc16:
      ThrowNullReferenceException();
    }
    if ((int)pGVar2->max_length != 0) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) goto label_1818bfc16;
    Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore
              (__this_00,(__this->fields).root,(MethodInfo *)0x0);
  }
  return false;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x1818bfc20

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_RestoreNextFrame_d__10_System_Collections_IEnum
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot___ctor (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array* entries, const MethodInfo* method);
// 0x1818ae5c0

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,
               Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *entries,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184341faa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_184341faa = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (entries == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    entries = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries;
  }
  if (__this != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
    (__this->fields)._entries = entries;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._entries,entries);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$get_HasEntries
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__get_HasEntries (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, const MethodInfo* method);
// 0x1818ae650

bool Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__get_HasEntries
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar1;
  
  pGVar1 = (__this->fields)._entries;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    return (int)pGVar1->max_length != 0;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$Empty
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty (const MethodInfo* method);
// 0x1818ad8f0

Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty(MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *value;
  
  if (Il2CppMethodInitialized_184341fab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_184341fab = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  value = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot)
  ;
  if (Il2CppMethodInitialized_184341faa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_184341faa = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (value == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    value = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries;
  }
  if (__this != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
    (__this->fields)._entries = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._entries,value);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$CaptureNearest
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureNearest (UnityEngine_GameObject_o* source, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818ad6d0

Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureNearest
          (UnityEngine_GameObject_o *source,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  UnityEngine_UI_ScrollRect_o *scroll;
  UnityEngine_Transform_o *pUVar8;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *value;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *pGVar9;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *pGVar10;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o local_38;
  
  if (Il2CppMethodInitialized_184341fac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fac = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_1818ad8e6;
    scroll = UnityEngine_GameObject__GetComponentInParent_object__6f5300
                       (source,true,
                        (MethodInfo_6F5300 *)MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect
                       );
  }
  else {
    scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    pGVar10 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)0x0);
    return pGVar10;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818ad8e6;
    pUVar8 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
  }
  else {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1818ad8e6;
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scroll,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1818ad8e6;
    pUVar8 = UnityEngine_Transform__GetRoot(pUVar8,(MethodInfo *)0x0);
  }
  value = (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)
          SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array,1);
  pGVar9 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture
                     (&local_38,scroll,pUVar8,(MethodInfo *)0x0);
  if (value != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((int)value->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1 = (pGVar9->fields)._path;
    pSVar2 = (pGVar9->fields)._name;
    fVar3 = (pGVar9->fields)._horizontalOffset;
    fVar4 = (pGVar9->fields)._verticalOffset;
    fVar5 = (pGVar9->fields)._horizontalNormalized;
    fVar6 = (pGVar9->fields)._verticalNormalized;
    value->m_Items[0].fields._scroll = (pGVar9->fields)._scroll;
    value->m_Items[0].fields._path = pSVar1;
    value->m_Items[0].fields._name = pSVar2;
    value->m_Items[0].fields._horizontalOffset = fVar3;
    value->m_Items[0].fields._verticalOffset = fVar4;
    value->m_Items[0].fields._horizontalNormalized = fVar5;
    value->m_Items[0].fields._verticalNormalized = fVar6;
    Il2CppCodeGenWriteBarrier((void **)value->m_Items,(void *)0x0);
    pGVar10 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    if (Il2CppMethodInitialized_184341faa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      Il2CppMethodInitialized_184341faa = '\x01';
    }
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar10,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
      (pGVar10->fields)._entries = value;
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields)._entries,value);
      return pGVar10;
    }
  }
label_1818ad8e6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$CaptureAll
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureAll (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818ad3e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ad509: nop dword ptr [rax]

Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureAll
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *x;
  bool bVar1;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar2;
  System_Collections_Generic_List_GisketchScrollSnapshot_Entry__o *__this;
  UnityEngine_Transform_o *root_00;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *value;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *pGVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o local_38;
  
  if (Il2CppMethodInitialized_184341fad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fad = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    pGVar3 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)0x0);
    return pGVar3;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (root,true,
                        (MethodInfo_6F5750 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ScrollRect);
    if ((pUVar2 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) ||
       (pUVar2->max_length == 0)) {
label_1818ad658:
      if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      }
      pGVar3 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)0x0);
      return pGVar3;
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry);
    System_Collections_Generic_List_GisketchScrollSnapshot_Entry____ctor
              ((System_Collections_Generic_List_T__o *)__this,(int32_t)pUVar2->max_length,
               (MethodInfo_92A4F0 *)
               MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_ctor);
    root_00 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    for (uVar4 = 0; (int)uVar4 < (int)pUVar2->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pUVar2->max_length <= uVar4) {
label_1818ad6c1:
        ThrowIndexOutOfRangeException();
      }
      x = (&pUVar2->m_Items[0].klass)[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((uint)pUVar2->max_length <= uVar4) goto label_1818ad6c1;
        Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture
                  (&local_38,(UnityEngine_UI_ScrollRect_o *)(&pUVar2->m_Items[0].klass)[(int)uVar4],root_00,
                   (MethodInfo *)0x0);
        if (__this == (System_Collections_Generic_List_GisketchScrollSnapshot_Entry__o *)0x0)
        goto label_1818ad6c7;
        il2cpp_runtime_helper_18003aa10(__this);
      }
    }
    if (__this != (System_Collections_Generic_List_GisketchScrollSnapshot_Entry__o *)0x0) {
      if ((__this->fields)._size < 1) goto label_1818ad658;
      value = (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)
              System_Collections_Generic_List_GisketchScrollSnapshot_Entry___ToArray
                        ((System_Collections_Generic_List_T__o *)__this,
                         (MethodInfo_929FE0 *)
                         MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_ToArray);
      pGVar3 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      if (Il2CppMethodInitialized_184341faa == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot)
        ;
        Il2CppMethodInitialized_184341faa = '\x01';
      }
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar3,(MethodInfo *)0x0);
      if (value == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
        }
        value = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries;
      }
      if (pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
        (pGVar3->fields)._entries = value;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._entries,value);
        return pGVar3;
      }
    }
  }
label_1818ad6c7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$Restore
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818ae390
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ae40f: mov rsi, rbp
// asm:   0x1818ae412: jmp 0x1818ae4b3
// asm:   0x1818ae4af: jmp 0x1818ae444
// asm:   0x1818ae51f: jmp 0x1818ae536

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,UnityEngine_GameObject_o *root,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar1;
  bool bVar2;
  UnityEngine_Object_o *x;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184341fae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fae = '\x01';
  }
  pGVar1 = (__this->fields)._entries;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)root;
    if (bVar2) {
label_1818ae4b3:
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
                ((UnityEngine_GameObject_o *)x,2,(MethodInfo *)0x0);
      uVar3 = 0;
      pGVar1 = (__this->fields)._entries;
      while (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
        if ((int)pGVar1->max_length <= (int)uVar3) {
          return;
        }
        pGVar1 = (__this->fields)._entries;
        if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) break;
        if ((uint)pGVar1->max_length <= uVar3) {
label_1818ae53c:
          ThrowIndexOutOfRangeException();
        }
        Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Restore
                  (pGVar1->m_Items + (int)uVar3,root,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        pGVar1 = (__this->fields)._entries;
      }
    }
    else {
      if (Il2CppMethodInitialized_184341fb0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184341fb0 = '\x01';
      }
      uVar3 = 0;
      pGVar1 = (__this->fields)._entries;
      while (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
        if ((int)pGVar1->max_length <= (int)uVar3) {
          x = (UnityEngine_Object_o *)0x0;
          goto label_1818ae4b3;
        }
        pGVar1 = (__this->fields)._entries;
        if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) break;
        if ((uint)pGVar1->max_length <= uVar3) goto label_1818ae53c;
        x = (UnityEngine_Object_o *)
            Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__LiveRoot
                      (pGVar1->m_Items + (int)uVar3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) goto label_1818ae4b3;
        uVar3 = uVar3 + 1;
        pGVar1 = (__this->fields)._entries;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$RestoreNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818ae300

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,UnityEngine_GameObject_o *root,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_184341faf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_RestoreNextFrame_d__10);
    Il2CppMethodInitialized_184341faf = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_RestoreNextFrame_d__10);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).root,root);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FirstLiveScrollRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FirstLiveScrollRoot (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, const MethodInfo* method);
// 0x1818add50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818add8f: nop 
// asm:   0x1818addef: jmp 0x1818add90

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FirstLiveScrollRoot
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar1;
  bool bVar2;
  UnityEngine_Object_o *x;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184341fb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fb0 = '\x01';
  }
  uVar3 = 0;
  pGVar1 = (__this->fields)._entries;
  while (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar3) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    pGVar1 = (__this->fields)._entries;
    if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__LiveRoot
                  (pGVar1->m_Items + (int)uVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return (UnityEngine_GameObject_o *)x;
    }
    uVar3 = uVar3 + 1;
    pGVar1 = (__this->fields)._entries;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxHorizontal
// il2cpp: float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxHorizontal (UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x1818ade30

float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxHorizontal
                (UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184341fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_184341fb1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  fVar1 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,true,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxVertical
// il2cpp: float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxVertical (UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x1818ae030

float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxVertical
                (UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184341fb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_184341fb2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  fVar1 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,false,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxScroll
// il2cpp: float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll (UnityEngine_UI_ScrollRect_o* scroll, bool horizontal, const MethodInfo* method);
// 0x1818ade80

float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll
                (UnityEngine_UI_ScrollRect_o *scroll,bool horizontal,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_Rect_o *pUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184341fb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341fb3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1818ae01d;
    pUVar1 = (scroll->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (scroll->fields).m_Viewport;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pUVar1 = (scroll->fields).m_Content;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar3 = UnityEngine_RectTransform__get_rect(local_38,pUVar1,(MethodInfo *)0x0);
          if (horizontal) {
            fVar4 = (pUVar3->fields).m_Width;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            pUVar1 = (scroll->fields).m_Viewport;
            if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_1818ae01d;
            pUVar3 = UnityEngine_RectTransform__get_rect(local_38,pUVar1,(MethodInfo *)0x0);
            fVar5 = (pUVar3->fields).m_Width;
          }
          else {
            fVar4 = (pUVar3->fields).m_Height;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            pUVar1 = (scroll->fields).m_Viewport;
            if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_1818ae01d;
            pUVar3 = UnityEngine_RectTransform__get_rect(local_38,pUVar1,(MethodInfo *)0x0);
            fVar5 = (pUVar3->fields).m_Height;
          }
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          if (fVar4 - fVar5 < 0.0) {
            return 0.0;
          }
          return fVar4 - fVar5;
        }
label_1818ae01d:
        ThrowNullReferenceException();
      }
    }
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$PathFromRoot
// il2cpp: System_String_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__PathFromRoot (UnityEngine_Transform_o* root, UnityEngine_Transform_o* target, const MethodInfo* method);
// 0x1818ae080

System_String_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__PathFromRoot
          (UnityEngine_Transform_o *root,UnityEngine_Transform_o *target,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar6;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  
  if (Il2CppMethodInitialized_184341fb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Reverse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184341fb4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      while( true ) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar5) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)root,(MethodInfo *)0x0);
        if (!bVar5) break;
        if (target == (UnityEngine_Transform_o *)0x0) goto label_1818ae2f8;
        pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)target,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_1818ae2f8;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_1818ae2f8;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
          target = UnityEngine_Transform__GetParent(target,(MethodInfo *)0x0);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          target = UnityEngine_Transform__GetParent(target,(MethodInfo *)0x0);
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      if (!bVar5) {
        if (__this != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Reverse
                    ((System_Collections_Generic_List_object__o *)__this,
                     (MethodInfo_947A90 *)MethodInfo_System_Collections_Generic_List_string_Reverse);
          value = System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_T__o *)__this,
                             (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
          pSVar6 = System_String__Join("/",(System_String_array *)value,(MethodInfo *)0x0);
          return pSVar6;
        }
label_1818ae2f8:
        ThrowNullReferenceException();
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FindByPath
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindByPath (UnityEngine_Transform_o* root, System_String_o* path, const MethodInfo* method);
// 0x1818ad9c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818adad4: mov rax, rsi
// asm:   0x1818adad7: jmp 0x1818adadb

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindByPath
          (UnityEngine_Transform_o *root,System_String_o *path,MethodInfo *method)

{
  System_String_o *name;
  bool bVar1;
  System_String_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184341fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fb5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0), bVar1)) {
label_1818adad9:
    root = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if ((path == (System_String_o *)0x0) ||
       (pSVar2 = System_String__Split(path,0x2f,0,(MethodInfo *)0x0), pSVar2 == (System_String_array *)0x0)) {
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      name = pSVar2->m_Items[(int)uVar3];
      if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      }
      root = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindDirectChild(root,name,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) goto label_1818adad9;
    }
  }
  return root;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FindDirectChild
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindDirectChild (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x1818adb00
// eh: try 0x1818adbd0..0x1818add38 -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818adbcc: nop dword ptr [rax]
// asm:   0x1818adc9a: mov qword ptr [rsp + 0x88], rdi
// asm:   0x1818adca2: jmp 0x1818adbd0
// asm:   0x1818adcde: jmp 0x1818adcfc
// asm:   0x1818adce0: lea rcx, [rsp + 0x38]
// asm:   0x1818adce5: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1818adcea: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818adcef: test rcx, rcx
// asm:   0x1818adcf2: jne 0x1818add38
// asm:   0x1818adcf4: mov rdi, qword ptr [rsp + 0x88]
// asm:   0x1818adcfc: mov rax, rdi
// asm:   0x1818adcff: jmp 0x1818add03
// asm:   0x1818add38: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindDirectChild
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  void *pvVar3;
  UnityEngine_Transform_o *__this;
  System_String_o *a;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  Il2CppObject *local_res8;
  Il2CppObject *local_48 [2];
  undefined8 local_38;
  Il2CppObject **local_30;
  Il2CppObject **local_28;
  
  if (Il2CppMethodInitialized_184341fb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_184341fb6 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  local_48[0] = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res8 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
    local_38 = 0;
    local_30 = &local_res8;
    local_28 = local_48;
    pUVar4 = (UnityEngine_Transform_o *)0x0;
    while( true ) {
      if (local_res8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar3 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
      if ((char)pvVar3 == '\0') break;
      if (local_res8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      __this = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
      if (__this == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this);
      }
      a = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
      if (bVar2) {
        __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
        if (bVar2) {
          il2cpp_runtime_helper_1806aa210(&local_30);
          return __this;
        }
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
          pUVar4 = __this;
        }
      }
    }
    local_48[0] = il2cpp_vm_Object_IsInst(local_res8,(Il2CppClass *)TypeInfo_System_IDisposable);
    if (local_48[0] != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_48[0]);
    }
  }
  return pUVar4;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot___cctor (const MethodInfo* method);
// 0x1818ae550

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *value;
  
  if (Il2CppMethodInitialized_184341fb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_184341fb7 = '\x01';
  }
  value = (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)
          SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array,0);
  TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries,value);
  return;
}


