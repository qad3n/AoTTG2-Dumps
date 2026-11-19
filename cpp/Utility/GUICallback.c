// Type: Utility.GUICallback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Utility/GUICallback.cs
// Prior real C# source: none
// --------------------------------

// Utility.GUICallback$$Create
// il2cpp: Utility_GUICallback_o* Utility_GUICallback__Create (UnityEngine_GameObject_o* owner, System_Action_o* draw, const MethodInfo* method);
// 0x5def4b0

Utility_GUICallback_o *
Utility_GUICallback__Create(UnityEngine_GameObject_o *owner,System_Action_o *draw,MethodInfo *method)

{
  Utility_GUICallback_o *__this;
  
  if (Il2CppMethodInitialized_075482e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_GUICallback);
    Il2CppMethodInitialized_075482e7 = '\x01';
  }
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (owner,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_GUICallback
                       );
    if (__this != (Utility_GUICallback_o *)0x0) {
      (__this->fields)._draw = draw;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._draw);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Utility.GUICallback$$OnGUI
// il2cpp: void Utility_GUICallback__OnGUI (Utility_GUICallback_o* __this, const MethodInfo* method);
// 0x5def530

void Utility_GUICallback__OnGUI(Utility_GUICallback_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._draw;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// Utility.GUICallback$$.ctor
// il2cpp: void Utility_GUICallback___ctor (Utility_GUICallback_o* __this, const MethodInfo* method);
// 0x5def550

void Utility_GUICallback___ctor(Utility_GUICallback_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


