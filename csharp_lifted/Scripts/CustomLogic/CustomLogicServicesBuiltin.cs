// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicServicesBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicServicesBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Networking;

namespace CustomLogic;

[Token(Token = "0x20005D7")]
[CompilerGenerated]
internal class CustomLogicServicesBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005D8")]
	public static class Factory
	{
		[Token(Token = "0x600365E")]
		[Address(RVA = "0x59F84F0", Offset = "0x59F74F0", VA = "0x59F84F0")]
		public static CustomLogicServicesBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicServicesBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicServicesBuiltin();
			return (CustomLogicServicesBuiltin)__this;
		}
	}

	[Token(Token = "0x20005D9")]
	public static class Bindings
	{
		[Token(Token = "0x400194D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600365F")]
		[Address(RVA = "0x59F8610", Offset = "0x59F7610", VA = "0x59F8610")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLMethodBinding<CustomLogicServicesBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "CheckPermissions");
			if (bVar1) {
				if ((typeof(CustomLogicServicesBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__CheckPermissions();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__CheckPermissions();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "GetSecret");
			if (bVar1) {
				if ((typeof(CustomLogicServicesBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__GetSecret();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__GetSecret();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Get");
			if (bVar1) {
				if ((typeof(CustomLogicServicesBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__Get();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__Get();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Post");
			if (bVar1) {
				pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__Post();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Put");
			if (bVar1) {
				pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__Put() ;
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Delete");
			if (bVar1) {
				pCVar2 = CustomLogicServicesBuiltin.Bindings.__CreateMethodBinding__Delete();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicServicesBuiltin not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003660")]
		[Address(RVA = "0x59F8880", Offset = "0x59F7880", VA = "0x59F8880")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__CheckPermissions()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__CheckPermissions): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicServicesBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicServicesBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f0a == false) {
				Il2CppMethodInitialized_07546f0a = true;
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicServicesBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicServicesBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicServicesBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__CheckPermissions_b__2_0);
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicServicesBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003661")]
		[Address(RVA = "0x59F89C0", Offset = "0x59F79C0", VA = "0x59F89C0")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__GetSecret()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__GetSecret): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicServicesBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicServicesBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f0b == false) {
				Il2CppMethodInitialized_07546f0b = true;
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicServicesBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicServicesBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicServicesBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__GetSecret_b__3_0);
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicServicesBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003662")]
		[Address(RVA = "0x59F8B00", Offset = "0x59F7B00", VA = "0x59F8B00")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Get()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Get): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicServicesBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicServicesBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f0c == false) {
				Il2CppMethodInitialized_07546f0c = true;
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicServicesBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicServicesBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicServicesBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0);
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicServicesBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003663")]
		[Address(RVA = "0x59F8C40", Offset = "0x59F7C40", VA = "0x59F8C40")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Post()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Post): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicServicesBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicServicesBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f0d == false) {
				Il2CppMethodInitialized_07546f0d = true;
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicServicesBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicServicesBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicServicesBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Post_b__5_0);
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicServicesBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003664")]
		[Address(RVA = "0x59F8D80", Offset = "0x59F7D80", VA = "0x59F8D80")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Put()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Put): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicServicesBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicServicesBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f0e == false) {
				Il2CppMethodInitialized_07546f0e = true;
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicServicesBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicServicesBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicServicesBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Put_b__6_0);
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicServicesBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003665")]
		[Address(RVA = "0x59F8EC0", Offset = "0x59F7EC0", VA = "0x59F8EC0")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Delete()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Delete): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicServicesBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicServicesBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicServicesBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f0f == false) {
				Il2CppMethodInitialized_07546f0f = true;
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicServicesBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicServicesBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicServicesBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicServicesBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicServicesBuiltin_Bindings_c___CreateMethodBinding__Delete_b__7_0);
				pCVar2 = typeof(CustomLogicServicesBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicServicesBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x20005DB")]
	[CompilerGenerated]
	private sealed class _003CDeleteRequest_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001955")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001956")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001957")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x4001958")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UserMethod callback;

		[Token(Token = "0x4001959")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x170009D1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003673")]
			[Address(RVA = "0x59F9D10", Offset = "0x59F8D10", VA = "0x59F9D10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170009D2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003675")]
			[Address(RVA = "0x59F9D60", Offset = "0x59F8D60", VA = "0x59F9D60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600366F")]
		[Address(RVA = "0x59F82E0", Offset = "0x59F72E0", VA = "0x59F82E0")]
		[DebuggerHidden]
		public _003CDeleteRequest_003Ed__16(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003670")]
		[Address(RVA = "0x59F97D0", Offset = "0x59F87D0", VA = "0x59F97D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.IDisposable.Dispose): clean
			int iVar1;
			UnityWebRequest obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = this._www_5__2;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x6003671")]
		[Address(RVA = "0x59F9880", Offset = "0x59F8880", VA = "0x59F9880", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$MoveNext): 6 lines keep C-only constructs
			int iVar1;
			CustomLogicEvaluator __this_00;
			CustomLogicServicesBuiltin.d__16<DeleteRequest> pCVar4;
			int iVar5;
			UnityWebRequest pUVar6;
			UnityWebRequestAsyncOperation pUVar7;
			String pSVar8;
			Object[] parameterValues;
			object pIVar9;
			bool bVar12;
			UserMethod userMethod;
			CustomLogicServicesBuiltin.d__16<DeleteRequest> local_58;
			byte local_48;
			Enum local_40;

			local_58 = this;
			local_48 = (byte)&local_58;
			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -3;
				pUVar6 = this._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				local_48 = (byte)&local_58;
				iVar5 = pUVar6.result;
				if (iVar5 != 1) {
					pSVar8 = CustomLogicServicesBuiltin.GetWebRequestFailureJSON(local_58._www_5__2);
				}
				userMethod = local_58.callback;
				if (userMethod != null) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						userMethod = local_58.callback;
					}
					__this_00 = CustomLogicManager.Evaluator;
					parameterValues = (Object[])new object[2];
					if (parameterValues == null) {
						throw new NullReferenceException();
					}
					if (pSVar8 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar8, (((parameterValues.obj).klass)._1).element_class);
						if (pIVar9 == null) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((int)parameterValues.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameterValues[0] = (object)pSVar8;
					pUVar6 = local_58._www_5__2;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					local_40.klass = (Enum)typeof(UnityWebRequest.Result);
					local_40.monitor = (IntPtr)0xffffffffffffffff;
					pSVar8 = local_40.ToString();
					if (pSVar8 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar8, (((parameterValues.obj).klass)._1).element_class);
						if (pIVar9 == null) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((parameterValues.Length & 0xfffffffe) == 0) {
						throw new IndexOutOfRangeException();
					}
					parameterValues[1] = (object)pSVar8;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.EvaluateMethod(userMethod, parameterValues);
				}
				pCVar4 = local_58;
				pCVar4.__1__state = -1;
				pUVar6 = pCVar4._www_5__2;
				if (pUVar6 != null) {
					pUVar6.Dispose();
				}
				local_58._www_5__2 = null;
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				local_48 = (byte)&local_58;
				pUVar6 = UnityWebRequest.Delete(this.uri);
				local_58._www_5__2 = pUVar6;
				local_58.__1__state = -3;
				pUVar6 = local_58._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar6.timeout = 0xf;
				pUVar6 = local_58._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar7 = pUVar6.SendWebRequest();
				local_58.__2__current = (object)pUVar7;
				local_58.__1__state = 1;
			}
			else {
			}
			return bVar12;
		}

		[Token(Token = "0x6003672")]
		[Address(RVA = "0x59F9C70", Offset = "0x59F8C70", VA = "0x59F9C70")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$<>m__Finally1): clean
			UnityWebRequest obj;

			this.__1__state = -1;
			obj = this._www_5__2;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x6003674")]
		[Address(RVA = "0x59F9D20", Offset = "0x59F8D20", VA = "0x59F9D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicServicesBuiltin_DeleteRequest_d__16_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20005DC")]
	[CompilerGenerated]
	private sealed class _003CGetRequest_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400195A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400195B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400195C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x400195D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UserMethod callback;

		[Token(Token = "0x400195E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CwebRequest_003E5__2;

		[Token(Token = "0x170009D3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600367A")]
			[Address(RVA = "0x59FA2D0", Offset = "0x59F92D0", VA = "0x59FA2D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170009D4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600367C")]
			[Address(RVA = "0x59FA320", Offset = "0x59F9320", VA = "0x59FA320", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003676")]
		[Address(RVA = "0x59F8280", Offset = "0x59F7280", VA = "0x59F8280")]
		[DebuggerHidden]
		public _003CGetRequest_003Ed__13(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003677")]
		[Address(RVA = "0x59F9D70", Offset = "0x59F8D70", VA = "0x59F9D70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.IDisposable.Dispose): clean
			int iVar1;
			UnityWebRequest obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = this._webRequest_5__2;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x6003678")]
		[Address(RVA = "0x59F9E20", Offset = "0x59F8E20", VA = "0x59F9E20", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$MoveNext): 6 lines keep C-only constructs
			int iVar1;
			CustomLogicEvaluator __this_00;
			CustomLogicServicesBuiltin.d__13<GetRequest> pCVar4;
			int iVar5;
			UnityWebRequest pUVar6;
			UnityWebRequestAsyncOperation pUVar7;
			DownloadHandler __this_01;
			String pSVar8;
			Object[] parameterValues;
			object pIVar9;
			bool bVar12;
			UserMethod userMethod;
			CustomLogicServicesBuiltin.d__13<GetRequest> local_58;
			byte local_48;
			Enum local_40;

			local_58 = this;
			local_48 = (byte)&local_58;
			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -3;
				pUVar6 = this._webRequest_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				local_48 = (byte)&local_58;
				iVar5 = pUVar6.result;
				pUVar6 = local_58._webRequest_5__2;
				if (iVar5 == 1) {
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					__this_01 = pUVar6.downloadHandler;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					pSVar8 = __this_01.text;
				}
				else {
					pSVar8 = CustomLogicServicesBuiltin.GetWebRequestFailureJSON(pUVar6);
				}
				userMethod = local_58.callback;
				if (userMethod != null) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						userMethod = local_58.callback;
					}
					__this_00 = CustomLogicManager.Evaluator;
					parameterValues = (Object[])new object[2];
					if (parameterValues == null) {
						throw new NullReferenceException();
					}
					if (pSVar8 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar8, (((parameterValues.obj).klass)._1).element_class);
						if (pIVar9 == null) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((int)parameterValues.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameterValues[0] = (object)pSVar8;
					pUVar6 = local_58._webRequest_5__2;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					local_40.klass = (Enum)typeof(UnityWebRequest.Result);
					local_40.monitor = (IntPtr)0xffffffffffffffff;
					pSVar8 = local_40.ToString();
					if (pSVar8 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar8, (((parameterValues.obj).klass)._1).element_class);
						if (pIVar9 == null) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((parameterValues.Length & 0xfffffffe) == 0) {
						throw new IndexOutOfRangeException();
					}
					parameterValues[1] = (object)pSVar8;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.EvaluateMethod(userMethod, parameterValues);
				}
				pCVar4 = local_58;
				pCVar4.__1__state = -1;
				pUVar6 = pCVar4._webRequest_5__2;
				if (pUVar6 != null) {
					pUVar6.Dispose();
				}
				local_58._webRequest_5__2 = null;
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				local_48 = (byte)&local_58;
				pUVar6 = UnityWebRequest.Get(this.uri);
				local_58._webRequest_5__2 = pUVar6;
				local_58.__1__state = -3;
				pUVar6 = local_58._webRequest_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar6.timeout = 0xf;
				pUVar6 = local_58._webRequest_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar7 = pUVar6.SendWebRequest();
				local_58.__2__current = (object)pUVar7;
				local_58.__1__state = 1;
			}
			else {
			}
			return bVar12;
		}

		[Token(Token = "0x6003679")]
		[Address(RVA = "0x59FA230", Offset = "0x59F9230", VA = "0x59FA230")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$<>m__Finally1): clean
			UnityWebRequest obj;

			this.__1__state = -1;
			obj = this._webRequest_5__2;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x600367B")]
		[Address(RVA = "0x59FA2E0", Offset = "0x59F92E0", VA = "0x59FA2E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetRequest_d__13_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20005DD")]
	[CompilerGenerated]
	private sealed class _003CPostRequest_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400195F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001960")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001961")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x4001962")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string data;

		[Token(Token = "0x4001963")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string format;

		[Token(Token = "0x4001964")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public UserMethod callback;

		[Token(Token = "0x4001965")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x170009D5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003681")]
			[Address(RVA = "0x59FA890", Offset = "0x59F9890", VA = "0x59FA890", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170009D6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003683")]
			[Address(RVA = "0x59FA8E0", Offset = "0x59F98E0", VA = "0x59FA8E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600367D")]
		[Address(RVA = "0x59F82A0", Offset = "0x59F72A0", VA = "0x59F82A0")]
		[DebuggerHidden]
		public _003CPostRequest_003Ed__14(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600367E")]
		[Address(RVA = "0x59FA330", Offset = "0x59F9330", VA = "0x59FA330", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.IDisposable.Dispose): clean
			int iVar1;
			UnityWebRequest obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = this._www_5__2;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x600367F")]
		[Address(RVA = "0x59FA3E0", Offset = "0x59F93E0", VA = "0x59FA3E0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$MoveNext): 6 lines keep C-only constructs
			int iVar1;
			CustomLogicEvaluator __this_00;
			CustomLogicServicesBuiltin.d__14<PostRequest> pCVar4;
			int iVar5;
			UnityWebRequest pUVar6;
			UnityWebRequestAsyncOperation pUVar7;
			DownloadHandler __this_01;
			String pSVar8;
			Object[] parameterValues;
			object pIVar9;
			bool bVar12;
			UserMethod userMethod;
			CustomLogicServicesBuiltin.d__14<PostRequest> local_58;
			byte local_48;
			Enum local_40;

			local_58 = this;
			local_48 = (byte)&local_58;
			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -3;
				pUVar6 = this._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				local_48 = (byte)&local_58;
				iVar5 = pUVar6.result;
				pUVar6 = local_58._www_5__2;
				if (iVar5 == 1) {
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					__this_01 = pUVar6.downloadHandler;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					pSVar8 = __this_01.text;
				}
				else {
					pSVar8 = CustomLogicServicesBuiltin.GetWebRequestFailureJSON(pUVar6);
				}
				userMethod = local_58.callback;
				if (userMethod != null) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						userMethod = local_58.callback;
					}
					__this_00 = CustomLogicManager.Evaluator;
					parameterValues = (Object[])new object[2];
					if (parameterValues == null) {
						throw new NullReferenceException();
					}
					if (pSVar8 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar8, (((parameterValues.obj).klass)._1).element_class);
						if (pIVar9 == null) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((int)parameterValues.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameterValues[0] = (object)pSVar8;
					pUVar6 = local_58._www_5__2;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					local_40.klass = (Enum)typeof(UnityWebRequest.Result);
					local_40.monitor = (IntPtr)0xffffffffffffffff;
					pSVar8 = local_40.ToString();
					if (pSVar8 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar8, (((parameterValues.obj).klass)._1).element_class);
						if (pIVar9 == null) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((parameterValues.Length & 0xfffffffe) == 0) {
						throw new IndexOutOfRangeException();
					}
					parameterValues[1] = (object)pSVar8;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.EvaluateMethod(userMethod, parameterValues);
				}
				pCVar4 = local_58;
				pCVar4.__1__state = -1;
				pUVar6 = pCVar4._www_5__2;
				if (pUVar6 != null) {
					pUVar6.Dispose();
				}
				local_58._www_5__2 = null;
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				local_48 = (byte)&local_58;
				pUVar6 = UnityWebRequest.Post(this.uri, this.data, this.format);
				local_58._www_5__2 = pUVar6;
				local_58.__1__state = -3;
				pUVar6 = local_58._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar6.timeout = 0xf;
				pUVar6 = local_58._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar7 = pUVar6.SendWebRequest();
				local_58.__2__current = (object)pUVar7;
				local_58.__1__state = 1;
			}
			else {
			}
			return bVar12;
		}

		[Token(Token = "0x6003680")]
		[Address(RVA = "0x59FA7F0", Offset = "0x59F97F0", VA = "0x59FA7F0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$<>m__Finally1): clean
			UnityWebRequest obj;

			this.__1__state = -1;
			obj = this._www_5__2;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x6003682")]
		[Address(RVA = "0x59FA8A0", Offset = "0x59F98A0", VA = "0x59FA8A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicServicesBuiltin_PostRequest_d__14_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20005DE")]
	[CompilerGenerated]
	private sealed class _003CPutRequest_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001966")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001967")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001968")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x4001969")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string data;

		[Token(Token = "0x400196A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public UserMethod callback;

		[Token(Token = "0x400196B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x170009D7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003688")]
			[Address(RVA = "0x59FAE50", Offset = "0x59F9E50", VA = "0x59FAE50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170009D8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600368A")]
			[Address(RVA = "0x59FAEA0", Offset = "0x59F9EA0", VA = "0x59FAEA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003684")]
		[Address(RVA = "0x59F82C0", Offset = "0x59F72C0", VA = "0x59F82C0")]
		[DebuggerHidden]
		public _003CPutRequest_003Ed__15(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003685")]
		[Address(RVA = "0x59FA8F0", Offset = "0x59F98F0", VA = "0x59FA8F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.IDisposable.Dispose): clean
			int iVar1;
			UnityWebRequest obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = this._www_5__2;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x6003686")]
		[Address(RVA = "0x59FA9A0", Offset = "0x59F99A0", VA = "0x59FA9A0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$MoveNext): 6 lines keep C-only constructs
			int iVar1;
			CustomLogicEvaluator __this_00;
			CustomLogicServicesBuiltin.d__15<PutRequest> pCVar4;
			int iVar5;
			UnityWebRequest pUVar6;
			UnityWebRequestAsyncOperation pUVar7;
			DownloadHandler __this_01;
			String pSVar8;
			Object[] parameterValues;
			object pIVar9;
			bool bVar12;
			UserMethod userMethod;
			CustomLogicServicesBuiltin.d__15<PutRequest> local_58;
			byte local_48;
			Enum local_40;

			local_58 = this;
			local_48 = (byte)&local_58;
			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -3;
				pUVar6 = this._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				local_48 = (byte)&local_58;
				iVar5 = pUVar6.result;
				pUVar6 = local_58._www_5__2;
				if (iVar5 == 1) {
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					__this_01 = pUVar6.downloadHandler;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					pSVar8 = __this_01.text;
				}
				else {
					pSVar8 = CustomLogicServicesBuiltin.GetWebRequestFailureJSON(pUVar6);
				}
				userMethod = local_58.callback;
				if (userMethod != null) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						userMethod = local_58.callback;
					}
					__this_00 = CustomLogicManager.Evaluator;
					parameterValues = (Object[])new object[2];
					if (parameterValues == null) {
						throw new NullReferenceException();
					}
					if (pSVar8 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar8, (((parameterValues.obj).klass)._1).element_class);
						if (pIVar9 == null) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((int)parameterValues.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameterValues[0] = (object)pSVar8;
					pUVar6 = local_58._www_5__2;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					local_40.klass = (Enum)typeof(UnityWebRequest.Result);
					local_40.monitor = (IntPtr)0xffffffffffffffff;
					pSVar8 = local_40.ToString();
					if (pSVar8 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar8, (((parameterValues.obj).klass)._1).element_class);
						if (pIVar9 == null) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((parameterValues.Length & 0xfffffffe) == 0) {
						throw new IndexOutOfRangeException();
					}
					parameterValues[1] = (object)pSVar8;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.EvaluateMethod(userMethod, parameterValues);
				}
				pCVar4 = local_58;
				pCVar4.__1__state = -1;
				pUVar6 = pCVar4._www_5__2;
				if (pUVar6 != null) {
					pUVar6.Dispose();
				}
				local_58._www_5__2 = null;
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				local_48 = (byte)&local_58;
				pUVar6 = UnityWebRequest.Put(this.uri, this.data);
				local_58._www_5__2 = pUVar6;
				local_58.__1__state = -3;
				pUVar6 = local_58._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar6.timeout = 0xf;
				pUVar6 = local_58._www_5__2;
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar7 = pUVar6.SendWebRequest();
				local_58.__2__current = (object)pUVar7;
				local_58.__1__state = 1;
			}
			else {
			}
			return bVar12;
		}

		[Token(Token = "0x6003687")]
		[Address(RVA = "0x59FADB0", Offset = "0x59F9DB0", VA = "0x59FADB0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$<>m__Finally1): clean
			UnityWebRequest obj;

			this.__1__state = -1;
			obj = this._www_5__2;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x6003689")]
		[Address(RVA = "0x59FAE60", Offset = "0x59F9E60", VA = "0x59FAE60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicServicesBuiltin_PutRequest_d__15_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400194C")]
	private const int RequestTimeoutSeconds = 15;

	[Token(Token = "0x170009CD")]
	public override string ClassName
	{
		[Token(Token = "0x600365A")]
		[Address(RVA = "0x59F8490", Offset = "0x59F7490", VA = "0x59F8490", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$get_ClassName): clean
			return "Service";
		}
	}

	[Token(Token = "0x170009CE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600365B")]
		[Address(RVA = "0x59F84C0", Offset = "0x59F74C0", VA = "0x59F84C0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009CF")]
	public override bool IsStatic
	{
		[Token(Token = "0x600365C")]
		[Address(RVA = "0x59F84D0", Offset = "0x59F74D0", VA = "0x59F84D0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009D0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600365D")]
		[Address(RVA = "0x59F84E0", Offset = "0x59F74E0", VA = "0x59F84E0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003649")]
	[Address(RVA = "0x59F7370", Offset = "0x59F6370", VA = "0x59F7370")]
	public CustomLogicServicesBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ef7 == false) {
			Il2CppMethodInitialized_07546ef7 = true;
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

	[Token(Token = "0x600364A")]
	[Address(RVA = "0x59F73E0", Offset = "0x59F63E0", VA = "0x59F73E0")]
	private static bool IsAllowedToRunBase()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$IsAllowedToRunBase): clean
		sbyte cVar1;
		AdvancedSettings pSVar2;
		BoolSetting pSVar3;
		bool bVar4;
		bool bVar5;

		bVar4 = PhotonNetwork.IsMasterClient;
		if (bVar4) {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				cVar1 = CustomLogicManager.LogicWasLocallyLoaded;
			}
			else {
				cVar1 = CustomLogicManager.LogicWasLocallyLoaded;
			}
			if (cVar1 == false) {
				return false;
			}
			pSVar2 = SettingsManager.AdvancedSettings;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.ServicesEnabled, pSVar3 == null)) {
				throw new NullReferenceException();
			}
			bVar5 = pSVar3._value != false;
		}
		return bVar5;
	}

	[Token(Token = "0x600364B")]
	[Address(RVA = "0x59F74C0", Offset = "0x59F64C0", VA = "0x59F74C0")]
	private static bool IsAllowedToRun(string service, out string baseUrl)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$IsAllowedToRun): clean
		AdvancedSettings __this;
		bool bVar1;

		*baseUrl = null;
		bVar1 = CustomLogicServicesBuiltin.IsAllowedToRunBase();
		if (bVar1) {
			__this = SettingsManager.AdvancedSettings;
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this.TryGetServiceUrl(service, baseUrl);
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x600364C")]
	[Address(RVA = "0x59F7540", Offset = "0x59F6540", VA = "0x59F7540")]
	private static string CheckMe(string service)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$CheckMe): 9 lines keep C-only constructs
		AdvancedSettings __this;
		bool bVar1;
		String pSVar2;
		String str2;
		Il2CppClass pIVar3;
		Exception __this_00;
		MethodInfo pMVar4;
		String local_28;
		Uri local_20;

		local_20 = null;
		pMVar4 = (MethodInfo)&local_28;
		local_28 = null;
		bVar1 = CustomLogicServicesBuiltin.IsAllowedToRunBase();
		if (bVar1) {
			__this = SettingsManager.AdvancedSettings;
			if (__this == null) goto label_05af76ae;
			bVar1 = __this.TryGetServiceUrl(service, ref local_28);
			pSVar2 = local_28;
			if (bVar1) {
				bVar1 = Uri.TryCreate(pSVar2, 1, ref local_20);
				if (bVar1) {
					if (local_20 == null) {
	label_05af76ae: ;
						throw new NullReferenceException();
					}
					pSVar2 = local_20.Scheme;
					bVar1 = (pSVar2 != Uri.UriSchemeHttp);
					if (!bVar1) {
						return local_28;
					}
					if (local_20 == null) goto label_05af76ae;
					pSVar2 = local_20.Scheme;
					bVar1 = (pSVar2 != Uri.UriSchemeHttps);
					if (!bVar1) {
						return local_28;
					}
				}
				pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Service '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' is not registered to a valid http/https URL.");
				pSVar2 = String.Concat(pSVar2, service, str2);
				pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_00 = (Exception)il2cpp_codegen_object_new(pIVar3);
				goto label_05af7729;
			}
		}
		pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this_00 = (Exception)il2cpp_codegen_object_new(pIVar3);
		pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Not allowed to run services. Requires being the master client, services enabled, and the service key registered in Advanced Configuration.");
	label_05af7729: ;
		__this_00 = new Exception(pSVar2);
		pMVar4 = (MethodInfo)il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_CheckMe);
		throw (object)__this_00;
	}

	[Token(Token = "0x600364D")]
	[Address(RVA = "0x59F7750", Offset = "0x59F6750", VA = "0x59F7750")]
	public static bool CheckPermissions(string service)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$CheckPermissions): 1 lines keep C-only constructs
		AdvancedSettings __this;
		bool bVar1;
		bool bVar2;
		MethodInfo method_00;
		String pSStack_18;

		method_00 = (MethodInfo)&pSStack_18;
		pSStack_18 = null;
		bVar1 = CustomLogicServicesBuiltin.IsAllowedToRunBase();
		if (bVar1) {
			__this = SettingsManager.AdvancedSettings;
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar2 = __this.TryGetServiceUrl(service, ref pSStack_18);
		}
		return bVar2;
	}

	[Token(Token = "0x600364E")]
	[Address(RVA = "0x59F77D0", Offset = "0x59F67D0", VA = "0x59F77D0")]
	public static string GetSecret(string key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$GetSecret): 10 lines keep C-only constructs
		AdvancedSettings __this;
		bool bVar1;
		String pSVar2;
		String str2;
		Il2CppClass pIVar3;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		SettingsManager* method_00;
		String pSStack_18;

		if (g_data_07546efb == false) {
			method_00 = &typeof(SettingsManager);
			g_data_07546efb = true;
		}
		pSStack_18 = null;
		bVar1 = CustomLogicServicesBuiltin.IsAllowedToRunBase();
		if (bVar1) {
			__this = SettingsManager.AdvancedSettings;
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this.TryGetSecretValue(key, ref pSStack_18);
			if (bVar1) {
				return pSStack_18;
			}
			pSVar2 = il2cpp_codegen_get_runtime_metadata(&"No secret registered for key '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"'.");
			pSVar2 = String.Concat(pSVar2, key, str2);
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(pIVar3);
		}
		else {
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(pIVar3);
			pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
		}
		__this_00 = new Exception(pSVar2);
		lastManagedFrame =(MethodInfo)il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetSecret);
		throw (object)__this_00;
	}

	[Token(Token = "0x600364F")]
	[Address(RVA = "0x59F78E0", Offset = "0x59F68E0", VA = "0x59F78E0")]
	private static string GetEndpoint(string baseUrl, string route)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$GetEndpoint): 7 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		int iVar3;
		Uri __this;
		Uri __this_00;
		String pSVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;

		if (baseUrl == null) {
	label_05af7ad1: ;
			throw new NullReferenceException();
		}
		bVar1 = baseUrl.EndsWith("/");
		if (!bVar1) {
			baseUrl = String.Concat(baseUrl, "/");
		}
		__this = new Uri(baseUrl);
		bVar1 = String.IsNullOrWhiteSpace(route);
		if (bVar1) {
			__this_00 = __this;
			if (__this != null) {
	label_05af7aaf: ;
				pSVar5 = __this_00.ToString();
				return pSVar5;
			}
			goto label_05af7ad1;
		}
		if (route == null) goto label_05af7ad1;
		bVar1 = route.Contains("..");
		if ((!bVar1) && (bVar1 = route.Contains("\\"), !bVar1)) {
			bVar1 = Uri.IsWellFormedUriString(route, 1);
			if (!bVar1) {
				__this_00 = new Uri(__this, route);
				if (((__this_00 == null) ||(pSVar5 = __this_00.Host, __this == null)) ||(pSVar4 = __this.Host, pSVar5 == null)) goto label_05af7ad1;
				bVar1 = String.Equals(pSVar5, pSVar4, 5);
				if (bVar1) {
					pSVar5 = __this_00.Scheme;
					pSVar4 = __this.Scheme;
					bVar1 = (pSVar5 != pSVar4);
					if (!bVar1) {
						iVar2 = __this_00.Port;
						iVar3 = __this.Port;
						if (iVar2 == iVar3) goto label_05af7aaf;
					}
				}
				pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
				__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
				pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Route escapes the base service URL.");
				__this_01 = new InvalidOperationException(pSVar5);
				goto label_05af7b38;
			}
		}
		pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
		__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
		pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Invalid route: must be a relative path without '..' or backslashes.");
		__this_01 = new ArgumentException(pSVar5);
	label_05af7b38: ;
		lastManagedFrame =(MethodInfo)il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetEndpoint);
		throw (object)__this_01;
	}

	[Token(Token = "0x6003650")]
	[Address(RVA = "0x59F7B50", Offset = "0x59F6B50", VA = "0x59F7B50")]
	public static void Get(string service, string route, UserMethod callback)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$Get): clean
		CustomLogicManager __this;
		String pSVar1;
		CustomLogicServicesBuiltin.d__13<GetRequest> __this_00;

		pSVar1 = CustomLogicServicesBuiltin.CheckMe(service);
		pSVar1 = CustomLogicServicesBuiltin.GetEndpoint(pSVar1, route);
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			__this = CustomLogicManager._instance;
		}
		else {
			__this = CustomLogicManager._instance;
		}
		__this_00 = new CustomLogicServicesBuiltin.d__13<GetRequest>();
		__this_00.__1__state = 0;
		__this_00.uri = pSVar1;
		__this_00.callback = callback;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6003651")]
	[Address(RVA = "0x59F7CE0", Offset = "0x59F6CE0", VA = "0x59F7CE0")]
	public static void Post(string service, string route, string data, [Optional] UserMethod callback, string format = "application/json")
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$Post): clean
		CustomLogicManager __this;
		String pSVar1;
		String format_00;
		IEnumerator routine;

		pSVar1 = CustomLogicServicesBuiltin.CheckMe(service);
		pSVar1 = CustomLogicServicesBuiltin.GetEndpoint(pSVar1, route);
		__this = CustomLogicManager._instance;
		format_00 = CustomLogicServicesBuiltin.GetContentType(format);
		routine = CustomLogicServicesBuiltin.PostRequest(pSVar1, data, callback, format_00);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.StartCoroutine(routine);
		return;
	}

	[Token(Token = "0x6003652")]
	[Address(RVA = "0x59F7D90", Offset = "0x59F6D90", VA = "0x59F7D90")]
	private static string GetContentType(string format)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$GetContentType): 5 lines keep C-only constructs
		bool bVar1;
		ushort c;
		Il2CppClass klass;
		ArgumentException __this;
		String message;
		MethodInfo lastManagedFrame;
		int index;

		bVar1 = String.IsNullOrWhiteSpace(format);
		if (bVar1) {
			format = "application/json";
		}
		else {
			if (format == null) {
				throw new NullReferenceException();
			}
			if (0 < format._stringLength) {
				index = 0;
				do {
					c = format.get_Chars(index);
					bVar1 = Char.IsControl(c);
					if (bVar1) {
						klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
						__this = (ArgumentException)il2cpp_codegen_object_new(klass);
						message = il2cpp_codegen_get_runtime_metadata(&"Invalid content type: must not contain control characters.");
						__this = new ArgumentException(message);
						lastManagedFrame =(MethodInfo)il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicServicesBuiltin_GetContentType);
						throw (object)__this;
					}
					index = index + 1;
				} while (index < format._stringLength);
			}
		}
		return format;
	}

	[Token(Token = "0x6003653")]
	[Address(RVA = "0x59F7F40", Offset = "0x59F6F40", VA = "0x59F7F40")]
	public static void Put(string service, string route, string data, [Optional] UserMethod callback)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$Put): clean
		CustomLogicManager __this;
		String pSVar1;
		CustomLogicServicesBuiltin.d__15<PutRequest> __this_00;

		pSVar1 = CustomLogicServicesBuiltin.CheckMe(service);
		pSVar1 = CustomLogicServicesBuiltin.GetEndpoint(pSVar1, route);
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			__this = CustomLogicManager._instance;
		}
		else {
			__this = CustomLogicManager._instance;
		}
		__this_00 = new CustomLogicServicesBuiltin.d__15<PutRequest>();
		__this_00.__1__state = 0;
		__this_00.uri = pSVar1;
		__this_00.data = data;
		__this_00.callback = callback;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6003654")]
	[Address(RVA = "0x59F80F0", Offset = "0x59F70F0", VA = "0x59F80F0")]
	public static void Delete(string service, string route, [Optional] UserMethod callback)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$Delete): clean
		CustomLogicManager __this;
		String pSVar1;
		CustomLogicServicesBuiltin.d__16<DeleteRequest> __this_00;

		pSVar1 = CustomLogicServicesBuiltin.CheckMe(service);
		pSVar1 = CustomLogicServicesBuiltin.GetEndpoint(pSVar1, route);
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			__this = CustomLogicManager._instance;
		}
		else {
			__this = CustomLogicManager._instance;
		}
		__this_00 = new CustomLogicServicesBuiltin.d__16<DeleteRequest>();
		__this_00.__1__state = 0;
		__this_00.uri = pSVar1;
		__this_00.callback = callback;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6003655")]
	[Address(RVA = "0x59F7C60", Offset = "0x59F6C60", VA = "0x59F7C60")]
	[IteratorStateMachine(typeof(_003CGetRequest_003Ed__13))]
	private static IEnumerator GetRequest(string uri, UserMethod callback)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$GetRequest): clean
		CustomLogicServicesBuiltin.d__13<GetRequest> __this;

		__this = new CustomLogicServicesBuiltin.d__13<GetRequest>();
		__this.__1__state = 0;
		__this.uri = uri;
		__this.callback = callback;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6003656")]
	[Address(RVA = "0x59F7E90", Offset = "0x59F6E90", VA = "0x59F7E90")]
	[IteratorStateMachine(typeof(_003CPostRequest_003Ed__14))]
	private static IEnumerator PostRequest(string uri, string data, UserMethod callback, string format)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$PostRequest): clean
		CustomLogicServicesBuiltin.d__14<PostRequest> __this;

		__this = new CustomLogicServicesBuiltin.d__14<PostRequest>();
		__this.__1__state = 0;
		__this.uri = uri;
		__this.data = data;
		__this.callback = callback;
		__this.format = format;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6003657")]
	[Address(RVA = "0x59F8060", Offset = "0x59F7060", VA = "0x59F8060")]
	[IteratorStateMachine(typeof(_003CPutRequest_003Ed__15))]
	private static IEnumerator PutRequest(string uri, string data, UserMethod callback)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$PutRequest): clean
		CustomLogicServicesBuiltin.d__15<PutRequest> __this;

		__this = new CustomLogicServicesBuiltin.d__15<PutRequest>();
		__this.__1__state = 0;
		__this.uri = uri;
		__this.data = data;
		__this.callback = callback;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6003658")]
	[Address(RVA = "0x59F8200", Offset = "0x59F7200", VA = "0x59F8200")]
	[IteratorStateMachine(typeof(_003CDeleteRequest_003Ed__16))]
	private static IEnumerator DeleteRequest(string uri, UserMethod callback)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$DeleteRequest): clean
		CustomLogicServicesBuiltin.d__16<DeleteRequest> __this;

		__this = new CustomLogicServicesBuiltin.d__16<DeleteRequest>();
		__this.__1__state = 0;
		__this.uri = uri;
		__this.callback = callback;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6003659")]
	[Address(RVA = "0x59F8300", Offset = "0x59F7300", VA = "0x59F8300")]
	private static string GetWebRequestFailureJSON(UnityWebRequest webRequest)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c (CustomLogic.CustomLogicServicesBuiltin$$GetWebRequestFailureJSON): 1 lines keep C-only constructs
		String pSVar1;
		JSONObject __this;
		String pSVar2;
		JSONString pSVar3;
		Enum local_40;

		__this = new JSONObject();
		if (webRequest != null) {
			local_40.klass = (Enum)typeof(UnityWebRequest.Result);
			local_40.monitor = (IntPtr)0xffffffffffffffff;
			pSVar2 = local_40.ToString();
			pSVar3 = new JSONString(pSVar2);
			if (__this != null) {
				__this.Add("status", (JSONNode)pSVar3);
				pSVar2 = webRequest.error;
				pSVar1 = "error";
				if (pSVar2 == null) {
					pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				pSVar3 = new JSONString(pSVar2);
				__this.Add(pSVar1, (JSONNode)pSVar3);
				pSVar2 = __this.ToString();
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicServicesBuiltin.c.

	// CustomLogic.CustomLogicServicesBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"CheckPermissions");
		__this.Add((Il2CppObject *)"GetSecret");
		__this.Add((Il2CppObject *)"Get");
		__this.Add((Il2CppObject *)"Post");
		__this.Add((Il2CppObject *)"Put");
		__this.Add((Il2CppObject *)"Delete");
		CustomLogicServicesBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicServicesBuiltin.Bindings.c();
		CustomLogicServicesBuiltin.Bindings.c.__9 =(CustomLogicServicesBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__CheckPermissions>b__2_0: 1 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__CheckPermissions_b__2_0(CustomLogicServicesBuiltin __c, Object[] __a)
	{
		AdvancedSettings __this_00;
		bool bVar1;
		bool bVar2;
		String key;
		object pIVar3;
		MethodInfo method_00;
		byte uStack_19;
		String pSStack_18;

		if (__a == null) {
	label_05af92f1: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar3 = __a[0];
		key = CustomLogicEvaluator.ConvertTo<string>(pIVar3);
		pSStack_18 = null;
		bVar2 = false;
		method_00 = (MethodInfo)&pSStack_18;
		bVar1 = CustomLogicServicesBuiltin.IsAllowedToRunBase();
		if (bVar1) {
			__this_00 = SettingsManager.AdvancedSettings;
			if (__this_00 == null) goto label_05af92f1;
			bVar2 = __this_00.TryGetServiceUrl(key, ref pSStack_18);
		}
		uStack_19 = bVar2;
		pIVar3 = (object)uStack_19;
		return pIVar3;
	}

	// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetSecret>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__GetSecret_b__3_0(CustomLogicServicesBuiltin __c, Object[] __a)
	{
		object obj;
		String pSVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
		pSVar1 = CustomLogicServicesBuiltin.GetSecret(pSVar1);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__Get_b__4_0(CustomLogicServicesBuiltin __c, Object[] __a)
	{
		object obj;
		String service;
		String route;
		UserMethod callback;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			service = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				route = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					callback = CustomLogicEvaluator.ConvertTo<UserMethod>(__a[2]);
					CustomLogicServicesBuiltin.Get(service, route, callback);
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Post>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__Post_b__5_0(CustomLogicServicesBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String service;
		String route;
		String data;
		UserMethod callback;
		String format;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			service = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				route = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					data = CustomLogicEvaluator.ConvertTo<string>(__a[2]);
					format = "application/json";
					if ((int)__a.Length < 4) {
						callback = null;
					}
					else {
						pIVar1 = __a[3];
						callback = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar1);
						if (4 < (int)__a.Length) {
							pIVar1 = __a[4];
							format = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
						}
					}
					CustomLogicServicesBuiltin.Post(service, route, data, callback, format);
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Put>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__Put_b__6_0(CustomLogicServicesBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String service;
		String route;
		String data;
		UserMethod callback;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			service = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				route = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					data = CustomLogicEvaluator.ConvertTo<string>(__a[2]);
					if ((int)__a.Length < 4) {
						callback = null;
					}
					else {
						pIVar1 = __a[3];
						callback = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar1);
					}
					CustomLogicServicesBuiltin.Put(service, route, data, callback);
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Delete>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__Delete_b__7_0(CustomLogicServicesBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String service;
		String route;
		UserMethod callback;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			service = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				route = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if ((int)__a.Length < 3) {
					callback = null;
				}
				else {
					pIVar1 = __a[2];
					callback = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar1);
				}
				CustomLogicServicesBuiltin.Delete(service, route, callback);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
