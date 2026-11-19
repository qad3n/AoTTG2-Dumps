// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicWallColossalAnimationEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000599")]
[CompilerGenerated]
internal class CustomLogicWallColossalAnimationEnum : BuiltinClassInstance
{
	[Token(Token = "0x200059A")]
	public static class Factory
	{
		[Token(Token = "0x6003334")]
		[Address(RVA = "0x59C24E0", Offset = "0x59C14E0", VA = "0x59C24E0")]
		public static CustomLogicWallColossalAnimationEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Factory$$CreateInstance): 7 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWallColossalAnimationEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = (BuiltinClassInstance)il2cpp_codegen_object_new(typeof(CustomLogicWallColossalAnimationEnum)) ;
			__this = new BuiltinClassInstance();
			return (CustomLogicWallColossalAnimationEnum)__this;
		}
	}

	[Token(Token = "0x200059B")]
	public static class Bindings
	{
		[Token(Token = "0x4001896")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003335")]
		[Address(RVA = "0x59C2600", Offset = "0x59C1600", VA = "0x59C2600")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x65640d56) {
				if (uVar2 < 0x513bb56c) {
					if (uVar2 == 0x45aa17b3) {
						bVar1 = (name == "Idle");
						if (bVar1) {
							if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__Idle();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__Idle();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x513bb56b) {
						bVar1 = (name == "AttackWallSlap2R");
						if (bVar1) {
							if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackWallSlap2R();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackWallSlap2R();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x5f3bcb75) {
					bVar1 = (name == "AttackWallSlap2L");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackWallSlap2L();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackWallSlap2L();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x65640d55) {
					bVar1 = (name == "StunFallFace");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__StunFallFace();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__StunFallFace();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x7d3e3947) {
				if (uVar2 == 0x67ff8d2b) {
					bVar1 = (name == "AttackSteam");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackSteam();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackSteam();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7d3e3946) {
					bVar1 = (name == "AttackWallSlap1L");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackWallSlap1L();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackWallSlap1L();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0x826affcb) {
				bVar1 = (name == "AttackSweep");
				if (bVar1) {
					if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackSweep();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackSweep();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0x973e6234) {
				bVar1 = (name == "AttackWallSlap1R");
				if (bVar1) {
					if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackWallSlap1R();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackWallSlap1R();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xc8f30ee7) {
				bVar1 = (name == "AttackKick");
				if (bVar1) {
					if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackKick();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicWallColossalAnimationEnum.Bindings.__CreatePropertyBinding__AttackKick();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWallColossalAnimationEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003336")]
		[Address(RVA = "0x59C2A60", Offset = "0x59C1A60", VA = "0x59C2A60")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__Idle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__Idle): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____get);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003337")]
		[Address(RVA = "0x59C2B00", Offset = "0x59C1B00", VA = "0x59C2B00")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__AttackWallSlap1L()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap1L): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003338")]
		[Address(RVA = "0x59C2BA0", Offset = "0x59C1BA0", VA = "0x59C2BA0")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__AttackWallSlap1R()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap1R): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c25f8);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003339")]
		[Address(RVA = "0x59C2C40", Offset = "0x59C1C40", VA = "0x59C2C40")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__AttackWallSlap2L()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap2L): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c2600);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600333A")]
		[Address(RVA = "0x59C2CE0", Offset = "0x59C1CE0", VA = "0x59C2CE0")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__AttackWallSlap2R()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap2R): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c2608);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600333B")]
		[Address(RVA = "0x59C2D80", Offset = "0x59C1D80", VA = "0x59C2D80")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__AttackSteam()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSteam): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackSteam_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600333C")]
		[Address(RVA = "0x59C2E20", Offset = "0x59C1E20", VA = "0x59C2E20")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__AttackSweep()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSweep): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackSweep_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600333D")]
		[Address(RVA = "0x59C2EC0", Offset = "0x59C1EC0", VA = "0x59C2EC0")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__AttackKick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600333E")]
		[Address(RVA = "0x59C2F60", Offset = "0x59C1F60", VA = "0x59C2F60")]
		public static CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __CreatePropertyBinding__StunFallFace()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__StunFallFace): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicWallColossalAnimationEnum> __this_00;

			__this = new Func<CustomLogicWallColossalAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__StunFallFace);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicWallColossalAnimationEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000948")]
	public static string Idle
	{
		[Token(Token = "0x6003327")]
		[Address(RVA = "0x59C22D0", Offset = "0x59C12D0", VA = "0x59C22D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_Idle): clean
			return "Armature_VER2|wall_colossal_idle";
		}
	}

	[Token(Token = "0x17000949")]
	public static string AttackWallSlap1L
	{
		[Token(Token = "0x6003328")]
		[Address(RVA = "0x59C2300", Offset = "0x59C1300", VA = "0x59C2300")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap1L): clean
			return "Armature_VER2|wall_attack_slap1_L";
		}
	}

	[Token(Token = "0x1700094A")]
	public static string AttackWallSlap1R
	{
		[Token(Token = "0x6003329")]
		[Address(RVA = "0x59C2330", Offset = "0x59C1330", VA = "0x59C2330")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap1R): clean
			return "Armature_VER2|wall_attack_slap1_R";
		}
	}

	[Token(Token = "0x1700094B")]
	public static string AttackWallSlap2L
	{
		[Token(Token = "0x600332A")]
		[Address(RVA = "0x59C2360", Offset = "0x59C1360", VA = "0x59C2360")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap2L): clean
			return "Armature_VER2|wall_attack_slap2_L";
		}
	}

	[Token(Token = "0x1700094C")]
	public static string AttackWallSlap2R
	{
		[Token(Token = "0x600332B")]
		[Address(RVA = "0x59C2390", Offset = "0x59C1390", VA = "0x59C2390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap2R): clean
			return "Armature_VER2|wall_attack_slap2_R";
		}
	}

	[Token(Token = "0x1700094D")]
	public static string AttackSteam
	{
		[Token(Token = "0x600332C")]
		[Address(RVA = "0x59C23C0", Offset = "0x59C13C0", VA = "0x59C23C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackSteam): clean
			return "Armature_VER2|wall_attack_steam";
		}
	}

	[Token(Token = "0x1700094E")]
	public static string AttackSweep
	{
		[Token(Token = "0x600332D")]
		[Address(RVA = "0x59C23F0", Offset = "0x59C13F0", VA = "0x59C23F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackSweep): clean
			return "Armature_VER2|wall_attack_sweep";
		}
	}

	[Token(Token = "0x1700094F")]
	public static string AttackKick
	{
		[Token(Token = "0x600332E")]
		[Address(RVA = "0x59C2420", Offset = "0x59C1420", VA = "0x59C2420")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackKick): clean
			return "Armature_VER2|wall_colossal_kick";
		}
	}

	[Token(Token = "0x17000950")]
	public static string StunFallFace
	{
		[Token(Token = "0x600332F")]
		[Address(RVA = "0x59C2450", Offset = "0x59C1450", VA = "0x59C2450")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_StunFallFace): clean
			return "Armature_VER2|wall_colossal_stun";
		}
	}

	[Token(Token = "0x17000951")]
	public override string ClassName
	{
		[Token(Token = "0x6003330")]
		[Address(RVA = "0x59C2480", Offset = "0x59C1480", VA = "0x59C2480", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_ClassName): clean
			return "WallColossalAnimationEnum";
		}
	}

	[Token(Token = "0x17000952")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003331")]
		[Address(RVA = "0x59C24B0", Offset = "0x59C14B0", VA = "0x59C24B0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000953")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003332")]
		[Address(RVA = "0x59C24C0", Offset = "0x59C14C0", VA = "0x59C24C0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000954")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003333")]
		[Address(RVA = "0x59C24D0", Offset = "0x59C14D0", VA = "0x59C24D0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003326")]
	[Address(RVA = "0x59C2260", Offset = "0x59C1260", VA = "0x59C2260")]
	public CustomLogicWallColossalAnimationEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c (CustomLogic.CustomLogicWallColossalAnimationEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546c2d == false) {
			Il2CppMethodInitialized_07546c2d = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicWallColossalAnimationEnum.c.

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Idle");
		__this.Add((Il2CppObject *)"AttackWallSlap1L");
		__this.Add((Il2CppObject *)"AttackWallSlap1R");
		__this.Add((Il2CppObject *)"AttackWallSlap2L");
		__this.Add((Il2CppObject *)"AttackWallSlap2R");
		__this.Add((Il2CppObject *)"AttackSteam");
		__this.Add((Il2CppObject *)"AttackSweep");
		__this.Add((Il2CppObject *)"AttackKick");
		__this.Add((Il2CppObject *)"StunFallFace");
		CustomLogicWallColossalAnimationEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_colossal_idle";
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap1L>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__AttackWallSlap1L_g____getter_3_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_attack_slap1_L";
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap1R>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__AttackWallSlap1R_g____getter_4_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_attack_slap1_R";
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap2L>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__AttackWallSlap2L_g____getter_5_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_attack_slap2_L";
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap2R>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__AttackWallSlap2R_g____getter_6_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_attack_slap2_R";
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSteam>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSteam_g____getter_7_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_attack_steam";
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSweep>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSweep_g____getter_8_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_attack_sweep";
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__AttackKick_g____getter_9_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_colossal_kick";
	}

	// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__StunFallFace>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__StunFallFace_g____getter_10_0(CustomLogicWallColossalAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_VER2|wall_colossal_stun";
	}
}
