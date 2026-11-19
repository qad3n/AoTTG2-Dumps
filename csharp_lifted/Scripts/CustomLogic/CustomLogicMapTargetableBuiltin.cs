// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicMapTargetableBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapTargetableBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200049E")]
[CompilerGenerated]
internal class CustomLogicMapTargetableBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200049F")]
	public static class Factory
	{
		[Token(Token = "0x6001F73")]
		[Address(RVA = "0x58FFC00", Offset = "0x58FEC00", VA = "0x58FFC00")]
		public static CustomLogicMapTargetableBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapTargetableBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004A0")]
	public static class Bindings
	{
		[Token(Token = "0x40016B3")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001F74")]
		[Address(RVA = "0x58FFC90", Offset = "0x58FEC90", VA = "0x58FFC90")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicMapTargetableBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			if (Il2CppMethodInitialized_07545e6f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicMapTargetableBuiltin.Bindings)) ;
				Il2CppMethodInitialized_07545e6f = true;
			}
			bVar1 = (name == "Team");
			if (bVar1) {
				if ((typeof(CustomLogicMapTargetableBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicMapTargetableBuiltin.Bindings.__CreatePropertyBinding__Team();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicMapTargetableBuiltin.Bindings.__CreatePropertyBinding__Team();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Position");
			if (bVar1) {
				if ((typeof(CustomLogicMapTargetableBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicMapTargetableBuiltin.Bindings.__CreatePropertyBinding__Position();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicMapTargetableBuiltin.Bindings.__CreatePropertyBinding__Position();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Enabled");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapTargetableBuiltin not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicMapTargetableBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicMapTargetableBuiltin.Bindings.__CreatePropertyBinding__Enabled();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicMapTargetableBuiltin.Bindings.__CreatePropertyBinding__Enabled();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6001F75")]
		[Address(RVA = "0x58FFE20", Offset = "0x58FEE20", VA = "0x58FFE20")]
		public static CLPropertyBinding<CustomLogicMapTargetableBuiltin> __CreatePropertyBinding__Team()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Team): 5 lines keep C-only constructs
			Func<CustomLogicMapTargetableBuiltin, object> __this;
			Action<CustomLogicMapTargetableBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapTargetableBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e70 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Action<CustomLogicMapTargetableBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e70 = true;
			}
			__this = new Func<CustomLogicMapTargetableBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_2);
			__this_00 = new Action<CustomLogicMapTargetableBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_2);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicMapTargetableBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F76")]
		[Address(RVA = "0x58FFF00", Offset = "0x58FEF00", VA = "0x58FFF00")]
		public static CLPropertyBinding<CustomLogicMapTargetableBuiltin> __CreatePropertyBinding__Position()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Position): 3 lines keep C-only constructs
			Func<CustomLogicMapTargetableBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMapTargetableBuiltin> __this_00;

			__this = new Func<CustomLogicMapTargetableBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Position_g____gett);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicMapTargetableBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001F77")]
		[Address(RVA = "0x58FFFA0", Offset = "0x58FEFA0", VA = "0x58FFFA0")]
		public static CLPropertyBinding<CustomLogicMapTargetableBuiltin> __CreatePropertyBinding__Enabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Enabled): 5 lines keep C-only constructs
			Func<CustomLogicMapTargetableBuiltin, object> __this;
			Action<CustomLogicMapTargetableBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapTargetableBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e72 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Action<CustomLogicMapTargetableBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e72 = true;
			}
			__this = new Func<CustomLogicMapTargetableBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____gette);
			__this_00 = new Action<CustomLogicMapTargetableBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____sette);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicMapTargetableBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}
	}

	[Token(Token = "0x17000391")]
	public GameObject GameObject
	{
		[Token(Token = "0x6001F67")]
		[Address(RVA = "0x58FFA00", Offset = "0x58FEA00", VA = "0x58FFA00")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_GameObject): clean
			return this._GameObject_k__BackingField;
		}
	}

	[Token(Token = "0x17000392")]
	public MapTargetable Value
	{
		[Token(Token = "0x6001F68")]
		[Address(RVA = "0x58FFA10", Offset = "0x58FEA10", VA = "0x58FFA10")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_Value): clean
			return this._Value_k__BackingField;
		}
	}

	[Token(Token = "0x17000393")]
	public string Team
	{
		[Token(Token = "0x6001F6A")]
		[Address(RVA = "0x58FFAA0", Offset = "0x58FEAA0", VA = "0x58FFAA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_Team): clean
			MapTargetable pMVar1;

			pMVar1 = this._Value_k__BackingField;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1._Team_k__BackingField;
		}
		[Token(Token = "0x6001F6B")]
		[Address(RVA = "0x58FFAC0", Offset = "0x58FEAC0", VA = "0x58FFAC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$set_Team): clean
			MapTargetable pMVar1;

			pMVar1 = this._Value_k__BackingField;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			pMVar1._Team_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000394")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x6001F6C")]
		[Address(RVA = "0x58FFAE0", Offset = "0x58FEAE0", VA = "0x58FFAE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_Position): clean
			MapTargetable __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this._Value_k__BackingField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.GetPosition();
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
	}

	[Token(Token = "0x17000395")]
	public new bool Enabled
	{
		[Token(Token = "0x6001F6D")]
		[Address(RVA = "0x58FFB60", Offset = "0x58FEB60", VA = "0x58FFB60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_Enabled): clean
			MapTargetable pMVar1;

			pMVar1 = this._Value_k__BackingField;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1._Enabled_k__BackingField;
		}
		[Token(Token = "0x6001F6E")]
		[Address(RVA = "0x58FFB80", Offset = "0x58FEB80", VA = "0x58FFB80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$set_Enabled): clean
			MapTargetable pMVar1;

			pMVar1 = this._Value_k__BackingField;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			pMVar1._Enabled_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000396")]
	public override string ClassName
	{
		[Token(Token = "0x6001F6F")]
		[Address(RVA = "0x58FFBA0", Offset = "0x58FEBA0", VA = "0x58FFBA0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_ClassName): clean
			return "MapTargetable";
		}
	}

	[Token(Token = "0x17000397")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001F70")]
		[Address(RVA = "0x58FFBD0", Offset = "0x58FEBD0", VA = "0x58FFBD0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000398")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001F71")]
		[Address(RVA = "0x58FFBE0", Offset = "0x58FEBE0", VA = "0x58FFBE0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000399")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001F72")]
		[Address(RVA = "0x58FFBF0", Offset = "0x58FEBF0", VA = "0x58FFBF0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001F69")]
	[Address(RVA = "0x58FFA20", Offset = "0x58FEA20", VA = "0x58FFA20")]
	public CustomLogicMapTargetableBuiltin(GameObject gameObject, MapTargetable mapTargetable)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c (CustomLogic.CustomLogicMapTargetableBuiltin$$.ctor): clean
		base();
		this._GameObject_k__BackingField = gameObject;
		this._Value_k__BackingField = mapTargetable;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicMapTargetableBuiltin.c.

	// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		if (Il2CppMethodInitialized_07545e73 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicMapTargetableBuiltin.Bindings)) ;
			Il2CppMethodInitialized_07545e73 = true;
		}
		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Team");
		__this.Add((Il2CppObject *)"Position");
		__this.Add((Il2CppObject *)"Enabled");
		CustomLogicMapTargetableBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Team_g____getter_2_0(CustomLogicMapTargetableBuiltin __i)
	{
		MapTargetable pMVar1;

		if ((__i == null) ||(pMVar1 = __i._Value_k__BackingField, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pMVar1._Team_k__BackingField;
	}

	// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Team_g____setter_2_1(CustomLogicMapTargetableBuiltin __i, object __v)
	{
		MapTargetable pMVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(pMVar1 = __i._Value_k__BackingField, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		pMVar1._Team_k__BackingField = pSVar2;
		return;
	}

	// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Position_g____getter_3_0(CustomLogicMapTargetableBuiltin __i)
	{
		MapTargetable __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i._Value_k__BackingField;
			if (__this != null) {
				value = __this.GetPosition();
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Enabled_g____getter_4_0(CustomLogicMapTargetableBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i._Value_k__BackingField == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Enabled_g____setter_4_1(CustomLogicMapTargetableBuiltin __i, object __v)
	{
		MapTargetable pMVar1;
		bool bVar2;

		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(pMVar1 = __i._Value_k__BackingField, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		pMVar1._Enabled_k__BackingField = bVar2;
		return;
	}
}
