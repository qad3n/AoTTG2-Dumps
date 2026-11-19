// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicInputAnnieShifterEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200052A")]
[CompilerGenerated]
internal class CustomLogicInputAnnieShifterEnum : BuiltinClassInstance
{
	[Token(Token = "0x200052B")]
	public static class Factory
	{
		[Token(Token = "0x6002B91")]
		[Address(RVA = "0x597EC70", Offset = "0x597DC70", VA = "0x597EC70")]
		public static CustomLogicInputAnnieShifterEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicInputAnnieShifterEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputAnnieShifterEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicInputAnnieShifterEnum();
			return __this;
		}
	}

	[Token(Token = "0x200052C")]
	public static class Bindings
	{
		[Token(Token = "0x40017F9")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002B92")]
		[Address(RVA = "0x597ED60", Offset = "0x597DD60", VA = "0x597ED60")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x42f9ae8b) {
				if (uVar2 < 0x2cfbaa40) {
					if (uVar2 == 0xe1ef32d) {
						bVar1 = (name == "Jump");
						if (bVar1) {
							if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__Jump();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__Jump();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x22ccd730) {
						bVar1 = (name == "Walk");
						if (bVar1) {
							if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__Walk();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__Walk();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2cfbaa3f) {
						bVar1 = (name == "Kick");
						if (bVar1) {
							if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__Kick();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__Kick();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x38122e2c) {
					if (uVar2 == 0x371c1522) {
						bVar1 = (name == "AttackStomp");
						if (bVar1) {
							pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackStomp();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x38122e2b) {
						bVar1 = (name == "AttackHead");
						if (bVar1) {
							pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackHead();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x3acb63d7) {
					bVar1 = (name == "AttackBite");
					if (bVar1) {
						pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackBite();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x42f9ae8a) {
					bVar1 = (name == "AttackBrushFront");
					if (bVar1) {
						pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackBrushFront();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x86ddd849) {
				if (uVar2 == 0x86ddd848) {
					bVar1 = (name == "AttackGrabBottom");
					if (bVar1) {
						if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackGrabBottom();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackGrabBottom();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x53765479) {
					bVar1 = (name == "AttackCombo");
					if (bVar1) {
						if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackCombo();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackCombo();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x76917342) {
					bVar1 = (name == "AttackGrabUp");
					if (bVar1) {
						if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackGrabUp();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackGrabUp();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x93e6a9c5) {
				if (uVar2 == 0x92d2a9f1) {
					bVar1 = (name == "AttackSwing");
					if (bVar1) {
						pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackSwing();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x93e6a9c4) {
					bVar1 = (name == "AttackBrushBack");
					if (bVar1) {
						pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackBrushBack();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xefa1ddf1) {
				bVar1 = (name == "AttackBrushHead");
				if (bVar1) {
					if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackBrushHead();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xff226e93) {
				bVar1 = (name == "AttackGrabMid");
				if (bVar1) {
					if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pCVar3 = CustomLogicInputAnnieShifterEnum.Bindings.__CreatePropertyBinding__AttackGrabMid();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputAnnieShifterEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002B93")]
		[Address(RVA = "0x597F350", Offset = "0x597E350", VA = "0x597F350")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__Kick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Kick): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B94")]
		[Address(RVA = "0x597F3F0", Offset = "0x597E3F0", VA = "0x597F3F0")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Jump): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B95")]
		[Address(RVA = "0x597F490", Offset = "0x597E490", VA = "0x597F490")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Walk): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B96")]
		[Address(RVA = "0x597F530", Offset = "0x597E530", VA = "0x597F530")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackCombo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B97")]
		[Address(RVA = "0x597F5D0", Offset = "0x597E5D0", VA = "0x597F5D0")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackSwing()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackSwing): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackSwing_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B98")]
		[Address(RVA = "0x597F670", Offset = "0x597E670", VA = "0x597F670")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackStomp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackStomp): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackStomp_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B99")]
		[Address(RVA = "0x597F710", Offset = "0x597E710", VA = "0x597F710")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackBite()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBite): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBite_g____g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B9A")]
		[Address(RVA = "0x597F7B0", Offset = "0x597E7B0", VA = "0x597F7B0")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackHead()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackHead): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackHead_g____g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B9B")]
		[Address(RVA = "0x597F850", Offset = "0x597E850", VA = "0x597F850")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackBrushBack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B9C")]
		[Address(RVA = "0x597F8F0", Offset = "0x597E8F0", VA = "0x597F8F0")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackBrushFront()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushFront): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushFront);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B9D")]
		[Address(RVA = "0x597F990", Offset = "0x597E990", VA = "0x597F990")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackBrushHead()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushHead): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushHead_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B9E")]
		[Address(RVA = "0x597FA30", Offset = "0x597EA30", VA = "0x597FA30")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackGrabBottom()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottom): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabBottom);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B9F")]
		[Address(RVA = "0x597FAD0", Offset = "0x597EAD0", VA = "0x597FAD0")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackGrabMid()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabMid): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabMid_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002BA0")]
		[Address(RVA = "0x597FB70", Offset = "0x597EB70", VA = "0x597FB70")]
		public static CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __CreatePropertyBinding__AttackGrabUp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp): 3 lines keep C-only constructs
			Func<CustomLogicInputAnnieShifterEnum, object> __this;
			CLPropertyBinding<CustomLogicInputAnnieShifterEnum> __this_00;

			__this = new Func<CustomLogicInputAnnieShifterEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicInputAnnieShifterEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x40017EB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string KickValue;

	[Token(Token = "0x40017EC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string JumpValue;

	[Token(Token = "0x40017ED")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string WalkValue;

	[Token(Token = "0x40017EE")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string AttackComboValue;

	[Token(Token = "0x40017EF")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string AttackSwingValue;

	[Token(Token = "0x40017F0")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string AttackStompValue;

	[Token(Token = "0x40017F1")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string AttackBiteValue;

	[Token(Token = "0x40017F2")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string AttackHeadValue;

	[Token(Token = "0x40017F3")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string AttackBrushBackValue;

	[Token(Token = "0x40017F4")]
	[FieldOffset(Offset = "0x48")]
	private static readonly string AttackBrushFrontValue;

	[Token(Token = "0x40017F5")]
	[FieldOffset(Offset = "0x50")]
	private static readonly string AttackBrushHeadValue;

	[Token(Token = "0x40017F6")]
	[FieldOffset(Offset = "0x58")]
	private static readonly string AttackGrabBottomValue;

	[Token(Token = "0x40017F7")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string AttackGrabMidValue;

	[Token(Token = "0x40017F8")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string AttackGrabUpValue;

	[Token(Token = "0x1700068C")]
	public static string Kick
	{
		[Token(Token = "0x6002B7E")]
		[Address(RVA = "0x597E340", Offset = "0x597D340", VA = "0x597E340")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Kick): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546566 == false) {
				Il2CppMethodInitialized_07546566 = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.KickValue;
			}
			return *(String*)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields;
		}
	}

	[Token(Token = "0x1700068D")]
	public static string Jump
	{
		[Token(Token = "0x6002B7F")]
		[Address(RVA = "0x597E3B0", Offset = "0x597D3B0", VA = "0x597E3B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Jump): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546567 == false) {
				Il2CppMethodInitialized_07546567 = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.JumpValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x1700068E")]
	public static string Walk
	{
		[Token(Token = "0x6002B80")]
		[Address(RVA = "0x597E420", Offset = "0x597D420", VA = "0x597E420")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Walk): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546568 == false) {
				Il2CppMethodInitialized_07546568 = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.WalkValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x10) ;
		}
	}

	[Token(Token = "0x1700068F")]
	public static string AttackCombo
	{
		[Token(Token = "0x6002B81")]
		[Address(RVA = "0x597E490", Offset = "0x597D490", VA = "0x597E490")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackCombo): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546569 == false) {
				Il2CppMethodInitialized_07546569 = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackComboValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x18) ;
		}
	}

	[Token(Token = "0x17000690")]
	public static string AttackSwing
	{
		[Token(Token = "0x6002B82")]
		[Address(RVA = "0x597E500", Offset = "0x597D500", VA = "0x597E500")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackSwing): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754656a == false) {
				Il2CppMethodInitialized_0754656a = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackSwingValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x20) ;
		}
	}

	[Token(Token = "0x17000691")]
	public static string AttackStomp
	{
		[Token(Token = "0x6002B83")]
		[Address(RVA = "0x597E570", Offset = "0x597D570", VA = "0x597E570")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackStomp): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754656b == false) {
				Il2CppMethodInitialized_0754656b = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackStompValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x28) ;
		}
	}

	[Token(Token = "0x17000692")]
	public static string AttackBite
	{
		[Token(Token = "0x6002B84")]
		[Address(RVA = "0x597E5E0", Offset = "0x597D5E0", VA = "0x597E5E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBite): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754656c == false) {
				Il2CppMethodInitialized_0754656c = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackBiteValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x30) ;
		}
	}

	[Token(Token = "0x17000693")]
	public static string AttackHead
	{
		[Token(Token = "0x6002B85")]
		[Address(RVA = "0x597E650", Offset = "0x597D650", VA = "0x597E650")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackHead): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754656d == false) {
				Il2CppMethodInitialized_0754656d = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackHeadValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x38) ;
		}
	}

	[Token(Token = "0x17000694")]
	public static string AttackBrushBack
	{
		[Token(Token = "0x6002B86")]
		[Address(RVA = "0x597E6C0", Offset = "0x597D6C0", VA = "0x597E6C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushBack): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754656e == false) {
				Il2CppMethodInitialized_0754656e = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackBrushBackValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x40) ;
		}
	}

	[Token(Token = "0x17000695")]
	public static string AttackBrushFront
	{
		[Token(Token = "0x6002B87")]
		[Address(RVA = "0x597E730", Offset = "0x597D730", VA = "0x597E730")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushFront): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754656f == false) {
				Il2CppMethodInitialized_0754656f = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackBrushFrontValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x48) ;
		}
	}

	[Token(Token = "0x17000696")]
	public static string AttackBrushHead
	{
		[Token(Token = "0x6002B88")]
		[Address(RVA = "0x597E7A0", Offset = "0x597D7A0", VA = "0x597E7A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushHead): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546570 == false) {
				Il2CppMethodInitialized_07546570 = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackBrushHeadValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x50) ;
		}
	}

	[Token(Token = "0x17000697")]
	public static string AttackGrabBottom
	{
		[Token(Token = "0x6002B89")]
		[Address(RVA = "0x597E810", Offset = "0x597D810", VA = "0x597E810")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabBottom): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546571 == false) {
				Il2CppMethodInitialized_07546571 = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackGrabBottomValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x58) ;
		}
	}

	[Token(Token = "0x17000698")]
	public static string AttackGrabMid
	{
		[Token(Token = "0x6002B8A")]
		[Address(RVA = "0x597E880", Offset = "0x597D880", VA = "0x597E880")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabMid): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546572 == false) {
				Il2CppMethodInitialized_07546572 = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackGrabMidValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x60) ;
		}
	}

	[Token(Token = "0x17000699")]
	public static string AttackGrabUp
	{
		[Token(Token = "0x6002B8B")]
		[Address(RVA = "0x597E8F0", Offset = "0x597D8F0", VA = "0x597E8F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabUp): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546573 == false) {
				Il2CppMethodInitialized_07546573 = true;
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputAnnieShifterEnum.AttackGrabUpValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x68) ;
		}
	}

	[Token(Token = "0x1700069A")]
	public override string ClassName
	{
		[Token(Token = "0x6002B8C")]
		[Address(RVA = "0x597E960", Offset = "0x597D960", VA = "0x597E960", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_ClassName): clean
			return "InputAnnieShifterEnum";
		}
	}

	[Token(Token = "0x1700069B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002B8D")]
		[Address(RVA = "0x597E990", Offset = "0x597D990", VA = "0x597E990", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700069C")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002B8E")]
		[Address(RVA = "0x597E9A0", Offset = "0x597D9A0", VA = "0x597E9A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700069D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002B8F")]
		[Address(RVA = "0x597E9B0", Offset = "0x597D9B0", VA = "0x597E9B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002B7D")]
	[Address(RVA = "0x597E2D0", Offset = "0x597D2D0", VA = "0x597E2D0")]
	public CustomLogicInputAnnieShifterEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c (CustomLogic.CustomLogicInputAnnieShifterEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546565 == false) {
			Il2CppMethodInitialized_07546565 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicInputAnnieShifterEnum.c.

	// CustomLogic.CustomLogicInputAnnieShifterEnum$$.cctor: clean
	static CustomLogicInputAnnieShifterEnum()
	{
		CustomLogic_CustomLogicInputAnnieShifterEnum_StaticFields pCVar1;

		CustomLogicInputAnnieShifterEnum.KickValue = "AnnieShifter/Kick";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.JumpValue = "AnnieShifter/Jump";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.WalkValue = "AnnieShifter/Walk";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackComboValue = "AnnieShifter/AttackCombo";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackSwingValue = "AnnieShifter/AttackSwing";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackStompValue = "AnnieShifter/AttackStomp";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackBiteValue = "AnnieShifter/AttackBite";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackHeadValue = "AnnieShifter/AttackHead";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackBrushBackValue = "AnnieShifter/AttackBrushBack";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackBrushFrontValue = "AnnieShifter/AttackBrushFront";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackBrushHeadValue = "AnnieShifter/AttackBrushHead";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackGrabBottomValue = "AnnieShifter/AttackGrabBottom";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackGrabMidValue = "AnnieShifter/AttackGrabMid";
		pCVar1 = typeof(CustomLogicInputAnnieShifterEnum).static_fields;
		pCVar1.AttackGrabUpValue = "AnnieShifter/AttackGrabUp";
		return;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Kick");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Walk");
		__this.Add((Il2CppObject *)"AttackCombo");
		__this.Add((Il2CppObject *)"AttackSwing");
		__this.Add((Il2CppObject *)"AttackStomp");
		__this.Add((Il2CppObject *)"AttackBite");
		__this.Add((Il2CppObject *)"AttackHead");
		__this.Add((Il2CppObject *)"AttackBrushBack");
		__this.Add((Il2CppObject *)"AttackBrushFront");
		__this.Add((Il2CppObject *)"AttackBrushHead");
		__this.Add((Il2CppObject *)"AttackGrabBottom");
		__this.Add((Il2CppObject *)"AttackGrabMid");
		__this.Add((Il2CppObject *)"AttackGrabUp");
		CustomLogicInputAnnieShifterEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Kick_g____getter_2_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754666d == false) {
			Il2CppMethodInitialized_0754666d = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754698e == false) {
			Il2CppMethodInitialized_0754698e = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.KickValue;
		}
		return *(object*)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_3_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754666e == false) {
			Il2CppMethodInitialized_0754666e = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754698f == false) {
			Il2CppMethodInitialized_0754698f = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.JumpValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_4_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754666f == false) {
			Il2CppMethodInitialized_0754666f = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546990 == false) {
			Il2CppMethodInitialized_07546990 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.WalkValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x10) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__AttackCombo_g____getter_5_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546670 == false) {
			Il2CppMethodInitialized_07546670 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546991 == false) {
			Il2CppMethodInitialized_07546991 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackComboValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x18) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSwing_g____getter_6_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546671 == false) {
			Il2CppMethodInitialized_07546671 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546992 == false) {
			Il2CppMethodInitialized_07546992 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackSwingValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x20) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__AttackStomp_g____getter_7_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546672 == false) {
			Il2CppMethodInitialized_07546672 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546993 == false) {
			Il2CppMethodInitialized_07546993 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackStompValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x28) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBite_g____getter_8_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546673 == false) {
			Il2CppMethodInitialized_07546673 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546994 == false) {
			Il2CppMethodInitialized_07546994 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackBiteValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x30) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__AttackHead_g____getter_9_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546674 == false) {
			Il2CppMethodInitialized_07546674 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546995 == false) {
			Il2CppMethodInitialized_07546995 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackHeadValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x38) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushBack_g____getter_10_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546675 == false) {
			Il2CppMethodInitialized_07546675 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546996 == false) {
			Il2CppMethodInitialized_07546996 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackBrushBackValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x40) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFront>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushFront_g____getter_11_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546676 == false) {
			Il2CppMethodInitialized_07546676 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546997 == false) {
			Il2CppMethodInitialized_07546997 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackBrushFrontValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x48) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHead>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushHead_g____getter_12_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546677 == false) {
			Il2CppMethodInitialized_07546677 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546998 == false) {
			Il2CppMethodInitialized_07546998 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackBrushHeadValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x50) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottom>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabBottom_g____getter_13_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546678 == false) {
			Il2CppMethodInitialized_07546678 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546999 == false) {
			Il2CppMethodInitialized_07546999 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackGrabBottomValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x58) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMid>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabMid_g____getter_14_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546679 == false) {
			Il2CppMethodInitialized_07546679 = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754699a == false) {
			Il2CppMethodInitialized_0754699a = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackGrabMidValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x60) ;
	}

	// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabUp_g____getter_15_0(CustomLogicInputAnnieShifterEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754667a == false) {
			Il2CppMethodInitialized_0754667a = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754699b == false) {
			Il2CppMethodInitialized_0754699b = true;
			uVar1 = (typeof(CustomLogicInputAnnieShifterEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputAnnieShifterEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputAnnieShifterEnum.AttackGrabUpValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputAnnieShifterEnum)).static_fields + 0x68) ;
	}
}
