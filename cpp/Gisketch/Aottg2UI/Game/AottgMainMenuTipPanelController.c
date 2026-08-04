// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuTipPanelController.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44f8b20

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x44f8b50

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__MoveNext (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x44f8b60

bool_conflict
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__MoveNext
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_00;
  int iVar1;
  System_String_o *pSVar2;
  int iVar3;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *pGVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  pGVar4 = __this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    fVar6 = (__this->fields)._elapsed_5__2;
    if (0.45 <= fVar6) {
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
                  (__this_00,(__this->fields).text,in_RDX);
        (__this_00->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._reveal,0);
        return 0;
      }
      goto label_044f8d0a;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) goto label_044f8d0a;
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
              (__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),in_RDX);
    (__this->fields)._elapsed_5__2 = 0.0;
    fVar6 = 0.0;
  }
  pGVar4 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *)0x0;
  fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this->fields)._elapsed_5__2 = fVar5 + fVar6;
  pSVar2 = (__this->fields).text;
  if (pSVar2 != (System_String_o *)0x0) {
    fVar5 = (fVar5 + fVar6) / 0.45;
    fVar6 = 1.0;
    if (fVar5 <= 1.0) {
      fVar6 = fVar5;
    }
    iVar3 = (pSVar2->fields)._stringLength;
    if (g_data_057a690d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690d = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar6 = ceilf((float)(-(uint)(0.0 <= fVar5) & (uint)fVar6) * (float)iVar3);
    pGVar4 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *)
             (__this->fields).text;
    if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *)0x0) {
      iVar1 = (int)fVar6;
      iVar3 = (pGVar4->fields).__1__state;
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
      }
      if (iVar1 < 0) {
        iVar3 = 0;
      }
      pSVar2 = System_String__Substring_3af8da0((System_String_o *)pGVar4,0,iVar3,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this_00,pSVar2,method_00);
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
  }
