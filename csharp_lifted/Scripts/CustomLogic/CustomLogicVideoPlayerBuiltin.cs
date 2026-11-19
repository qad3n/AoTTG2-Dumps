// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicVideoPlayerBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Video;

namespace CustomLogic;

[Token(Token = "0x20004AD")]
[CompilerGenerated]
internal class CustomLogicVideoPlayerBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20004AE")]
	public static class Factory
	{
		[Token(Token = "0x6002089")]
		[Address(RVA = "0x5909CE0", Offset = "0x5908CE0", VA = "0x5909CE0")]
		public static CustomLogicVideoPlayerBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicVideoPlayerBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVideoPlayerBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicVideoPlayerBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x20004AF")]
	public static class Bindings
	{
		[Token(Token = "0x40016D3")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600208A")]
		[Address(RVA = "0x5909DD0", Offset = "0x5908DD0", VA = "0x5909DD0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> pCVar3;
			CLMethodBinding<CustomLogicVideoPlayerBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x4b7f7706) {
				if (uVar2 < 0x14b5b196) {
					if (uVar2 == 0x170e53d) {
						bVar1 = (name == "IsLooping");
						if (bVar1) {
							if ((typeof(CustomLogicVideoPlayerBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__IsLooping();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__IsLooping();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x202277c) {
						bVar1 = (name == "StepForward");
						if (bVar1) {
							if ((typeof(CustomLogicVideoPlayerBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar4 = CustomLogicVideoPlayerBuiltin.Bindings.__CreateMethodBinding__StepForward();
								return (ICLMemberBinding)pCVar4;
							}
							pCVar4 = CustomLogicVideoPlayerBuiltin.Bindings.__CreateMethodBinding__StepForward();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x14b5b195) {
						bVar1 = (name == "FrameCount");
						if (bVar1) {
							if ((typeof(CustomLogicVideoPlayerBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__FrameCount();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__FrameCount();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x3eeb76a5) {
					if (uVar2 == 0x29ab6f83) {
						bVar1 = (name == "Play");
						if (bVar1) {
							pCVar4 = CustomLogicVideoPlayerBuiltin.Bindings.__CreateMethodBinding__Play();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x3eeb76a4) {
						bVar1 = (name == "FrameRate");
						if (bVar1) {
							pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__FrameRate();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x44f9bf2d) {
					bVar1 = (name == "Pause");
					if (bVar1) {
						pCVar4 = CustomLogicVideoPlayerBuiltin.Bindings.__CreateMethodBinding__Pause();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x4b7f7705) {
					bVar1 = (name == "Stop");
					if (bVar1) {
						pCVar4 = CustomLogicVideoPlayerBuiltin.Bindings.__CreateMethodBinding__Stop();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xcc5e1936) {
				if (uVar2 < 0x7ea7e87c) {
					if (uVar2 == 0x5e7ac146) {
						bVar1 = (name == "Frame");
						if (bVar1) {
							pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__Frame();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7ea7e87b) {
						bVar1 = (name == "IsPaused");
						if (bVar1) {
							pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__IsPaused();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9e978e07) {
					bVar1 = (name == "PlaybackSpeed");
					if (bVar1) {
						pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__PlaybackSpeed();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xcc5e1935) {
					bVar1 = (name == "Length");
					if (bVar1) {
						pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__Length();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xdfe4e405) {
				if (uVar2 == 0xd5463178) {
					bVar1 = (name == "IsPrepared");
					if (bVar1) {
						pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__IsPrepared();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xdfe4e404) {
					bVar1 = (name == "Time");
					if (bVar1) {
						pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__Time();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe4b35065) {
				bVar1 = (name == "IsPlaying");
				if (bVar1) {
					pCVar3 = CustomLogicVideoPlayerBuiltin.Bindings.__CreatePropertyBinding__IsPlaying();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf222bf7c) {
				bVar1 = (name == "Prepare");
				if (bVar1) {
					pCVar4 = CustomLogicVideoPlayerBuiltin.Bindings.__CreateMethodBinding__Prepare();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVideoPlayerBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600208B")]
		[Address(RVA = "0x590A3F0", Offset = "0x59093F0", VA = "0x590A3F0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Frame()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Frame): 4 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			Action<CustomLogicVideoPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____getter_2);
			__this_00 = new Action<CustomLogicVideoPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____setter_2);
			__this_01 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600208C")]
		[Address(RVA = "0x590A4D0", Offset = "0x59094D0", VA = "0x590A4D0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameCount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameCount): 3 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameCount_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600208D")]
		[Address(RVA = "0x590A570", Offset = "0x5909570", VA = "0x590A570")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameRate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameRate): 3 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameRate_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600208E")]
		[Address(RVA = "0x590A610", Offset = "0x5909610", VA = "0x590A610")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsLooping()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsLooping): 4 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			Action<CustomLogicVideoPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____gette);
			__this_00 = new Action<CustomLogicVideoPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600208F")]
		[Address(RVA = "0x590A6F0", Offset = "0x59096F0", VA = "0x590A6F0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPaused()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPaused): 3 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPaused_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002090")]
		[Address(RVA = "0x590A790", Offset = "0x5909790", VA = "0x590A790")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying): 3 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002091")]
		[Address(RVA = "0x590A830", Offset = "0x5909830", VA = "0x590A830")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPrepared()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPrepared): 3 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPrepared_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002092")]
		[Address(RVA = "0x590A8D0", Offset = "0x59098D0", VA = "0x590A8D0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Length()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Length): 3 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Length_g____getter_9);
			__this_00 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002093")]
		[Address(RVA = "0x590A970", Offset = "0x5909970", VA = "0x590A970")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__PlaybackSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__PlaybackSpeed): 4 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			Action<CustomLogicVideoPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____g);
			__this_00 = new Action<CustomLogicVideoPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002094")]
		[Address(RVA = "0x590AA50", Offset = "0x5909A50", VA = "0x590AA50")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Time()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Time): 4 lines keep C-only constructs
			Func<CustomLogicVideoPlayerBuiltin, object> __this;
			Action<CustomLogicVideoPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_11);
			__this_00 = new Action<CustomLogicVideoPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_11);
			__this_01 = new CLPropertyBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002095")]
		[Address(RVA = "0x590AB30", Offset = "0x5909B30", VA = "0x590AB30")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Pause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Pause): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVideoPlayerBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545efc == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545efc = true;
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVideoPlayerBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Pause_b__12_0);
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002096")]
		[Address(RVA = "0x590AC70", Offset = "0x5909C70", VA = "0x590AC70")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Play()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Play): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVideoPlayerBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545efd == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545efd = true;
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVideoPlayerBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Play_b__13_0);
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002097")]
		[Address(RVA = "0x590ADB0", Offset = "0x5909DB0", VA = "0x590ADB0")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Prepare()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Prepare): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVideoPlayerBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545efe == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545efe = true;
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVideoPlayerBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Prepare_b__14_0);
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002098")]
		[Address(RVA = "0x590AEF0", Offset = "0x5909EF0", VA = "0x590AEF0")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__StepForward()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__StepForward): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVideoPlayerBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545eff == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545eff = true;
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVideoPlayerBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__StepForward_b__15_0);
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002099")]
		[Address(RVA = "0x590B030", Offset = "0x590A030", VA = "0x590B030")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Stop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Stop): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVideoPlayerBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVideoPlayerBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f00 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545f00 = true;
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVideoPlayerBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicVideoPlayerBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Stop_b__16_0);
				pCVar2 = typeof(CustomLogicVideoPlayerBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVideoPlayerBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40016D1")]
	[FieldOffset(Offset = "0x38")]
	public VideoPlayer Value;

	[Token(Token = "0x40016D2")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x170003CA")]
	public int Frame
	{
		[Token(Token = "0x6002073")]
		[Address(RVA = "0x5909A40", Offset = "0x5908A40", VA = "0x5909A40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Frame): clean
			VideoPlayer __this_00;
			long iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			iVar1 = __this_00.frame;
			return (int32_t)iVar1;
		}
		[Token(Token = "0x6002072")]
		[Address(RVA = "0x5909A20", Offset = "0x5908A20", VA = "0x5909A20")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Frame): clean
			VideoPlayer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.frame = (long)value;
			return;
		}
	}

	[Token(Token = "0x170003CB")]
	public ulong FrameCount
	{
		[Token(Token = "0x6002074")]
		[Address(RVA = "0x5909A60", Offset = "0x5908A60", VA = "0x5909A60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameCount): clean
			VideoPlayer __this_00;
			ulong uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return uVar1;
		}
	}

	[Token(Token = "0x170003CC")]
	public float FrameRate
	{
		[Token(Token = "0x6002075")]
		[Address(RVA = "0x5909A80", Offset = "0x5908A80", VA = "0x5909A80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameRate): clean
			VideoPlayer __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
	}

	[Token(Token = "0x170003CD")]
	public bool IsLooping
	{
		[Token(Token = "0x6002077")]
		[Address(RVA = "0x5909AC0", Offset = "0x5908AC0", VA = "0x5909AC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsLooping): clean
			VideoPlayer __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6002076")]
		[Address(RVA = "0x5909AA0", Offset = "0x5908AA0", VA = "0x5909AA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$set_IsLooping): clean
			VideoPlayer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.isLooping = value;
			return;
		}
	}

	[Token(Token = "0x170003CE")]
	public bool IsPaused
	{
		[Token(Token = "0x6002078")]
		[Address(RVA = "0x5909AE0", Offset = "0x5908AE0", VA = "0x5909AE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPaused): clean
			VideoPlayer __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
	}

	[Token(Token = "0x170003CF")]
	public bool IsPlaying
	{
		[Token(Token = "0x6002079")]
		[Address(RVA = "0x5909B00", Offset = "0x5908B00", VA = "0x5909B00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPlaying): clean
			VideoPlayer __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
	}

	[Token(Token = "0x170003D0")]
	public bool IsPrepared
	{
		[Token(Token = "0x600207A")]
		[Address(RVA = "0x5909B20", Offset = "0x5908B20", VA = "0x5909B20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPrepared): clean
			VideoPlayer __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
	}

	[Token(Token = "0x170003D1")]
	public double Length
	{
		[Token(Token = "0x600207B")]
		[Address(RVA = "0x5909B40", Offset = "0x5908B40", VA = "0x5909B40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Length): clean
			VideoPlayer __this_00;
			double dVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return dVar1;
		}
	}

	[Token(Token = "0x170003D2")]
	public float PlaybackSpeed
	{
		[Token(Token = "0x600207D")]
		[Address(RVA = "0x5909B80", Offset = "0x5908B80", VA = "0x5909B80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_PlaybackSpeed): clean
			VideoPlayer __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x600207C")]
		[Address(RVA = "0x5909B60", Offset = "0x5908B60", VA = "0x5909B60")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$set_PlaybackSpeed): clean
			VideoPlayer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.playbackSpeed = value;
			return;
		}
	}

	[Token(Token = "0x170003D3")]
	public float Time
	{
		[Token(Token = "0x600207F")]
		[Address(RVA = "0x5909BC0", Offset = "0x5908BC0", VA = "0x5909BC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Time): clean
			VideoPlayer __this_00;
			double dVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			dVar1 = __this_00.time;
			return (float)dVar1;
		}
		[Token(Token = "0x600207E")]
		[Address(RVA = "0x5909BA0", Offset = "0x5908BA0", VA = "0x5909BA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Time): clean
			VideoPlayer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.time = (double)value;
			return;
		}
	}

	[Token(Token = "0x170003D4")]
	public override string ClassName
	{
		[Token(Token = "0x6002085")]
		[Address(RVA = "0x5909C80", Offset = "0x5908C80", VA = "0x5909C80", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_ClassName): clean
			return "VideoPlayer";
		}
	}

	[Token(Token = "0x170003D5")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002086")]
		[Address(RVA = "0x5909CB0", Offset = "0x5908CB0", VA = "0x5909CB0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170003D6")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002087")]
		[Address(RVA = "0x5909CC0", Offset = "0x5908CC0", VA = "0x5909CC0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170003D7")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002088")]
		[Address(RVA = "0x5909CD0", Offset = "0x5908CD0", VA = "0x5909CD0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002070")]
	[Address(RVA = "0x5909980", Offset = "0x5908980", VA = "0x5909980")]
	public CustomLogicVideoPlayerBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor): clean
		base(null);
		return;
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x5909990", Offset = "0x5908990", VA = "0x5909990")]
	public CustomLogicVideoPlayerBuiltin(BuiltinClassInstance owner, VideoPlayer videoPlayer)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor): 1 lines keep C-only constructs
		VideoPlayer pUVar1;
		VideoPlayer pUVar2;

		base((Component)videoPlayer);
		this.OwnerBuiltin = owner;
		pUVar2 = typeof(VideoPlayer);
		pUVar1 = (VideoPlayer)this.Component;
		if (pUVar1 == null) {
			this.Value = null;
		}
		else if ((pUVar1.klass != typeof(VideoPlayer)) ||(this.Value = pUVar1, pUVar1.klass != pUVar2)) {
			throw new InvalidCastException();
		}
		return;
	}

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x5909BE0", Offset = "0x5908BE0", VA = "0x5909BE0")]
	public void Pause()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$Pause): clean
		VideoPlayer __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Pause();
		return;
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x5909C00", Offset = "0x5908C00", VA = "0x5909C00")]
	public void Play()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$Play): clean
		VideoPlayer __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Play();
		return;
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x5909C20", Offset = "0x5908C20", VA = "0x5909C20")]
	public void Prepare()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$Prepare): clean
		VideoPlayer __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Prepare();
		return;
	}

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x5909C40", Offset = "0x5908C40", VA = "0x5909C40")]
	public void StepForward()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$StepForward): clean
		VideoPlayer __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.StepForward();
		return;
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x5909C60", Offset = "0x5908C60", VA = "0x5909C60")]
	public void Stop()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c (CustomLogic.CustomLogicVideoPlayerBuiltin$$Stop): clean
		VideoPlayer __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Stop();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c.

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Frame");
		__this.Add((Il2CppObject *)"FrameCount");
		__this.Add((Il2CppObject *)"FrameRate");
		__this.Add((Il2CppObject *)"IsLooping");
		__this.Add((Il2CppObject *)"IsPaused");
		__this.Add((Il2CppObject *)"IsPlaying");
		__this.Add((Il2CppObject *)"IsPrepared");
		__this.Add((Il2CppObject *)"Length");
		__this.Add((Il2CppObject *)"PlaybackSpeed");
		__this.Add((Il2CppObject *)"Time");
		__this.Add((Il2CppObject *)"Pause");
		__this.Add((Il2CppObject *)"Play");
		__this.Add((Il2CppObject *)"Prepare");
		__this.Add((Il2CppObject *)"StepForward");
		__this.Add((Il2CppObject *)"Stop");
		CustomLogicVideoPlayerBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Frame_g____getter_2_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.frame;
		return pIVar1;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Frame_g____setter_2_1(CustomLogicVideoPlayerBuiltin __i, object __v)
	{
		VideoPlayer __this;
		int iVar1;

		iVar1 = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.frame = (long)iVar1;
		return;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameCount>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__FrameCount_g____getter_3_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		object pIVar1;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameRate>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__FrameRate_g____getter_4_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.frameRate;
		return pIVar1;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____getter|5_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsLooping_g____getter_5_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.isLooping;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__IsLooping_g____setter_5_1(CustomLogicVideoPlayerBuiltin __i, object __v)
	{
		VideoPlayer __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.isLooping = value;
		return;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPaused>g____getter|6_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsPaused_g____getter_6_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.isPaused;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|7_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsPlaying_g____getter_7_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.isPlaying;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPrepared>g____getter|8_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsPrepared_g____getter_8_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.isPrepared;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Length>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Length_g____getter_9_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		object pIVar1;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__PlaybackSpeed_g____getter_10_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.playbackSpeed;
		return pIVar1;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__PlaybackSpeed_g____setter_10_1(CustomLogicVideoPlayerBuiltin __i, object __v)
	{
		VideoPlayer __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.playbackSpeed = value;
		return;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Time_g____getter_11_0(CustomLogicVideoPlayerBuiltin __i)
	{
		VideoPlayer __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.time;
		return pIVar1;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__Time_g____setter_11_1(CustomLogicVideoPlayerBuiltin __i, object __v)
	{
		VideoPlayer __this;
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.time = (double)fVar1;
		return;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		if (Il2CppMethodInitialized_07545f06 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVideoPlayerBuiltin.Bindings.c)) ;
			Il2CppMethodInitialized_07545f06 = true;
		}
		__this = new CustomLogicVideoPlayerBuiltin.Bindings.c();
		CustomLogicVideoPlayerBuiltin.Bindings.c.__9 =(CustomLogicVideoPlayerBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__Pause_b__12_0(CustomLogicVideoPlayerBuiltin __c, Object[] __a)
	{
		VideoPlayer __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Pause();
		return null;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__Play_b__13_0(CustomLogicVideoPlayerBuiltin __c, Object[] __a)
	{
		VideoPlayer __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Play();
		return null;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Prepare>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__Prepare_b__14_0(CustomLogicVideoPlayerBuiltin __c, Object[] __a)
	{
		VideoPlayer __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Prepare();
		return null;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__StepForward>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__StepForward_b__15_0(CustomLogicVideoPlayerBuiltin __c, Object[] __a)
	{
		VideoPlayer __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.StepForward();
		return null;
	}

	// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__Stop_b__16_0(CustomLogicVideoPlayerBuiltin __c, Object[] __a)
	{
		VideoPlayer __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Stop();
		return null;
	}
}
