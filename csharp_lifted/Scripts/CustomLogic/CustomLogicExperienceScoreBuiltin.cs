// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicExperienceScoreBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;

namespace CustomLogic;

[Token(Token = "0x20005B0")]
[CompilerGenerated]
internal class CustomLogicExperienceScoreBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005B1")]
	public static class Factory
	{
		[Token(Token = "0x6003404")]
		[Address(RVA = "0x59CB250", Offset = "0x59CA250", VA = "0x59CB250")]
		public static CustomLogicExperienceScoreBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicExperienceScoreBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20005B2")]
	public static class Bindings
	{
		[Token(Token = "0x40018BB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003405")]
		[Address(RVA = "0x59CB2E0", Offset = "0x59CA2E0", VA = "0x59CB2E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicExperienceScoreBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "ExperienceID");
			if (bVar1) {
				if ((typeof(CustomLogicExperienceScoreBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicExperienceScoreBuiltin.Bindings.__CreatePropertyBinding__ExperienceID();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicExperienceScoreBuiltin.Bindings.__CreatePropertyBinding__ExperienceID();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Score");
			if (bVar1) {
				if ((typeof(CustomLogicExperienceScoreBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicExperienceScoreBuiltin.Bindings.__CreatePropertyBinding__Score();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicExperienceScoreBuiltin.Bindings.__CreatePropertyBinding__Score();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Unit");
			if (bVar1) {
				if ((typeof(CustomLogicExperienceScoreBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicExperienceScoreBuiltin.Bindings.__CreatePropertyBinding__Unit();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicExperienceScoreBuiltin.Bindings.__CreatePropertyBinding__Unit();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "LowerIsBetter");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicExperienceScoreBuiltin not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicExperienceScoreBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicExperienceScoreBuiltin.Bindings.__CreatePropertyBinding__LowerIsBetter();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicExperienceScoreBuiltin.Bindings.__CreatePropertyBinding__LowerIsBetter();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6003406")]
		[Address(RVA = "0x59CB4C0", Offset = "0x59CA4C0", VA = "0x59CB4C0")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__ExperienceID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__ExperienceID): 4 lines keep C-only constructs
			Func<CustomLogicExperienceScoreBuiltin, object> __this;
			CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d0c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicExperienceScoreBuiltin, object>)) ;
				Il2CppMethodInitialized_07546d0c = true;
			}
			__this = new Func<CustomLogicExperienceScoreBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicExperienceScoreBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003407")]
		[Address(RVA = "0x59CB560", Offset = "0x59CA560", VA = "0x59CB560")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__Score()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__Score): 4 lines keep C-only constructs
			Func<CustomLogicExperienceScoreBuiltin, object> __this;
			CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d0d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicExperienceScoreBuiltin, object>)) ;
				Il2CppMethodInitialized_07546d0d = true;
			}
			__this = new Func<CustomLogicExperienceScoreBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Score_g____gette);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicExperienceScoreBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003408")]
		[Address(RVA = "0x59CB600", Offset = "0x59CA600", VA = "0x59CB600")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__Unit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__Unit): 4 lines keep C-only constructs
			Func<CustomLogicExperienceScoreBuiltin, object> __this;
			CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d0e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicExperienceScoreBuiltin, object>)) ;
				Il2CppMethodInitialized_07546d0e = true;
			}
			__this = new Func<CustomLogicExperienceScoreBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Unit_g____getter);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicExperienceScoreBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003409")]
		[Address(RVA = "0x59CB6A0", Offset = "0x59CA6A0", VA = "0x59CB6A0")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__LowerIsBetter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__LowerIsBetter): 4 lines keep C-only constructs
			Func<CustomLogicExperienceScoreBuiltin, object> __this;
			CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d0f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicExperienceScoreBuiltin, object>)) ;
				Il2CppMethodInitialized_07546d0f = true;
			}
			__this = new Func<CustomLogicExperienceScoreBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__LowerIsBetter_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicExperienceScoreBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x40018BA")]
	[FieldOffset(Offset = "0x30")]
	private readonly ExperienceScoreRecord _record;

	[Token(Token = "0x17000981")]
	public string ExperienceID
	{
		[Token(Token = "0x60033FC")]
		[Address(RVA = "0x59CB170", Offset = "0x59CA170", VA = "0x59CB170")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$get_ExperienceID): clean
			ExperienceScoreRecord pSVar1;

			pSVar1 = this._record;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1.ExperienceID;
		}
	}

	[Token(Token = "0x17000982")]
	public float Score
	{
		[Token(Token = "0x60033FD")]
		[Address(RVA = "0x59CB190", Offset = "0x59CA190", VA = "0x59CB190")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$get_Score): clean
			ExperienceScoreRecord pSVar1;

			pSVar1 = this._record;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1.Score;
		}
	}

	[Token(Token = "0x17000983")]
	public string Unit
	{
		[Token(Token = "0x60033FE")]
		[Address(RVA = "0x59CB1B0", Offset = "0x59CA1B0", VA = "0x59CB1B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$get_Unit): clean
			ExperienceScoreRecord pSVar1;

			pSVar1 = this._record;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1.Unit;
		}
	}

	[Token(Token = "0x17000984")]
	public bool LowerIsBetter
	{
		[Token(Token = "0x60033FF")]
		[Address(RVA = "0x59CB1D0", Offset = "0x59CA1D0", VA = "0x59CB1D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$get_LowerIsBetter): clean
			ExperienceScoreRecord pSVar1;

			pSVar1 = this._record;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1.LowerIsBetter;
		}
	}

	[Token(Token = "0x17000985")]
	public override string ClassName
	{
		[Token(Token = "0x6003400")]
		[Address(RVA = "0x59CB1F0", Offset = "0x59CA1F0", VA = "0x59CB1F0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$get_ClassName): clean
			return "ExperienceScore";
		}
	}

	[Token(Token = "0x17000986")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003401")]
		[Address(RVA = "0x59CB220", Offset = "0x59CA220", VA = "0x59CB220", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000987")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003402")]
		[Address(RVA = "0x59CB230", Offset = "0x59CA230", VA = "0x59CB230", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000988")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003403")]
		[Address(RVA = "0x59CB240", Offset = "0x59CA240", VA = "0x59CB240", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60033FB")]
	[Address(RVA = "0x59CB100", Offset = "0x59CA100", VA = "0x59CB100")]
	public CustomLogicExperienceScoreBuiltin(ExperienceScoreRecord record)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c (CustomLogic.CustomLogicExperienceScoreBuiltin$$.ctor): clean
		base();
		this._record = record;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c.

	// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"ExperienceID");
		__this.Add((Il2CppObject *)"Score");
		__this.Add((Il2CppObject *)"Unit");
		__this.Add((Il2CppObject *)"LowerIsBetter");
		CustomLogicExperienceScoreBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__ExperienceID>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__ExperienceID_g____getter_2_0(CustomLogicExperienceScoreBuiltin __i)
	{
		ExperienceScoreRecord pSVar1;

		if ((__i == null) ||(pSVar1 = __i._record, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pSVar1.ExperienceID;
	}

	// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__Score>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Score_g____getter_3_0(CustomLogicExperienceScoreBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i._record == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__Unit>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Unit_g____getter_4_0(CustomLogicExperienceScoreBuiltin __i)
	{
		ExperienceScoreRecord pSVar1;

		if ((__i == null) ||(pSVar1 = __i._record, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pSVar1.Unit;
	}

	// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__LowerIsBetter>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__LowerIsBetter_g____getter_5_0(CustomLogicExperienceScoreBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i._record == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}
}
