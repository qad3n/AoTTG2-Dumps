// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLineRendererBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineRendererBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000496")]
[CompilerGenerated]
internal class CustomLogicLineRendererBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000497")]
	public static class Factory
	{
		[Token(Token = "0x6001F09")]
		[Address(RVA = "0x58FB9F0", Offset = "0x58FA9F0", VA = "0x58FB9F0")]
		public static CustomLogicLineRendererBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object pIVar1;
			CustomLogicColorBuiltin color;
			CustomLogicLineRendererBuiltin __this;
			String pSVar2;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			float width;
			int local_1c;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length == 0) {
				__this = new CustomLogicLineRendererBuiltin();
			}
			else {
				if ((int)args.Length != 2) {
					local_1c = (int32_t)args.Length;
					pSVar2 = local_1c.ToString();
					str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineRendererBuiltin constructor found that takes ");
					str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
					pSVar2 = String.Concat(str0, pSVar2, str2);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
					__this_00 = new ArgumentException(pSVar2);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Factory_CreateInstance);
					throw (object)__this_00;
				}
				pIVar1 = args[0];
				color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(pIVar1);
				if ((int)args.Length < 2) {
					width = 1.0;
				}
				else {
					pIVar1 = args[1];
					width = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
				}
				__this = new CustomLogicLineRendererBuiltin(color, width);
			}
			return __this;
		}
	}

	[Token(Token = "0x2000498")]
	public static class Bindings
	{
		[Token(Token = "0x40016A4")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001F0A")]
		[Address(RVA = "0x58FBBB0", Offset = "0x58FABB0", VA = "0x58FBBB0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> pCVar3;
			CLMethodBinding<CustomLogicLineRendererBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x6095fd8c) {
				if (uVar2 < 0x2cfc2a49) {
					if (uVar2 < 0x159c41c2) {
						if (uVar2 == 0x492dcce) {
							bVar1 = (name == "WidthCurve");
							if (bVar1) {
								pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__WidthCurve();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xf5de282) {
							bVar1 = (name == "NumCapVertices");
							if (bVar1) {
								pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__NumCapVertices();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x159c41c1) {
							bVar1 = (name == "PositionCount");
							if (bVar1) {
								pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__PositionCount();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x22c5d116) {
						bVar1 = (name == "EndWidth");
						if (bVar1) {
							pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__EndWidth();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x26701326) {
						bVar1 = (name == "UseWorldSpace");
						if (bVar1) {
							pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__UseWorldSpace();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2cfc2a48) {
						bVar1 = (name == "ColorGradient");
						if (bVar1) {
							pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__ColorGradient();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x4d76a4e6) {
					if (uVar2 == 0x3ab64785) {
						bVar1 = (name == "ShadowCastingMode");
						if (bVar1) {
							pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__ShadowCastingMode();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x47671a04) {
						bVar1 = (name == "GetPosition");
						if (bVar1) {
							pCVar4 = CustomLogicLineRendererBuiltin.Bindings.__CreateMethodBinding__GetPosition();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x4d76a4e5) {
						bVar1 = (name == "Destroy");
						if (bVar1) {
							pCVar4 = CustomLogicLineRendererBuiltin.Bindings.__CreateMethodBinding__Destroy();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0x55b97e71) {
					bVar1 = (name == "NumCornerVertices");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__NumCornerVertices();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x57f6a0eb) {
					bVar1 = (name == "ReceiveShadows");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__ReceiveShadows();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6095fd8b) {
					bVar1 = (name == "Loop");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__Loop();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x9d8b8ba8) {
				if (uVar2 < 0x8adad751) {
					if (uVar2 == 0x8adad750) {
						bVar1 = (name == "SetPosition");
						if (bVar1) {
							pCVar4 = CustomLogicLineRendererBuiltin.Bindings.__CreateMethodBinding__SetPosition();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x745f1e36) {
						bVar1 = (name == "LineColor");
						if (bVar1) {
							pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__LineColor();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7d8f7dfb) {
						bVar1 = (name == "ColorGradientMode");
						if (bVar1) {
							pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__ColorGradientMode();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8c6f2b00) {
					bVar1 = (name == "CreateLineRenderer");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar4 = CustomLogicLineRendererBuiltin.Bindings.__CreateMethodBinding__CreateLineRenderer();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x9c86e43e) {
					bVar1 = (name == "Enabled");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__Enabled();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x9d8b8ba7) {
					bVar1 = (name == "AlphaGradient");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__AlphaGradient();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc9bf8382) {
				if (uVar2 == 0xb495ddf7) {
					bVar1 = (name == "TextureMode");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__TextureMode();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc3a1ba13) {
					bVar1 = (name == "BindTo");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar4 = CustomLogicLineRendererBuiltin.Bindings.__CreateMethodBinding__BindTo();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xc9bf8381) {
					bVar1 = (name == "IsValid");
					if (bVar1) {
						if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__IsValid();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xd66abafe) {
				bVar1 = (name == "Alignment");
				if (bVar1) {
					pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__Alignment();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xde87c531) {
				bVar1 = (name == "StartWidth");
				if (bVar1) {
					pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__StartWidth();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe1505484) {
				bVar1 = (name == "WidthMultiplier");
				if (bVar1) {
					pCVar3 = CustomLogicLineRendererBuiltin.Bindings.__CreatePropertyBinding__WidthMultiplier();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineRendererBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001F0B")]
		[Address(RVA = "0x58FC4B0", Offset = "0x58FB4B0", VA = "0x58FC4B0")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__IsValid()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__IsValid): 3 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_00;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__IsValid_g____getter);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001F0C")]
		[Address(RVA = "0x58FC550", Offset = "0x58FB550", VA = "0x58FC550")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__StartWidth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__StartWidth): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____get);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__StartWidth_g____set);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F0D")]
		[Address(RVA = "0x58FC630", Offset = "0x58FB630", VA = "0x58FC630")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__EndWidth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__EndWidth): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____gette);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__EndWidth_g____sette);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F0E")]
		[Address(RVA = "0x58FC710", Offset = "0x58FB710", VA = "0x58FC710")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__LineColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__LineColor): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____gett);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__LineColor_g____sett);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F0F")]
		[Address(RVA = "0x58FC7F0", Offset = "0x58FB7F0", VA = "0x58FC7F0")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__PositionCount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__PositionCount): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__PositionCount_g_71c0610);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F10")]
		[Address(RVA = "0x58FC8D0", Offset = "0x58FB8D0", VA = "0x58FC8D0")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__Enabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Enabled): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F11")]
		[Address(RVA = "0x58FC9B0", Offset = "0x58FB9B0", VA = "0x58FC9B0")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__Loop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Loop): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____getter_8);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Loop_g____setter_8);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F12")]
		[Address(RVA = "0x58FCA90", Offset = "0x58FBA90", VA = "0x58FCA90")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__NumCornerVertices()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__NumCornerVertices): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCornerVertices_g_71c0600);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F13")]
		[Address(RVA = "0x58FCB70", Offset = "0x58FBB70", VA = "0x58FCB70")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__NumCapVertices()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__NumCapVertices): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__NumCapVertices_g_71c05f0);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F14")]
		[Address(RVA = "0x58FCC50", Offset = "0x58FBC50", VA = "0x58FCC50")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__Alignment()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__Alignment): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____gett);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__Alignment_g____sett);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F15")]
		[Address(RVA = "0x58FCD30", Offset = "0x58FBD30", VA = "0x58FCD30")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__TextureMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__TextureMode): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____ge);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__TextureMode_g____se);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F16")]
		[Address(RVA = "0x58FCE10", Offset = "0x58FBE10", VA = "0x58FCE10")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__UseWorldSpace()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__UseWorldSpace): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__UseWorldSpace_g_71c0660);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F17")]
		[Address(RVA = "0x58FCEF0", Offset = "0x58FBEF0", VA = "0x58FCEF0")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__ShadowCastingMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ShadowCastingMode): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ShadowCastingMode_g_71c0630);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F18")]
		[Address(RVA = "0x58FCFD0", Offset = "0x58FBFD0", VA = "0x58FCFD0")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__ReceiveShadows()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ReceiveShadows): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ReceiveShadows_g_71c0620);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F19")]
		[Address(RVA = "0x58FD0B0", Offset = "0x58FC0B0", VA = "0x58FD0B0")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__ColorGradient()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ColorGradient): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradient_g_71c0588);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F1A")]
		[Address(RVA = "0x58FD190", Offset = "0x58FC190", VA = "0x58FD190")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__AlphaGradient()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__AlphaGradient): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__AlphaGradient_g_71c0578);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F1B")]
		[Address(RVA = "0x58FD270", Offset = "0x58FC270", VA = "0x58FD270")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__WidthCurve()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__WidthCurve): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____get);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthCurve_g____set);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F1C")]
		[Address(RVA = "0x58FD350", Offset = "0x58FC350", VA = "0x58FD350")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__WidthMultiplier()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__WidthMultiplier): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__WidthMultiplier_g_71c0680);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F1D")]
		[Address(RVA = "0x58FD430", Offset = "0x58FC430", VA = "0x58FD430")]
		public static CLPropertyBinding<CustomLogicLineRendererBuiltin> __CreatePropertyBinding__ColorGradientMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreatePropertyBinding__ColorGradientMode): 4 lines keep C-only constructs
			Func<CustomLogicLineRendererBuiltin, object> __this;
			Action<CustomLogicLineRendererBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLineRendererBuiltin> __this_01;

			__this = new Func<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g);
			__this_00 = new Action<CustomLogicLineRendererBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings___CreatePropertyBinding__ColorGradientMode_g_71c0598);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicLineRendererBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F1E")]
		[Address(RVA = "0x58FD510", Offset = "0x58FC510", VA = "0x58FD510")]
		public static CLMethodBinding<CustomLogicLineRendererBuiltin> __CreateMethodBinding__BindTo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__BindTo): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLineRendererBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLineRendererBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e44 == false) {
				Il2CppMethodInitialized_07545e44 = true;
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLineRendererBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicLineRendererBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__BindTo_b__21_0);
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLineRendererBuiltin>((System_Func_T__object____object__o)__this) ;
			return __this_00;
		}

		[Token(Token = "0x6001F1F")]
		[Address(RVA = "0x58FD650", Offset = "0x58FC650", VA = "0x58FD650")]
		public static CLMethodBinding<CustomLogicLineRendererBuiltin> __CreateMethodBinding__Destroy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__Destroy): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLineRendererBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLineRendererBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e45 == false) {
				Il2CppMethodInitialized_07545e45 = true;
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLineRendererBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicLineRendererBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__Destroy_b__22_0);
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLineRendererBuiltin>((System_Func_T__object____object__o)__this) ;
			return __this_00;
		}

		[Token(Token = "0x6001F20")]
		[Address(RVA = "0x58FD790", Offset = "0x58FC790", VA = "0x58FD790")]
		public static CLMethodBinding<CustomLogicLineRendererBuiltin> __CreateMethodBinding__CreateLineRenderer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__CreateLineRenderer): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLineRendererBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLineRendererBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e46 == false) {
				Il2CppMethodInitialized_07545e46 = true;
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLineRendererBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicLineRendererBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__CreateLineRenderer);
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLineRendererBuiltin>((System_Func_T__object____object__o)__this) ;
			return __this_00;
		}

		[Token(Token = "0x6001F21")]
		[Address(RVA = "0x58FD8D0", Offset = "0x58FC8D0", VA = "0x58FD8D0")]
		public static CLMethodBinding<CustomLogicLineRendererBuiltin> __CreateMethodBinding__GetPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__GetPosition): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLineRendererBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLineRendererBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e47 == false) {
				Il2CppMethodInitialized_07545e47 = true;
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLineRendererBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicLineRendererBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__GetPosition_b__24_0);
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLineRendererBuiltin>((System_Func_T__object____object__o)__this) ;
			return __this_00;
		}

		[Token(Token = "0x6001F22")]
		[Address(RVA = "0x58FDA10", Offset = "0x58FCA10", VA = "0x58FDA10")]
		public static CLMethodBinding<CustomLogicLineRendererBuiltin> __CreateMethodBinding__SetPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$__CreateMethodBinding__SetPosition): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLineRendererBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLineRendererBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLineRendererBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e48 == false) {
				Il2CppMethodInitialized_07545e48 = true;
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLineRendererBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLineRendererBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicLineRendererBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__25_0);
				pCVar2 = typeof(CustomLogicLineRendererBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLineRendererBuiltin>((System_Func_T__object____object__o)__this) ;
			return __this_00;
		}
	}

	[Token(Token = "0x40016A1")]
	[FieldOffset(Offset = "0x30")]
	public LineRenderer Value;

	[Token(Token = "0x40016A2")]
	[FieldOffset(Offset = "0x38")]
	private Material _material;

	[Token(Token = "0x40016A3")]
	[FieldOffset(Offset = "0x40")]
	private CustomLogicComponentInstance _owner;

	[Token(Token = "0x17000374")]
	public bool IsValid
	{
		[Token(Token = "0x6001ED9")]
		[Address(RVA = "0x58F9670", Offset = "0x58F8670", VA = "0x58F9670")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_IsValid): clean
			Object x;
			bool bVar1;

			x = (Object)this.Value;
			bVar1 = (x != null);
			return bVar1;
		}
	}

	[Token(Token = "0x17000375")]
	public float StartWidth
	{
		[Token(Token = "0x6001EDE")]
		[Address(RVA = "0x58F9B60", Offset = "0x58F8B60", VA = "0x58F9B60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_StartWidth): clean
			LineRenderer __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001EDF")]
		[Address(RVA = "0x58F9B80", Offset = "0x58F8B80", VA = "0x58F9B80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_StartWidth): clean
			LineRenderer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.startWidth = value;
			return;
		}
	}

	[Token(Token = "0x17000376")]
	public float EndWidth
	{
		[Token(Token = "0x6001EE0")]
		[Address(RVA = "0x58F9BA0", Offset = "0x58F8BA0", VA = "0x58F9BA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_EndWidth): clean
			LineRenderer __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001EE1")]
		[Address(RVA = "0x58F9BC0", Offset = "0x58F8BC0", VA = "0x58F9BC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_EndWidth): clean
			LineRenderer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.endWidth = value;
			return;
		}
	}

	[Token(Token = "0x17000377")]
	public CustomLogicColorBuiltin LineColor
	{
		[Token(Token = "0x6001EE2")]
		[Address(RVA = "0x58F9BE0", Offset = "0x58F8BE0", VA = "0x58F9BE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_LineColor): clean
			Renderer __this_00;
			Material __this_01;
			Color255 __this_02;
			CustomLogicColorBuiltin __this_03;
			Color color;

			__this_00 = (Renderer)this.Value;
			if (__this_00 != null) {
				__this_01 = __this_00.material;
				if (__this_01 != null) {
					color = __this_01.color;
					__this_02 = new Color255(color);
					__this_03 = new CustomLogicColorBuiltin(__this_02);
					return __this_03;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6001EE3")]
		[Address(RVA = "0x58F9C90", Offset = "0x58F8C90", VA = "0x58F9C90")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_LineColor): clean
			Renderer __this_00;
			Color255 __this_01;
			Material __this_02;
			Color value_00;

			__this_00 = (Renderer)this.Value;
			if (__this_00 != null) {
				__this_02 = __this_00.material;
				if ((value != null) &&(__this_01 = value.Value, __this_01 != null)) {
					value_00 = __this_01.ToColor();
					if (__this_02 != null) {
						__this_02.color = value_00;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000378")]
	public int PositionCount
	{
		[Token(Token = "0x6001EE4")]
		[Address(RVA = "0x58F9CE0", Offset = "0x58F8CE0", VA = "0x58F9CE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_PositionCount): clean
			LineRenderer __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001EE5")]
		[Address(RVA = "0x58F9D00", Offset = "0x58F8D00", VA = "0x58F9D00")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_PositionCount): clean
			LineRenderer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.positionCount = value;
			return;
		}
	}

	[Token(Token = "0x17000379")]
	public new bool Enabled
	{
		[Token(Token = "0x6001EE6")]
		[Address(RVA = "0x58F9D20", Offset = "0x58F8D20", VA = "0x58F9D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_Enabled): clean
			Renderer __this_00;
			bool bVar1;

			__this_00 = (Renderer)this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001EE7")]
		[Address(RVA = "0x58F9D40", Offset = "0x58F8D40", VA = "0x58F9D40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_Enabled): clean
			Renderer __this_00;

			__this_00 = (Renderer)this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.enabled = value;
			return;
		}
	}

	[Token(Token = "0x1700037A")]
	public bool Loop
	{
		[Token(Token = "0x6001EE8")]
		[Address(RVA = "0x58F9D60", Offset = "0x58F8D60", VA = "0x58F9D60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_Loop): clean
			LineRenderer __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001EE9")]
		[Address(RVA = "0x58F9D80", Offset = "0x58F8D80", VA = "0x58F9D80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_Loop): clean
			LineRenderer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.loop = value;
			return;
		}
	}

	[Token(Token = "0x1700037B")]
	public int NumCornerVertices
	{
		[Token(Token = "0x6001EEA")]
		[Address(RVA = "0x58F9DA0", Offset = "0x58F8DA0", VA = "0x58F9DA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_NumCornerVertices): clean
			LineRenderer __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001EEB")]
		[Address(RVA = "0x58F9DC0", Offset = "0x58F8DC0", VA = "0x58F9DC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_NumCornerVertices): clean
			LineRenderer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.numCornerVertices = value;
			return;
		}
	}

	[Token(Token = "0x1700037C")]
	public int NumCapVertices
	{
		[Token(Token = "0x6001EEC")]
		[Address(RVA = "0x58F9DE0", Offset = "0x58F8DE0", VA = "0x58F9DE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_NumCapVertices): clean
			LineRenderer __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001EED")]
		[Address(RVA = "0x58F9E00", Offset = "0x58F8E00", VA = "0x58F9E00")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_NumCapVertices): clean
			LineRenderer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.numCapVertices = value;
			return;
		}
	}

	[Token(Token = "0x1700037D")]
	public int Alignment
	{
		[Token(Token = "0x6001EEE")]
		[Address(RVA = "0x58F9E20", Offset = "0x58F8E20", VA = "0x58F9E20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_Alignment): clean
			LineRenderer __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001EEF")]
		[Address(RVA = "0x58F9E40", Offset = "0x58F8E40", VA = "0x58F9E40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_Alignment): 5 lines keep C-only constructs
			LineRenderer __this_00;
			Il2CppType handle;
			bool bVar1;
			Type enumType;
			object pIVar2;
			String pSVar3;
			Il2CppClass klass;
			ArgumentException __this_01;
			MethodInfo lastManagedFrame;
			int iStack_30;
			int iStack_2c;

			handle = TypeRef_UnityEngine_LineAlignment;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			iStack_2c = value;
			pIVar2 = (object)iStack_2c;
			bVar1 = Enum.IsDefined(enumType, pIVar2);
			if (bVar1) {
				__this_00 = this.Value;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.alignment = value;
				return;
			}
			iStack_30 = value;
			pIVar2 = (object)iStack_30;
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown line alignment value: {0}");
			pSVar3 = String.Format(pSVar3, pIVar2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this_01 = new ArgumentException(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_Alignment);
			throw (object)__this_01;
		}
	}

	[Token(Token = "0x1700037E")]
	public int TextureMode
	{
		[Token(Token = "0x6001EF0")]
		[Address(RVA = "0x58F9F80", Offset = "0x58F8F80", VA = "0x58F9F80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_TextureMode): clean
			LineRenderer __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001EF1")]
		[Address(RVA = "0x58F9FA0", Offset = "0x58F8FA0", VA = "0x58F9FA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_TextureMode): 5 lines keep C-only constructs
			LineRenderer __this_00;
			Il2CppType handle;
			bool bVar1;
			Type enumType;
			object pIVar2;
			String pSVar3;
			Il2CppClass klass;
			ArgumentException __this_01;
			MethodInfo lastManagedFrame;
			int iStack_30;
			int iStack_2c;

			handle = TypeRef_UnityEngine_LineTextureMode;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			iStack_2c = value;
			pIVar2 = (object)iStack_2c;
			bVar1 = Enum.IsDefined(enumType, pIVar2);
			if (bVar1) {
				__this_00 = this.Value;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.textureMode = value;
				return;
			}
			iStack_30 = value;
			pIVar2 = (object)iStack_30;
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown line texture mode value: {0}");
			pSVar3 = String.Format(pSVar3, pIVar2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this_01 = new ArgumentException(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_TextureMode);
			throw (object)__this_01;
		}
	}

	[Token(Token = "0x1700037F")]
	public bool UseWorldSpace
	{
		[Token(Token = "0x6001EF2")]
		[Address(RVA = "0x58FA0E0", Offset = "0x58F90E0", VA = "0x58FA0E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_UseWorldSpace): clean
			LineRenderer __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001EF3")]
		[Address(RVA = "0x58FA100", Offset = "0x58F9100", VA = "0x58FA100")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_UseWorldSpace): clean
			LineRenderer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.useWorldSpace = value;
			return;
		}
	}

	[Token(Token = "0x17000380")]
	public int ShadowCastingMode
	{
		[Token(Token = "0x6001EF4")]
		[Address(RVA = "0x58FA120", Offset = "0x58F9120", VA = "0x58FA120")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_ShadowCastingMode): clean
			Renderer __this_00;
			int iVar1;

			__this_00 = (Renderer)this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001EF5")]
		[Address(RVA = "0x58FA140", Offset = "0x58F9140", VA = "0x58FA140")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_ShadowCastingMode): 5 lines keep C-only constructs
			Renderer __this_00;
			Il2CppType handle;
			bool bVar1;
			Type enumType;
			object pIVar2;
			String pSVar3;
			Il2CppClass klass;
			ArgumentException __this_01;
			MethodInfo lastManagedFrame;
			int iStack_30;
			int iStack_2c;

			handle = TypeRef_UnityEngine_Rendering_ShadowCastingMode;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			iStack_2c = value;
			pIVar2 = (object)iStack_2c;
			bVar1 = Enum.IsDefined(enumType, pIVar2);
			if (bVar1) {
				__this_00 = (Renderer)this.Value;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.shadowCastingMode = value;
				return;
			}
			iStack_30 = value;
			pIVar2 = (object)iStack_30;
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown shadow casting mode value: {0}");
			pSVar3 = String.Format(pSVar3, pIVar2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this_01 = new ArgumentException(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_ShadowCastingMode);
			throw (object)__this_01;
		}
	}

	[Token(Token = "0x17000381")]
	public bool ReceiveShadows
	{
		[Token(Token = "0x6001EF6")]
		[Address(RVA = "0x58FA280", Offset = "0x58F9280", VA = "0x58FA280")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_ReceiveShadows): clean
			Renderer __this_00;
			bool bVar1;

			__this_00 = (Renderer)this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001EF7")]
		[Address(RVA = "0x58FA2A0", Offset = "0x58F92A0", VA = "0x58FA2A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_ReceiveShadows): clean
			Renderer __this_00;

			__this_00 = (Renderer)this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.receiveShadows = value;
			return;
		}
	}

	[Token(Token = "0x17000382")]
	public CustomLogicListBuiltin ColorGradient
	{
		[Token(Token = "0x6001EF8")]
		[Address(RVA = "0x58FA2C0", Offset = "0x58F92C0", VA = "0x58FA2C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_ColorGradient): 5 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			uint uVar4;
			ulong uVar3;
			uint uVar5;
			LineRenderer __this_00;
			List<object> __this_01;
			Object[] pSVar6;
			int iVar8;
			CustomLogicListBuiltin __this_02;
			Gradient __this_03;
			GradientColorKey[] pUVar9;
			ulong uVar10;
			Color255 __this_04;
			CustomLogicColorBuiltin __this_05;
			float pfVar11;
			ulong uVar12;
			Color color;

			__this_02 = new CustomLogicListBuiltin();
			__this_00 = this.Value;
			if (__this_00 != null) {
				__this_03 = __this_00.colorGradient;
				if (__this_03 != null) {
					pUVar9 = __this_03.colorKeys;
					if (pUVar9 != null) {
						iVar8 = (int)pUVar9.Length;
						if (__this_02 == null) {
							if (0 < iVar8) goto label_059fa48e;
						}
						else if (0 < iVar8) {
							uVar10 = pUVar9.Length & 0xffffffff;
							pfVar11 = &pUVar9[0].color.b;
							uVar12 = 0;
							do {
								if (uVar10 <= uVar12) {
									throw new IndexOutOfRangeException();
								}
								uVar2 = ((Color)(pfVar11 + -2)).r;
								uVar4 = ((Color)(pfVar11 + -2)).g;
								color.g = (float)uVar4;
								color.r = (float)uVar2;
								uVar3 = *(ulong)pfVar11;
								__this_01 = __this_02.List;
								color._8_8_ = uVar3;
								__this_04 = new Color255(color);
								__this_05 = il2cpp_codegen_object_new(typeof(CustomLogicColorBuiltin)) ;
								__this_05 = new CustomLogicColorBuiltin(__this_04);
								if (__this_01 == null) goto label_059fa48e;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar6 = __this_01._items;
								if (pSVar6 == null) goto label_059fa48e;
								uVar5 = __this_01._size;
								if (uVar5 < (uint)pSVar6.Length) {
									__this_01._size = uVar5 + 1;
									pSVar6[(int)uVar5] = (object)__this_05;
								}
								else {
									__this_01.AddWithResize((object)__this_05);
								}
								uVar12 = uVar12 + 1;
								uVar5 = (uint)pUVar9.Length;
								uVar10 = (ulong)uVar5;
								pfVar11 = pfVar11 + 5;
							} while ((long)uVar12 < (long)(int)uVar5);
						}
						return __this_02;
					}
				}
			}
		label_059fa48e: ;
			throw new NullReferenceException();
		}
		[Token(Token = "0x6001EF9")]
		[Address(RVA = "0x58FA4A0", Offset = "0x58F94A0", VA = "0x58FA4A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_ColorGradient): 29 lines keep C-only constructs
			int piVar1;
			GradientColorKey pUVar2;
			byte bVar3;
			uint uVar4;
			List<object> __this_00;
			LineRenderer __this_01;
			GradientColorKey item;
			bool bVar6;
			List<GradientColorKey> __this_02;
			Gradient __this_03;
			GradientColorKey[] pUVar7;
			Color UVar8;
			byte[] auStack_88 = new byte[16];
			float fStack_78;
			uint uStack_74;
			System_Collections_Generic_List_Enumerator_object__o SStack_68;
			CustomLogicLineRendererBuiltin pCStack_48;
			System_Collections_Generic_List_Enumerator_object__o pSStack_38;

			SStack_68._list = null;
			SStack_68._index = 0;
			SStack_68._version = 0;
			SStack_68._current = null;
			__this_02 = new List<GradientColorKey>() ;
			if ((value != null) &&(__this_00 = value.List, __this_00 != null)) {
				auStack_88.GetEnumerator(__this_00);
				SStack_68._current = (object)CONCAT44(uStack_74, fStack_78);
				SStack_68._list = (List<T>)auStack_88._0_8_;
				SStack_68._index = auStack_88._8_4_;
				SStack_68._version = auStack_88._12_4_;
				pSStack_38 = &SStack_68;
				pCStack_48 = this;
				if (__this_02 == null) {
					bVar6 = SStack_68.MoveNext();
					if (bVar6) {
						if (SStack_68._current != null) {
							bVar3 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
							if ((bVar3 <= ((SStack_68._current).klass._2).typeHierarchyDepth) &&(((SStack_68._current).klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicColorBuiltin))) {
								if (SStack_68._current[3].klass != null) {
									UVar8 = SStack_68._current[3].klass.ToColor();
									auStack_88._0_8_ = null;
									auStack_88._8_4_ = 0;
									auStack_88._12_4_ = 0;
									fStack_78 = 0.0;
									auStack_88 = new GradientColorKey(UVar8, 0.0);
		label_059fa826: ;
									throw new NullReferenceException();
								}
		label_059fa7fb: ;
								throw new NullReferenceException();
							}
						}
		label_059fa74a: ;
						Debug.LogError((Il2CppObject *)"Invalid color type");
						SStack_68.Dispose() ;
						return;
					}
				}
				else {
					while (bVar6 = SStack_68.MoveNext()) {
						if (SStack_68._current == null) goto label_059fa74a;
						bVar3 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
						if ((((SStack_68._current).klass._2).typeHierarchyDepth < bVar3) ||(((SStack_68._current).klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CustomLogicColorBuiltin))) goto label_059fa74a;
						if (SStack_68._current[3].klass == null) goto label_059fa7fb;
						UVar8 = SStack_68._current[3].klass.ToColor();
						auStack_88._0_8_ = null;
						auStack_88._8_4_ = 0;
						auStack_88._12_4_ = 0;
						fStack_78 = 0.0;
						auStack_88 = new GradientColorKey(UVar8, 0.0);
						piVar1 = &__this_02._version;
						*piVar1 = *piVar1 + 1;
						pUVar7 = __this_02._items;
						if (pUVar7 == null) goto label_059fa826;
						uVar4 = __this_02._size;
						if (uVar4 < (uint)pUVar7.Length) {
							__this_02._size = uVar4 + 1;
							pUVar7[(int)uVar4].time = fStack_78;
							pUVar2 = pUVar7.m_Items + (int)uVar4;
							pUVar2.color.r = (float)auStack_88._0_4_;
							pUVar2.color.g = (float)auStack_88._4_4_;
							pUVar2.color.b = (float)auStack_88._8_4_;
							pUVar2.color.a = (float)auStack_88._12_4_;
						}
						else {
							item.color.b = (float)auStack_88._8_4_;
							item.color.a = (float)auStack_88._12_4_;
							item.color.r = (float)auStack_88._0_4_;
							item.color.g = (float)auStack_88._4_4_;
							item.time = fStack_78;
							__this_02.AddWithResize(item);
						}
					}
				}
				SStack_68.Dispose();
				__this_01 = pCStack_48.Value;
				if (((__this_01 != null) &&(__this_03 = __this_01.colorGradient, __this_02 != null)) &&(pUVar7 = __this_02.ToArray(), __this_03 != null)) {
					__this_03.colorKeys = pUVar7;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000383")]
	public CustomLogicListBuiltin AlphaGradient
	{
		[Token(Token = "0x6001EFA")]
		[Address(RVA = "0x58FA8A0", Offset = "0x58F98A0", VA = "0x58FA8A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_AlphaGradient): 6 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			LineRenderer __this_00;
			List<object> __this_01;
			Object[] pSVar3;
			int iVar5;
			ulong in_RAX;
			CustomLogicListBuiltin __this_02;
			Gradient __this_03;
			GradientAlphaKey[] pUVar6;
			ulong uVar7;
			object item;
			ulong uVar8;
			ulong uStack_38;

			uStack_38 = in_RAX;
			__this_02 = new CustomLogicListBuiltin();
			__this_00 = this.Value;
			if (__this_00 != null) {
				__this_03 = __this_00.colorGradient;
				if (__this_03 != null) {
					pUVar6 = __this_03.alphaKeys;
					if (pUVar6 != null) {
						iVar5 = (int)pUVar6.Length;
						if (__this_02 == null) {
							if (0 < iVar5) goto label_059fa9f6;
						}
						else if (0 < iVar5) {
							uVar7 = pUVar6.Length & 0xffffffff;
							uVar8 = 0;
							do {
								if (uVar7 <= uVar8) {
									throw new IndexOutOfRangeException();
								}
								__this_01 = __this_02.List;
								uStack_38 = CONCAT44(pUVar6[uVar8].alpha, (undefined4)uStack_38);
								item = (object)(((long)&uStack_38 + 4));
								if (__this_01 == null) goto label_059fa9f6;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar3 = __this_01._items;
								if (pSVar3 == null) goto label_059fa9f6;
								uVar2 = __this_01._size;
								if (uVar2 < (uint)pSVar3.Length) {
									__this_01._size = uVar2 + 1;
									pSVar3[(int)uVar2] = item;
								}
								else {
									__this_01.AddWithResize(item);
								}
								uVar8 = uVar8 + 1;
								uVar2 = (uint)pUVar6.Length;
								uVar7 = (ulong)uVar2;
							} while ((long)uVar8 < (long)(int)uVar2);
						}
						return __this_02;
					}
				}
			}
		label_059fa9f6: ;
			throw new NullReferenceException();
		}
		[Token(Token = "0x6001EFB")]
		[Address(RVA = "0x58FAA00", Offset = "0x58F9A00", VA = "0x58FAA00")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_AlphaGradient): 15 lines keep C-only constructs
			int piVar1;
			float fVar2;
			uint uVar3;
			List<object> __this_00;
			LineRenderer __this_01;
			bool bVar5;
			List<GradientAlphaKey> __this_02;
			float pfVar6;
			Gradient __this_03;
			GradientAlphaKey[] pUVar7;
			object obj;
			GradientAlphaKey UStack_70;
			byte[] auStack_68 = new byte[8];
			object pIStack_58;
			byte[] auStack_50 = new byte[16];
			object pIStack_40;
			CustomLogicLineRendererBuiltin pCStack_38;

			auStack_68 = (byte[])0x0;
			pIStack_58 = null;
			__this_02 = new List<GradientAlphaKey>() ;
			if ((value != null) &&(__this_00 = value.List, __this_00 != null)) {
				auStack_50.GetEnumerator(__this_00);
				pIStack_58 = pIStack_40;
				auStack_68 = (byte[])auStack_50._0_8_;
				auStack_50._0_8_ = null;
				auStack_50._8_8_ = auStack_68;
				pCStack_38 = this;
				if (__this_02 == null) {
					bVar5 = auStack_68.MoveNext();
					obj = pIStack_58;
					if (bVar5) {
						if ((pIStack_58 != null) && (pIStack_58.klass == g_data_07556740)) {
							UStack_70.alpha = 0.0;
							UStack_70.time = 0.0;
							if (((pIStack_58.klass._1).element_class == (g_data_07556740._1).element_class) &&(pfVar6 = il2cpp_vm_Object_Unbox(pIStack_58),(obj.klass._1).element_class == (g_data_07556740._1).element_class)) {
								fVar2 = *pfVar6;
								pfVar6 = il2cpp_vm_Object_Unbox(obj);
								UStack_70 = new GradientAlphaKey(fVar2, *pfVar6);
		label_059fad67: ;
								throw new NullReferenceException();
							}
		label_059fad6c: ;
							throw new InvalidCastException();
						}
		label_059fac68: ;
						Debug.LogError((Il2CppObject *)"Invalid alpha type");
						auStack_68.Dispose() ;
						return;
					}
				}
				else {
					while (true) {
						bVar5 = auStack_68.MoveNext();
						obj = pIStack_58;
						if (!(bVar5)) break;
						if ((pIStack_58 == null) || (pIStack_58.klass != g_data_07556740)) goto label_059fac68;
						UStack_70.alpha = 0.0;
						UStack_70.time = 0.0;
						if (((pIStack_58.klass._1).element_class != (g_data_07556740._1).element_class) ||(pfVar6 = il2cpp_vm_Object_Unbox(pIStack_58),(obj.klass._1).element_class != (g_data_07556740._1).element_class)) goto label_059fad6c;
						fVar2 = *pfVar6;
						pfVar6 = il2cpp_vm_Object_Unbox(obj);
						UStack_70 = new GradientAlphaKey(fVar2, *pfVar6);
						piVar1 = &__this_02._version;
						*piVar1 = *piVar1 + 1;
						pUVar7 = __this_02._items;
						if (pUVar7 == null) goto label_059fad67;
						uVar3 = __this_02._size;
						if (uVar3 < (uint)pUVar7.Length) {
							__this_02._size = uVar3 + 1;
							pUVar7[(int)uVar3] = UStack_70;
						}
						else {
							__this_02.AddWithResize((GradientAlphaKey)UStack_70);
						}
					}
				}
				auStack_68.Dispose();
				__this_01 = pCStack_38.Value;
				if (((__this_01 != null) &&(__this_03 = __this_01.colorGradient, __this_02 != null)) &&(pUVar7 = __this_02.ToArray(), __this_03 != null)) {
					__this_03.alphaKeys = pUVar7;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000384")]
	public CustomLogicListBuiltin WidthCurve
	{
		[Token(Token = "0x6001EFC")]
		[Address(RVA = "0x58FADE0", Offset = "0x58F9DE0", VA = "0x58FADE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_WidthCurve): 2 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			uint uVar3;
			LineRenderer __this_00;
			uint uVar5;
			List<object> __this_01;
			Object[] pSVar4;
			uint uVar6;
			uint uVar7;
			Vector2 UVar8;
			float fVar10;
			int iVar11;
			CustomLogicListBuiltin __this_02;
			AnimationCurve __this_03;
			Keyframe[] pUVar12;
			ulong uVar13;
			CustomLogicVector2Builtin __this_04;
			Keyframe pUVar14;
			ulong uVar15;
			float fVar16;
			Keyframe UStack_68;
			float fStack_48;

			UStack_68.m_WeightedMode = 0;
			UStack_68.m_InWeight = 0.0;
			UStack_68.m_OutWeight = 0.0;
			UStack_68.m_Time = 0.0;
			UStack_68.m_Value = 0.0;
			UStack_68.m_InTangent = 0.0;
			UStack_68.m_OutTangent = 0.0;
			__this_02 = new CustomLogicListBuiltin();
			__this_00 = this.Value;
			if (__this_00 != null) {
				__this_03 = __this_00.widthCurve;
				if (__this_03 != null) {
					pUVar12 = __this_03.keys;
					if (pUVar12 != null) {
						iVar11 = (int)pUVar12.Length;
						if (__this_02 == null) {
							if (0 < iVar11) goto label_059faff7;
						}
						else if (0 < iVar11) {
							uVar13 = pUVar12.Length & 0xffffffff;
							pUVar14 = pUVar12.m_Items;
							uVar15 = 0;
							do {
								if (uVar13 <= uVar15) {
									throw new IndexOutOfRangeException();
								}
								UStack_68.m_Time = pUVar14.m_Time;
								UStack_68.m_Value = pUVar14.m_Value;
								uVar6 = pUVar14.m_InTangent;
								uVar7 = pUVar14.m_OutTangent;
								uVar3 = pUVar14.m_WeightedMode;
								uVar5 = pUVar14.m_InWeight;
								UStack_68.m_OutWeight = pUVar14.m_OutWeight;
								__this_01 = __this_02.List;
								UStack_68.m_InTangent = (float)uVar6;
								UStack_68.m_OutTangent = (float)uVar7;
								UStack_68.m_WeightedMode = uVar3;
								UStack_68.m_InWeight = (float)uVar5;
								fVar16 = UStack_68.time;
								fStack_48 = UStack_68.value;
								fVar10 = fStack_48;
								__this_04 = new CustomLogicVector2Builtin();
								UVar8.y = fVar10;
								UVar8.x = fVar16;
								__this_04._value = UVar8;
								if (__this_01 == null) goto label_059faff7;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar4 = __this_01._items;
								if (pSVar4 == null) goto label_059faff7;
								uVar2 = __this_01._size;
								if (uVar2 < (uint)pSVar4.Length) {
									__this_01._size = uVar2 + 1;
									pSVar4[(int)uVar2] = (object)__this_04;
								}
								else {
									__this_01.AddWithResize((object)__this_04);
								}
								uVar15 = uVar15 + 1;
								uVar2 = (uint)pUVar12.Length;
								uVar13 = (ulong)uVar2;
								pUVar14 = pUVar14 + 1;
							} while ((long)uVar15 < (long)(int)uVar2);
						}
						return __this_02;
					}
				}
			}
		label_059faff7: ;
			throw new NullReferenceException();
		}
		[Token(Token = "0x6001EFD")]
		[Address(RVA = "0x58FB010", Offset = "0x58FA010", VA = "0x58FB010")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_WidthCurve): 28 lines keep C-only constructs
			int piVar1;
			Keyframe pUVar2;
			byte bVar3;
			uint uVar4;
			List<object> __this_00;
			LineRenderer __this_01;
			Keyframe item;
			Keyframe pUVar5;
			bool bVar7;
			List<Keyframe> __this_02;
			AnimationCurve __this_03;
			Keyframe[] pUVar8;
			System_Collections_Generic_List_Enumerator_object__o SStack_a8;
			List<T> pSStack_88;
			float fStack_80;
			float fStack_7c;
			int iStack_78;
			ulong uStack_74;
			byte[] auStack_68 = new byte[24];
			float fStack_50;
			CustomLogicLineRendererBuiltin pCStack_48;
			System_Collections_Generic_List_Enumerator_object__o pSStack_38;

			SStack_a8._list = null;
			SStack_a8._index = 0;
			SStack_a8._version = 0;
			SStack_a8._current = null;
			__this_02 = new List<Keyframe>();
			if ((value != null) &&(__this_00 = value.List, __this_00 != null)) {
				auStack_68.GetEnumerator(__this_00);
				SStack_a8._current = (object)CONCAT44(auStack_68._20_4_, auStack_68._16_4_);
				SStack_a8._version = auStack_68._12_4_;
				SStack_a8._index = auStack_68._8_4_;
				SStack_a8._list = (List<T>)auStack_68._0_8_;
				pSStack_38 = &SStack_a8;
				pCStack_48 = this;
				if (__this_02 == null) {
					bVar7 = SStack_a8.MoveNext();
					if (bVar7) {
						if (SStack_a8._current != null) {
							bVar3 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
							if ((bVar3 <= ((SStack_a8._current).klass._2).typeHierarchyDepth) &&(((SStack_a8._current).klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicVector2Builtin))) {
								iStack_78 = 0;
								uStack_74._0_4_ = 0.0;
								uStack_74._4_4_ = 0.0;
								pSStack_88 = null;
								fStack_80 = 0.0;
								fStack_7c = 0.0;
								pSStack_88 = new Keyframe(*(float)&SStack_a8._current[3].klass, *(float)((long)&SStack_a8._current[3].klass + 4));
		label_059fb39a: ;
								throw new NullReferenceException();
							}
						}
		label_059fb2c9: ;
						Debug.LogError((Il2CppObject *)"Invalid point type");
						SStack_a8.Dispose() ;
						return;
					}
				}
				else {
					while (bVar7 = SStack_a8.MoveNext()) {
						if (SStack_a8._current == null) goto label_059fb2c9;
						bVar3 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
						if ((((SStack_a8._current).klass._2).typeHierarchyDepth < bVar3) ||(((SStack_a8._current).klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CustomLogicVector2Builtin))) goto label_059fb2c9;
						iStack_78 = 0;
						uStack_74._0_4_ = 0.0;
						uStack_74._4_4_ = 0.0;
						pSStack_88 = null;
						fStack_80 = 0.0;
						fStack_7c = 0.0;
						pSStack_88 = new Keyframe(*(float)&SStack_a8._current[3].klass, *(float)((long)&SStack_a8._current[3].klass + 4));
						auStack_68._16_4_ = iStack_78;
						auStack_68._20_4_ = SUB84(uStack_74, 0);
						fStack_50 = SUB84(uStack_74, 4);
						auStack_68._0_8_ = pSStack_88;
						auStack_68._8_4_ = fStack_80;
						auStack_68._12_4_ = fStack_7c;
						piVar1 = &__this_02._version;
						*piVar1 = *piVar1 + 1;
						pUVar8 = __this_02._items;
						if (pUVar8 == null) goto label_059fb39a;
						uVar4 = __this_02._size;
						if (uVar4 < (uint)pUVar8.Length) {
							__this_02._size = uVar4 + 1;
							pUVar5 = &pUVar8[(int)uVar4];
							pUVar5.m_OutTangent = fStack_7c;
							pUVar5.m_WeightedMode = iStack_78;
							pUVar5.m_InWeight = (float)uStack_74;
							pUVar5.m_OutWeight = uStack_74._4_4_;
							pUVar2 = pUVar8.m_Items + (int)uVar4;
							*(List<T>*)&pUVar2.fields = pSStack_88;
							pUVar2.m_InTangent = fStack_80;
							pUVar2.m_OutTangent = fStack_7c;
						}
						else {
							item.m_InTangent = fStack_80;
							item._0_8_ = pSStack_88;
							item.m_OutTangent = fStack_7c;
							item.m_WeightedMode = iStack_78;
							item.m_InWeight = (float)uStack_74;
							item.m_OutWeight = uStack_74._4_4_;
							__this_02.AddWithResize(item);
						}
					}
				}
				SStack_a8.Dispose();
				__this_01 = pCStack_48.Value;
				if (((__this_01 != null) &&(__this_03 = __this_01.widthCurve, __this_02 != null)) &&(pUVar8 = __this_02.ToArray() , __this_03 != null)) {
					__this_03.keys = pUVar8;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000385")]
	public float WidthMultiplier
	{
		[Token(Token = "0x6001EFE")]
		[Address(RVA = "0x58FB410", Offset = "0x58FA410", VA = "0x58FB410")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_WidthMultiplier): clean
			LineRenderer __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001EFF")]
		[Address(RVA = "0x58FB430", Offset = "0x58FA430", VA = "0x58FB430")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_WidthMultiplier): clean
			LineRenderer __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.widthMultiplier = value;
			return;
		}
	}

	[Token(Token = "0x17000386")]
	public int ColorGradientMode
	{
		[Token(Token = "0x6001F00")]
		[Address(RVA = "0x58FB450", Offset = "0x58FA450", VA = "0x58FB450")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_ColorGradientMode): clean
			LineRenderer __this_00;
			int iVar1;
			Gradient __this_01;

			__this_00 = this.Value;
			if (__this_00 != null) {
				__this_01 = __this_00.colorGradient;
				if (__this_01 != null) {
					return iVar1;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6001F01")]
		[Address(RVA = "0x58FB480", Offset = "0x58FA480", VA = "0x58FB480")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$set_ColorGradientMode): 5 lines keep C-only constructs
			LineRenderer pUVar1;
			Il2CppType handle;
			bool bVar2;
			Type enumType;
			object pIVar3;
			Gradient __this_00;
			String pSVar4;
			Il2CppClass klass;
			ArgumentException __this_01;
			MethodInfo lastManagedFrame;
			int iStack_30;
			int iStack_2c;

			handle = TypeRef_UnityEngine_GradientMode;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			iStack_2c = value;
			pIVar3 = (object)iStack_2c;
			bVar2 = Enum.IsDefined(enumType, pIVar3);
			if (bVar2) {
				pUVar1 = this.Value;
				if (pUVar1 != null) {
					__this_00 = pUVar1.colorGradient;
					if (__this_00 != null) {
						__this_00.mode = value;
						pUVar1 = this.Value;
						if (pUVar1 != null) {
							pUVar1.colorGradient = __this_00;
							return;
						}
					}
				}
				throw new NullReferenceException();
			}
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Unknown gradient mode value: {0}");
			pSVar4 = String.Format(pSVar4, pIVar3);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this_01 = new ArgumentException(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_set_ColorGradientMode);
			throw (object)__this_01;
		}
	}

	[Token(Token = "0x17000387")]
	public override string ClassName
	{
		[Token(Token = "0x6001F05")]
		[Address(RVA = "0x58FB720", Offset = "0x58FA720", VA = "0x58FB720", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_ClassName): clean
			return "LineRenderer";
		}
	}

	[Token(Token = "0x17000388")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001F06")]
		[Address(RVA = "0x58FB750", Offset = "0x58FA750", VA = "0x58FB750", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x17000389")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001F07")]
		[Address(RVA = "0x58FB760", Offset = "0x58FA760", VA = "0x58FB760", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700038A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001F08")]
		[Address(RVA = "0x58FB770", Offset = "0x58FA770", VA = "0x58FB770", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001ED6")]
	[Address(RVA = "0x58F93C0", Offset = "0x58F83C0", VA = "0x58F93C0")]
	public CustomLogicLineRendererBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$.ctor): 1 lines keep C-only constructs
		base((Color)(ZEXT816(0x3f80000000000000) << 0x40), 1.0);
		return;
	}

	[Token(Token = "0x6001ED7")]
	[Address(RVA = "0x58F9630", Offset = "0x58F8630", VA = "0x58F9630")]
	public CustomLogicLineRendererBuiltin(CustomLogicColorBuiltin color, float width = 1f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$.ctor): clean
		Color255 __this_00;
		Color color_00;

		if (color != null) {
			__this_00 = color.Value;
			if (__this_00 != null) {
				color_00 = __this_00.ToColor();
				base(color_00, width);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001ED8")]
	[Address(RVA = "0x58F93E0", Offset = "0x58F83E0", VA = "0x58F93E0")]
	private CustomLogicLineRendererBuiltin(Color color, float width)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$.ctor): 14 lines keep C-only constructs
		LineRenderer* targetAddress;
		Material* targetAddress_00;
		String path;
		Renderer __this_00;
		GameObject pUVar1;
		LineRenderer pUVar2;
		Material pUVar3;
		CustomLogicLineRendererLifetime pCVar4;

		base();
		pUVar1 = new GameObject();
		if (pUVar1 != null) {
			pUVar2 = pUVar1.AddComponent<LineRenderer>();
			targetAddress = &this.Value;
			this.Value = pUVar2;
			path = ResourcePaths.Map;
			pUVar3 = ResourceManager.InstantiateAsset<Material>(path, "Materials/TransparentMaterial", true, false);
			targetAddress_00 = &this._material;
			this._material = pUVar3;
			__this_00 = (Renderer)this.Value;
			if (__this_00 != null) {
				__this_00.material = *targetAddress_00;
				if ((Renderer)*targetAddress != null) {
					pUVar3 = (*targetAddress).material;
					if (pUVar3 != null) {
						pUVar3.color = color;
						if (*targetAddress != null) {
							(*targetAddress).startWidth = width;
							if (*targetAddress != null) {
								(*targetAddress).endWidth = width;
								if (*targetAddress != null) {
									(*targetAddress).positionCount = 0;
									if ((Renderer)*targetAddress != null) {
										(*targetAddress).enabled = false;
										if ((Component)*targetAddress != null) {
											pUVar1 = (*targetAddress).gameObject;
											if (pUVar1 != null) {
												pCVar4 = pUVar1.AddComponent<CustomLogicLineRendererLifetime>();
												if (pCVar4 != null) {
													pCVar4.LineRenderer = this;
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001EDA")]
	[Address(RVA = "0x58F96C0", Offset = "0x58F86C0", VA = "0x58F96C0")]
	public void BindTo(CustomLogicComponentInstance component)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$BindTo): 12 lines keep C-only constructs
		CustomLogicComponentInstance* targetAddress;
		uint uVar1;
		CustomLogicMapObjectBuiltin pCVar2;
		MapObject pMVar3;
		CustomLogicComponentInstance __this_00;
		Component __this_01;
		GameObject __this_02;
		bool bVar4;
		Transform __this_03;
		Transform parent;
		String paramName;
		Il2CppClass pIVar5;
		ArgumentException __this_04;
		String pSVar6;
		MethodInfo pMVar7;
		Object pUVar8;

		if (component != null) {
			pCVar2 = component.MapObject;
			if (pCVar2 == null) {
	label_059f984c: ;
				throw new NullReferenceException();
			}
			pMVar3 = pCVar2.Value;
			if (pMVar3 == null) {
				pUVar8 = null;
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			else {
				pUVar8 = (Object)pMVar3.GameObject;
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar4 = (pUVar8 == null);
			if (!bVar4) {
				pUVar8 = (Object)this.Value;
				bVar4 = (pUVar8 == null);
				if (!bVar4) {
					targetAddress = &this._owner;
					__this_00 = this._owner;
					if (__this_00 != null) {
						__this_00.UnregisterLineRenderer(this) ;
					}
					*targetAddress = component;
					if (*targetAddress != null) {
						(*targetAddress).RegisterLineRenderer(this);
						__this_01 = (Component)this.Value;
						if (__this_01 != null) {
							__this_03 = __this_01.transform;
							pCVar2 = component.MapObject;
							if ((((pCVar2 != null) &&(pMVar3 = pCVar2.Value, pMVar3 != null)) &&(__this_02 = pMVar3.GameObject, __this_02 != null)) &&(parent = __this_02.transform, __this_03 != null)) {
								__this_03.SetParent(parent, true);
								bVar4 = component.get_Enabled();
								if (bVar4) {
									return;
								}
								this.Destroy();
								return;
							}
						}
					}
					goto label_059f984c;
				}
				pIVar5 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
				__this_04 = (ArgumentException)il2cpp_codegen_object_new(pIVar5);
				pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Cannot bind a destroyed LineRenderer.");
				__this_04 = new InvalidOperationException(pSVar6);
				goto label_059f98c5;
			}
		}
		pIVar5 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
		__this_04 = (ArgumentException)il2cpp_codegen_object_new(pIVar5);
		pSVar6 = il2cpp_codegen_get_runtime_metadata(&"LineRenderer owner must be a valid map component.");
		paramName = il2cpp_codegen_get_runtime_metadata(&"component");
		__this_04 = new ArgumentException(pSVar6, paramName);
	label_059f98c5: ;
		pMVar7 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineRendererBuiltin_BindTo);
		throw (object)__this_04;
	}

	[Token(Token = "0x6001EDB")]
	[Address(RVA = "0x58F98E0", Offset = "0x58F88E0", VA = "0x58F98E0")]
	public void Destroy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$Destroy): clean
		bool bVar1;
		Object x;
		Object pUVar2;

		pUVar2 = (Object)this.Value;
		this.Value = null;
		bVar1 = (pUVar2 != null);
		if (bVar1) {
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			x = (Object)pUVar2.gameObject;
			bVar1 = (x != null);
			if (bVar1) {
				pUVar2 = (Object)pUVar2.gameObject;
				Object.Destroy(pUVar2);
			}
		}
		this.ReleaseResources();
		GC.SuppressFinalize((object)this);
		return;
	}

	[Token(Token = "0x6001EDC")]
	[Address(RVA = "0x58F99F0", Offset = "0x58F89F0", VA = "0x58F99F0")]
	internal void ReleaseResources()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$ReleaseResources): 3 lines keep C-only constructs
		CustomLogicComponentInstance __this_00;
		Material pUVar1;
		bool bVar2;
		Material* targetAddress;

		this.Value = null;
		__this_00 = this._owner;
		if (__this_00 != null) {
			__this_00.UnregisterLineRenderer(this);
		}
		this._owner = null;
		pUVar1 = this._material;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			targetAddress = &this._material;
			pUVar1 = *targetAddress;
			Object.Destroy((Object)pUVar1);
			*targetAddress = null;
			return;
		}
		return;
	}

	[Token(Token = "0x6001EDD")]
	[Address(RVA = "0x58F9AC0", Offset = "0x58F8AC0", VA = "0x58F9AC0", Slot = "1")]
	~CustomLogicLineRendererBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$Finalize): 2 lines keep C-only constructs
		CustomLogicLineRendererBuiltin local_20;
		CustomLogicLineRendererBuiltin* local_10;

		local_10 = &local_20;
		this.Value = null;
		local_20 = this;
		local_20.Finalize();
		return;
	}

	[Token(Token = "0x6001F02")]
	[Address(RVA = "0x58FB5E0", Offset = "0x58FA5E0", VA = "0x58FB5E0")]
	[Obsolete("Create a new instance with LineRenderer() instead.")]
	public static CustomLogicLineRendererBuiltin CreateLineRenderer()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$CreateLineRenderer): 1 lines keep C-only constructs
		CustomLogicLineRendererBuiltin __this;

		__this = new CustomLogicLineRendererBuiltin((Color)(ZEXT816(0x3f80000000000000) << 0x40), 1.0);
		return __this;
	}

	[Token(Token = "0x6001F03")]
	[Address(RVA = "0x58FB630", Offset = "0x58FA630", VA = "0x58FB630")]
	public CustomLogicVector3Builtin GetPosition(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$GetPosition): clean
		LineRenderer __this_00;
		CustomLogicVector3Builtin __this_01;
		Vector3 UVar1;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = __this_00.GetPosition(index);
		__this_01 = new CustomLogicVector3Builtin();
		__this_01.Value.x = UVar1.x;
		__this_01.Value.y = UVar1.y;
		__this_01.Value.z = UVar1.z;
		return __this_01;
	}

	[Token(Token = "0x6001F04")]
	[Address(RVA = "0x58FB6F0", Offset = "0x58FA6F0", VA = "0x58FB6F0")]
	public void SetPosition(int index, CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c (CustomLogic.CustomLogicLineRendererBuiltin$$SetPosition): clean
		LineRenderer __this_00;

		if ((position == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.SetPosition(index, (Vector3)position.Value);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLineRendererBuiltin.c.

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"IsValid");
		__this.Add((Il2CppObject *)"StartWidth");
		__this.Add((Il2CppObject *)"EndWidth");
		__this.Add((Il2CppObject *)"LineColor");
		__this.Add((Il2CppObject *)"PositionCount");
		__this.Add((Il2CppObject *)"Enabled");
		__this.Add((Il2CppObject *)"Loop");
		__this.Add((Il2CppObject *)"NumCornerVertices");
		__this.Add((Il2CppObject *)"NumCapVertices");
		__this.Add((Il2CppObject *)"Alignment");
		__this.Add((Il2CppObject *)"TextureMode");
		__this.Add((Il2CppObject *)"UseWorldSpace");
		__this.Add((Il2CppObject *)"ShadowCastingMode");
		__this.Add((Il2CppObject *)"ReceiveShadows");
		__this.Add((Il2CppObject *)"ColorGradient");
		__this.Add((Il2CppObject *)"AlphaGradient");
		__this.Add((Il2CppObject *)"WidthCurve");
		__this.Add((Il2CppObject *)"WidthMultiplier");
		__this.Add((Il2CppObject *)"ColorGradientMode");
		__this.Add((Il2CppObject *)"BindTo");
		__this.Add((Il2CppObject *)"Destroy");
		__this.Add((Il2CppObject *)"CreateLineRenderer");
		__this.Add((Il2CppObject *)"GetPosition");
		__this.Add((Il2CppObject *)"SetPosition");
		CustomLogicLineRendererBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__IsValid>g____getter|2_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsValid_g____getter_2_0(CustomLogicLineRendererBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.IsValid;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__StartWidth>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__StartWidth_g____getter_3_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.StartWidth;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__StartWidth>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__StartWidth_g____setter_3_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.StartWidth = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__EndWidth>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__EndWidth_g____getter_4_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.EndWidth;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__EndWidth>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__EndWidth_g____setter_4_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.EndWidth = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__LineColor>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__LineColor_g____getter_5_0(CustomLogicLineRendererBuiltin __i)
	{
		CustomLogicColorBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.LineColor;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__LineColor>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__LineColor_g____setter_5_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		CustomLogicColorBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.LineColor = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__PositionCount>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__PositionCount_g____getter_6_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.PositionCount;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__PositionCount>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__PositionCount_g____setter_6_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.PositionCount = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|7_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Enabled_g____getter_7_0(CustomLogicLineRendererBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.Enabled;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__Enabled_g____setter_7_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Enabled = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Loop>g____getter|8_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Loop_g____getter_8_0(CustomLogicLineRendererBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.Loop;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Loop>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__Loop_g____setter_8_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Loop = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCornerVertices>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__NumCornerVertices_g____getter_9_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.NumCornerVertices;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCornerVertices>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__NumCornerVertices_g____setter_9_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.NumCornerVertices = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCapVertices>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__NumCapVertices_g____getter_10_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.NumCapVertices;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__NumCapVertices>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__NumCapVertices_g____setter_10_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.NumCapVertices = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Alignment>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Alignment_g____getter_11_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Alignment;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__Alignment>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__Alignment_g____setter_11_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Alignment = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__TextureMode>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__TextureMode_g____getter_12_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureMode;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__TextureMode>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__TextureMode_g____setter_12_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureMode = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__UseWorldSpace>g____getter|13_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__UseWorldSpace_g____getter_13_0(CustomLogicLineRendererBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.UseWorldSpace;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__UseWorldSpace>g____setter|13_1: clean
	private static void Bindings____CreatePropertyBinding__UseWorldSpace_g____setter_13_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.UseWorldSpace = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ShadowCastingMode>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__ShadowCastingMode_g____getter_14_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ShadowCastingMode;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ShadowCastingMode>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__ShadowCastingMode_g____setter_14_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ShadowCastingMode = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ReceiveShadows>g____getter|15_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__ReceiveShadows_g____getter_15_0(CustomLogicLineRendererBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.ReceiveShadows;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ReceiveShadows>g____setter|15_1: clean
	private static void Bindings____CreatePropertyBinding__ReceiveShadows_g____setter_15_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ReceiveShadows = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradient>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__ColorGradient_g____getter_16_0(CustomLogicLineRendererBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.ColorGradient;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradient>g____setter|16_1: clean
	private static void Bindings____CreatePropertyBinding__ColorGradient_g____setter_16_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		CustomLogicListBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ColorGradient = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__AlphaGradient>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__AlphaGradient_g____getter_17_0(CustomLogicLineRendererBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.AlphaGradient;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__AlphaGradient>g____setter|17_1: clean
	private static void Bindings____CreatePropertyBinding__AlphaGradient_g____setter_17_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		CustomLogicListBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.AlphaGradient = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthCurve>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__WidthCurve_g____getter_18_0(CustomLogicLineRendererBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.WidthCurve;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthCurve>g____setter|18_1: clean
	private static void Bindings____CreatePropertyBinding__WidthCurve_g____setter_18_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		CustomLogicListBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.WidthCurve = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthMultiplier>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__WidthMultiplier_g____getter_19_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.WidthMultiplier;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__WidthMultiplier>g____setter|19_1: clean
	private static void Bindings____CreatePropertyBinding__WidthMultiplier_g____setter_19_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.WidthMultiplier = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradientMode>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__ColorGradientMode_g____getter_20_0(CustomLogicLineRendererBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ColorGradientMode;
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings$$<__CreatePropertyBinding__ColorGradientMode>g____setter|20_1: clean
	private static void Bindings____CreatePropertyBinding__ColorGradientMode_g____setter_20_1(CustomLogicLineRendererBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ColorGradientMode = value;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicLineRendererBuiltin.Bindings.c();
		CustomLogicLineRendererBuiltin.Bindings.c.__9 =(CustomLogicLineRendererBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__BindTo>b__21_0: clean
	private object Bindings_c____CreateMethodBinding__BindTo_b__21_0(CustomLogicLineRendererBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicComponentInstance component;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			component = CustomLogicEvaluator.ConvertTo<CustomLogicComponentInstance>(obj);
			if (__c != null) {
				__c.BindTo(component);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__Destroy>b__22_0: clean
	private object Bindings_c____CreateMethodBinding__Destroy_b__22_0(CustomLogicLineRendererBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Destroy();
		return null;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateLineRenderer>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__CreateLineRenderer_b__23_0(CustomLogicLineRendererBuiltin __c, Object[] __a)
	{
		CustomLogicLineRendererBuiltin pCVar1;

		pCVar1 = CustomLogicLineRendererBuiltin.CreateLineRenderer();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPosition>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__GetPosition_b__24_0(CustomLogicLineRendererBuiltin __c, Object[] __a)
	{
		object obj;
		int index;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.GetPosition(index);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicLineRendererBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__SetPosition_b__25_0(CustomLogicLineRendererBuiltin __c, Object[] __a)
	{
		object obj;
		int index;
		CustomLogicVector3Builtin position;

		if (__a == null) {
	label_059fee00: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (__c != null) {
					__c.SetPosition(index, position);
					return null;
				}
				goto label_059fee00;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
