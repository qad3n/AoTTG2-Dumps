// Type: Gisketch.Aottg2UI.Actions.GisketchFocusInputMode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusInputMode.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__add_Changed (System_Action_o* value, const MethodInfo* method);
// 0x53a0e10

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__add_Changed(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542ba8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542ba8 = '\x01';
  }
  a = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
  while( true ) {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) break;
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed,
                        value_00,a);
    bVar2 = pSVar1 == a;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__remove_Changed (System_Action_o* value, const MethodInfo* method);
// 0x53a0ec0

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__remove_Changed
               (System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542ba9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542ba9 = '\x01';
  }
  source = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
  while( true ) {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) break;
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed,
                        value_00,source);
    bVar2 = pSVar1 == source;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$get_Mode
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_Mode (const MethodInfo* method);
// 0x53a0f70

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_Mode(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542baa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542baa = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$set_Mode
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__set_Mode (int32_t value, const MethodInfo* method);
// 0x53a0fb0

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__set_Mode(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542bab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bab = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$get_IsNavigation
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation (const MethodInfo* method);
// 0x5395820

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 1;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer (const MethodInfo* method);
// 0x5394640

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer(MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  code *vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
    in_RDX = extraout_RDX;
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
    in_RDX = extraout_RDX_00;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 0) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
      in_RDX = extraout_RDX_01;
    }
    else {
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar2->fields).method_code,(pSVar2->fields).method,in_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetNavigation (const MethodInfo* method);
// 0x53947b0

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetNavigation(MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  code *vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
    in_RDX = extraout_RDX;
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
    in_RDX = extraout_RDX_00;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 1) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
      in_RDX = extraout_RDX_01;
    }
    else {
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar2->fields).method_code,(pSVar2->fields).method,in_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$TakeTab
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab (bool* backwards, const MethodInfo* method);
// 0x53a10a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a10e2: cmp byte ptr [rip + 0x21a179b], 0
// asm:   0x53a10e9: je 0x53a1187

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab(bool *backwards,MethodInfo *method)

