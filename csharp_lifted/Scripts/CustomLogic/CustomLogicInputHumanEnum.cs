// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicInputHumanEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicInputHumanEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000536")]
[CompilerGenerated]
internal class CustomLogicInputHumanEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000537")]
	public static class Factory
	{
		[Token(Token = "0x6002C52")]
		[Address(RVA = "0x5987310", Offset = "0x5986310", VA = "0x5987310")]
		public static CustomLogicInputHumanEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicInputHumanEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputHumanEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicInputHumanEnum();
			return __this;
		}
	}

	[Token(Token = "0x2000538")]
	public static class Bindings
	{
		[Token(Token = "0x4001833")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002C53")]
		[Address(RVA = "0x5987430", Offset = "0x5986430", VA = "0x5987430")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicInputHumanEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x540059f0) {
				if (uVar2 < 0x1a5c64b7) {
					if (uVar2 < 0x16ed547b) {
						if (uVar2 == 0xe1ef32d) {
							bVar1 = (name == "Jump");
							if (bVar1) {
								pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__Jump();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x16ed547a) {
							bVar1 = (name == "ReelIn");
							if (bVar1) {
								pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__ReelIn();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x1a43a2ac) {
						bVar1 = (name == "Reload");
						if (bVar1) {
							pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__Reload();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1a5c64b6) {
						bVar1 = (name == "AttackDefault");
						if (bVar1) {
							pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__AttackDefault();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x2e485539) {
					if (uVar2 == 0x22ccd730) {
						bVar1 = (name == "Walk");
						if (bVar1) {
							pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__Walk();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2e485538) {
						bVar1 = (name == "NapeLock");
						if (bVar1) {
							pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__NapeLock();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x41bc24a7) {
					bVar1 = (name == "HookLeft");
					if (bVar1) {
						pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__HookLeft();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x540059ef) {
					bVar1 = (name == "HorseWalk");
					if (bVar1) {
						pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__HorseWalk();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x8f5fbe99) {
				if (uVar2 < 0x68597616) {
					if (uVar2 == 0x5be800ee) {
						bVar1 = (name == "HorseJump");
						if (bVar1) {
							pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__HorseJump();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x68597615) {
						bVar1 = (name == "Dash");
						if (bVar1) {
							pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__Dash();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8f5fbe98) {
					bVar1 = (name == "AttackSpecial");
					if (bVar1) {
						pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__AttackSpecial();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x77f33158) {
					bVar1 = (name == "HookRight");
					if (bVar1) {
						pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__HookRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc52547e8) {
				if (uVar2 == 0xa114d213) {
					bVar1 = (name == "ReelOut");
					if (bVar1) {
						pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__ReelOut();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc52547e7) {
					bVar1 = (name == "HorseMount");
					if (bVar1) {
						pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__HorseMount();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf526d670) {
				bVar1 = (name == "Dodge");
				if (bVar1) {
					pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__Dodge();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf8af8641) {
				bVar1 = (name == "HookBoth");
				if (bVar1) {
					pCVar3 = CustomLogicInputHumanEnum.Bindings.__CreatePropertyBinding__HookBoth();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputHumanEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002C54")]
		[Address(RVA = "0x5987A80", Offset = "0x5986A80", VA = "0x5987A80")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__AttackDefault()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackDefault): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackDefault_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C55")]
		[Address(RVA = "0x5987B20", Offset = "0x5986B20", VA = "0x5987B20")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__AttackSpecial()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackSpecial): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackSpecial_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C56")]
		[Address(RVA = "0x5987BC0", Offset = "0x5986BC0", VA = "0x5987BC0")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__HookLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookLeft): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookLeft_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C57")]
		[Address(RVA = "0x5987C60", Offset = "0x5986C60", VA = "0x5987C60")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__HookRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookRight): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookRight_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C58")]
		[Address(RVA = "0x5987D00", Offset = "0x5986D00", VA = "0x5987D00")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__HookBoth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookBoth): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookBoth_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C59")]
		[Address(RVA = "0x5987DA0", Offset = "0x5986DA0", VA = "0x5987DA0")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__Dash()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dash): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dash_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C5A")]
		[Address(RVA = "0x5987E40", Offset = "0x5986E40", VA = "0x5987E40")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__ReelIn()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelIn): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C5B")]
		[Address(RVA = "0x5987EE0", Offset = "0x5986EE0", VA = "0x5987EE0")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__ReelOut()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelOut): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C5C")]
		[Address(RVA = "0x5987F80", Offset = "0x5986F80", VA = "0x5987F80")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__Dodge()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dodge): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C5D")]
		[Address(RVA = "0x5988020", Offset = "0x5987020", VA = "0x5988020")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Jump): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C5E")]
		[Address(RVA = "0x59880C0", Offset = "0x59870C0", VA = "0x59880C0")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__Reload()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Reload): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Reload_g____getter_12_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C5F")]
		[Address(RVA = "0x5988160", Offset = "0x5987160", VA = "0x5988160")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__HorseMount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseMount): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseMount_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C60")]
		[Address(RVA = "0x5988200", Offset = "0x5987200", VA = "0x5988200")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__HorseWalk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseWalk): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseWalk_g____getter_14);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C61")]
		[Address(RVA = "0x59882A0", Offset = "0x59872A0", VA = "0x59882A0")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__HorseJump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseJump): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseJump_g____getter_15);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C62")]
		[Address(RVA = "0x5988340", Offset = "0x5987340", VA = "0x5988340")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__NapeLock()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__NapeLock): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__NapeLock_g____getter_16);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C63")]
		[Address(RVA = "0x59883E0", Offset = "0x59873E0", VA = "0x59883E0")]
		public static CLPropertyBinding<CustomLogicInputHumanEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Walk): 2 lines keep C-only constructs
			Func<CustomLogicInputHumanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputHumanEnum> __this_00;

			__this = new Func<CustomLogicInputHumanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_17_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputHumanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x4001823")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string WalkValue;

	[Token(Token = "0x4001824")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string AttackDefaultValue;

	[Token(Token = "0x4001825")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string AttackSpecialValue;

	[Token(Token = "0x4001826")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string HookLeftValue;

	[Token(Token = "0x4001827")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string HookRightValue;

	[Token(Token = "0x4001828")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string HookBothValue;

	[Token(Token = "0x4001829")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string DashValue;

	[Token(Token = "0x400182A")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string ReelInValue;

	[Token(Token = "0x400182B")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string ReelOutValue;

	[Token(Token = "0x400182C")]
	[FieldOffset(Offset = "0x48")]
	private static readonly string DodgeValue;

	[Token(Token = "0x400182D")]
	[FieldOffset(Offset = "0x50")]
	private static readonly string JumpValue;

	[Token(Token = "0x400182E")]
	[FieldOffset(Offset = "0x58")]
	private static readonly string ReloadValue;

	[Token(Token = "0x400182F")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string HorseMountValue;

	[Token(Token = "0x4001830")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string HorseWalkValue;

	[Token(Token = "0x4001831")]
	[FieldOffset(Offset = "0x70")]
	private static readonly string HorseJumpValue;

	[Token(Token = "0x4001832")]
	[FieldOffset(Offset = "0x78")]
	private static readonly string NapeLockValue;

	[Token(Token = "0x170006D0")]
	public static string AttackDefault
	{
		[Token(Token = "0x6002C3D")]
		[Address(RVA = "0x59868A0", Offset = "0x59858A0", VA = "0x59868A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_AttackDefault): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466f9 == false) {
				Il2CppMethodInitialized_075466f9 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.AttackDefaultValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x170006D1")]
	public static string AttackSpecial
	{
		[Token(Token = "0x6002C3E")]
		[Address(RVA = "0x5986910", Offset = "0x5985910", VA = "0x5986910")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_AttackSpecial): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466fa == false) {
				Il2CppMethodInitialized_075466fa = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.AttackSpecialValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170006D2")]
	public static string HookLeft
	{
		[Token(Token = "0x6002C3F")]
		[Address(RVA = "0x5986980", Offset = "0x5985980", VA = "0x5986980")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_HookLeft): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466fb == false) {
				Il2CppMethodInitialized_075466fb = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.HookLeftValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x170006D3")]
	public static string HookRight
	{
		[Token(Token = "0x6002C40")]
		[Address(RVA = "0x59869F0", Offset = "0x59859F0", VA = "0x59869F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_HookRight): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466fc == false) {
				Il2CppMethodInitialized_075466fc = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.HookRightValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x170006D4")]
	public static string HookBoth
	{
		[Token(Token = "0x6002C41")]
		[Address(RVA = "0x5986A60", Offset = "0x5985A60", VA = "0x5986A60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_HookBoth): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466fd == false) {
				Il2CppMethodInitialized_075466fd = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.HookBothValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x170006D5")]
	public static string Dash
	{
		[Token(Token = "0x6002C42")]
		[Address(RVA = "0x5986AD0", Offset = "0x5985AD0", VA = "0x5986AD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_Dash): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466fe == false) {
				Il2CppMethodInitialized_075466fe = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.DashValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x170006D6")]
	public static string ReelIn
	{
		[Token(Token = "0x6002C43")]
		[Address(RVA = "0x5986B40", Offset = "0x5985B40", VA = "0x5986B40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_ReelIn): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466ff == false) {
				Il2CppMethodInitialized_075466ff = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.ReelInValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x170006D7")]
	public static string ReelOut
	{
		[Token(Token = "0x6002C44")]
		[Address(RVA = "0x5986BB0", Offset = "0x5985BB0", VA = "0x5986BB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_ReelOut): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546700 == false) {
				Il2CppMethodInitialized_07546700 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.ReelOutValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x170006D8")]
	public static string Dodge
	{
		[Token(Token = "0x6002C45")]
		[Address(RVA = "0x5986C20", Offset = "0x5985C20", VA = "0x5986C20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_Dodge): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546701 == false) {
				Il2CppMethodInitialized_07546701 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.DodgeValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x170006D9")]
	public static string Jump
	{
		[Token(Token = "0x6002C46")]
		[Address(RVA = "0x5986C90", Offset = "0x5985C90", VA = "0x5986C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_Jump): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546702 == false) {
				Il2CppMethodInitialized_07546702 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.JumpValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x170006DA")]
	public static string Reload
	{
		[Token(Token = "0x6002C47")]
		[Address(RVA = "0x5986D00", Offset = "0x5985D00", VA = "0x5986D00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_Reload): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546703 == false) {
				Il2CppMethodInitialized_07546703 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.ReloadValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x170006DB")]
	public static string HorseMount
	{
		[Token(Token = "0x6002C48")]
		[Address(RVA = "0x5986D70", Offset = "0x5985D70", VA = "0x5986D70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_HorseMount): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546704 == false) {
				Il2CppMethodInitialized_07546704 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.HorseMountValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x170006DC")]
	public static string HorseWalk
	{
		[Token(Token = "0x6002C49")]
		[Address(RVA = "0x5986DE0", Offset = "0x5985DE0", VA = "0x5986DE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_HorseWalk): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546705 == false) {
				Il2CppMethodInitialized_07546705 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.HorseWalkValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x170006DD")]
	public static string HorseJump
	{
		[Token(Token = "0x6002C4A")]
		[Address(RVA = "0x5986E50", Offset = "0x5985E50", VA = "0x5986E50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_HorseJump): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546706 == false) {
				Il2CppMethodInitialized_07546706 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.HorseJumpValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x170006DE")]
	public static string NapeLock
	{
		[Token(Token = "0x6002C4B")]
		[Address(RVA = "0x5986EC0", Offset = "0x5985EC0", VA = "0x5986EC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_NapeLock): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546707 == false) {
				Il2CppMethodInitialized_07546707 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.NapeLockValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x170006DF")]
	public static string Walk
	{
		[Token(Token = "0x6002C4C")]
		[Address(RVA = "0x5986F30", Offset = "0x5985F30", VA = "0x5986F30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_Walk): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546708 == false) {
				Il2CppMethodInitialized_07546708 = true;
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputHumanEnum.WalkValue;
			}
			return *(String*)(typeof(CustomLogicInputHumanEnum)).static_fields;
		}
	}

	[Token(Token = "0x170006E0")]
	public override string ClassName
	{
		[Token(Token = "0x6002C4D")]
		[Address(RVA = "0x5986FA0", Offset = "0x5985FA0", VA = "0x5986FA0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_ClassName): clean
			return "InputHumanEnum";
		}
	}

	[Token(Token = "0x170006E1")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002C4E")]
		[Address(RVA = "0x5986FD0", Offset = "0x5985FD0", VA = "0x5986FD0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170006E2")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002C4F")]
		[Address(RVA = "0x5986FE0", Offset = "0x5985FE0", VA = "0x5986FE0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170006E3")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002C50")]
		[Address(RVA = "0x5986FF0", Offset = "0x5985FF0", VA = "0x5986FF0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002C3C")]
	[Address(RVA = "0x5986830", Offset = "0x5985830", VA = "0x5986830")]
	public CustomLogicInputHumanEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c (CustomLogic.CustomLogicInputHumanEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075466f8 == false) {
			Il2CppMethodInitialized_075466f8 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicInputHumanEnum.c.

	// CustomLogic.CustomLogicInputHumanEnum$$.cctor: clean
	static CustomLogicInputHumanEnum()
	{
		CustomLogic_CustomLogicInputHumanEnum_StaticFields pCVar1;

		CustomLogicInputHumanEnum.WalkValue = "Human/Walk";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.AttackDefaultValue = "Human/AttackDefault";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.AttackSpecialValue = "Human/AttackSpecial";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.HookLeftValue = "Human/HookLeft";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.HookRightValue = "Human/HookRight";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.HookBothValue = "Human/HookBoth";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.DashValue = "Human/Dash";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.ReelInValue = "Human/ReelIn";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.ReelOutValue = "Human/ReelOut";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.DodgeValue = "Human/Dodge";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.JumpValue = "Human/Jump";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.ReloadValue = "Human/Reload";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.HorseMountValue = "Human/HorseMount";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.HorseWalkValue = "Human/HorseWalk";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.HorseJumpValue = "Human/HorseJump";
		pCVar1 = typeof(CustomLogicInputHumanEnum).static_fields;
		pCVar1.NapeLockValue = "Human/NapeLock";
		return;
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"AttackDefault");
		__this.Add((Il2CppObject *)"AttackSpecial");
		__this.Add((Il2CppObject *)"HookLeft");
		__this.Add((Il2CppObject *)"HookRight");
		__this.Add((Il2CppObject *)"HookBoth");
		__this.Add((Il2CppObject *)"Dash");
		__this.Add((Il2CppObject *)"ReelIn");
		__this.Add((Il2CppObject *)"ReelOut");
		__this.Add((Il2CppObject *)"Dodge");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Reload");
		__this.Add((Il2CppObject *)"HorseMount");
		__this.Add((Il2CppObject *)"HorseWalk");
		__this.Add((Il2CppObject *)"HorseJump");
		__this.Add((Il2CppObject *)"NapeLock");
		__this.Add((Il2CppObject *)"Walk");
		CustomLogicInputHumanEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackDefault>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__AttackDefault_g____getter_2_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754671e == false) {
			Il2CppMethodInitialized_0754671e = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469bc == false) {
			Il2CppMethodInitialized_075469bc = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.AttackDefaultValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackSpecial>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSpecial_g____getter_3_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754671f == false) {
			Il2CppMethodInitialized_0754671f = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469bd == false) {
			Il2CppMethodInitialized_075469bd = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.AttackSpecialValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookLeft>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__HookLeft_g____getter_4_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546720 == false) {
			Il2CppMethodInitialized_07546720 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469be == false) {
			Il2CppMethodInitialized_075469be = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.HookLeftValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookRight>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__HookRight_g____getter_5_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546721 == false) {
			Il2CppMethodInitialized_07546721 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469bf == false) {
			Il2CppMethodInitialized_075469bf = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.HookRightValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookBoth>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__HookBoth_g____getter_6_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546722 == false) {
			Il2CppMethodInitialized_07546722 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c0 == false) {
			Il2CppMethodInitialized_075469c0 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.HookBothValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Dash_g____getter_7_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546723 == false) {
			Il2CppMethodInitialized_07546723 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c1 == false) {
			Il2CppMethodInitialized_075469c1 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.DashValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__ReelIn_g____getter_8_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546724 == false) {
			Il2CppMethodInitialized_07546724 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c2 == false) {
			Il2CppMethodInitialized_075469c2 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.ReelInValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__ReelOut_g____getter_9_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546725 == false) {
			Il2CppMethodInitialized_07546725 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c3 == false) {
			Il2CppMethodInitialized_075469c3 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.ReelOutValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Dodge_g____getter_10_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546726 == false) {
			Il2CppMethodInitialized_07546726 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c4 == false) {
			Il2CppMethodInitialized_075469c4 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.DodgeValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_11_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546727 == false) {
			Il2CppMethodInitialized_07546727 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c5 == false) {
			Il2CppMethodInitialized_075469c5 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.JumpValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Reload_g____getter_12_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546728 == false) {
			Il2CppMethodInitialized_07546728 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c6 == false) {
			Il2CppMethodInitialized_075469c6 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.ReloadValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__HorseMount_g____getter_13_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546729 == false) {
			Il2CppMethodInitialized_07546729 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c7 == false) {
			Il2CppMethodInitialized_075469c7 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.HorseMountValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseWalk>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__HorseWalk_g____getter_14_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754672a == false) {
			Il2CppMethodInitialized_0754672a = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c8 == false) {
			Il2CppMethodInitialized_075469c8 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.HorseWalkValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseJump>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__HorseJump_g____getter_15_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754672b == false) {
			Il2CppMethodInitialized_0754672b = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469c9 == false) {
			Il2CppMethodInitialized_075469c9 = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.HorseJumpValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__NapeLock>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__NapeLock_g____getter_16_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754672c == false) {
			Il2CppMethodInitialized_0754672c = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ca == false) {
			Il2CppMethodInitialized_075469ca = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.NapeLockValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputHumanEnum)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_17_0(CustomLogicInputHumanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754672d == false) {
			Il2CppMethodInitialized_0754672d = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469cb == false) {
			Il2CppMethodInitialized_075469cb = true;
			uVar1 = (typeof(CustomLogicInputHumanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputHumanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputHumanEnum.WalkValue;
		}
		return *(object*)(typeof(CustomLogicInputHumanEnum)).static_fields;
	}
}
