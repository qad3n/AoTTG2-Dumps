// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTextAlignEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTextAlignEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000581")]
[CompilerGenerated]
internal class CustomLogicTextAlignEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000582")]
	public static class Factory
	{
		[Token(Token = "0x60030FC")]
		[Address(RVA = "0x59AFBC0", Offset = "0x59AEBC0", VA = "0x59AFBC0")]
		public static CustomLogicTextAlignEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTextAlignEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTextAlignEnum();
			return (CustomLogicTextAlignEnum)__this;
		}
	}

	[Token(Token = "0x2000583")]
	public static class Bindings
	{
		[Token(Token = "0x400188E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60030FD")]
		[Address(RVA = "0x59AFCE0", Offset = "0x59AECE0", VA = "0x59AFCE0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicTextAlignEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x516feaaa) {
				if (uVar2 < 0x2505c52f) {
					if (uVar2 == 0x166f6d4a) {
						bVar1 = (name == "UpperCenter");
						if (bVar1) {
							if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__UpperCenter();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__UpperCenter();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2505c52e) {
						bVar1 = (name == "UpperLeft");
						if (bVar1) {
							if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__UpperLeft();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__UpperLeft();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x30130eca) {
					bVar1 = (name == "MiddleRight");
					if (bVar1) {
						if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__MiddleRight();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__MiddleRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x516feaa9) {
					bVar1 = (name == "MiddleLeft");
					if (bVar1) {
						if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__MiddleLeft();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__MiddleLeft();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb23900c2) {
				if (uVar2 == 0xae5b608f) {
					bVar1 = (name == "LowerCenter");
					if (bVar1) {
						if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__LowerCenter();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__LowerCenter();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb23900c1) {
					bVar1 = (name == "MiddleCenter");
					if (bVar1) {
						if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__MiddleCenter();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__MiddleCenter();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xd4e02b97) {
				bVar1 = (name == "LowerLeft");
				if (bVar1) {
					if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__LowerLeft();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__LowerLeft();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xdc00e203) {
				bVar1 = (name == "UpperRight");
				if (bVar1) {
					if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__UpperRight();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__UpperRight();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe58fc308) {
				bVar1 = (name == "LowerRight");
				if (bVar1) {
					if ((typeof(CustomLogicTextAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__LowerRight();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicTextAlignEnum.Bindings.__CreatePropertyBinding__LowerRight();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTextAlignEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60030FE")]
		[Address(RVA = "0x59B0140", Offset = "0x59AF140", VA = "0x59B0140")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__UpperLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperLeft): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperLeft_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030FF")]
		[Address(RVA = "0x59B01E0", Offset = "0x59AF1E0", VA = "0x59B01E0")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__UpperCenter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperCenter): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperCenter_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003100")]
		[Address(RVA = "0x59B0280", Offset = "0x59AF280", VA = "0x59B0280")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__UpperRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperRight): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__UpperRight_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003101")]
		[Address(RVA = "0x59B0320", Offset = "0x59AF320", VA = "0x59B0320")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__MiddleLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleLeft): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003102")]
		[Address(RVA = "0x59B03C0", Offset = "0x59AF3C0", VA = "0x59B03C0")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__MiddleCenter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleCenter): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003103")]
		[Address(RVA = "0x59B0460", Offset = "0x59AF460", VA = "0x59B0460")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__MiddleRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleRight): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003104")]
		[Address(RVA = "0x59B0500", Offset = "0x59AF500", VA = "0x59B0500")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__LowerLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerLeft): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerLeft_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003105")]
		[Address(RVA = "0x59B05A0", Offset = "0x59AF5A0", VA = "0x59B05A0")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__LowerCenter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerCenter): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerCenter_g____getter_9);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003106")]
		[Address(RVA = "0x59B0640", Offset = "0x59AF640", VA = "0x59B0640")]
		public static CLPropertyBinding<CustomLogicTextAlignEnum> __CreatePropertyBinding__LowerRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerRight): 2 lines keep C-only constructs
			Func<CustomLogicTextAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicTextAlignEnum> __this_00;

			__this = new Func<CustomLogicTextAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextAlignEnum_Bindings___CreatePropertyBinding__LowerRight_g____getter_10);
			__this_00 = new CLPropertyBinding<CustomLogicTextAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000880")]
	public static int UpperLeft
	{
		[Token(Token = "0x60030EF")]
		[Address(RVA = "0x59AFAD0", Offset = "0x59AEAD0", VA = "0x59AFAD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_UpperLeft): clean
			return 0;
		}
	}

	[Token(Token = "0x17000881")]
	public static int UpperCenter
	{
		[Token(Token = "0x60030F0")]
		[Address(RVA = "0x59AFAE0", Offset = "0x59AEAE0", VA = "0x59AFAE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_UpperCenter): clean
			return 1;
		}
	}

	[Token(Token = "0x17000882")]
	public static int UpperRight
	{
		[Token(Token = "0x60030F1")]
		[Address(RVA = "0x59AFAF0", Offset = "0x59AEAF0", VA = "0x59AFAF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_UpperRight): clean
			return 2;
		}
	}

	[Token(Token = "0x17000883")]
	public static int MiddleLeft
	{
		[Token(Token = "0x60030F2")]
		[Address(RVA = "0x59AFB00", Offset = "0x59AEB00", VA = "0x59AFB00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_MiddleLeft): clean
			return 3;
		}
	}

	[Token(Token = "0x17000884")]
	public static int MiddleCenter
	{
		[Token(Token = "0x60030F3")]
		[Address(RVA = "0x59AFB10", Offset = "0x59AEB10", VA = "0x59AFB10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_MiddleCenter): clean
			return 4;
		}
	}

	[Token(Token = "0x17000885")]
	public static int MiddleRight
	{
		[Token(Token = "0x60030F4")]
		[Address(RVA = "0x59AFB20", Offset = "0x59AEB20", VA = "0x59AFB20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_MiddleRight): clean
			return 5;
		}
	}

	[Token(Token = "0x17000886")]
	public static int LowerLeft
	{
		[Token(Token = "0x60030F5")]
		[Address(RVA = "0x59AFB30", Offset = "0x59AEB30", VA = "0x59AFB30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_LowerLeft): clean
			return 6;
		}
	}

	[Token(Token = "0x17000887")]
	public static int LowerCenter
	{
		[Token(Token = "0x60030F6")]
		[Address(RVA = "0x59AFB40", Offset = "0x59AEB40", VA = "0x59AFB40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_LowerCenter): clean
			return 7;
		}
	}

	[Token(Token = "0x17000888")]
	public static int LowerRight
	{
		[Token(Token = "0x60030F7")]
		[Address(RVA = "0x59AFB50", Offset = "0x59AEB50", VA = "0x59AFB50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_LowerRight): clean
			return 8;
		}
	}

	[Token(Token = "0x17000889")]
	public override string ClassName
	{
		[Token(Token = "0x60030F8")]
		[Address(RVA = "0x59AFB60", Offset = "0x59AEB60", VA = "0x59AFB60", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_ClassName): clean
			return "TextAlignEnum";
		}
	}

	[Token(Token = "0x1700088A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60030F9")]
		[Address(RVA = "0x59AFB90", Offset = "0x59AEB90", VA = "0x59AFB90", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700088B")]
	public override bool IsStatic
	{
		[Token(Token = "0x60030FA")]
		[Address(RVA = "0x59AFBA0", Offset = "0x59AEBA0", VA = "0x59AFBA0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700088C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60030FB")]
		[Address(RVA = "0x59AFBB0", Offset = "0x59AEBB0", VA = "0x59AFBB0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60030EE")]
	[Address(RVA = "0x59AFA60", Offset = "0x59AEA60", VA = "0x59AFA60")]
	public CustomLogicTextAlignEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c (CustomLogic.CustomLogicTextAlignEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ac4 == false) {
			Il2CppMethodInitialized_07546ac4 = true;
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

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTextAlignEnum.c.

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"UpperLeft");
		__this.Add((Il2CppObject *)"UpperCenter");
		__this.Add((Il2CppObject *)"UpperRight");
		__this.Add((Il2CppObject *)"MiddleLeft");
		__this.Add((Il2CppObject *)"MiddleCenter");
		__this.Add((Il2CppObject *)"MiddleRight");
		__this.Add((Il2CppObject *)"LowerLeft");
		__this.Add((Il2CppObject *)"LowerCenter");
		__this.Add((Il2CppObject *)"LowerRight");
		CustomLogicTextAlignEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperLeft>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__UpperLeft_g____getter_2_0(CustomLogicTextAlignEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperCenter>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__UpperCenter_g____getter_3_0(CustomLogicTextAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperRight>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__UpperRight_g____getter_4_0(CustomLogicTextAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleLeft>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__MiddleLeft_g____getter_5_0(CustomLogicTextAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleCenter>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__MiddleCenter_g____getter_6_0(CustomLogicTextAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleRight>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__MiddleRight_g____getter_7_0(CustomLogicTextAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerLeft>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__LowerLeft_g____getter_8_0(CustomLogicTextAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerCenter>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__LowerCenter_g____getter_9_0(CustomLogicTextAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerRight>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__LowerRight_g____getter_10_0(CustomLogicTextAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
