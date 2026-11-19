// Type: Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Routing/GisketchScrollSnapshot.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Capture
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture (UnityEngine_UI_ScrollRect_o* scroll, UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x5352a80

Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__return_storage_ptr__,
          UnityEngine_UI_ScrollRect_o *scroll,UnityEngine_Transform_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_Transform_o *target;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar3;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_UI_ScrollRect_o *local_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (Il2CppMethodInitialized_07542936 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542936 = '\x01';
    pMVar3 = extraout_RDX_05;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor != 0)
    goto label_05352abc;
label_05352c32:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    pMVar3 = extraout_RDX_06;
    if (Il2CppMethodInitialized_0754292d != '\0') goto label_05352ac9;
label_05352c44:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_0754292d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor;
    pMVar3 = extraout_RDX_07;
  }
  else {
    pMVar3 = (MethodInfo *)root;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0)
    goto label_05352c32;
label_05352abc:
    if (Il2CppMethodInitialized_0754292d == '\0') goto label_05352c44;
label_05352ac9:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    pMVar3 = extraout_RDX_08;
  }
  fVar4 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,true,pMVar3);
  pMVar3 = extraout_RDX;
  if (Il2CppMethodInitialized_0754292e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_0754292e = '\x01';
    pMVar3 = extraout_RDX_00;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    pMVar3 = extraout_RDX_01;
  }
  fVar5 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,false,pMVar3);
  pSStack_50 = (System_String_o *)0x0;
  pSStack_48 = (System_String_o *)0x0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_58 = scroll;
  Il2CppCodeGenWriteBarrier(&local_58);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  target = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar3 = extraout_RDX_02;
  if (bVar2) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05352de1;
    target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scroll,(MethodInfo *)0x0);
    pMVar3 = extraout_RDX_03;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    pMVar3 = extraout_RDX_04;
  }
  pSStack_50 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__PathFromRoot(root,target,pMVar3);
  Il2CppCodeGenWriteBarrier(&pSStack_50);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05352de1;
    pSStack_48 = UnityEngine_Object__get_name((UnityEngine_Object_o *)scroll,(MethodInfo *)0x0);
  }
  else {
    pSStack_48 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  Il2CppCodeGenWriteBarrier(&pSStack_48);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar6 = 0.0;
  if (bVar2) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05352de1;
    fVar6 = UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition(scroll,(MethodInfo *)0x0);
    fVar6 = fVar4 * fVar6;
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,fVar6);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = 0.0;
  if (bVar2) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05352de1;
    fVar4 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
    fVar4 = fVar5 * (1.0 - fVar4);
  }
  uStack_40 = CONCAT44(fVar4,(undefined4)uStack_40);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = 0.0;
  if (bVar2) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05352de1;
    fVar4 = UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition(scroll,(MethodInfo *)0x0);
  }
  uStack_38 = CONCAT44(uStack_38._4_4_,fVar4);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) {
label_05352de1:
      ThrowNullReferenceException();
    }
    fVar4 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
  }
  else {
    fVar4 = 1.0;
  }
  (__return_storage_ptr__->fields)._name = pSStack_48;
  (__return_storage_ptr__->fields)._horizontalOffset = (float)(undefined4)uStack_40;
  (__return_storage_ptr__->fields)._verticalOffset = (float)uStack_40._4_4_;
  (__return_storage_ptr__->fields)._scroll = local_58;
  (__return_storage_ptr__->fields)._path = pSStack_50;
  (__return_storage_ptr__->fields)._horizontalNormalized = (float)(undefined4)uStack_38;
  (__return_storage_ptr__->fields)._verticalNormalized = fVar4;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Restore
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Restore (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5352f10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5352fba: cmp byte ptr [rip + 0x21ef96c], 0
// asm:   0x5352fc1: je 0x53530d5

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Restore
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__this,
               UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_UI_ScrollRect_o *scroll;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar3;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542937 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542937 = '\x01';
    method = extraout_RDX;
  }
  scroll = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Resolve(__this,root,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(scroll->klass->vtable)._41_StopMovement.methodPtr)
            (scroll,(scroll->klass->vtable)._41_StopMovement.method);
  pMVar3 = extraout_RDX_00;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    pMVar3 = extraout_RDX_04;
  }
  if (Il2CppMethodInitialized_0754292d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_0754292d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor;
    pMVar3 = extraout_RDX_05;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    pMVar3 = extraout_RDX_06;
  }
  fVar4 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,true,pMVar3);
  pMVar3 = extraout_RDX_01;
  if (Il2CppMethodInitialized_0754292e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_0754292e = '\x01';
    pMVar3 = extraout_RDX_02;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    pMVar3 = extraout_RDX_03;
  }
  fVar5 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,false,pMVar3);
  if (fVar4 <= 0.01) {
    fVar4 = (__this->fields)._horizontalNormalized;
  }
  else {
    fVar4 = (__this->fields)._horizontalOffset / fVar4;
  }
  fVar6 = 1.0;
  if (fVar4 <= 1.0) {
    fVar6 = fVar4;
  }
  UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition
            (scroll,(float)(-(uint)(0.0 <= fVar4) & (uint)fVar6),(MethodInfo *)0x0);
  if (fVar5 <= 0.01) {
    fVar4 = (__this->fields)._verticalNormalized;
  }
  else {
    fVar4 = 1.0 - (__this->fields)._verticalOffset / fVar5;
  }
  fVar5 = 1.0;
  if (fVar4 <= 1.0) {
    fVar5 = fVar4;
  }
  UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
            (scroll,(float)(-(uint)(0.0 <= fVar4) & (uint)fVar5),(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$LiveRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__LiveRoot (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o __this, const MethodInfo* method);
// 0x5353130

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__LiveRoot
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_07542938 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542938 = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    return pUVar3;
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Resolve
// il2cpp: UnityEngine_UI_ScrollRect_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Resolve (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5353c50

UnityEngine_UI_ScrollRect_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Resolve
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__this,UnityEngine_GameObject_o *root,
          MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *x;
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *x_00;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07542939 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542939 = '\x01';
    method = extraout_RDX;
  }
  x_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__ResolveFromRoot(__this,root,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    x = (__this->fields)._scroll;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    x_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      x_00 = (__this->fields)._scroll;
    }
  }
  return x_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$ResolveFromRoot
