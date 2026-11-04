// Type: Gisketch.Aottg2UI.Styling.GisketchSpriteLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSpriteLoader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Load
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load (System_String_o* resourcePath, const MethodInfo* method);
// 0x18188a710
// eh: try 0x18188a910..0x18188a927 -> pad 0x183317fd0 catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18188a8b3: mov rax, qword ptr [rsp + 0xb8]
// asm:   0x18188a8bb: jmp 0x18188ab5c
// asm:   0x18188a935: xor edx, edx
// asm:   0x18188a937: lea rcx, [rsp + 0x50]
// asm:   0x18188a93c: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x18188a941: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18188a946: test rcx, rcx
// asm:   0x18188a949: jne 0x18188ab71
// asm:   0x18188a94f: xor edi, edi
// asm:   0x18188a951: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x18188a959: mov r14, qword ptr [rsp + 0x20]
// asm:   0x18188ab09: mov rax, qword ptr [rip + 0x281ab38]  ; "null"
// asm:   0x18188ab10: mov r12, qword ptr [rip + 0x27fea51]  ; " => "
// asm:   0x18188ab17: mov r15, qword ptr [rip + 0x28253ea]  ; "SpriteLoader.ResourcesLoadSprite"
// asm:   0x18188ab71: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(System_String_o *resourcePath,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *area;
  bool bVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_String_o *pSVar6;
  int32_t local_res18 [2];
  UnityEngine_Object_o *local_res20;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_184341f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&"x");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" => ");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteLoader.ResourcesLoadSprite");
    Il2CppMethodInitialized_184341f05 = '\x01';
  }
  x = (UnityEngine_Texture2D_o *)0x0;
  local_res20 = (UnityEngine_Object_o *)0x0;
  local_48.fields._area = (System_String_o *)0x0;
  local_48.fields._detail = (System_String_o *)0x0;
  local_48.fields._startMs._0_4_ = 0;
  local_48.fields._startMs._4_2_ = 0;
  local_48.fields._startMs._6_2_ = 0;
  local_48.fields._enabled = false;
  local_48.fields._hotLoop = false;
  local_48.fields._26_6_ = 0;
  local_res18[0] = 0;
  bVar2 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = (UnityEngine_Object_o *)0x0;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    if (Il2CppMethodInitialized_184341f06 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_TryGetValue);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341f06 = '\x01';
    }
    local_res20 = (UnityEngine_Object_o *)0x0;
    Il2CppCodeGenWriteBarrier(&local_res20,(void *)0x0);
    bVar2 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18188ab77;
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)resourcePath,(Il2CppObject **)&local_res20,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_TryGetValue);
      pUVar4 = local_res20;
      if (bVar2) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          return (UnityEngine_Sprite_o *)local_res20;
        }
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    pGVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                       (&local_68,"SpriteLoader.ResourcesLoadSprite",resourcePath,(MethodInfo *)0x0);
    local_48.fields._area = (pGVar3->fields)._area;
    local_48.fields._detail = (pGVar3->fields)._detail;
    local_48.fields._startMs = (pGVar3->fields)._startMs;
    local_48.fields._enabled = (pGVar3->fields)._enabled;
    local_48.fields._hotLoop = (pGVar3->fields)._hotLoop;
    local_48.fields._26_6_ = *(undefined6 *)&(pGVar3->fields).field_0x1a;
    local_68.fields._area = (System_String_o *)0x0;
    local_68.fields._detail = (System_String_o *)&local_48;
    pUVar4 = (UnityEngine_Object_o *)
             UnityEngine_Resources__Load_object_
                       (resourcePath,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_48,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    if (Il2CppMethodInitialized_184341f07 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_set_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341f07 = '\x01';
    }
    bVar2 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18188ab77;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)resourcePath,(Il2CppObject *)pUVar4,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_set_Item);
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pUVar4 == (UnityEngine_Object_o *)0x0) goto label_18188ab77;
      x = UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)pUVar4,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    area = "SpriteLoader.ResourcesLoadSprite";
    pSVar6 = " => ";
    pSVar5 = "null";
    if (bVar2) {
      if (x == (UnityEngine_Texture2D_o *)0x0) {
label_18188ab77:
        ThrowNullReferenceException();
      }
      local_res18[0] = (*(x->klass->vtable)._5_get_width.methodPtr)(x,(x->klass->vtable)._5_get_width.method);
      pSVar5 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
      local_res18[0] =
           (*(x->klass->vtable)._7_get_height.methodPtr)(x,(x->klass->vtable)._7_get_height.method);
      str2 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969b70(pSVar5,"x",str2,(MethodInfo *)0x0);
    }
    pSVar6 = System_String__Concat_1969b70(resourcePath,pSVar6,pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar6,(MethodInfo *)0x0);
  }
  return (UnityEngine_Sprite_o *)pUVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$TryGetCached
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached (System_String_o* resourcePath, UnityEngine_Sprite_o** sprite, const MethodInfo* method);
// 0x18188ac50

bool Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
               (System_String_o *resourcePath,UnityEngine_Sprite_o **sprite,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f06 = '\x01';
  }
  *sprite = (UnityEngine_Sprite_o *)0x0;
  Il2CppCodeGenWriteBarrier(sprite,(void *)0x0);
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)resourcePath,(Il2CppObject **)sprite,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_TryGetValue);
    if (bVar1) {
      x = (UnityEngine_Object_o *)*sprite;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Store
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store (System_String_o* resourcePath, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x18188ab80

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store
               (System_String_o *resourcePath,UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f07 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)sprite,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)resourcePath,(Il2CppObject *)sprite,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_set_Item
                );
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader___cctor (const MethodInfo* method);
// 0x18188ad40

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Sprite__o *__this;
  
  if (Il2CppMethodInitialized_184341f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    Il2CppMethodInitialized_184341f08 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Sprite);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_ctor);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache,__this);
  return;
}


