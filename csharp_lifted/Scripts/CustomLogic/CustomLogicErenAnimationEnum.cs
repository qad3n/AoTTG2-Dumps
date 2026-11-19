// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicErenAnimationEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000505")]
[CompilerGenerated]
internal class CustomLogicErenAnimationEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000506")]
	public static class Factory
	{
		[Token(Token = "0x60028A3")]
		[Address(RVA = "0x5961D80", Offset = "0x5960D80", VA = "0x5961D80")]
		public static CustomLogicErenAnimationEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicErenAnimationEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicErenAnimationEnum();
			return (CustomLogicErenAnimationEnum)__this;
		}
	}

	[Token(Token = "0x2000507")]
	public static class Bindings
	{
		[Token(Token = "0x40017C8")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60028A4")]
		[Address(RVA = "0x5961EA0", Offset = "0x5960EA0", VA = "0x5961EA0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicErenAnimationEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x5376547a) {
				if (uVar2 < 0x3c572baa) {
					if (uVar2 < 0xff8caa9) {
						if (uVar2 == 0xe1ef32d) {
							bVar1 = (name == "Jump");
							if (bVar1) {
								pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__Jump();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xff8caa8) {
							bVar1 = (name == "RockLift001");
							if (bVar1) {
								pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__RockLift001();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x22ccd730) {
						bVar1 = (name == "Walk");
						if (bVar1) {
							if ((typeof(CustomLogicErenAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__Walk();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3c572ba9) {
						bVar1 = (name == "RockFixHole");
						if (bVar1) {
							if ((typeof(CustomLogicErenAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__RockFixHole();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x40e2cf22) {
					if (uVar2 == 0x3d692a71) {
						bVar1 = (name == "Die");
						if (bVar1) {
							if ((typeof(CustomLogicErenAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__Die();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x40e2cf21) {
						bVar1 = (name == "RockLift");
						if (bVar1) {
							if ((typeof(CustomLogicErenAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__RockLift();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x45aa17b3) {
					bVar1 = (name == "Idle");
					if (bVar1) {
						pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__Idle();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x53765479) {
					bVar1 = (name == "AttackCombo");
					if (bVar1) {
						pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__AttackCombo();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xad225086) {
				if (uVar2 < 0x7b00bc81) {
					if (uVar2 == 0x5d992b41) {
						bVar1 = (name == "Stun");
						if (bVar1) {
							if ((typeof(CustomLogicErenAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__Stun();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7b00bc80) {
						bVar1 = (name == "Fall");
						if (bVar1) {
							if ((typeof(CustomLogicErenAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__Fall();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8d57e66a) {
					bVar1 = (name == "Run");
					if (bVar1) {
						pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__Run();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xad225085) {
					bVar1 = (name == "RockWalk");
					if (bVar1) {
						pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__RockWalk();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc6f75898) {
				if (uVar2 == 0xc1018924) {
					bVar1 = (name == "EmoteNod");
					if (bVar1) {
						pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__EmoteNod();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc6f75897) {
					bVar1 = (name == "EmoteRoar");
					if (bVar1) {
						pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__EmoteRoar();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xc8f30ee7) {
				bVar1 = (name == "AttackKick");
				if (bVar1) {
					pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__AttackKick();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xee1682bc) {
				bVar1 = (name == "Land");
				if (bVar1) {
					pCVar3 = CustomLogicErenAnimationEnum.Bindings.__CreatePropertyBinding__Land();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicErenAnimationEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60028A5")]
		[Address(RVA = "0x59624F0", Offset = "0x59614F0", VA = "0x59624F0")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__Idle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Idle): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028A6")]
		[Address(RVA = "0x5962590", Offset = "0x5961590", VA = "0x5962590")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__Run()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Run): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028A7")]
		[Address(RVA = "0x5962630", Offset = "0x5961630", VA = "0x5962630")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Walk): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028A8")]
		[Address(RVA = "0x59626D0", Offset = "0x59616D0", VA = "0x59626D0")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Jump): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028A9")]
		[Address(RVA = "0x5962770", Offset = "0x5961770", VA = "0x5962770")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__Fall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Fall): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028AA")]
		[Address(RVA = "0x5962810", Offset = "0x5961810", VA = "0x5962810")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__Land()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Land): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028AB")]
		[Address(RVA = "0x59628B0", Offset = "0x59618B0", VA = "0x59628B0")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__Die()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Die): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028AC")]
		[Address(RVA = "0x5962950", Offset = "0x5961950", VA = "0x5962950")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__AttackCombo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028AD")]
		[Address(RVA = "0x59629F0", Offset = "0x59619F0", VA = "0x59629F0")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__AttackKick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028AE")]
		[Address(RVA = "0x5962A90", Offset = "0x5961A90", VA = "0x5962A90")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__Stun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Stun): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028AF")]
		[Address(RVA = "0x5962B30", Offset = "0x5961B30", VA = "0x5962B30")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__EmoteNod()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028B0")]
		[Address(RVA = "0x5962BD0", Offset = "0x5961BD0", VA = "0x5962BD0")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__EmoteRoar()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028B1")]
		[Address(RVA = "0x5962C70", Offset = "0x5961C70", VA = "0x5962C70")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__RockLift()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028B2")]
		[Address(RVA = "0x5962D10", Offset = "0x5961D10", VA = "0x5962D10")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__RockLift001()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift001): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift001_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028B3")]
		[Address(RVA = "0x5962DB0", Offset = "0x5961DB0", VA = "0x5962DB0")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__RockWalk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockWalk): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockWalk_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028B4")]
		[Address(RVA = "0x5962E50", Offset = "0x5961E50", VA = "0x5962E50")]
		public static CLPropertyBinding<CustomLogicErenAnimationEnum> __CreatePropertyBinding__RockFixHole()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockFixHole): 2 lines keep C-only constructs
			Func<CustomLogicErenAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicErenAnimationEnum> __this_00;

			__this = new Func<CustomLogicErenAnimationEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockFixHole_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicErenAnimationEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}
	}

	[Token(Token = "0x17000582")]
	public static string Idle
	{
		[Token(Token = "0x600288F")]
		[Address(RVA = "0x5961A20", Offset = "0x5960A20", VA = "0x5961A20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_Idle): clean
			return "ErenRig_VER2|et_idle";
		}
	}

	[Token(Token = "0x17000583")]
	public static string Run
	{
		[Token(Token = "0x6002890")]
		[Address(RVA = "0x5961A50", Offset = "0x5960A50", VA = "0x5961A50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_Run): clean
			return "ErenRig_VER2|et_run";
		}
	}

	[Token(Token = "0x17000584")]
	public static string Walk
	{
		[Token(Token = "0x6002891")]
		[Address(RVA = "0x5961A80", Offset = "0x5960A80", VA = "0x5961A80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_Walk): clean
			return "ErenRig_VER2|et_walk";
		}
	}

	[Token(Token = "0x17000585")]
	public static string Jump
	{
		[Token(Token = "0x6002892")]
		[Address(RVA = "0x5961AB0", Offset = "0x5960AB0", VA = "0x5961AB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_Jump): clean
			return "ErenRig_VER2|et_jump_start";
		}
	}

	[Token(Token = "0x17000586")]
	public static string Fall
	{
		[Token(Token = "0x6002893")]
		[Address(RVA = "0x5961AE0", Offset = "0x5960AE0", VA = "0x5961AE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_Fall): clean
			return "ErenRig_VER2|et_jump_air";
		}
	}

	[Token(Token = "0x17000587")]
	public static string Land
	{
		[Token(Token = "0x6002894")]
		[Address(RVA = "0x5961B10", Offset = "0x5960B10", VA = "0x5961B10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_Land): clean
			return "ErenRig_VER2|et_jump_land";
		}
	}

	[Token(Token = "0x17000588")]
	public static string Die
	{
		[Token(Token = "0x6002895")]
		[Address(RVA = "0x5961B40", Offset = "0x5960B40", VA = "0x5961B40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_Die): clean
			return "ErenRig_VER2|et_die";
		}
	}

	[Token(Token = "0x17000589")]
	public static string AttackCombo
	{
		[Token(Token = "0x6002896")]
		[Address(RVA = "0x5961B70", Offset = "0x5960B70", VA = "0x5961B70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_AttackCombo): clean
			return "ErenRig_VER2|et_attack_combo_full";
		}
	}

	[Token(Token = "0x1700058A")]
	public static string AttackKick
	{
		[Token(Token = "0x6002897")]
		[Address(RVA = "0x5961BA0", Offset = "0x5960BA0", VA = "0x5961BA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_AttackKick): clean
			return "ErenRig_VER2|et_attack_kick";
		}
	}

	[Token(Token = "0x1700058B")]
	public static string Stun
	{
		[Token(Token = "0x6002898")]
		[Address(RVA = "0x5961BD0", Offset = "0x5960BD0", VA = "0x5961BD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_Stun): clean
			return "ErenRig_VER2|et_hit_titan";
		}
	}

	[Token(Token = "0x1700058C")]
	public static string EmoteNod
	{
		[Token(Token = "0x6002899")]
		[Address(RVA = "0x5961C00", Offset = "0x5960C00", VA = "0x5961C00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteNod): clean
			return "ErenRig_VER2|et_yes";
		}
	}

	[Token(Token = "0x1700058D")]
	public static string EmoteRoar
	{
		[Token(Token = "0x600289A")]
		[Address(RVA = "0x5961C30", Offset = "0x5960C30", VA = "0x5961C30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteRoar): clean
			return "ErenRig_VER2|et_born";
		}
	}

	[Token(Token = "0x1700058E")]
	public static string RockLift
	{
		[Token(Token = "0x600289B")]
		[Address(RVA = "0x5961C60", Offset = "0x5960C60", VA = "0x5961C60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift): clean
			return "ErenRig_VER2|et_rock_lift";
		}
	}

	[Token(Token = "0x1700058F")]
	public static string RockLift001
	{
		[Token(Token = "0x600289C")]
		[Address(RVA = "0x5961C90", Offset = "0x5960C90", VA = "0x5961C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift001): clean
			return "ErenRig_VER2|et_rock_lift.001";
		}
	}

	[Token(Token = "0x17000590")]
	public static string RockWalk
	{
		[Token(Token = "0x600289D")]
		[Address(RVA = "0x5961CC0", Offset = "0x5960CC0", VA = "0x5961CC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_RockWalk): clean
			return "ErenRig_VER2|et_rock_walk";
		}
	}

	[Token(Token = "0x17000591")]
	public static string RockFixHole
	{
		[Token(Token = "0x600289E")]
		[Address(RVA = "0x5961CF0", Offset = "0x5960CF0", VA = "0x5961CF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_RockFixHole): clean
			return "ErenRig_VER2|et_rock_fix_hole";
		}
	}

	[Token(Token = "0x17000592")]
	public override string ClassName
	{
		[Token(Token = "0x600289F")]
		[Address(RVA = "0x5961D20", Offset = "0x5960D20", VA = "0x5961D20", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_ClassName): clean
			return "ErenAnimationEnum";
		}
	}

	[Token(Token = "0x17000593")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60028A0")]
		[Address(RVA = "0x5961D50", Offset = "0x5960D50", VA = "0x5961D50", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000594")]
	public override bool IsStatic
	{
		[Token(Token = "0x60028A1")]
		[Address(RVA = "0x5961D60", Offset = "0x5960D60", VA = "0x5961D60", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000595")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60028A2")]
		[Address(RVA = "0x5961D70", Offset = "0x5960D70", VA = "0x5961D70", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600288E")]
	[Address(RVA = "0x59619B0", Offset = "0x59609B0", VA = "0x59619B0")]
	public CustomLogicErenAnimationEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c (CustomLogic.CustomLogicErenAnimationEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546377 == false) {
			Il2CppMethodInitialized_07546377 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicErenAnimationEnum.c.

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Idle");
		__this.Add((Il2CppObject *)"Run");
		__this.Add((Il2CppObject *)"Walk");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Fall");
		__this.Add((Il2CppObject *)"Land");
		__this.Add((Il2CppObject *)"Die");
		__this.Add((Il2CppObject *)"AttackCombo");
		__this.Add((Il2CppObject *)"AttackKick");
		__this.Add((Il2CppObject *)"Stun");
		__this.Add((Il2CppObject *)"EmoteNod");
		__this.Add((Il2CppObject *)"EmoteRoar");
		__this.Add((Il2CppObject *)"RockLift");
		__this.Add((Il2CppObject *)"RockLift001");
		__this.Add((Il2CppObject *)"RockWalk");
		__this.Add((Il2CppObject *)"RockFixHole");
		CustomLogicErenAnimationEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_idle";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Run_g____getter_3_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_run";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_4_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_walk";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_5_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_jump_start";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Fall_g____getter_6_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_jump_air";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Land_g____getter_7_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_jump_land";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Die_g____getter_8_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_die";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__AttackCombo_g____getter_9_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_attack_combo_full";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__AttackKick_g____getter_10_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_attack_kick";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Stun_g____getter_11_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_hit_titan";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteNod_g____getter_12_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_yes";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteRoar_g____getter_13_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_born";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__RockLift_g____getter_14_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_rock_lift";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift001>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__RockLift001_g____getter_15_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_rock_lift.001";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockWalk>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__RockWalk_g____getter_16_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_rock_walk";
	}

	// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockFixHole>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__RockFixHole_g____getter_17_0(CustomLogicErenAnimationEnum __i)
	{
		return (Il2CppObject *)"ErenRig_VER2|et_rock_fix_hole";
	}
}