// il2cpp: UnityEngine_UI_ScrollRect_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__ResolveFromRoot (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5353cf0

UnityEngine_UI_ScrollRect_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__ResolveFromRoot
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *__this,UnityEngine_GameObject_o *root,
          MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_ScrollRect_o *x_00;
  System_Object_array *pSVar4;
  ulong uVar5;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_0754293a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754293a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (root == (UnityEngine_GameObject_o *)0x0) {
label_05353f4e:
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._path;
    method_00 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      method_00 = extraout_RDX_00;
    }
    pUVar3 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindByPath(pUVar3,pSVar6,method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    x_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05353f4e;
      x_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar3,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         (root,true,
                          (MethodInfo_353C0B0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ScrollRect);
      if (pSVar4 == (System_Object_array *)0x0) goto label_05353f4e;
      if ((int)pSVar4->max_length < 1) {
        x_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
      }
      else {
        uVar5 = pSVar4->max_length & 0xffffffff;
        x_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
        uVar7 = 0;
        do {
          if (uVar5 <= uVar7) goto label_05353f49;
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar7];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            if ((uint)pSVar4->max_length <= uVar7) goto label_05353f49;
            if ((UnityEngine_Object_o *)pSVar4->m_Items[uVar7] == (UnityEngine_Object_o *)0x0)
            goto label_05353f4e;
            pSVar6 = UnityEngine_Object__get_name
                               ((UnityEngine_Object_o *)pSVar4->m_Items[uVar7],(MethodInfo *)0x0);
            bVar2 = System_String__op_Inequality(pSVar6,(__this->fields)._name,(MethodInfo *)0x0);
            if (!bVar2) {
              if ((uint)pSVar4->max_length <= uVar7) {
label_05353f49:
                ThrowIndexOutOfRangeException();
              }
              if (((UnityEngine_Component_o *)pSVar4->m_Items[uVar7] == (UnityEngine_Component_o *)0x0) ||
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pSVar4->m_Items[uVar7],(MethodInfo *)0x0),
                 __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_05353f4e;
              bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
              if (bVar2) {
                if ((uint)uVar7 < (uint)pSVar4->max_length) {
                  return (UnityEngine_UI_ScrollRect_o *)pSVar4->m_Items[uVar7];
                }
                goto label_05353f49;
              }
              if (x_00 == (UnityEngine_UI_ScrollRect_o *)0x0) {
                if ((uint)pSVar4->max_length <= uVar7) goto label_05353f49;
                x_00 = (UnityEngine_UI_ScrollRect_o *)pSVar4->m_Items[uVar7];
              }
            }
          }
          uVar7 = uVar7 + 1;
          uVar1 = (uint)pSVar4->max_length;
          uVar5 = (ulong)uVar1;
        } while ((long)uVar7 < (long)(int)uVar1);
      }
    }
  }
  return x_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10___ctor (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5353110

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x5353f60

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x5353f70

bool Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__MoveNext
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar2;
  MethodInfo *in_RDX;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
label_05353fd6:
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore(__this_00,(__this->fields).root,in_RDX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) ||
       (pGVar2 = (__this_00->fields)._entries,
       pGVar2 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0)) goto label_05353fd6;
    if ((int)pGVar2->max_length != 0) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x5353fe0

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o* __this, const MethodInfo* method);
// 0x5353ff0

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
// 0x5354030

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot___ctor (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array* entries, const MethodInfo* method);
// 0x53527c0

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,
               Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *entries,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_07542926 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (entries == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    entries = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries;
  }
  if (__this == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._entries = entries;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._entries);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$get_HasEntries
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__get_HasEntries (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, const MethodInfo* method);
// 0x5352840

