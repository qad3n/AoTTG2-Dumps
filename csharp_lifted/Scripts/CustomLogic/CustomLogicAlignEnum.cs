// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAlignEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAlignEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004E3")]
[CompilerGenerated]
internal class CustomLogicAlignEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004E4")]
	public static class Factory
	{
		[Token(Token = "0x600270A")]
		[Address(RVA = "0x59545B0", Offset = "0x59535B0", VA = "0x59545B0")]
		public static CustomLogicAlignEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAlignEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAlignEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicAlignEnum();
			return (CustomLogicAlignEnum)__this;
		}
	}

	[Token(Token = "0x20004E5")]
	public static class Bindings
	{
		[Token(Token = "0x40017B6")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600270B")]
		[Address(RVA = "0x59546D0", Offset = "0x59536D0", VA = "0x59546D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicAlignEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Auto");
			if (bVar1) {
				if ((typeof(CustomLogicAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicAlignEnum.Bindings.__CreatePropertyBinding__Auto();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicAlignEnum.Bindings.__CreatePropertyBinding__Auto();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "FlexStart");
			if (bVar1) {
				if ((typeof(CustomLogicAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicAlignEnum.Bindings.__CreatePropertyBinding__FlexStart();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicAlignEnum.Bindings.__CreatePropertyBinding__FlexStart();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Center");
			if (bVar1) {
				if ((typeof(CustomLogicAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicAlignEnum.Bindings.__CreatePropertyBinding__Center();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicAlignEnum.Bindings.__CreatePropertyBinding__Center();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "FlexEnd");
			if (bVar1) {
				pCVar2 = CustomLogicAlignEnum.Bindings.__CreatePropertyBinding__FlexEnd() ;
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Stretch");
			if (bVar1) {
				pCVar2 = CustomLogicAlignEnum.Bindings.__CreatePropertyBinding__Stretch() ;
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAlignEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600270C")]
		[Address(RVA = "0x5954900", Offset = "0x5953900", VA = "0x5954900")]
		public static CLPropertyBinding<CustomLogicAlignEnum> __CreatePropertyBinding__Auto()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Auto): 2 lines keep C-only constructs
			Func<CustomLogicAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicAlignEnum> __this_00;

			__this = new Func<CustomLogicAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Auto_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600270D")]
		[Address(RVA = "0x59549A0", Offset = "0x59539A0", VA = "0x59549A0")]
		public static CLPropertyBinding<CustomLogicAlignEnum> __CreatePropertyBinding__FlexStart()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexStart): 2 lines keep C-only constructs
			Func<CustomLogicAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicAlignEnum> __this_00;

			__this = new Func<CustomLogicAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600270E")]
		[Address(RVA = "0x5954A40", Offset = "0x5953A40", VA = "0x5954A40")]
		public static CLPropertyBinding<CustomLogicAlignEnum> __CreatePropertyBinding__Center()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Center): 2 lines keep C-only constructs
			Func<CustomLogicAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicAlignEnum> __this_00;

			__this = new Func<CustomLogicAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Center_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600270F")]
		[Address(RVA = "0x5954AE0", Offset = "0x5953AE0", VA = "0x5954AE0")]
		public static CLPropertyBinding<CustomLogicAlignEnum> __CreatePropertyBinding__FlexEnd()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexEnd): 2 lines keep C-only constructs
			Func<CustomLogicAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicAlignEnum> __this_00;

			__this = new Func<CustomLogicAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002710")]
		[Address(RVA = "0x5954B80", Offset = "0x5953B80", VA = "0x5954B80")]
		public static CLPropertyBinding<CustomLogicAlignEnum> __CreatePropertyBinding__Stretch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Stretch): 2 lines keep C-only constructs
			Func<CustomLogicAlignEnum, object> __this;
			CLPropertyBinding<CustomLogicAlignEnum> __this_00;

			__this = new Func<CustomLogicAlignEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Stretch_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicAlignEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170004EF")]
	public static int Auto
	{
		[Token(Token = "0x6002701")]
		[Address(RVA = "0x5954500", Offset = "0x5953500", VA = "0x5954500")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_Auto): clean
			return 0;
		}
	}

	[Token(Token = "0x170004F0")]
	public static int FlexStart
	{
		[Token(Token = "0x6002702")]
		[Address(RVA = "0x5954510", Offset = "0x5953510", VA = "0x5954510")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_FlexStart): clean
			return 1;
		}
	}

	[Token(Token = "0x170004F1")]
	public static int Center
	{
		[Token(Token = "0x6002703")]
		[Address(RVA = "0x5954520", Offset = "0x5953520", VA = "0x5954520")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_Center): clean
			return 2;
		}
	}

	[Token(Token = "0x170004F2")]
	public static int FlexEnd
	{
		[Token(Token = "0x6002704")]
		[Address(RVA = "0x5954530", Offset = "0x5953530", VA = "0x5954530")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_FlexEnd): clean
			return 3;
		}
	}

	[Token(Token = "0x170004F3")]
	public static int Stretch
	{
		[Token(Token = "0x6002705")]
		[Address(RVA = "0x5954540", Offset = "0x5953540", VA = "0x5954540")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_Stretch): clean
			return 4;
		}
	}

	[Token(Token = "0x170004F4")]
	public override string ClassName
	{
		[Token(Token = "0x6002706")]
		[Address(RVA = "0x5954550", Offset = "0x5953550", VA = "0x5954550", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_ClassName): clean
			return "AlignEnum";
		}
	}

	[Token(Token = "0x170004F5")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002707")]
		[Address(RVA = "0x5954580", Offset = "0x5953580", VA = "0x5954580", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170004F6")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002708")]
		[Address(RVA = "0x5954590", Offset = "0x5953590", VA = "0x5954590", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170004F7")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002709")]
		[Address(RVA = "0x59545A0", Offset = "0x59535A0", VA = "0x59545A0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002700")]
	[Address(RVA = "0x5954490", Offset = "0x5953490", VA = "0x5954490")]
	public CustomLogicAlignEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c (CustomLogic.CustomLogicAlignEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754627c == false) {
			Il2CppMethodInitialized_0754627c = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicAlignEnum.c.

	// CustomLogic.CustomLogicAlignEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Auto");
		__this.Add((Il2CppObject *)"FlexStart");
		__this.Add((Il2CppObject *)"Center");
		__this.Add((Il2CppObject *)"FlexEnd");
		__this.Add((Il2CppObject *)"Stretch");
		CustomLogicAlignEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Auto>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Auto_g____getter_2_0(CustomLogicAlignEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexStart>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__FlexStart_g____getter_3_0(CustomLogicAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Center>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Center_g____getter_4_0(CustomLogicAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexEnd>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__FlexEnd_g____getter_5_0(CustomLogicAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Stretch_g____getter_6_0(CustomLogicAlignEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
