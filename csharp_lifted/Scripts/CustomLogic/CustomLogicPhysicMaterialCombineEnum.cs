// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPhysicMaterialCombineEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000554")]
[CompilerGenerated]
internal class CustomLogicPhysicMaterialCombineEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000555")]
	public static class Factory
	{
		[Token(Token = "0x6002E05")]
		[Address(RVA = "0x5998610", Offset = "0x5997610", VA = "0x5998610")]
		public static CustomLogicPhysicMaterialCombineEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum.Factory$$CreateInstance): 7 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicMaterialCombineEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = (BuiltinClassInstance)il2cpp_codegen_object_new(typeof(CustomLogicPhysicMaterialCombineEnum)) ;
			__this = new BuiltinClassInstance();
			return (CustomLogicPhysicMaterialCombineEnum)__this;
		}
	}

	[Token(Token = "0x2000556")]
	public static class Bindings
	{
		[Token(Token = "0x4001879")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002E06")]
		[Address(RVA = "0x5998730", Offset = "0x5997730", VA = "0x5998730")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Minimum");
			if (bVar1) {
				if ((typeof(CustomLogicPhysicMaterialCombineEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicPhysicMaterialCombineEnum.Bindings.__CreatePropertyBinding__Minimum();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicPhysicMaterialCombineEnum.Bindings.__CreatePropertyBinding__Minimum();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Multiply");
			if (bVar1) {
				if ((typeof(CustomLogicPhysicMaterialCombineEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicPhysicMaterialCombineEnum.Bindings.__CreatePropertyBinding__Multiply();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicPhysicMaterialCombineEnum.Bindings.__CreatePropertyBinding__Multiply();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Maximum");
			if (bVar1) {
				if ((typeof(CustomLogicPhysicMaterialCombineEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicPhysicMaterialCombineEnum.Bindings.__CreatePropertyBinding__Maximum();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicPhysicMaterialCombineEnum.Bindings.__CreatePropertyBinding__Maximum();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Average");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicMaterialCombineEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_CreateMemberBinding) ;
				throw (object)__this;
			}
			if ((typeof(CustomLogicPhysicMaterialCombineEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
				pCVar2 = CustomLogicPhysicMaterialCombineEnum.Bindings.__CreatePropertyBinding__Average();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicPhysicMaterialCombineEnum.Bindings.__CreatePropertyBinding__Average();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002E07")]
		[Address(RVA = "0x5998910", Offset = "0x5997910", VA = "0x5998910")]
		public static CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> __CreatePropertyBinding__Minimum()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Minimum): 3 lines keep C-only constructs
			Func<CustomLogicPhysicMaterialCombineEnum, object> __this;
			CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> __this_00;

			__this = new Func<CustomLogicPhysicMaterialCombineEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Minimum_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002E08")]
		[Address(RVA = "0x59989B0", Offset = "0x59979B0", VA = "0x59989B0")]
		public static CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> __CreatePropertyBinding__Multiply()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Multiply): 3 lines keep C-only constructs
			Func<CustomLogicPhysicMaterialCombineEnum, object> __this;
			CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> __this_00;

			__this = new Func<CustomLogicPhysicMaterialCombineEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Multiply_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002E09")]
		[Address(RVA = "0x5998A50", Offset = "0x5997A50", VA = "0x5998A50")]
		public static CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> __CreatePropertyBinding__Maximum()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Maximum): 3 lines keep C-only constructs
			Func<CustomLogicPhysicMaterialCombineEnum, object> __this;
			CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> __this_00;

			__this = new Func<CustomLogicPhysicMaterialCombineEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Maximum_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002E0A")]
		[Address(RVA = "0x5998AF0", Offset = "0x5997AF0", VA = "0x5998AF0")]
		public static CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> __CreatePropertyBinding__Average()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Average): 3 lines keep C-only constructs
			Func<CustomLogicPhysicMaterialCombineEnum, object> __this;
			CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum> __this_00;

			__this = new Func<CustomLogicPhysicMaterialCombineEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Average_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicPhysicMaterialCombineEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000771")]
	public static int Minimum
	{
		[Token(Token = "0x6002DFD")]
		[Address(RVA = "0x5998570", Offset = "0x5997570", VA = "0x5998570")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Minimum): clean
			return 2;
		}
	}

	[Token(Token = "0x17000772")]
	public static int Multiply
	{
		[Token(Token = "0x6002DFE")]
		[Address(RVA = "0x5998580", Offset = "0x5997580", VA = "0x5998580")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Multiply): clean
			return 1;
		}
	}

	[Token(Token = "0x17000773")]
	public static int Maximum
	{
		[Token(Token = "0x6002DFF")]
		[Address(RVA = "0x5998590", Offset = "0x5997590", VA = "0x5998590")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Maximum): clean
			return 3;
		}
	}

	[Token(Token = "0x17000774")]
	public static int Average
	{
		[Token(Token = "0x6002E00")]
		[Address(RVA = "0x59985A0", Offset = "0x59975A0", VA = "0x59985A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Average): clean
			return 0;
		}
	}

	[Token(Token = "0x17000775")]
	public override string ClassName
	{
		[Token(Token = "0x6002E01")]
		[Address(RVA = "0x59985B0", Offset = "0x59975B0", VA = "0x59985B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_ClassName): clean
			return "PhysicMaterialCombineEnum";
		}
	}

	[Token(Token = "0x17000776")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002E02")]
		[Address(RVA = "0x59985E0", Offset = "0x59975E0", VA = "0x59985E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000777")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002E03")]
		[Address(RVA = "0x59985F0", Offset = "0x59975F0", VA = "0x59985F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000778")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002E04")]
		[Address(RVA = "0x5998600", Offset = "0x5997600", VA = "0x5998600", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002DFC")]
	[Address(RVA = "0x5998500", Offset = "0x5997500", VA = "0x5998500")]
	public CustomLogicPhysicMaterialCombineEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c (CustomLogic.CustomLogicPhysicMaterialCombineEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546863 == false) {
			Il2CppMethodInitialized_07546863 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicPhysicMaterialCombineEnum.c.

	// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Minimum");
		__this.Add((Il2CppObject *)"Multiply");
		__this.Add((Il2CppObject *)"Maximum");
		__this.Add((Il2CppObject *)"Average");
		CustomLogicPhysicMaterialCombineEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Minimum>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Minimum_g____getter_2_0(CustomLogicPhysicMaterialCombineEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Multiply>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Multiply_g____getter_3_0(CustomLogicPhysicMaterialCombineEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Maximum>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Maximum_g____getter_4_0(CustomLogicPhysicMaterialCombineEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Average>g____getter|5_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Average_g____getter_5_0(CustomLogicPhysicMaterialCombineEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}
}