bool Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__get_HasEntries
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar1;
  
  pGVar1 = (__this->fields)._entries;
  if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    ThrowNullReferenceException();
  }
  return (int)pGVar1->max_length != 0;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$Empty
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty (const MethodInfo* method);
// 0x534f080

Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty(MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar1;
  
  if (Il2CppMethodInitialized_07542927 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_07542927 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot)
  ;
  if (Il2CppMethodInitialized_07542926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_07542926 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries;
  }
  if (__this == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._entries = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._entries);
  return __this;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$CaptureNearest
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureNearest (UnityEngine_GameObject_o* source, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5352860

Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureNearest
          (UnityEngine_GameObject_o *source,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *scroll;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *pGVar2;
  UnityEngine_Transform_o *pUVar3;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar4;
  MethodInfo *in_RCX;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_c *method_00;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o GStack_48;
  
  if (Il2CppMethodInitialized_07542928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542928 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_05352a6c;
    scroll = UnityEngine_GameObject__GetComponentInParent_object__353bc10
                       (source,true,
                        (MethodInfo_353BC10 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_ScrollRect);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    pGVar2 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)method_00);
    return pGVar2;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_05352a6c;
    pUVar3 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
  }
  else {
    if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05352a6c;
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scroll,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05352a6c;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  pGVar4 = (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array,1);
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture(&GStack_48,scroll,pUVar3,in_RCX);
  if (pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((int)pGVar4->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pGVar4->m_Items[0].fields._horizontalNormalized = GStack_48.fields._horizontalNormalized;
    pGVar4->m_Items[0].fields._verticalNormalized = GStack_48.fields._verticalNormalized;
    pGVar4->m_Items[0].fields._name = GStack_48.fields._name;
    pGVar4->m_Items[0].fields._horizontalOffset = GStack_48.fields._horizontalOffset;
    pGVar4->m_Items[0].fields._verticalOffset = GStack_48.fields._verticalOffset;
    pGVar4->m_Items[0].fields._scroll = GStack_48.fields._scroll;
    pGVar4->m_Items[0].fields._path = GStack_48.fields._path;
    Il2CppCodeGenWriteBarrier((void **)pGVar4->m_Items);
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    if (Il2CppMethodInitialized_07542926 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      Il2CppMethodInitialized_07542926 = '\x01';
    }
    System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
      (pGVar2->fields)._entries = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._entries);
      return pGVar2;
    }
  }
label_05352a6c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$CaptureAll
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureAll (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x534f140

Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureAll
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  uint uVar3;
  UnityEngine_Object_o *pUVar4;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o item;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_GisketchScrollSnapshot_Entry__o *__this;
  UnityEngine_Transform_o *root_00;
  ulong uVar8;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar9;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *pGVar10;
  MethodInfo *in_RCX;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_c *method_00;
  ulong uVar11;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o local_88;
  UnityEngine_UI_ScrollRect_o *local_58;
  System_String_o *pSStack_50;
  System_String_o *local_48;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542929 == '\0') {
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
    Il2CppMethodInitialized_07542929 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
label_0534f4bf:
    method_00 = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    pGVar10 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)method_00);
    return pGVar10;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (root,true,
                        (MethodInfo_353C0B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_ScrollRect);
    if ((pSVar7 == (System_Object_array *)0x0) || (pSVar7->max_length == 0)) goto label_0534f4bf;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry);
    System_Collections_Generic_List_GisketchScrollSnapshot_Entry____ctor_3aa00e0
              (__this,(int32_t)pSVar7->max_length,
               (MethodInfo_3AA00E0 *)
               MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_ctor);
    root_00 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    if (0 < (int)pSVar7->max_length) {
      uVar8 = pSVar7->max_length & 0xffffffff;
      if (__this == (System_Collections_Generic_List_GisketchScrollSnapshot_Entry__o *)0x0) {
        uVar11 = 0;
        do {
          if (uVar8 <= uVar11) goto label_0534f50f;
          pUVar4 = (UnityEngine_Object_o *)pSVar7->m_Items[uVar11];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            if ((uint)uVar11 < (uint)pSVar7->max_length) {
              Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture
                        (&local_88,(UnityEngine_UI_ScrollRect_o *)pSVar7->m_Items[uVar11],root_00,in_RCX);
              ThrowNullReferenceException();
            }
            goto label_0534f50f;
          }
          uVar11 = uVar11 + 1;
          uVar3 = (uint)pSVar7->max_length;
          uVar8 = (ulong)uVar3;
          in_RCX = (MethodInfo *)(long)(int)uVar3;
        } while ((long)uVar11 < (long)in_RCX);
      }
      else {
        uVar11 = 0;
        do {
          if (uVar8 <= uVar11) {
label_0534f50f:
            ThrowIndexOutOfRangeException();
          }
          pUVar4 = (UnityEngine_Object_o *)pSVar7->m_Items[uVar11];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            if ((uint)pSVar7->max_length <= uVar11) goto label_0534f50f;
            Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Capture
                      (&local_88,(UnityEngine_UI_ScrollRect_o *)pSVar7->m_Items[uVar11],root_00,in_RCX);
            pMVar5 = MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_Add;
            local_38 = local_88.fields._horizontalNormalized;
            fStack_34 = local_88.fields._verticalNormalized;
            local_48 = local_88.fields._name;
            fStack_40 = local_88.fields._horizontalOffset;
            fStack_3c = local_88.fields._verticalOffset;
            local_58 = local_88.fields._scroll;
            pSStack_50 = local_88.fields._path;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar9 = (__this->fields)._items;
            if (pGVar9 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0)
            goto label_0534f4ed;
            uVar3 = (__this->fields)._size;
            if (uVar3 < (uint)pGVar9->max_length) {
              (__this->fields)._size = uVar3 + 1;
              pGVar9->m_Items[(int)uVar3].fields._horizontalNormalized = local_88.fields._horizontalNormalized
              ;
              pGVar9->m_Items[(int)uVar3].fields._verticalNormalized = local_88.fields._verticalNormalized;
              ppSVar2 = &pGVar9->m_Items[(int)uVar3].fields._name;
              *ppSVar2 = local_88.fields._name;
              ppSVar2[1] = (System_String_o *)local_88.fields._24_8_;
              pGVar9->m_Items[(int)uVar3].fields._scroll = local_88.fields._scroll;
              pGVar9->m_Items[(int)uVar3].fields._path = local_88.fields._path;
              Il2CppCodeGenWriteBarrier((void **)(pGVar9->m_Items + (int)uVar3));
            }
            else {
              item.fields._path = local_88.fields._path;
              item.fields._scroll = local_88.fields._scroll;
              item.fields._name = local_88.fields._name;
              item.fields._horizontalOffset = local_88.fields._horizontalOffset;
              item.fields._verticalOffset = local_88.fields._verticalOffset;
              item.fields._horizontalNormalized = local_88.fields._horizontalNormalized;
              item.fields._verticalNormalized = local_88.fields._verticalNormalized;
              System_Collections_Generic_List_GisketchScrollSnapshot_Entry___AddWithResize
                        (__this,item,(MethodInfo_3AA0A50 *)pMVar5->klass->rgctx_data[0xe].method);
            }
          }
          uVar11 = uVar11 + 1;
          uVar3 = (uint)pSVar7->max_length;
          uVar8 = (ulong)uVar3;
          in_RCX = (MethodInfo *)(long)(int)uVar3;
        } while ((long)uVar11 < (long)in_RCX);
      }
    }
    if (__this != (System_Collections_Generic_List_GisketchScrollSnapshot_Entry__o *)0x0) {
      if ((__this->fields)._size < 1) goto label_0534f4bf;
      pGVar9 = System_Collections_Generic_List_GisketchScrollSnapshot_Entry___ToArray
                         (__this,(MethodInfo_3AA3320 *)
                                 MethodInfo_System_Collections_Generic_List_GisketchScrollSnapshot_Entry_ToArray
                         );
      pGVar10 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
      if (Il2CppMethodInitialized_07542926 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot)
        ;
        Il2CppMethodInitialized_07542926 = '\x01';
      }
      System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
      if (pGVar9 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
        }
        pGVar9 = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries;
      }
      if (pGVar10 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
        (pGVar10->fields)._entries = pGVar9;
        Il2CppCodeGenWriteBarrier(&(pGVar10->fields)._entries);
        return pGVar10;
      }
    }
  }
