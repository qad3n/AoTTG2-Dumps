// Type: GameProgress.GameStatContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameStatContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatContainer.cs
// --------------------------------

// GameProgress.GameStatContainer$$Clear
// il2cpp: void GameProgress_GameStatContainer__Clear (GameProgress_GameStatContainer_o* __this, int32_t record, const MethodInfo* method);
// 0x59207f0

void GameProgress_GameStatContainer__Clear
               (GameProgress_GameStatContainer_o *__this,int32_t record,MethodInfo *method)

{
  GameProgress_DamageSetting_o *__this_00;
  Settings_IntSetting_o *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *pIVar2;
  Il2CppObject *actualValue;
  System_ArgumentOutOfRangeException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined4 in_register_00000034;
  Settings_FloatSetting_o *pSVar3;
  undefined1 local_14 [4];
  
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
      GameProgress_DamageSetting__ClearRecords(__this_00,(MethodInfo *)CONCAT44(in_register_00000034,record));
      return;
    }
    goto label_059209c6;
  case 5:
    pSVar1 = (__this->fields).TitansKilledTotal;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).TitansKilledBlade;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).TitansKilledAHSS;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).TitansKilledThunderspear;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).TitansKilledAPG;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar3 = (Settings_FloatSetting_o *)(__this->fields).TitansKilledOther;
    method = extraout_RDX;
    break;
  case 6:
    pSVar1 = (__this->fields).HumansKilledTotal;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledBlade;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledAHSS;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledThunderspear;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledAPG;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = (__this->fields).HumansKilledTitan;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_059209c6;
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar3 = (Settings_FloatSetting_o *)(__this->fields).HumansKilledOther;
    method = extraout_RDX_00;
    break;
  default:
    pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_GameProgress_GameStatRecord);
    actualValue = il2cpp_vm_Object_Box(pIVar2,local_14);
    pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar2);
    paramName = il2cpp_codegen_get_runtime_metadata(&"record");
    System_ArgumentOutOfRangeException___ctor_5416650
              (__this_01,paramName,actualValue,(System_String_o *)0x0,(MethodInfo *)0x0);
    lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_GameProgress_GameStatContainer_Clear);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
    vtableDispatch = (pSVar3->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method,method,vtableDispatch)
    ;
    return;
  }
label_059209c6:
  ThrowNullReferenceException();
}


// GameProgress.GameStatContainer$$ClearAll
// il2cpp: void GameProgress_GameStatContainer__ClearAll (GameProgress_GameStatContainer_o* __this, const MethodInfo* method);
// 0x5920b90
// eh: try 0x5920ccf..0x5920dd4 -> pad 0x5920ddf (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5920dff..0x5920e04 -> pad 0x5920ea1 cleanup
// eh: try 0x5920ea4..0x5920eae -> pad 0x5920eb6 catch (...) [compiler noexcept guard]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5920cbe: nop 
// asm:   0x5920dd9: jmp 0x5920de3
// asm:   0x5920ddb: jmp 0x5920de3
// asm:   0x5920ddd: jmp 0x5920de3
// asm:   0x5920ddf: jmp 0x5920de3
// asm:   0x5920de1: jmp 0x5920de3
// asm:   0x5920de3: mov rbx, rax
// asm:   0x5920de6: cmp edx, 1
// asm:   0x5920de9: jne 0x5920ea4
// asm:   0x5920def: mov rdi, rbx
// asm:   0x5920df2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5920df7: mov r14, qword ptr [rax]
// asm:   0x5920dfa: mov qword ptr [rsp + 0x18], r14
// asm:   0x5920dff: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5920e99: mov rdi, r14
// asm:   0x5920e9c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5920ea1: mov rbx, rax
// asm:   0x5920ea4: lea rdi, [rsp + 0x18]
// asm:   0x5920ea9: call 0x2fd2790  ; il2cpp_runtime_helper_02fd2790()
// asm:   0x5920eae: mov rdi, rbx
// asm:   0x5920eb1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5920eb6: mov rdi, rax
// asm:   0x5920eb9: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_GameStatContainer__ClearAll(GameProgress_GameStatContainer_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppType *handle;
  bool bVar3;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  VirtualInvokeData *pVVar4;
  Il2CppObject *pIVar5;
  int32_t *piVar6;
  ulong uVar7;
  MethodInfo *method_00;
  long lVar8;
  Il2CppObject *local_50;
  Il2CppObject *local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  Il2CppObject **local_30;
  
  if (Il2CppMethodInitialized_0754575b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_GameProgress_GameStatRecord);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameStatRecord);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_0754575b = '\x01';
  }
  handle = TypeRef_GameProgress_GameStatRecord;
  local_48 = (Il2CppObject *)0x0;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 == (System_Array_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_50 = (Il2CppObject *)System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
  local_40 = 0;
  local_38 = &local_50;
  local_30 = &local_48;
  do {
    pIVar5 = local_50;
    if (local_50 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_50->klass;
    uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_05920cf3;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_50,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05920cf3:
    bVar3 = (*pVVar4->methodPtr)(pIVar5,pVVar4->method);
    pIVar5 = local_50;
    if (!bVar3) {
      pIVar5 = il2cpp_vm_Object_IsInst(local_50,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar5 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar1 = pIVar5->klass;
      uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
      local_48 = pIVar5;
      if (uVar7 == 0) goto label_05920e5f;
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      break;
    }
    if (local_50 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_50->klass;
    uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar4 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar8) + 1);
          goto label_05920d87;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_50,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05920d87:
    pIVar5 = (*pVVar4->methodPtr)(pIVar5,pVVar4->method);
    if (pIVar5 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar5->klass->_1).element_class != (TypeInfo_GameProgress_GameStatRecord->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
    piVar6 = il2cpp_vm_Object_Unbox(pIVar5);
    GameProgress_GameStatContainer__Clear(__this,*piVar6,method_00);
  } while( true );
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
      goto label_05920e7d;
    }
  }
label_05920e5f:
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar5,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05920e7d:
  (*pVVar4->methodPtr)(pIVar5,pVVar4->method);
  return;
}


// GameProgress.GameStatContainer$$.ctor
// il2cpp: void GameProgress_GameStatContainer___ctor (GameProgress_GameStatContainer_o* __this, const MethodInfo* method);
// 0x591f700

void GameProgress_GameStatContainer___ctor(GameProgress_GameStatContainer_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  GameProgress_DamageSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_0754575c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_DamageSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_0754575c = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Level = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Level);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Exp = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Exp);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar2,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).PlayTime = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlayTime);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar2,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).HighestSpeed = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HighestSpeed);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledTotal = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledTotal);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledBlade = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledBlade);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledAHSS = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledAHSS);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledThunderspear = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledThunderspear);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledAPG = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledAPG);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledOther = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitansKilledOther);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledTotal = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledTotal);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledBlade = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledBlade);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledAHSS = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledAHSS);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledThunderspear = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledThunderspear);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledAPG = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledAPG);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledTitan = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledTitan);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledOther = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumansKilledOther);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_DamageSetting);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this_00,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
            (__this_00,(__this_00->klass->vtable)._4_SetDefault.method);
  (__this->fields).Damage = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Damage);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


