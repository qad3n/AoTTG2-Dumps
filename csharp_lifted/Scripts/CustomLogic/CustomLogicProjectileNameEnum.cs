// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicProjectileNameEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200055D")]
[CompilerGenerated]
internal class CustomLogicProjectileNameEnum : BuiltinClassInstance
{
	[Token(Token = "0x200055E")]
	public static class Factory
	{
		[Token(Token = "0x6002FD0")]
		[Address(RVA = "0x59A6960", Offset = "0x59A5960", VA = "0x59A6960")]
		public static CustomLogicProjectileNameEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicProjectileNameEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicProjectileNameEnum();
			return (CustomLogicProjectileNameEnum)__this;
		}
	}

	[Token(Token = "0x200055F")]
	public static class Bindings
	{
		[Token(Token = "0x400187C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002FD1")]
		[Address(RVA = "0x59A6A80", Offset = "0x59A5A80", VA = "0x59A6A80")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicProjectileNameEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x3c3eb8d8) {
				if (uVar2 == 0x23b28a7f) {
					bVar1 = (name == "Rock1");
					if (bVar1) {
						if ((typeof(CustomLogicProjectileNameEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__Rock1();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__Rock1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x24b28c12) {
					bVar1 = (name == "Rock2");
					if (bVar1) {
						if ((typeof(CustomLogicProjectileNameEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__Rock2();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__Rock2();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x3c3eb8d7) {
					bVar1 = (name == "Flare");
					if (bVar1) {
						if ((typeof(CustomLogicProjectileNameEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__Flare();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__Flare();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x99d03dfb) {
				if (uVar2 == 0x8d87a40b) {
					bVar1 = (name == "BladeThrow");
					if (bVar1) {
						if ((typeof(CustomLogicProjectileNameEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__BladeThrow();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__BladeThrow();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x99d03dfa) {
					bVar1 = (name == "Thunderspear");
					if (bVar1) {
						if ((typeof(CustomLogicProjectileNameEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__Thunderspear();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__Thunderspear();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0x9fc581fa) {
				bVar1 = (name == "SmokeBomb");
				if (bVar1) {
					if ((typeof(CustomLogicProjectileNameEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__SmokeBomb();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__SmokeBomb();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xcd667d01) {
				bVar1 = (name == "CannonBall");
				if (bVar1) {
					if ((typeof(CustomLogicProjectileNameEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__CannonBall();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicProjectileNameEnum.Bindings.__CreatePropertyBinding__CannonBall();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicProjectileNameEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002FD2")]
		[Address(RVA = "0x59A6E00", Offset = "0x59A5E00", VA = "0x59A6E00")]
		public static CLPropertyBinding<CustomLogicProjectileNameEnum> __CreatePropertyBinding__Thunderspear()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Thunderspear): 3 lines keep C-only constructs
			Func<CustomLogicProjectileNameEnum, object> __this;
			CLPropertyBinding<CustomLogicProjectileNameEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProjectileNameEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Thunderspear_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicProjectileNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FD3")]
		[Address(RVA = "0x59A6EA0", Offset = "0x59A5EA0", VA = "0x59A6EA0")]
		public static CLPropertyBinding<CustomLogicProjectileNameEnum> __CreatePropertyBinding__CannonBall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__CannonBall): 3 lines keep C-only constructs
			Func<CustomLogicProjectileNameEnum, object> __this;
			CLPropertyBinding<CustomLogicProjectileNameEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProjectileNameEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__CannonBall_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicProjectileNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FD4")]
		[Address(RVA = "0x59A6F40", Offset = "0x59A5F40", VA = "0x59A6F40")]
		public static CLPropertyBinding<CustomLogicProjectileNameEnum> __CreatePropertyBinding__Flare()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Flare): 3 lines keep C-only constructs
			Func<CustomLogicProjectileNameEnum, object> __this;
			CLPropertyBinding<CustomLogicProjectileNameEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProjectileNameEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Flare_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicProjectileNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FD5")]
		[Address(RVA = "0x59A6FE0", Offset = "0x59A5FE0", VA = "0x59A6FE0")]
		public static CLPropertyBinding<CustomLogicProjectileNameEnum> __CreatePropertyBinding__BladeThrow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__BladeThrow): 3 lines keep C-only constructs
			Func<CustomLogicProjectileNameEnum, object> __this;
			CLPropertyBinding<CustomLogicProjectileNameEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProjectileNameEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__BladeThrow_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicProjectileNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FD6")]
		[Address(RVA = "0x59A7080", Offset = "0x59A6080", VA = "0x59A7080")]
		public static CLPropertyBinding<CustomLogicProjectileNameEnum> __CreatePropertyBinding__SmokeBomb()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__SmokeBomb): 3 lines keep C-only constructs
			Func<CustomLogicProjectileNameEnum, object> __this;
			CLPropertyBinding<CustomLogicProjectileNameEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProjectileNameEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicProjectileNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FD7")]
		[Address(RVA = "0x59A7120", Offset = "0x59A6120", VA = "0x59A7120")]
		public static CLPropertyBinding<CustomLogicProjectileNameEnum> __CreatePropertyBinding__Rock1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock1): 3 lines keep C-only constructs
			Func<CustomLogicProjectileNameEnum, object> __this;
			CLPropertyBinding<CustomLogicProjectileNameEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProjectileNameEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock1_g____getter_7);
			__this_00 = new CLPropertyBinding<CustomLogicProjectileNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FD8")]
		[Address(RVA = "0x59A71C0", Offset = "0x59A61C0", VA = "0x59A71C0")]
		public static CLPropertyBinding<CustomLogicProjectileNameEnum> __CreatePropertyBinding__Rock2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock2): 3 lines keep C-only constructs
			Func<CustomLogicProjectileNameEnum, object> __this;
			CLPropertyBinding<CustomLogicProjectileNameEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProjectileNameEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock2_g____getter_8);
			__this_00 = new CLPropertyBinding<CustomLogicProjectileNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700080D")]
	public static string Thunderspear
	{
		[Token(Token = "0x6002FC5")]
		[Address(RVA = "0x59A65F0", Offset = "0x59A55F0", VA = "0x59A65F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_Thunderspear): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a0e == false) {
				Il2CppMethodInitialized_07546a0e = true;
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ProjectilePrefabs.Thunderspear;
			}
			return *(String*)(typeof(ProjectilePrefabs)).static_fields;
		}
	}

	[Token(Token = "0x1700080E")]
	public static string CannonBall
	{
		[Token(Token = "0x6002FC6")]
		[Address(RVA = "0x59A6660", Offset = "0x59A5660", VA = "0x59A6660")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_CannonBall): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a0f == false) {
				Il2CppMethodInitialized_07546a0f = true;
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ProjectilePrefabs.CannonBall;
			}
			return *(String*)((long)(typeof(ProjectilePrefabs)).static_fields + 8);
		}
	}

	[Token(Token = "0x1700080F")]
	public static string Flare
	{
		[Token(Token = "0x6002FC7")]
		[Address(RVA = "0x59A66D0", Offset = "0x59A56D0", VA = "0x59A66D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_Flare): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a10 == false) {
				Il2CppMethodInitialized_07546a10 = true;
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ProjectilePrefabs.Flare;
			}
			return *(String*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000810")]
	public static string BladeThrow
	{
		[Token(Token = "0x6002FC8")]
		[Address(RVA = "0x59A6740", Offset = "0x59A5740", VA = "0x59A6740")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_BladeThrow): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a11 == false) {
				Il2CppMethodInitialized_07546a11 = true;
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ProjectilePrefabs.BladeThrow;
			}
			return *(String*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x17000811")]
	public static string SmokeBomb
	{
		[Token(Token = "0x6002FC9")]
		[Address(RVA = "0x59A67B0", Offset = "0x59A57B0", VA = "0x59A67B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_SmokeBomb): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a12 == false) {
				Il2CppMethodInitialized_07546a12 = true;
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ProjectilePrefabs.SmokeBomb;
			}
			return *(String*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000812")]
	public static string Rock1
	{
		[Token(Token = "0x6002FCA")]
		[Address(RVA = "0x59A6820", Offset = "0x59A5820", VA = "0x59A6820")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_Rock1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a13 == false) {
				Il2CppMethodInitialized_07546a13 = true;
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ProjectilePrefabs.Rock1;
			}
			return *(String*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x17000813")]
	public static string Rock2
	{
		[Token(Token = "0x6002FCB")]
		[Address(RVA = "0x59A6890", Offset = "0x59A5890", VA = "0x59A6890")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_Rock2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546a14 == false) {
				Il2CppMethodInitialized_07546a14 = true;
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ProjectilePrefabs.Rock2;
			}
			return *(String*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x17000814")]
	public override string ClassName
	{
		[Token(Token = "0x6002FCC")]
		[Address(RVA = "0x59A6900", Offset = "0x59A5900", VA = "0x59A6900", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_ClassName): clean
			return "ProjectileNameEnum";
		}
	}

	[Token(Token = "0x17000815")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002FCD")]
		[Address(RVA = "0x59A6930", Offset = "0x59A5930", VA = "0x59A6930", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000816")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002FCE")]
		[Address(RVA = "0x59A6940", Offset = "0x59A5940", VA = "0x59A6940", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000817")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002FCF")]
		[Address(RVA = "0x59A6950", Offset = "0x59A5950", VA = "0x59A6950", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002FC4")]
	[Address(RVA = "0x59A6580", Offset = "0x59A5580", VA = "0x59A6580")]
	public CustomLogicProjectileNameEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c (CustomLogic.CustomLogicProjectileNameEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a0d == false) {
			Il2CppMethodInitialized_07546a0d = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicProjectileNameEnum.c.

	// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Thunderspear");
		__this.Add((Il2CppObject *)"CannonBall");
		__this.Add((Il2CppObject *)"Flare");
		__this.Add((Il2CppObject *)"BladeThrow");
		__this.Add((Il2CppObject *)"SmokeBomb");
		__this.Add((Il2CppObject *)"Rock1");
		__this.Add((Il2CppObject *)"Rock2");
		CustomLogicProjectileNameEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Thunderspear_g____getter_2_0(CustomLogicProjectileNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c92 == false) {
			Il2CppMethodInitialized_07546c92 = true;
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ProjectilePrefabs.Thunderspear;
		}
		return *(object*)(typeof(ProjectilePrefabs)).static_fields;
	}

	// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__CannonBall>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__CannonBall_g____getter_3_0(CustomLogicProjectileNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c93 == false) {
			Il2CppMethodInitialized_07546c93 = true;
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ProjectilePrefabs.CannonBall;
		}
		return *(object*)((long)(typeof(ProjectilePrefabs)).static_fields + 8);
	}

	// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Flare>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Flare_g____getter_4_0(CustomLogicProjectileNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c94 == false) {
			Il2CppMethodInitialized_07546c94 = true;
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ProjectilePrefabs.Flare;
		}
		return *(object*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__BladeThrow_g____getter_5_0(CustomLogicProjectileNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c95 == false) {
			Il2CppMethodInitialized_07546c95 = true;
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ProjectilePrefabs.BladeThrow;
		}
		return *(object*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__SmokeBomb_g____getter_6_0(CustomLogicProjectileNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c96 == false) {
			Il2CppMethodInitialized_07546c96 = true;
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ProjectilePrefabs.SmokeBomb;
		}
		return *(object*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock1>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Rock1_g____getter_7_0(CustomLogicProjectileNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c97 == false) {
			Il2CppMethodInitialized_07546c97 = true;
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ProjectilePrefabs.Rock1;
		}
		return *(object*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock2>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Rock2_g____getter_8_0(CustomLogicProjectileNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546c98 == false) {
			Il2CppMethodInitialized_07546c98 = true;
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)ProjectilePrefabs.Rock2;
		}
		return *(object*)((long)(typeof(ProjectilePrefabs)).static_fields + 0x30);
	}
}