label_0534f4ed:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$Restore
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x534f740
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534f7fd: nop dword ptr [rax]

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore
               (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,UnityEngine_GameObject_o *root,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *root_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX_00;
  ulong uVar5;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_0754292a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754292a = '\x01';
  }
  pGVar6 = (__this->fields)._entries;
  if (pGVar6 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    if ((int)pGVar6->max_length == 0) {
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar4 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    root_00 = root;
    if (!bVar3) {
      root_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FirstLiveScrollRoot(__this,pMVar4);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root_00,2,(MethodInfo *)0x0);
    pGVar6 = (__this->fields)._entries;
    if (pGVar6 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
      lVar7 = 0x20;
      uVar5 = 0;
      pMVar4 = extraout_RDX;
      do {
        uVar1 = (uint)pGVar6->max_length;
        if ((long)(int)uVar1 <= (long)uVar5) {
          return;
        }
        if (uVar1 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        uVar5 = uVar5 + 1;
        lVar2 = lVar7 + -0x20;
        lVar7 = lVar7 + 0x28;
        Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry__Restore
                  ((Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_o *)((long)pGVar6->m_Items + lVar2)
                   ,root,pMVar4);
        pGVar6 = (__this->fields)._entries;
        pMVar4 = extraout_RDX_00;
      } while (pGVar6 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$RestoreNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x534f850

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,UnityEngine_GameObject_o *root,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_0754292b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_RestoreNextFrame_d__10);
    Il2CppMethodInitialized_0754292b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_RestoreNextFrame_d__10);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FirstLiveScrollRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FirstLiveScrollRoot (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o* __this, const MethodInfo* method);
// 0x5352df0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FirstLiveScrollRoot
          (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Component_o *__this_00;
  bool bVar2;
  ulong uVar3;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar4;
  UnityEngine_Object_o *pUVar5;
  long lVar6;
  
  if (Il2CppMethodInitialized_0754292c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754292c = '\x01';
  }
  pGVar4 = (__this->fields)._entries;
  if (pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0) {
    lVar6 = 0x20;
    uVar3 = 0;
    do {
      uVar1 = (uint)pGVar4->max_length;
      if ((long)(int)uVar1 <= (long)uVar3) {
        return (UnityEngine_GameObject_o *)0x0;
      }
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (Il2CppMethodInitialized_07542938 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07542938 = '\x01';
      }
      pUVar5 = *(UnityEngine_Object_o **)((long)pGVar4->m_Items + lVar6 + -0x20);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Object_o *)0x0;
      if (bVar2) {
        __this_00 = *(UnityEngine_Component_o **)((long)pGVar4->m_Items + lVar6 + -0x20);
        if (__this_00 == (UnityEngine_Component_o *)0x0) break;
        pUVar5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        return (UnityEngine_GameObject_o *)pUVar5;
      }
      lVar6 = lVar6 + 0x28;
      uVar3 = uVar3 + 1;
      pGVar4 = (__this->fields)._entries;
    } while (pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxHorizontal
// il2cpp: float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxHorizontal (UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x53531b0

float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxHorizontal
                (UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_0754292d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_0754292d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    fVar2 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,true,method_00);
    return fVar2;
  }
  fVar2 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,true,in_RDX);
  return fVar2;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxVertical
// il2cpp: float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxVertical (UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x53533e0

float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxVertical
                (UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_0754292e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_0754292e = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    fVar2 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,false,method_00);
    return fVar2;
  }
  fVar2 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll(scroll,false,in_RDX);
  return fVar2;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxScroll
// il2cpp: float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll (UnityEngine_UI_ScrollRect_o* scroll, bool horizontal, const MethodInfo* method);
// 0x5353220

float Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__MaxScroll
                (UnityEngine_UI_ScrollRect_o *scroll,bool horizontal,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  float local_48;
  
  if (Il2CppMethodInitialized_0754292f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754292f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scroll,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return 0.0;
  }
  if (scroll == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_053533d0;
  pUVar1 = (scroll->fields).m_Content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    fVar3 = 0.0;
  }
  else {
    pUVar1 = (scroll->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fVar3 = 0.0;
    if (!bVar2) {
      pUVar1 = (scroll->fields).m_Content;
      if (horizontal) {
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
label_053533d0:
          ThrowNullReferenceException();
        }
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        local_48 = UVar5.fields.m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        pUVar1 = (scroll->fields).m_Viewport;
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_053533d0;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        fVar4 = UVar5.fields.m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
      }
      else {
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_053533d0;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        local_48 = UVar5.fields.m_Height;
        pUVar1 = (scroll->fields).m_Viewport;
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_053533d0;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar4 = UVar5.fields.m_Height;
      }
      fVar3 = 0.0;
      if (0.0 <= local_48 - fVar4) {
        fVar3 = local_48 - fVar4;
      }
    }
  }
  return fVar3;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$PathFromRoot
// il2cpp: System_String_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__PathFromRoot (UnityEngine_Transform_o* root, UnityEngine_Transform_o* target, const MethodInfo* method);
// 0x5353450
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5353543: lea r13, [rip + 0x1f4340e]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x535354a: jmp 0x5353577

System_String_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__PathFromRoot
          (UnityEngine_Transform_o *root,UnityEngine_Transform_o *target,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  
  if (Il2CppMethodInitialized_07542930 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Reverse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07542930 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if (__this == (System_Collections_Generic_List_string__o *)0x0) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)root,(MethodInfo *)0x0);
          if (bVar4) {
            if (target != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Object__get_name((UnityEngine_Object_o *)target,(MethodInfo *)0x0);
              ThrowNullReferenceException();
            }
            goto label_053536f3;
          }
        }
label_05353663:
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)root,(MethodInfo *)0x0);
        if (bVar4) goto label_05353686;
        if (__this != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Reverse
                    ((System_Collections_Generic_List_object__o *)__this,
                     (MethodInfo_395F250 *)MethodInfo_System_Collections_Generic_List_string_Reverse);
          pSVar6 = (System_String_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this,
                              (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray)
          ;
          pSVar5 = System_String__Join("/",pSVar6,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
      else {
        while( true ) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar4) goto label_05353663;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)root,(MethodInfo *)0x0);
          if (!bVar4) goto label_05353663;
          if (target == (UnityEngine_Transform_o *)0x0) break;
          pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)target,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this->fields)._items;
          if (pSVar6 == (System_String_array *)0x0) break;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
          target = UnityEngine_Transform__get_parent(target,(MethodInfo *)0x0);
        }
      }
