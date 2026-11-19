// Type: Gisketch.Aottg2UI.Actions.GisketchInputCapture
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchInputCapture.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$get_IsActive
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_IsActive (const MethodInfo* method);
// 0x53a4160

bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_IsActive(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542bc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07542bc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken != 0;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$get_BlocksUiInput
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput (const MethodInfo* method);
// 0x53981f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539820d: cmp byte ptr [rip + 0x21aa9b4], 0

bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput(MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  int32_t iVar3;
  Gisketch_Aottg2UI_Actions_GisketchInputCapture_StaticFields *pGVar4;
  
  if (Il2CppMethodInitialized_07542bc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07542bc9 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  if (Il2CppMethodInitialized_07542bc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07542bc8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields;
    iVar2 = pGVar4->_activeToken;
  }
  else {
    pGVar4 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture)->static_fields;
    iVar2 = pGVar4->_activeToken;
  }
  if (iVar2 != 0) {
    return true;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields;
  }
  iVar2 = pGVar4->_blockedFrame;
  iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  return iVar2 == iVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$BlockThisFrame
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame (const MethodInfo* method);
// 0x53982d0

void Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07542bca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07542bca = '\x01';
  }
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar1;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$Begin
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin (const MethodInfo* method);
// 0x53a41b0

int32_t Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin(MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchInputCapture_StaticFields *pGVar1;
  int32_t iVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_07542bcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07542bcb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields;
  iVar3 = pGVar1->_nextToken + 1;
  pGVar1->_nextToken = iVar3;
  pGVar1->_activeToken = iVar3;
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields;
  pGVar1->_blockedFrame = iVar2;
  return pGVar1->_activeToken;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$End
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture__End (int32_t token, const MethodInfo* method);
// 0x53a4220

void Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(int32_t token,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Actions_GisketchInputCapture_StaticFields *pGVar3;
  
  if (Il2CppMethodInitialized_07542bcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07542bcc = '\x01';
  }
  if (token != 0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields;
      iVar1 = pGVar3->_activeToken;
    }
    else {
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields;
      iVar1 = pGVar3->_activeToken;
    }
    if (iVar1 == token) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields;
      }
      pGVar3->_activeToken = 0;
      iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar2;
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$ForceEnd
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd (const MethodInfo* method);
// 0x53a42c0

void Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07542bcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07542bcd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken = 0;
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar1;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture___cctor (const MethodInfo* method);
// 0x53a4320

void Gisketch_Aottg2UI_Actions_GisketchInputCapture___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542bce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07542bce = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = -1;
  return;
}


