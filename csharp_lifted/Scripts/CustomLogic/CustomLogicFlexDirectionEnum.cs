// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicFlexDirectionEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000508")]
[CompilerGenerated]
internal class CustomLogicFlexDirectionEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000509")]
	public static class Factory
	{
		[Token(Token = "0x60028CF")]
		[Address(RVA = "0x59635C0", Offset = "0x59625C0", VA = "0x59635C0")]
		public static CustomLogicFlexDirectionEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicFlexDirectionEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicFlexDirectionEnum();
			return (CustomLogicFlexDirectionEnum)__this;
		}
	}

	[Token(Token = "0x200050A")]
	public static class Bindings
	{
		[Token(Token = "0x40017C9")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60028D0")]
		[Address(RVA = "0x59636E0", Offset = "0x59626E0", VA = "0x59636E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicFlexDirectionEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Row");
			if (bVar1) {
				if ((typeof(CustomLogicFlexDirectionEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicFlexDirectionEnum.Bindings.__CreatePropertyBinding__Row();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicFlexDirectionEnum.Bindings.__CreatePropertyBinding__Row();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Column");
			if (bVar1) {
				if ((typeof(CustomLogicFlexDirectionEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicFlexDirectionEnum.Bindings.__CreatePropertyBinding__Column();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicFlexDirectionEnum.Bindings.__CreatePropertyBinding__Column();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "RowReverse");
			if (bVar1) {
				if ((typeof(CustomLogicFlexDirectionEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicFlexDirectionEnum.Bindings.__CreatePropertyBinding__RowReverse();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicFlexDirectionEnum.Bindings.__CreatePropertyBinding__RowReverse();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ColumnReverse");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicFlexDirectionEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicFlexDirectionEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicFlexDirectionEnum.Bindings.__CreatePropertyBinding__ColumnReverse();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicFlexDirectionEnum.Bindings.__CreatePropertyBinding__ColumnReverse();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60028D1")]
		[Address(RVA = "0x59638C0", Offset = "0x59628C0", VA = "0x59638C0")]
		public static CLPropertyBinding<CustomLogicFlexDirectionEnum> __CreatePropertyBinding__Row()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Row): 2 lines keep C-only constructs
			Func<CustomLogicFlexDirectionEnum, object> __this;
			CLPropertyBinding<CustomLogicFlexDirectionEnum> __this_00;

			__this = new Func<CustomLogicFlexDirectionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Row_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicFlexDirectionEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028D2")]
		[Address(RVA = "0x5963960", Offset = "0x5962960", VA = "0x5963960")]
		public static CLPropertyBinding<CustomLogicFlexDirectionEnum> __CreatePropertyBinding__Column()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Column): 2 lines keep C-only constructs
			Func<CustomLogicFlexDirectionEnum, object> __this;
			CLPropertyBinding<CustomLogicFlexDirectionEnum> __this_00;

			__this = new Func<CustomLogicFlexDirectionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Column_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicFlexDirectionEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028D3")]
		[Address(RVA = "0x5963A00", Offset = "0x5962A00", VA = "0x5963A00")]
		public static CLPropertyBinding<CustomLogicFlexDirectionEnum> __CreatePropertyBinding__RowReverse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__RowReverse): 2 lines keep C-only constructs
			Func<CustomLogicFlexDirectionEnum, object> __this;
			CLPropertyBinding<CustomLogicFlexDirectionEnum> __this_00;

			__this = new Func<CustomLogicFlexDirectionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__RowReverse_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicFlexDirectionEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028D4")]
		[Address(RVA = "0x5963AA0", Offset = "0x5962AA0", VA = "0x5963AA0")]
		public static CLPropertyBinding<CustomLogicFlexDirectionEnum> __CreatePropertyBinding__ColumnReverse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__ColumnReverse): 2 lines keep C-only constructs
			Func<CustomLogicFlexDirectionEnum, object> __this;
			CLPropertyBinding<CustomLogicFlexDirectionEnum> __this_00;

			__this = new Func<CustomLogicFlexDirectionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__ColumnReverse_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicFlexDirectionEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}
	}

	[Token(Token = "0x17000596")]
	public static int Row
	{
		[Token(Token = "0x60028C7")]
		[Address(RVA = "0x5963520", Offset = "0x5962520", VA = "0x5963520")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$get_Row): clean
			return 2;
		}
	}

	[Token(Token = "0x17000597")]
	public static int Column
	{
		[Token(Token = "0x60028C8")]
		[Address(RVA = "0x5963530", Offset = "0x5962530", VA = "0x5963530")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$get_Column): clean
			return 0;
		}
	}

	[Token(Token = "0x17000598")]
	public static int RowReverse
	{
		[Token(Token = "0x60028C9")]
		[Address(RVA = "0x5963540", Offset = "0x5962540", VA = "0x5963540")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$get_RowReverse): clean
			return 3;
		}
	}

	[Token(Token = "0x17000599")]
	public static int ColumnReverse
	{
		[Token(Token = "0x60028CA")]
		[Address(RVA = "0x5963550", Offset = "0x5962550", VA = "0x5963550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$get_ColumnReverse): clean
			return 1;
		}
	}

	[Token(Token = "0x1700059A")]
	public override string ClassName
	{
		[Token(Token = "0x60028CB")]
		[Address(RVA = "0x5963560", Offset = "0x5962560", VA = "0x5963560", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$get_ClassName): clean
			return "FlexDirectionEnum";
		}
	}

	[Token(Token = "0x1700059B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60028CC")]
		[Address(RVA = "0x5963590", Offset = "0x5962590", VA = "0x5963590", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700059C")]
	public override bool IsStatic
	{
		[Token(Token = "0x60028CD")]
		[Address(RVA = "0x59635A0", Offset = "0x59625A0", VA = "0x59635A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700059D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60028CE")]
		[Address(RVA = "0x59635B0", Offset = "0x59625B0", VA = "0x59635B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60028C6")]
	[Address(RVA = "0x59634B0", Offset = "0x59624B0", VA = "0x59634B0")]
	public CustomLogicFlexDirectionEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c (CustomLogic.CustomLogicFlexDirectionEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754639c == false) {
			Il2CppMethodInitialized_0754639c = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicFlexDirectionEnum.c.

	// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Row");
		__this.Add((Il2CppObject *)"Column");
		__this.Add((Il2CppObject *)"RowReverse");
		__this.Add((Il2CppObject *)"ColumnReverse");
		CustomLogicFlexDirectionEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Row>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Row_g____getter_2_0(CustomLogicFlexDirectionEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Column>g____getter|3_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Column_g____getter_3_0(CustomLogicFlexDirectionEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__RowReverse>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__RowReverse_g____getter_4_0(CustomLogicFlexDirectionEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__ColumnReverse>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__ColumnReverse_g____getter_5_0(CustomLogicFlexDirectionEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
