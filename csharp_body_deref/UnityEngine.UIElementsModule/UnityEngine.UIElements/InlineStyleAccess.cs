using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000281")]
internal class InlineStyleAccess : StyleValueCollection, IStyle
{
	[Token(Token = "0x2000282")]
	internal struct InlineRule
	{
		[Token(Token = "0x400095C")]
		[FieldOffset(Offset = "0x0")]
		public StyleSheet sheet;

		[Token(Token = "0x400095D")]
		[FieldOffset(Offset = "0x8")]
		public StyleRule rule;

		[Token(Token = "0x400095E")]
		[FieldOffset(Offset = "0x10")]
		public StylePropertyId[] propertyIds;
	}

	[Token(Token = "0x400094A")]
	[FieldOffset(Offset = "0x0")]
	private static StylePropertyReader s_StylePropertyReader;

	[Token(Token = "0x400094B")]
	[FieldOffset(Offset = "0x18")]
	private List<StyleValueManaged> m_ValuesManaged;

	[Token(Token = "0x400094D")]
	[FieldOffset(Offset = "0x28")]
	private bool m_HasInlineCursor;

	[Token(Token = "0x400094E")]
	[FieldOffset(Offset = "0x30")]
	private StyleCursor m_InlineCursor;

	[Token(Token = "0x400094F")]
	[FieldOffset(Offset = "0x50")]
	private bool m_HasInlineTextShadow;

	[Token(Token = "0x4000950")]
	[FieldOffset(Offset = "0x54")]
	private StyleTextShadow m_InlineTextShadow;

	[Token(Token = "0x4000951")]
	[FieldOffset(Offset = "0x74")]
	private bool m_HasInlineTransformOrigin;

	[Token(Token = "0x4000952")]
	[FieldOffset(Offset = "0x78")]
	private StyleTransformOrigin m_InlineTransformOrigin;

	[Token(Token = "0x4000953")]
	[FieldOffset(Offset = "0x90")]
	private bool m_HasInlineTranslate;

	[Token(Token = "0x4000954")]
	[FieldOffset(Offset = "0x94")]
	private StyleTranslate m_InlineTranslateOperation;

	[Token(Token = "0x4000955")]
	[FieldOffset(Offset = "0xB0")]
	private bool m_HasInlineRotate;

	[Token(Token = "0x4000956")]
	[FieldOffset(Offset = "0xB4")]
	private StyleRotate m_InlineRotateOperation;

	[Token(Token = "0x4000957")]
	[FieldOffset(Offset = "0xD0")]
	private bool m_HasInlineScale;

	[Token(Token = "0x4000958")]
	[FieldOffset(Offset = "0xD4")]
	private StyleScale m_InlineScale;

	[Token(Token = "0x4000959")]
	[FieldOffset(Offset = "0xE8")]
	private bool m_HasInlineBackgroundSize;

	[Token(Token = "0x400095A")]
	[FieldOffset(Offset = "0xEC")]
	public StyleBackgroundSize m_InlineBackgroundSize;

	[Token(Token = "0x400095B")]
	[FieldOffset(Offset = "0x108")]
	private InlineRule m_InlineRule;

