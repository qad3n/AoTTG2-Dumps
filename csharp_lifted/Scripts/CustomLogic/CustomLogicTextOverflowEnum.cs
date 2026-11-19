// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTextOverflowEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000584")]
[CompilerGenerated]
internal class CustomLogicTextOverflowEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000585")]
	public static class Factory
	{
		[Token(Token = "0x6003118")]
		[Address(RVA = "0x59B0AD0", Offset = "0x59AFAD0", VA = "0x59B0AD0")]
		public static CustomLogicTextOverflowEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTextOverflowEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTextOverflowEnum();
			return (CustomLogicTextOverflowEnum)__this;
		}
	}

	[Token(Token = "0x2000586")]
	public static class Bindings
	{
		[Token(Token = "0x400188F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003119")]
		[Address(RVA = "0x59B0BF0", Offset = "0x59AFBF0", VA = "0x59B0BF0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicTextOverflowEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Clip");
			if (bVar1) {
				if ((typeof(CustomLogicTextOverflowEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTextOverflowEnum.Bindings.__CreatePropertyBinding__Clip();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTextOverflowEnum.Bindings.__CreatePropertyBinding__Clip();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Ellipsis");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTextOverflowEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicTextOverflowEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicTextOverflowEnum.Bindings.__CreatePropertyBinding__Ellipsis();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicTextOverflowEnum.Bindings.__CreatePropertyBinding__Ellipsis();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x600311A")]
		[Address(RVA = "0x59B0D30", Offset = "0x59AFD30", VA = "0x59B0D30")]
		public static CLPropertyBinding<CustomLogicTextOverflowEnum> __CreatePropertyBinding__Clip()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum.Bindings$$__CreatePropertyBinding__Clip): 2 lines keep C-only constructs
			Func<CustomLogicTextOverflowEnum, object> __this;
			CLPropertyBinding<CustomLogicTextOverflowEnum> __this_00;

			__this = new Func<CustomLogicTextOverflowEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings___CreatePropertyBinding__Clip_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicTextOverflowEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600311B")]
		[Address(RVA = "0x59B0DD0", Offset = "0x59AFDD0", VA = "0x59B0DD0")]
		public static CLPropertyBinding<CustomLogicTextOverflowEnum> __CreatePropertyBinding__Ellipsis()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum.Bindings$$__CreatePropertyBinding__Ellipsis): 2 lines keep C-only constructs
			Func<CustomLogicTextOverflowEnum, object> __this;
			CLPropertyBinding<CustomLogicTextOverflowEnum> __this_00;

			__this = new Func<CustomLogicTextOverflowEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextOverflowEnum_Bindings___CreatePropertyBinding__Ellipsis_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicTextOverflowEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700088D")]
	public static int Clip
	{
		[Token(Token = "0x6003112")]
		[Address(RVA = "0x59B0A50", Offset = "0x59AFA50", VA = "0x59B0A50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum$$get_Clip): clean
			return 0;
		}
	}

	[Token(Token = "0x1700088E")]
	public static int Ellipsis
	{
		[Token(Token = "0x6003113")]
		[Address(RVA = "0x59B0A60", Offset = "0x59AFA60", VA = "0x59B0A60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum$$get_Ellipsis): clean
			return 1;
		}
	}

	[Token(Token = "0x1700088F")]
	public override string ClassName
	{
		[Token(Token = "0x6003114")]
		[Address(RVA = "0x59B0A70", Offset = "0x59AFA70", VA = "0x59B0A70", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum$$get_ClassName): clean
			return "TextOverflowEnum";
		}
	}

	[Token(Token = "0x17000890")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003115")]
		[Address(RVA = "0x59B0AA0", Offset = "0x59AFAA0", VA = "0x59B0AA0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000891")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003116")]
		[Address(RVA = "0x59B0AB0", Offset = "0x59AFAB0", VA = "0x59B0AB0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000892")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003117")]
		[Address(RVA = "0x59B0AC0", Offset = "0x59AFAC0", VA = "0x59B0AC0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003111")]
	[Address(RVA = "0x59B09E0", Offset = "0x59AF9E0", VA = "0x59B09E0")]
	public CustomLogicTextOverflowEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c (CustomLogic.CustomLogicTextOverflowEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ad2 == false) {
			Il2CppMethodInitialized_07546ad2 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTextOverflowEnum.c.

	// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Clip");
		__this.Add((Il2CppObject *)"Ellipsis");
		CustomLogicTextOverflowEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$<__CreatePropertyBinding__Clip>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Clip_g____getter_2_0(CustomLogicTextOverflowEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$<__CreatePropertyBinding__Ellipsis>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Ellipsis_g____getter_3_0(CustomLogicTextOverflowEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
