// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicInputErenShifterEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000530")]
[CompilerGenerated]
internal class CustomLogicInputErenShifterEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000531")]
	public static class Factory
	{
		[Token(Token = "0x6002BD4")]
		[Address(RVA = "0x5981780", Offset = "0x5980780", VA = "0x5981780")]
		public static CustomLogicInputErenShifterEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicInputErenShifterEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputErenShifterEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicInputErenShifterEnum();
			return __this;
		}
	}

	[Token(Token = "0x2000532")]
	public static class Bindings
	{
		[Token(Token = "0x4001805")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002BD5")]
		[Address(RVA = "0x59818A0", Offset = "0x59808A0", VA = "0x59818A0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicInputErenShifterEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			if (Il2CppMethodInitialized_07546694 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicInputErenShifterEnum.Bindings)) ;
				Il2CppMethodInitialized_07546694 = true;
			}
			bVar1 = (name == "Kick");
			if (bVar1) {
				if ((typeof(CustomLogicInputErenShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicInputErenShifterEnum.Bindings.__CreatePropertyBinding__Kick();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicInputErenShifterEnum.Bindings.__CreatePropertyBinding__Kick();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Jump");
			if (bVar1) {
				if ((typeof(CustomLogicInputErenShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicInputErenShifterEnum.Bindings.__CreatePropertyBinding__Jump();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicInputErenShifterEnum.Bindings.__CreatePropertyBinding__Jump();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Walk");
			if (bVar1) {
				if ((typeof(CustomLogicInputErenShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicInputErenShifterEnum.Bindings.__CreatePropertyBinding__Walk();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicInputErenShifterEnum.Bindings.__CreatePropertyBinding__Walk();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "AttackCombo");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputErenShifterEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicInputErenShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicInputErenShifterEnum.Bindings.__CreatePropertyBinding__AttackCombo();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicInputErenShifterEnum.Bindings.__CreatePropertyBinding__AttackCombo();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002BD6")]
		[Address(RVA = "0x5981A80", Offset = "0x5980A80", VA = "0x5981A80")]
		public static CLPropertyBinding<CustomLogicInputErenShifterEnum> __CreatePropertyBinding__Kick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Kick): 3 lines keep C-only constructs
			Func<CustomLogicInputErenShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputErenShifterEnum> __this_00;

			__this = new Func<CustomLogicInputErenShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputErenShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002BD7")]
		[Address(RVA = "0x5981B20", Offset = "0x5980B20", VA = "0x5981B20")]
		public static CLPropertyBinding<CustomLogicInputErenShifterEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Jump): 3 lines keep C-only constructs
			Func<CustomLogicInputErenShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputErenShifterEnum> __this_00;

			__this = new Func<CustomLogicInputErenShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputErenShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002BD8")]
		[Address(RVA = "0x5981BC0", Offset = "0x5980BC0", VA = "0x5981BC0")]
		public static CLPropertyBinding<CustomLogicInputErenShifterEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Walk): 3 lines keep C-only constructs
			Func<CustomLogicInputErenShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputErenShifterEnum> __this_00;

			__this = new Func<CustomLogicInputErenShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputErenShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002BD9")]
		[Address(RVA = "0x5981C60", Offset = "0x5980C60", VA = "0x5981C60")]
		public static CLPropertyBinding<CustomLogicInputErenShifterEnum> __CreatePropertyBinding__AttackCombo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo): 3 lines keep C-only constructs
			Func<CustomLogicInputErenShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputErenShifterEnum> __this_00;

			__this = new Func<CustomLogicInputErenShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g____g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputErenShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x4001801")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string KickValue;

	[Token(Token = "0x4001802")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string JumpValue;

	[Token(Token = "0x4001803")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string WalkValue;

	[Token(Token = "0x4001804")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string AttackComboValue;

	[Token(Token = "0x170006A8")]
	public static string Kick
	{
		[Token(Token = "0x6002BCB")]
		[Address(RVA = "0x5981470", Offset = "0x5980470", VA = "0x5981470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$get_Kick): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754668d == false) {
				Il2CppMethodInitialized_0754668d = true;
				uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputErenShifterEnum.KickValue;
			}
			return *(String*)(typeof(CustomLogicInputErenShifterEnum)).static_fields;
		}
	}

	[Token(Token = "0x170006A9")]
	public static string Jump
	{
		[Token(Token = "0x6002BCC")]
		[Address(RVA = "0x59814E0", Offset = "0x59804E0", VA = "0x59814E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$get_Jump): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754668e == false) {
				Il2CppMethodInitialized_0754668e = true;
				uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputErenShifterEnum.JumpValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputErenShifterEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x170006AA")]
	public static string Walk
	{
		[Token(Token = "0x6002BCD")]
		[Address(RVA = "0x5981550", Offset = "0x5980550", VA = "0x5981550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$get_Walk): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754668f == false) {
				Il2CppMethodInitialized_0754668f = true;
				uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputErenShifterEnum.WalkValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputErenShifterEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170006AB")]
	public static string AttackCombo
	{
		[Token(Token = "0x6002BCE")]
		[Address(RVA = "0x59815C0", Offset = "0x59805C0", VA = "0x59815C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$get_AttackCombo): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546690 == false) {
				Il2CppMethodInitialized_07546690 = true;
				uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputErenShifterEnum.AttackComboValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputErenShifterEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x170006AC")]
	public override string ClassName
	{
		[Token(Token = "0x6002BCF")]
		[Address(RVA = "0x5981630", Offset = "0x5980630", VA = "0x5981630", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$get_ClassName): clean
			return "InputErenShifterEnum";
		}
	}

	[Token(Token = "0x170006AD")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002BD0")]
		[Address(RVA = "0x5981660", Offset = "0x5980660", VA = "0x5981660", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170006AE")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002BD1")]
		[Address(RVA = "0x5981670", Offset = "0x5980670", VA = "0x5981670", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170006AF")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002BD2")]
		[Address(RVA = "0x5981680", Offset = "0x5980680", VA = "0x5981680", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002BCA")]
	[Address(RVA = "0x5981400", Offset = "0x5980400", VA = "0x5981400")]
	public CustomLogicInputErenShifterEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c (CustomLogic.CustomLogicInputErenShifterEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754668c == false) {
			Il2CppMethodInitialized_0754668c = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicInputErenShifterEnum.c.

	// CustomLogic.CustomLogicInputErenShifterEnum$$.cctor: clean
	static CustomLogicInputErenShifterEnum()
	{
		CustomLogic_CustomLogicInputErenShifterEnum_StaticFields pCVar1;

		CustomLogicInputErenShifterEnum.KickValue = "ErenShifter/Kick";
		pCVar1 = typeof(CustomLogicInputErenShifterEnum).static_fields;
		pCVar1.JumpValue = "ErenShifter/Jump";
		pCVar1 = typeof(CustomLogicInputErenShifterEnum).static_fields;
		pCVar1.WalkValue = "ErenShifter/Walk";
		pCVar1 = typeof(CustomLogicInputErenShifterEnum).static_fields;
		pCVar1.AttackComboValue = "ErenShifter/AttackCombo";
		return;
	}

	// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		if (Il2CppMethodInitialized_07546699 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicInputErenShifterEnum.Bindings)) ;
			Il2CppMethodInitialized_07546699 = true;
		}
		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Kick");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Walk");
		__this.Add((Il2CppObject *)"AttackCombo");
		CustomLogicInputErenShifterEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Kick_g____getter_2_0(CustomLogicInputErenShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754669a == false) {
			Il2CppMethodInitialized_0754669a = true;
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754699c == false) {
			Il2CppMethodInitialized_0754699c = true;
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputErenShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputErenShifterEnum.KickValue;
		}
		return *(object*)(typeof(CustomLogicInputErenShifterEnum)).static_fields;
	}

	// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_3_0(CustomLogicInputErenShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754669b == false) {
			Il2CppMethodInitialized_0754669b = true;
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754699d == false) {
			Il2CppMethodInitialized_0754699d = true;
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputErenShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputErenShifterEnum.JumpValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputErenShifterEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_4_0(CustomLogicInputErenShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754669c == false) {
			Il2CppMethodInitialized_0754669c = true;
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754699e == false) {
			Il2CppMethodInitialized_0754699e = true;
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputErenShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputErenShifterEnum.WalkValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputErenShifterEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__AttackCombo_g____getter_5_0(CustomLogicInputErenShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754669d == false) {
			Il2CppMethodInitialized_0754669d = true;
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754699f == false) {
			Il2CppMethodInitialized_0754699f = true;
			uVar1 = (typeof(CustomLogicInputErenShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputErenShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputErenShifterEnum.AttackComboValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputErenShifterEnum)).static_fields + 0x18);
	}
}
