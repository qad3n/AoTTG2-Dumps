// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCutsceneBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCutsceneBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005AA")]
[CompilerGenerated]
internal class CustomLogicCutsceneBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005AB")]
	public static class Factory
	{
		[Token(Token = "0x60033E2")]
		[Address(RVA = "0x59C9FE0", Offset = "0x59C8FE0", VA = "0x59C9FE0")]
		public static CustomLogicCutsceneBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			BuiltinClassInstance __this;
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_14;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length != 0) {
				pSVar1 = local_14.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCutsceneBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicCutsceneBuiltin();
			return (CustomLogicCutsceneBuiltin)__this;
		}
	}

	[Token(Token = "0x20005AC")]
	public static class Bindings
	{
		[Token(Token = "0x40018AA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60033E3")]
		[Address(RVA = "0x59CA100", Offset = "0x59C9100", VA = "0x59CA100")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLMethodBinding<CustomLogicCutsceneBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Start");
			if (bVar1) {
				if ((typeof(CustomLogicCutsceneBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCutsceneBuiltin.Bindings.__CreateMethodBinding__Start();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCutsceneBuiltin.Bindings.__CreateMethodBinding__Start();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ShowDialogue");
			if (bVar1) {
				if ((typeof(CustomLogicCutsceneBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCutsceneBuiltin.Bindings.__CreateMethodBinding__ShowDialogue();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCutsceneBuiltin.Bindings.__CreateMethodBinding__ShowDialogue();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ShowDialogueForTime");
			if (bVar1) {
				if ((typeof(CustomLogicCutsceneBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCutsceneBuiltin.Bindings.__CreateMethodBinding__ShowDialogueForTime();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCutsceneBuiltin.Bindings.__CreateMethodBinding__ShowDialogueForTime();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "HideDialogue");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCutsceneBuiltin not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicCutsceneBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCutsceneBuiltin.Bindings)) ;
				pCVar2 = CustomLogicCutsceneBuiltin.Bindings.__CreateMethodBinding__HideDialogue();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicCutsceneBuiltin.Bindings.__CreateMethodBinding__HideDialogue();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60033E4")]
		[Address(RVA = "0x59CA2E0", Offset = "0x59C92E0", VA = "0x59CA2E0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__Start()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__Start): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCutsceneBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCutsceneBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546cfe == false) {
				Il2CppMethodInitialized_07546cfe = true;
				uVar1 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCutsceneBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCutsceneBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__Start_b__2_0);
				pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCutsceneBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033E5")]
		[Address(RVA = "0x59CA420", Offset = "0x59C9420", VA = "0x59CA420")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogue()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogue): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCutsceneBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCutsceneBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546cff == false) {
				Il2CppMethodInitialized_07546cff = true;
				uVar1 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCutsceneBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCutsceneBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogue_b__3_0);
				pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCutsceneBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033E6")]
		[Address(RVA = "0x59CA560", Offset = "0x59C9560", VA = "0x59CA560")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogueForTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogueForTime): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCutsceneBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCutsceneBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d00 == false) {
				Il2CppMethodInitialized_07546d00 = true;
				uVar1 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCutsceneBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCutsceneBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__ShowDialogueForTime_b);
				pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCutsceneBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033E7")]
		[Address(RVA = "0x59CA6A0", Offset = "0x59C96A0", VA = "0x59CA6A0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__HideDialogue()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__HideDialogue): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCutsceneBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCutsceneBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d01 == false) {
				Il2CppMethodInitialized_07546d01 = true;
				uVar1 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCutsceneBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCutsceneBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCutsceneBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_Bindings_c___CreateMethodBinding__HideDialogue_b__5_0);
				pCVar2 = typeof(CustomLogicCutsceneBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCutsceneBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x20005AE")]
	[CompilerGenerated]
	private sealed class _003CStartCutscene_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40018B0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40018B1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40018B2")]
		[FieldOffset(Offset = "0x20")]
		public string name;

		[Token(Token = "0x40018B3")]
		[FieldOffset(Offset = "0x28")]
		public bool full;

		[Token(Token = "0x1700097D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033F2")]
			[Address(RVA = "0x59CAE40", Offset = "0x59C9E40", VA = "0x59CAE40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700097E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60033F4")]
			[Address(RVA = "0x59CAE90", Offset = "0x59C9E90", VA = "0x59CAE90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60033EF")]
		[Address(RVA = "0x59C9F60", Offset = "0x59C8F60", VA = "0x59C9F60")]
		[DebuggerHidden]
		public _003CStartCutscene_003Ed__6(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60033F0")]
		[Address(RVA = "0x59CAC40", Offset = "0x59C9C40", VA = "0x59CAC40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60033F1")]
		[Address(RVA = "0x59CAC50", Offset = "0x59C9C50", VA = "0x59CAC50", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$MoveNext): 1 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			InGameMenu __this_00;
			CustomLogicEvaluator pCVar3;
			String className;
			CustomLogicClassInstance classInstance;
			object pIVar4;

			iVar2 = this.__1__state;
			if (iVar2 == 0) {
				this.__1__state = -1;
				pCVar3 = CustomLogicManager.Evaluator;
				className = this.name;
				if (pCVar3 != null) {
					classInstance = pCVar3.CreateClassInstance(className, CustomLogicEvaluator.EmptyArgs, true);
					CustomLogicManager.ToggleCutscene(this.full);
					pCVar3 = CustomLogicManager.Evaluator;
					if (pCVar3 != null) {
						pIVar4 = pCVar3.EvaluateMethod(classInstance, "Start", null, 0);
						this.__2__current = pIVar4;
						this.__1__state = 1;
						goto label_05acae1c;
					}
				}
		label_05acae30: ;
				throw new NullReferenceException();
			}
			if (iVar2 == 1) {
				this.__1__state = -1;
				CustomLogicManager.ToggleCutscene(false);
				__this_00 = (InGameMenu)UIManager.CurrentMenu;
				if (__this_00 == null) goto label_05acae30;
				bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
					throw new InvalidCastException();
				}
				__this_00.HideCutsceneMenu();
			}
		label_05acae1c: ;
			return iVar2 == 0;
		}

		[Token(Token = "0x60033F3")]
		[Address(RVA = "0x59CAE50", Offset = "0x59C9E50", VA = "0x59CAE50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_StartCutscene_d__6_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20005AF")]
	[CompilerGenerated]
	private sealed class _003Croutine_ShowDialogueForTime_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40018B4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40018B5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40018B6")]
		[FieldOffset(Offset = "0x20")]
		public string icon;

		[Token(Token = "0x40018B7")]
		[FieldOffset(Offset = "0x28")]
		public string title;

		[Token(Token = "0x40018B8")]
		[FieldOffset(Offset = "0x30")]
		public string content;

		[Token(Token = "0x40018B9")]
		[FieldOffset(Offset = "0x38")]
		public float time;

		[Token(Token = "0x1700097F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033F8")]
			[Address(RVA = "0x59CB0A0", Offset = "0x59CA0A0", VA = "0x59CB0A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000980")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60033FA")]
			[Address(RVA = "0x59CB0F0", Offset = "0x59CA0F0", VA = "0x59CB0F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60033F5")]
		[Address(RVA = "0x59C9F40", Offset = "0x59C8F40", VA = "0x59C9F40")]
		[DebuggerHidden]
		public _003Croutine_ShowDialogueForTime_003Ed__5(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60033F6")]
		[Address(RVA = "0x59CAEA0", Offset = "0x59C9EA0", VA = "0x59CAEA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60033F7")]
		[Address(RVA = "0x59CAEB0", Offset = "0x59C9EB0", VA = "0x59CAEB0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$MoveNext): 2 lines keep C-only constructs
			float seconds;
			byte bVar1;
			int iVar2;
			String icon;
			String title;
			String content;
			WaitForSeconds __this_00;
			InGameMenu __this_01;

			iVar2 = this.__1__state;
			if (iVar2 == 0) {
				this.__1__state = -1;
				__this_01 = (InGameMenu)UIManager.CurrentMenu;
				icon = this.icon;
				title = this.title;
				content = this.content;
				if (__this_01 == null) {
		label_05acb097: ;
					throw new NullReferenceException();
				}
				bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
		label_05acb092: ;
					throw new InvalidCastException();
				}
				__this_01.ShowCutsceneMenu(icon, title, content, CustomLogicManager.Cutscene);
				seconds = this.time;
				__this_00 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar2 == 1) {
				this.__1__state = -1;
				__this_01 = (InGameMenu)UIManager.CurrentMenu;
				if (__this_01 == null) goto label_05acb097;
				bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) goto label_05acb092;
				__this_01.HideCutsceneMenu();
			}
			return iVar2 == 0;
		}

		[Token(Token = "0x60033F9")]
		[Address(RVA = "0x59CB0B0", Offset = "0x59CA0B0", VA = "0x59CB0B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicCutsceneBuiltin_routine_ShowDialogueForTime_d__5_System_Collections_IEnum);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x17000979")]
	public override string ClassName
	{
		[Token(Token = "0x60033DE")]
		[Address(RVA = "0x59C9F80", Offset = "0x59C8F80", VA = "0x59C9F80", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$get_ClassName): clean
			return "Cutscene";
		}
	}

	[Token(Token = "0x1700097A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60033DF")]
		[Address(RVA = "0x59C9FB0", Offset = "0x59C8FB0", VA = "0x59C9FB0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700097B")]
	public override bool IsStatic
	{
		[Token(Token = "0x60033E0")]
		[Address(RVA = "0x59C9FC0", Offset = "0x59C8FC0", VA = "0x59C9FC0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700097C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60033E1")]
		[Address(RVA = "0x59C9FD0", Offset = "0x59C8FD0", VA = "0x59C9FD0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60033D7")]
	[Address(RVA = "0x59C99D0", Offset = "0x59C89D0", VA = "0x59C99D0")]
	public CustomLogicCutsceneBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546cf4 == false) {
			Il2CppMethodInitialized_07546cf4 = true;
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	[Token(Token = "0x60033D8")]
	[Address(RVA = "0x59C9A40", Offset = "0x59C8A40", VA = "0x59C9A40")]
	public void Start(string name, bool full)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$Start): clean
		uint uVar1;
		CustomLogicManager __this_00;
		CustomLogicCutsceneBuiltin.d__6<StartCutscene> __this_01;

		if (Il2CppMethodInitialized_07546cf5 == false) {
			Il2CppMethodInitialized_07546cf5 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager._instance;
		}
		else {
			__this_00 = *(CustomLogicManager*)(typeof(CustomLogicManager)).static_fields;
		}
		__this_01 = new CustomLogicCutsceneBuiltin.d__6<StartCutscene>();
		__this_01.__1__state = 0;
		__this_01.name = name;
		__this_01.full = full;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.StartCoroutine((IEnumerator)__this_01);
		return;
	}

	[Token(Token = "0x60033D9")]
	[Address(RVA = "0x59C9BB0", Offset = "0x59C8BB0", VA = "0x59C9BB0")]
	public void ShowDialogue(string icon, string title, string content)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogue): 1 lines keep C-only constructs
		byte bVar1;
		InGameMenu __this_00;

		__this_00 = (InGameMenu)UIManager.CurrentMenu;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this_00.ShowCutsceneMenu(icon, title, content, CustomLogicManager.Cutscene);
		return;
	}

	[Token(Token = "0x60033DA")]
	[Address(RVA = "0x59C9CA0", Offset = "0x59C8CA0", VA = "0x59C9CA0")]
	public void ShowDialogueForTime(string icon, string title, string content, float time)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogueForTime): 1 lines keep C-only constructs
		uint uVar1;
		CustomLogicManager __this_00;
		CustomLogicCutsceneBuiltin.d__5<routine_ShowDialogueForTime> __this_01;

		if (Il2CppMethodInitialized_07546cf7 == false) {
			Il2CppMethodInitialized_07546cf7 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager._instance;
		}
		else {
			__this_00 = *(CustomLogicManager*)(typeof(CustomLogicManager)).static_fields;
		}
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicCutsceneBuiltin.d__5<routine_ShowDialogueForTime>));
		__this_01 = new Object();
		__this_01.__1__state = 0;
		__this_01.icon = icon;
		__this_01.title = title;
		__this_01.content = content;
		__this_01.time = time;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.StartCoroutine((IEnumerator)__this_01);
		return;
	}

	[Token(Token = "0x60033DB")]
	[Address(RVA = "0x59C9E80", Offset = "0x59C8E80", VA = "0x59C9E80")]
	public void HideDialogue()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$HideDialogue): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this_00;

		if (Il2CppMethodInitialized_07546cf8 == false) {
			Il2CppMethodInitialized_07546cf8 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this_00.HideCutsceneMenu();
		return;
	}

	[Token(Token = "0x60033DC")]
	[Address(RVA = "0x59C9DE0", Offset = "0x59C8DE0", VA = "0x59C9DE0")]
	[IteratorStateMachine(typeof(_003Croutine_ShowDialogueForTime_003Ed__5))]
	private IEnumerator routine_ShowDialogueForTime(string icon, string title, string content, float time)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$routine_ShowDialogueForTime): 1 lines keep C-only constructs
		CustomLogicCutsceneBuiltin.d__5<routine_ShowDialogueForTime> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicCutsceneBuiltin.d__5<routine_ShowDialogueForTime>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.icon = icon;
		__this_00.title = title;
		__this_00.content = content;
		__this_00.time = time;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60033DD")]
	[Address(RVA = "0x59C9B40", Offset = "0x59C8B40", VA = "0x59C9B40")]
	[IteratorStateMachine(typeof(_003CStartCutscene_003Ed__6))]
	private IEnumerator StartCutscene(string name, bool full)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c (CustomLogic.CustomLogicCutsceneBuiltin$$StartCutscene): clean
		CustomLogicCutsceneBuiltin.d__6<StartCutscene> __this_00;

		__this_00 = new CustomLogicCutsceneBuiltin.d__6<StartCutscene>();
		__this_00.__1__state = 0;
		__this_00.name = name;
		__this_00.full = full;
		return (IEnumerator)__this_00;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c.

	// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Start");
		__this.Add((Il2CppObject *)"ShowDialogue");
		__this.Add((Il2CppObject *)"ShowDialogueForTime");
		__this.Add((Il2CppObject *)"HideDialogue");
		CustomLogicCutsceneBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicCutsceneBuiltin.Bindings.c();
		CustomLogicCutsceneBuiltin.Bindings.c.__9 =(CustomLogicCutsceneBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__Start>b__2_0: clean
	private object Bindings_c____CreateMethodBinding__Start_b__2_0(CustomLogicCutsceneBuiltin __c, Object[] __a)
	{
		object obj;
		bool full;
		String name;

		if (__a == null) {
	label_05acaa42: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				full = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				if (__c != null) {
					__c.Start(name, full);
					return null;
				}
				goto label_05acaa42;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogue>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__ShowDialogue_b__3_0(CustomLogicCutsceneBuiltin __c, Object[] __a)
	{
		object obj;
		String icon;
		String title;
		String content;
		CustomLogicCutsceneBuiltin __this_00;

		if (__a == null) {
	label_05acab18: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			icon = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				title = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					__this_00 = (CustomLogicCutsceneBuiltin)__a[2];
					content = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
					if (__c != null) {
						__this_00.ShowDialogue(icon, title, content);
						return null;
					}
					goto label_05acab18;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogueForTime>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__ShowDialogueForTime_b__4_0(CustomLogicCutsceneBuiltin __c, Object[] __a)
	{
		object obj;
		String icon;
		String title;
		String content;
		float time;

		if (__a == null) {
	label_05acac1a: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			icon = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				title = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					content = CustomLogicEvaluator.ConvertTo<string>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						time = CustomLogicEvaluator.ConvertTo<float>(__a[3]) ;
						if (__c != null) {
							__c.ShowDialogueForTime(icon, title, content, time);
							return null;
						}
						goto label_05acac1a;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__HideDialogue>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__HideDialogue_b__5_0(CustomLogicCutsceneBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		this.HideDialogue();
		return null;
	}
}
