// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicVisualElementBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x200060E")]
[CompilerGenerated]
internal class CustomLogicVisualElementBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200060F")]
	public static class Factory
	{
		[Token(Token = "0x6003906")]
		[Address(RVA = "0x5A1AB80", Offset = "0x5A19B80", VA = "0x5A1AB80")]
		public static CustomLogicVisualElementBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVisualElementBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x2000610")]
	public static class Bindings
	{
		[Token(Token = "0x40019DE")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003907")]
		[Address(RVA = "0x5A1AC10", Offset = "0x5A19C10", VA = "0x5A1AC10")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicVisualElementBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicVisualElementBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			if (Il2CppMethodInitialized_075470dd == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVisualElementBuiltin.Bindings)) ;
				Il2CppMethodInitialized_075470dd = true;
			}
			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x933e48c7) {
				if (uVar2 < 0x3b42dfc0) {
					if (uVar2 < 0x175fb728) {
						if (uVar2 < 0x912e1f5) {
							if (uVar2 < 0x154c162) {
								if (uVar2 == 0xe19411) {
									bVar1 = (name == "BorderColorTop");
									if (bVar1) {
										if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
										}
										pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderColorTop();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x154c161) {
									bVar1 = (name == "TextShadowColor");
									if (bVar1) {
										if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
										}
										pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextShadowColor();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0x4a57fc2) {
								bVar1 = (name == "Clear");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Clear();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x736dd56) {
								bVar1 = (name == "Padding");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Padding();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x912e1f4) {
								bVar1 = (name == "GetElementAt");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__GetElementAt();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0xaaf7cfa) {
							if (uVar2 == 0x99b73dc) {
								bVar1 = (name == "Top");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Top();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xaaf7cf9) {
								bVar1 = (name == "BorderWidth");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderWidth();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0xbdcf7a2) {
							bVar1 = (name == "MarginLeft");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__MarginLeft();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x16378c9f) {
							bVar1 = (name == "SetTransformOrigin");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__SetTransformOrigin();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x175fb727) {
							bVar1 = (name == "BorderRadiusBottomLeft");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderRadiusBottomLeft();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x221f26c1) {
						if (uVar2 < 0x1e9e9f86) {
							if (uVar2 == 0x1bd13562) {
								bVar1 = (name == "Height");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Height();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x1e9e9f85) {
								bVar1 = (name == "Right");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Right();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x1f89134f) {
							bVar1 = (name == "Active");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Active();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x21a5901d) {
							bVar1 = (name == "Remove");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Remove();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x221f26c0) {
							bVar1 = (name == "RemoveFromHierarchy");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__RemoveFromHierarchy();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x3040cf54) {
						if (uVar2 == 0x22b5f34a) {
							bVar1 = (name == "Bottom");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Bottom();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2e56c2bc) {
							bVar1 = (name == "PaddingRight");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__PaddingRight();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x3040cf53) {
							bVar1 = (name == "FlexShrink");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__FlexShrink();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x380ec7b3) {
						bVar1 = (name == "PaddingLeft");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__PaddingLeft();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3841413d) {
						bVar1 = (name == "BorderColorBottom");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderColorBottom();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3b42dfbf) {
						bVar1 = (name == "Width");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Width();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x623289d4) {
					if (uVar2 < 0x4872d0d9) {
						if (uVar2 < 0x3dcadc9d) {
							if (uVar2 == 0x3d51a7f8) {
								bVar1 = (name == "AspectRatio");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__AspectRatio();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x3dcadc9c) {
								bVar1 = (name == "TextOverflow");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextOverflow();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x4051a91f) {
							bVar1 = (name == "TextAlign");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextAlign();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x4231df34) {
							bVar1 = (name == "MarginBottom");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__MarginBottom();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x4872d0d8) {
							bVar1 = (name == "BorderRadiusBottomRight");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderRadiusBottomRight();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x54b7f689) {
						if (uVar2 == 0x517ab5aa) {
							bVar1 = (name == "AlignItems");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__AlignItems();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x54b7f688) {
							bVar1 = (name == "BorderWidthTop");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderWidthTop();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x592a4941) {
						bVar1 = (name == "Visible");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Visible();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5cd165a7) {
						bVar1 = (name == "TextWordSpacing");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextWordSpacing();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x623289d3) {
						bVar1 = (name == "MaxWidth");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__MaxWidth();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x7c58895b) {
					if (uVar2 < 0x67bd6402) {
						if (uVar2 == 0x63b03bb4) {
							bVar1 = (name == "BorderWidthLeft");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderWidthLeft();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x67bd6401) {
							bVar1 = (name == "PaddingTop");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__PaddingTop();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x6c164db5) {
						bVar1 = (name == "FontStyle");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__FontStyle();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x74bf49d8) {
						bVar1 = (name == "TransformRotate");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TransformRotate();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7c58895a) {
						bVar1 = (name == "TextWrap");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextWrap();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x8371fa28) {
					if (uVar2 == 0x8098b0d8) {
						bVar1 = (name == "AlignSelf");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__AlignSelf();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x826b7e5c) {
						bVar1 = (name == "TextOutlineWidth");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextOutlineWidth();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x8371fa27) {
						bVar1 = (name == "TextOutlineColor");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextOutlineColor();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8e7f220d) {
					bVar1 = (name == "PaddingBottom");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__PaddingBottom();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x92773890) {
					bVar1 = (name == "Left");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Left();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x933e48c6) {
					bVar1 = (name == "BorderColor");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderColor();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc476866e) {
				if (uVar2 < 0xb045c9bc) {
					if (uVar2 < 0x9f6bc249) {
						if (uVar2 < 0x9921c1dd) {
							if (uVar2 == 0x98c61698) {
								bVar1 = (name == "JustifyContent");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__JustifyContent();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x9921c1dc) {
								bVar1 = (name == "ChildCount");
								if (bVar1) {
									if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									pCVar4 = CustomLogicVisualElementBuiltin.Bindings.__CreatePropertyBinding__ChildCount();
									return (ICLMemberBinding)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x9ab59d8d) {
							bVar1 = (name == "TextShadowBlurRadius");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextShadowBlurRadius();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x9dc3aa14) {
							bVar1 = (name == "Add");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Add();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x9f6bc248) {
							bVar1 = (name == "MinHeight");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__MinHeight();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0xa29623c4) {
						if (uVar2 == 0xa26a44e1) {
							bVar1 = (name == "FontSize");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__FontSize();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xa29623c3) {
							bVar1 = (name == "BorderColorLeft");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderColorLeft();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xa44eab36) {
						bVar1 = (name == "BorderWidthBottom");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderWidthBottom();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xab77dd0e) {
						bVar1 = (name == "MaxHeight");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__MaxHeight();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xb045c9bb) {
						bVar1 = (name == "RegisterClickEventCallback");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__RegisterClickEventCallback();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xc0017a9f) {
					if (uVar2 < 0xb608da5e) {
						if (uVar2 == 0xb1d5595f) {
							bVar1 = (name == "TextLetterSpacing");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextLetterSpacing();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xb608da5d) {
							bVar1 = (name == "FlexGrow");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__FlexGrow();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xb8db521d) {
						bVar1 = (name == "QueryByName");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__QueryByName();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xb8e9fe05) {
						bVar1 = (name == "BorderRadius");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderRadius();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc0017a9e) {
						bVar1 = (name == "RegisterMouseEnterEventCallback");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__RegisterMouseEnterEventCallback();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xc1c6e85f) {
					if (uVar2 == 0xc014fb96) {
						bVar1 = (name == "OverflowY");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__OverflowY();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc114fd29) {
						bVar1 = (name == "OverflowX");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__OverflowX();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc1c6e85e) {
						bVar1 = (name == "TransitionDuration");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TransitionDuration();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc1da6f76) {
					bVar1 = (name == "RegisterFocusInEventCallback");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__RegisterFocusInEventCallback();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc24c3be7) {
					bVar1 = (name == "FlexDirection");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__FlexDirection();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc476866d) {
					bVar1 = (name == "RegisterMouseLeaveEventCallback");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__RegisterMouseLeaveEventCallback();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe0a2f633) {
				if (uVar2 < 0xd61c1c80) {
					if (uVar2 < 0xd1496d31) {
						if (uVar2 == 0xc4cc799b) {
							bVar1 = (name == "Margin");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Margin();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xd1496d30) {
							bVar1 = (name == "BackgroundColor");
							if (bVar1) {
								pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BackgroundColor();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xd14dd06b) {
						bVar1 = (name == "TransformTranslate");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TransformTranslate();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd46a8ee6) {
						bVar1 = (name == "BorderRadiusTopRight");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderRadiusTopRight();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd61c1c7f) {
						bVar1 = (name == "RegisterFocusOutEventCallback");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__RegisterFocusOutEventCallback();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xd9fedba6) {
					if (uVar2 == 0xd6c2f336) {
						bVar1 = (name == "FlexWrap");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__FlexWrap();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd821b21d) {
						bVar1 = (name == "QueryByClassName");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__QueryByClassName();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd9fedba5) {
						bVar1 = (name == "TextShadowHorizontalOffset");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextShadowHorizontalOffset();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xdaf4ac3f) {
					bVar1 = (name == "TextShadowVerticalOffset");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextShadowVerticalOffset();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xde1f0406) {
					bVar1 = (name == "Opacity");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Opacity();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe0a2f632) {
					bVar1 = (name == "MarginTop");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__MarginTop();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe9c5ec6a) {
				if (uVar2 < 0xe5b43cf9) {
					if (uVar2 == 0xe0a5d4d5) {
						bVar1 = (name == "TextParagraphSpacing");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextParagraphSpacing();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xe5b43cf8) {
						bVar1 = (name == "Color");
						if (bVar1) {
							pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Color();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xe6977c61) {
					bVar1 = (name == "BorderWidthRight");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderWidthRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe9999c8f) {
					bVar1 = (name == "MarginRight");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__MarginRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe9c5ec69) {
					bVar1 = (name == "TextShadowOffset");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TextShadowOffset();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xf00299ae) {
				if (uVar2 == 0xed3ab484) {
					bVar1 = (name == "SetBackgroundImage");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__SetBackgroundImage();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xee570bdc) {
					bVar1 = (name == "Absolute");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__Absolute();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf00299ad) {
					bVar1 = (name == "BorderRadiusTopLeft");
					if (bVar1) {
						pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderRadiusTopLeft();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xfb0d0613) {
				bVar1 = (name == "TransformScale");
				if (bVar1) {
					pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__TransformScale();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfe87ddd9) {
				bVar1 = (name == "MinWidth");
				if (bVar1) {
					pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__MinWidth();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xffc019cc) {
				bVar1 = (name == "BorderColorRight");
				if (bVar1) {
					pCVar3 = CustomLogicVisualElementBuiltin.Bindings.__CreateMethodBinding__BorderColorRight();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVisualElementBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003908")]
		[Address(RVA = "0x5A1CAE0", Offset = "0x5A1BAE0", VA = "0x5A1CAE0")]
		public static CLPropertyBinding<CustomLogicVisualElementBuiltin> __CreatePropertyBinding__ChildCount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreatePropertyBinding__ChildCount): 3 lines keep C-only constructs
			Func<CustomLogicVisualElementBuiltin, object> __this;
			CLPropertyBinding<CustomLogicVisualElementBuiltin> __this_00;

			__this = new Func<CustomLogicVisualElementBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings___CreatePropertyBinding__ChildCount_g____ge);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicVisualElementBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003909")]
		[Address(RVA = "0x5A1CB80", Offset = "0x5A1BB80", VA = "0x5A1CB80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Add()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Add): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470df == false) {
				Il2CppMethodInitialized_075470df = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Add_b__3_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600390A")]
		[Address(RVA = "0x5A1CCC0", Offset = "0x5A1BCC0", VA = "0x5A1CCC0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Remove()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Remove): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e0 == false) {
				Il2CppMethodInitialized_075470e0 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Remove_b__4_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600390B")]
		[Address(RVA = "0x5A1CE00", Offset = "0x5A1BE00", VA = "0x5A1CE00")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__RemoveFromHierarchy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RemoveFromHierarchy): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e1 == false) {
				Il2CppMethodInitialized_075470e1 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RemoveFromHierarch);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600390C")]
		[Address(RVA = "0x5A1CF40", Offset = "0x5A1BF40", VA = "0x5A1CF40")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Clear()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Clear): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e2 == false) {
				Il2CppMethodInitialized_075470e2 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Clear_b__6_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600390D")]
		[Address(RVA = "0x5A1D080", Offset = "0x5A1C080", VA = "0x5A1D080")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__GetElementAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__GetElementAt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e3 == false) {
				Il2CppMethodInitialized_075470e3 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__GetElementAt_b__7);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600390E")]
		[Address(RVA = "0x5A1D1C0", Offset = "0x5A1C1C0", VA = "0x5A1D1C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__QueryByName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__QueryByName): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e4 == false) {
				Il2CppMethodInitialized_075470e4 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__QueryByName_b__8_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600390F")]
		[Address(RVA = "0x5A1D300", Offset = "0x5A1C300", VA = "0x5A1D300")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__QueryByClassName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__QueryByClassName): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e5 == false) {
				Il2CppMethodInitialized_075470e5 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__QueryByClassName_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003910")]
		[Address(RVA = "0x5A1D440", Offset = "0x5A1C440", VA = "0x5A1D440")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__RegisterMouseEnterEventCallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterMouseEnterEventCallback): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e6 == false) {
				Il2CppMethodInitialized_075470e6 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterMouseEnter);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003911")]
		[Address(RVA = "0x5A1D580", Offset = "0x5A1C580", VA = "0x5A1D580")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__RegisterMouseLeaveEventCallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterMouseLeaveEventCallback): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e7 == false) {
				Il2CppMethodInitialized_075470e7 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterMouseLeave);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003912")]
		[Address(RVA = "0x5A1D6C0", Offset = "0x5A1C6C0", VA = "0x5A1D6C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__RegisterClickEventCallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterClickEventCallback): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e8 == false) {
				Il2CppMethodInitialized_075470e8 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterClickEvent);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003913")]
		[Address(RVA = "0x5A1D800", Offset = "0x5A1C800", VA = "0x5A1D800")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__RegisterFocusInEventCallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterFocusInEventCallback): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470e9 == false) {
				Il2CppMethodInitialized_075470e9 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterFocusInEve);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003914")]
		[Address(RVA = "0x5A1D940", Offset = "0x5A1C940", VA = "0x5A1D940")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__RegisterFocusOutEventCallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__RegisterFocusOutEventCallback): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470ea == false) {
				Il2CppMethodInitialized_075470ea = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__RegisterFocusOutEv);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003915")]
		[Address(RVA = "0x5A1DA80", Offset = "0x5A1CA80", VA = "0x5A1DA80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Opacity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Opacity): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470eb == false) {
				Il2CppMethodInitialized_075470eb = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Opacity_b__15_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003916")]
		[Address(RVA = "0x5A1DBC0", Offset = "0x5A1CBC0", VA = "0x5A1DBC0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Active()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Active): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470ec == false) {
				Il2CppMethodInitialized_075470ec = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Active_b__16_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003917")]
		[Address(RVA = "0x5A1DD00", Offset = "0x5A1CD00", VA = "0x5A1DD00")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Visible()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Visible): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470ed == false) {
				Il2CppMethodInitialized_075470ed = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Visible_b__17_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003918")]
		[Address(RVA = "0x5A1DE40", Offset = "0x5A1CE40", VA = "0x5A1DE40")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TransitionDuration()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransitionDuration): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470ee == false) {
				Il2CppMethodInitialized_075470ee = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransitionDuration);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003919")]
		[Address(RVA = "0x5A1DF80", Offset = "0x5A1CF80", VA = "0x5A1DF80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Absolute()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Absolute): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470ef == false) {
				Il2CppMethodInitialized_075470ef = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Absolute_b__19_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600391A")]
		[Address(RVA = "0x5A1E0C0", Offset = "0x5A1D0C0", VA = "0x5A1E0C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Left()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Left): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f0 == false) {
				Il2CppMethodInitialized_075470f0 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Left_b__20_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600391B")]
		[Address(RVA = "0x5A1E200", Offset = "0x5A1D200", VA = "0x5A1E200")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Top()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Top): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f1 == false) {
				Il2CppMethodInitialized_075470f1 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Top_b__21_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600391C")]
		[Address(RVA = "0x5A1E340", Offset = "0x5A1D340", VA = "0x5A1E340")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Right): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f2 == false) {
				Il2CppMethodInitialized_075470f2 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Right_b__22_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600391D")]
		[Address(RVA = "0x5A1E480", Offset = "0x5A1D480", VA = "0x5A1E480")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Bottom()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Bottom): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f3 == false) {
				Il2CppMethodInitialized_075470f3 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Bottom_b__23_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600391E")]
		[Address(RVA = "0x5A1E5C0", Offset = "0x5A1D5C0", VA = "0x5A1E5C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__FlexShrink()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexShrink): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f4 == false) {
				Il2CppMethodInitialized_075470f4 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexShrink_b__24_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600391F")]
		[Address(RVA = "0x5A1E700", Offset = "0x5A1D700", VA = "0x5A1E700")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__FlexGrow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexGrow): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f5 == false) {
				Il2CppMethodInitialized_075470f5 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexGrow_b__25_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003920")]
		[Address(RVA = "0x5A1E840", Offset = "0x5A1D840", VA = "0x5A1E840")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__FlexDirection()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexDirection): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f6 == false) {
				Il2CppMethodInitialized_075470f6 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexDirection_b__2);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003921")]
		[Address(RVA = "0x5A1E980", Offset = "0x5A1D980", VA = "0x5A1E980")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__FlexWrap()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FlexWrap): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f7 == false) {
				Il2CppMethodInitialized_075470f7 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FlexWrap_b__27_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003922")]
		[Address(RVA = "0x5A1EAC0", Offset = "0x5A1DAC0", VA = "0x5A1EAC0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__AlignItems()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AlignItems): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f8 == false) {
				Il2CppMethodInitialized_075470f8 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AlignItems_b__28_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003923")]
		[Address(RVA = "0x5A1EC00", Offset = "0x5A1DC00", VA = "0x5A1EC00")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__JustifyContent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__JustifyContent): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470f9 == false) {
				Il2CppMethodInitialized_075470f9 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__JustifyContent_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003924")]
		[Address(RVA = "0x5A1ED40", Offset = "0x5A1DD40", VA = "0x5A1ED40")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__AlignSelf()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AlignSelf): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470fa == false) {
				Il2CppMethodInitialized_075470fa = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AlignSelf_b__30_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003925")]
		[Address(RVA = "0x5A1EE80", Offset = "0x5A1DE80", VA = "0x5A1EE80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Width()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Width): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470fb == false) {
				Il2CppMethodInitialized_075470fb = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Width_b__31_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003926")]
		[Address(RVA = "0x5A1EFC0", Offset = "0x5A1DFC0", VA = "0x5A1EFC0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Height()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Height): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470fc == false) {
				Il2CppMethodInitialized_075470fc = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Height_b__32_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003927")]
		[Address(RVA = "0x5A1F100", Offset = "0x5A1E100", VA = "0x5A1F100")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__MinWidth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MinWidth): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470fd == false) {
				Il2CppMethodInitialized_075470fd = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MinWidth_b__33_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003928")]
		[Address(RVA = "0x5A1F240", Offset = "0x5A1E240", VA = "0x5A1F240")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__MinHeight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MinHeight): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470fe == false) {
				Il2CppMethodInitialized_075470fe = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MinHeight_b__34_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003929")]
		[Address(RVA = "0x5A1F380", Offset = "0x5A1E380", VA = "0x5A1F380")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__MaxWidth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MaxWidth): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_075470ff == false) {
				Il2CppMethodInitialized_075470ff = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MaxWidth_b__35_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600392A")]
		[Address(RVA = "0x5A1F4C0", Offset = "0x5A1E4C0", VA = "0x5A1F4C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__MaxHeight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MaxHeight): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547100 == false) {
				Il2CppMethodInitialized_07547100 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__36_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__36_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MaxHeight_b__36_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__36_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600392B")]
		[Address(RVA = "0x5A1F600", Offset = "0x5A1E600", VA = "0x5A1F600")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__AspectRatio()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__AspectRatio): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547101 == false) {
				Il2CppMethodInitialized_07547101 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__37_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__37_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__AspectRatio_b__37);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__37_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600392C")]
		[Address(RVA = "0x5A1F740", Offset = "0x5A1E740", VA = "0x5A1F740")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Margin()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Margin): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547102 == false) {
				Il2CppMethodInitialized_07547102 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__38_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__38_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Margin_b__38_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__38_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600392D")]
		[Address(RVA = "0x5A1F880", Offset = "0x5A1E880", VA = "0x5A1F880")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__MarginLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginLeft): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547103 == false) {
				Il2CppMethodInitialized_07547103 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__39_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__39_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginLeft_b__39_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__39_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600392E")]
		[Address(RVA = "0x5A1F9C0", Offset = "0x5A1E9C0", VA = "0x5A1F9C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__MarginTop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginTop): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547104 == false) {
				Il2CppMethodInitialized_07547104 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__40_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__40_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginTop_b__40_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__40_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600392F")]
		[Address(RVA = "0x5A1FB00", Offset = "0x5A1EB00", VA = "0x5A1FB00")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__MarginRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginRight): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547105 == false) {
				Il2CppMethodInitialized_07547105 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__41_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__41_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginRight_b__41);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__41_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003930")]
		[Address(RVA = "0x5A1FC40", Offset = "0x5A1EC40", VA = "0x5A1FC40")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__MarginBottom()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__MarginBottom): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547106 == false) {
				Il2CppMethodInitialized_07547106 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__42_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__42_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__MarginBottom_b__42);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__42_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003931")]
		[Address(RVA = "0x5A1FD80", Offset = "0x5A1ED80", VA = "0x5A1FD80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Padding()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Padding): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547107 == false) {
				Il2CppMethodInitialized_07547107 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__43_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__43_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Padding_b__43_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__43_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003932")]
		[Address(RVA = "0x5A1FEC0", Offset = "0x5A1EEC0", VA = "0x5A1FEC0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__PaddingLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingLeft): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547108 == false) {
				Il2CppMethodInitialized_07547108 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__44_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__44_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingLeft_b__44);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__44_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003933")]
		[Address(RVA = "0x5A20000", Offset = "0x5A1F000", VA = "0x5A20000")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__PaddingTop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingTop): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547109 == false) {
				Il2CppMethodInitialized_07547109 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__45_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__45_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingTop_b__45_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__45_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003934")]
		[Address(RVA = "0x5A20140", Offset = "0x5A1F140", VA = "0x5A20140")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__PaddingRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingRight): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754710a == false) {
				Il2CppMethodInitialized_0754710a = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__46_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__46_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingRight_b__46);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__46_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003935")]
		[Address(RVA = "0x5A20280", Offset = "0x5A1F280", VA = "0x5A20280")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__PaddingBottom()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__PaddingBottom): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754710b == false) {
				Il2CppMethodInitialized_0754710b = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__47_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__47_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__PaddingBottom_b__4);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__47_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003936")]
		[Address(RVA = "0x5A203C0", Offset = "0x5A1F3C0", VA = "0x5A203C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__FontStyle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FontStyle): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754710c == false) {
				Il2CppMethodInitialized_0754710c = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__48_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__48_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FontStyle_b__48_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__48_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003937")]
		[Address(RVA = "0x5A20500", Offset = "0x5A1F500", VA = "0x5A20500")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__FontSize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__FontSize): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754710d == false) {
				Il2CppMethodInitialized_0754710d = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__49_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__49_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__FontSize_b__49_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__49_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003938")]
		[Address(RVA = "0x5A20640", Offset = "0x5A1F640", VA = "0x5A20640")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__Color()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__Color): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754710e == false) {
				Il2CppMethodInitialized_0754710e = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__50_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__50_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__Color_b__50_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__50_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003939")]
		[Address(RVA = "0x5A20780", Offset = "0x5A1F780", VA = "0x5A20780")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextAlign()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextAlign): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754710f == false) {
				Il2CppMethodInitialized_0754710f = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__51_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__51_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextAlign_b__51_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__51_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600393A")]
		[Address(RVA = "0x5A208C0", Offset = "0x5A1F8C0", VA = "0x5A208C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextWrap()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextWrap): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547110 == false) {
				Il2CppMethodInitialized_07547110 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__52_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__52_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextWrap_b__52_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__52_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600393B")]
		[Address(RVA = "0x5A20A00", Offset = "0x5A1FA00", VA = "0x5A20A00")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextOverflow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOverflow): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547111 == false) {
				Il2CppMethodInitialized_07547111 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__53_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__53_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOverflow_b__53);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__53_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600393C")]
		[Address(RVA = "0x5A20B40", Offset = "0x5A1FB40", VA = "0x5A20B40")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextOutlineWidth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOutlineWidth): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547112 == false) {
				Il2CppMethodInitialized_07547112 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__54_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__54_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOutlineWidth_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__54_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600393D")]
		[Address(RVA = "0x5A20C80", Offset = "0x5A1FC80", VA = "0x5A20C80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextOutlineColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextOutlineColor): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547113 == false) {
				Il2CppMethodInitialized_07547113 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__55_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__55_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextOutlineColor_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__55_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600393E")]
		[Address(RVA = "0x5A20DC0", Offset = "0x5A1FDC0", VA = "0x5A20DC0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextShadowColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowColor): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547114 == false) {
				Il2CppMethodInitialized_07547114 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__56_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__56_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowColor_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__56_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600393F")]
		[Address(RVA = "0x5A20F00", Offset = "0x5A1FF00", VA = "0x5A20F00")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextShadowOffset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowOffset): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547115 == false) {
				Il2CppMethodInitialized_07547115 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__57_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__57_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowOffset_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__57_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003940")]
		[Address(RVA = "0x5A21040", Offset = "0x5A20040", VA = "0x5A21040")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextShadowHorizontalOffset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowHorizontalOffset): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547116 == false) {
				Il2CppMethodInitialized_07547116 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__58_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__58_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowHorizont);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__58_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003941")]
		[Address(RVA = "0x5A21180", Offset = "0x5A20180", VA = "0x5A21180")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextShadowVerticalOffset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowVerticalOffset): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547117 == false) {
				Il2CppMethodInitialized_07547117 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__59_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__59_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowVertical);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__59_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003942")]
		[Address(RVA = "0x5A212C0", Offset = "0x5A202C0", VA = "0x5A212C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextShadowBlurRadius()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextShadowBlurRadius): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547118 == false) {
				Il2CppMethodInitialized_07547118 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__60_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__60_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextShadowBlurRadi);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__60_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003943")]
		[Address(RVA = "0x5A21400", Offset = "0x5A20400", VA = "0x5A21400")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextLetterSpacing()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextLetterSpacing): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547119 == false) {
				Il2CppMethodInitialized_07547119 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__61_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__61_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextLetterSpacing);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__61_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003944")]
		[Address(RVA = "0x5A21540", Offset = "0x5A20540", VA = "0x5A21540")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextWordSpacing()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextWordSpacing): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754711a == false) {
				Il2CppMethodInitialized_0754711a = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__62_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__62_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextWordSpacing_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__62_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003945")]
		[Address(RVA = "0x5A21680", Offset = "0x5A20680", VA = "0x5A21680")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TextParagraphSpacing()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TextParagraphSpacing): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754711b == false) {
				Il2CppMethodInitialized_0754711b = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__63_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__63_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TextParagraphSpaci);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__63_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003946")]
		[Address(RVA = "0x5A217C0", Offset = "0x5A207C0", VA = "0x5A217C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BackgroundColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BackgroundColor): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754711c == false) {
				Il2CppMethodInitialized_0754711c = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__64_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__64_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BackgroundColor_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__64_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003947")]
		[Address(RVA = "0x5A21900", Offset = "0x5A20900", VA = "0x5A21900")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__SetBackgroundImage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__SetBackgroundImage): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754711d == false) {
				Il2CppMethodInitialized_0754711d = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__65_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__65_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__SetBackgroundImage);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__65_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003948")]
		[Address(RVA = "0x5A21A40", Offset = "0x5A20A40", VA = "0x5A21A40")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColor): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754711e == false) {
				Il2CppMethodInitialized_0754711e = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__66_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__66_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColor_b__66);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__66_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003949")]
		[Address(RVA = "0x5A21B80", Offset = "0x5A20B80", VA = "0x5A21B80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderColorLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorLeft): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754711f == false) {
				Il2CppMethodInitialized_0754711f = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__67_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__67_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorLeft_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__67_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600394A")]
		[Address(RVA = "0x5A21CC0", Offset = "0x5A20CC0", VA = "0x5A21CC0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderColorTop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorTop): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547120 == false) {
				Il2CppMethodInitialized_07547120 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__68_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__68_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorTop_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__68_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600394B")]
		[Address(RVA = "0x5A21E00", Offset = "0x5A20E00", VA = "0x5A21E00")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderColorRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorRight): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547121 == false) {
				Il2CppMethodInitialized_07547121 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__69_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__69_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorRight_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__69_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600394C")]
		[Address(RVA = "0x5A21F40", Offset = "0x5A20F40", VA = "0x5A21F40")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderColorBottom()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderColorBottom): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547122 == false) {
				Il2CppMethodInitialized_07547122 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__70_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__70_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderColorBottom);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__70_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600394D")]
		[Address(RVA = "0x5A22080", Offset = "0x5A21080", VA = "0x5A22080")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderWidth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidth): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547123 == false) {
				Il2CppMethodInitialized_07547123 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__71_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__71_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidth_b__71);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__71_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600394E")]
		[Address(RVA = "0x5A221C0", Offset = "0x5A211C0", VA = "0x5A221C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderWidthLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthLeft): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547124 == false) {
				Il2CppMethodInitialized_07547124 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__72_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__72_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthLeft_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__72_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600394F")]
		[Address(RVA = "0x5A22300", Offset = "0x5A21300", VA = "0x5A22300")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderWidthTop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthTop): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547125 == false) {
				Il2CppMethodInitialized_07547125 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__73_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__73_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthTop_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__73_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003950")]
		[Address(RVA = "0x5A22440", Offset = "0x5A21440", VA = "0x5A22440")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderWidthRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthRight): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547126 == false) {
				Il2CppMethodInitialized_07547126 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__74_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__74_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthRight_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__74_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003951")]
		[Address(RVA = "0x5A22580", Offset = "0x5A21580", VA = "0x5A22580")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderWidthBottom()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderWidthBottom): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547127 == false) {
				Il2CppMethodInitialized_07547127 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__75_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__75_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderWidthBottom);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__75_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003952")]
		[Address(RVA = "0x5A226C0", Offset = "0x5A216C0", VA = "0x5A226C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderRadius()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadius): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547128 == false) {
				Il2CppMethodInitialized_07547128 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__76_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__76_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadius_b__76);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__76_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003953")]
		[Address(RVA = "0x5A22800", Offset = "0x5A21800", VA = "0x5A22800")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderRadiusTopLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusTopLeft): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547129 == false) {
				Il2CppMethodInitialized_07547129 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__77_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__77_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusTopLef);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__77_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003954")]
		[Address(RVA = "0x5A22940", Offset = "0x5A21940", VA = "0x5A22940")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderRadiusTopRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusTopRight): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754712a == false) {
				Il2CppMethodInitialized_0754712a = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__78_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__78_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusTopRig);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__78_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003955")]
		[Address(RVA = "0x5A22A80", Offset = "0x5A21A80", VA = "0x5A22A80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderRadiusBottomLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusBottomLeft): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754712b == false) {
				Il2CppMethodInitialized_0754712b = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__79_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__79_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusBottom);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__79_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003956")]
		[Address(RVA = "0x5A22BC0", Offset = "0x5A21BC0", VA = "0x5A22BC0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__BorderRadiusBottomRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__BorderRadiusBottomRight): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754712c == false) {
				Il2CppMethodInitialized_0754712c = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__80_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__80_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__BorderRadiusBottom_71cb4d8);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__80_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003957")]
		[Address(RVA = "0x5A22D00", Offset = "0x5A21D00", VA = "0x5A22D00")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__OverflowX()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__OverflowX): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754712d == false) {
				Il2CppMethodInitialized_0754712d = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__81_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__81_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__OverflowX_b__81_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__81_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003958")]
		[Address(RVA = "0x5A22E40", Offset = "0x5A21E40", VA = "0x5A22E40")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__OverflowY()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__OverflowY): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754712e == false) {
				Il2CppMethodInitialized_0754712e = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__82_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__82_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__OverflowY_b__82_0);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__82_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003959")]
		[Address(RVA = "0x5A22F80", Offset = "0x5A21F80", VA = "0x5A22F80")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__SetTransformOrigin()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__SetTransformOrigin): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754712f == false) {
				Il2CppMethodInitialized_0754712f = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__83_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__83_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__SetTransformOrigin);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__83_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600395A")]
		[Address(RVA = "0x5A230C0", Offset = "0x5A220C0", VA = "0x5A230C0")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TransformTranslate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformTranslate): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547130 == false) {
				Il2CppMethodInitialized_07547130 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__84_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__84_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformTranslate);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__84_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600395B")]
		[Address(RVA = "0x5A23200", Offset = "0x5A22200", VA = "0x5A23200")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TransformScale()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformScale): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547131 == false) {
				Il2CppMethodInitialized_07547131 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__85_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__85_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformScale_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__85_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600395C")]
		[Address(RVA = "0x5A23340", Offset = "0x5A22340", VA = "0x5A23340")]
		public static CLMethodBinding<CustomLogicVisualElementBuiltin> __CreateMethodBinding__TransformRotate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$__CreateMethodBinding__TransformRotate): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVisualElementBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVisualElementBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVisualElementBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547132 == false) {
				Il2CppMethodInitialized_07547132 = true;
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__86_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVisualElementBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__86_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVisualElementBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicVisualElementBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_Bindings_c___CreateMethodBinding__TransformRotate_b);
				pCVar2 = typeof(CustomLogicVisualElementBuiltin.Bindings.c).static_fields;
				pCVar2.__9__86_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVisualElementBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40019DB")]
	[FieldOffset(Offset = "0x30")]
	private readonly VisualElement _visualElement;

	[Token(Token = "0x40019DC")]
	[FieldOffset(Offset = "0x38")]
	private TextShadow _textShadow;

	[Token(Token = "0x40019DD")]
	[FieldOffset(Offset = "0x58")]
	private readonly Dictionary<string, EventCallback<GeometryChangedEvent>> _onResize;

	[Token(Token = "0x17000A38")]
	public int ChildCount
	{
		[Token(Token = "0x60038AC")]
		[Address(RVA = "0x5A14BA0", Offset = "0x5A13BA0", VA = "0x5A14BA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$get_ChildCount): clean
			VisualElement __this_00;
			int iVar1;

			__this_00 = this._visualElement;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
	}

	[Token(Token = "0x17000A39")]
	public override string ClassName
	{
		[Token(Token = "0x6003902")]
		[Address(RVA = "0x5A1AB20", Offset = "0x5A19B20", VA = "0x5A1AB20", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$get_ClassName): clean
			return "VisualElement";
		}
	}

	[Token(Token = "0x17000A3A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003903")]
		[Address(RVA = "0x5A1AB50", Offset = "0x5A19B50", VA = "0x5A1AB50", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A3B")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003904")]
		[Address(RVA = "0x5A1AB60", Offset = "0x5A19B60", VA = "0x5A1AB60", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000A3C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003905")]
		[Address(RVA = "0x5A1AB70", Offset = "0x5A19B70", VA = "0x5A1AB70", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60038AB")]
	[Address(RVA = "0x5A14AF0", Offset = "0x5A13AF0", VA = "0x5A14AF0")]
	public CustomLogicVisualElementBuiltin(VisualElement visualElement)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$.ctor): 1 lines keep C-only constructs
		Dictionary<string, EventCallback<GeometryChangedEvent>> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, EventCallback<GeometryChangedEvent>>));
		__this_00 = new Dictionary<object, object>();
		this._onResize = __this_00;
		base();
		this._visualElement = visualElement;
		return;
	}

	[Token(Token = "0x60038AD")]
	[Address(RVA = "0x5A14BC0", Offset = "0x5A13BC0", VA = "0x5A14BC0")]
	public CustomLogicVisualElementBuiltin Add(CustomLogicVisualElementBuiltin visualElement)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Add): clean
		VisualElement __this_00;

		if ((visualElement == null) ||(__this_00 = __this._visualElement, __this_00 == null) ) {
			throw new NullReferenceException();
		}
		__this_00.Add(visualElement._visualElement);
		return __this;
	}

	[Token(Token = "0x60038AE")]
	[Address(RVA = "0x5A14BF0", Offset = "0x5A13BF0", VA = "0x5A14BF0")]
	public void Remove(CustomLogicVisualElementBuiltin visualElement)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Remove): clean
		VisualElement __this_00;

		if ((visualElement == null) ||(__this_00 = this._visualElement, __this_00 == null) ) {
			throw new NullReferenceException();
		}
		__this_00.Remove(visualElement._visualElement);
		return;
	}

	[Token(Token = "0x60038AF")]
	[Address(RVA = "0x5A14C10", Offset = "0x5A13C10", VA = "0x5A14C10")]
	public void RemoveFromHierarchy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$RemoveFromHierarchy): clean
		VisualElement __this_00;

		__this_00 = this._visualElement;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RemoveFromHierarchy();
		return;
	}

	[Token(Token = "0x60038B0")]
	[Address(RVA = "0x5A14C30", Offset = "0x5A13C30", VA = "0x5A14C30")]
	public void Clear()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Clear): clean
		VisualElement __this_00;

		__this_00 = this._visualElement;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	[Token(Token = "0x60038B1")]
	[Address(RVA = "0x5A14C50", Offset = "0x5A13C50", VA = "0x5A14C50")]
	public CustomLogicVisualElementBuiltin GetElementAt(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$GetElementAt): clean
		VisualElement pUVar1;
		CustomLogicVisualElementBuiltin __this_00;

		pUVar1 = this._visualElement;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1 = pUVar1.ElementAt(index);
		__this_00 = new CustomLogicVisualElementBuiltin(pUVar1);
		return __this_00;
	}

	[Token(Token = "0x60038B2")]
	[Address(RVA = "0x5A14CC0", Offset = "0x5A13CC0", VA = "0x5A14CC0")]
	public CustomLogicVisualElementBuiltin QueryByName(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$QueryByName): clean
		VisualElement pUVar1;
		CustomLogicVisualElementBuiltin __this_00;

		pUVar1 = this._visualElement;
		pUVar1 = UQueryExtensions.Q(pUVar1, name, null);
		__this_00 = new CustomLogicVisualElementBuiltin(pUVar1);
		return __this_00;
	}

	[Token(Token = "0x60038B3")]
	[Address(RVA = "0x5A14D50", Offset = "0x5A13D50", VA = "0x5A14D50")]
	public CustomLogicVisualElementBuiltin QueryByClassName(string className)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$QueryByClassName): clean
		VisualElement pUVar1;
		CustomLogicVisualElementBuiltin __this_00;

		pUVar1 = this._visualElement;
		pUVar1 = UQueryExtensions.Q(pUVar1, null, className);
		__this_00 = new CustomLogicVisualElementBuiltin(pUVar1);
		return __this_00;
	}

	[Token(Token = "0x60038B4")]
	[Address(RVA = "0x5A14DE0", Offset = "0x5A13DE0", VA = "0x5A14DE0")]
	public CustomLogicVisualElementBuiltin RegisterMouseEnterEventCallback(UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$RegisterMouseEnterEventCallback): 3 lines keep C-only constructs
		VisualElement __this_00;
		CustomLogicVisualElementBuiltin.c__DisplayClass13_0 __this_01;
		EventCallback<TEventType> __this_02;

		if (Il2CppMethodInitialized_07547094 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(EventCallback<MouseEnterEvent>)) ;
			Il2CppMethodInitialized_07547094 = true;
		}
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVisualElementBuiltin.c__DisplayClass13_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.method = method;
			__this_00 = __this._visualElement;
			__this_02 = new EventCallback<MouseEnterEvent>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass13_0_RegisterMouseEnterEventCallback);
			if (__this_00 != null) {
				__this_00.RegisterCallback<MouseEnterEvent>(__this_02, 0);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038B5")]
	[Address(RVA = "0x5A14ED0", Offset = "0x5A13ED0", VA = "0x5A14ED0")]
	public CustomLogicVisualElementBuiltin RegisterMouseLeaveEventCallback(UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$RegisterMouseLeaveEventCallback): 3 lines keep C-only constructs
		VisualElement __this_00;
		CustomLogicVisualElementBuiltin.c__DisplayClass14_0 __this_01;
		EventCallback<TEventType> __this_02;

		if (Il2CppMethodInitialized_07547095 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(EventCallback<MouseLeaveEvent>)) ;
			Il2CppMethodInitialized_07547095 = true;
		}
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVisualElementBuiltin.c__DisplayClass14_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.method = method;
			__this_00 = __this._visualElement;
			__this_02 = new EventCallback<MouseLeaveEvent>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass14_0_RegisterMouseLeaveEventCallback);
			if (__this_00 != null) {
				__this_00.RegisterCallback<MouseLeaveEvent>(__this_02, 0);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038B6")]
	[Address(RVA = "0x5A14FC0", Offset = "0x5A13FC0", VA = "0x5A14FC0")]
	public CustomLogicVisualElementBuiltin RegisterClickEventCallback(UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$RegisterClickEventCallback): 2 lines keep C-only constructs
		VisualElement __this_00;
		CustomLogicVisualElementBuiltin.c__DisplayClass15_0 __this_01;
		EventCallback<TEventType> __this_02;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVisualElementBuiltin.c__DisplayClass15_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.method = method;
			__this_00 = __this._visualElement;
			__this_02 = new EventCallback<ClickEvent>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass15_0_RegisterClickEventCallback_b__0);
			if (__this_00 != null) {
				__this_00.RegisterCallback<ClickEvent>(__this_02, 0);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038B7")]
	[Address(RVA = "0x5A150B0", Offset = "0x5A140B0", VA = "0x5A150B0")]
	public CustomLogicVisualElementBuiltin RegisterFocusInEventCallback(UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$RegisterFocusInEventCallback): 2 lines keep C-only constructs
		VisualElement __this_00;
		CustomLogicVisualElementBuiltin.c__DisplayClass16_0 __this_01;
		EventCallback<TEventType> __this_02;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVisualElementBuiltin.c__DisplayClass16_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.method = method;
			__this_00 = __this._visualElement;
			__this_02 = new EventCallback<FocusInEvent>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass16_0_RegisterFocusInEventCallback_b);
			if (__this_00 != null) {
				__this_00.RegisterCallback<FocusInEvent>(__this_02, 0);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038B8")]
	[Address(RVA = "0x5A151A0", Offset = "0x5A141A0", VA = "0x5A151A0")]
	public CustomLogicVisualElementBuiltin RegisterFocusOutEventCallback(UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$RegisterFocusOutEventCallback): 2 lines keep C-only constructs
		VisualElement __this_00;
		CustomLogicVisualElementBuiltin.c__DisplayClass17_0 __this_01;
		EventCallback<TEventType> __this_02;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVisualElementBuiltin.c__DisplayClass17_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.method = method;
			__this_00 = __this._visualElement;
			__this_02 = new EventCallback<FocusOutEvent>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass17_0_RegisterFocusOutEventCallback_b);
			if (__this_00 != null) {
				__this_00.RegisterCallback<FocusOutEvent>(__this_02, 0);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038B9")]
	[Address(RVA = "0x5A15290", Offset = "0x5A14290", VA = "0x5A15290")]
	public CustomLogicVisualElementBuiltin Opacity(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Opacity): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		StyleFloat value_00;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		float fVar6;
		float fVar7;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			fVar6 = value / 100.0;
			fVar7 = 1.0;
			if (fVar6 <= 1.0) {
				fVar7 = fVar6;
			}
			value_00 = ((StyleFloat)(float)(-(uint)(0.0 <= fVar6) & (uint)fVar7));
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x5b);
							goto label_05b15365;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x5b);
	label_05b15365: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038BA")]
	[Address(RVA = "0x5A15390", Offset = "0x5A14390", VA = "0x5A15390")]
	public CustomLogicVisualElementBuiltin Active(bool value = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Active): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleEnum<T> UVar6;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UVar6 = ((StyleEnum<T>)(uint)!value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x33);
							goto label_05b15455;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x33);
	label_05b15455: ;
				(*pVVar3.methodPtr)(obj,(UnityEngine_UIElements_StyleEnum_DisplayStyle__o)UVar6.m_Value,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038BB")]
	[Address(RVA = "0x5A15480", Offset = "0x5A14480", VA = "0x5A15480")]
	public CustomLogicVisualElementBuiltin Visible(bool value = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Visible): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleEnum<T> UVar6;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UVar6 = ((StyleEnum<T>)(uint)!value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0xa9);
							goto label_05b15547;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0xa9);
	label_05b15547: ;
				(*pVVar3.methodPtr)(obj,(UnityEngine_UIElements_StyleEnum_Visibility__o)UVar6.m_Value,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038BC")]
	[Address(RVA = "0x5A15570", Offset = "0x5A14570", VA = "0x5A15570")]
	public CustomLogicVisualElementBuiltin TransitionDuration(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TransitionDuration): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		TimeValue[] pUVar3;
		VisualElement __this_00;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		List<TimeValue> __this_01;
		object obj;
		VirtualInvokeData pVVar7;
		ulong uVar8;
		long lVar9;
		StyleList<T> UVar10;
		UnityEngine_UIElements_StyleList_TimeValue__o value_00;
		TimeValue UStack_28;

		__this_01 = new List<TimeValue>();
		UStack_28.m_Value = 0.0;
		UStack_28.m_Unit = 0;
		UStack_28 = new TimeValue(value, 1);
		if (__this_01 != null) {
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pUVar3 = __this_01._items;
			if (pUVar3 != null) {
				uVar2 = __this_01._size;
				if (uVar2 < (uint)pUVar3.Length) {
					__this_01._size = uVar2 + 1;
					pUVar3[(int)uVar2] = UStack_28;
				}
				else {
					__this_01.AddWithResize((TimeValue)UStack_28);
				}
				UVar10 = ((StyleList<T>)(List<T>)__this_01);
				value_00.m_Value = UVar10.m_Value;
				__this_00 = __this._visualElement;
				if (__this_00 != null) {
					obj = (object)__this_00.style;
					if (obj != null) {
						pIVar4 = obj.klass;
						uVar8 = (ulong)(pIVar4._2).interface_offsets_count;
						if (uVar8 != 0) {
							pIVar5 = (pIVar4._1).interfaceOffsets;
							lVar9 = 0;
							do {
								if (*(IStyle*)((long)&pIVar5.interfaceType + lVar9) == typeof(IStyle)) {
									pVVar7 = pIVar4.vtable + (*(int)((long)&pIVar5.offset + lVar9) + 0x79);
									goto label_05b15705;
								}
								lVar9 = lVar9 + 0x10;
							} while (uVar8 * 0x10 != lVar9);
						}
						pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x79);
	label_05b15705: ;
						value_00._4_4_ = 0;
						value_00.m_Keyword = UVar10.m_Keyword;
						(*pVVar7.methodPtr)(obj,value_00,pVVar7.method);
						return __this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038BD")]
	[Address(RVA = "0x5A15730", Offset = "0x5A14730", VA = "0x5A15730")]
	public CustomLogicVisualElementBuiltin Absolute(bool value = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Absolute): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleEnum<T> UVar6;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UVar6 = ((StyleEnum<T>)(uint)value) ;
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x67);
							goto label_05b157f5;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x67);
	label_05b157f5: ;
				(*pVVar3.methodPtr)(obj,(UnityEngine_UIElements_StyleEnum_Position__o)UVar6.m_Value,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038BE")]
	[Address(RVA = "0x5A15820", Offset = "0x5A14820", VA = "0x5A15820")]
	public CustomLogicVisualElementBuiltin Left(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Left): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x47);
							goto label_05b15905;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x47);
	label_05b15905: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038BF")]
	[Address(RVA = "0x5A15950", Offset = "0x5A14950", VA = "0x5A15950")]
	public CustomLogicVisualElementBuiltin Top(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Top): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x73);
							goto label_05b15a35;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x73);
	label_05b15a35: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C0")]
	[Address(RVA = "0x5A15A60", Offset = "0x5A14A60", VA = "0x5A15A60")]
	public CustomLogicVisualElementBuiltin Right(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Right): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x69);
							goto label_05b15b45;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x69);
	label_05b15b45: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C1")]
	[Address(RVA = "0x5A15B70", Offset = "0x5A14B70", VA = "0x5A15B70")]
	public CustomLogicVisualElementBuiltin Bottom(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Bottom): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x2d);
							goto label_05b15c55;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x2d);
	label_05b15c55: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C2")]
	[Address(RVA = "0x5A15C80", Offset = "0x5A14C80", VA = "0x5A15C80")]
	public CustomLogicVisualElementBuiltin FlexShrink(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$FlexShrink): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		StyleFloat value_00;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleFloat)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x3d);
							goto label_05b15d35;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x3d);
	label_05b15d35: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C3")]
	[Address(RVA = "0x5A15D60", Offset = "0x5A14D60", VA = "0x5A15D60")]
	public CustomLogicVisualElementBuiltin FlexGrow(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$FlexGrow): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		StyleFloat value_00;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleFloat)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x3b);
							goto label_05b15e15;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x3b);
	label_05b15e15: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C4")]
	[Address(RVA = "0x5A15E40", Offset = "0x5A14E40", VA = "0x5A15E40")]
	public CustomLogicVisualElementBuiltin FlexDirection(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$FlexDirection): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		handle = TypeRef_UnityEngine_UIElements_FlexDirection;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown flex direction value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_FlexDirection);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x39);
							goto label_05b15f95;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x39);
	label_05b15f95: ;
				(*pVVar4.methodPtr)(pIVar3,(UnityEngine_UIElements_StyleEnum_FlexDirection__o)UVar9.m_Value,pVVar4.method );
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C5")]
	[Address(RVA = "0x5A16030", Offset = "0x5A15030", VA = "0x5A16030")]
	public CustomLogicVisualElementBuiltin FlexWrap(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$FlexWrap): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		handle = TypeRef_UnityEngine_UIElements_Wrap;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown wrap value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_FlexWrap) ;
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x3f);
							goto label_05b16185;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x3f);
	label_05b16185: ;
				(*pVVar4.methodPtr)(pIVar3,(UnityEngine_UIElements_StyleEnum_Wrap__o)UVar9.m_Value,pVVar4.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C6")]
	[Address(RVA = "0x5A16220", Offset = "0x5A15220", VA = "0x5A16220")]
	public CustomLogicVisualElementBuiltin AlignItems(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$AlignItems): 7 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		if (Il2CppMethodInitialized_075470a6 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_StyleEnum_Align_op_Implicit) ;
			Il2CppMethodInitialized_075470a6 = true;
		}
		handle = TypeRef_UnityEngine_UIElements_Align;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown align value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_AlignItems);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				pIVar3.set_alignItems((UnityEngine_UIElements_StyleEnum_Align__o)UVar9.m_Value);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C7")]
	[Address(RVA = "0x5A16410", Offset = "0x5A15410", VA = "0x5A16410")]
	public CustomLogicVisualElementBuiltin JustifyContent(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$JustifyContent): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		handle = TypeRef_UnityEngine_UIElements_Justify;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown justify value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_JustifyContent);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x45);
							goto label_05b16565;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x45);
	label_05b16565: ;
				(*pVVar4.methodPtr)(pIVar3,(UnityEngine_UIElements_StyleEnum_Justify__o)UVar9.m_Value,pVVar4.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C8")]
	[Address(RVA = "0x5A16600", Offset = "0x5A15600", VA = "0x5A16600")]
	public CustomLogicVisualElementBuiltin AlignSelf(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$AlignSelf): 7 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		if (Il2CppMethodInitialized_075470a8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_StyleEnum_Align_op_Implicit) ;
			Il2CppMethodInitialized_075470a8 = true;
		}
		handle = TypeRef_UnityEngine_UIElements_Align;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown align value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_AlignSelf);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				pIVar3.set_alignSelf((UnityEngine_UIElements_StyleEnum_Align__o)UVar9.m_Value);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038C9")]
	[Address(RVA = "0x5A167F0", Offset = "0x5A157F0", VA = "0x5A167F0")]
	public CustomLogicVisualElementBuiltin Width(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Width): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0xad);
							goto label_05b168d7;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0xad);
	label_05b168d7: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038CA")]
	[Address(RVA = "0x5A16900", Offset = "0x5A15900", VA = "0x5A16900")]
	public CustomLogicVisualElementBuiltin Height(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Height): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x43);
							goto label_05b169e5;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x43);
	label_05b169e5: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038CB")]
	[Address(RVA = "0x5A16A10", Offset = "0x5A15A10", VA = "0x5A16A10")]
	public CustomLogicVisualElementBuiltin MinWidth(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$MinWidth): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x59);
							goto label_05b16af5;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x59);
	label_05b16af5: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038CC")]
	[Address(RVA = "0x5A16B20", Offset = "0x5A15B20", VA = "0x5A16B20")]
	public CustomLogicVisualElementBuiltin MinHeight(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$MinHeight): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x57);
							goto label_05b16c05;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x57);
	label_05b16c05: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038CD")]
	[Address(RVA = "0x5A16C30", Offset = "0x5A15C30", VA = "0x5A16C30")]
	public CustomLogicVisualElementBuiltin MaxWidth(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$MaxWidth): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x55);
							goto label_05b16d15;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x55);
	label_05b16d15: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038CE")]
	[Address(RVA = "0x5A16D40", Offset = "0x5A15D40", VA = "0x5A16D40")]
	public CustomLogicVisualElementBuiltin MaxHeight(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$MaxHeight): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x53);
							goto label_05b16e25;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x53);
	label_05b16e25: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038CF")]
	[Address(RVA = "0x5A16E50", Offset = "0x5A15E50", VA = "0x5A16E50")]
	public CustomLogicVisualElementBuiltin AspectRatio(float value, int mode = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$AspectRatio): 14 lines keep C-only constructs
		float fVar1;
		Dictionary<object, object> pSVar2;
		VisualElement pUVar3;
		Il2CppType handle;
		bool bVar4;
		CustomLogicVisualElementBuiltin.c__DisplayClass40_0 __this_00;
		Type enumType;
		object pIVar5;
		EventCallback<TEventType> __this_01;
		MethodInfo* ppMVar6;
		CustomLogic_CustomLogicVisualElementBuiltin___c_StaticFields pCVar7;
		Il2CppClass klass;
		Exception __this_02;
		String message;
		MethodInfo lastManagedFrame;
		int iStack_3c;
		EventCallback<TEventType> pUStack_38;

		pUStack_38 = null;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVisualElementBuiltin.c__DisplayClass40_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_05b1718c;
		__this_00.__4__this = __this;
		__this_00.value = value;
		handle = TypeRef_CustomLogic_ElementAspectRatio;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_3c = mode;
		pIVar5 = (object)iStack_3c;
		bVar4 = Enum.IsDefined(enumType, pIVar5);
		if (!bVar4) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_02 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Unknown aspect ratio mode");
			__this_02 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_AspectRatio);
			throw (object)__this_02;
		}
		pSVar2 = (Dictionary<object, object>)__this._onResize;
		if (pSVar2 == null) goto label_05b1718c;
		bVar4 = pSVar2.TryGetValue((Il2CppObject *)"AspectRatio", (object*)&pUStack_38);
		if (bVar4) {
			pUVar3 = __this._visualElement;
			if (pUVar3 == null) goto label_05b1718c;
			pUVar3.UnregisterCallback<GeometryChangedEvent>(pUStack_38, 0) ;
		}
		fVar1 = __this_00.value;
		if ((fVar1 == 0.0) && (!NAN(fVar1))) {
			return __this;
		}
		if (mode == 0) {
			ppMVar6 = &MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass40_0_AspectRatio_b__1;
	label_05b17072: ;
			__this_01 = new EventCallback<GeometryChangedEvent>((object)__this_00, (intptr_t)*ppMVar6);
			pSVar2 = (Dictionary<object, object>)__this._onResize;
		}
		else {
			if (mode == 1) {
				__this_01 = (EventCallback<TEventType>)il2cpp_codegen_object_new(typeof(EventCallback<GeometryChangedEvent>));
				ppMVar6 = &MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass40_0_AspectRatio_b__0;
				goto label_05b17072;
			}
			if ((typeof(CustomLogicVisualElementBuiltin.c)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicVisualElementBuiltin.c)) ;
				pCVar7 = typeof(CustomLogicVisualElementBuiltin.c).static_fields;
				__this_01 = (EventCallback<TEventType>)pCVar7.__9__40_2;
				if (__this_01 != null) goto label_05b170b3;
	label_05b17121: ;
				if ((typeof(CustomLogicVisualElementBuiltin.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar7 = typeof(CustomLogicVisualElementBuiltin.c).static_fields;
				}
				pIVar5 = (object)pCVar7.__9;
				__this_01 = (EventCallback<TEventType>)il2cpp_codegen_object_new(typeof(EventCallback<GeometryChangedEvent>));
				__this_01 = new EventCallback<GeometryChangedEvent>(pIVar5, (intptr_t)MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c_AspectRatio_b__40_2);
				pCVar7 = typeof(CustomLogicVisualElementBuiltin.c).static_fields;
				pCVar7.__9__40_2 = (EventCallback<GeometryChangedEvent>)__this_01;
				pSVar2 = (Dictionary<object, object>)__this._onResize;
			}
			else {
				pCVar7 = typeof(CustomLogicVisualElementBuiltin.c).static_fields;
				__this_01 = (EventCallback<TEventType>)pCVar7.__9__40_2;
				if (__this_01 == null) goto label_05b17121;
	label_05b170b3: ;
				pSVar2 = (Dictionary<object, object>)__this._onResize;
			}
		}
		if (pSVar2 != null) {
			pSVar2.set_Item((Il2CppObject *)"AspectRatio", (object)__this_01);
			pUVar3 = __this._visualElement;
			if (pUVar3 != null) {
				pUVar3.RegisterCallback<GeometryChangedEvent>(__this_01, 0);
				return __this;
			}
		}
	label_05b1718c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038D0")]
	[Address(RVA = "0x5A171F0", Offset = "0x5A161F0", VA = "0x5A171F0")]
	public CustomLogicVisualElementBuiltin Margin(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Margin): clean
		CustomLogicVisualElementBuiltin pCVar1;

		this.MarginLeft(value, percentage);
		if (this == null) {
			throw new NullReferenceException();
		}
		this.MarginTop(value, percentage);
		this.MarginRight(value, percentage);
		pCVar1 = this.MarginBottom(value, percentage);
		return pCVar1;
	}

	[Token(Token = "0x60038D1")]
	[Address(RVA = "0x5A17250", Offset = "0x5A16250", VA = "0x5A17250")]
	public CustomLogicVisualElementBuiltin MarginLeft(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$MarginLeft): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length local_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			local_28.m_Value = 0.0;
			local_28.m_Unit = 0;
			local_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)local_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x4d);
							goto label_05b17335;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x4d);
	label_05b17335: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038D2")]
	[Address(RVA = "0x5A17360", Offset = "0x5A16360", VA = "0x5A17360")]
	public CustomLogicVisualElementBuiltin MarginTop(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$MarginTop): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length local_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			local_28.m_Value = 0.0;
			local_28.m_Unit = 0;
			local_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)local_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x51);
							goto label_05b17445;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x51);
	label_05b17445: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038D3")]
	[Address(RVA = "0x5A17470", Offset = "0x5A16470", VA = "0x5A17470")]
	public CustomLogicVisualElementBuiltin MarginRight(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$MarginRight): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length local_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			local_28.m_Value = 0.0;
			local_28.m_Unit = 0;
			local_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)local_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x4f);
							goto label_05b17555;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x4f);
	label_05b17555: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038D4")]
	[Address(RVA = "0x5A17580", Offset = "0x5A16580", VA = "0x5A17580")]
	public CustomLogicVisualElementBuiltin MarginBottom(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$MarginBottom): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x4b);
							goto label_05b17665;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x4b);
	label_05b17665: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038D5")]
	[Address(RVA = "0x5A17690", Offset = "0x5A16690", VA = "0x5A17690")]
	public CustomLogicVisualElementBuiltin Padding(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Padding): clean
		CustomLogicVisualElementBuiltin pCVar1;

		this.PaddingLeft(value, percentage);
		if (this == null) {
			throw new NullReferenceException();
		}
		this.PaddingTop(value, percentage);
		this.PaddingRight(value, percentage);
		pCVar1 = this.PaddingBottom(value, percentage);
		return pCVar1;
	}

	[Token(Token = "0x60038D6")]
	[Address(RVA = "0x5A176F0", Offset = "0x5A166F0", VA = "0x5A176F0")]
	public CustomLogicVisualElementBuiltin PaddingLeft(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$PaddingLeft): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length local_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			local_28.m_Value = 0.0;
			local_28.m_Unit = 0;
			local_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)local_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x61);
							goto label_05b177d5;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x61);
	label_05b177d5: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038D7")]
	[Address(RVA = "0x5A17800", Offset = "0x5A16800", VA = "0x5A17800")]
	public CustomLogicVisualElementBuiltin PaddingTop(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$PaddingTop): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length local_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			local_28.m_Value = 0.0;
			local_28.m_Unit = 0;
			local_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)local_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x65);
							goto label_05b178e5;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x65);
	label_05b178e5: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038D8")]
	[Address(RVA = "0x5A17910", Offset = "0x5A16910", VA = "0x5A17910")]
	public CustomLogicVisualElementBuiltin PaddingRight(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$PaddingRight): clean
		VisualElement __this_00;
		object obj;
		StyleLength value_00;
		Length local_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			local_28.m_Value = 0.0;
			local_28.m_Unit = 0;
			local_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)local_28);
			if (obj != null) {
				obj.set_paddingRight(value_00);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038D9")]
	[Address(RVA = "0x5A17A20", Offset = "0x5A16A20", VA = "0x5A17A20")]
	public CustomLogicVisualElementBuiltin PaddingBottom(float value, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$PaddingBottom): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;
		Length UStack_28;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_28.m_Value = 0.0;
			UStack_28.m_Unit = 0;
			UStack_28 = new Length(value, (uint)percentage);
			value_00 = ((StyleLength)(Length)UStack_28);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x5f);
							goto label_05b17b05;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x5f);
	label_05b17b05: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038DA")]
	[Address(RVA = "0x5A17B30", Offset = "0x5A16B30", VA = "0x5A17B30")]
	public CustomLogicVisualElementBuiltin FontStyle(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$FontStyle): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		handle = TypeRef_UnityEngine_FontStyle;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown font style value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_FontStyle);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x89);
							goto label_05b17c87;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x89);
	label_05b17c87: ;
				(*pVVar4.methodPtr)(pIVar3,(UnityEngine_UIElements_StyleEnum_FontStyle__o)UVar9.m_Value,pVVar4.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038DB")]
	[Address(RVA = "0x5A17D20", Offset = "0x5A16D20", VA = "0x5A17D20")]
	public CustomLogicVisualElementBuiltin FontSize(float value, bool percentage = false, int scaleMode = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$FontSize): 12 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		VisualElement pUVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Il2CppType handle;
		bool bVar4;
		CustomLogicVisualElementBuiltin.c__DisplayClass52_0 __this_00;
		Type enumType;
		object pIVar5;
		EventCallback<TEventType> __this_01;
		VirtualInvokeData pVVar6;
		Il2CppClass pIVar7;
		Exception __this_02;
		String message;
		MethodInfo lastManagedFrame;
		ulong uVar8;
		long lVar9;
		StyleLength value_00;
		Length UStack_48;
		float fStack_3c;
		EventCallback<TEventType> pUStack_38;

		fStack_3c = value;
		pUStack_38 = null;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVisualElementBuiltin.c__DisplayClass52_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.value = fStack_3c;
			__this_00.scaleMode = scaleMode;
			__this_00.__4__this = __this;
			handle = TypeRef_CustomLogic_FontScaleMode;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			UStack_48.m_Value = (float)__this_00.scaleMode;
			pIVar5 = (object)UStack_48;
			bVar4 = Enum.IsDefined(enumType, pIVar5);
			if (!bVar4) {
				pIVar7 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_02 = (Exception)il2cpp_codegen_object_new(pIVar7);
				message = il2cpp_codegen_get_runtime_metadata(&"Unknown font scale mode");
				__this_02 = new Exception(message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_FontSize);
				throw (object)__this_02;
			}
			pSVar1 = (Dictionary<object, object>)__this._onResize;
			if (pSVar1 != null) {
				bVar4 = pSVar1.TryGetValue((Il2CppObject *)"FontScaleMode", (object*)&pUStack_38);
				if (bVar4) {
					pUVar2 = __this._visualElement;
					if (pUVar2 == null) goto label_05b18026;
					pUVar2.UnregisterCallback<GeometryChangedEvent>(pUStack_38, 0);
				}
				if (percentage) {
					__this_01 = (EventCallback<TEventType>)il2cpp_codegen_object_new((Il2CppClass)typeof(EventCallback<GeometryChangedEvent>));
					__this_01 = new EventCallback<object>((object)__this_00, (intptr_t) MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_c__DisplayClass52_0_FontSize_b__0);
					pSVar1 = (Dictionary<object, object>)__this._onResize;
					if (pSVar1 != null) {
						pSVar1.set_Item((Il2CppObject *)"FontScaleMode", (object)__this_01);
						pUVar2 = __this._visualElement;
						if (pUVar2 != null) {
							pUVar2.RegisterCallback<GeometryChangedEvent>(__this_01, 0);
							return __this;
						}
					}
				}
				else {
					pUVar2 = __this._visualElement;
					if (pUVar2 != null) {
						pIVar5 = (object)pUVar2.style;
						UStack_48.m_Value = 0.0;
						UStack_48.m_Unit = 0;
						UStack_48 = new Length(__this_00.value);
						value_00 = ((StyleLength)(Length)UStack_48);
						if (pIVar5 != null) {
							pIVar7 = pIVar5.klass;
							uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
							if (uVar8 != 0) {
								pIVar3 = (pIVar7._1).interfaceOffsets;
								lVar9 = 0;
								do {
									if (*(IStyle*)((long)&pIVar3.interfaceType + lVar9) == typeof(IStyle)) {
										pVVar6 = pIVar7.vtable + (*(int)((long)&pIVar3.offset + lVar9) + 0x41);
										goto label_05b18005;
									}
									lVar9 = lVar9 + 0x10;
								} while (uVar8 * 0x10 != lVar9);
							}
							pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar5, typeof(IStyle), 0x41);
	label_05b18005: ;
							(*pVVar6.methodPtr)(pIVar5,value_00,pVVar6.method);
							return __this;
						}
					}
				}
			}
		}
	label_05b18026: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038DC")]
	[Address(RVA = "0x5A18090", Offset = "0x5A17090", VA = "0x5A18090")]
	public CustomLogicVisualElementBuiltin Color(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$Color): 4 lines keep C-only constructs
		VisualElement __this_00;
		Color255 __this_01;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		StyleColor value;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Color v;
		StyleColor local_30;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			if ((color != null) &&(__this_01 = color.Value, __this_01 != null)) {
				v = __this_01.ToColor();
				local_30 = ((StyleColor)v);
				if (obj != null) {
					pIVar1 = obj.klass;
					uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar4 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar5 = 0;
						do {
							if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
								pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x2f);
								goto label_05b18175;
							}
							lVar5 = lVar5 + 0x10;
						} while (uVar4 * 0x10 != lVar5);
					}
					pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x2f);
	label_05b18175: ;
					value.m_Value.b = local_30.m_Value.b;
					value.m_Value.a = local_30.m_Value.a;
					value.m_Value.r = local_30.m_Value.r;
					value.m_Value.g = local_30.m_Value.g;
					value.m_Keyword = local_30.m_Keyword;
					(*pVVar3.methodPtr)(obj,value,pVVar3.method);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038DD")]
	[Address(RVA = "0x5A181B0", Offset = "0x5A171B0", VA = "0x5A181B0")]
	public CustomLogicVisualElementBuiltin TextAlign(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextAlign): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		handle = TypeRef_UnityEngine_TextAnchor;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown text align value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_TextAlign);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x9d);
							goto label_05b18307;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x9d);
	label_05b18307: ;
				(*pVVar4.methodPtr)(pIVar3,(UnityEngine_UIElements_StyleEnum_TextAnchor__o)UVar9.m_Value,pVVar4.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038DE")]
	[Address(RVA = "0x5A183A0", Offset = "0x5A173A0", VA = "0x5A183A0")]
	public CustomLogicVisualElementBuiltin TextWrap(bool value = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextWrap): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleEnum<T> UVar6;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UVar6 = ((StyleEnum<T>)(uint)!value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0xab);
							goto label_05b18467;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0xab);
	label_05b18467: ;
				(*pVVar3.methodPtr)(obj,(UnityEngine_UIElements_StyleEnum_WhiteSpace__o)UVar6.m_Value,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038DF")]
	[Address(RVA = "0x5A18490", Offset = "0x5A17490", VA = "0x5A18490")]
	public CustomLogicVisualElementBuiltin TextOverflow(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextOverflow): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		handle = TypeRef_UnityEngine_UIElements_TextOverflow;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown text overflow value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_TextOverflow);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x6f);
							goto label_05b185e5;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x6f);
	label_05b185e5: ;
				(*pVVar4.methodPtr)(pIVar3,(UnityEngine_UIElements_StyleEnum_TextOverflow__o)UVar9.m_Value,pVVar4.method) ;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E0")]
	[Address(RVA = "0x5A18680", Offset = "0x5A17680", VA = "0x5A18680")]
	public CustomLogicVisualElementBuiltin TextOutlineWidth(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextOutlineWidth): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		StyleFloat value_00;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleFloat)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0xa5);
							goto label_05b18737;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0xa5);
	label_05b18737: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E1")]
	[Address(RVA = "0x5A18760", Offset = "0x5A17760", VA = "0x5A18760")]
	public CustomLogicVisualElementBuiltin TextOutlineColor(CustomLogicColorBuiltin value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextOutlineColor): 4 lines keep C-only constructs
		VisualElement __this_00;
		Color255 __this_01;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		StyleColor value_00;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Color v;
		StyleColor UStack_30;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			if ((value != null) &&(__this_01 = value.Value, __this_01 != null)) {
				v = __this_01.ToColor();
				UStack_30 = ((StyleColor)v);
				if (obj != null) {
					pIVar1 = obj.klass;
					uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar4 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar5 = 0;
						do {
							if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
								pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0xa3);
								goto label_05b18847;
							}
							lVar5 = lVar5 + 0x10;
						} while (uVar4 * 0x10 != lVar5);
					}
					pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0xa3);
	label_05b18847: ;
					value_00.m_Value.b = UStack_30.m_Value.b;
					value_00.m_Value.a = UStack_30.m_Value.a;
					value_00.m_Value.r = UStack_30.m_Value.r;
					value_00.m_Value.g = UStack_30.m_Value.g;
					value_00.m_Keyword = UStack_30.m_Keyword;
					(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E2")]
	[Address(RVA = "0x5A18880", Offset = "0x5A17880", VA = "0x5A18880")]
	public CustomLogicVisualElementBuiltin TextShadowColor(CustomLogicColorBuiltin value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowColor): 5 lines keep C-only constructs
		Color255 __this_00;
		VisualElement __this_01;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		TextShadow v;
		StyleTextShadow value_00;
		ulong uVar7;
		uint uVar8;
		TextShadow pUVar9;
		object obj;
		VirtualInvokeData pVVar10;
		ulong uVar11;
		long lVar12;
		Color UVar13;
		StyleTextShadow UStack_38;

		if ((value != null) &&(__this_00 = value.Value, __this_00 != null)) {
			UVar13 = (Color)__this_00.ToColor();
			__this._textShadow.color = UVar13;
			__this_01 = __this._visualElement;
			if (__this_01 != null) {
				obj = (object)__this_01.style;
				uVar3 = __this._textShadow.color.r;
				uVar7 = __this._textShadow.offset;
				uVar8 = __this._textShadow.blurRadius;
				v.blurRadius = (float)uVar8;
				v.offset = (Vector2)uVar7;
				uVar4 = __this._textShadow.color.g;
				pUVar9 = &__this._textShadow;
				uVar5 = pUVar9.color.b;
				uVar6 = pUVar9.color.a;
				v.color.r = (float)uVar3;
				v.color.g = (float)uVar4;
				v.color.b = (float)uVar5;
				v.color.a = (float)uVar6;
				UStack_38 = ((StyleTextShadow)v);
				if (obj != null) {
					pIVar1 = obj.klass;
					uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar11 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar12 = 0;
						do {
							if (*(IStyle*)((long)&pIVar2.interfaceType + lVar12) == typeof(IStyle)) {
								pVVar10 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar12) + 0x71);
								goto label_05b18985;
							}
							lVar12 = lVar12 + 0x10;
						} while (uVar11 * 0x10 != lVar12);
					}
					pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x71);
	label_05b18985: ;
					value_00.m_Value.offset.y = UStack_38.m_Value.offset.y;
					value_00.m_Keyword = UStack_38.m_Keyword;
					value_00.m_Value.offset.x = UStack_38.m_Value.offset.x;
					value_00.m_Value.blurRadius = UStack_38.m_Value.blurRadius;
					value_00.m_Value.color.r = UStack_38.m_Value.color.r;
					value_00.m_Value.color.g = UStack_38.m_Value.color.g;
					value_00.m_Value.color.b = UStack_38.m_Value.color.b;
					value_00.m_Value.color.a = UStack_38.m_Value.color.a;
					(*pVVar10.methodPtr)(obj,value_00,pVVar10.method);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E3")]
	[Address(RVA = "0x5A189C0", Offset = "0x5A179C0", VA = "0x5A189C0")]
	public CustomLogicVisualElementBuiltin TextShadowOffset(float horizontal, float vertical)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowOffset): 5 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		TextShadow v;
		StyleTextShadow value;
		ulong uVar7;
		uint uVar8;
		TextShadow pUVar9;
		object obj;
		VirtualInvokeData pVVar10;
		ulong uVar11;
		long lVar12;
		StyleTextShadow UStack_38;

		__this._textShadow.offset.x = horizontal;
		__this._textShadow.offset.y = vertical;
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			uVar3 = __this._textShadow.color.r;
			uVar7 = __this._textShadow.offset;
			uVar8 = __this._textShadow.blurRadius;
			v.blurRadius = (float)uVar8;
			v.offset = (Vector2)uVar7;
			uVar4 = __this._textShadow.color.g;
			pUVar9 = &__this._textShadow;
			uVar5 = pUVar9.color.b;
			uVar6 = pUVar9.color.a;
			v.color.r = (float)uVar3;
			v.color.g = (float)uVar4;
			v.color.b = (float)uVar5;
			v.color.a = (float)uVar6;
			UStack_38 = ((StyleTextShadow)v);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar12) == typeof(IStyle)) {
							pVVar10 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar12) + 0x71);
							goto label_05b18ac5;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x71);
	label_05b18ac5: ;
				value.m_Value.offset.y = UStack_38.m_Value.offset.y;
				value.m_Keyword = UStack_38.m_Keyword;
				value.m_Value.offset.x = UStack_38.m_Value.offset.x;
				value.m_Value.blurRadius = UStack_38.m_Value.blurRadius;
				value.m_Value.color.r = UStack_38.m_Value.color.r;
				value.m_Value.color.g = UStack_38.m_Value.color.g;
				value.m_Value.color.b = UStack_38.m_Value.color.b;
				value.m_Value.color.a = UStack_38.m_Value.color.a;
				(*pVVar10.methodPtr)(obj,value,pVVar10.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E4")]
	[Address(RVA = "0x5A18B00", Offset = "0x5A17B00", VA = "0x5A18B00")]
	public CustomLogicVisualElementBuiltin TextShadowHorizontalOffset(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowHorizontalOffset): 5 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		TextShadow v;
		StyleTextShadow value_00;
		ulong uVar7;
		uint uVar8;
		TextShadow pUVar9;
		object obj;
		VirtualInvokeData pVVar10;
		ulong uVar11;
		long lVar12;
		StyleTextShadow UStack_38;

		__this._textShadow.offset.x = value;
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			uVar3 = __this._textShadow.color.r;
			uVar7 = __this._textShadow.offset;
			uVar8 = __this._textShadow.blurRadius;
			v.blurRadius = (float)uVar8;
			v.offset = (Vector2)uVar7;
			uVar4 = __this._textShadow.color.g;
			pUVar9 = &__this._textShadow;
			uVar5 = pUVar9.color.b;
			uVar6 = pUVar9.color.a;
			v.color.r = (float)uVar3;
			v.color.g = (float)uVar4;
			v.color.b = (float)uVar5;
			v.color.a = (float)uVar6;
			UStack_38 = ((StyleTextShadow)v);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar12) == typeof(IStyle)) {
							pVVar10 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar12) + 0x71);
							goto label_05b18bf5;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x71);
	label_05b18bf5: ;
				value_00.m_Value.offset.y = UStack_38.m_Value.offset.y;
				value_00.m_Keyword = UStack_38.m_Keyword;
				value_00.m_Value.offset.x = UStack_38.m_Value.offset.x;
				value_00.m_Value.blurRadius = UStack_38.m_Value.blurRadius;
				value_00.m_Value.color.r = UStack_38.m_Value.color.r;
				value_00.m_Value.color.g = UStack_38.m_Value.color.g;
				value_00.m_Value.color.b = UStack_38.m_Value.color.b;
				value_00.m_Value.color.a = UStack_38.m_Value.color.a;
				(*pVVar10.methodPtr)(obj,value_00,pVVar10.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E5")]
	[Address(RVA = "0x5A18C30", Offset = "0x5A17C30", VA = "0x5A18C30")]
	public CustomLogicVisualElementBuiltin TextShadowVerticalOffset(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowVerticalOffset): 5 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		TextShadow v;
		StyleTextShadow value_00;
		ulong uVar7;
		uint uVar8;
		TextShadow pUVar9;
		object obj;
		VirtualInvokeData pVVar10;
		ulong uVar11;
		long lVar12;
		StyleTextShadow UStack_30;

		__this._textShadow.offset.y = value;
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			uVar3 = __this._textShadow.color.r;
			uVar7 = __this._textShadow.offset;
			uVar8 = __this._textShadow.blurRadius;
			v.blurRadius = (float)uVar8;
			v.offset = (Vector2)uVar7;
			uVar4 = __this._textShadow.color.g;
			pUVar9 = &__this._textShadow;
			uVar5 = pUVar9.color.b;
			uVar6 = pUVar9.color.a;
			v.color.r = (float)uVar3;
			v.color.g = (float)uVar4;
			v.color.b = (float)uVar5;
			v.color.a = (float)uVar6;
			UStack_30 = ((StyleTextShadow)v);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar12) == typeof(IStyle)) {
							pVVar10 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar12) + 0x71);
							goto label_05b18d15;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x71);
	label_05b18d15: ;
				value_00.m_Value.offset.y = UStack_30.m_Value.offset.y;
				value_00.m_Keyword = UStack_30.m_Keyword;
				value_00.m_Value.offset.x = UStack_30.m_Value.offset.x;
				value_00.m_Value.blurRadius = UStack_30.m_Value.blurRadius;
				value_00.m_Value.color.r = UStack_30.m_Value.color.r;
				value_00.m_Value.color.g = UStack_30.m_Value.color.g;
				value_00.m_Value.color.b = UStack_30.m_Value.color.b;
				value_00.m_Value.color.a = UStack_30.m_Value.color.a;
				(*pVVar10.methodPtr)(obj,value_00,pVVar10.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E6")]
	[Address(RVA = "0x5A18D50", Offset = "0x5A17D50", VA = "0x5A18D50")]
	public CustomLogicVisualElementBuiltin TextShadowBlurRadius(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextShadowBlurRadius): 5 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		TextShadow v;
		StyleTextShadow value_00;
		ulong uVar7;
		uint uVar8;
		TextShadow pUVar9;
		object obj;
		VirtualInvokeData pVVar10;
		ulong uVar11;
		long lVar12;
		StyleTextShadow UStack_30;

		__this._textShadow.blurRadius = value;
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			uVar3 = __this._textShadow.color.r;
			uVar7 = __this._textShadow.offset;
			uVar8 = __this._textShadow.blurRadius;
			v.blurRadius = (float)uVar8;
			v.offset = (Vector2)uVar7;
			uVar4 = __this._textShadow.color.g;
			pUVar9 = &__this._textShadow;
			uVar5 = pUVar9.color.b;
			uVar6 = pUVar9.color.a;
			v.color.r = (float)uVar3;
			v.color.g = (float)uVar4;
			v.color.b = (float)uVar5;
			v.color.a = (float)uVar6;
			UStack_30 = ((StyleTextShadow)v);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar12) == typeof(IStyle)) {
							pVVar10 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar12) + 0x71);
							goto label_05b18e35;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x71);
	label_05b18e35: ;
				value_00.m_Value.offset.y = UStack_30.m_Value.offset.y;
				value_00.m_Keyword = UStack_30.m_Keyword;
				value_00.m_Value.offset.x = UStack_30.m_Value.offset.x;
				value_00.m_Value.blurRadius = UStack_30.m_Value.blurRadius;
				value_00.m_Value.color.r = UStack_30.m_Value.color.r;
				value_00.m_Value.color.g = UStack_30.m_Value.color.g;
				value_00.m_Value.color.b = UStack_30.m_Value.color.b;
				value_00.m_Value.color.a = UStack_30.m_Value.color.a;
				(*pVVar10.methodPtr)(obj,value_00,pVVar10.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E7")]
	[Address(RVA = "0x5A18E70", Offset = "0x5A17E70", VA = "0x5A18E70")]
	public CustomLogicVisualElementBuiltin TextLetterSpacing(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextLetterSpacing): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleLength)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x49);
							goto label_05b18f35;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x49);
	label_05b18f35: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E8")]
	[Address(RVA = "0x5A18F60", Offset = "0x5A17F60", VA = "0x5A18F60")]
	public CustomLogicVisualElementBuiltin TextWordSpacing(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextWordSpacing): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleLength)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0xaf);
							goto label_05b19027;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0xaf);
	label_05b19027: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038E9")]
	[Address(RVA = "0x5A19050", Offset = "0x5A18050", VA = "0x5A19050")]
	public CustomLogicVisualElementBuiltin TextParagraphSpacing(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TextParagraphSpacing): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleLength)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x8f);
							goto label_05b19117;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x8f);
	label_05b19117: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038EA")]
	[Address(RVA = "0x5A19140", Offset = "0x5A18140", VA = "0x5A19140")]
	public CustomLogicVisualElementBuiltin BackgroundColor(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BackgroundColor): clean
		VisualElement __this_00;
		Color255 __this_01;
		StyleColor value;
		object obj;
		Color v;
		StyleColor UStack_30;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			if ((color != null) &&(__this_01 = color.Value, __this_01 != null)) {
				v = __this_01.ToColor();
				UStack_30 = ((StyleColor)v);
				if (obj != null) {
					value.m_Value.b = UStack_30.m_Value.b;
					value.m_Value.a = UStack_30.m_Value.a;
					value.m_Value.r = UStack_30.m_Value.r;
					value.m_Value.g = UStack_30.m_Value.g;
					value.m_Keyword = UStack_30.m_Keyword;
					obj.set_backgroundColor(value);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038EB")]
	[Address(RVA = "0x5A19260", Offset = "0x5A18260", VA = "0x5A19260")]
	public CustomLogicVisualElementBuiltin SetBackgroundImage(CustomLogicImageBuiltin image)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$SetBackgroundImage): 7 lines keep C-only constructs
		Texture2D v;
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		StyleBackground value;
		bool bVar3;
		object obj;
		VirtualInvokeData pVVar4;
		ulong uVar5;
		long lVar6;
		StyleBackground UStack_78;
		Texture2D pUStack_48;
		Sprite pUStack_40;
		RenderTexture pUStack_38;
		VectorImage pUStack_30;
		int iStack_28;
		uint uStack_24;

		if (image != null) {
			v = image._currentTexture;
			bVar3 = ((Object)v != null);
			if (bVar3) {
				__this_00 = __this._visualElement;
				if (__this_00 != null) {
					obj = (object)__this_00.style;
					UStack_78.m_Value.m_RenderTexture = null;
					UStack_78.m_Value.m_VectorImage = null;
					UStack_78.m_Value.m_Texture = null;
					UStack_78.m_Value.m_Sprite = null;
					UStack_78.m_Keyword = 0;
					UStack_78._36_4_ = 0;
					UStack_78 = new StyleBackground(v);
					if (obj != null) {
						iStack_28 = UStack_78.m_Keyword;
						uStack_24 = UStack_78._36_4_;
						pUStack_38 = UStack_78.m_Value.m_RenderTexture;
						pUStack_30 = UStack_78.m_Value.m_VectorImage;
						pUStack_48 = UStack_78.m_Value.m_Texture;
						pUStack_40 = UStack_78.m_Value.m_Sprite;
						pIVar1 = obj.klass;
						uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
						if (uVar5 != 0) {
							pIVar2 = (pIVar1._1).interfaceOffsets;
							lVar6 = 0;
							do {
								if (*(IStyle*)((long)&pIVar2.interfaceType + lVar6) == typeof(IStyle)) {
									pVVar4 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar6) + 0xb);
									goto label_05b19395;
								}
								lVar6 = lVar6 + 0x10;
							} while (uVar5 * 0x10 != lVar6);
						}
						pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0xb);
	label_05b19395: ;
						value.m_Value.m_Sprite = pUStack_40;
						value.m_Value.m_Texture = pUStack_48;
						value.m_Value.m_RenderTexture = pUStack_38;
						value.m_Value.m_VectorImage = pUStack_30;
						value.m_Keyword = iStack_28;
						value._36_4_ = uStack_24;
						(*pVVar4.methodPtr)(obj,value,pVVar4.method);
						return __this;
					}
				}
				throw new NullReferenceException();
			}
		}
		return __this;
	}

	[Token(Token = "0x60038EC")]
	[Address(RVA = "0x5A193E0", Offset = "0x5A183E0", VA = "0x5A193E0")]
	public CustomLogicVisualElementBuiltin BorderColor(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderColor): clean
		CustomLogicVisualElementBuiltin pCVar1;

		this.BorderColorLeft(color);
		if (this == null) {
			throw new NullReferenceException();
		}
		this.BorderColorTop(color);
		this.BorderColorRight(color);
		return pCVar1;
	}

	[Token(Token = "0x60038ED")]
	[Address(RVA = "0x5A19430", Offset = "0x5A18430", VA = "0x5A19430")]
	public CustomLogicVisualElementBuiltin BorderColorLeft(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorLeft): 4 lines keep C-only constructs
		VisualElement __this_00;
		Color255 __this_01;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		StyleColor value;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Color v;
		StyleColor local_30;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			if ((color != null) &&(__this_01 = color.Value, __this_01 != null)) {
				v = __this_01.ToColor();
				local_30 = ((StyleColor)v);
				if (obj != null) {
					pIVar1 = obj.klass;
					uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar4 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar5 = 0;
						do {
							if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
								pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x1d);
								goto label_05b19515;
							}
							lVar5 = lVar5 + 0x10;
						} while (uVar4 * 0x10 != lVar5);
					}
					pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x1d);
	label_05b19515: ;
					value.m_Value.b = local_30.m_Value.b;
					value.m_Value.a = local_30.m_Value.a;
					value.m_Value.r = local_30.m_Value.r;
					value.m_Value.g = local_30.m_Value.g;
					value.m_Keyword = local_30.m_Keyword;
					(*pVVar3.methodPtr)(obj,value,pVVar3.method);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038EE")]
	[Address(RVA = "0x5A19550", Offset = "0x5A18550", VA = "0x5A19550")]
	public CustomLogicVisualElementBuiltin BorderColorTop(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorTop): 4 lines keep C-only constructs
		VisualElement __this_00;
		Color255 __this_01;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		StyleColor value;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Color v;
		StyleColor local_30;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			if ((color != null) &&(__this_01 = color.Value, __this_01 != null)) {
				v = __this_01.ToColor();
				local_30 = ((StyleColor)v);
				if (obj != null) {
					pIVar1 = obj.klass;
					uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar4 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar5 = 0;
						do {
							if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
								pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x25);
								goto label_05b19635;
							}
							lVar5 = lVar5 + 0x10;
						} while (uVar4 * 0x10 != lVar5);
					}
					pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x25);
	label_05b19635: ;
					value.m_Value.b = local_30.m_Value.b;
					value.m_Value.a = local_30.m_Value.a;
					value.m_Value.r = local_30.m_Value.r;
					value.m_Value.g = local_30.m_Value.g;
					value.m_Keyword = local_30.m_Keyword;
					(*pVVar3.methodPtr)(obj,value,pVVar3.method);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038EF")]
	[Address(RVA = "0x5A19670", Offset = "0x5A18670", VA = "0x5A19670")]
	public CustomLogicVisualElementBuiltin BorderColorRight(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorRight): 4 lines keep C-only constructs
		VisualElement __this_00;
		Color255 __this_01;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		StyleColor value;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Color v;
		StyleColor local_30;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			if ((color != null) &&(__this_01 = color.Value, __this_01 != null)) {
				v = __this_01.ToColor();
				local_30 = ((StyleColor)v);
				if (obj != null) {
					pIVar1 = obj.klass;
					uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar4 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar5 = 0;
						do {
							if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
								pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x21);
								goto label_05b19755;
							}
							lVar5 = lVar5 + 0x10;
						} while (uVar4 * 0x10 != lVar5);
					}
					pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x21);
	label_05b19755: ;
					value.m_Value.b = local_30.m_Value.b;
					value.m_Value.a = local_30.m_Value.a;
					value.m_Value.r = local_30.m_Value.r;
					value.m_Value.g = local_30.m_Value.g;
					value.m_Keyword = local_30.m_Keyword;
					(*pVVar3.methodPtr)(obj,value,pVVar3.method);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038F0")]
	[Address(RVA = "0x5A19790", Offset = "0x5A18790", VA = "0x5A19790")]
	public CustomLogicVisualElementBuiltin BorderColorBottom(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderColorBottom): 4 lines keep C-only constructs
		VisualElement __this_00;
		Color255 __this_01;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		StyleColor value;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Color v;
		StyleColor UStack_30;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			if ((color != null) &&(__this_01 = color.Value, __this_01 != null)) {
				v = __this_01.ToColor();
				UStack_30 = ((StyleColor)v);
				if (obj != null) {
					pIVar1 = obj.klass;
					uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar4 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar5 = 0;
						do {
							if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
								pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x15);
								goto label_05b19875;
							}
							lVar5 = lVar5 + 0x10;
						} while (uVar4 * 0x10 != lVar5);
					}
					pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x15);
	label_05b19875: ;
					value.m_Value.b = UStack_30.m_Value.b;
					value.m_Value.a = UStack_30.m_Value.a;
					value.m_Value.r = UStack_30.m_Value.r;
					value.m_Value.g = UStack_30.m_Value.g;
					value.m_Keyword = UStack_30.m_Keyword;
					(*pVVar3.methodPtr)(obj,value,pVVar3.method);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038F1")]
	[Address(RVA = "0x5A198B0", Offset = "0x5A188B0", VA = "0x5A198B0")]
	public CustomLogicVisualElementBuiltin BorderWidth(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidth): clean
		CustomLogicVisualElementBuiltin pCVar1;

		this.BorderWidthLeft(value);
		if (this == null) {
			throw new NullReferenceException();
		}
		this.BorderWidthTop(value);
		this.BorderWidthRight(value);
		return pCVar1;
	}

	[Token(Token = "0x60038F2")]
	[Address(RVA = "0x5A19900", Offset = "0x5A18900", VA = "0x5A19900")]
	public CustomLogicVisualElementBuiltin BorderWidthLeft(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthLeft): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		StyleFloat value_00;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleFloat)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x1f);
							goto label_05b199b5;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x1f);
	label_05b199b5: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038F3")]
	[Address(RVA = "0x5A199E0", Offset = "0x5A189E0", VA = "0x5A199E0")]
	public CustomLogicVisualElementBuiltin BorderWidthTop(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthTop): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		StyleFloat value_00;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleFloat)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x2b);
							goto label_05b19a95;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x2b);
	label_05b19a95: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038F4")]
	[Address(RVA = "0x5A19AC0", Offset = "0x5A18AC0", VA = "0x5A19AC0")]
	public CustomLogicVisualElementBuiltin BorderWidthRight(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthRight): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		StyleFloat value_00;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleFloat)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x23);
							goto label_05b19b75;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x23);
	label_05b19b75: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038F5")]
	[Address(RVA = "0x5A19BA0", Offset = "0x5A18BA0", VA = "0x5A19BA0")]
	public CustomLogicVisualElementBuiltin BorderWidthBottom(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderWidthBottom): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		StyleFloat value_00;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleFloat)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x1b);
							goto label_05b19c55;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x1b);
	label_05b19c55: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038F6")]
	[Address(RVA = "0x5A19C80", Offset = "0x5A18C80", VA = "0x5A19C80")]
	public CustomLogicVisualElementBuiltin BorderRadius(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadius): clean
		CustomLogicVisualElementBuiltin pCVar1;

		this.BorderRadiusTopLeft(value);
		if (this == null) {
			throw new NullReferenceException();
		}
		this.BorderRadiusTopRight(value);
		this.BorderRadiusBottomLeft(value);
		return pCVar1;
	}

	[Token(Token = "0x60038F7")]
	[Address(RVA = "0x5A19CD0", Offset = "0x5A18CD0", VA = "0x5A19CD0")]
	public CustomLogicVisualElementBuiltin BorderRadiusTopLeft(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusTopLeft): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleLength)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x27);
							goto label_05b19d95;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x27);
	label_05b19d95: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038F8")]
	[Address(RVA = "0x5A19DC0", Offset = "0x5A18DC0", VA = "0x5A19DC0")]
	public CustomLogicVisualElementBuiltin BorderRadiusTopRight(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusTopRight): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleLength)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x29);
							goto label_05b19e85;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x29);
	label_05b19e85: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038F9")]
	[Address(RVA = "0x5A19EB0", Offset = "0x5A18EB0", VA = "0x5A19EB0")]
	public CustomLogicVisualElementBuiltin BorderRadiusBottomLeft(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusBottomLeft): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleLength)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x17);
							goto label_05b19f75;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x17);
	label_05b19f75: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038FA")]
	[Address(RVA = "0x5A19FA0", Offset = "0x5A18FA0", VA = "0x5A19FA0")]
	public CustomLogicVisualElementBuiltin BorderRadiusBottomRight(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$BorderRadiusBottomRight): 4 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		StyleLength value_00;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			value_00 = ((StyleLength)value);
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x19);
							goto label_05b1a065;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x19);
	label_05b1a065: ;
				(*pVVar3.methodPtr)(obj,value_00,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038FB")]
	[Address(RVA = "0x5A1A090", Offset = "0x5A19090", VA = "0x5A1A090")]
	public CustomLogicVisualElementBuiltin OverflowX(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$OverflowX): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		handle = TypeRef_UnityEngine_UIElements_Overflow;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown overflow value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_OverflowX);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x5d);
							goto label_05b1a1e5;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x5d);
	label_05b1a1e5: ;
				(*pVVar4.methodPtr)(pIVar3,(UnityEngine_UIElements_StyleEnum_Overflow__o)UVar9.m_Value,pVVar4.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038FC")]
	[Address(RVA = "0x5A1A280", Offset = "0x5A19280", VA = "0x5A1A280")]
	public CustomLogicVisualElementBuiltin OverflowY(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$OverflowY): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		StyleEnum<T> UVar9;
		int iStack_30;
		int iStack_2c;

		handle = TypeRef_UnityEngine_UIElements_Overflow;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar3 = (object)iStack_2c;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			iStack_30 = value;
			pIVar3 = (object)iStack_30;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown overflow value: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_OverflowY);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UVar9 = ((StyleEnum<T>)value);
			if (pIVar3 != null) {
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x5d);
							goto label_05b1a3d5;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x5d);
	label_05b1a3d5: ;
				(*pVVar4.methodPtr)(pIVar3,(UnityEngine_UIElements_StyleEnum_Overflow__o)UVar9.m_Value,pVVar4.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038FD")]
	[Address(RVA = "0x5A1A470", Offset = "0x5A19470", VA = "0x5A1A470")]
	public CustomLogicVisualElementBuiltin SetTransformOrigin(float x, float y, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$SetTransformOrigin): 5 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		TransformOrigin v;
		StyleTransformOrigin value;
		Length x_00;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Length UStack_78;
		Length UStack_70;
		TransformOrigin UStack_58;
		StyleTransformOrigin UStack_38;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_78.m_Value = 0.0;
			UStack_78.m_Unit = 0;
			UStack_78 = new Length(x, (uint)percentage);
			x_00 = UStack_78;
			UStack_78.m_Value = 0.0;
			UStack_78.m_Unit = 0;
			UStack_78 = new Length(y, (uint)percentage);
			UStack_58.m_X.m_Value = 0.0;
			UStack_58.m_X.m_Unit = 0;
			UStack_58.m_Y.m_Value = 0.0;
			UStack_58.m_Y.m_Unit = 0;
			UStack_58.m_Z = 0.0;
			UStack_58 = new TransformOrigin((Length)x_00, (Length)UStack_78, 0.0);
			v.m_Y = UStack_58.m_Y;
			v.m_X = UStack_58.m_X;
			v.m_Z = UStack_58.m_Z;
			UStack_38 = ((StyleTransformOrigin)v);
			if (obj != null) {
				UStack_78 = UStack_38.m_Value.m_X;
				UStack_70 = UStack_38.m_Value.m_Y;
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x75);
							goto label_05b1a5c5;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x75);
	label_05b1a5c5: ;
				value.m_Value.m_Y = UStack_70;
				value.m_Value.m_X = UStack_78;
				value.m_Value.m_Z = (float)_fStack_68;
				value.m_Keyword = SUB84(_fStack_68, 4);
				(*pVVar3.methodPtr)(obj,value,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038FE")]
	[Address(RVA = "0x5A1A600", Offset = "0x5A19600", VA = "0x5A1A600")]
	public CustomLogicVisualElementBuiltin TransformTranslate(float x, float y, bool percentage = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TransformTranslate): 8 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Translate v;
		StyleTranslate value;
		Length x_00;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Length UStack_78;
		float fStack_70;
		int iStack_6c;
		float fStack_68;
		Translate UStack_58;
		StyleTranslate UStack_40;

		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_78.m_Value = 0.0;
			UStack_78.m_Unit = 0;
			UStack_78 = new Length(x, (uint)percentage);
			x_00 = UStack_78;
			UStack_78.m_Value = 0.0;
			UStack_78.m_Unit = 0;
			UStack_78 = new Length(y, (uint)percentage);
			UStack_58.m_X.m_Value = 0.0;
			UStack_58.m_X.m_Unit = 0;
			UStack_58.m_Y.m_Value = 0.0;
			UStack_58.m_Y.m_Unit = 0;
			UStack_58.m_Z = 0.0;
			UStack_58.m_isNone = false;
			UStack_58._21_3_ = 0;
			UStack_58 = new Translate((Length)x_00, (Length)UStack_78, 0.0);
			v.m_Y.m_Value = UStack_58.m_Y.m_Value;
			v.m_X = UStack_58.m_X;
			v.m_Y.m_Unit = UStack_58.m_Y.m_Unit;
			v.m_Z = UStack_58.m_Z;
			v._20_4_ = UStack_58._20_4_;
			UStack_40 = ((StyleTranslate)v);
			if (obj != null) {
				fStack_68 = UStack_40.m_Value.m_Z;
				UStack_78 = UStack_40.m_Value.m_X;
				fStack_70 = UStack_40.m_Value.m_Y.m_Value;
				iStack_6c = UStack_40.m_Value.m_Y.m_Unit;
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x7f);
							goto label_05b1a755;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x7f);
	label_05b1a755: ;
				value.m_Value.m_Y.m_Value = fStack_70;
				value.m_Value.m_X = UStack_78;
				value.m_Value.m_Y.m_Unit = iStack_6c;
				value.m_Value.m_Z = fStack_68;
				value.m_Value._20_4_ = (int)_bStack_64;
				value.m_Keyword = SUB84(_bStack_64, 4);
				(*pVVar3.methodPtr)(obj,value,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60038FF")]
	[Address(RVA = "0x5A1A790", Offset = "0x5A19790", VA = "0x5A1A790")]
	public CustomLogicVisualElementBuiltin TransformScale(float x, float y)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TransformScale): 9 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Vector2 scale;
		StyleScale value;
		Scale v;
		object obj;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		Scale UStack_78;
		Vector3 UStack_68;
		bool bStack_5c;
		undefined3 uStack_5b;
		int iStack_58;
		StyleScale UStack_50;
		float fStack_38;
		float fStack_28;

		fStack_38 = y;
		fStack_28 = x;
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			obj = (object)__this_00.style;
			UStack_78.m_Scale.x = 0.0;
			UStack_78.m_Scale.y = 0.0;
			UStack_78.m_Scale.z = 0.0;
			UStack_78.m_IsNone = false;
			UStack_78._13_3_ = 0;
			scale.y = fStack_38;
			scale.x = fStack_28;
			UStack_78 = new Scale(scale);
			v.m_Scale.z = UStack_78.m_Scale.z;
			v.m_IsNone = UStack_78.m_IsNone;
			v._13_3_ = UStack_78._13_3_;
			v.m_Scale.x = UStack_78.m_Scale.x;
			v.m_Scale.y = UStack_78.m_Scale.y;
			UStack_50 = ((StyleScale)v);
			if (obj != null) {
				iStack_58 = UStack_50.m_Keyword;
				UStack_68.x = UStack_50.m_Value.m_Scale.x;
				UStack_68.y = UStack_50.m_Value.m_Scale.y;
				UStack_68.z = UStack_50.m_Value.m_Scale.z;
				bStack_5c = UStack_50.m_Value.m_IsNone;
				uStack_5b = UStack_50.m_Value._13_3_;
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IStyle*)((long)&pIVar2.interfaceType + lVar5) == typeof(IStyle)) {
							pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0x6d);
							goto label_05b1a885;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x6d);
	label_05b1a885: ;
				value.m_Value.m_Scale.z = UStack_68.z;
				value.m_Value.m_IsNone = bStack_5c;
				value.m_Value._13_3_ = uStack_5b;
				value.m_Value.m_Scale.x = UStack_68.x;
				value.m_Value.m_Scale.y = UStack_68.y;
				value.m_Keyword = iStack_58;
				(*pVVar3.methodPtr)(obj,value,pVVar3.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003900")]
	[Address(RVA = "0x5A1A8C0", Offset = "0x5A198C0", VA = "0x5A1A8C0")]
	public CustomLogicVisualElementBuiltin TransformRotate(float angle, int angleUnit)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$TransformRotate): 12 lines keep C-only constructs
		VisualElement __this_00;
		Il2CppRuntimeInterfaceOffsetPair pIVar1;
		Rotate v;
		StyleRotate value;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		object pIVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		Il2CppClass pIVar6;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar7;
		long lVar8;
		Angle UStack_90;
		Angle UStack_88;
		float fStack_80;
		float fStack_7c;
		float fStack_78;
		Rotate UStack_68;
		StyleRotate UStack_48;

		handle = TypeRef_UnityEngine_UIElements_AngleUnit;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		UStack_88.m_Value = (float)angleUnit;
		pIVar3 = (object)UStack_88;
		bVar2 = Enum.IsDefined(enumType, pIVar3);
		if (!bVar2) {
			pIVar3 = (object)UStack_88;
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown angle unit: {0}");
			pSVar5 = String.Format(pSVar5, pIVar3);
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(pIVar6);
			__this_01 = new ArgumentException(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVisualElementBuiltin_TransformRotate);
			throw (object)__this_01;
		}
		__this_00 = __this._visualElement;
		if (__this_00 != null) {
			pIVar3 = (object)__this_00.style;
			UStack_90.m_Value = 0.0;
			UStack_90.m_Unit = 0;
			UStack_90 = new Angle(angle, angleUnit);
			UStack_68.m_Angle.m_Value = 0.0;
			UStack_68.m_Angle.m_Unit = 0;
			UStack_68.m_Axis.x = 0.0;
			UStack_68.m_Axis.y = 0.0;
			UStack_68.m_Axis.z = 0.0;
			UStack_68.m_IsNone = false;
			UStack_68._21_3_ = 0;
			UStack_68 = new Rotate((Angle)UStack_90);
			v.m_Axis.x = UStack_68.m_Axis.x;
			v.m_Angle = UStack_68.m_Angle;
			v.m_Axis.y = UStack_68.m_Axis.y;
			v.m_Axis.z = UStack_68.m_Axis.z;
			v._20_4_ = UStack_68._20_4_;
			UStack_48 = ((StyleRotate)v);
			if (pIVar3 != null) {
				fStack_78 = UStack_48.m_Value.m_Axis.z;
				UStack_88 = UStack_48.m_Value.m_Angle;
				fStack_80 = UStack_48.m_Value.m_Axis.x;
				fStack_7c = UStack_48.m_Value.m_Axis.y;
				pIVar6 = pIVar3.klass;
				uVar7 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar1 = (pIVar6._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IStyle*)((long)&pIVar1.interfaceType + lVar8) == typeof(IStyle)) {
							pVVar4 = pIVar6.vtable + (*(int)((long)&pIVar1.offset + lVar8) + 0x6b);
							goto label_05b1aa75;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IStyle), 0x6b);
	label_05b1aa75: ;
				value.m_Value.m_Axis.x = fStack_80;
				value.m_Value.m_Angle = UStack_88;
				value.m_Value.m_Axis.y = fStack_7c;
				value.m_Value.m_Axis.z = fStack_78;
				value.m_Value._20_4_ = (int)_bStack_74;
				value.m_Keyword = SUB84(_bStack_74, 4);
				(*pVVar4.methodPtr)(pIVar3,value,pVVar4.method);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003901")]
	[Address(RVA = "0x5A15930", Offset = "0x5A14930", VA = "0x5A15930")]
	private static Length GetLength(float value, bool percentage)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c (CustomLogic.CustomLogicVisualElementBuiltin$$GetLength): 2 lines keep C-only constructs
		undefined7 in_register_00000039;
		Length UStack_8;

		UStack_8.m_Value = 0.0;
		UStack_8.m_Unit = 0;
		UStack_8 = new Length(value, (int32_t)CONCAT71(in_register_00000039, percentage));
		return (Length)UStack_8;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicVisualElementBuiltin.c.

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass13_0$$.ctor: clean
	private void c__DisplayClass13_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass14_0$$.ctor: clean
	private void c__DisplayClass14_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$.ctor: clean
	private void c__DisplayClass40_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass52_0$$.ctor: clean
	private void c__DisplayClass52_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		if (Il2CppMethodInitialized_07547133 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVisualElementBuiltin.Bindings)) ;
			Il2CppMethodInitialized_07547133 = true;
		}
		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"ChildCount");
		__this.Add((Il2CppObject *)"Add");
		__this.Add((Il2CppObject *)"Remove");
		__this.Add((Il2CppObject *)"RemoveFromHierarchy");
		__this.Add((Il2CppObject *)"Clear");
		__this.Add((Il2CppObject *)"GetElementAt");
		__this.Add((Il2CppObject *)"QueryByName");
		__this.Add((Il2CppObject *)"QueryByClassName");
		__this.Add((Il2CppObject *)"RegisterMouseEnterEventCallback");
		__this.Add((Il2CppObject *)"RegisterMouseLeaveEventCallback");
		__this.Add((Il2CppObject *)"RegisterClickEventCallback");
		__this.Add((Il2CppObject *)"RegisterFocusInEventCallback");
		__this.Add((Il2CppObject *)"RegisterFocusOutEventCallback");
		__this.Add((Il2CppObject *)"Opacity");
		__this.Add((Il2CppObject *)"Active");
		__this.Add((Il2CppObject *)"Visible");
		__this.Add((Il2CppObject *)"TransitionDuration");
		__this.Add((Il2CppObject *)"Absolute");
		__this.Add((Il2CppObject *)"Left");
		__this.Add((Il2CppObject *)"Top");
		__this.Add((Il2CppObject *)"Right");
		__this.Add((Il2CppObject *)"Bottom");
		__this.Add((Il2CppObject *)"FlexShrink");
		__this.Add((Il2CppObject *)"FlexGrow");
		__this.Add((Il2CppObject *)"FlexDirection");
		__this.Add((Il2CppObject *)"FlexWrap");
		__this.Add((Il2CppObject *)"AlignItems");
		__this.Add((Il2CppObject *)"JustifyContent");
		__this.Add((Il2CppObject *)"AlignSelf");
		__this.Add((Il2CppObject *)"Width");
		__this.Add((Il2CppObject *)"Height");
		__this.Add((Il2CppObject *)"MinWidth");
		__this.Add((Il2CppObject *)"MinHeight");
		__this.Add((Il2CppObject *)"MaxWidth");
		__this.Add((Il2CppObject *)"MaxHeight");
		__this.Add((Il2CppObject *)"AspectRatio");
		__this.Add((Il2CppObject *)"Margin");
		__this.Add((Il2CppObject *)"MarginLeft");
		__this.Add((Il2CppObject *)"MarginTop");
		__this.Add((Il2CppObject *)"MarginRight");
		__this.Add((Il2CppObject *)"MarginBottom");
		__this.Add((Il2CppObject *)"Padding");
		__this.Add((Il2CppObject *)"PaddingLeft");
		__this.Add((Il2CppObject *)"PaddingTop");
		__this.Add((Il2CppObject *)"PaddingRight");
		__this.Add((Il2CppObject *)"PaddingBottom");
		__this.Add((Il2CppObject *)"FontStyle");
		__this.Add((Il2CppObject *)"FontSize");
		__this.Add((Il2CppObject *)"Color");
		__this.Add((Il2CppObject *)"TextAlign");
		__this.Add((Il2CppObject *)"TextWrap");
		__this.Add((Il2CppObject *)"TextOverflow");
		__this.Add((Il2CppObject *)"TextOutlineWidth");
		__this.Add((Il2CppObject *)"TextOutlineColor");
		__this.Add((Il2CppObject *)"TextShadowColor");
		__this.Add((Il2CppObject *)"TextShadowOffset");
		__this.Add((Il2CppObject *)"TextShadowHorizontalOffset");
		__this.Add((Il2CppObject *)"TextShadowVerticalOffset");
		__this.Add((Il2CppObject *)"TextShadowBlurRadius");
		__this.Add((Il2CppObject *)"TextLetterSpacing");
		__this.Add((Il2CppObject *)"TextWordSpacing");
		__this.Add((Il2CppObject *)"TextParagraphSpacing");
		__this.Add((Il2CppObject *)"BackgroundColor");
		__this.Add((Il2CppObject *)"SetBackgroundImage");
		__this.Add((Il2CppObject *)"BorderColor");
		__this.Add((Il2CppObject *)"BorderColorLeft");
		__this.Add((Il2CppObject *)"BorderColorTop");
		__this.Add((Il2CppObject *)"BorderColorRight");
		__this.Add((Il2CppObject *)"BorderColorBottom");
		__this.Add((Il2CppObject *)"BorderWidth");
		__this.Add((Il2CppObject *)"BorderWidthLeft");
		__this.Add((Il2CppObject *)"BorderWidthTop");
		__this.Add((Il2CppObject *)"BorderWidthRight");
		__this.Add((Il2CppObject *)"BorderWidthBottom");
		__this.Add((Il2CppObject *)"BorderRadius");
		__this.Add((Il2CppObject *)"BorderRadiusTopLeft");
		__this.Add((Il2CppObject *)"BorderRadiusTopRight");
		__this.Add((Il2CppObject *)"BorderRadiusBottomLeft");
		__this.Add((Il2CppObject *)"BorderRadiusBottomRight");
		__this.Add((Il2CppObject *)"OverflowX");
		__this.Add((Il2CppObject *)"OverflowY");
		__this.Add((Il2CppObject *)"SetTransformOrigin");
		__this.Add((Il2CppObject *)"TransformTranslate");
		__this.Add((Il2CppObject *)"TransformScale");
		__this.Add((Il2CppObject *)"TransformRotate");
		CustomLogicVisualElementBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings$$<__CreatePropertyBinding__ChildCount>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__ChildCount_g____getter_2_0(CustomLogicVisualElementBuiltin __i)
	{
		VisualElement __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i._visualElement, __this == null)) {
			throw new NullReferenceException();
		}
		__this.childCount;
		return pIVar1;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicVisualElementBuiltin.Bindings.c();
		CustomLogicVisualElementBuiltin.Bindings.c.__9 =(CustomLogicVisualElementBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__Add_b__3_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		VisualElement __this_00;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVisualElementBuiltin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c._visualElement, __this_00 != null)) {
				__this_00.Add(pCVar1._visualElement);
				return (object)__c;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__Remove_b__4_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		VisualElement __this_00;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVisualElementBuiltin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c._visualElement, __this_00 != null)) {
				__this_00.Remove(pCVar1._visualElement);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveFromHierarchy>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__RemoveFromHierarchy_b__5_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		VisualElement __this_00;

		if ((__c == null) ||(__this_00 = __c._visualElement, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.RemoveFromHierarchy();
		return null;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__Clear_b__6_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		VisualElement __this_00;

		if ((__c == null) ||(__this_00 = __c._visualElement, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return null;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetElementAt>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__GetElementAt_b__7_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int index;
		VisualElement pUVar1;
		CustomLogicVisualElementBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pUVar1 = __c._visualElement;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.ElementAt(index);
					__this_00 = new CustomLogicVisualElementBuiltin(pUVar1);
					return (object)__this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__QueryByName>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__QueryByName_b__8_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		String name;
		VisualElement pUVar1;
		CustomLogicVisualElementBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				pUVar1 = __c._visualElement;
				pUVar1 = UQueryExtensions.Q(pUVar1, name, null);
				__this_00 = new CustomLogicVisualElementBuiltin(pUVar1);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__QueryByClassName>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__QueryByClassName_b__9_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		String className;
		VisualElement pUVar1;
		CustomLogicVisualElementBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			className = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				pUVar1 = __c._visualElement;
				pUVar1 = UQueryExtensions.Q(pUVar1, null, className);
				__this_00 = new CustomLogicVisualElementBuiltin(pUVar1);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterMouseEnterEventCallback>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterMouseEnterEventCallback_b__10_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod method_00;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				pCVar1 = __c.RegisterMouseEnterEventCallback(method_00);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterMouseLeaveEventCallback>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterMouseLeaveEventCallback_b__11_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod method_00;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				pCVar1 = __c.RegisterMouseLeaveEventCallback(method_00);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterClickEventCallback>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterClickEventCallback_b__12_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod method_00;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				pCVar1 = __c.RegisterClickEventCallback(method_00);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFocusInEventCallback>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterFocusInEventCallback_b__13_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod method_00;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				pCVar1 = __c.RegisterFocusInEventCallback(method_00);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFocusOutEventCallback>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterFocusOutEventCallback_b__14_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod method_00;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				pCVar1 = __c.RegisterFocusOutEventCallback(method_00);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Opacity>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__Opacity_b__15_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.Opacity(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Active>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__Active_b__16_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		bool value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if (__a.Length == 0) {
				value = true;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				value = CustomLogicEvaluator.ConvertTo<bool>(obj) ;
			}
			if (__c != null) {
				pCVar1 = __c.Active(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Visible>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__Visible_b__17_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		bool value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if (__a.Length == 0) {
				value = true;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				value = CustomLogicEvaluator.ConvertTo<bool>(obj) ;
			}
			if (__c != null) {
				pCVar1 = __c.Visible(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransitionDuration>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__TransitionDuration_b__18_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.TransitionDuration(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Absolute>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__Absolute_b__19_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		bool value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if (__a.Length == 0) {
				value = true;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				value = CustomLogicEvaluator.ConvertTo<bool>(obj) ;
			}
			if (__c != null) {
				pCVar1 = __c.Absolute(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Left>b__20_0: clean
	private object Bindings_c____CreateMethodBinding__Left_b__20_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Left(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Top>b__21_0: clean
	private object Bindings_c____CreateMethodBinding__Top_b__21_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Top(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Right>b__22_0: clean
	private object Bindings_c____CreateMethodBinding__Right_b__22_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Right(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Bottom>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__Bottom_b__23_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Bottom(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexShrink>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__FlexShrink_b__24_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.FlexShrink(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexGrow>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__FlexGrow_b__25_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.FlexGrow(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexDirection>b__26_0: clean
	private object Bindings_c____CreateMethodBinding__FlexDirection_b__26_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.FlexDirection(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FlexWrap>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__FlexWrap_b__27_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.FlexWrap(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AlignItems>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__AlignItems_b__28_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.AlignItems(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__JustifyContent>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__JustifyContent_b__29_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.JustifyContent(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AlignSelf>b__30_0: clean
	private object Bindings_c____CreateMethodBinding__AlignSelf_b__30_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.AlignSelf(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Width>b__31_0: clean
	private object Bindings_c____CreateMethodBinding__Width_b__31_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Width(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Height>b__32_0: clean
	private object Bindings_c____CreateMethodBinding__Height_b__32_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Height(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MinWidth>b__33_0: clean
	private object Bindings_c____CreateMethodBinding__MinWidth_b__33_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.MinWidth(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MinHeight>b__34_0: clean
	private object Bindings_c____CreateMethodBinding__MinHeight_b__34_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.MinHeight(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MaxWidth>b__35_0: clean
	private object Bindings_c____CreateMethodBinding__MaxWidth_b__35_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.MaxWidth(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MaxHeight>b__36_0: clean
	private object Bindings_c____CreateMethodBinding__MaxHeight_b__36_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.MaxHeight(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__AspectRatio>b__37_0: clean
	private object Bindings_c____CreateMethodBinding__AspectRatio_b__37_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		int mode;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			mode = 0;
			if (1 < (int)__a.Length) {
				pIVar1 = __a[1];
				mode = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.AspectRatio(value, mode);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Margin>b__38_0: clean
	private object Bindings_c____CreateMethodBinding__Margin_b__38_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				__c.MarginLeft(value, percentage);
				__c.MarginTop(value, percentage);
				__c.MarginRight(value, percentage);
				pCVar2 = __c.MarginBottom(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginLeft>b__39_0: clean
	private object Bindings_c____CreateMethodBinding__MarginLeft_b__39_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.MarginLeft(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginTop>b__40_0: clean
	private object Bindings_c____CreateMethodBinding__MarginTop_b__40_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.MarginTop(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginRight>b__41_0: clean
	private object Bindings_c____CreateMethodBinding__MarginRight_b__41_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.MarginRight(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__MarginBottom>b__42_0: clean
	private object Bindings_c____CreateMethodBinding__MarginBottom_b__42_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.MarginBottom(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Padding>b__43_0: clean
	private object Bindings_c____CreateMethodBinding__Padding_b__43_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				__c.PaddingLeft(value, percentage);
				__c.PaddingTop(value, percentage);
				__c.PaddingRight(value, percentage);
				pCVar2 = __c.PaddingBottom(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingLeft>b__44_0: clean
	private object Bindings_c____CreateMethodBinding__PaddingLeft_b__44_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.PaddingLeft(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingTop>b__45_0: clean
	private object Bindings_c____CreateMethodBinding__PaddingTop_b__45_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.PaddingTop(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingRight>b__46_0: clean
	private object Bindings_c____CreateMethodBinding__PaddingRight_b__46_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.PaddingRight(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__PaddingBottom>b__47_0: clean
	private object Bindings_c____CreateMethodBinding__PaddingBottom_b__47_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.PaddingBottom(value, percentage);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FontStyle>b__48_0: clean
	private object Bindings_c____CreateMethodBinding__FontStyle_b__48_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.FontStyle(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__FontSize>b__49_0: clean
	private object Bindings_c____CreateMethodBinding__FontSize_b__49_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		int scaleMode;
		CustomLogicVisualElementBuiltin pCVar2;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			scaleMode = 0;
			if ((int)__a.Length < 2) {
				percentage = false;
			}
			else {
				pIVar1 = __a[1];
				percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
				if (2 < (int)__a.Length) {
					pIVar1 = __a[2];
					scaleMode = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
				}
			}
			if (__c != null) {
				pCVar2 = __c.FontSize(value, percentage, scaleMode);
				return (object)pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__Color>b__50_0: clean
	private object Bindings_c____CreateMethodBinding__Color_b__50_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.Color(color);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextAlign>b__51_0: clean
	private object Bindings_c____CreateMethodBinding__TextAlign_b__51_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.TextAlign(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextWrap>b__52_0: clean
	private object Bindings_c____CreateMethodBinding__TextWrap_b__52_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		bool value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if (__a.Length == 0) {
				value = true;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				value = CustomLogicEvaluator.ConvertTo<bool>(obj) ;
			}
			if (__c != null) {
				pCVar1 = __c.TextWrap(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOverflow>b__53_0: clean
	private object Bindings_c____CreateMethodBinding__TextOverflow_b__53_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.TextOverflow(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOutlineWidth>b__54_0: clean
	private object Bindings_c____CreateMethodBinding__TextOutlineWidth_b__54_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.TextOutlineWidth(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextOutlineColor>b__55_0: clean
	private object Bindings_c____CreateMethodBinding__TextOutlineColor_b__55_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.TextOutlineColor(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowColor>b__56_0: clean
	private object Bindings_c____CreateMethodBinding__TextShadowColor_b__56_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.TextShadowColor(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowOffset>b__57_0: clean
	private object Bindings_c____CreateMethodBinding__TextShadowOffset_b__57_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float horizontal;
		float vertical;

		if (__a == null) {
	label_05b269bd: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			horizontal = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				vertical = CustomLogicEvaluator.ConvertTo<float>(__a[1]) ;
				if (__c != null) {
					pCVar1 = __c.TextShadowOffset(horizontal, vertical);
					return (object)pCVar1;
				}
				goto label_05b269bd;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowHorizontalOffset>b__58_0: clean
	private object Bindings_c____CreateMethodBinding__TextShadowHorizontalOffset_b__58_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.TextShadowHorizontalOffset(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowVerticalOffset>b__59_0: clean
	private object Bindings_c____CreateMethodBinding__TextShadowVerticalOffset_b__59_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.TextShadowVerticalOffset(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextShadowBlurRadius>b__60_0: clean
	private object Bindings_c____CreateMethodBinding__TextShadowBlurRadius_b__60_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.TextShadowBlurRadius(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextLetterSpacing>b__61_0: clean
	private object Bindings_c____CreateMethodBinding__TextLetterSpacing_b__61_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.TextLetterSpacing(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextWordSpacing>b__62_0: clean
	private object Bindings_c____CreateMethodBinding__TextWordSpacing_b__62_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.TextWordSpacing(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextParagraphSpacing>b__63_0: clean
	private object Bindings_c____CreateMethodBinding__TextParagraphSpacing_b__63_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.TextParagraphSpacing(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BackgroundColor>b__64_0: clean
	private object Bindings_c____CreateMethodBinding__BackgroundColor_b__64_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.BackgroundColor(color);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBackgroundImage>b__65_0: clean
	private object Bindings_c____CreateMethodBinding__SetBackgroundImage_b__65_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicImageBuiltin image;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			image = CustomLogicEvaluator.ConvertTo<CustomLogicImageBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.SetBackgroundImage(image);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColor>b__66_0: clean
	private object Bindings_c____CreateMethodBinding__BorderColor_b__66_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				__c.BorderColorLeft(color);
				__c.BorderColorTop(color);
				__c.BorderColorRight(color);
				pCVar1 = __c.BorderColorBottom(color);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorLeft>b__67_0: clean
	private object Bindings_c____CreateMethodBinding__BorderColorLeft_b__67_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderColorLeft(color);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorTop>b__68_0: clean
	private object Bindings_c____CreateMethodBinding__BorderColorTop_b__68_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderColorTop(color);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorRight>b__69_0: clean
	private object Bindings_c____CreateMethodBinding__BorderColorRight_b__69_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderColorRight(color);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderColorBottom>b__70_0: clean
	private object Bindings_c____CreateMethodBinding__BorderColorBottom_b__70_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderColorBottom(color);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidth>b__71_0: clean
	private object Bindings_c____CreateMethodBinding__BorderWidth_b__71_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				__c.BorderWidthLeft(value);
				__c.BorderWidthTop(value);
				__c.BorderWidthRight(value);
				pCVar1 = __c.BorderWidthBottom(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthLeft>b__72_0: clean
	private object Bindings_c____CreateMethodBinding__BorderWidthLeft_b__72_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderWidthLeft(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthTop>b__73_0: clean
	private object Bindings_c____CreateMethodBinding__BorderWidthTop_b__73_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderWidthTop(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthRight>b__74_0: clean
	private object Bindings_c____CreateMethodBinding__BorderWidthRight_b__74_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderWidthRight(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderWidthBottom>b__75_0: clean
	private object Bindings_c____CreateMethodBinding__BorderWidthBottom_b__75_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderWidthBottom(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadius>b__76_0: clean
	private object Bindings_c____CreateMethodBinding__BorderRadius_b__76_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				__c.BorderRadiusTopLeft(value);
				__c.BorderRadiusTopRight(value);
				__c.BorderRadiusBottomLeft(value);
				pCVar1 = __c.BorderRadiusBottomRight(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusTopLeft>b__77_0: clean
	private object Bindings_c____CreateMethodBinding__BorderRadiusTopLeft_b__77_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderRadiusTopLeft(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusTopRight>b__78_0: clean
	private object Bindings_c____CreateMethodBinding__BorderRadiusTopRight_b__78_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderRadiusTopRight(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusBottomLeft>b__79_0: clean
	private object Bindings_c____CreateMethodBinding__BorderRadiusBottomLeft_b__79_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderRadiusBottomLeft(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__BorderRadiusBottomRight>b__80_0: clean
	private object Bindings_c____CreateMethodBinding__BorderRadiusBottomRight_b__80_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				pCVar1 = __c.BorderRadiusBottomRight(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__OverflowX>b__81_0: clean
	private object Bindings_c____CreateMethodBinding__OverflowX_b__81_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.OverflowX(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__OverflowY>b__82_0: clean
	private object Bindings_c____CreateMethodBinding__OverflowY_b__82_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicVisualElementBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.OverflowY(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTransformOrigin>b__83_0: clean
	private object Bindings_c____CreateMethodBinding__SetTransformOrigin_b__83_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float x;
		float y;

		if (__a == null) {
	label_05b2796a: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			x = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				y = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if ((int)__a.Length < 3) {
					percentage = false;
				}
				else {
					pIVar1 = __a[2];
					percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
				}
				if (__c != null) {
					pCVar2 = __c.SetTransformOrigin(x, y, percentage) ;
					return (object)pCVar2;
				}
				goto label_05b2796a;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformTranslate>b__84_0: clean
	private object Bindings_c____CreateMethodBinding__TransformTranslate_b__84_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool percentage;
		CustomLogicVisualElementBuiltin pCVar2;
		float x;
		float y;

		if (__a == null) {
	label_05b27a8a: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			x = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				y = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if ((int)__a.Length < 3) {
					percentage = false;
				}
				else {
					pIVar1 = __a[2];
					percentage = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
				}
				if (__c != null) {
					pCVar2 = __c.TransformTranslate(x, y, percentage) ;
					return (object)pCVar2;
				}
				goto label_05b27a8a;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformScale>b__85_0: clean
	private object Bindings_c____CreateMethodBinding__TransformScale_b__85_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVisualElementBuiltin pCVar1;
		float x;
		float y;

		if (__a == null) {
	label_05b27b4d: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			x = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				y = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					pCVar1 = __c.TransformScale(x, y);
					return (object)pCVar1;
				}
				goto label_05b27b4d;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformRotate>b__86_0: clean
	private object Bindings_c____CreateMethodBinding__TransformRotate_b__86_0(CustomLogicVisualElementBuiltin __c, Object[] __a)
	{
		object obj;
		int angleUnit;
		CustomLogicVisualElementBuiltin pCVar1;
		float angle;

		if (__a == null) {
	label_05b27c1c: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			angle = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				angleUnit = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (__c != null) {
					pCVar1 = __c.TransformRotate(angle, angleUnit);
					return (object)pCVar1;
				}
				goto label_05b27c1c;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicVisualElementBuiltin.c();
		CustomLogicVisualElementBuiltin.c.__9 =(CustomLogicVisualElementBuiltin.c)__this;
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c$$<AspectRatio>b__40_2: clean
	private void c__AspectRatio_b__40_2(GeometryChangedEvent evt)
	{
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass13_0$$<RegisterMouseEnterEventCallback>b__0: clean
	private void c__DisplayClass13_0__RegisterMouseEnterEventCallback_b__0(MouseEnterEvent evt)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[0];
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(userMethod, parameterValues);
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass14_0$$<RegisterMouseLeaveEventCallback>b__0: clean
	private void c__DisplayClass14_0__RegisterMouseLeaveEventCallback_b__0(MouseLeaveEvent evt)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[0];
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(userMethod, parameterValues);
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass15_0$$<RegisterClickEventCallback>b__0: clean
	private void c__DisplayClass15_0__RegisterClickEventCallback_b__0(ClickEvent evt)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[0];
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(userMethod, parameterValues);
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass16_0$$<RegisterFocusInEventCallback>b__0: clean
	private void c__DisplayClass16_0__RegisterFocusInEventCallback_b__0(FocusInEvent evt)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[0];
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(userMethod, parameterValues);
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass17_0$$<RegisterFocusOutEventCallback>b__0: clean
	private void c__DisplayClass17_0__RegisterFocusOutEventCallback_b__0(FocusOutEvent evt)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[0];
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(userMethod, parameterValues);
		return;
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$<AspectRatio>b__0: 4 lines keep C-only constructs
	private void c__DisplayClass40_0__AspectRatio_b__0(GeometryChangedEvent evt)
	{
		uint uVar1;
		CustomLogicVisualElementBuiltin pCVar2;
		VisualElement __this_00;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		object obj;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		long lVar7;
		StyleLength value;

		pCVar2 = this.__4__this;
		if ((pCVar2 != null) &&(__this_00 = pCVar2._visualElement, __this_00 != null) ) {
			obj = (object)__this_00.style;
			if (evt != null) {
				uVar1 = evt._newRect_k__BackingField.m_Width;
				value = ((StyleLength)(float)uVar1 / this.value);
				if (obj != null) {
					pIVar3 = obj.klass;
					uVar6 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar7 = 0;
						do {
							if (*(IStyle*)((long)&pIVar4.interfaceType + lVar7) == typeof(IStyle)) {
								pVVar5 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar7) + 0x43);
								goto label_05b28095;
							}
							lVar7 = lVar7 + 0x10;
						} while (uVar6 * 0x10 != lVar7);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x43);
	label_05b28095: ;
					(*pVVar5.methodPtr)(obj,value,pVVar5.method);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass40_0$$<AspectRatio>b__1: 4 lines keep C-only constructs
	private void c__DisplayClass40_0__AspectRatio_b__1(GeometryChangedEvent evt)
	{
		uint uVar1;
		CustomLogicVisualElementBuiltin pCVar2;
		VisualElement __this_00;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		object obj;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		long lVar7;
		StyleLength value;

		pCVar2 = this.__4__this;
		if ((pCVar2 != null) &&(__this_00 = pCVar2._visualElement, __this_00 != null) ) {
			obj = (object)__this_00.style;
			if (evt != null) {
				uVar1 = evt._newRect_k__BackingField.m_Height;
				value = ((StyleLength)(float)uVar1 / this.value);
				if (obj != null) {
					pIVar3 = obj.klass;
					uVar6 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar7 = 0;
						do {
							if (*(IStyle*)((long)&pIVar4.interfaceType + lVar7) == typeof(IStyle)) {
								pVVar5 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar7) + 0xad);
								goto label_05b281c7;
							}
							lVar7 = lVar7 + 0x10;
						} while (uVar6 * 0x10 != lVar7);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0xad);
	label_05b281c7: ;
					(*pVVar5.methodPtr)(obj,value,pVVar5.method);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVisualElementBuiltin.<>c__DisplayClass52_0$$<FontSize>b__0: 4 lines keep C-only constructs
	private void c__DisplayClass52_0__FontSize_b__0(GeometryChangedEvent evt)
	{
		float fVar1;
		uint uVar2;
		float fVar3;
		int iVar4;
		CustomLogicVisualElementBuiltin pCVar5;
		VisualElement __this_00;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		object obj;
		VirtualInvokeData pVVar8;
		ulong uVar9;
		long lVar10;
		StyleLength value;

		fVar1 = this.value;
		iVar4 = this.scaleMode;
		if (iVar4 == 1) {
			if (evt == null) goto label_05b2838f;
			uVar2 = evt._newRect_k__BackingField.m_Width;
			fVar3 = (float)uVar2;
		}
		else if (iVar4 == 0) {
			if (evt == null) goto label_05b2838f;
			fVar3 = evt._newRect_k__BackingField.m_Height;
		}
		else {
			fVar3 = 1.0;
		}
		pCVar5 = this.__4__this;
		if ((pCVar5 != null) &&(__this_00 = pCVar5._visualElement, __this_00 != null) ) {
			obj = (object)__this_00.style;
			value = ((StyleLength)(fVar1 / 100.0) * fVar3) ;
			if (obj != null) {
				pIVar6 = obj.klass;
				uVar9 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar9 != 0) {
					pIVar7 = (pIVar6._1).interfaceOffsets;
					lVar10 = 0;
					do {
						if (*(IStyle*)((long)&pIVar7.interfaceType + lVar10) == typeof(IStyle)) {
							pVVar8 = pIVar6.vtable + (*(int)((long)&pIVar7.offset + lVar10) + 0x41);
							goto label_05b28375;
						}
						lVar10 = lVar10 + 0x10;
					} while (uVar9 * 0x10 != lVar10);
				}
				pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IStyle), 0x41);
	label_05b28375: ;
				(*pVVar8.methodPtr)(obj,value,pVVar8.method);
				return;
			}
		}
	label_05b2838f: ;
		throw new NullReferenceException();
	}
}