label_053536f3:
      ThrowNullReferenceException();
    }
  }
label_05353686:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FindByPath
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindByPath (UnityEngine_Transform_o* root, System_String_o* path, const MethodInfo* method);
// 0x5353710
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5353835: jmp 0x535383a
// asm:   0x5353837: mov rbx, r15

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindByPath
          (UnityEngine_Transform_o *root,System_String_o *path,MethodInfo *method)

{
  uint uVar1;
  System_String_o *name;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  UnityEngine_Transform_o *pUVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_07542931 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542931 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Transform_o *)0x0;
  if (!bVar2) {
    bVar2 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Transform_o *)0x0;
    if (!bVar2) {
      if ((path == (System_String_o *)0x0) ||
         (pSVar3 = System_String__Split(path,0x2f,0,(MethodInfo *)0x0), pSVar3 == (System_String_array *)0x0))
      {
        ThrowNullReferenceException();
      }
      pUVar5 = root;
      if (0 < (int)pSVar3->max_length) {
        uVar4 = pSVar3->max_length & 0xffffffff;
        uVar6 = 0;
        method_00 = extraout_RDX;
        do {
          if (uVar4 <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          name = pSVar3->m_Items[uVar6];
          if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
            method_00 = extraout_RDX_00;
          }
          pUVar5 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindDirectChild(pUVar5,name,method_00);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            return (UnityEngine_Transform_o *)0x0;
          }
          uVar6 = uVar6 + 1;
          uVar1 = (uint)pSVar3->max_length;
          uVar4 = (ulong)uVar1;
          method_00 = extraout_RDX_01;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
    }
  }
  return pUVar5;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FindDirectChild
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindDirectChild (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x5353860
// eh: try 0x535397f..0x5353b86 -> pad 0x5353b98 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5353bb2..0x5353bb7 -> pad 0x5353bbc cleanup
// eh: try 0x5353bbf..0x5353bc9 -> pad 0x5353bd1 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535396d: nop dword ptr [rax]
// asm:   0x5353abf: jmp 0x5353940
// asm:   0x5353ac4: mov r15, rbx
// asm:   0x5353b79: mov rdi, r14
// asm:   0x5353b7c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5353b86: jmp 0x5353b9a
// asm:   0x5353b88: jmp 0x5353b9a
// asm:   0x5353b8a: jmp 0x5353b9a
// asm:   0x5353b8c: jmp 0x5353b9a
// asm:   0x5353b8e: jmp 0x5353b9a
// asm:   0x5353b90: jmp 0x5353b9a
// asm:   0x5353b92: jmp 0x5353b9a
// asm:   0x5353b94: jmp 0x5353b9a
// asm:   0x5353b96: jmp 0x5353b9a
// asm:   0x5353b98: jmp 0x5353b9a
// asm:   0x5353b9a: mov rbx, rax
// asm:   0x5353b9d: cmp edx, 1
// asm:   0x5353ba0: jne 0x5353bbf
// asm:   0x5353ba2: mov rdi, rbx
// asm:   0x5353ba5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5353baa: mov r14, qword ptr [rax]
// asm:   0x5353bad: mov qword ptr [rsp + 0x10], r14
// asm:   0x5353bb2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5353bb7: jmp 0x5353ac7
// asm:   0x5353bbc: mov rbx, rax
// asm:   0x5353bbf: lea rdi, [rsp + 0x10]
// asm:   0x5353bc4: call 0x2d4aa40  ; il2cpp_runtime_helper_02d4aa40()
// asm:   0x5353bc9: mov rdi, rbx
// asm:   0x5353bcc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5353bd1: mov rdi, rax
// asm:   0x5353bd4: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__FindDirectChild
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Transform_o *__this;
  System_String_o *a;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar6;
  ulong uVar7;
  long lVar8;
  UnityEngine_Transform_o *pUVar9;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07542932 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07542932 = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return (UnityEngine_Transform_o *)0x0;
  }
  if (root == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_58 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
  local_40 = (undefined1 *)&local_58;
  local_48 = 0;
  local_38 = &local_50;
  pUVar9 = (UnityEngine_Transform_o *)0x0;
label_05353940:
  pIVar6 = local_58;
  if (local_58 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = local_58->klass;
  uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar7 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
          TypeInfo_System_Collections_IEnumerator) {
        pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
        goto label_053539a3;
      }
      lVar8 = lVar8 + 0x10;
    } while (uVar7 * 0x10 != lVar8);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_053539a3:
  bVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
  pIVar6 = local_58;
  __this = pUVar9;
  if (bVar4) goto code_r0x053539b4;
  goto label_05353ac7;
