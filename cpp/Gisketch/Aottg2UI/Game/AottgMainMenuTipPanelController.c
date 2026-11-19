// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuTipPanelController.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c2710

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o* __this, const MethodInfo* method);
// 0x58c2740

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__MoveNext (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o* __this, const MethodInfo* method);
// 0x58c2750
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c2818: jmp 0x58c2933

bool Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__MoveNext
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_00;
  int iVar1;
  System_String_o *pSVar2;
  int iVar3;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    fVar5 = (__this->fields)._elapsed_5__2;
    if (0.45 <= fVar5) {
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
                  (__this_00,(__this->fields).text,in_RDX);
        (__this_00->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._reveal);
        return false;
      }
      goto label_058c2933;
    }
  }
  else {
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) goto label_058c2933;
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
              (__this_00,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),in_RDX);
    (__this->fields)._elapsed_5__2 = 0.0;
    fVar5 = 0.0;
  }
  fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this->fields)._elapsed_5__2 = fVar4 + fVar5;
  pSVar2 = (__this->fields).text;
  if (pSVar2 == (System_String_o *)0x0) goto label_058c2933;
  iVar3 = (pSVar2->fields)._stringLength;
  if (Il2CppMethodInitialized_0753e7f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f9 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_058c280f;
label_058c2860:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    pSVar2 = (__this->fields).text;
  }
  else {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_058c2860;
label_058c280f:
    pSVar2 = (__this->fields).text;
  }
  if (pSVar2 != (System_String_o *)0x0) {
    fVar4 = (fVar4 + fVar5) / 0.45;
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    fVar5 = ceilf((float)(-(uint)(0.0 <= fVar4) & (uint)fVar5) * (float)iVar3);
    iVar1 = (int)fVar5;
    iVar3 = (pSVar2->fields)._stringLength;
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    pSVar2 = System_String__Substring_53042f0(pSVar2,0,iVar3,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this_00,pSVar2,method_00);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
label_058c2933:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o* __this, const MethodInfo* method);
// 0x58c2940

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o* __this, const MethodInfo* method);
// 0x58c2950

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__8_System_Collections_IEnume
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o* __this, const MethodInfo* method);
// 0x58c2990

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x58c23d0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields)._root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root);
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this,false,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__OnDestroy (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x58c2490

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  
  routine = (__this->fields)._reveal;
  if (routine == (UnityEngine_Coroutine_o *)0x0) {
    return;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
            ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$ShowRandomTip
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, bool animate, const MethodInfo* method);
// 0x58c23f0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,bool animate,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  System_String_o *value;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075453e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075453e3 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pGVar1->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      value = UI_TipPanel__RandomTipText(&(__this->fields)._currentTipIndex,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar2) {
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText(__this,value,animate,in_RCX);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetTipText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, bool animate, const MethodInfo* method);
// 0x58c24b0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
               bool animate,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  undefined7 in_register_00000011;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000011,animate);
  if (Il2CppMethodInitialized_075453e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_075453e4 = '\x01';
    method_00 = extraout_RDX;
  }
  targetAddress = &(__this->fields)._reveal;
  pUVar2 = (__this->fields)._reveal;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
    (__this->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    method_00 = extraout_RDX_00;
  }
  if (animate) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      method_00 = extraout_RDX_02;
    }
    else {
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      method_00 = extraout_RDX_01;
    }
    if (bVar1) {
      if (Il2CppMethodInitialized_075453e5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__8);
        Il2CppMethodInitialized_075453e5 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__8);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      (__this_00->fields).text = text;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
      pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                          (MethodInfo *)0x0);
      (__this->fields)._reveal = pUVar2;
      Il2CppCodeGenWriteBarrier(targetAddress);
      return;
    }
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this,text,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$RevealText
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, const MethodInfo* method);
// 0x58c2690

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_075453e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__8);
    Il2CppMethodInitialized_075453e5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__8);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetStateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, const MethodInfo* method);
// 0x58c25f0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075453e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenu.tipText");
    Il2CppMethodInitialized_075453e6 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (pGVar1->fields)._State_k__BackingField;
    if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,"mainMenu.tipText",text,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x58c2730

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  (__this->fields)._currentTipIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