label_044f8d0a:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pGVar4->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x44f8d10

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x44f8d20

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x44f8d60

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x44f8550

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields)._root = root;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._root);
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this,0,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__OnDestroy (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x44f8610

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  
  routine = (__this->fields)._reveal;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$ShowRandomTip
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, bool animate, const MethodInfo* method);
// 0x44f8570

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  UnityEngine_TextAsset_o *routine;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *value;
  Il2CppObject *pIVar5;
  UnityEngine_Coroutine_o *pUVar6;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined4 uVar8;
  System_String_o *value_00;
  void *pvVar9;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  Il2CppObject *pIVar10;
  Il2CppClass *x;
  
  if (g_data_057aecc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aecc6 = '\x01';
  }
  __this_01 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pGVar2 = (__this->fields)._root;
    if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      routine = (__this_01->fields)._themeJson;
      if (routine == (UnityEngine_TextAsset_o *)0x0) {
        return;
      }
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                ((UnityEngine_MonoBehaviour_o *)__this_01,(UnityEngine_Coroutine_o *)routine,(MethodInfo *)0x0
                );
      return;
    }
    if ((pGVar2->fields)._codeActions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      value = Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText(__this,pMVar7);
      bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pMVar7 = (MethodInfo *)(ulong)(animate & 0xff);
        if (g_data_057aecc8 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
          g_data_057aecc8 = '\x01';
          pMVar7 = extraout_RDX;
        }
        ppUVar1 = &(__this->fields)._reveal;
        pUVar6 = (__this->fields)._reveal;
        if (pUVar6 != (UnityEngine_Coroutine_o *)0x0) {
          UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                    ((UnityEngine_MonoBehaviour_o *)__this,pUVar6,(MethodInfo *)0x0);
          (__this->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
          il2cpp_runtime_helper_022b4080(ppUVar1);
          pMVar7 = extraout_RDX_00;
        }
        if ((char)animate != '\0') {
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            cVar3 = (char)bVar4;
            pMVar7 = extraout_RDX_02;
          }
          else {
            bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            cVar3 = (char)bVar4;
            pMVar7 = extraout_RDX_01;
          }
          if (cVar3 != '\0') {
            if (g_data_057aecc9 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_RevealText_d__9);
              g_data_057aecc9 = '\x01';
            }
            pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealText_d__9);
            value_00 = (System_String_o *)0x0;
            pIVar10 = pIVar5;
            System_Object___ctor(pIVar5,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar5[1].klass = 0;
            if (pIVar5 != (Il2CppObject *)0x0) {
              pIVar5[2].klass = (Il2CppClass *)__this;
              il2cpp_runtime_helper_022b4080(pIVar5 + 2,__this);
              pIVar5[2].monitor = value;
              il2cpp_runtime_helper_022b4080(&pIVar5[2].monitor,value);
              pUVar6 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                 ((UnityEngine_MonoBehaviour_o *)__this,
                                  (System_Collections_IEnumerator_o *)pIVar5,(MethodInfo *)0x0);
              (__this->fields)._reveal = pUVar6;
              il2cpp_runtime_helper_022b4080(ppUVar1,pUVar6);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057aecca == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              il2cpp_runtime_helper_023445d0(&"mainMenu.tipText");
              g_data_057aecca = '\x01';
            }
            x = pIVar10[2].klass;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pvVar9 = (void *)0x0;
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (pIVar10[2].klass == (Il2CppClass *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057aecc9 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RevealText_d__9);
                  g_data_057aecc9 = '\x01';
                }
                pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealText_d__9);
                uVar8 = 0;
                pIVar10 = pIVar5;
                System_Object___ctor(pIVar5,(MethodInfo *)0x0);
                *(undefined4 *)&pIVar5[1].klass = 0;
                if (pIVar5 == (Il2CppObject *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  System_Object___ctor(pIVar10,(MethodInfo *)0x0);
                  *(undefined4 *)&pIVar10[1].klass = uVar8;
                  return;
                }
                pIVar5[2].klass = x;
                il2cpp_runtime_helper_022b4080(pIVar5 + 2,x);
                pIVar5[2].monitor = pvVar9;
                il2cpp_runtime_helper_022b4080(&pIVar5[2].monitor,pvVar9);
                return;
              }
              __this_00 = ((pIVar10[2].klass)->_1).typeMetadataHandle;
              if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          (__this_00,"mainMenu.tipText",value_00,(MethodInfo *)0x0);
                return;
              }
            }
            return;
          }
        }
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this,value,pMVar7);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$RandomTipText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x44f8630

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *a;
  void *pvVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  uint *puVar2;
  char cVar3;
  bool_conflict bVar4;
  int iVar5;
  int32_t iVar6;
  uint uVar7;
  Il2CppClass *pIVar8;
  System_String_o *pSVar9;
  long *plVar10;
  System_String_o *pSVar11;
  Il2CppObject *__this_01;
  UnityEngine_Coroutine_o *pUVar12;
  System_String_o *extraout_RAX;
  Il2CppClass *pIVar13;
  System_String_o *extraout_RAX_00;
  System_String_o *extraout_RAX_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  System_String_Fields SVar14;
  Il2CppObject *pIVar15;
  undefined4 extraout_var;
  
  if (g_data_057aecc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Notifications");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Tips");
    g_data_057aecc7 = '\x01';
  }
  a = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_MainMenu + 0xb8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = (Il2CppClass *)0x0;
  pSVar11 = (System_String_o *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    plVar10 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
    pIVar13 = (Il2CppClass *)0x0;
    if (plVar10 == (long *)0x0) goto label_044f88ac;
    pIVar8 = (Il2CppClass *)
             (**(code **)(*plVar10 + 0x1a8))(plVar10,"Tips",*(undefined8 *)(*plVar10 + 0x1b0));
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (System_String_o *)0x0;
  pIVar13 = pIVar8;
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
label_044f8885:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pIVar8 != (Il2CppClass *)0x0) {
    pvVar1 = (pIVar8->_1).image;
    iVar5 = (**(code **)((long)pvVar1 + 0x1e8))(pIVar8,*(undefined8 *)((long)pvVar1 + 0x1f0));
    if (iVar5 == 0) goto label_044f8885;
    uVar7 = (__this->fields)._currentTipIndex;
    pvVar1 = (pIVar8->_1).image;
    iVar5 = (**(code **)((long)pvVar1 + 0x1e8))(pIVar8,*(undefined8 *)((long)pvVar1 + 0x1f0));
    pSVar11 = (System_String_o *)0x0;
    if ((iVar5 != 1) &&
       (pSVar11 = (System_String_o *)(ulong)uVar7, uVar7 == (__this->fields)._currentTipIndex)) {
      do {
        pvVar1 = (pIVar8->_1).image;
        iVar6 = (**(code **)((long)pvVar1 + 0x1e8))(pIVar8,*(undefined8 *)((long)pvVar1 + 0x1f0));
        uVar7 = UnityEngine_Random__Range_4df2410(0,iVar6,(MethodInfo *)0x0);
      } while (uVar7 == (__this->fields)._currentTipIndex);
      pSVar11 = (System_String_o *)(ulong)uVar7;
    }
    (__this->fields)._currentTipIndex = (int32_t)pSVar11;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = UI_UIManager__GetLocale
                       ("Notifications","Tips","Title","","",(MethodInfo *)0x0);
    pvVar1 = (pIVar8->_1).image;
    plVar10 = (long *)(**(code **)((long)pvVar1 + 0x188))(pIVar8,pSVar11,*(undefined8 *)((long)pvVar1 + 400));
    pIVar13 = pIVar8;
    if (plVar10 != (long *)0x0) {
      pSVar11 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      pSVar11 = UI_UIManager__GetLocale
                          ("Notifications","Tips",pSVar11,"","",(MethodInfo *)0x0);
      pSVar11 = System_String__Concat_3af7150(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
      return pSVar11;
    }
  }
label_044f88ac:
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057aecc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aecc8 = '\x01';
    method_00 = extraout_RDX_00;
  }
  puVar2 = &(pIVar13->_1).byval_arg.bits;
  pUVar12 = *(UnityEngine_Coroutine_o **)&(pIVar13->_1).byval_arg.bits;
  if (pUVar12 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)pIVar13,pUVar12,(MethodInfo *)0x0);
    *(undefined8 *)&(pIVar13->_1).byval_arg.bits = 0;
    il2cpp_runtime_helper_022b4080(puVar2);
    method_00 = extraout_RDX_01;
  }
  if ((char)extraout_RDX != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
      method_00 = extraout_RDX_03;
    }
    else {
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
      method_00 = extraout_RDX_02;
    }
    if (cVar3 != '\0') {
      if (g_data_057aecc9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RevealText_d__9);
        g_data_057aecc9 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealText_d__9);
      pSVar9 = (System_String_o *)0x0;
      pIVar15 = __this_01;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].klass = pIVar13;
        il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar13);
        __this_01[2].monitor = pSVar11;
        il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pSVar11);
        pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)pIVar13,
                             (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
        *(UnityEngine_Coroutine_o **)&(pIVar13->_1).byval_arg.bits = pUVar12;
        pSVar11 = (System_String_o *)il2cpp_runtime_helper_022b4080(puVar2,pUVar12);
        return pSVar11;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aecca == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&"mainMenu.tipText");
        g_data_057aecca = '\x01';
      }
      pIVar8 = pIVar15[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar14._stringLength = 0;
      SVar14._firstChar = 0;
      SVar14._6_2_ = 0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pIVar13 = (Il2CppClass *)CONCAT44(extraout_var,bVar4);
      if ((char)bVar4 != '\0') {
        pIVar13 = pIVar15[2].klass;
        if (pIVar13 == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aecc9 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_RevealText_d__9);
            g_data_057aecc9 = '\x01';
          }
          pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealText_d__9);
          iVar6 = 0;
          pSVar11 = pSVar9;
          System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
          (pSVar9->fields)._stringLength = 0;
          if (pSVar9 != (System_String_o *)0x0) {
            pSVar9[1].monitor = pIVar8;
            il2cpp_runtime_helper_022b4080(&pSVar9[1].monitor,pIVar8);
            pSVar9[1].fields = SVar14;
            il2cpp_runtime_helper_022b4080(&pSVar9[1].fields,SVar14);
            return pSVar9;
          }
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
          (pSVar11->fields)._stringLength = iVar6;
          return extraout_RAX_01;
        }
        __this_00 = (pIVar13->_1).typeMetadataHandle;
        if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,"mainMenu.tipText",pSVar9,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
      }
      return (System_String_o *)pIVar13;
    }
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
            ((Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)pIVar13,pSVar11,method_00);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetTipText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, bool animate, const MethodInfo* method);
