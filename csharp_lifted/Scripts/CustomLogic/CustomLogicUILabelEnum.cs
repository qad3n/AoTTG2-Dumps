// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicUILabelEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicUILabelEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000593")]
[CompilerGenerated]
internal class CustomLogicUILabelEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000594")]
	public static class Factory
	{
		[Token(Token = "0x6003306")]
		[Address(RVA = "0x59C0F30", Offset = "0x59BFF30", VA = "0x59C0F30")]
		public static CustomLogicUILabelEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicUILabelEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicUILabelEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicUILabelEnum();
			return (CustomLogicUILabelEnum)__this;
		}
	}

	[Token(Token = "0x2000595")]
	public static class Bindings
	{
		[Token(Token = "0x4001894")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003307")]
		[Address(RVA = "0x59C1050", Offset = "0x59C0050", VA = "0x59C1050")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicUILabelEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x516feaaa) {
				if (uVar2 < 0xb6af656) {
					if (uVar2 == 0x6348be7) {
						bVar1 = (name == "BottomLeft");
						if (bVar1) {
							if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__BottomLeft();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__BottomLeft();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xb6af655) {
						bVar1 = (name == "TopCenter");
						if (bVar1) {
							if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__TopCenter();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__TopCenter();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x30130eca) {
					bVar1 = (name == "MiddleRight");
					if (bVar1) {
						if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__MiddleRight();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__MiddleRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x516feaa9) {
					bVar1 = (name == "MiddleLeft");
					if (bVar1) {
						if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__MiddleLeft();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__MiddleLeft();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x984f3d99) {
				if (uVar2 == 0x984f3d98) {
					bVar1 = (name == "BottomRight");
					if (bVar1) {
						if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__BottomRight();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__BottomRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7dfdc8a6) {
					bVar1 = (name == "TopRight");
					if (bVar1) {
						if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__TopRight();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__TopRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xa87d916d) {
				bVar1 = (name == "TopLeft");
				if (bVar1) {
					if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicUILabelEnum.Bindings)) ;
						pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__TopLeft();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__TopLeft();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xb23900c1) {
				bVar1 = (name == "MiddleCenter");
				if (bVar1) {
					if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicUILabelEnum.Bindings)) ;
						pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__MiddleCenter();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__MiddleCenter();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xbd631cff) {
				bVar1 = (name == "BottomCenter");
				if (bVar1) {
					if ((typeof(CustomLogicUILabelEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicUILabelEnum.Bindings)) ;
						pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__BottomCenter();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicUILabelEnum.Bindings.__CreatePropertyBinding__BottomCenter();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicUILabelEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003308")]
		[Address(RVA = "0x59C14A0", Offset = "0x59C04A0", VA = "0x59C14A0")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__TopCenter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopCenter): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c1c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c1c = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopCenter_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003309")]
		[Address(RVA = "0x59C1540", Offset = "0x59C0540", VA = "0x59C1540")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__TopLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopLeft): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c1d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c1d = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopLeft_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600330A")]
		[Address(RVA = "0x59C15E0", Offset = "0x59C05E0", VA = "0x59C15E0")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__TopRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopRight): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c1e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c1e = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__TopRight_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600330B")]
		[Address(RVA = "0x59C1680", Offset = "0x59C0680", VA = "0x59C1680")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__MiddleCenter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleCenter): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c1f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c1f = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleCenter_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600330C")]
		[Address(RVA = "0x59C1720", Offset = "0x59C0720", VA = "0x59C1720")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__MiddleLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleLeft): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c20 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c20 = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleLeft_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600330D")]
		[Address(RVA = "0x59C17C0", Offset = "0x59C07C0", VA = "0x59C17C0")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__MiddleRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleRight): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c21 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c21 = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__MiddleRight_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600330E")]
		[Address(RVA = "0x59C1860", Offset = "0x59C0860", VA = "0x59C1860")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__BottomCenter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomCenter): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c22 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c22 = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomCenter_g____getter_8);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600330F")]
		[Address(RVA = "0x59C1900", Offset = "0x59C0900", VA = "0x59C1900")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__BottomLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomLeft): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c23 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c23 = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomLeft_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003310")]
		[Address(RVA = "0x59C19A0", Offset = "0x59C09A0", VA = "0x59C19A0")]
		public static CLPropertyBinding<CustomLogicUILabelEnum> __CreatePropertyBinding__BottomRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomRight): 3 lines keep C-only constructs
			Func<CustomLogicUILabelEnum, object> __this;
			CLPropertyBinding<CustomLogicUILabelEnum> __this_00;

			if (Il2CppMethodInitialized_07546c24 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicUILabelEnum>)) ;
				Il2CppMethodInitialized_07546c24 = true;
			}
			__this = new Func<CustomLogicUILabelEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUILabelEnum_Bindings___CreatePropertyBinding__BottomRight_g____getter_10);
			__this_00 = new CLPropertyBinding<CustomLogicUILabelEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000936")]
	public static string TopCenter
	{
		[Token(Token = "0x60032F9")]
		[Address(RVA = "0x59C0D20", Offset = "0x59BFD20", VA = "0x59C0D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_TopCenter): clean
			return "TopCenter";
		}
	}

	[Token(Token = "0x17000937")]
	public static string TopLeft
	{
		[Token(Token = "0x60032FA")]
		[Address(RVA = "0x59C0D50", Offset = "0x59BFD50", VA = "0x59C0D50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_TopLeft): clean
			return "TopLeft";
		}
	}

	[Token(Token = "0x17000938")]
	public static string TopRight
	{
		[Token(Token = "0x60032FB")]
		[Address(RVA = "0x59C0D80", Offset = "0x59BFD80", VA = "0x59C0D80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_TopRight): clean
			return "TopRight";
		}
	}

	[Token(Token = "0x17000939")]
	public static string MiddleCenter
	{
		[Token(Token = "0x60032FC")]
		[Address(RVA = "0x59C0DB0", Offset = "0x59BFDB0", VA = "0x59C0DB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_MiddleCenter): clean
			return "MiddleCenter";
		}
	}

	[Token(Token = "0x1700093A")]
	public static string MiddleLeft
	{
		[Token(Token = "0x60032FD")]
		[Address(RVA = "0x59C0DE0", Offset = "0x59BFDE0", VA = "0x59C0DE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_MiddleLeft): clean
			return "MiddleLeft";
		}
	}

	[Token(Token = "0x1700093B")]
	public static string MiddleRight
	{
		[Token(Token = "0x60032FE")]
		[Address(RVA = "0x59C0E10", Offset = "0x59BFE10", VA = "0x59C0E10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_MiddleRight): clean
			return "MiddleRight";
		}
	}

	[Token(Token = "0x1700093C")]
	public static string BottomCenter
	{
		[Token(Token = "0x60032FF")]
		[Address(RVA = "0x59C0E40", Offset = "0x59BFE40", VA = "0x59C0E40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_BottomCenter): clean
			return "BottomCenter";
		}
	}

	[Token(Token = "0x1700093D")]
	public static string BottomLeft
	{
		[Token(Token = "0x6003300")]
		[Address(RVA = "0x59C0E70", Offset = "0x59BFE70", VA = "0x59C0E70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_BottomLeft): clean
			return "BottomLeft";
		}
	}

	[Token(Token = "0x1700093E")]
	public static string BottomRight
	{
		[Token(Token = "0x6003301")]
		[Address(RVA = "0x59C0EA0", Offset = "0x59BFEA0", VA = "0x59C0EA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_BottomRight): clean
			return "BottomRight";
		}
	}

	[Token(Token = "0x1700093F")]
	public override string ClassName
	{
		[Token(Token = "0x6003302")]
		[Address(RVA = "0x59C0ED0", Offset = "0x59BFED0", VA = "0x59C0ED0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_ClassName): clean
			return "UILabelEnum";
		}
	}

	[Token(Token = "0x17000940")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003303")]
		[Address(RVA = "0x59C0F00", Offset = "0x59BFF00", VA = "0x59C0F00", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000941")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003304")]
		[Address(RVA = "0x59C0F10", Offset = "0x59BFF10", VA = "0x59C0F10", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000942")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003305")]
		[Address(RVA = "0x59C0F20", Offset = "0x59BFF20", VA = "0x59C0F20", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60032F8")]
	[Address(RVA = "0x59C0CB0", Offset = "0x59BFCB0", VA = "0x59C0CB0")]
	public CustomLogicUILabelEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c (CustomLogic.CustomLogicUILabelEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546c0f == false) {
			Il2CppMethodInitialized_07546c0f = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicUILabelEnum.c.

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"TopCenter");
		__this.Add((Il2CppObject *)"TopLeft");
		__this.Add((Il2CppObject *)"TopRight");
		__this.Add((Il2CppObject *)"MiddleCenter");
		__this.Add((Il2CppObject *)"MiddleLeft");
		__this.Add((Il2CppObject *)"MiddleRight");
		__this.Add((Il2CppObject *)"BottomCenter");
		__this.Add((Il2CppObject *)"BottomLeft");
		__this.Add((Il2CppObject *)"BottomRight");
		CustomLogicUILabelEnum.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicUILabelEnum.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopCenter>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__TopCenter_g____getter_2_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"TopCenter";
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopLeft>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__TopLeft_g____getter_3_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"TopLeft";
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopRight>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__TopRight_g____getter_4_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"TopRight";
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleCenter>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__MiddleCenter_g____getter_5_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"MiddleCenter";
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleLeft>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__MiddleLeft_g____getter_6_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"MiddleLeft";
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleRight>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__MiddleRight_g____getter_7_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"MiddleRight";
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomCenter>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__BottomCenter_g____getter_8_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"BottomCenter";
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomLeft>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__BottomLeft_g____getter_9_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"BottomLeft";
	}

	// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomRight>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__BottomRight_g____getter_10_0(CustomLogicUILabelEnum __i)
	{
		return (Il2CppObject *)"BottomRight";
	}
}
