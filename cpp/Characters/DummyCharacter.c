// Type: Characters.DummyCharacter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/DummyCharacter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/DummyCharacter.cs
// --------------------------------

// Characters.DummyCharacter$$Awake
// il2cpp: void Characters_DummyCharacter__Awake (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x5be65d0

void Characters_DummyCharacter__Awake(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_AnimationHandler_o *__this_00;
  
  if (Il2CppMethodInitialized_075475e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler);
    Il2CppMethodInitialized_075475e4 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnimationHandler);
  Characters_AnimationHandler___ctor(__this_00,owner,(MethodInfo *)0x0);
  (__this->fields).Animation = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Animation);
  return;
}


// Characters.DummyCharacter$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyCharacter__GetIdleAnimation (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x5be6640

System_String_o *
Characters_DummyCharacter__GetIdleAnimation(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Characters.DummyCharacter$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyCharacter__GetEmoteAnimation (Characters_DummyCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5be6660

System_String_o *
Characters_DummyCharacter__GetEmoteAnimation
          (Characters_DummyCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Characters.DummyCharacter$$Idle
// il2cpp: void Characters_DummyCharacter__Idle (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x5be6680

void Characters_DummyCharacter__Idle(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_String_o *name;
  
  (__this->fields).State = 0;
  __this_00 = (__this->fields).Animation;
  name = (*(__this->klass->vtable)._5_GetIdleAnimation.methodPtr)
                   (__this,(__this->klass->vtable)._5_GetIdleAnimation.method);
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_AnimationHandler__CrossFade(__this_00,name,0.1,0.0,(MethodInfo *)0x0);
  return;
}


// Characters.DummyCharacter$$EmoteAction
// il2cpp: void Characters_DummyCharacter__EmoteAction (Characters_DummyCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5be66c0

void Characters_DummyCharacter__EmoteAction
               (Characters_DummyCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  System_String_o *name;
  float fVar2;
  
  (__this->fields).State = 1;
  name = (*(__this->klass->vtable)._6_GetEmoteAnimation.methodPtr)
                   (__this,emote,(__this->klass->vtable)._6_GetEmoteAnimation.method);
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__CrossFade(pCVar1,name,0.1,0.0,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetLength(pCVar1,name,(MethodInfo *)0x0);
      (__this->fields)._stateTimeLeft = fVar2;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.DummyCharacter$$Update
// il2cpp: void Characters_DummyCharacter__Update (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x5be6730

void Characters_DummyCharacter__Update(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_String_o *name;
  float fVar1;
  float fVar2;
  
  if ((__this->fields).State != 0) {
    fVar2 = (__this->fields)._stateTimeLeft;
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar1;
    (__this->fields)._stateTimeLeft = fVar2;
    if (fVar2 <= 0.0) {
      (__this->fields).State = 0;
      __this_00 = (__this->fields).Animation;
      name = (*(__this->klass->vtable)._5_GetIdleAnimation.methodPtr)
                       (__this,(__this->klass->vtable)._5_GetIdleAnimation.method);
      if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_AnimationHandler__CrossFade(__this_00,name,0.1,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.DummyCharacter$$.ctor
// il2cpp: void Characters_DummyCharacter___ctor (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x5be67c0

void Characters_DummyCharacter___ctor(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


