// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuTipPanelController.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__MoveNext (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x181de7c70

bool Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__MoveNext
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
               MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_00;
  System_String_o *pSVar3;
  int iVar4;
  int length;
  float fVar5;
  double dVar6;
  
  iVar4 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar4 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) goto label_181de7e32;
    method = (MethodInfo *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
              (__this_00,(System_String_o *)method,(MethodInfo *)0x0);
    (__this->fields)._elapsed_5__2 = 0.0;
  }
  else {
    if (iVar4 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  pfVar1 = &(__this->fields)._elapsed_5__2;
  if (*pfVar1 <= 0.45 && *pfVar1 != 0.45) {
    fVar2 = (__this->fields)._elapsed_5__2;
    fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 + fVar2;
    (__this->fields)._elapsed_5__2 = fVar5;
    fVar5 = fVar5 / 0.45;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    pSVar3 = (__this->fields).text;
    if (pSVar3 != (System_String_o *)0x0) {
      iVar4 = (pSVar3->fields)._stringLength;
      if (Il2CppMethodInitialized_18433df29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433df29 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      pSVar3 = (__this->fields).text;
      if (pSVar3 != (System_String_o *)0x0) {
        dVar6 = il2cpp_runtime_helper_1804f45c0((double)((float)iVar4 * fVar5),method);
        iVar4 = (int)dVar6;
        if (((iVar4 < 0) || (length = (pSVar3->fields)._stringLength, iVar4 <= length)) &&
           (length = iVar4, iVar4 < 0)) {
          length = 0;
        }
        pSVar3 = System_String__Substring_1972740(pSVar3,0,length,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
                    (__this_00,pSVar3,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
  }
  else if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
              (__this_00,(__this->fields).text,(MethodInfo *)0x0);
    (__this_00->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._reveal,(void *)0x0);
    return false;
  }
label_181de7e32:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x181de7e40

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__9_System_Collections_IEnume
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x181de39c0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  System_String_o *value;
  
  (__this->fields)._root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root,root);
  if (Il2CppMethodInitialized_184344b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b28 = '\x01';
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
      value = Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText(__this,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar2) {
        if (Il2CppMethodInitialized_184344b2a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
          Il2CppMethodInitialized_184344b2a = '\x01';
        }
        if ((__this->fields)._reveal != (UnityEngine_Coroutine_o *)0x0) {
          UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                    ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._reveal,(MethodInfo *)0x0);
          (__this->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._reveal,(void *)0x0);
        }
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__OnDestroy (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x181de34b0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  if ((__this->fields)._reveal != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._reveal,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$ShowRandomTip
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, bool animate, const MethodInfo* method);
// 0x181de3ac0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,bool animate,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *routine;
  UnityEngine_Coroutine_o *value_00;
  
  if (Il2CppMethodInitialized_184344b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b28 = '\x01';
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
      value = Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText(__this,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar2) {
        if (Il2CppMethodInitialized_184344b2a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
          Il2CppMethodInitialized_184344b2a = '\x01';
        }
        if ((__this->fields)._reveal != (UnityEngine_Coroutine_o *)0x0) {
          UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                    ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._reveal,(MethodInfo *)0x0);
          (__this->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._reveal,(void *)0x0);
        }
        if (animate) {
          if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
          }
          bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (bVar2) {
            if (Il2CppMethodInitialized_184344b2b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__9);
              Il2CppMethodInitialized_184344b2b = '\x01';
            }
            routine = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__9
                                );
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0
                      );
            (routine->fields).__1__state = 0;
            (routine->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
            (routine->fields).text = value;
            Il2CppCodeGenWriteBarrier(&(routine->fields).text,value);
            value_00 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                 ((UnityEngine_MonoBehaviour_o *)__this,
                                  (System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
            (__this->fields)._reveal = value_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._reveal,value_00);
            return;
          }
        }
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$RandomTipText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x181de34d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181de362f: nop 
// asm:   0x181de3656: jmp 0x181de365a

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RandomTipText
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Xml_Schema_XmlSchema_c *pSVar2;
  bool bVar3;
  uint uVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_184344b29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Notifications");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Tips");
    Il2CppMethodInitialized_184344b29 = '\x01';
  }
  pSVar1 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar1,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar1 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181de373e;
    pSVar5 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"Tips");
  }
  else {
    pSVar5 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
label_181de3722:
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
    pSVar6 = (*(pSVar5->klass->vtable)._11_get_NameAttribute.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._11_get_NameAttribute.method);
    if ((int)pSVar6 == 0) goto label_181de3722;
    uVar4 = (__this->fields)._currentTipIndex;
    pSVar6 = (*(pSVar5->klass->vtable)._11_get_NameAttribute.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._11_get_NameAttribute.method);
    if ((int)pSVar6 == 1) {
      uVar4 = 0;
    }
    else if (uVar4 == (__this->fields)._currentTipIndex) {
      do {
        pSVar6 = (*(pSVar5->klass->vtable)._11_get_NameAttribute.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._11_get_NameAttribute.method);
        uVar4 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar6,(MethodInfo *)0x0);
      } while (uVar4 == (__this->fields)._currentTipIndex);
    }
    (__this->fields)._currentTipIndex = uVar4;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar7 = UI_UIManager__GetLocale
                       ("Notifications","Tips","Title",
                        "","",(MethodInfo *)0x0);
    pSVar5 = (*(pSVar5->klass->vtable)._5_OnRemove.methodPtr)(pSVar5,(MethodInfo *)(ulonglong)uVar4);
    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar2 = pSVar5->klass;
      pSVar8 = (System_String_o *)
               (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar5,(UnityEngine_GameObject_o *)(pSVar2->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar2);
      pSVar8 = UI_UIManager__GetLocale
                         ("Notifications","Tips",pSVar8,"",
                          "",(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_1969b70(pSVar7,": ",pSVar8,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
label_181de373e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetTipText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, bool animate, const MethodInfo* method);
// 0x181de3890

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetTipText
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
               bool animate,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *routine;
  UnityEngine_Coroutine_o *value;
  
  if (Il2CppMethodInitialized_184344b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184344b2a = '\x01';
  }
  if ((__this->fields)._reveal != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._reveal,(MethodInfo *)0x0);
    (__this->fields)._reveal = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._reveal,(void *)0x0);
  }
  if (animate) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar1) {
      if (Il2CppMethodInitialized_184344b2b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__9);
        Il2CppMethodInitialized_184344b2b = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__9);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      (routine->fields).text = text;
      Il2CppCodeGenWriteBarrier(&(routine->fields).text,text);
      value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
      (__this->fields)._reveal = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._reveal,value);
      return;
    }
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText(__this,text,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$RevealText
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, const MethodInfo* method);
// 0x181de3750

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText
          (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__RevealText_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_184344b2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__9);
    Il2CppMethodInitialized_184344b2b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__9);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,text);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetStateText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, System_String_o* text, const MethodInfo* method);
// 0x181de37e0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__SetStateText
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,System_String_o *text,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344b2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenu.tipText");
    Il2CppMethodInitialized_184344b2c = '\x01';
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
    if ((pGVar1->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set
                ((pGVar1->fields)._State_k__BackingField,"mainMenu.tipText",text,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* __this, const MethodInfo* method);
// 0x181de3c80

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this,MethodInfo *method)

{
  (__this->fields)._currentTipIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


