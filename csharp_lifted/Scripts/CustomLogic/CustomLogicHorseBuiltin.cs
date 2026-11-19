// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHorseBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHorseBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004B5")]
[CompilerGenerated]
internal class CustomLogicHorseBuiltin : CustomLogicCharacterBuiltin
{
	[Token(Token = "0x20004B6")]
	public new static class Factory
	{
		[Token(Token = "0x60021AD")]
		[Address(RVA = "0x59174F0", Offset = "0x59164F0", VA = "0x59174F0")]
		public static CustomLogicHorseBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHorseBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004B7")]
	public new static class Bindings
	{
		[Token(Token = "0x40016FD")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60021AE")]
		[Address(RVA = "0x5917580", Offset = "0x5916580", VA = "0x5917580")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicHorseBuiltin> pCVar2;
			CLMethodBinding<CustomLogicHorseBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "RunSpeed");
			if (bVar1) {
				if ((typeof(CustomLogicHorseBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicHorseBuiltin.Bindings.__CreatePropertyBinding__RunSpeed();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicHorseBuiltin.Bindings.__CreatePropertyBinding__RunSpeed();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Follow");
			if (bVar1) {
				if ((typeof(CustomLogicHorseBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar3 = CustomLogicHorseBuiltin.Bindings.__CreateMethodBinding__Follow();
					return (ICLMemberBinding)pCVar3;
				}
				pCVar3 = CustomLogicHorseBuiltin.Bindings.__CreateMethodBinding__Follow();
				return (ICLMemberBinding)pCVar3;
			}
			bVar1 = (name == "Stay");
			if (bVar1) {
				if ((typeof(CustomLogicHorseBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar3 = CustomLogicHorseBuiltin.Bindings.__CreateMethodBinding__Stay() ;
					return (ICLMemberBinding)pCVar3;
				}
				pCVar3 = CustomLogicHorseBuiltin.Bindings.__CreateMethodBinding__Stay();
				return (ICLMemberBinding)pCVar3;
			}
			bVar1 = (name == "ComeTo");
			if (bVar1) {
				pCVar3 = CustomLogicHorseBuiltin.Bindings.__CreateMethodBinding__ComeTo() ;
				return (ICLMemberBinding)pCVar3;
			}
			bVar1 = (name == "MoveTo");
			if (bVar1) {
				pCVar3 = CustomLogicHorseBuiltin.Bindings.__CreateMethodBinding__MoveTo() ;
				return (ICLMemberBinding)pCVar3;
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHorseBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60021AF")]
		[Address(RVA = "0x59177B0", Offset = "0x59167B0", VA = "0x59177B0")]
		public static CLPropertyBinding<CustomLogicHorseBuiltin> __CreatePropertyBinding__RunSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreatePropertyBinding__RunSpeed): 3 lines keep C-only constructs
			Func<CustomLogicHorseBuiltin, object> __this;
			Action<CustomLogicHorseBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHorseBuiltin> __this_01;

			__this = new Func<CustomLogicHorseBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____getter_2_0);
			__this_00 = new Action<CustomLogicHorseBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicHorseBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60021B0")]
		[Address(RVA = "0x5917890", Offset = "0x5916890", VA = "0x5917890")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__Follow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__Follow): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHorseBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHorseBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHorseBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f9b == false) {
				Il2CppMethodInitialized_07545f9b = true;
				uVar1 = (typeof(CustomLogicHorseBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHorseBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHorseBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHorseBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHorseBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Follow_b__3_0);
				pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHorseBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60021B1")]
		[Address(RVA = "0x59179D0", Offset = "0x59169D0", VA = "0x59179D0")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__Stay()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__Stay): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHorseBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHorseBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHorseBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f9c == false) {
				Il2CppMethodInitialized_07545f9c = true;
				uVar1 = (typeof(CustomLogicHorseBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHorseBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHorseBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHorseBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHorseBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Stay_b__4_0);
				pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHorseBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60021B2")]
		[Address(RVA = "0x5917B10", Offset = "0x5916B10", VA = "0x5917B10")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__ComeTo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__ComeTo): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHorseBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHorseBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHorseBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f9d == false) {
				Il2CppMethodInitialized_07545f9d = true;
				uVar1 = (typeof(CustomLogicHorseBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHorseBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHorseBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHorseBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHorseBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__ComeTo_b__5_0);
				pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHorseBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60021B3")]
		[Address(RVA = "0x5917C50", Offset = "0x5916C50", VA = "0x5917C50")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__MoveTo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__MoveTo): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHorseBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHorseBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHorseBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f9e == false) {
				Il2CppMethodInitialized_07545f9e = true;
				uVar1 = (typeof(CustomLogicHorseBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHorseBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHorseBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHorseBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHorseBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__6_0);
				pCVar2 = typeof(CustomLogicHorseBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHorseBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40016FC")]
	[FieldOffset(Offset = "0x38")]
	public readonly Horse Horse;

	[Token(Token = "0x170003FD")]
	public float RunSpeed
	{
		[Token(Token = "0x60021A3")]
		[Address(RVA = "0x5917160", Offset = "0x5916160", VA = "0x5917160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$get_RunSpeed): clean
			Horse __this_00;
			float fVar1;

			__this_00 = this.Horse;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x60021A4")]
		[Address(RVA = "0x5917180", Offset = "0x5916180", VA = "0x5917180")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$set_RunSpeed): clean
			Horse pCVar1;
			bool bVar2;

			pCVar1 = this.Horse;
			bVar2 = ((Object)pCVar1 != null);
			if (bVar2) {
				pCVar1 = this.Horse;
				if (pCVar1 == null) {
		label_05a1721d: ;
					throw new NullReferenceException();
				}
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = this.Horse;
					if (pCVar1 == null) goto label_05a1721d;
					if (pCVar1.Dead == false) {
						pCVar1.RunSpeed = value;
						return;
					}
				}
			}
			return;
		}
	}

	[Token(Token = "0x170003FE")]
	public override string ClassName
	{
		[Token(Token = "0x60021A9")]
		[Address(RVA = "0x5917490", Offset = "0x5916490", VA = "0x5917490", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$get_ClassName): clean
			return "Horse";
		}
	}

	[Token(Token = "0x170003FF")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60021AA")]
		[Address(RVA = "0x59174C0", Offset = "0x59164C0", VA = "0x59174C0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000400")]
	public override bool IsStatic
	{
		[Token(Token = "0x60021AB")]
		[Address(RVA = "0x59174D0", Offset = "0x59164D0", VA = "0x59174D0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000401")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60021AC")]
		[Address(RVA = "0x59174E0", Offset = "0x59164E0", VA = "0x59174E0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60021A2")]
	[Address(RVA = "0x5917130", Offset = "0x5916130", VA = "0x5917130")]
	public CustomLogicHorseBuiltin(Horse horse)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$.ctor): clean
		base((BaseCharacter)horse);
		this.Horse = horse;
		return;
	}

	[Token(Token = "0x60021A5")]
	[Address(RVA = "0x5917230", Offset = "0x5916230", VA = "0x5917230")]
	public void Follow(CustomLogicCharacterBuiltin target, float stopDistance = 5f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$Follow): clean
		Horse pCVar1;
		bool bVar2;
		BaseCharacter target_00;

		pCVar1 = this.Horse;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this.Horse;
			if (target == null) {
				target_00 = null;
			}
			else {
				target_00 = target.Character;
			}
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.Follow(target_00, stopDistance);
			return;
		}
		return;
	}

	[Token(Token = "0x60021A6")]
	[Address(RVA = "0x59172D0", Offset = "0x59162D0", VA = "0x59172D0")]
	public void Stay()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$Stay): clean
		Horse pCVar1;
		bool bVar2;

		pCVar1 = this.Horse;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this.Horse;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.Stay();
			return;
		}
		return;
	}

	[Token(Token = "0x60021A7")]
	[Address(RVA = "0x5917350", Offset = "0x5916350", VA = "0x5917350")]
	public void ComeTo(CustomLogicCharacterBuiltin target, float arrivalDistance = 5f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$ComeTo): clean
		Horse pCVar1;
		bool bVar2;
		BaseCharacter target_00;

		pCVar1 = this.Horse;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this.Horse;
			if (target == null) {
				target_00 = null;
			}
			else {
				target_00 = target.Character;
			}
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.ComeTo(target_00, arrivalDistance);
			return;
		}
		return;
	}

	[Token(Token = "0x60021A8")]
	[Address(RVA = "0x59173F0", Offset = "0x59163F0", VA = "0x59173F0")]
	public new void MoveTo(CustomLogicVector3Builtin position, float range = 5f, bool ignoreEnemies = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c (CustomLogic.CustomLogicHorseBuiltin$$MoveTo): clean
		Horse pCVar1;
		bool bVar2;

		pCVar1 = this.Horse;
		bVar2 = ((Object)pCVar1 != null);
		if ((position != null) && (bVar2)) {
			pCVar1 = this.Horse;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.MoveTo((Vector3)position.Value, range);
			return;
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicHorseBuiltin.c.

	// CustomLogic.CustomLogicHorseBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"RunSpeed");
		__this.Add((Il2CppObject *)"Follow");
		__this.Add((Il2CppObject *)"Stay");
		__this.Add((Il2CppObject *)"ComeTo");
		__this.Add((Il2CppObject *)"MoveTo");
		CustomLogicHorseBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicHorseBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeed>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__RunSpeed_g____getter_2_0(CustomLogicHorseBuiltin __i)
	{
		Horse __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Horse, __this == null)) {
			throw new NullReferenceException();
		}
		__this.RunSpeed;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHorseBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeed>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__RunSpeed_g____setter_2_1(CustomLogicHorseBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.RunSpeed = value;
		return;
	}

	// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicHorseBuiltin.Bindings.c();
		CustomLogicHorseBuiltin.Bindings.c.__9 =(CustomLogicHorseBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__Follow>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__Follow_b__3_0(CustomLogicHorseBuiltin __c, Object[] __a)
	{
		object pIVar1;
		Horse pCVar2;
		bool bVar3;
		CustomLogicCharacterBuiltin pCVar4;
		BaseCharacter target;
		float distance;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicCharacterBuiltin>(pIVar1);
			if ((int)__a.Length < 2) {
				distance = 5.0;
			}
			else {
				pIVar1 = __a[1];
				distance = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Horse;
				bVar3 = ((Object)pCVar2 != null);
				if (bVar3) {
					pCVar2 = __c.Horse;
					if (pCVar4 == null) {
						target = null;
					}
					else {
						target = pCVar4.Character;
					}
					if (pCVar2 == null) goto label_05a18166;
					pCVar2.Follow(target, distance);
				}
				return null;
			}
		}
	label_05a18166: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stay>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__Stay_b__4_0(CustomLogicHorseBuiltin __c, Object[] __a)
	{
		Horse pCVar1;
		bool bVar2;

		if (__c == null) {
	label_05a181de: ;
			throw new NullReferenceException();
		}
		pCVar1 = __c.Horse;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = __c.Horse;
			if (pCVar1 == null) goto label_05a181de;
			pCVar1.Stay();
		}
		return null;
	}

	// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__ComeTo>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__ComeTo_b__5_0(CustomLogicHorseBuiltin __c, Object[] __a)
	{
		object pIVar1;
		Horse pCVar2;
		bool bVar3;
		CustomLogicCharacterBuiltin pCVar4;
		BaseCharacter target;
		float distance;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicCharacterBuiltin>(pIVar1);
			if ((int)__a.Length < 2) {
				distance = 5.0;
			}
			else {
				pIVar1 = __a[1];
				distance = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Horse;
				bVar3 = ((Object)pCVar2 != null);
				if (bVar3) {
					pCVar2 = __c.Horse;
					if (pCVar4 == null) {
						target = null;
					}
					else {
						target = pCVar4.Character;
					}
					if (pCVar2 == null) goto label_05a18336;
					pCVar2.ComeTo(target, distance);
				}
				return null;
			}
		}
	label_05a18336: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__MoveTo_b__6_0(CustomLogicHorseBuiltin __c, Object[] __a)
	{
		object pIVar1;
		Horse pCVar2;
		bool bVar3;
		CustomLogicVector3Builtin pCVar4;
		float fStack_2c;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
			if ((int)__a.Length < 2) {
				fStack_2c = 5.0;
			}
			else {
				pIVar1 = __a[1];
				fStack_2c = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
				if (2 < (int)__a.Length) {
					pIVar1 = __a[2];
					CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
				}
			}
			if (__c != null) {
				pCVar2 = __c.Horse;
				bVar3 = ((Object)pCVar2 != null);
				if ((pCVar4 != null) && (bVar3)) {
					pCVar2 = __c.Horse;
					if (pCVar2 == null) goto label_05a184ce;
					pCVar2.MoveTo((Vector3)pCVar4.Value, fStack_2c);
				}
				return null;
			}
		}
	label_05a184ce: ;
		throw new NullReferenceException();
	}
}
