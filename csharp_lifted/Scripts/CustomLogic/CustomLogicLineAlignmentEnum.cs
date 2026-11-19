// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLineAlignmentEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000545")]
[CompilerGenerated]
internal class CustomLogicLineAlignmentEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000546")]
	public static class Factory
	{
		[Token(Token = "0x6002D92")]
		[Address(RVA = "0x5994630", Offset = "0x5993630", VA = "0x5994630")]
		public static CustomLogicLineAlignmentEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineAlignmentEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicLineAlignmentEnum();
			return (CustomLogicLineAlignmentEnum)__this;
		}
	}

	[Token(Token = "0x2000547")]
	public static class Bindings
	{
		[Token(Token = "0x400186A")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002D93")]
		[Address(RVA = "0x5994750", Offset = "0x5993750", VA = "0x5994750")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicLineAlignmentEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "View");
			if (bVar1) {
				if ((typeof(CustomLogicLineAlignmentEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicLineAlignmentEnum.Bindings.__CreatePropertyBinding__View();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicLineAlignmentEnum.Bindings.__CreatePropertyBinding__View();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Local");
			if (bVar1) {
				if ((typeof(CustomLogicLineAlignmentEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicLineAlignmentEnum.Bindings.__CreatePropertyBinding__Local();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicLineAlignmentEnum.Bindings.__CreatePropertyBinding__Local();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "TransformZ");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineAlignmentEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicLineAlignmentEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicLineAlignmentEnum.Bindings.__CreatePropertyBinding__TransformZ();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicLineAlignmentEnum.Bindings.__CreatePropertyBinding__TransformZ();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002D94")]
		[Address(RVA = "0x59948E0", Offset = "0x59938E0", VA = "0x59948E0")]
		public static CLPropertyBinding<CustomLogicLineAlignmentEnum> __CreatePropertyBinding__View()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__View): 2 lines keep C-only constructs
			Func<CustomLogicLineAlignmentEnum, object> __this;
			CLPropertyBinding<CustomLogicLineAlignmentEnum> __this_00;

			__this = new Func<CustomLogicLineAlignmentEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__View_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicLineAlignmentEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x6002D95")]
		[Address(RVA = "0x5994980", Offset = "0x5993980", VA = "0x5994980")]
		public static CLPropertyBinding<CustomLogicLineAlignmentEnum> __CreatePropertyBinding__Local()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__Local): 2 lines keep C-only constructs
			Func<CustomLogicLineAlignmentEnum, object> __this;
			CLPropertyBinding<CustomLogicLineAlignmentEnum> __this_00;

			__this = new Func<CustomLogicLineAlignmentEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__Local_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicLineAlignmentEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x6002D96")]
		[Address(RVA = "0x5994A20", Offset = "0x5993A20", VA = "0x5994A20")]
		public static CLPropertyBinding<CustomLogicLineAlignmentEnum> __CreatePropertyBinding__TransformZ()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__TransformZ): 2 lines keep C-only constructs
			Func<CustomLogicLineAlignmentEnum, object> __this;
			CLPropertyBinding<CustomLogicLineAlignmentEnum> __this_00;

			__this = new Func<CustomLogicLineAlignmentEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__TransformZ_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicLineAlignmentEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}
	}

	[Token(Token = "0x17000745")]
	public static int View
	{
		[Token(Token = "0x6002D8B")]
		[Address(RVA = "0x59945A0", Offset = "0x59935A0", VA = "0x59945A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum$$get_View): clean
			return 0;
		}
	}

	[Token(Token = "0x17000746")]
	public static int Local
	{
		[Token(Token = "0x6002D8C")]
		[Address(RVA = "0x59945B0", Offset = "0x59935B0", VA = "0x59945B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum$$get_Local): clean
			return 1;
		}
	}

	[Token(Token = "0x17000747")]
	public static int TransformZ
	{
		[Token(Token = "0x6002D8D")]
		[Address(RVA = "0x59945C0", Offset = "0x59935C0", VA = "0x59945C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum$$get_TransformZ): clean
			return 1;
		}
	}

	[Token(Token = "0x17000748")]
	public override string ClassName
	{
		[Token(Token = "0x6002D8E")]
		[Address(RVA = "0x59945D0", Offset = "0x59935D0", VA = "0x59945D0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum$$get_ClassName): clean
			return "LineAlignmentEnum";
		}
	}

	[Token(Token = "0x17000749")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002D8F")]
		[Address(RVA = "0x5994600", Offset = "0x5993600", VA = "0x5994600", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700074A")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002D90")]
		[Address(RVA = "0x5994610", Offset = "0x5993610", VA = "0x5994610", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700074B")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002D91")]
		[Address(RVA = "0x5994620", Offset = "0x5993620", VA = "0x5994620", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002D8A")]
	[Address(RVA = "0x5994530", Offset = "0x5993530", VA = "0x5994530")]
	public CustomLogicLineAlignmentEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c (CustomLogic.CustomLogicLineAlignmentEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546812 == false) {
			Il2CppMethodInitialized_07546812 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLineAlignmentEnum.c.

	// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"View");
		__this.Add((Il2CppObject *)"Local");
		__this.Add((Il2CppObject *)"TransformZ");
		CustomLogicLineAlignmentEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__View>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__View_g____getter_2_0(CustomLogicLineAlignmentEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__Local>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Local_g____getter_3_0(CustomLogicLineAlignmentEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__TransformZ>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__TransformZ_g____getter_4_0(CustomLogicLineAlignmentEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