{
  System_Action_o *pSVar1;
  bool bVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar4;
  
  *backwards = false;
  bVar2 = UnityEngine_Input__GetKeyDown(9,(MethodInfo *)0x0);
  if (bVar2) {
    bVar3 = UnityEngine_Input__GetKey(0x130,(MethodInfo *)0x0);
    if (bVar3) {
      *backwards = true;
    }
    else {
      bVar3 = UnityEngine_Input__GetKey(0x12f,(MethodInfo *)0x0);
      *backwards = bVar3;
    }
    if (Il2CppMethodInitialized_07542bac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bac = '\x01';
    }
    if (Il2CppMethodInitialized_07542884 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542884 = '\x01';
    }
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    if (pGVar4->_Mode_k__BackingField != 1) {
      if (Il2CppMethodInitialized_07542bea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode)
        ;
        Il2CppMethodInitialized_07542bea = '\x01';
        pGVar4 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      }
      pGVar4->_Mode_k__BackingField = 1;
      pSVar1 = pGVar4->Changed;
      if (pSVar1 != (System_Action_o *)0x0) {
        (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$Poll
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll (const MethodInfo* method);
// 0x53a11a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a123c: jmp 0x53a12da

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll(MethodInfo *method)

{
  System_Action_o *pSVar1;
  bool bVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar4;
  
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasNavigationInput(method);
  if (bVar2) {
    if (Il2CppMethodInitialized_07542bac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bac = '\x01';
    }
    if (Il2CppMethodInitialized_07542884 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542884 = '\x01';
    }
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    if (pGVar4->_Mode_k__BackingField == 1) {
      return bVar2;
    }
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    }
    pGVar4->_Mode_k__BackingField = 1;
    pSVar1 = pGVar4->Changed;
  }
  else {
    bVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput(method);
    if (!bVar3) {
      return bVar2;
    }
    if (Il2CppMethodInitialized_07542bac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bac = '\x01';
    }
    if (Il2CppMethodInitialized_07542884 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542884 = '\x01';
    }
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    if (pGVar4->_Mode_k__BackingField == 0) {
      return bVar2;
    }
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    }
    pGVar4->_Mode_k__BackingField = 0;
    pSVar1 = pGVar4->Changed;
  }
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$PollPointerOnly
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly (const MethodInfo* method);
// 0x53a1520

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly(MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  code *vtableDispatch;
  bool bVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar4;
  
  bVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput(method);
  if (bVar3) {
    uVar4 = extraout_RDX;
    if (Il2CppMethodInitialized_07542bac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bac = '\x01';
      uVar4 = extraout_RDX_00;
    }
    if (Il2CppMethodInitialized_07542884 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542884 = '\x01';
      uVar4 = extraout_RDX_01;
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    if (pGVar1->_Mode_k__BackingField != 0) {
      if (Il2CppMethodInitialized_07542bea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode)
        ;
        Il2CppMethodInitialized_07542bea = '\x01';
        pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
        pGVar1->_Mode_k__BackingField = 0;
        pSVar2 = pGVar1->Changed;
        uVar4 = extraout_RDX_02;
      }
      else {
        pGVar1->_Mode_k__BackingField = 0;
        pSVar2 = pGVar1->Changed;
      }
      if (pSVar2 != (System_Action_o *)0x0) {
        vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
        (*vtableDispatch)
                  ((pSVar2->fields).method_code,(pSVar2->fields).method,uVar4,vtableDispatch);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetMode
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode (int32_t mode, const MethodInfo* method);
// 0x53a0ff0

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(int32_t mode,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  code *vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
    in_RDX = extraout_RDX;
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
    in_RDX = extraout_RDX_00;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != mode) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = mode;
      pSVar2 = pGVar1->Changed;
      in_RDX = extraout_RDX_01;
    }
    else {
      pGVar1->_Mode_k__BackingField = mode;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar2->fields).method_code,(pSVar2->fields).method,in_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$HasNavigationInput
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasNavigationInput (const MethodInfo* method);
// 0x53a12f0

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasNavigationInput(MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *method_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_07542bad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Submit");
    il2cpp_codegen_initialize_runtime_metadata(&"Vertical");
    il2cpp_codegen_initialize_runtime_metadata(&"Horizontal");
    Il2CppMethodInitialized_07542bad = '\x01';
  }
  bVar1 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    bVar1 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = UnityEngine_Input__GetKeyDown(0x114,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = UnityEngine_Input__GetKeyDown(0x113,(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = UnityEngine_Input__GetKeyDown(0xd,(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = UnityEngine_Input__GetKeyDown(0x10f,(MethodInfo *)0x0);
            if (!bVar1) {
              method_00 = (MethodInfo *)0x0;
              bVar1 = UnityEngine_Input__GetKeyDown(0x20,(MethodInfo *)0x0);
              if (!bVar1) {
                fVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                  ("Horizontal",method_00);
                if (ABS(fVar3) <= 0.5) {
                  fVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                    ("Vertical",method_00);
                  if (ABS(fVar3) <= 0.5) {
                    fVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                      ("Submit",method_00);
                    bVar2 = 0.5 < ABS(fVar3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$HasPointerInput
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput (const MethodInfo* method);
// 0x53a1410

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput(MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar3;
  bool bVar4;
  int32_t iVar5;
  bool bVar6;
  UnityEngine_Vector2_o UVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_Fields UVar12;
  
  if (Il2CppMethodInitialized_07542bae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bae = '\x01';
  }
  bVar4 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  bVar6 = true;
  if (!bVar4) {
    bVar4 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
    if (!bVar4) {
      bVar4 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
      if (!bVar4) {
        UVar7 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
        if (ABS(UVar7.fields.y * UVar7.fields.y + UVar7.fields.x * UVar7.fields.x) <= 0.01) {
          iVar5 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
          bVar6 = 0 < iVar5;
        }
      }
    }
  }
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_hasMousePosition != false) {
    UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    uVar1 = (pGVar3->_lastMousePosition).fields.x;
    uVar2 = (pGVar3->_lastMousePosition).fields.y;
    fVar8 = UVar11.fields.y - (float)uVar2;
    fVar9 = UVar11.fields.z - (pGVar3->_lastMousePosition).fields.z;
    fVar10 = UVar11.fields.x - (float)uVar1;
    if (0.01 < fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9) {
      bVar6 = true;
    }
  }
  UVar12 = (UnityEngine_Vector3_Fields)UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_lastMousePosition).fields =
       UVar12;
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_hasMousePosition = true;
  return bVar6;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$Axis
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis (System_String_o* name, const MethodInfo* method);
// 0x53a15d0
// eh: try 0x53a15d1..0x53a15d8 -> pad 0x53a15da catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_ArgumentException]
// eh: try 0x53a15ed..0x53a1636 -> pad 0x53a1636 (+1 call sites) cleanup
// eh: try 0x53a1639..0x53a163e -> pad 0x53a1646 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a15da: mov rbx, rax
// asm:   0x53a15dd: cmp edx, 1
// asm:   0x53a15e0: jne 0x53a163e
// asm:   0x53a15e2: mov rdi, rbx
// asm:   0x53a15e5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53a15ea: mov rbx, rax
// asm:   0x53a15ed: lea rdi, [rip + 0x1ed428c]  ; TypeInfo_System_ArgumentException
// asm:   0x53a15f4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x53a15f9: mov rcx, qword ptr [rbx]
// asm:   0x53a15fc: mov rsi, qword ptr [rcx]
// asm:   0x53a15ff: mov rdi, rax
// asm:   0x53a1602: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x53a1607: test al, al
// asm:   0x53a1609: je 0x53a1615
// asm:   0x53a160b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53a1610: xorps xmm0, xmm0
// asm:   0x53a1613: pop rbx
// asm:   0x53a1614: ret 
// asm:   0x53a1615: mov edi, 8
// asm:   0x53a161a: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x53a161f: mov rcx, qword ptr [rbx]
// asm:   0x53a1622: mov qword ptr [rax], rcx
// asm:   0x53a1625: lea rsi, [rip + 0x1a8bed4]
// asm:   0x53a162c: mov rdi, rax
// asm:   0x53a162f: xor edx, edx
// asm:   0x53a1631: call 0x6e255c0  ; __cxa_throw()
// asm:   0x53a1636: mov rbx, rax
// asm:   0x53a1639: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53a163e: mov rdi, rbx
// asm:   0x53a1641: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53a1646: mov rdi, rax
// asm:   0x53a1649: call 0x2ab61e0  ; __clang_call_terminate()

float Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis(System_String_o *name,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Input__GetAxisRaw(name,(MethodInfo *)0x0);
  return fVar1;
}


