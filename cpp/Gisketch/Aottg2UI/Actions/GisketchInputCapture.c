// Type: Gisketch.Aottg2UI.Actions.GisketchInputCapture
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchInputCapture.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$get_IsActive
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_IsActive (const MethodInfo* method);
// 0x1819031a0

bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_IsActive(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_184342249 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken != 0;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$get_BlocksUiInput
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput (const MethodInfo* method);
// 0x1819030d0

bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_18434224a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_18434224a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  if (Il2CppMethodInitialized_184342249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_184342249 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken != 0) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  iVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame;
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  return iVar1 == iVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$BlockThisFrame
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame (const MethodInfo* method);
// 0x181902f10

void Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_18434224b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_18434224b = '\x01';
  }
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar1;
    return;
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar1;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$Begin
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin (const MethodInfo* method);
// 0x181902e80

int32_t Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin(MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  
  if (Il2CppMethodInitialized_18434224c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_18434224c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  iVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_nextToken + 1;
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_nextToken = iVar2;
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken = iVar2;
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar1;
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$End
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture__End (int32_t token, const MethodInfo* method);
// 0x181902f80

void Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(int32_t token,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_18434224d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_18434224d = '\x01';
  }
  if (token != 0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    }
    if (token == TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken) {
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
      }
      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_activeToken = 0;
      iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = iVar1;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$ForceEnd
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd (const MethodInfo* method);
// 0x181903020

void Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_18434224e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_18434224e = '\x01';
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
// 0x181903090

void Gisketch_Aottg2UI_Actions_GisketchInputCapture___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434224f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_18434224f = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->static_fields->_blockedFrame = -1;
  return;
}