// 0x44f88c0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
               bool_conflict animate,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Coroutine_o *pUVar5;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined4 uVar6;
  System_String_o *value;
  void *pvVar7;
  Il2CppObject *pIVar8;
  Il2CppClass *x;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,animate);
  if (g_data_057aecc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aecc8 = '\x01';
    method_00 = extraout_RDX;
  }
  ppUVar1 = &(__this->fields)._reveal;
  pUVar5 = (__this->fields)._reveal;
  if (pUVar5 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar5,(MethodInfo *)0x0);
    (__this->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    method_00 = extraout_RDX_00;
  }
  if ((char)animate != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
      if (g_data_057aecc9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RevealText_d__9);
        g_data_057aecc9 = '\x01';
      }
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealText_d__9);
      value = (System_String_o *)0x0;
      pIVar8 = pIVar4;
      System_Object___ctor(pIVar4,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar4[1].klass = 0;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar4[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_helper_022b4080(pIVar4 + 2,__this);
        pIVar4[2].monitor = text;
        il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,text);
        pUVar5 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar4,
                            (MethodInfo *)0x0);
        (__this->fields)._reveal = pUVar5;
        il2cpp_runtime_helper_022b4080(ppUVar1,pUVar5);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aecca == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&"mainMenu.tipText");
        g_data_057aecca = '\x01';
      }
      x = pIVar8[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pvVar7 = (void *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (pIVar8[2].klass == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aecc9 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_RevealText_d__9);
            g_data_057aecc9 = '\x01';
          }
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealText_d__9);
          uVar6 = 0;
          pIVar8 = pIVar4;
          System_Object___ctor(pIVar4,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar4[1].klass = 0;
          if (pIVar4 == (Il2CppObject *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            System_Object___ctor(pIVar8,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar8[1].klass = uVar6;
            return;
          }
          pIVar4[2].klass = x;
          il2cpp_runtime_helper_022b4080(pIVar4 + 2,x);
          pIVar4[2].monitor = pvVar7;
          il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,pvVar7);
          return;
        }
        __this_00 = ((pIVar8[2].klass)->_1).typeMetadataHandle;
        if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,"mainMenu.tipText",value,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this,text,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$RevealText
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, const MethodInfo* method);
// 0x44f8aa0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057aecc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RevealText_d__9);
    g_data_057aecc9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealText_d__9);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = text;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,text);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetStateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, const MethodInfo* method);
// 0x44f8a00

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  bool_conflict bVar2;
  Il2CppObject *__this_01;
  undefined4 uVar3;
  void *pvVar4;
  Il2CppClass *x;
  Il2CppObject *__this_02;
  
  if (g_data_057aecca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"mainMenu.tipText");
    g_data_057aecca = '\x01';
  }
  x = (Il2CppClass *)(__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar4 = (void *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aecc9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RevealText_d__9);
        g_data_057aecc9 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealText_d__9);
      uVar3 = 0;
      __this_02 = __this_01;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].klass = x;
        il2cpp_runtime_helper_022b4080(__this_01 + 2,x);
        __this_01[2].monitor = pvVar4;
        il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pvVar4);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&__this_02[1].klass = uVar3;
      return;
    }
    __this_00 = (pGVar1->fields)._codeActions;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set
                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_00,"mainMenu.tipText",text,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x44f8b40

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  int iVar1;
  
  (__this->fields)._currentTipIndex = -1;
  if (g_data_057b4c9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057b4c9f = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


