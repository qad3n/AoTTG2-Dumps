// Type: Gisketch.Aottg2UI.Actions.GisketchFocusInputMode
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusInputMode.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__add_Changed (System_Action_o* value, const MethodInfo* method);
// 0x1818ff080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ff0cc: nop dword ptr [rax]

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__add_Changed(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184342229 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_184342229 = '\x01';
  }
  a = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_System_Action);
      }
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed)
    ;
    bVar4 = pSVar2 == a;
    a = pSVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__remove_Changed (System_Action_o* value, const MethodInfo* method);
// 0x1818ff1c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ff20c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__remove_Changed
               (System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_18434222a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_18434222a = '\x01';
  }
  source = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_System_Action);
      }
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed)
    ;
    bVar4 = pSVar2 == source;
    source = pSVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$get_Mode
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_Mode (const MethodInfo* method);
// 0x1818ff180

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_Mode(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434222b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_18434222b = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$set_Mode
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__set_Mode (int32_t value, const MethodInfo* method);
// 0x1818ff280

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__set_Mode(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434222c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_18434222c = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$get_IsNavigation
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation (const MethodInfo* method);
// 0x1818ff140

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184341f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_184341f35 = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 1;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer (const MethodInfo* method);
// 0x1818ff010

void
Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer(MethodInfo* method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetNavigation (const MethodInfo* method);
// 0x1818fa410

void
Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetNavigation(MethodInfo* method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$TakeTab
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab (bool* backwards, const MethodInfo* method);
// 0x1818ff020

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab(bool *backwards,MethodInfo *method)

{
  bool bVar1;
  
  *backwards = false;
  bVar1 = UnityEngine_Input__GetKeyDown(9,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = UnityEngine_Input__GetKey(0x130,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = true;
    }
    else {
      bVar1 = UnityEngine_Input__GetKey(0x12f,(MethodInfo *)0x0);
    }
    *backwards = bVar1;
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$Poll
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll (const MethodInfo* method);
// 0x1818fee10

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll(MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434222e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Submit");
    il2cpp_codegen_initialize_runtime_metadata(&"Vertical");
    il2cpp_codegen_initialize_runtime_metadata(&"Horizontal");
    Il2CppMethodInitialized_18434222e = '\x01';
  }
  bVar1 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
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
              bVar1 = UnityEngine_Input__GetKeyDown(0x20,(MethodInfo *)0x0);
              if (!bVar1) {
                fVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                  ("Horizontal",(MethodInfo *)0x0);
                if (ABS(fVar2) <= 0.5) {
                  fVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                    ("Vertical",(MethodInfo *)0x0);
                  if (ABS(fVar2) <= 0.5) {
                    fVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                      ("Submit",(MethodInfo *)0x0);
                    if (ABS(fVar2) <= 0.5) {
                      bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput
                                        ((MethodInfo *)0x0);
                      if (bVar1) {
                        Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
                      }
                      return false;
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
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
  return true;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$PollPointerOnly
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly (const MethodInfo* method);
// 0x1818fede0

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly(MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput((MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetMode
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode (int32_t mode, const MethodInfo* method);
// 0x1818fef60

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(int32_t mode,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434222d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_18434222d = '\x01';
  }
  if (Il2CppMethodInitialized_184341f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_184341f35 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField != mode)
  {
    if (Il2CppMethodInitialized_18434226b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_18434226b = '\x01';
    }
    TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField = mode;
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$HasNavigationInput
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasNavigationInput (const MethodInfo* method);
// 0x1818feb60

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasNavigationInput(MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434222e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Submit");
    il2cpp_codegen_initialize_runtime_metadata(&"Vertical");
    il2cpp_codegen_initialize_runtime_metadata(&"Horizontal");
    Il2CppMethodInitialized_18434222e = '\x01';
  }
  bVar1 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
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
              bVar1 = UnityEngine_Input__GetKeyDown(0x20,(MethodInfo *)0x0);
              if (!bVar1) {
                fVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                  ("Horizontal",(MethodInfo *)0x0);
                if (ABS(fVar2) <= 0.5) {
                  fVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                    ("Vertical",(MethodInfo *)0x0);
                  if (ABS(fVar2) <= 0.5) {
                    fVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis
                                      ("Submit",(MethodInfo *)0x0);
                    return 0.5 < ABS(fVar2);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$HasPointerInput
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput (const MethodInfo* method);
// 0x1818fec90

bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput(MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStackX_14;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434222f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_18434222f = '\x01';
  }
  bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
      if (!bVar2) {
        UVar4 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
        fStackX_14 = UVar4.fields.y;
        if (ABS(fStackX_14 * fStackX_14 + UVar4.fields.x * UVar4.fields.x) <= 0.01) {
          iVar3 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
          bVar2 = 0 < iVar3;
          goto label_1818fed29;
        }
      }
    }
  }
  bVar2 = true;
label_1818fed29:
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_hasMousePosition != false) {
    pUVar5 = UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    fVar8 = (pUVar5->fields).y - (pGVar1->_lastMousePosition).fields.y;
    fVar7 = (pUVar5->fields).x - (pGVar1->_lastMousePosition).fields.x;
    fVar6 = (pUVar5->fields).z - (pGVar1->_lastMousePosition).fields.z;
    if (0.01 < fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
      bVar2 = true;
    }
  }
  pUVar5 = UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
  fVar7 = (pUVar5->fields).y;
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  fVar6 = (pUVar5->fields).z;
  (pGVar1->_lastMousePosition).fields.x = (pUVar5->fields).x;
  (pGVar1->_lastMousePosition).fields.y = fVar7;
  (pGVar1->_lastMousePosition).fields.z = fVar6;
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_hasMousePosition = true;
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$Axis
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis (System_String_o* name, const MethodInfo* method);
// 0x1818feb40
// eh: try 0x1818feb46..0x1818feb56 -> pad 0x183331b60 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_ArgumentException]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818feb4e: xorps xmm0, xmm0
// asm:   0x183331b60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331b65: push rbx
// asm:   0x183331b66: push rbp
// asm:   0x183331b67: push rdi
// asm:   0x183331b68: sub rsp, 0x20
// asm:   0x183331b6c: mov rbp, rdx
// asm:   0x183331b6f: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331b73: mov rax, qword ptr [rdi]
// asm:   0x183331b76: mov rbx, qword ptr [rax]
// asm:   0x183331b79: lea rcx, [rip + 0xd96230]  ; TypeInfo_System_ArgumentException
// asm:   0x183331b80: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331b85: mov rcx, rax
// asm:   0x183331b88: mov rdx, rbx
// asm:   0x183331b8b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331b90: test al, al
// asm:   0x183331b92: je 0x183331ba0
// asm:   0x183331b94: movabs rax, 0
// asm:   0x183331b9e: jmp 0x183331bb8
// asm:   0x183331ba0: mov rax, qword ptr [rdi]
// asm:   0x183331ba3: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331ba7: lea rdx, [rip + 0xcaa3da]
// asm:   0x183331bae: lea rcx, [rbp + 0x20]
// asm:   0x183331bb2: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331bb8: add rsp, 0x20
// asm:   0x183331bbc: pop rdi
// asm:   0x183331bbd: pop rbp
// asm:   0x183331bbe: pop rbx
// asm:   0x183331bbf: ret 

float Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis(System_String_o *name,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Input__GetAxisRaw(name,(MethodInfo *)0x0);
  return fVar1;
}


