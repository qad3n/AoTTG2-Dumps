// Type: Characters.DummyCharacter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DummyCharacter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/DummyCharacter.cs
// --------------------------------

// Characters.DummyCharacter$$Awake
// il2cpp: void Characters_DummyCharacter__Awake (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x182116b70

void Characters_DummyCharacter__Awake(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_AnimationHandler_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler);
    Il2CppMethodInitialized_184346b83 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnimationHandler);
  Characters_AnimationHandler___ctor(__this_00,owner,(MethodInfo *)0x0);
  (__this->fields).Animation = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Animation,__this_00);
  return;
}


// Characters.DummyCharacter$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyCharacter__GetIdleAnimation (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
Characters_DummyCharacter__GetIdleAnimation(Characters_DummyCharacter_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Characters.DummyCharacter$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyCharacter__GetEmoteAnimation (Characters_DummyCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x1818c6010

System_String_o*
Characters_DummyCharacter__GetEmoteAnimation(Characters_DummyCharacter_o* __this, System_String_o* emote, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Characters.DummyCharacter$$Idle
// il2cpp: void Characters_DummyCharacter__Idle (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x182116c70

void Characters_DummyCharacter__Idle(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  Characters_DummyCharacter_c *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *name;
  
  pCVar1 = __this->klass;
  __this_00 = (__this->fields).Animation;
  (__this->fields).State = 0;
  name = (*(pCVar1->vtable)._5_GetIdleAnimation.methodPtr)(__this,(pCVar1->vtable)._5_GetIdleAnimation.method)
  ;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__CrossFade(__this_00,name,0.1,0.0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.DummyCharacter$$EmoteAction
// il2cpp: void Characters_DummyCharacter__EmoteAction (Characters_DummyCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x182116bf0

void Characters_DummyCharacter__EmoteAction
               (Characters_DummyCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_DummyCharacter_c *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_String_o *name;
  float fVar3;
  
  pCVar1 = __this->klass;
  (__this->fields).State = 1;
  name = (*(pCVar1->vtable)._6_GetEmoteAnimation.methodPtr)(__this,(MethodInfo *)emote);
  pCVar2 = (__this->fields).Animation;
  if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__CrossFade(pCVar2,name,0.1,0.0,(MethodInfo *)0x0);
    pCVar2 = (__this->fields).Animation;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      fVar3 = Characters_AnimationHandler__GetLength(pCVar2,name,(MethodInfo *)0x0);
      (__this->fields)._stateTimeLeft = fVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.DummyCharacter$$Update
// il2cpp: void Characters_DummyCharacter__Update (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x182116cd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182116d57: movaps xmm7, xmmword ptr [rsp + 0x30]

void Characters_DummyCharacter__Update(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  Characters_DummyCharacter_c *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *name;
  float fVar2;
  float fVar3;
  
  if ((__this->fields).State != 0) {
    fVar3 = (__this->fields)._stateTimeLeft;
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 - fVar2;
    (__this->fields)._stateTimeLeft = fVar3;
    if (fVar3 <= 0.0) {
      pCVar1 = __this->klass;
      (__this->fields).State = 0;
      __this_00 = (__this->fields).Animation;
      name = (*(pCVar1->vtable)._5_GetIdleAnimation.methodPtr)
                       (__this,(pCVar1->vtable)._5_GetIdleAnimation.method);
      if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_AnimationHandler__CrossFade(__this_00,name,0.1,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.DummyCharacter$$.ctor
// il2cpp: void Characters_DummyCharacter___ctor (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x180528540

void
Characters_DummyCharacter___ctor(Characters_DummyCharacter_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