	[Token(Token = "0x170003E3")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignItems
	{
		[Token(Token = "0x6001147")]
		[Address(RVA = "0x4D54990", Offset = "0x4D54990", VA = "0x4D54990", Slot = "4")]
		set
		{
		}
	}

	[Token(Token = "0x170003E4")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignSelf
	{
		[Token(Token = "0x6001148")]
		[Address(RVA = "0x4D54A40", Offset = "0x4D54A40", VA = "0x4D54A40", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170003E5")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EbackgroundColor
	{
		[Token(Token = "0x6001149")]
		[Address(RVA = "0x4D54AF0", Offset = "0x4D54AF0", VA = "0x4D54AF0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x170003E6")]
	private StyleBackground UnityEngine_002EUIElements_002EIStyle_002EbackgroundImage
	{
		[Token(Token = "0x600114A")]
		[Address(RVA = "0x4D54C90", Offset = "0x4D54C90", VA = "0x4D54C90", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170003E7")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderBottomColor
	{
		[Token(Token = "0x600114B")]
		[Address(RVA = "0x4D55240", Offset = "0x4D55240", VA = "0x4D55240", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x170003E8")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderBottomLeftRadius
	{
		[Token(Token = "0x600114C")]
		[Address(RVA = "0x4D55290", Offset = "0x4D55290", VA = "0x4D55290", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170003E9")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderBottomRightRadius
	{
		[Token(Token = "0x600114D")]
		[Address(RVA = "0x4D55400", Offset = "0x4D55400", VA = "0x4D55400", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170003EA")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderBottomWidth
	{
		[Token(Token = "0x600114E")]
		[Address(RVA = "0x4D55440", Offset = "0x4D55440", VA = "0x4D55440", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x170003EB")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderLeftColor
	{
		[Token(Token = "0x600114F")]
		[Address(RVA = "0x4D555E0", Offset = "0x4D555E0", VA = "0x4D555E0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170003EC")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderLeftWidth
	{
		[Token(Token = "0x6001150")]
		[Address(RVA = "0x4D55630", Offset = "0x4D55630", VA = "0x4D55630", Slot = "14")]
		set
		{
		}
	}

	[Token(Token = "0x170003ED")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderRightColor
	{
		[Token(Token = "0x6001151")]
		[Address(RVA = "0x4D556B0", Offset = "0x4D556B0", VA = "0x4D556B0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003EE")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderRightWidth
	{
		[Token(Token = "0x6001152")]
		[Address(RVA = "0x4D55700", Offset = "0x4D55700", VA = "0x4D55700", Slot = "16")]
		set
		{
		}
	}

	[Token(Token = "0x170003EF")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderTopColor
	{
		[Token(Token = "0x6001153")]
		[Address(RVA = "0x4D55780", Offset = "0x4D55780", VA = "0x4D55780", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170003F0")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderTopLeftRadius
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x4D557D0", Offset = "0x4D557D0", VA = "0x4D557D0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170003F1")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderTopRightRadius
	{
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x4D55810", Offset = "0x4D55810", VA = "0x4D55810", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170003F2")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderTopWidth
	{
		[Token(Token = "0x6001156")]
		[Address(RVA = "0x4D55850", Offset = "0x4D55850", VA = "0x4D55850", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170003F3")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Ebottom
	{
		[Token(Token = "0x6001157")]
		[Address(RVA = "0x4D558D0", Offset = "0x4D558D0", VA = "0x4D558D0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170003F4")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002Ecolor
	{
		[Token(Token = "0x6001158")]
		[Address(RVA = "0x4D55960", Offset = "0x4D55960", VA = "0x4D55960", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	private StyleEnum<DisplayStyle> UnityEngine_002EUIElements_002EIStyle_002Edisplay
	{
		[Token(Token = "0x6001159")]
		[Address(RVA = "0x4D559B0", Offset = "0x4D559B0", VA = "0x4D559B0", Slot = "24")]
		get
		{
			return default(StyleEnum<DisplayStyle>);
		}
		[Token(Token = "0x600115A")]
		[Address(RVA = "0x4D55A40", Offset = "0x4D55A40", VA = "0x4D55A40", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EflexBasis
	{
		[Token(Token = "0x600115B")]
		[Address(RVA = "0x4D55AF0", Offset = "0x4D55AF0", VA = "0x4D55AF0", Slot = "26")]
		set
		{
		}
	}

	[Token(Token = "0x170003F7")]
	private StyleEnum<FlexDirection> UnityEngine_002EUIElements_002EIStyle_002EflexDirection
	{
		[Token(Token = "0x600115C")]
		[Address(RVA = "0x4D55B80", Offset = "0x4D55B80", VA = "0x4D55B80", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x170003F8")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EflexGrow
	{
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x4D55C30", Offset = "0x4D55C30", VA = "0x4D55C30", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170003F9")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EflexShrink
	{
		[Token(Token = "0x600115E")]
		[Address(RVA = "0x4D55CB0", Offset = "0x4D55CB0", VA = "0x4D55CB0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170003FA")]
	private StyleEnum<Wrap> UnityEngine_002EUIElements_002EIStyle_002EflexWrap
	{
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x4D55D30", Offset = "0x4D55D30", VA = "0x4D55D30", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x170003FB")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EfontSize
	{
		[Token(Token = "0x6001160")]
		[Address(RVA = "0x4D55DE0", Offset = "0x4D55DE0", VA = "0x4D55DE0", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x170003FC")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eheight
	{
		[Token(Token = "0x6001161")]
		[Address(RVA = "0x4D55E20", Offset = "0x4D55E20", VA = "0x4D55E20", Slot = "32")]
		set
		{
		}
	}

	[Token(Token = "0x170003FD")]
	private StyleEnum<Justify> UnityEngine_002EUIElements_002EIStyle_002EjustifyContent
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x4D55EB0", Offset = "0x4D55EB0", VA = "0x4D55EB0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x170003FE")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eleft
	{
		[Token(Token = "0x6001163")]
		[Address(RVA = "0x4D55F60", Offset = "0x4D55F60", VA = "0x4D55F60", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170003FF")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EletterSpacing
	{
		[Token(Token = "0x6001164")]
		[Address(RVA = "0x4D55FF0", Offset = "0x4D55FF0", VA = "0x4D55FF0", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000400")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginBottom
	{
		[Token(Token = "0x6001165")]
		[Address(RVA = "0x4D56030", Offset = "0x4D56030", VA = "0x4D56030", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginLeft
	{
		[Token(Token = "0x6001166")]
		[Address(RVA = "0x4D560C0", Offset = "0x4D560C0", VA = "0x4D560C0", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x17000402")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginRight
	{
		[Token(Token = "0x6001167")]
		[Address(RVA = "0x4D56150", Offset = "0x4D56150", VA = "0x4D56150", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000403")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginTop
	{
		[Token(Token = "0x6001168")]
		[Address(RVA = "0x4D561E0", Offset = "0x4D561E0", VA = "0x4D561E0", Slot = "39")]
		set
		{
		}
	}

	[Token(Token = "0x17000404")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmaxHeight
	{
		[Token(Token = "0x6001169")]
		[Address(RVA = "0x4D56270", Offset = "0x4D56270", VA = "0x4D56270", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000405")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmaxWidth
	{
		[Token(Token = "0x600116A")]
		[Address(RVA = "0x4D56300", Offset = "0x4D56300", VA = "0x4D56300", Slot = "41")]
		set
		{
		}
	}

	[Token(Token = "0x17000406")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EminHeight
	{
		[Token(Token = "0x600116B")]
		[Address(RVA = "0x4D56390", Offset = "0x4D56390", VA = "0x4D56390", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000407")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EminWidth
	{
		[Token(Token = "0x600116C")]
		[Address(RVA = "0x4D56420", Offset = "0x4D56420", VA = "0x4D56420", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000408")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002Eopacity
	{
		[Token(Token = "0x600116D")]
		[Address(RVA = "0x4D564B0", Offset = "0x4D564B0", VA = "0x4D564B0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000409")]
	private StyleEnum<Overflow> UnityEngine_002EUIElements_002EIStyle_002Eoverflow
	{
		[Token(Token = "0x600116E")]
		[Address(RVA = "0x4D564F0", Offset = "0x4D564F0", VA = "0x4D564F0", Slot = "45")]
		set
		{
		}
	}

	[Token(Token = "0x1700040A")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingBottom
	{
		[Token(Token = "0x600116F")]
		[Address(RVA = "0x4D56610", Offset = "0x4D56610", VA = "0x4D56610", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x1700040B")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingLeft
	{
		[Token(Token = "0x6001170")]
		[Address(RVA = "0x4D566A0", Offset = "0x4D566A0", VA = "0x4D566A0", Slot = "47")]
		set
		{
		}
	}

	[Token(Token = "0x1700040C")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingRight
	{
		[Token(Token = "0x6001171")]
		[Address(RVA = "0x4D56730", Offset = "0x4D56730", VA = "0x4D56730", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x1700040D")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingTop
	{
		[Token(Token = "0x6001172")]
		[Address(RVA = "0x4D567C0", Offset = "0x4D567C0", VA = "0x4D567C0", Slot = "49")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001173")]
		[Address(RVA = "0x4D567D0", Offset = "0x4D567D0", VA = "0x4D567D0", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x1700040E")]
	private StyleEnum<Position> UnityEngine_002EUIElements_002EIStyle_002Eposition
	{
		[Token(Token = "0x6001174")]
		[Address(RVA = "0x4D56860", Offset = "0x4D56860", VA = "0x4D56860", Slot = "51")]
		set
		{
		}
	}

	[Token(Token = "0x1700040F")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eright
	{
		[Token(Token = "0x6001175")]
		[Address(RVA = "0x4D56910", Offset = "0x4D56910", VA = "0x4D56910", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x17000410")]
	private StyleEnum<TextOverflow> UnityEngine_002EUIElements_002EIStyle_002EtextOverflow
	{
		[Token(Token = "0x6001176")]
		[Address(RVA = "0x4D569A0", Offset = "0x4D569A0", VA = "0x4D569A0", Slot = "57")]
		set
		{
		}
	}

	[Token(Token = "0x17000411")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Etop
	{
		[Token(Token = "0x6001177")]
		[Address(RVA = "0x4D56A10", Offset = "0x4D56A10", VA = "0x4D56A10", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x17000412")]
	private StyleList<TimeValue> UnityEngine_002EUIElements_002EIStyle_002EtransitionDuration
	{
		[Token(Token = "0x6001178")]
		[Address(RVA = "0x4D56AA0", Offset = "0x4D56AA0", VA = "0x4D56AA0", Slot = "63")]
		set
		{
		}
	}

	[Token(Token = "0x17000413")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EunityBackgroundImageTintColor
	{
		[Token(Token = "0x6001179")]
		[Address(RVA = "0x4D56B10", Offset = "0x4D56B10", VA = "0x4D56B10", Slot = "66")]
		set
		{
		}
	}

	[Token(Token = "0x17000414")]
	private StyleFont UnityEngine_002EUIElements_002EIStyle_002EunityFont
	{
		[Token(Token = "0x600117A")]
		[Address(RVA = "0x4D56B60", Offset = "0x4D56B60", VA = "0x4D56B60", Slot = "67")]
		set
		{
		}
	}

	[Token(Token = "0x17000415")]
	private StyleFontDefinition UnityEngine_002EUIElements_002EIStyle_002EunityFontDefinition
	{
		[Token(Token = "0x600117B")]
		[Address(RVA = "0x4D56DA0", Offset = "0x4D56DA0", VA = "0x4D56DA0", Slot = "68")]
		set
		{
		}
	}

	[Token(Token = "0x17000416")]
	private StyleEnum<FontStyle> UnityEngine_002EUIElements_002EIStyle_002EunityFontStyleAndWeight
	{
		[Token(Token = "0x600117C")]
		[Address(RVA = "0x4D570F0", Offset = "0x4D570F0", VA = "0x4D570F0", Slot = "69")]
		set
		{
		}
	}

	[Token(Token = "0x17000417")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EunityParagraphSpacing
	{
		[Token(Token = "0x600117D")]
		[Address(RVA = "0x4D57160", Offset = "0x4D57160", VA = "0x4D57160", Slot = "70")]
		set
		{
		}
	}

	[Token(Token = "0x17000418")]
	private StyleEnum<TextAnchor> UnityEngine_002EUIElements_002EIStyle_002EunityTextAlign
	{
		[Token(Token = "0x600117E")]
		[Address(RVA = "0x4D571A0", Offset = "0x4D571A0", VA = "0x4D571A0", Slot = "71")]
		set
		{
		}
	}

	[Token(Token = "0x17000419")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EunityTextOutlineColor
	{
		[Token(Token = "0x600117F")]
		[Address(RVA = "0x4D57210", Offset = "0x4D57210", VA = "0x4D57210", Slot = "72")]
		set
		{
		}
	}

	[Token(Token = "0x1700041A")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EunityTextOutlineWidth
	{
		[Token(Token = "0x6001180")]
		[Address(RVA = "0x4D57260", Offset = "0x4D57260", VA = "0x4D57260", Slot = "73")]
		set
		{
		}
	}

	[Token(Token = "0x1700041B")]
	private StyleEnum<Visibility> UnityEngine_002EUIElements_002EIStyle_002Evisibility
	{
		[Token(Token = "0x6001181")]
		[Address(RVA = "0x4D572A0", Offset = "0x4D572A0", VA = "0x4D572A0", Slot = "74")]
		set
		{
		}
	}

	[Token(Token = "0x1700041C")]
	private StyleEnum<WhiteSpace> UnityEngine_002EUIElements_002EIStyle_002EwhiteSpace
	{
		[Token(Token = "0x6001182")]
		[Address(RVA = "0x4D57310", Offset = "0x4D57310", VA = "0x4D57310", Slot = "75")]
		set
		{
		}
	}

	[Token(Token = "0x1700041D")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Ewidth
	{
		[Token(Token = "0x6001183")]
		[Address(RVA = "0x4D57380", Offset = "0x4D57380", VA = "0x4D57380", Slot = "76")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001184")]
		[Address(RVA = "0x4D57390", Offset = "0x4D57390", VA = "0x4D57390", Slot = "77")]
		set
		{
		}
	}

	[Token(Token = "0x1700041E")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EwordSpacing
	{
		[Token(Token = "0x6001185")]
		[Address(RVA = "0x4D57420", Offset = "0x4D57420", VA = "0x4D57420", Slot = "78")]
		set
		{
		}
	}

	[Token(Token = "0x1700041F")]
	private VisualElement ve
	{
		[Token(Token = "0x6001186")]
		[Address(RVA = "0x4D57460", Offset = "0x4D57460", VA = "0x4D57460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001187")]
		[Address(RVA = "0x4D57470", Offset = "0x4D57470", VA = "0x4D57470")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000420")]
	private StyleCursor UnityEngine_002EUIElements_002EIStyle_002Ecursor
	{
		[Token(Token = "0x600118D")]
		[Address(RVA = "0x4D58670", Offset = "0x4D58670", VA = "0x4D58670", Slot = "23")]
		get
		{
			return default(StyleCursor);
		}
	}

	[Token(Token = "0x17000421")]
	private StyleTextShadow UnityEngine_002EUIElements_002EIStyle_002EtextShadow
	{
		[Token(Token = "0x600118E")]
		[Address(RVA = "0x4D58730", Offset = "0x4D58730", VA = "0x4D58730", Slot = "58")]
		get
		{
			return default(StyleTextShadow);
		}
		[Token(Token = "0x600118F")]
		[Address(RVA = "0x4D587C0", Offset = "0x4D587C0", VA = "0x4D587C0", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x17000422")]
	private StyleBackgroundSize UnityEngine_002EUIElements_002EIStyle_002EbackgroundSize
	{
		[Token(Token = "0x6001190")]
		[Address(RVA = "0x4D58A00", Offset = "0x4D58A00", VA = "0x4D58A00", Slot = "8")]
		get
		{
			return default(StyleBackgroundSize);
		}
	}

	[Token(Token = "0x17000423")]
	private StyleTransformOrigin UnityEngine_002EUIElements_002EIStyle_002EtransformOrigin
	{
		[Token(Token = "0x6001193")]
		[Address(RVA = "0x4D58E00", Offset = "0x4D58E00", VA = "0x4D58E00", Slot = "61")]
		get
		{
			return default(StyleTransformOrigin);
		}
		[Token(Token = "0x6001194")]
		[Address(RVA = "0x4D58E90", Offset = "0x4D58E90", VA = "0x4D58E90", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x17000424")]
	private StyleTranslate UnityEngine_002EUIElements_002EIStyle_002Etranslate
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x4D59050", Offset = "0x4D59050", VA = "0x4D59050", Slot = "64")]
		get
		{
			return default(StyleTranslate);
		}
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x4D590F0", Offset = "0x4D590F0", VA = "0x4D590F0", Slot = "65")]
		set
		{
		}
	}

	[Token(Token = "0x17000425")]
	private StyleRotate UnityEngine_002EUIElements_002EIStyle_002Erotate
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0x4D592D0", Offset = "0x4D592D0", VA = "0x4D592D0", Slot = "53")]
		get
		{
			return default(StyleRotate);
		}
		[Token(Token = "0x6001198")]
		[Address(RVA = "0x4D59370", Offset = "0x4D59370", VA = "0x4D59370", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x17000426")]
	private StyleScale UnityEngine_002EUIElements_002EIStyle_002Escale
	{
		[Token(Token = "0x6001199")]
		[Address(RVA = "0x4D59550", Offset = "0x4D59550", VA = "0x4D59550", Slot = "55")]
		get
		{
			return default(StyleScale);
		}
		[Token(Token = "0x600119A")]
		[Address(RVA = "0x4D595F0", Offset = "0x4D595F0", VA = "0x4D595F0", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x4D57480", Offset = "0x4D57480", VA = "0x4D57480")]
	public InlineStyleAccess(VisualElement ve)
	{
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x4D574B0", Offset = "0x4D574B0", VA = "0x4D574B0", Slot = "1")]
	~InlineStyleAccess()
	{
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x4D575B0", Offset = "0x4D575B0", VA = "0x4D575B0")]
	public void SetInlineRule(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x4D58360", Offset = "0x4D58360", VA = "0x4D58360")]
	public bool IsValueSet(StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x4D57660", Offset = "0x4D57660", VA = "0x4D57660")]
	public void ApplyInlineStyles(ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x4D58AB0", Offset = "0x4D58AB0", VA = "0x4D58AB0")]
	private void SetStyleValueManaged(StyleValueManaged value)
	{
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x4D58C70", Offset = "0x4D58C70", VA = "0x4D58C70")]
	private bool TryGetStyleValueManaged(StylePropertyId id, ref StyleValueManaged value)
	{
		return default(bool);
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x4D552D0", Offset = "0x4D552D0", VA = "0x4D552D0")]
	private bool SetStyleValue(StylePropertyId id, StyleLength inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x4D554C0", Offset = "0x4D554C0", VA = "0x4D554C0")]
	private bool SetStyleValue(StylePropertyId id, StyleFloat inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x4D54B40", Offset = "0x4D54B40", VA = "0x4D54B40")]
	private bool SetStyleValue(StylePropertyId id, StyleColor inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600119E")]
	private bool SetStyleValue<T>(StylePropertyId id, StyleEnum<T> inlineValue) where T : struct, IConvertible
	{
		return default(bool);
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x4D54CF0", Offset = "0x4D54CF0", VA = "0x4D54CF0")]
	private bool SetStyleValue(StylePropertyId id, StyleBackground inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x4D56DF0", Offset = "0x4D56DF0", VA = "0x4D56DF0")]
	private bool SetStyleValue(StylePropertyId id, StyleFontDefinition inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x4D56BA0", Offset = "0x4D56BA0", VA = "0x4D56BA0")]
	private bool SetStyleValue(StylePropertyId id, StyleFont inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A2")]
	private bool SetStyleValue<T>(StylePropertyId id, StyleList<T> inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x4D58810", Offset = "0x4D58810", VA = "0x4D58810")]
	private bool SetInlineTextShadow(StyleTextShadow inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x4D59BC0", Offset = "0x4D59BC0", VA = "0x4D59BC0")]
	private void ApplyStyleTextShadow(StyleTextShadow textShadow)
	{
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x4D58EE0", Offset = "0x4D58EE0", VA = "0x4D58EE0")]
	private bool SetInlineTransformOrigin(StyleTransformOrigin inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x4D59E80", Offset = "0x4D59E80", VA = "0x4D59E80")]
	private void ApplyStyleTransformOrigin(StyleTransformOrigin transformOrigin)
	{
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x4D59140", Offset = "0x4D59140", VA = "0x4D59140")]
	private bool SetInlineTranslate(StyleTranslate inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x4D5A140", Offset = "0x4D5A140", VA = "0x4D5A140")]
	private void ApplyStyleTranslate(StyleTranslate translate)
	{
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x4D59640", Offset = "0x4D59640", VA = "0x4D59640")]
	private bool SetInlineScale(StyleScale inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x4D5A400", Offset = "0x4D5A400", VA = "0x4D5A400")]
	private void ApplyStyleScale(StyleScale scale)
	{
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x4D593C0", Offset = "0x4D593C0", VA = "0x4D593C0")]
	private bool SetInlineRotate(StyleRotate inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x4D5A690", Offset = "0x4D5A690", VA = "0x4D5A690")]
	private void ApplyStyleRotate(StyleRotate rotate)
	{
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x4D59850", Offset = "0x4D59850", VA = "0x4D59850")]
	private void ApplyStyleValue(StyleValue value)
	{
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x4D5A9E0", Offset = "0x4D5A9E0", VA = "0x4D5A9E0")]
	private void ApplyStyleValue(StyleValueManaged value)
	{
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x4D59760", Offset = "0x4D59760", VA = "0x4D59760")]
	private bool RemoveInlineStyle(StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x4D5AAC0", Offset = "0x4D5AAC0", VA = "0x4D5AAC0")]
	private void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x4D58700", Offset = "0x4D58700", VA = "0x4D58700")]
	public bool TryGetInlineCursor(ref StyleCursor value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x4D587A0", Offset = "0x4D587A0", VA = "0x4D587A0")]
	public bool TryGetInlineTextShadow(ref StyleTextShadow value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x4D58E70", Offset = "0x4D58E70", VA = "0x4D58E70")]
	public bool TryGetInlineTransformOrigin(ref StyleTransformOrigin value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x4D590C0", Offset = "0x4D590C0", VA = "0x4D590C0")]
	public bool TryGetInlineTranslate(ref StyleTranslate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x4D59340", Offset = "0x4D59340", VA = "0x4D59340")]
	public bool TryGetInlineRotate(ref StyleRotate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x4D595C0", Offset = "0x4D595C0", VA = "0x4D595C0")]
	public bool TryGetInlineScale(ref StyleScale value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x4D58A80", Offset = "0x4D58A80", VA = "0x4D58A80")]
	public bool TryGetInlineBackgroundSize(ref StyleBackgroundSize value)
	{
		return default(bool);
	}
}
