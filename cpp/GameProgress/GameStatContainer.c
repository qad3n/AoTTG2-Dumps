// Type: GameProgress.GameStatContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameProgress/GameStatContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatContainer.cs
// --------------------------------

// GameProgress.GameStatContainer$$Clear
// il2cpp: void GameProgress_GameStatContainer__Clear (GameProgress_GameStatContainer_o* __this, int32_t record, const MethodInfo* method);
// 0x181e35cc0

void GameProgress_GameStatContainer__Clear
               (GameProgress_GameStatContainer_o *__this,int32_t record,MethodInfo *method)

{
  GameProgress_DamageSetting_o *__this_00;
  Settings_IntSetting_o *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *actualValue;
  System_ArgumentOutOfRangeException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  Settings_FloatSetting_o *pSVar3;
  int32_t local_res10 [6];
  
  switch(record) {
  case 0:
    pSVar3 = (Settings_FloatSetting_o *)(__this->fields).Level;
    break;
  case 1:
    pSVar3 = (Settings_FloatSetting_o *)(__this->fields).Exp;
    break;
  case 2:
    pSVar3 = (__this->fields).PlayTime;
    break;
  case 3:
    pSVar3 = (__this->fields).HighestSpeed;
    break;
  case 4:
    __this_00 = (__this->fields).Damage;
    if (__this_00 != (GameProgress_DamageSetting_o *)0x0) {
      GameProgress_DamageSetting__ClearRecords(__this_00,(MethodInfo *)0x0);
      return;
    }
    goto label_181e35f1f;
  case 5:
    pSVar1 = (__this->fields).TitansKilledTotal;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).TitansKilledBlade;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).TitansKilledAHSS;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).TitansKilledThunderspear;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).TitansKilledAPG;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar3 = (Settings_FloatSetting_o *)(__this->fields).TitansKilledOther;
    break;
  case 6:
    pSVar1 = (__this->fields).HumansKilledTotal;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledBlade;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledAHSS;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledThunderspear;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledAPG;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledTitan;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181e35f1f;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar3 = (Settings_FloatSetting_o *)(__this->fields).HumansKilledOther;
    break;
  default:
    local_res10[0] = record;
    pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_GameProgress_GameStatRecord);
    actualValue = il2cpp_value_box(pIVar2,local_res10);
    pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar2);
    paramName = il2cpp_codegen_get_runtime_metadata(&"record");
    System_ArgumentOutOfRangeException___ctor_1a78150
              (__this_01,paramName,actualValue,(System_String_o *)0x0,(MethodInfo *)0x0);
    lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_GameProgress_GameStatContainer_Clear);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
    (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
    return;
  }
label_181e35f1f:
  ThrowNullReferenceException();
}


// GameProgress.GameStatContainer$$ClearAll
// il2cpp: void GameProgress_GameStatContainer__ClearAll (GameProgress_GameStatContainer_o* __this, const MethodInfo* method);
// 0x181e35a50
// eh: try 0x181e35b30..0x181e35cb3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e35b2c: nop dword ptr [rax]
// asm:   0x181e35c7c: lea rcx, [rsp + 0x30]
// asm:   0x181e35c81: call 0x1818789e0  ; il2cpp_runtime_helper_1818789e0()
// asm:   0x181e35c86: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e35c8b: test rcx, rcx
// asm:   0x181e35c8e: jne 0x181e35cb3
// asm:   0x181e35cb3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void GameProgress_GameStatContainer__ClearAll(GameProgress_GameStatContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppType *handle;
  bool bVar4;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  VirtualInvokeData *pVVar5;
  Il2CppObject *pIVar6;
  int32_t *piVar7;
  ushort uVar8;
  Il2CppObject *local_res18;
  undefined8 local_res20;
  Il2CppObject **local_18;
  undefined8 *local_10;
  
  if (Il2CppMethodInitialized_184344dc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_GameProgress_GameStatRecord);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameStatRecord);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_184344dc7 = '\x01';
  }
  handle = TypeRef_GameProgress_GameStatRecord;
  local_res18 = (Il2CppObject *)0x0;
  local_res20 = 0;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 == (System_Array_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_res18 = (Il2CppObject *)System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
  local_18 = &local_res18;
  local_10 = &local_res20;
  do {
    pIVar6 = local_res18;
    if (local_res18 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_res18->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar8 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar8].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar5 = pIVar2->vtable + pIVar3[uVar8].offset;
          goto label_181e35b86;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res18,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_181e35b86:
    bVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    pIVar6 = local_res18;
    if (!bVar4) {
      il2cpp_runtime_helper_1818789e0(&local_18);
      return;
    }
    if (local_res18 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_res18->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar8 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar8].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar5 = pIVar2->vtable + (pIVar3[uVar8].offset + 1);
          goto label_181e35bf5;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res18,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181e35bf5:
    pIVar6 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar6->klass->_1).element_class != (TypeInfo_GameProgress_GameStatRecord->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar6,TypeInfo_GameProgress_GameStatRecord);
    }
    piVar7 = il2cpp_object_unbox(pIVar6);
    GameProgress_GameStatContainer__Clear(__this,*piVar7,(MethodInfo *)0x0);
  } while( true );
}


// GameProgress.GameStatContainer$$.ctor
// il2cpp: void GameProgress_GameStatContainer___ctor (GameProgress_GameStatContainer_o* __this, const MethodInfo* method);
// 0x181e35f50

void GameProgress_GameStatContainer___ctor(GameProgress_GameStatContainer_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  GameProgress_DamageSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184344dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_184344dc8 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Level = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Level,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Exp = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Exp,pSVar1);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar2,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).PlayTime = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlayTime,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar2,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).HighestSpeed = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HighestSpeed,pSVar2);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledTotal = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledTotal,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledBlade = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledBlade,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledAHSS = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledAHSS,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledThunderspear = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledThunderspear,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledAPG = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledAPG,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledOther = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledOther,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledTotal = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledTotal,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledBlade = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledBlade,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledAHSS = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledAHSS,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledThunderspear = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledThunderspear,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledAPG = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledAPG,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledTitan = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledTitan,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledOther = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledOther,pSVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this_00,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
            (__this_00,(__this_00->klass->vtable)._4_SetDefault.method);
  (__this->fields).Damage = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Damage,__this_00);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


