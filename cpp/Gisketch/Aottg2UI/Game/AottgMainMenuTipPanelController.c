// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuTipPanelController.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41c7ca0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_<RevealText>d__9___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x41c7cd0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_<RevealText>d__9__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__MoveNext (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x41c7ce0

bool_conflict
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_<RevealText>d__9__MoveNext
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
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
        il2cpp_runtime_glue(&(__this_00->fields)._reveal,0);
        return 0;
      }
      goto LAB_041c7e8a;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0)
    goto LAB_041c7e8a;
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
              (__this_00,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),in_RDX);
    (__this->fields)._elapsed_5__2 = 0.0;
    fVar5 = 0.0;
  }
  fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this->fields)._elapsed_5__2 = fVar4 + fVar5;
  pSVar2 = (__this->fields).text;
  if (pSVar2 != (System_String_o *)0x0) {
    fVar4 = (fVar4 + fVar5) / 0.45;
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    iVar3 = (pSVar2->fields)._stringLength;
    if (DAT_056fdee8 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdee8 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar5 = ceilf((float)(-(uint)(0.0 <= fVar4) & (uint)fVar5) * (float)iVar3);
    pSVar2 = (__this->fields).text;
    if (pSVar2 != (System_String_o *)0x0) {
      iVar1 = (int)fVar5;
      iVar3 = (pSVar2->fields)._stringLength;
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
      }
      if (iVar1 < 0) {
        iVar3 = 0;
      }
      pSVar2 = System_String__Substring(pSVar2,0,iVar3,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
                  (__this_00,pSVar2,method_00);
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_glue(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
  }
LAB_041c7e8a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x41c7e90

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_<RevealText>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x41c7ea0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_<RevealText>d__9__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x41c7ee0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_<RevealText>d__9__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x41c76d0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields)._root = root;
  il2cpp_runtime_glue(&(__this->fields)._root);
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this,0,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__OnDestroy (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x41c7790

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  
  routine = (__this->fields)._reveal;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$ShowRandomTip
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, bool animate, const MethodInfo* method);
// 0x41c76f0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,
               bool_conflict animate,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool_conflict bVar2;
  System_String_o *value;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (DAT_05704df7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704df7 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pGVar1->fields)._codeActions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      value = Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText
                        (__this,method_00);
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText
                  (__this,value,animate & 0xff,in_RCX);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$RandomTipText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x41c77b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  uint uVar1;
  SimpleJSONFixed_JSONNode_o *a;
  bool_conflict bVar2;
  int iVar3;
  int32_t maxExclusive;
  uint uVar4;
  SimpleJSONFixed_JSONNode_o *a_00;
  System_String_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  
  if (DAT_05704df8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Notifications");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Tips");
    DAT_05704df8 = '\x01';
  }
  a = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_MainMenu + 0xb8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    plVar6 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
    if (plVar6 == (long *)0x0) goto LAB_041c7a2c;
    a_00 = (SimpleJSONFixed_JSONNode_o *)
           (**(code **)(*plVar6 + 0x1a8))(plVar6,"Tips",*(undefined8 *)(*plVar6 + 0x1b0));
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
LAB_041c7a05:
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (a_00 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    iVar3 = (*(a_00->klass->vtable)._11_get_Count.methodPtr)
                      (a_00,(a_00->klass->vtable)._11_get_Count.method);
    if (iVar3 == 0) goto LAB_041c7a05;
    uVar1 = (__this->fields)._currentTipIndex;
    iVar3 = (*(a_00->klass->vtable)._11_get_Count.methodPtr)
                      (a_00,(a_00->klass->vtable)._11_get_Count.method);
    uVar4 = 0;
    if ((iVar3 != 1) && (uVar4 = uVar1, uVar1 == (__this->fields)._currentTipIndex)) {
      do {
        maxExclusive = (*(a_00->klass->vtable)._11_get_Count.methodPtr)
                                 (a_00,(a_00->klass->vtable)._11_get_Count.method);
        uVar4 = UnityEngine_Random__Range(0,maxExclusive,(MethodInfo *)0x0);
      } while (uVar4 == (__this->fields)._currentTipIndex);
    }
    (__this->fields)._currentTipIndex = uVar4;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = UI_UIManager__GetLocale
                       ("Notifications","Tips","Title","","",
                        (MethodInfo *)0x0);
    plVar6 = (long *)(*(a_00->klass->vtable)._5_get_Item.methodPtr)
                               (a_00,(ulong)uVar4,(a_00->klass->vtable)._5_get_Item.method);
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)
               (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      pSVar7 = UI_UIManager__GetLocale
                         ("Notifications","Tips",pSVar7,"","",
                          (MethodInfo *)0x0);
      pSVar5 = System_String__Concat(pSVar5,": ",pSVar7,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
LAB_041c7a2c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetTipText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, bool animate, const MethodInfo* method);
// 0x41c7a40

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,
               System_String_o *text,bool_conflict animate,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar4;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,animate);
  if (DAT_05704df9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704df9 = '\x01';
    method_00 = extraout_RDX;
  }
  ppUVar1 = &(__this->fields)._reveal;
  pUVar4 = (__this->fields)._reveal;
  if (pUVar4 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar4,(MethodInfo *)0x0);
    (__this->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
    il2cpp_runtime_glue(ppUVar1);
    method_00 = extraout_RDX_00;
  }
  if ((char)animate != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
      method_00 = extraout_RDX_02;
    }
    else {
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
      method_00 = extraout_RDX_01;
    }
    if (cVar2 != '\0') {
      if (DAT_05704dfa == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_RevealText_d__9);
        DAT_05704dfa = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RevealText_d__9);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      __this_00[2].monitor = text;
      il2cpp_runtime_glue(&__this_00[2].monitor,text);
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this,
                          (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields)._reveal = pUVar4;
      il2cpp_runtime_glue(ppUVar1,pUVar4);
      return;
    }
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this,text,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$RevealText
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, const MethodInfo* method);
// 0x41c7c20

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704dfa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RevealText_d__9);
    DAT_05704dfa = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RevealText_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = text;
    il2cpp_runtime_glue(&__this_00[2].monitor,text);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetStateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, const MethodInfo* method);
// 0x41c7b80

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,
               System_String_o *text,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05704dfb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"mainMenu.tipText");
    DAT_05704dfb = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (pGVar1->fields)._codeActions;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_00,"mainMenu.tipText",text,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x41c7cc0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  (__this->fields)._currentTipIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