code_r0x053539b4:
  if (local_58 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = local_58->klass;
  uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar7 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
          TypeInfo_System_Collections_IEnumerator) {
        pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
        goto label_05353a37;
      }
      lVar8 = lVar8 + 0x10;
    } while (uVar7 * 0x10 != lVar8);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05353a37:
  __this = (UnityEngine_Transform_o *)(*pVVar5->methodPtr)(pIVar6,pVVar5->method);
  if (__this == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this);
  }
  a = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  bVar4 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
  if (bVar4) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar4 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    if (bVar4) {
label_05353ac7:
      pIVar6 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar6 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar2 = pIVar6->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      local_50 = pIVar6;
      if (uVar7 == 0) goto label_05353b1f;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      goto label_05353b10;
    }
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      pUVar9 = __this;
    }
  }
  goto label_05353940;
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
label_05353b10:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
      goto label_05353b3d;
    }
  }
label_05353b1f:
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05353b3d:
  (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
  return __this;
}


// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot___cctor (const MethodInfo* method);
// 0x5353be0
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5353c09: lea rax, [rip + 0x1f21088]  ; TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array
// asm:   0x5353c10: mov rdi, qword ptr [rax]
// asm:   0x5353c13: xor esi, esi
// asm:   0x5353c15: call 0x30d6180  ; SZArrayNew()
// asm:   0x5353c1a: lea rcx, [rip + 0x1f24c27]  ; TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot
// asm:   0x5353c21: mov rdx, qword ptr [rcx]
// asm:   0x5353c24: mov rdx, qword ptr [rdx + 0xb8]
// asm:   0x5353c2b: mov qword ptr [rdx], rax
// asm:   0x5353c2e: mov rcx, qword ptr [rcx]
// asm:   0x5353c31: mov rdi, qword ptr [rcx + 0xb8]
// asm:   0x5353c38: mov rsi, rax
// asm:   0x5353c3b: pop rax
// asm:   0x5353c3c: jmp 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()

void Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot___cctor(MethodInfo *method)

{
  ulong *puVar1;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *pGVar2;
  
  if (Il2CppMethodInitialized_07542933 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    Il2CppMethodInitialized_07542933 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_Entry_array,0);
  TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->static_fields->EmptyEntries = pGVar2;
  if (g_data_07769410 != 0) {
    LOCK();
    puVar1 = (ulong *)((long)&g_data_0759d3f0 +
                      (ulong)((uint)((ulong)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->
                                            static_fields >> 0xf) & 0x3fff8));
    *puVar1 = *puVar1 | 1L << ((byte)((ulong)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->
                                             static_fields >> 0xc) & 0x3f);
    UNLOCK();
  }
  return;
}


