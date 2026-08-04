// Type: Characters.DummyCharacter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DummyCharacter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/DummyCharacter.cs
// --------------------------------

// Characters.DummyCharacter$$Awake
// il2cpp: void Characters_DummyCharacter__Awake (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x42ada90

void Characters_DummyCharacter__Awake(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_AnimationHandler_o *__this_00;
  undefined1 auVar1 [16];
  
  if (g_data_057add9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationHandler);
    g_data_057add9d = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  auVar1 = il2cpp_runtime_helper_023052d0(TypeInfo_AnimationHandler);
  __this_00 = auVar1._0_8_;
  Characters_AnimationHandler___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).Animation = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Animation,__this_00);
  return;
}


// Characters.DummyCharacter$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyCharacter__GetIdleAnimation (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x42adb00

System_String_o *
Characters_DummyCharacter__GetIdleAnimation(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Characters.DummyCharacter$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyCharacter__GetEmoteAnimation (Characters_DummyCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x42adb20

System_String_o *
Characters_DummyCharacter__GetEmoteAnimation
          (Characters_DummyCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Characters.DummyCharacter$$Idle
// il2cpp: void Characters_DummyCharacter__Idle (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x42adb40

void Characters_DummyCharacter__Idle(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_MonoBehaviour_c *__this_00;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  (__this->fields).State = 0;
  pCVar1 = (__this->fields).Animation;
  auVar4 = (*(__this->klass->vtable)._5_GetIdleAnimation.methodPtr)
                     (__this,(__this->klass->vtable)._5_GetIdleAnimation.method);
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__CrossFade(pCVar1,auVar4._0_8_,0.1,0.0,auVar4._8_8_);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (__this->fields).State = 1;
  auVar4 = (*(__this->klass->vtable)._6_GetEmoteAnimation.methodPtr)();
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__CrossFade(pCVar1,auVar4._0_8_,0.1,0.0,auVar4._8_8_);
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetLength(pCVar1,auVar4._0_8_,method_00);
      (__this->fields)._stateTimeLeft = fVar2;
      return;
    }
  }
  __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (*(int *)&__this_01[1].monitor != 0) {
    fVar2 = *(float *)((long)&__this_01[1].monitor + 4);
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar3;
    *(float *)((long)&__this_01[1].monitor + 4) = fVar2;
    if (fVar2 <= 0.0) {
      *(undefined4 *)&__this_01[1].monitor = 0;
      __this_00 = __this_01[1].klass;
      auVar4 = (*(code *)__this_01->klass[1]._1.name)();
      if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
        Characters_AnimationHandler__CrossFade
                  ((Characters_AnimationHandler_o *)__this_00,auVar4._0_8_,0.1,0.0,auVar4._8_8_);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.DummyCharacter$$EmoteAction
// il2cpp: void Characters_DummyCharacter__EmoteAction (Characters_DummyCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x42adb80

void Characters_DummyCharacter__EmoteAction
               (Characters_DummyCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_MonoBehaviour_c *__this_00;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  (__this->fields).State = 1;
  auVar4 = (*(__this->klass->vtable)._6_GetEmoteAnimation.methodPtr)
                     (__this,emote,(__this->klass->vtable)._6_GetEmoteAnimation.method);
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__CrossFade(pCVar1,auVar4._0_8_,0.1,0.0,auVar4._8_8_);
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetLength(pCVar1,auVar4._0_8_,method_00);
      (__this->fields)._stateTimeLeft = fVar2;
      return;
    }
  }
  __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (*(int *)&__this_01[1].monitor != 0) {
    fVar2 = *(float *)((long)&__this_01[1].monitor + 4);
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar3;
    *(float *)((long)&__this_01[1].monitor + 4) = fVar2;
    if (fVar2 <= 0.0) {
      *(undefined4 *)&__this_01[1].monitor = 0;
      __this_00 = __this_01[1].klass;
      auVar4 = (*(code *)__this_01->klass[1]._1.name)();
      if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
        Characters_AnimationHandler__CrossFade
                  ((Characters_AnimationHandler_o *)__this_00,auVar4._0_8_,0.1,0.0,auVar4._8_8_);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.DummyCharacter$$Update
// il2cpp: void Characters_DummyCharacter__Update (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x42adbe0

void Characters_DummyCharacter__Update(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  if ((__this->fields).State != 0) {
    fVar2 = (__this->fields)._stateTimeLeft;
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar1;
    (__this->fields)._stateTimeLeft = fVar2;
    if (fVar2 <= 0.0) {
      (__this->fields).State = 0;
      __this_00 = (__this->fields).Animation;
      auVar3 = (*(__this->klass->vtable)._5_GetIdleAnimation.methodPtr)();
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__CrossFade(__this_00,auVar3._0_8_,0.1,0.0,auVar3._8_8_);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.DummyCharacter$$.ctor
// il2cpp: void Characters_DummyCharacter___ctor (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x42adc70

void Characters_DummyCharacter___ctor(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


