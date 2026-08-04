// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.InlineStyleAccess
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x507C2C0", Offset = "0x507C2C0", VA = "0x507C2C0", Slot = "4")]
		set
		{
		}
	}

	[Token(Token = "0x170003E4")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignSelf
	{
		[Token(Token = "0x6001148")]
		[Address(RVA = "0x507C370", Offset = "0x507C370", VA = "0x507C370", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170003E5")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EbackgroundColor
	{
		[Token(Token = "0x6001149")]
		[Address(RVA = "0x507C420", Offset = "0x507C420", VA = "0x507C420", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x170003E6")]
	private StyleBackground UnityEngine_002EUIElements_002EIStyle_002EbackgroundImage
	{
		[Token(Token = "0x600114A")]
		[Address(RVA = "0x507C5C0", Offset = "0x507C5C0", VA = "0x507C5C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170003E7")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderBottomColor
	{
		[Token(Token = "0x600114B")]
		[Address(RVA = "0x507CB70", Offset = "0x507CB70", VA = "0x507CB70", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x170003E8")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderBottomLeftRadius
	{
		[Token(Token = "0x600114C")]
		[Address(RVA = "0x507CBC0", Offset = "0x507CBC0", VA = "0x507CBC0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170003E9")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderBottomRightRadius
	{
		[Token(Token = "0x600114D")]
		[Address(RVA = "0x507CD30", Offset = "0x507CD30", VA = "0x507CD30", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170003EA")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderBottomWidth
	{
		[Token(Token = "0x600114E")]
		[Address(RVA = "0x507CD70", Offset = "0x507CD70", VA = "0x507CD70", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x170003EB")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderLeftColor
	{
		[Token(Token = "0x600114F")]
		[Address(RVA = "0x507CF10", Offset = "0x507CF10", VA = "0x507CF10", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170003EC")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderLeftWidth
	{
		[Token(Token = "0x6001150")]
		[Address(RVA = "0x507CF60", Offset = "0x507CF60", VA = "0x507CF60", Slot = "14")]
		set
		{
		}
	}

	[Token(Token = "0x170003ED")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderRightColor
	{
		[Token(Token = "0x6001151")]
		[Address(RVA = "0x507CFE0", Offset = "0x507CFE0", VA = "0x507CFE0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003EE")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderRightWidth
	{
		[Token(Token = "0x6001152")]
		[Address(RVA = "0x507D030", Offset = "0x507D030", VA = "0x507D030", Slot = "16")]
		set
		{
		}
	}

	[Token(Token = "0x170003EF")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderTopColor
	{
		[Token(Token = "0x6001153")]
		[Address(RVA = "0x507D0B0", Offset = "0x507D0B0", VA = "0x507D0B0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170003F0")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderTopLeftRadius
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x507D100", Offset = "0x507D100", VA = "0x507D100", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170003F1")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderTopRightRadius
	{
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x507D140", Offset = "0x507D140", VA = "0x507D140", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170003F2")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderTopWidth
	{
		[Token(Token = "0x6001156")]
		[Address(RVA = "0x507D180", Offset = "0x507D180", VA = "0x507D180", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170003F3")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Ebottom
	{
		[Token(Token = "0x6001157")]
		[Address(RVA = "0x507D200", Offset = "0x507D200", VA = "0x507D200", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170003F4")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002Ecolor
	{
		[Token(Token = "0x6001158")]
		[Address(RVA = "0x507D290", Offset = "0x507D290", VA = "0x507D290", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	private StyleEnum<DisplayStyle> UnityEngine_002EUIElements_002EIStyle_002Edisplay
	{
		[Token(Token = "0x6001159")]
		[Address(RVA = "0x507D2E0", Offset = "0x507D2E0", VA = "0x507D2E0", Slot = "24")]
		get
		{
			return default(StyleEnum<DisplayStyle>);
		}
		[Token(Token = "0x600115A")]
		[Address(RVA = "0x507D370", Offset = "0x507D370", VA = "0x507D370", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EflexBasis
	{
		[Token(Token = "0x600115B")]
		[Address(RVA = "0x507D420", Offset = "0x507D420", VA = "0x507D420", Slot = "26")]
		set
		{
		}
	}

	[Token(Token = "0x170003F7")]
	private StyleEnum<FlexDirection> UnityEngine_002EUIElements_002EIStyle_002EflexDirection
	{
		[Token(Token = "0x600115C")]
		[Address(RVA = "0x507D4B0", Offset = "0x507D4B0", VA = "0x507D4B0", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x170003F8")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EflexGrow
	{
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x507D560", Offset = "0x507D560", VA = "0x507D560", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170003F9")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EflexShrink
	{
		[Token(Token = "0x600115E")]
		[Address(RVA = "0x507D5E0", Offset = "0x507D5E0", VA = "0x507D5E0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170003FA")]
	private StyleEnum<Wrap> UnityEngine_002EUIElements_002EIStyle_002EflexWrap
	{
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x507D660", Offset = "0x507D660", VA = "0x507D660", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x170003FB")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EfontSize
	{
		[Token(Token = "0x6001160")]
		[Address(RVA = "0x507D710", Offset = "0x507D710", VA = "0x507D710", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x170003FC")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eheight
	{
		[Token(Token = "0x6001161")]
		[Address(RVA = "0x507D750", Offset = "0x507D750", VA = "0x507D750", Slot = "32")]
		set
		{
		}
	}

	[Token(Token = "0x170003FD")]
	private StyleEnum<Justify> UnityEngine_002EUIElements_002EIStyle_002EjustifyContent
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x507D7E0", Offset = "0x507D7E0", VA = "0x507D7E0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x170003FE")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eleft
	{
		[Token(Token = "0x6001163")]
		[Address(RVA = "0x507D890", Offset = "0x507D890", VA = "0x507D890", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170003FF")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EletterSpacing
	{
		[Token(Token = "0x6001164")]
		[Address(RVA = "0x507D920", Offset = "0x507D920", VA = "0x507D920", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000400")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginBottom
	{
		[Token(Token = "0x6001165")]
		[Address(RVA = "0x507D960", Offset = "0x507D960", VA = "0x507D960", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginLeft
	{
		[Token(Token = "0x6001166")]
		[Address(RVA = "0x507D9F0", Offset = "0x507D9F0", VA = "0x507D9F0", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x17000402")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginRight
	{
		[Token(Token = "0x6001167")]
		[Address(RVA = "0x507DA80", Offset = "0x507DA80", VA = "0x507DA80", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000403")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginTop
	{
		[Token(Token = "0x6001168")]
		[Address(RVA = "0x507DB10", Offset = "0x507DB10", VA = "0x507DB10", Slot = "39")]
		set
		{
		}
	}

	[Token(Token = "0x17000404")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmaxHeight
	{
		[Token(Token = "0x6001169")]
		[Address(RVA = "0x507DBA0", Offset = "0x507DBA0", VA = "0x507DBA0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000405")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmaxWidth
	{
		[Token(Token = "0x600116A")]
		[Address(RVA = "0x507DC30", Offset = "0x507DC30", VA = "0x507DC30", Slot = "41")]
		set
		{
		}
	}

	[Token(Token = "0x17000406")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EminHeight
	{
		[Token(Token = "0x600116B")]
		[Address(RVA = "0x507DCC0", Offset = "0x507DCC0", VA = "0x507DCC0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000407")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EminWidth
	{
		[Token(Token = "0x600116C")]
		[Address(RVA = "0x507DD50", Offset = "0x507DD50", VA = "0x507DD50", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000408")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002Eopacity
	{
		[Token(Token = "0x600116D")]
		[Address(RVA = "0x507DDE0", Offset = "0x507DDE0", VA = "0x507DDE0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000409")]
	private StyleEnum<Overflow> UnityEngine_002EUIElements_002EIStyle_002Eoverflow
	{
		[Token(Token = "0x600116E")]
		[Address(RVA = "0x507DE20", Offset = "0x507DE20", VA = "0x507DE20", Slot = "45")]
		set
		{
		}
	}

	[Token(Token = "0x1700040A")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingBottom
	{
		[Token(Token = "0x600116F")]
		[Address(RVA = "0x507DF40", Offset = "0x507DF40", VA = "0x507DF40", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x1700040B")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingLeft
	{
		[Token(Token = "0x6001170")]
		[Address(RVA = "0x507DFD0", Offset = "0x507DFD0", VA = "0x507DFD0", Slot = "47")]
		set
		{
		}
	}

	[Token(Token = "0x1700040C")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingRight
	{
		[Token(Token = "0x6001171")]
		[Address(RVA = "0x507E060", Offset = "0x507E060", VA = "0x507E060", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x1700040D")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingTop
	{
		[Token(Token = "0x6001172")]
		[Address(RVA = "0x507E0F0", Offset = "0x507E0F0", VA = "0x507E0F0", Slot = "49")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001173")]
		[Address(RVA = "0x507E100", Offset = "0x507E100", VA = "0x507E100", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x1700040E")]
	private StyleEnum<Position> UnityEngine_002EUIElements_002EIStyle_002Eposition
	{
		[Token(Token = "0x6001174")]
		[Address(RVA = "0x507E190", Offset = "0x507E190", VA = "0x507E190", Slot = "51")]
		set
		{
		}
	}

	[Token(Token = "0x1700040F")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eright
	{
		[Token(Token = "0x6001175")]
		[Address(RVA = "0x507E240", Offset = "0x507E240", VA = "0x507E240", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x17000410")]
	private StyleEnum<TextOverflow> UnityEngine_002EUIElements_002EIStyle_002EtextOverflow
	{
		[Token(Token = "0x6001176")]
		[Address(RVA = "0x507E2D0", Offset = "0x507E2D0", VA = "0x507E2D0", Slot = "57")]
		set
		{
		}
	}

	[Token(Token = "0x17000411")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Etop
	{
		[Token(Token = "0x6001177")]
		[Address(RVA = "0x507E340", Offset = "0x507E340", VA = "0x507E340", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x17000412")]
	private StyleList<TimeValue> UnityEngine_002EUIElements_002EIStyle_002EtransitionDuration
	{
		[Token(Token = "0x6001178")]
		[Address(RVA = "0x507E3D0", Offset = "0x507E3D0", VA = "0x507E3D0", Slot = "63")]
		set
		{
		}
	}

	[Token(Token = "0x17000413")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EunityBackgroundImageTintColor
	{
		[Token(Token = "0x6001179")]
		[Address(RVA = "0x507E440", Offset = "0x507E440", VA = "0x507E440", Slot = "66")]
		set
		{
		}
	}

	[Token(Token = "0x17000414")]
	private StyleFont UnityEngine_002EUIElements_002EIStyle_002EunityFont
	{
		[Token(Token = "0x600117A")]
		[Address(RVA = "0x507E490", Offset = "0x507E490", VA = "0x507E490", Slot = "67")]
		set
		{
		}
	}

	[Token(Token = "0x17000415")]
	private StyleFontDefinition UnityEngine_002EUIElements_002EIStyle_002EunityFontDefinition
	{
		[Token(Token = "0x600117B")]
		[Address(RVA = "0x507E6D0", Offset = "0x507E6D0", VA = "0x507E6D0", Slot = "68")]
		set
		{
		}
	}

	[Token(Token = "0x17000416")]
	private StyleEnum<FontStyle> UnityEngine_002EUIElements_002EIStyle_002EunityFontStyleAndWeight
	{
		[Token(Token = "0x600117C")]
		[Address(RVA = "0x507EA20", Offset = "0x507EA20", VA = "0x507EA20", Slot = "69")]
		set
		{
		}
	}

	[Token(Token = "0x17000417")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EunityParagraphSpacing
	{
		[Token(Token = "0x600117D")]
		[Address(RVA = "0x507EA90", Offset = "0x507EA90", VA = "0x507EA90", Slot = "70")]
		set
		{
		}
	}

	[Token(Token = "0x17000418")]
	private StyleEnum<TextAnchor> UnityEngine_002EUIElements_002EIStyle_002EunityTextAlign
	{
		[Token(Token = "0x600117E")]
		[Address(RVA = "0x507EAD0", Offset = "0x507EAD0", VA = "0x507EAD0", Slot = "71")]
		set
		{
		}
	}

	[Token(Token = "0x17000419")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EunityTextOutlineColor
	{
		[Token(Token = "0x600117F")]
		[Address(RVA = "0x507EB40", Offset = "0x507EB40", VA = "0x507EB40", Slot = "72")]
		set
		{
		}
	}

	[Token(Token = "0x1700041A")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EunityTextOutlineWidth
	{
		[Token(Token = "0x6001180")]
		[Address(RVA = "0x507EB90", Offset = "0x507EB90", VA = "0x507EB90", Slot = "73")]
		set
		{
		}
	}

	[Token(Token = "0x1700041B")]
	private StyleEnum<Visibility> UnityEngine_002EUIElements_002EIStyle_002Evisibility
	{
		[Token(Token = "0x6001181")]
		[Address(RVA = "0x507EBD0", Offset = "0x507EBD0", VA = "0x507EBD0", Slot = "74")]
		set
		{
		}
	}

	[Token(Token = "0x1700041C")]
	private StyleEnum<WhiteSpace> UnityEngine_002EUIElements_002EIStyle_002EwhiteSpace
	{
		[Token(Token = "0x6001182")]
		[Address(RVA = "0x507EC40", Offset = "0x507EC40", VA = "0x507EC40", Slot = "75")]
		set
		{
		}
	}

	[Token(Token = "0x1700041D")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Ewidth
	{
		[Token(Token = "0x6001183")]
		[Address(RVA = "0x507ECB0", Offset = "0x507ECB0", VA = "0x507ECB0", Slot = "76")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001184")]
		[Address(RVA = "0x507ECC0", Offset = "0x507ECC0", VA = "0x507ECC0", Slot = "77")]
		set
		{
		}
	}

	[Token(Token = "0x1700041E")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EwordSpacing
	{
		[Token(Token = "0x6001185")]
		[Address(RVA = "0x507ED50", Offset = "0x507ED50", VA = "0x507ED50", Slot = "78")]
		set
		{
		}
	}

	[Token(Token = "0x1700041F")]
	private VisualElement ve
	{
		[Token(Token = "0x6001186")]
		[Address(RVA = "0x507ED90", Offset = "0x507ED90", VA = "0x507ED90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001187")]
		[Address(RVA = "0x507EDA0", Offset = "0x507EDA0", VA = "0x507EDA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000420")]
	private StyleCursor UnityEngine_002EUIElements_002EIStyle_002Ecursor
	{
		[Token(Token = "0x600118D")]
		[Address(RVA = "0x507FFA0", Offset = "0x507FFA0", VA = "0x507FFA0", Slot = "23")]
		get
		{
			return default(StyleCursor);
		}
	}

	[Token(Token = "0x17000421")]
	private StyleTextShadow UnityEngine_002EUIElements_002EIStyle_002EtextShadow
	{
		[Token(Token = "0x600118E")]
		[Address(RVA = "0x5080060", Offset = "0x5080060", VA = "0x5080060", Slot = "58")]
		get
		{
			return default(StyleTextShadow);
		}
		[Token(Token = "0x600118F")]
		[Address(RVA = "0x50800F0", Offset = "0x50800F0", VA = "0x50800F0", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x17000422")]
	private StyleBackgroundSize UnityEngine_002EUIElements_002EIStyle_002EbackgroundSize
	{
		[Token(Token = "0x6001190")]
		[Address(RVA = "0x5080330", Offset = "0x5080330", VA = "0x5080330", Slot = "8")]
		get
		{
			return default(StyleBackgroundSize);
		}
	}

	[Token(Token = "0x17000423")]
	private StyleTransformOrigin UnityEngine_002EUIElements_002EIStyle_002EtransformOrigin
	{
		[Token(Token = "0x6001193")]
		[Address(RVA = "0x5080730", Offset = "0x5080730", VA = "0x5080730", Slot = "61")]
		get
		{
			return default(StyleTransformOrigin);
		}
		[Token(Token = "0x6001194")]
		[Address(RVA = "0x50807C0", Offset = "0x50807C0", VA = "0x50807C0", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x17000424")]
	private StyleTranslate UnityEngine_002EUIElements_002EIStyle_002Etranslate
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x5080980", Offset = "0x5080980", VA = "0x5080980", Slot = "64")]
		get
		{
			return default(StyleTranslate);
		}
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x5080A20", Offset = "0x5080A20", VA = "0x5080A20", Slot = "65")]
		set
		{
		}
	}

	[Token(Token = "0x17000425")]
	private StyleRotate UnityEngine_002EUIElements_002EIStyle_002Erotate
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0x5080C00", Offset = "0x5080C00", VA = "0x5080C00", Slot = "53")]
		get
		{
			return default(StyleRotate);
		}
		[Token(Token = "0x6001198")]
		[Address(RVA = "0x5080CA0", Offset = "0x5080CA0", VA = "0x5080CA0", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x17000426")]
	private StyleScale UnityEngine_002EUIElements_002EIStyle_002Escale
	{
		[Token(Token = "0x6001199")]
		[Address(RVA = "0x5080E80", Offset = "0x5080E80", VA = "0x5080E80", Slot = "55")]
		get
		{
			return default(StyleScale);
		}
		[Token(Token = "0x600119A")]
		[Address(RVA = "0x5080F20", Offset = "0x5080F20", VA = "0x5080F20", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x507EDB0", Offset = "0x507EDB0", VA = "0x507EDB0")]
	public InlineStyleAccess(VisualElement ve)
	{
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x507EDE0", Offset = "0x507EDE0", VA = "0x507EDE0", Slot = "1")]
	~InlineStyleAccess()
	{
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x507EEE0", Offset = "0x507EEE0", VA = "0x507EEE0")]
	public void SetInlineRule(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x507FC90", Offset = "0x507FC90", VA = "0x507FC90")]
	public bool IsValueSet(StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x507EF90", Offset = "0x507EF90", VA = "0x507EF90")]
	public void ApplyInlineStyles(ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x50803E0", Offset = "0x50803E0", VA = "0x50803E0")]
	private void SetStyleValueManaged(StyleValueManaged value)
	{
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x50805A0", Offset = "0x50805A0", VA = "0x50805A0")]
	private bool TryGetStyleValueManaged(StylePropertyId id, ref StyleValueManaged value)
	{
		return default(bool);
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x507CC00", Offset = "0x507CC00", VA = "0x507CC00")]
	private bool SetStyleValue(StylePropertyId id, StyleLength inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x507CDF0", Offset = "0x507CDF0", VA = "0x507CDF0")]
	private bool SetStyleValue(StylePropertyId id, StyleFloat inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x507C470", Offset = "0x507C470", VA = "0x507C470")]
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
	[Address(RVA = "0x507C620", Offset = "0x507C620", VA = "0x507C620")]
	private bool SetStyleValue(StylePropertyId id, StyleBackground inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x507E720", Offset = "0x507E720", VA = "0x507E720")]
	private bool SetStyleValue(StylePropertyId id, StyleFontDefinition inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x507E4D0", Offset = "0x507E4D0", VA = "0x507E4D0")]
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
	[Address(RVA = "0x5080140", Offset = "0x5080140", VA = "0x5080140")]
	private bool SetInlineTextShadow(StyleTextShadow inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x50814F0", Offset = "0x50814F0", VA = "0x50814F0")]
	private void ApplyStyleTextShadow(StyleTextShadow textShadow)
	{
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x5080810", Offset = "0x5080810", VA = "0x5080810")]
	private bool SetInlineTransformOrigin(StyleTransformOrigin inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x50817B0", Offset = "0x50817B0", VA = "0x50817B0")]
	private void ApplyStyleTransformOrigin(StyleTransformOrigin transformOrigin)
	{
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x5080A70", Offset = "0x5080A70", VA = "0x5080A70")]
	private bool SetInlineTranslate(StyleTranslate inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x5081A70", Offset = "0x5081A70", VA = "0x5081A70")]
	private void ApplyStyleTranslate(StyleTranslate translate)
	{
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x5080F70", Offset = "0x5080F70", VA = "0x5080F70")]
	private bool SetInlineScale(StyleScale inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x5081D30", Offset = "0x5081D30", VA = "0x5081D30")]
	private void ApplyStyleScale(StyleScale scale)
	{
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x5080CF0", Offset = "0x5080CF0", VA = "0x5080CF0")]
	private bool SetInlineRotate(StyleRotate inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x5081FC0", Offset = "0x5081FC0", VA = "0x5081FC0")]
	private void ApplyStyleRotate(StyleRotate rotate)
	{
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x5081180", Offset = "0x5081180", VA = "0x5081180")]
	private void ApplyStyleValue(StyleValue value)
	{
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x5082310", Offset = "0x5082310", VA = "0x5082310")]
	private void ApplyStyleValue(StyleValueManaged value)
	{
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x5081090", Offset = "0x5081090", VA = "0x5081090")]
	private bool RemoveInlineStyle(StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x50823F0", Offset = "0x50823F0", VA = "0x50823F0")]
	private void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x5080030", Offset = "0x5080030", VA = "0x5080030")]
	public bool TryGetInlineCursor(ref StyleCursor value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x50800D0", Offset = "0x50800D0", VA = "0x50800D0")]
	public bool TryGetInlineTextShadow(ref StyleTextShadow value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x50807A0", Offset = "0x50807A0", VA = "0x50807A0")]
	public bool TryGetInlineTransformOrigin(ref StyleTransformOrigin value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x50809F0", Offset = "0x50809F0", VA = "0x50809F0")]
	public bool TryGetInlineTranslate(ref StyleTranslate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x5080C70", Offset = "0x5080C70", VA = "0x5080C70")]
	public bool TryGetInlineRotate(ref StyleRotate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x5080EF0", Offset = "0x5080EF0", VA = "0x5080EF0")]
	public bool TryGetInlineScale(ref StyleScale value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x50803B0", Offset = "0x50803B0", VA = "0x50803B0")]
	public bool TryGetInlineBackgroundSize(ref StyleBackgroundSize value)
	{
		return default(bool);
	}
}
