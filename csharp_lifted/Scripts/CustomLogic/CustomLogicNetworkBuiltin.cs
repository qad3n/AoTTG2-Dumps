// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNetworkBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005C5")]
[CompilerGenerated]
internal class CustomLogicNetworkBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005C6")]
	public static class Factory
	{
		[Token(Token = "0x60035C4")]
		[Address(RVA = "0x59ECAB0", Offset = "0x59EBAB0", VA = "0x59ECAB0")]
		public static CustomLogicNetworkBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNetworkBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicNetworkBuiltin();
			return (CustomLogicNetworkBuiltin)__this;
		}
	}

	[Token(Token = "0x20005C7")]
	public static class Bindings
	{
		[Token(Token = "0x4001924")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60035C5")]
		[Address(RVA = "0x59ECBD0", Offset = "0x59EBBD0", VA = "0x59ECBD0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicNetworkBuiltin> pCVar3;
			CLMethodBinding<CustomLogicNetworkBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x34be13e5) {
				if (uVar2 < 0x18dd36aa) {
					if (uVar2 == 0x6bf1664) {
						bVar1 = (name == "IsSingleplayer");
						if (bVar1) {
							if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__IsSingleplayer();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__IsSingleplayer();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x121de31d) {
						bVar1 = (name == "SendMessageAll");
						if (bVar1) {
							if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__SendMessageAll();
								return (ICLMemberBinding)pCVar4;
							}
							pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__SendMessageAll();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x18dd36a9) {
						bVar1 = (name == "Players");
						if (bVar1) {
							if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__Players();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__Players();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x20e62364) {
					bVar1 = (name == "NetworkTime");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__NetworkTime();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__NetworkTime();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x3442c773) {
					bVar1 = (name == "FindPlayer");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__FindPlayer();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__FindPlayer();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x34be13e4) {
					bVar1 = (name == "MasterClient");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__MasterClient();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__MasterClient();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x5a740463) {
				if (uVar2 == 0x396d88cd) {
					bVar1 = (name == "SendMessageOthers");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__SendMessageOthers();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__SendMessageOthers();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x396f5fc2) {
					bVar1 = (name == "MyPlayer");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__MyPlayer();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__MyPlayer();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x5a740462) {
					bVar1 = (name == "GetTimestampDifference");
					if (bVar1) {
						if ((typeof(CustomLogicNetworkBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__GetTimestampDifference();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__GetTimestampDifference();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0x67ac82cf) {
				if (uVar2 == 0x603b3854) {
					bVar1 = (name == "IsMasterClient");
					if (bVar1) {
						pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__IsMasterClient();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x67ac82ce) {
					bVar1 = (name == "SendMessage");
					if (bVar1) {
						pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__SendMessage();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xce859b1e) {
				bVar1 = (name == "KickPlayer");
				if (bVar1) {
					pCVar4 = CustomLogicNetworkBuiltin.Bindings.__CreateMethodBinding__KickPlayer();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0x7fb7f0a9) {
				bVar1 = (name == "Ping");
				if (bVar1) {
					pCVar3 = CustomLogicNetworkBuiltin.Bindings.__CreatePropertyBinding__Ping();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNetworkBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60035C6")]
		[Address(RVA = "0x59ED190", Offset = "0x59EC190", VA = "0x59ED190")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__IsMasterClient()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__IsMasterClient): 2 lines keep C-only constructs
			Func<CustomLogicNetworkBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNetworkBuiltin> __this_00;

			__this = new Func<CustomLogicNetworkBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsMasterClient_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicNetworkBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60035C7")]
		[Address(RVA = "0x59ED230", Offset = "0x59EC230", VA = "0x59ED230")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__IsSingleplayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__IsSingleplayer): 2 lines keep C-only constructs
			Func<CustomLogicNetworkBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNetworkBuiltin> __this_00;

			__this = new Func<CustomLogicNetworkBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsSingleplayer_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicNetworkBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60035C8")]
		[Address(RVA = "0x59ED2D0", Offset = "0x59EC2D0", VA = "0x59ED2D0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__Players()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Players): 2 lines keep C-only constructs
			Func<CustomLogicNetworkBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNetworkBuiltin> __this_00;

			__this = new Func<CustomLogicNetworkBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Players_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicNetworkBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60035C9")]
		[Address(RVA = "0x59ED370", Offset = "0x59EC370", VA = "0x59ED370")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__MasterClient()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MasterClient): 2 lines keep C-only constructs
			Func<CustomLogicNetworkBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNetworkBuiltin> __this_00;

			__this = new Func<CustomLogicNetworkBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MasterClient_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicNetworkBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60035CA")]
		[Address(RVA = "0x59ED410", Offset = "0x59EC410", VA = "0x59ED410")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__MyPlayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MyPlayer): 2 lines keep C-only constructs
			Func<CustomLogicNetworkBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNetworkBuiltin> __this_00;

			__this = new Func<CustomLogicNetworkBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MyPlayer_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicNetworkBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60035CB")]
		[Address(RVA = "0x59ED4B0", Offset = "0x59EC4B0", VA = "0x59ED4B0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__NetworkTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__NetworkTime): 2 lines keep C-only constructs
			Func<CustomLogicNetworkBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNetworkBuiltin> __this_00;

			__this = new Func<CustomLogicNetworkBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__NetworkTime_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicNetworkBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60035CC")]
		[Address(RVA = "0x59ED550", Offset = "0x59EC550", VA = "0x59ED550")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__Ping()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Ping): 2 lines keep C-only constructs
			Func<CustomLogicNetworkBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNetworkBuiltin> __this_00;

			__this = new Func<CustomLogicNetworkBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicNetworkBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60035CD")]
		[Address(RVA = "0x59ED5F0", Offset = "0x59EC5F0", VA = "0x59ED5F0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessage): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e8f == false) {
				Il2CppMethodInitialized_07546e8f = true;
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicNetworkBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__9_0);
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035CE")]
		[Address(RVA = "0x59ED730", Offset = "0x59EC730", VA = "0x59ED730")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e90 == false) {
				Il2CppMethodInitialized_07546e90 = true;
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicNetworkBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__10_0);
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035CF")]
		[Address(RVA = "0x59ED870", Offset = "0x59EC870", VA = "0x59ED870")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e91 == false) {
				Il2CppMethodInitialized_07546e91 = true;
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicNetworkBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b__11);
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035D0")]
		[Address(RVA = "0x59ED9B0", Offset = "0x59EC9B0", VA = "0x59ED9B0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__FindPlayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__FindPlayer): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e92 == false) {
				Il2CppMethodInitialized_07546e92 = true;
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicNetworkBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__FindPlayer_b__12_0);
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035D1")]
		[Address(RVA = "0x59EDAF0", Offset = "0x59ECAF0", VA = "0x59EDAF0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__GetTimestampDifference()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__GetTimestampDifference): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e93 == false) {
				Il2CppMethodInitialized_07546e93 = true;
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicNetworkBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__GetTimestampDifference_b);
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035D2")]
		[Address(RVA = "0x59EDC30", Offset = "0x59ECC30", VA = "0x59EDC30")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__KickPlayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__KickPlayer): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNetworkBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNetworkBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e94 == false) {
				Il2CppMethodInitialized_07546e94 = true;
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNetworkBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNetworkBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicNetworkBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__KickPlayer_b__14_0);
				pCVar2 = typeof(CustomLogicNetworkBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicNetworkBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x170009B6")]
	public static bool IsMasterClient
	{
		[Token(Token = "0x60035B3")]
		[Address(RVA = "0x59EBFF0", Offset = "0x59EAFF0", VA = "0x59EBFF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_IsMasterClient): clean
			uint uVar1;
			bool bVar2;

			if (Il2CppMethodInitialized_07546e78 == false) {
				Il2CppMethodInitialized_07546e78 = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return bVar2;
			}
			return bVar2;
		}
	}

	[Token(Token = "0x170009B7")]
	public static bool IsSingleplayer
	{
		[Token(Token = "0x60035B4")]
		[Address(RVA = "0x59EC050", Offset = "0x59EB050", VA = "0x59EC050")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_IsSingleplayer): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546e79 == false) {
				Il2CppMethodInitialized_07546e79 = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_07544cc2 == false) {
				Il2CppMethodInitialized_07544cc2 = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return PhotonNetwork.offlineMode;
			}
			return (bool)*(byte)((long)(typeof(PhotonNetwork)).static_fields + 0x30) ;
		}
	}

	[Token(Token = "0x170009B8")]
	public static CustomLogicListBuiltin Players
	{
		[Token(Token = "0x60035B5")]
		[Address(RVA = "0x59EC100", Offset = "0x59EB100", VA = "0x59EC100")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_Players): 2 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			Player player;
			List<object> __this;
			Object[] pSVar3;
			int iVar5;
			CustomLogicListBuiltin __this_00;
			Player[] pPVar6;
			ulong uVar7;
			CustomLogicPlayerBuiltin __this_01;
			ulong uVar8;

			__this_00 = new CustomLogicListBuiltin();
			pPVar6 = PhotonNetwork.PlayerList;
			if (pPVar6 == null) {
		label_05aec266: ;
				throw new NullReferenceException();
			}
			iVar5 = (int)pPVar6.Length;
			if (__this_00 == null) {
				if (0 < iVar5) goto label_05aec266;
			}
			else if (0 < iVar5) {
				uVar7 = pPVar6.Length & 0xffffffff;
				uVar8 = 0;
				do {
					if (uVar7 <= uVar8) {
						throw new IndexOutOfRangeException();
					}
					player = pPVar6[uVar8];
					__this = __this_00.List;
					__this_01 = new CustomLogicPlayerBuiltin(player);
					if (__this == null) goto label_05aec266;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this._items;
					if (pSVar3 == null) goto label_05aec266;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this._size = uVar2 + 1;
						pSVar3[(int)uVar2] = (object)__this_01;
					}
					else {
						__this.AddWithResize((object)__this_01);
					}
					uVar8 = uVar8 + 1;
					uVar2 = (uint)pPVar6.Length;
					uVar7 = (ulong)uVar2;
				} while ((long)uVar8 < (long)(int)uVar2);
			}
			return __this_00;
		}
	}

	[Token(Token = "0x170009B9")]
	public static CustomLogicPlayerBuiltin MasterClient
	{
		[Token(Token = "0x60035B6")]
		[Address(RVA = "0x59EC270", Offset = "0x59EB270", VA = "0x59EC270")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_MasterClient): clean
			Player player;
			CustomLogicPlayerBuiltin __this;

			player = PhotonNetwork.MasterClient;
			__this = new CustomLogicPlayerBuiltin(player);
			return __this;
		}
	}

	[Token(Token = "0x170009BA")]
	public static CustomLogicPlayerBuiltin MyPlayer
	{
		[Token(Token = "0x60035B7")]
		[Address(RVA = "0x59EC2F0", Offset = "0x59EB2F0", VA = "0x59EC2F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_MyPlayer): clean
			Player player;
			CustomLogicPlayerBuiltin __this;

			player = PhotonNetwork.LocalPlayer;
			__this = new CustomLogicPlayerBuiltin(player);
			return __this;
		}
	}

	[Token(Token = "0x170009BB")]
	public static double NetworkTime
	{
		[Token(Token = "0x60035B8")]
		[Address(RVA = "0x59EC370", Offset = "0x59EB370", VA = "0x59EC370")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_NetworkTime): clean
			uint uVar1;
			double dVar2;

			if (Il2CppMethodInitialized_07546e7d == false) {
				Il2CppMethodInitialized_07546e7d = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return dVar2;
			}
			return dVar2;
		}
	}

	[Token(Token = "0x170009BC")]
	public static int Ping
	{
		[Token(Token = "0x60035B9")]
		[Address(RVA = "0x59EC3D0", Offset = "0x59EB3D0", VA = "0x59EC3D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_Ping): clean
			uint uVar1;
			int iVar2;

			if (Il2CppMethodInitialized_07546e7e == false) {
				Il2CppMethodInitialized_07546e7e = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return iVar2;
			}
			return iVar2;
		}
	}

	[Token(Token = "0x170009BD")]
	public override string ClassName
	{
		[Token(Token = "0x60035C0")]
		[Address(RVA = "0x59ECA50", Offset = "0x59EBA50", VA = "0x59ECA50", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_ClassName): clean
			return "Network";
		}
	}

	[Token(Token = "0x170009BE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60035C1")]
		[Address(RVA = "0x59ECA80", Offset = "0x59EBA80", VA = "0x59ECA80", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009BF")]
	public override bool IsStatic
	{
		[Token(Token = "0x60035C2")]
		[Address(RVA = "0x59ECA90", Offset = "0x59EBA90", VA = "0x59ECA90", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009C0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60035C3")]
		[Address(RVA = "0x59ECAA0", Offset = "0x59EBAA0", VA = "0x59ECAA0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60035B2")]
	[Address(RVA = "0x59EBF80", Offset = "0x59EAF80", VA = "0x59EBF80")]
	public CustomLogicNetworkBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546e77 == false) {
			Il2CppMethodInitialized_07546e77 = true;
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

	[Token(Token = "0x60035BA")]
	[Address(RVA = "0x59EC430", Offset = "0x59EB430", VA = "0x59EC430")]
	public static void SendMessage(CustomLogicPlayerBuiltin player, string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$SendMessage): 1 lines keep C-only constructs
		PhotonView __this;
		Player targetPlayer;
		Object[] parameters;
		object pIVar1;

		if (player != null) {
			__this = RPCManager.PhotonView;
			targetPlayer = player.Player;
			parameters = (Object[])new object[1];
			if (parameters != null) {
				if (message != null) {
					pIVar1 = il2cpp_vm_Object_IsInst((object)message, (((parameters.obj).klass)._1).element_class);
					if (pIVar1 == null) {
						pIVar1 = new ArrayTypeMismatchException();
						throw pIVar1;
					}
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = (object)message;
				if (__this != null) {
					__this.RPC("SendMessageRPC", targetPlayer, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60035BB")]
	[Address(RVA = "0x59EC530", Offset = "0x59EB530", VA = "0x59EC530")]
	public static void SendMessageAll(string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$SendMessageAll): 1 lines keep C-only constructs
		PhotonView __this;
		Object[] parameters;
		object pIVar1;

		__this = RPCManager.PhotonView;
		parameters = (Object[])new object[1];
		if (parameters != null) {
			if (message != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)message, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = (object)message;
			if (__this != null) {
				__this.RPC("SendMessageRPC", 0, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60035BC")]
	[Address(RVA = "0x59EC610", Offset = "0x59EB610", VA = "0x59EC610")]
	public static void SendMessageOthers(string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$SendMessageOthers): 1 lines keep C-only constructs
		PhotonView __this;
		Object[] parameters;
		object pIVar1;

		__this = RPCManager.PhotonView;
		parameters = (Object[])new object[1];
		if (parameters != null) {
			if (message != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)message, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = (object)message;
			if (__this != null) {
				__this.RPC("SendMessageRPC", 1, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60035BD")]
	[Address(RVA = "0x59EC6F0", Offset = "0x59EB6F0", VA = "0x59EC6F0")]
	public static CustomLogicPlayerBuiltin FindPlayer(int id)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$FindPlayer): clean
		Player player;
		CustomLogicPlayerBuiltin __this;

		__this = null;
		player = Util.FindPlayerById(id);
		if (player != null) {
			__this = new CustomLogicPlayerBuiltin(player);
		}
		return __this;
	}

	[Token(Token = "0x60035BE")]
	[Address(RVA = "0x59EC780", Offset = "0x59EB780", VA = "0x59EC780")]
	public static double GetTimestampDifference(double timestamp1, double timestamp2)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$GetTimestampDifference): clean
		uint uVar1;
		double dVar2;

		if (Il2CppMethodInitialized_07546e83 == false) {
			Il2CppMethodInitialized_07546e83 = true;
			uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			dVar2 = Util.GetPhotonTimestampDifference(timestamp1, timestamp2);
			return dVar2;
		}
		dVar2 = Util.GetPhotonTimestampDifference(timestamp1, timestamp2);
		return dVar2;
	}

	[Token(Token = "0x60035BF")]
	[Address(RVA = "0x59EC820", Offset = "0x59EB820", VA = "0x59EC820")]
	public static void KickPlayer(object target, string reason = ".")
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c (CustomLogic.CustomLogicNetworkBuiltin$$KickPlayer): 10 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		bool bVar3;
		int iVar4;
		Room pPVar5;
		Type arg0;
		object arg1;
		Il2CppClass pIVar6;
		ArgumentException __this;
		String pSVar7;
		MethodInfo lastManagedFrame;

		if (target == null) {
	label_05aec99a: ;
			arg0 = target.GetType();
			pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Invalid player parameter type {0}. Valid types are {1}, int (id).");
			arg1 = il2cpp_codegen_get_runtime_metadata(&"CustomLogicPlayerBuiltin");
			pSVar7 = String.Format(pSVar7, (object)arg0, arg1);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this = new ArgumentException(pSVar7);
		}
		else {
			pIVar6 = target.klass;
			if (pIVar6 == g_data_07556710) {
				pPVar5 = PhotonNetwork.CurrentRoom;
				iVar4 = MiscExtensions.UnboxToInt(target);
				if (pPVar5 == null) {
					throw new NullReferenceException();
				}
				pIVar6 = (Il2CppClass)pPVar5.GetPlayer(iVar4, true);
				uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				bVar1 = (typeof(CustomLogicPlayerBuiltin)._2).typeHierarchyDepth;
				if (((pIVar6._2).typeHierarchyDepth < bVar1) ||((pIVar6._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicPlayerBuiltin))) goto label_05aec99a;
				pIVar6 = target[3].klass;
				uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			bVar3 = PhotonNetwork.IsMasterClient;
			if (bVar3) {
				ChatManager.KickPlayer((Player)pIVar6, true, false, reason);
				return;
			}
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Only the master client can kick players.");
			__this = new Exception(pSVar7);
		}
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_KickPlayer);
		throw (object)__this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c.

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"IsMasterClient");
		__this.Add((Il2CppObject *)"IsSingleplayer");
		__this.Add((Il2CppObject *)"Players");
		__this.Add((Il2CppObject *)"MasterClient");
		__this.Add((Il2CppObject *)"MyPlayer");
		__this.Add((Il2CppObject *)"NetworkTime");
		__this.Add((Il2CppObject *)"Ping");
		__this.Add((Il2CppObject *)"SendMessage");
		__this.Add((Il2CppObject *)"SendMessageAll");
		__this.Add((Il2CppObject *)"SendMessageOthers");
		__this.Add((Il2CppObject *)"FindPlayer");
		__this.Add((Il2CppObject *)"GetTimestampDifference");
		__this.Add((Il2CppObject *)"KickPlayer");
		CustomLogicNetworkBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__IsMasterClient>g____getter|2_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsMasterClient_g____getter_2_0(CustomLogicNetworkBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		uStack_8 = in_RAX;
		bVar1 = PhotonNetwork.IsMasterClient;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__IsSingleplayer>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__IsSingleplayer_g____getter_3_0(CustomLogicNetworkBuiltin __i)
	{
		uint uVar1;
		object pIVar2;

		if (Il2CppMethodInitialized_07546e79 == false) {
			Il2CppMethodInitialized_07546e79 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07544cc2 == false) {
			Il2CppMethodInitialized_07544cc2 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Players>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Players_g____getter_4_0(CustomLogicNetworkBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		pCVar1 = CustomLogicNetworkBuiltin.Players;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MasterClient>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__MasterClient_g____getter_5_0(CustomLogicNetworkBuiltin __i)
	{
		Player player;
		CustomLogicPlayerBuiltin __this;

		player = PhotonNetwork.MasterClient;
		__this = new CustomLogicPlayerBuiltin(player);
		return (object)__this;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MyPlayer>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__MyPlayer_g____getter_6_0(CustomLogicNetworkBuiltin __i)
	{
		Player player;
		CustomLogicPlayerBuiltin __this;

		player = PhotonNetwork.LocalPlayer;
		__this = new CustomLogicPlayerBuiltin(player);
		return (object)__this;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__NetworkTime>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__NetworkTime_g____getter_7_0(CustomLogicNetworkBuiltin __i)
	{
		object pIVar1;

		return pIVar1;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Ping_g____getter_8_0(CustomLogicNetworkBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		PhotonNetwork.GetPing();
		return pIVar1;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(CustomLogicNetworkBuiltin.Bindings.c)) ;
		__this = new Object();
		CustomLogicNetworkBuiltin.Bindings.c.__9 =(CustomLogicNetworkBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__SendMessage_b__9_0(CustomLogicNetworkBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicPlayerBuiltin player;
		String message;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			player = CustomLogicEvaluator.ConvertTo<CustomLogicPlayerBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				message = CustomLogicEvaluator.ConvertTo<string>(__a[1]) ;
				CustomLogicNetworkBuiltin.SendMessage(player, message);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__SendMessageAll_b__10_0(CustomLogicNetworkBuiltin __c, Object[] __a)
	{
		object obj;
		String message;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		message = CustomLogicEvaluator.ConvertTo<string>(obj) ;
		CustomLogicNetworkBuiltin.SendMessageAll(message);
		return null;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__SendMessageOthers_b__11_0(CustomLogicNetworkBuiltin __c, Object[] __a)
	{
		object obj;
		String message;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		message = CustomLogicEvaluator.ConvertTo<string>(obj) ;
		CustomLogicNetworkBuiltin.SendMessageOthers(message);
		return null;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindPlayer>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__FindPlayer_b__12_0(CustomLogicNetworkBuiltin __c, Object[] __a)
	{
		object obj;
		int id;
		CustomLogicPlayerBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		id = CustomLogicEvaluator.ConvertTo<int>(obj);
		pCVar1 = CustomLogicNetworkBuiltin.FindPlayer(id);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTimestampDifference>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__GetTimestampDifference_b__13_0(CustomLogicNetworkBuiltin __c, Object[] __a)
	{
		object pIVar1;
		double timestamp1;
		double timestamp2;
		double dStack_20;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			timestamp1 = CustomLogicEvaluator.ConvertTo<double>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				timestamp2 = CustomLogicEvaluator.ConvertTo<double>(__a[1]);
				dStack_20 = CustomLogicNetworkBuiltin.GetTimestampDifference(timestamp1, timestamp2);
				pIVar1 = (object)dStack_20;
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__KickPlayer>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__KickPlayer_b__14_0(CustomLogicNetworkBuiltin __c, Object[] __a)
	{
		int iVar1;
		object target;
		object obj;
		String reason;

		if (__a == null) {
			throw new NullReferenceException();
		}
		iVar1 = (int)__a.Length;
		if (iVar1 == 0) {
			throw new IndexOutOfRangeException();
		}
		target = __a[0];
		if (iVar1 < 2) {
			reason = ".";
		}
		else {
			obj = __a[1];
			reason = CustomLogicEvaluator.ConvertTo<string>(obj);
		}
		CustomLogicNetworkBuiltin.KickPlayer(target, reason);
		return null;
	}
}
