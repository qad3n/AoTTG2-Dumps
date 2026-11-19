// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNetworkViewBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkViewBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using Photon.Pun;

namespace CustomLogic;

[Token(Token = "0x20004C6")]
[CompilerGenerated]
internal class CustomLogicNetworkViewBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20004C7")]
	public static class Factory
	{
		[Token(Token = "0x6002418")]
		[Address(RVA = "0x59365B0", Offset = "0x59355B0", VA = "0x59365B0")]
		public static CustomLogicNetworkViewBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object obj;
			MapObject obj_00;
			CustomLogicNetworkViewBuiltin __this;
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
			if ((int)args.Length != 1) {
				pSVar1 = local_14.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNetworkViewBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			obj = args[0];
			obj_00 = CustomLogicEvaluator.ConvertTo<MapObject>(obj);
			__this = new CustomLogicNetworkViewBuiltin(obj_00);
			return __this;
		}
	}

	[Token(Token = "0x20004C8")]
	public static class Bindings
	{
		[Token(Token = "0x4001765")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002419")]
		[Address(RVA = "0x59366E0", Offset = "0x59356E0", VA = "0x59366E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicNetworkViewBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicNetworkViewBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x396d88ce) {
				if (uVar2 < 0x121de31e) {
					if (uVar2 == 0x895e8a6) {
						bVar1 = (name == "Transfer");
						if (bVar1) {
							if ((typeof(CustomLogicNetworkViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__Transfer();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__Transfer();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x121de31d) {
						bVar1 = (name == "SendMessageAll");
						if (bVar1) {
							if ((typeof(CustomLogicNetworkViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__SendMessageAll();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__SendMessageAll();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x1de8ebcf) {
					bVar1 = (name == "SendStream");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__SendStream();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__SendStream();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x396d88cd) {
					bVar1 = (name == "SendMessageOthers");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__SendMessageOthers();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__SendMessageOthers();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x8b3137a4) {
				if (uVar2 == 0x8b3137a3) {
					bVar1 = (name == "SyncTransforms");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicNetworkViewBuiltin.Bindings.__CreatePropertyBinding__SyncTransforms();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicNetworkViewBuiltin.Bindings.__CreatePropertyBinding__SyncTransforms();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x67ac82ce) {
					bVar1 = (name == "SendMessage");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__SendMessage();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__SendMessage();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0x9b22be74) {
				bVar1 = (name == "Owner");
				if (bVar1) {
					if ((typeof(CustomLogicNetworkViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicNetworkViewBuiltin.Bindings.__CreatePropertyBinding__Owner();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicNetworkViewBuiltin.Bindings.__CreatePropertyBinding__Owner();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf3e2723a) {
				bVar1 = (name == "ReceiveStream");
				if (bVar1) {
					if ((typeof(CustomLogicNetworkViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__ReceiveStream();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicNetworkViewBuiltin.Bindings.__CreateMethodBinding__ReceiveStream();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNetworkViewBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600241A")]
		[Address(RVA = "0x5936AD0", Offset = "0x5935AD0", VA = "0x5936AD0")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__SyncTransforms()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__SyncTransforms): 4 lines keep C-only constructs
			Func<CustomLogicNetworkViewBuiltin, object> __this;
			Action<CustomLogicNetworkViewBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicNetworkViewBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicNetworkViewBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g);
			__this_00 = new Action<CustomLogicNetworkViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g_71c0ae0);
			__this_01 = new CLPropertyBinding<CustomLogicNetworkViewBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600241B")]
		[Address(RVA = "0x5936BB0", Offset = "0x5935BB0", VA = "0x5936BB0")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__Owner()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__Owner): 3 lines keep C-only constructs
			Func<CustomLogicNetworkViewBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNetworkViewBuiltin> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicNetworkViewBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicNetworkViewBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600241C")]
		[Address(RVA = "0x5936C50", Offset = "0x5935C50", VA = "0x5936C50")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__Transfer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__Transfer): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546111 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicNetworkViewBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546111 = true;
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicNetworkViewBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__Transfer_b__4_0);
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600241D")]
		[Address(RVA = "0x5936D90", Offset = "0x5935D90", VA = "0x5936D90")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessage): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546112 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicNetworkViewBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546112 = true;
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicNetworkViewBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__5_0);
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600241E")]
		[Address(RVA = "0x5936ED0", Offset = "0x5935ED0", VA = "0x5936ED0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546113 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicNetworkViewBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546113 = true;
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicNetworkViewBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__6);
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600241F")]
		[Address(RVA = "0x5937010", Offset = "0x5936010", VA = "0x5937010")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546114 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicNetworkViewBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546114 = true;
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicNetworkViewBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b);
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002420")]
		[Address(RVA = "0x5937150", Offset = "0x5936150", VA = "0x5937150")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendStream()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendStream): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546115 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicNetworkViewBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546115 = true;
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicNetworkViewBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendStream_b__8_0);
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002421")]
		[Address(RVA = "0x5937290", Offset = "0x5936290", VA = "0x5937290")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__ReceiveStream()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__ReceiveStream): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546116 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicNetworkViewBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546116 = true;
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicNetworkViewBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__ReceiveStream_b__9_0);
				pCVar2 = typeof(CustomLogicNetworkViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400175E")]
	[FieldOffset(Offset = "0x30")]
	public readonly MapObject MapObject;

	[Token(Token = "0x400175F")]
	[FieldOffset(Offset = "0x38")]
	public CustomLogicPhotonSync Sync;

	[Token(Token = "0x4001760")]
	[FieldOffset(Offset = "0x40")]
	public int OwnerId;

	[Token(Token = "0x4001761")]
	[FieldOffset(Offset = "0x48")]
	private List<object> _streamObjects;

	[Token(Token = "0x4001762")]
	[FieldOffset(Offset = "0x50")]
	private readonly List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x4001763")]
	[FieldOffset(Offset = "0x58")]
	private readonly List<CustomLogicClassInstance> _addonInstances;

	[Token(Token = "0x4001764")]
	[FieldOffset(Offset = "0x60")]
	private bool _isTransformSynced;

	[Token(Token = "0x1700045A")]
	public bool SyncTransforms
	{
		[Token(Token = "0x6002400")]
		[Address(RVA = "0x5934780", Offset = "0x5933780", VA = "0x5934780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$get_SyncTransforms): clean
			return this._isTransformSynced;
		}
		[Token(Token = "0x6002401")]
		[Address(RVA = "0x5934790", Offset = "0x5933790", VA = "0x5934790")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$set_SyncTransforms): clean
			CustomLogicPhotonSync pCVar1;
			bool bVar2;

			this._isTransformSynced = value;
			pCVar1 = this.Sync;
			bVar2 = ((Object)pCVar1 != null);
			if (bVar2) {
				pCVar1 = this.Sync;
				if (pCVar1 == null) {
					throw new NullReferenceException();
				}
				pCVar1.SyncTransforms = value;
				return;
			}
			return;
		}
	}

	[Token(Token = "0x1700045B")]
	public CustomLogicPlayerBuiltin Owner
	{
		[Token(Token = "0x6002402")]
		[Address(RVA = "0x5934810", Offset = "0x5933810", VA = "0x5934810")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$get_Owner): clean
			CustomLogicPhotonSync pCVar1;
			Player pPVar2;
			bool bVar3;
			PhotonView pPVar4;
			CustomLogicPlayerBuiltin __this_00;

			pCVar1 = this.Sync;
			bVar3 = ((Object)pCVar1 == null);
			if (bVar3) {
				return null;
			}
			pCVar1 = this.Sync;
			if ((pCVar1 == null) ||(pPVar4 = pCVar1.photonView, pPVar4 == null)) {
				throw new NullReferenceException();
			}
			pPVar2 = pPVar4._Owner_k__BackingField;
			__this_00 = new CustomLogicPlayerBuiltin();
			__this_00.Player = pPVar2;
			return __this_00;
		}
	}

	[Token(Token = "0x1700045C")]
	public override string ClassName
	{
		[Token(Token = "0x6002414")]
		[Address(RVA = "0x5936550", Offset = "0x5935550", VA = "0x5936550", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$get_ClassName): clean
			return "NetworkView";
		}
	}

	[Token(Token = "0x1700045D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002415")]
		[Address(RVA = "0x5936580", Offset = "0x5935580", VA = "0x5936580", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700045E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002416")]
		[Address(RVA = "0x5936590", Offset = "0x5935590", VA = "0x5936590", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x1700045F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002417")]
		[Address(RVA = "0x59365A0", Offset = "0x59355A0", VA = "0x59365A0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x5934670", Offset = "0x5933670", VA = "0x5934670")]
	public CustomLogicNetworkViewBuiltin(MapObject obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$.ctor): 1 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		List<CustomLogicClassInstance> __this_01;

		this.OwnerId = -1;
		__this_00 = il2cpp_codegen_object_new(typeof(List<CustomLogicComponentInstance>)) ;
		__this_00 = new List<object>();
		this._classInstances = __this_00;
		__this_01 = new List<CustomLogicClassInstance>();
		this._addonInstances = __this_01;
		this._isTransformSynced = true;
		base();
		this.MapObject = obj;
		return;
	}

	[Token(Token = "0x6002403")]
	[Address(RVA = "0x5934970", Offset = "0x5933970", VA = "0x5934970")]
	public void OnSecond()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$OnSecond): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075460ff == false) {
			Il2CppMethodInitialized_075460ff = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			PhotonNetwork.IsMasterClient;
			return;
		}
		PhotonNetwork.IsMasterClient;
		return;
	}

	[Token(Token = "0x6002404")]
	[Address(RVA = "0x59349D0", Offset = "0x59339D0", VA = "0x59349D0")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterComponentInstance): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CustomLogicComponentInstance> __this_00;
		CustomLogicComponentInstance[] pCVar3;

		__this_00 = this._classInstances;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pCVar3 = __this_00._items;
			if (pCVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pCVar3.Length) {
					__this_00._size = uVar2 + 1;
					pCVar3[(int)uVar2] = instance;
					return;
				}
				__this_00.AddWithResize((object)instance);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002405")]
	[Address(RVA = "0x5934A70", Offset = "0x5933A70", VA = "0x5934A70")]
	public void RegisterAddonInstance(CustomLogicClassInstance instance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterAddonInstance): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CustomLogicClassInstance> pSVar3;
		CustomLogicClassInstance[] pCVar4;
		bool bVar6;

		pSVar3 = this._addonInstances;
		if (pSVar3 != null) {
			bVar6 = pSVar3.Contains((object)instance);
			if (bVar6) {
				return;
			}
			pSVar3 = this._addonInstances;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				pCVar4 = pSVar3._items;
				if (pCVar4 != null) {
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pCVar4.Length) {
						pSVar3._size = uVar2 + 1;
						pCVar4[(int)uVar2] = instance;
						return;
					}
					pSVar3.AddWithResize((object)instance);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002406")]
	[Address(RVA = "0x5934B40", Offset = "0x5933B40", VA = "0x5934B40")]
	public void OnNetworkTransfer(CustomLogicPlayerBuiltin oldOwner, CustomLogicPlayerBuiltin newOwner)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkTransfer): 18 lines keep C-only constructs
		MapObject pMVar1;
		Object x;
		List<CustomLogicComponentInstance> __this_00;
		System_Collections_Generic_List_Enumerator_object__o pSVar2;
		bool bVar3;
		Object[] pSVar4;
		object pIVar5;
		object pIVar6;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_48 = new byte[16];
		CustomLogicComponentInstance pCStack_38;

		SStack_68._list = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._current = null;
		pMVar1 = this.MapObject;
		if (pMVar1 == null) {
	label_05a34fbe: ;
			throw new NullReferenceException();
		}
		x = (Object)pMVar1.GameObject;
		bVar3 = (x != null);
		if (bVar3) {
			__this_00 = this._classInstances;
			if (__this_00 == null) goto label_05a34fbe;
			auStack_48.GetEnumerator((List<object>)__this_00);
			SStack_68._current = (object)pCStack_38;
			SStack_68._list = (List<T>)auStack_48._0_8_;
			SStack_68._index = auStack_48._8_4_;
			SStack_68._version = auStack_48._12_4_;
			auStack_48._0_8_ = null;
			if (oldOwner == null) {
				auStack_48._8_8_ = &SStack_68;
				pSVar2 = &SStack_68;
				if (newOwner == null) {
					while (true) {
						auStack_48._8_8_ = pSVar2;
						bVar3 = SStack_68.MoveNext();
						pIVar6 = SStack_68._current;
						if (!(bVar3)) break;
						pSVar4 = (Object[])new object[2];
						if (pSVar4 == null) goto label_05a34f96;
						if ((int)pSVar4.Length == 0) goto label_05a34f9b;
						pSVar4[0] = null;
						if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05a34f8c;
						pSVar4[1] = null;
						if ((CustomLogicComponentInstance)pIVar6 ==null) goto label_05a34f91;
						pIVar6.EvaluateMethodForCallbacks("OnNetworkTransfer", pSVar4);
						pSVar2 = (System_Collections_Generic_List_Enumerator_object__o)auStack_48._8_8_;
					}
				}
				else {
					while (true) {
						bVar3 = SStack_68.MoveNext();
						pIVar6 = SStack_68._current;
						if (!(bVar3)) break;
						pSVar4 = (Object[])new object[2];
						if (pSVar4 == null) goto label_05a34f96;
						if ((int)pSVar4.Length == 0) goto label_05a34f9b;
						pSVar4[0] = null;
						pIVar5 = il2cpp_vm_Object_IsInst((object)newOwner, (((pSVar4.obj).klass)._1).element_class) ;
						if (pIVar5 == null) goto label_05a34fa0;
						if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05a34f8c;
						pSVar4[1] = (object)newOwner;
						if ((CustomLogicComponentInstance)pIVar6 ==null) goto label_05a34f91;
						pIVar6.EvaluateMethodForCallbacks("OnNetworkTransfer", pSVar4);
					}
				}
			}
			else {
				auStack_48._8_8_ = &SStack_68;
				pSVar2 = &SStack_68;
				if (newOwner == null) {
					while (true) {
						auStack_48._8_8_ = pSVar2;
						bVar3 = SStack_68.MoveNext();
						pIVar6 = SStack_68._current;
						if (!(bVar3)) break;
						pSVar4 = (Object[])new object[2];
						if (pSVar4 == null) goto label_05a34f96;
						pIVar5 = il2cpp_vm_Object_IsInst((object)oldOwner, (((pSVar4.obj).klass)._1).element_class) ;
						if (pIVar5 == null) goto label_05a34faf;
						if ((int)pSVar4.Length == 0) goto label_05a34f9b;
						pSVar4[0] = (object)oldOwner;
						if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05a34f8c;
						pSVar4[1] = null;
						if ((CustomLogicComponentInstance)pIVar6 ==null) goto label_05a34f91;
						pIVar6.EvaluateMethodForCallbacks("OnNetworkTransfer", pSVar4);
						pSVar2 = (System_Collections_Generic_List_Enumerator_object__o)auStack_48._8_8_;
					}
				}
				else {
					while (true) {
						bVar3 = SStack_68.MoveNext();
						pIVar6 = SStack_68._current;
						if (!(bVar3)) break;
						pSVar4 = (Object[])new object[2];
						if (pSVar4 == null) {
	label_05a34f96: ;
							throw new NullReferenceException();
						}
						pIVar5 = il2cpp_vm_Object_IsInst((object)oldOwner, (((pSVar4.obj).klass)._1).element_class) ;
						if (pIVar5 == null) {
	label_05a34faf: ;
							pIVar6 = new ArrayTypeMismatchException();
							throw pIVar6;
						}
						if ((int)pSVar4.Length == 0) {
	label_05a34f9b: ;
							throw new IndexOutOfRangeException();
						}
						pSVar4[0] = (object)oldOwner;
						pIVar5 = il2cpp_vm_Object_IsInst((object)newOwner, (((pSVar4.obj).klass)._1).element_class) ;
						if (pIVar5 == null) {
	label_05a34fa0: ;
							pIVar6 = new ArrayTypeMismatchException();
							throw pIVar6;
						}
						if ((pSVar4.Length & 0xfffffffe) == 0) {
	label_05a34f8c: ;
							throw new IndexOutOfRangeException();
						}
						pSVar4[1] = (object)newOwner;
						if ((CustomLogicComponentInstance)pIVar6 ==null) {
	label_05a34f91: ;
							throw new NullReferenceException();
						}
						pIVar6.EvaluateMethodForCallbacks("OnNetworkTransfer", pSVar4);
					}
				}
			}
			SStack_68.Dispose();
		}
		return;
	}

	[Token(Token = "0x6002407")]
	[Address(RVA = "0x5935050", Offset = "0x5934050", VA = "0x5935050")]
	public void SetSyncDynamic(CustomLogicPhotonSync sync)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$SetSyncDynamic): clean
		Player pPVar1;
		CustomLogicPhotonSync __this_00;
		CustomLogicEvaluator __this_01;
		PhotonView pPVar2;
		CustomLogicMapObjectBuiltin pCVar3;

		this.Sync = sync;
		if (sync != null) {
			pPVar2 = sync.photonView;
			if ((pPVar2 != null) &&(pPVar1 = pPVar2._Owner_k__BackingField, pPVar1 != null)) {
				this.OwnerId = pPVar1.actorNumber;
				__this_00 = this.Sync;
				if (__this_00 != null) {
					__this_00.SyncTransforms = this._isTransformSynced;
					__this_01 = CustomLogicManager.Evaluator;
					if (__this_01 != null) {
						pCVar3 = __this_01.GetOrCreateMapObjectBuiltin(this.MapObject);
						if (pCVar3 == null) {
							return;
						}
						pCVar3._NetworkView_k__BackingField = this;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002408")]
	[Address(RVA = "0x5935130", Offset = "0x5934130", VA = "0x5935130")]
	public void SetSync(CustomLogicPhotonSync sync)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$SetSync): 11 lines keep C-only constructs
		CustomLogicPhotonSync* targetAddress;
		int id;
		CustomLogicPhotonSync pCVar1;
		MapObject pMVar2;
		Object x;
		List<CustomLogicComponentInstance> __this_00;
		CustomLogicEvaluator __this_01;
		CustomLogicComponentInstance pCVar3;
		byte puVar4;
		bool bVar5;
		PhotonView pPVar6;
		Player pPVar7;
		CustomLogicPlayerBuiltin __this_02;
		CustomLogicPlayerBuiltin __this_03;
		Object[] pSVar8;
		object pIVar9;
		CustomLogicMapObjectBuiltin pCVar10;
		byte[] local_68 = new byte[8];
		CustomLogicComponentInstance local_58;
		byte[] local_50 = new byte[16];
		CustomLogicComponentInstance local_40;
		CustomLogicNetworkViewBuiltin local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		id = this.OwnerId;
		targetAddress = &this.Sync;
		this.Sync = sync;
		if (((sync != null) &&(pPVar6 = sync.photonView, pPVar6 != null)) &&(pPVar7 = pPVar6._Owner_k__BackingField, pPVar7 != null)) {
			this.OwnerId = pPVar7.actorNumber;
			pCVar1 = this.Sync;
			if (pCVar1 != null) {
				pCVar1.SyncTransforms = this._isTransformSynced;
				if (-1 < id) {
					__this_02 = null;
					pPVar7 = Util.FindPlayerById(id);
					if (pPVar7 != null) {
						__this_02 = new CustomLogicPlayerBuiltin();
						__this_02.Player = pPVar7;
					}
					pCVar1 = *targetAddress;
					if ((pCVar1 == null) ||(pPVar6 = pCVar1.photonView, pPVar6 == null)) goto label_05a35624;
					pPVar7 = pPVar6._Owner_k__BackingField;
					__this_03 = new CustomLogicPlayerBuiltin();
					__this_03.Player = pPVar7;
					pMVar2 = this.MapObject;
					if (pMVar2 == null) goto label_05a35624;
					x = (Object)pMVar2.GameObject;
					bVar5 = (x != null);
					if (bVar5) {
						__this_00 = this._classInstances;
						if (__this_00 == null) goto label_05a35624;
						local_38 = this;
						local_50.GetEnumerator((List<object>)__this_00);
						local_58 = local_40;
						local_68 = (byte[])local_50._0_8_;
						local_50._0_8_ = null;
						local_50._8_8_ = local_68;
						puVar4 = local_68;
						if (__this_02 == null) {
							while (true) {
								local_50._8_8_ = puVar4;
								bVar5 = local_68.MoveNext();
								pCVar3 = local_58;
								if (!(bVar5)) break;
								pSVar8 = (Object[])new object[2];
								if (pSVar8 == null) goto label_05a3561a;
								if ((int)pSVar8.Length == 0) goto label_05a3561f;
								pSVar8[0] = null;
								pIVar9 = il2cpp_vm_Object_IsInst((object)__this_03, (((pSVar8.obj).klass)._1).element_class);
								if (pIVar9 == null) goto label_05a35606;
								if ((pSVar8.Length & 0xfffffffe) == 0) goto label_05a35615;
								pSVar8[1] = (object)__this_03;
								if (pCVar3 == null) goto label_05a35601;
								pCVar3.EvaluateMethodForCallbacks("OnNetworkTransfer", pSVar8);
								puVar4 = (byte)local_50._8_8_;
							}
						}
						else {
							while (true) {
								bVar5 = local_68.MoveNext();
								pCVar3 = local_58;
								if (!(bVar5)) break;
								pSVar8 = (Object[])new object[2];
								if (pSVar8 == null) {
	label_05a3561a: ;
									throw new NullReferenceException();
								}
								pIVar9 = il2cpp_vm_Object_IsInst((object)__this_02, (((pSVar8.obj).klass)._1).element_class);
								if (pIVar9 == null) {
									pIVar9 = new ArrayTypeMismatchException();
									throw pIVar9;
								}
								if ((int)pSVar8.Length == 0) {
	label_05a3561f: ;
									throw new IndexOutOfRangeException();
								}
								pSVar8[0] = (object)__this_02;
								pIVar9 = il2cpp_vm_Object_IsInst((object)__this_03, (((pSVar8.obj).klass)._1).element_class);
								if (pIVar9 == null) {
	label_05a35606: ;
									pIVar9 = new ArrayTypeMismatchException();
									throw pIVar9;
								}
								if ((pSVar8.Length & 0xfffffffe) == 0) {
	label_05a35615: ;
									throw new IndexOutOfRangeException();
								}
								pSVar8[1] = (object)__this_03;
								if (pCVar3 == null) {
	label_05a35601: ;
									throw new NullReferenceException();
								}
								pCVar3.EvaluateMethodForCallbacks("OnNetworkTransfer", pSVar8);
							}
						}
						local_68.Dispose();
						this = local_38;
					}
				}
				__this_01 = CustomLogicManager.Evaluator;
				if (__this_01 != null) {
					pCVar10 = __this_01.GetOrCreateMapObjectBuiltin(this.MapObject);
					if (pCVar10 != null) {
						pCVar10._NetworkView_k__BackingField = this;
					}
					return;
				}
			}
		}
	label_05a35624: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002409")]
	[Address(RVA = "0x59356B0", Offset = "0x59346B0", VA = "0x59356B0")]
	public void SendNetworkStream(PhotonStream stream)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$SendNetworkStream): 4 lines keep C-only constructs
		List<object>* targetAddress;
		List<CustomLogicComponentInstance> __this_00;
		bool bVar1;
		List<object> pSVar2;
		Object[] obj;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar2 = new List<object>();
		targetAddress = &this._streamObjects;
		this._streamObjects = pSVar2;
		__this_00 = this._classInstances;
		if (__this_00 != null) {
			local_58 = __this_00.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar1 = local_58.MoveNext();
				if (!bVar1) break;
				if ((CustomLogicComponentInstance)local_58._current ==null) {
					throw new NullReferenceException();
				}
				local_58._current.EvaluateMethodForCallbacks("SendNetworkStream", null);
			}
			local_58.Dispose();
			pSVar2 = *targetAddress;
			if (pSVar2 != null) {
				obj = pSVar2.ToArray() ;
				if (stream != null) {
					stream.SendNext(ref obj.obj);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600240A")]
	[Address(RVA = "0x59358A0", Offset = "0x59348A0", VA = "0x59358A0")]
	public void OnNetworkStream(object[] objs)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkStream): 2 lines keep C-only constructs
		MapObject pMVar1;
		Object x;
		List<CustomLogicComponentInstance> __this_00;
		bool bVar2;
		List<object> __this_01;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_01 = new List<object>((IEnumerable<T>)objs);
		this._streamObjects = __this_01;
		pMVar1 = this.MapObject;
		if (pMVar1 == null) {
	label_05a35a28: ;
			throw new NullReferenceException();
		}
		x = (Object)pMVar1.GameObject;
		bVar2 = (x == null);
		if (!bVar2) {
			__this_00 = this._classInstances;
			if (__this_00 == null) goto label_05a35a28;
			local_48 = __this_00.GetEnumerator();
			local_20 = (byte)&local_48;
			while(true) {
				bVar2 = local_48.MoveNext();
				if (!bVar2) break;
				if ((CustomLogicComponentInstance)local_48._current ==null) {
					throw new NullReferenceException();
				}
				local_48._current.EvaluateMethodForCallbacks("OnNetworkStream", null);
			}
			local_48.Dispose();
		}
		return;
	}

	[Token(Token = "0x600240B")]
	[Address(RVA = "0x5935A90", Offset = "0x5934A90", VA = "0x5935A90")]
	public void OnNetworkMessage(CustomLogicPlayerBuiltin player, string message, double sentServerTime)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkMessage): 15 lines keep C-only constructs
		CustomLogicEvaluator pCVar1;
		MapObject pMVar2;
		Object x;
		List<CustomLogicComponentInstance> __this_00;
		List<CustomLogicClassInstance> __this_01;
		CustomLogicComponentInstance pCVar3;
		bool bVar4;
		Object[] pSVar5;
		object pIVar6;
		object pIVar7;
		byte[] local_a0 = new byte[16];
		CustomLogicComponentInstance local_90;
		CustomLogicNetworkViewBuiltin local_88;
		CustomLogicPlayerBuiltin local_80;
		double local_78;
		double local_70;
		byte[] local_68 = new byte[8];
		ulong uStack_60;
		CustomLogicComponentInstance local_58;
		byte[] local_48 = new byte[8];
		CustomLogicComponentInstance local_38;

		local_88 = this;
		local_70 = sentServerTime;
		local_48 = (byte[])0x0;
		local_38 = null;
		local_68 = (byte[])0x0;
		uStack_60._0_4_ = 0;
		uStack_60._4_4_ = 0;
		local_58 = null;
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicManager.Evaluator;
		}
		else {
			pCVar1 = CustomLogicManager.Evaluator;
		}
		if (pCVar1 == null) {
			return;
		}
		pMVar2 = local_88.MapObject;
		if (pMVar2 != null) {
			x = (Object)pMVar2.GameObject;
			if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar4 = (x == null);
			if (bVar4) {
				return;
			}
			__this_00 = local_88._classInstances;
			if (__this_00 != null) {
				local_a0.GetEnumerator((List<object>)__this_00);
				local_38 = local_90;
				local_48 = (byte[])local_a0._0_8_;
				local_a0._0_8_ = null;
				local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
				local_80 = player;
				while (true) {
					bVar4 = local_48.MoveNext();
					pCVar3 = local_38;
					if (!(bVar4)) break;
					pSVar5 = (Object[])new object[3];
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					if ((player != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)player, (((pSVar5.obj).klass)._1).element_class) , pIVar6 == null)) {
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
					if ((int)pSVar5.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					pSVar5[0] = (object)player;
					if ((message != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)message, (((pSVar5.obj).klass)._1).element_class), pIVar6 == null)) {
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
					if ((pSVar5.Length & 0xfffffffe) == 0) {
						throw new IndexOutOfRangeException();
					}
					pSVar5[1] = (object)message;
					local_78 = local_70;
					pIVar6 = (object)local_78;
					if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) {
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
					if ((uint)pSVar5.Length < 3) {
						throw new IndexOutOfRangeException();
					}
					pSVar5[2] = pIVar6;
					if (pCVar3 == null) {
						throw new NullReferenceException();
					}
					pCVar3.EvaluateMethodForCallbacks("OnNetworkMessage", pSVar5);
				}
				local_48.Dispose();
				__this_01 = local_88._addonInstances;
				if (__this_01 != null) {
					local_a0.GetEnumerator((List<object>)__this_01);
					local_58 = local_90;
					local_68 = (byte[])local_a0._0_8_;
					uStack_60 = (System_Collections_Generic_List_Enumerator_object__o)local_a0._8_8_;
					local_a0._0_8_ = null;
					local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
					while(true) {
						do {
							do {
								bVar4 = local_68.MoveNext();
								pCVar3 = local_58;
								if (!bVar4) {
									local_68.Dispose();
									return;
								}
								if (local_58 == null) {
									throw new NullReferenceException();
								}
								bVar4 = local_58.get_Enabled();
							} while (!bVar4);
							if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
								pCVar1 = CustomLogicManager.Evaluator;
							}
							else {
								pCVar1 = CustomLogicManager.Evaluator;
							}
						} while ((pCVar1 == null) ||(bVar4 = pCVar1.HasMethod((CustomLogicClassInstance)pCVar3, "OnNetworkMessage"), !bVar4));
						pSVar5 = (Object[])new object[3];
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						if ((local_80 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)local_80, (((pSVar5.obj).klass)._1).element_class), pIVar6 == null)) {
							pIVar6 = new ArrayTypeMismatchException();
							throw pIVar6;
						}
						if ((int)pSVar5.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						pSVar5[0] = (object)local_80;
						if ((message != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)message, (((pSVar5.obj).klass)._1).element_class), pIVar6 == null)) {
							pIVar6 = new ArrayTypeMismatchException();
							throw pIVar6;
						}
						if ((pSVar5.Length & 0xfffffffe) == 0) {
							throw new IndexOutOfRangeException();
						}
						pSVar5[1] = (object)message;
						local_78 = local_70;
						pIVar6 = (object)local_78;
						if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) break;
						if ((uint)pSVar5.Length < 3) {
							throw new IndexOutOfRangeException();
						}
						pSVar5[2] = pIVar6;
						pCVar1.EvaluateMethod((CustomLogicClassInstance)pCVar3, "OnNetworkMessage", pSVar5, 0);
					}
					pIVar6 = new ArrayTypeMismatchException();
					throw pIVar6;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600240C")]
	[Address(RVA = "0x5936160", Offset = "0x5935160", VA = "0x5936160")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$Transfer): clean
		CustomLogicPhotonSync pCVar1;
		PhotonView pPVar2;

		pCVar1 = this.Sync;
		if (pCVar1 != null) {
			pPVar2 = pCVar1.photonView;
			if (pPVar2 != null) {
				if (pPVar2._IsMine_k__BackingField == false) {
					return;
				}
				pCVar1 = this.Sync;
				if (pCVar1 != null) {
					pCVar1.Transfer(player);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600240D")]
	[Address(RVA = "0x59361B0", Offset = "0x59351B0", VA = "0x59361B0")]
	public void SendMessage(CustomLogicPlayerBuiltin target, string msg)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessage): clean
		CustomLogicPhotonSync __this_00;

		if ((target == null) ||(__this_00 = this.Sync, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.SendMessage(target.Player, msg);
		return;
	}

	[Token(Token = "0x600240E")]
	[Address(RVA = "0x59361D0", Offset = "0x59351D0", VA = "0x59361D0")]
	public void SendMessageAll(string msg)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageAll): clean
		CustomLogicPhotonSync __this_00;

		__this_00 = this.Sync;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SendMessageAll(msg);
		return;
	}

	[Token(Token = "0x600240F")]
	[Address(RVA = "0x59361F0", Offset = "0x59351F0", VA = "0x59361F0")]
	public void SendMessageOthers(string msg)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageOthers): clean
		CustomLogicPhotonSync __this_00;

		__this_00 = this.Sync;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SendMessageOthers(msg);
		return;
	}

	[Token(Token = "0x6002410")]
	[Address(RVA = "0x5936210", Offset = "0x5935210", VA = "0x5936210")]
	public void SendStream(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$SendStream): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<object> __this_00;
		Object[] pSVar3;
		object item;

		item = CustomLogicNetworkViewBuiltin.SerializeStreamObj(obj);
		__this_00 = this._streamObjects;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this_00._items;
			if (pSVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this_00._size = uVar2 + 1;
					pSVar3[(int)uVar2] = item;
					return;
				}
				__this_00.AddWithResize(item);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002411")]
	[Address(RVA = "0x59363B0", Offset = "0x59353B0", VA = "0x59363B0")]
	public object ReceiveStream()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$ReceiveStream): clean
		List<object> pSVar1;
		object pIVar2;

		pSVar1 = this._streamObjects;
		if (pSVar1 != null) {
			pIVar2 = pSVar1.get_Item(0);
			pIVar2 = CustomLogicNetworkViewBuiltin.DeserializeStreamObj(pIVar2);
			pSVar1 = this._streamObjects;
			if (pSVar1 != null) {
				pSVar1.RemoveAt(0);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002412")]
	[Address(RVA = "0x59362B0", Offset = "0x59352B0", VA = "0x59362B0")]
	private static object SerializeStreamObj(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$SerializeStreamObj): 5 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Il2CppClass pIVar3;
		Quaternion* ppUVar4;
		object pIVar5;
		IntPtr pvStack_10;

		if (obj == null) {
			return null;
		}
		pIVar3 = obj.klass;
		bVar1 = (pIVar3._2).typeHierarchyDepth;
		bVar2 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicVector3Builtin))) {
			bVar2 = (typeof(CustomLogicQuaternionBuiltin)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicQuaternionBuiltin))) {
				return obj;
			}
			pvStack_10 = obj[3].monitor;
			ppUVar4 = &typeof(Quaternion);
		}
		else {
			pvStack_10 = (IntPtr)CONCAT44(pvStack_10._4_4_, *(uint)&obj[3].monitor);
			ppUVar4 = (Quaternion*)&typeof(Vector3);
		}
		return pIVar5;
	}

	[Token(Token = "0x6002413")]
	[Address(RVA = "0x5936430", Offset = "0x5935430", VA = "0x5936430")]
	private static object DeserializeStreamObj(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c (CustomLogic.CustomLogicNetworkViewBuiltin$$DeserializeStreamObj): 7 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		CustomLogicQuaternionBuiltin __this;
		Quaternion pUVar3;
		Vector3 pUVar4;

		if (obj == null) {
			__this = null;
		}
		else {
			pIVar2 = obj.klass;
			if (pIVar2 == typeof(Vector3)) {
				if ((obj.klass._1).element_class != (typeof(Vector3)._1).element_class) goto label_05a36544;
				pUVar4 = il2cpp_vm_Object_Unbox(obj);
				__this = new CustomLogicQuaternionBuiltin((UnityEngine_Vector3_o)*pUVar4);
			}
			else {
				bVar1 = (typeof(CustomLogicQuaternionBuiltin)._2).typeHierarchyDepth;
				if ((pIVar2._2).typeHierarchyDepth < bVar1) {
					return obj;
				}
				if ((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicQuaternionBuiltin)) {
					return obj;
				}
				if ((obj.klass._1).element_class != (typeof(Quaternion)._1).element_class) {
	label_05a36544: ;
					throw new InvalidCastException();
				}
				pUVar3 = il2cpp_vm_Object_Unbox(obj);
				__this = new CustomLogicQuaternionBuiltin((UnityEngine_Quaternion_o)*pUVar3);
			}
		}
		return (object)__this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c.

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"SyncTransforms");
		__this.Add((Il2CppObject *)"Owner");
		__this.Add((Il2CppObject *)"Transfer");
		__this.Add((Il2CppObject *)"SendMessage");
		__this.Add((Il2CppObject *)"SendMessageAll");
		__this.Add((Il2CppObject *)"SendMessageOthers");
		__this.Add((Il2CppObject *)"SendStream");
		__this.Add((Il2CppObject *)"ReceiveStream");
		CustomLogicNetworkViewBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__SyncTransforms_g____getter_2_0(CustomLogicNetworkViewBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__SyncTransforms_g____setter_2_1(CustomLogicNetworkViewBuiltin __i, object __v)
	{
		CustomLogicPhotonSync pCVar1;
		bool value;
		bool bVar2;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			__i._isTransformSynced = value;
			pCVar1 = __i.Sync;
			bVar2 = ((Object)pCVar1 != null);
			if (!bVar2) {
				return;
			}
			pCVar1 = __i.Sync;
			if (pCVar1 != null) {
				pCVar1.SyncTransforms = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Owner_g____getter_3_0(CustomLogicNetworkViewBuiltin __i)
	{
		CustomLogicPlayerBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Owner;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		if (Il2CppMethodInitialized_07546119 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicNetworkViewBuiltin.Bindings.c)) ;
			Il2CppMethodInitialized_07546119 = true;
		}
		__this = new CustomLogicNetworkViewBuiltin.Bindings.c();
		CustomLogicNetworkViewBuiltin.Bindings.c.__9 =(CustomLogicNetworkViewBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Transfer>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__Transfer_b__4_0(CustomLogicNetworkViewBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicPhotonSync pCVar1;
		CustomLogicPlayerBuiltin player;
		PhotonView pPVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			player = CustomLogicEvaluator.ConvertTo<CustomLogicPlayerBuiltin>(obj);
			if ((__c != null) &&(pCVar1 = __c.Sync, pCVar1 != null)) {
				pPVar2 = pCVar1.photonView;
				if (pPVar2 != null) {
					if (pPVar2._IsMine_k__BackingField != false) {
						pCVar1 = __c.Sync;
						if (pCVar1 == null) goto label_05a377da;
						pCVar1.Transfer(player);
					}
					return null;
				}
			}
		}
	label_05a377da: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__SendMessage_b__5_0(CustomLogicNetworkViewBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicPhotonSync __this_00;
		CustomLogicPlayerBuiltin pCVar1;
		String message;

		if (__a == null) {
	label_05a378b0: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicPlayerBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				message = CustomLogicEvaluator.ConvertTo<string>(__a[1]) ;
				if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Sync, __this_00 != null)) {
					__this_00.SendMessage(pCVar1.Player, message);
					return null;
				}
				goto label_05a378b0;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__SendMessageAll_b__6_0(CustomLogicNetworkViewBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicPhotonSync __this_00;
		String message;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			message = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(__this_00 = __c.Sync, __this_00 != null)) {
				__this_00.SendMessageAll(message);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__SendMessageOthers_b__7_0(CustomLogicNetworkViewBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicPhotonSync __this_00;
		String message;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			message = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(__this_00 = __c.Sync, __this_00 != null)) {
				__this_00.SendMessageOthers(message);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendStream>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__SendStream_b__8_0(CustomLogicNetworkViewBuiltin __c, Object[] __a)
	{
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				__c.SendStream(__a[0]);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReceiveStream>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__ReceiveStream_b__9_0(CustomLogicNetworkViewBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}
}
