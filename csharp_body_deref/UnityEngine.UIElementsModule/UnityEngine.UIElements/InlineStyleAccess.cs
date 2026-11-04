// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.InlineStyleAccess
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000307")]
internal class InlineStyleAccess : StyleValueCollection, IStyle
{
	[Token(Token = "0x2000308")]
	internal struct InlineRule
	{
		[Token(Token = "0x4000BE7")]
		[FieldOffset(Offset = "0x0")]
		public StyleSheet sheet;

		[Token(Token = "0x4000BE8")]
		[FieldOffset(Offset = "0x8")]
		public StyleRule rule;
	}

	[Token(Token = "0x4000BD1")]
	[FieldOffset(Offset = "0x0")]
	private static StylePropertyReader s_StylePropertyReader;

	[Token(Token = "0x4000BD2")]
	[FieldOffset(Offset = "0x18")]
	private List<StyleValueManaged> m_ValuesManaged;

	[Token(Token = "0x4000BD4")]
	[FieldOffset(Offset = "0x28")]
	private bool m_HasInlineCursor;

	[Token(Token = "0x4000BD5")]
	[FieldOffset(Offset = "0x30")]
	private StyleCursor m_InlineCursor;

	[Token(Token = "0x4000BD6")]
	[FieldOffset(Offset = "0x50")]
	private bool m_HasInlineTextShadow;

	[Token(Token = "0x4000BD7")]
	[FieldOffset(Offset = "0x54")]
	private StyleTextShadow m_InlineTextShadow;

	[Token(Token = "0x4000BD8")]
	[FieldOffset(Offset = "0x74")]
	private bool m_HasInlineTextAutoSize;

	[Token(Token = "0x4000BD9")]
	[FieldOffset(Offset = "0x78")]
	private StyleTextAutoSize m_InlineTextAutoSize;

	[Token(Token = "0x4000BDA")]
	[FieldOffset(Offset = "0x90")]
	private bool m_HasInlineTransformOrigin;

	[Token(Token = "0x4000BDB")]
	[FieldOffset(Offset = "0x94")]
	private StyleTransformOrigin m_InlineTransformOrigin;

	[Token(Token = "0x4000BDC")]
	[FieldOffset(Offset = "0xAC")]
	private bool m_HasInlineTranslate;

	[Token(Token = "0x4000BDD")]
	[FieldOffset(Offset = "0xB0")]
	private StyleTranslate m_InlineTranslateOperation;

	[Token(Token = "0x4000BDE")]
	[FieldOffset(Offset = "0xCC")]
	private bool m_HasInlineRotate;

	[Token(Token = "0x4000BDF")]
	[FieldOffset(Offset = "0xD0")]
	private StyleRotate m_InlineRotateOperation;

	[Token(Token = "0x4000BE0")]
	[FieldOffset(Offset = "0xEC")]
	private bool m_HasInlineScale;

	[Token(Token = "0x4000BE1")]
	[FieldOffset(Offset = "0xF0")]
	private StyleScale m_InlineScale;

	[Token(Token = "0x4000BE2")]
	[FieldOffset(Offset = "0x104")]
	private bool m_HasInlineBackgroundSize;

	[Token(Token = "0x4000BE3")]
	[FieldOffset(Offset = "0x108")]
	public StyleBackgroundSize m_InlineBackgroundSize;

	[Token(Token = "0x4000BE4")]
	[FieldOffset(Offset = "0x120")]
	private bool m_HasInlineFilter;

	[Token(Token = "0x4000BE5")]
	[FieldOffset(Offset = "0x128")]
	public StyleList<FilterFunction> m_InlineFilter;

	[Token(Token = "0x4000BE6")]
	[FieldOffset(Offset = "0x138")]
	private InlineRule m_InlineRule;

	[Token(Token = "0x17000482")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignContent
	{
		[Token(Token = "0x6001518")]
		[Address(RVA = "0x30C4D40", Offset = "0x30C3340", VA = "0x1830C4D40", Slot = "4")]
		get
		{
			return default(StyleEnum<Align>);
		}
		[Token(Token = "0x6001519")]
		[Address(RVA = "0x30C6960", Offset = "0x30C4F60", VA = "0x1830C6960", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000483")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignItems
	{
		[Token(Token = "0x600151A")]
		[Address(RVA = "0x30C4DD0", Offset = "0x30C33D0", VA = "0x1830C4DD0", Slot = "6")]
		get
		{
			return default(StyleEnum<Align>);
		}
		[Token(Token = "0x600151B")]
		[Address(RVA = "0x30C6A10", Offset = "0x30C5010", VA = "0x1830C6A10", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000484")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignSelf
	{
		[Token(Token = "0x600151C")]
		[Address(RVA = "0x30C4E60", Offset = "0x30C3460", VA = "0x1830C4E60", Slot = "8")]
		get
		{
			return default(StyleEnum<Align>);
		}
		[Token(Token = "0x600151D")]
		[Address(RVA = "0x30C6AC0", Offset = "0x30C50C0", VA = "0x1830C6AC0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000485")]
	private StyleRatio UnityEngine_002EUIElements_002EIStyle_002EaspectRatio
	{
		[Token(Token = "0x600151E")]
		[Address(RVA = "0x30C4EF0", Offset = "0x30C34F0", VA = "0x1830C4EF0", Slot = "10")]
		get
		{
			return default(StyleRatio);
		}
		[Token(Token = "0x600151F")]
		[Address(RVA = "0x30C6B70", Offset = "0x30C5170", VA = "0x1830C6B70", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000486")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EbackgroundColor
	{
		[Token(Token = "0x6001520")]
		[Address(RVA = "0x30C4F00", Offset = "0x30C3500", VA = "0x1830C4F00", Slot = "12")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x6001521")]
		[Address(RVA = "0x30C6D30", Offset = "0x30C5330", VA = "0x1830C6D30", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000487")]
	private StyleBackground UnityEngine_002EUIElements_002EIStyle_002EbackgroundImage
	{
		[Token(Token = "0x6001522")]
		[Address(RVA = "0x30C4F40", Offset = "0x30C3540", VA = "0x1830C4F40", Slot = "14")]
		get
		{
			return default(StyleBackground);
		}
		[Token(Token = "0x6001523")]
		[Address(RVA = "0x30C6DA0", Offset = "0x30C53A0", VA = "0x1830C6DA0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000488")]
	private StyleBackgroundPosition UnityEngine_002EUIElements_002EIStyle_002EbackgroundPositionX
	{
		[Token(Token = "0x6001524")]
		[Address(RVA = "0x30C4F90", Offset = "0x30C3590", VA = "0x1830C4F90", Slot = "16")]
		get
		{
			return default(StyleBackgroundPosition);
		}
		[Token(Token = "0x6001525")]
		[Address(RVA = "0x30C6E20", Offset = "0x30C5420", VA = "0x1830C6E20", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000489")]
	private StyleBackgroundPosition UnityEngine_002EUIElements_002EIStyle_002EbackgroundPositionY
	{
		[Token(Token = "0x6001526")]
		[Address(RVA = "0x30C4FD0", Offset = "0x30C35D0", VA = "0x1830C4FD0", Slot = "18")]
		get
		{
			return default(StyleBackgroundPosition);
		}
		[Token(Token = "0x6001527")]
		[Address(RVA = "0x30C6E90", Offset = "0x30C5490", VA = "0x1830C6E90", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700048A")]
	private StyleBackgroundRepeat UnityEngine_002EUIElements_002EIStyle_002EbackgroundRepeat
	{
		[Token(Token = "0x6001528")]
		[Address(RVA = "0x30C5010", Offset = "0x30C3610", VA = "0x1830C5010", Slot = "20")]
		get
		{
			return default(StyleBackgroundRepeat);
		}
		[Token(Token = "0x6001529")]
		[Address(RVA = "0x30C6F00", Offset = "0x30C5500", VA = "0x1830C6F00", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700048B")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderBottomColor
	{
		[Token(Token = "0x600152A")]
		[Address(RVA = "0x30C50C0", Offset = "0x30C36C0", VA = "0x1830C50C0", Slot = "24")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x600152B")]
		[Address(RVA = "0x30C7200", Offset = "0x30C5800", VA = "0x1830C7200", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x1700048C")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderBottomLeftRadius
	{
		[Token(Token = "0x600152C")]
		[Address(RVA = "0x30C5100", Offset = "0x30C3700", VA = "0x1830C5100", Slot = "26")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600152D")]
		[Address(RVA = "0x30C7270", Offset = "0x30C5870", VA = "0x1830C7270", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x1700048D")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderBottomRightRadius
	{
		[Token(Token = "0x600152E")]
		[Address(RVA = "0x30C5140", Offset = "0x30C3740", VA = "0x1830C5140", Slot = "28")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600152F")]
		[Address(RVA = "0x30C72E0", Offset = "0x30C58E0", VA = "0x1830C72E0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x1700048E")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderBottomWidth
	{
		[Token(Token = "0x6001530")]
		[Address(RVA = "0x30C5180", Offset = "0x30C3780", VA = "0x1830C5180", Slot = "30")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001531")]
		[Address(RVA = "0x30C7350", Offset = "0x30C5950", VA = "0x1830C7350", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x1700048F")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderLeftColor
	{
		[Token(Token = "0x6001532")]
		[Address(RVA = "0x30C5190", Offset = "0x30C3790", VA = "0x1830C5190", Slot = "32")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x6001533")]
		[Address(RVA = "0x30C73E0", Offset = "0x30C59E0", VA = "0x1830C73E0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000490")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderLeftWidth
	{
		[Token(Token = "0x6001534")]
		[Address(RVA = "0x30C51D0", Offset = "0x30C37D0", VA = "0x1830C51D0", Slot = "34")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001535")]
		[Address(RVA = "0x30C7450", Offset = "0x30C5A50", VA = "0x1830C7450", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000491")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderRightColor
	{
		[Token(Token = "0x6001536")]
		[Address(RVA = "0x30C51E0", Offset = "0x30C37E0", VA = "0x1830C51E0", Slot = "36")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x6001537")]
		[Address(RVA = "0x30C74E0", Offset = "0x30C5AE0", VA = "0x1830C74E0", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x17000492")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderRightWidth
	{
		[Token(Token = "0x6001538")]
		[Address(RVA = "0x30C5220", Offset = "0x30C3820", VA = "0x1830C5220", Slot = "38")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001539")]
		[Address(RVA = "0x30C7550", Offset = "0x30C5B50", VA = "0x1830C7550", Slot = "39")]
		set
		{
		}
	}

	[Token(Token = "0x17000493")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderTopColor
	{
		[Token(Token = "0x600153A")]
		[Address(RVA = "0x30C5230", Offset = "0x30C3830", VA = "0x1830C5230", Slot = "40")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x600153B")]
		[Address(RVA = "0x30C75E0", Offset = "0x30C5BE0", VA = "0x1830C75E0", Slot = "41")]
		set
		{
		}
	}

	[Token(Token = "0x17000494")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderTopLeftRadius
	{
		[Token(Token = "0x600153C")]
		[Address(RVA = "0x30C5270", Offset = "0x30C3870", VA = "0x1830C5270", Slot = "42")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600153D")]
		[Address(RVA = "0x30C7650", Offset = "0x30C5C50", VA = "0x1830C7650", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000495")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderTopRightRadius
	{
		[Token(Token = "0x600153E")]
		[Address(RVA = "0x30C52B0", Offset = "0x30C38B0", VA = "0x1830C52B0", Slot = "44")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600153F")]
		[Address(RVA = "0x30C76C0", Offset = "0x30C5CC0", VA = "0x1830C76C0", Slot = "45")]
		set
		{
		}
	}

	[Token(Token = "0x17000496")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderTopWidth
	{
		[Token(Token = "0x6001540")]
		[Address(RVA = "0x30C52F0", Offset = "0x30C38F0", VA = "0x1830C52F0", Slot = "46")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001541")]
		[Address(RVA = "0x30C7730", Offset = "0x30C5D30", VA = "0x1830C7730", Slot = "47")]
		set
		{
		}
	}

	[Token(Token = "0x17000497")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Ebottom
	{
		[Token(Token = "0x6001542")]
		[Address(RVA = "0x30C5300", Offset = "0x30C3900", VA = "0x1830C5300", Slot = "48")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001543")]
		[Address(RVA = "0x30C77C0", Offset = "0x30C5DC0", VA = "0x1830C77C0", Slot = "49")]
		set
		{
		}
	}

	[Token(Token = "0x17000498")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002Ecolor
	{
		[Token(Token = "0x6001544")]
		[Address(RVA = "0x30C5340", Offset = "0x30C3940", VA = "0x1830C5340", Slot = "50")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x6001545")]
		[Address(RVA = "0x30C7870", Offset = "0x30C5E70", VA = "0x1830C7870", Slot = "51")]
		set
		{
		}
	}

	[Token(Token = "0x17000499")]
	private StyleEnum<DisplayStyle> UnityEngine_002EUIElements_002EIStyle_002Edisplay
	{
		[Token(Token = "0x6001546")]
		[Address(RVA = "0x30C5410", Offset = "0x30C3A10", VA = "0x1830C5410", Slot = "54")]
		get
		{
			return default(StyleEnum<DisplayStyle>);
		}
		[Token(Token = "0x6001547")]
		[Address(RVA = "0x30C7950", Offset = "0x30C5F50", VA = "0x1830C7950", Slot = "55")]
		set
		{
		}
	}

	[Token(Token = "0x1700049A")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EflexBasis
	{
		[Token(Token = "0x6001548")]
		[Address(RVA = "0x30C5540", Offset = "0x30C3B40", VA = "0x1830C5540", Slot = "58")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001549")]
		[Address(RVA = "0x30C7B80", Offset = "0x30C6180", VA = "0x1830C7B80", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x1700049B")]
	private StyleEnum<FlexDirection> UnityEngine_002EUIElements_002EIStyle_002EflexDirection
	{
		[Token(Token = "0x600154A")]
		[Address(RVA = "0x30C5580", Offset = "0x30C3B80", VA = "0x1830C5580", Slot = "60")]
		get
		{
			return default(StyleEnum<FlexDirection>);
		}
		[Token(Token = "0x600154B")]
		[Address(RVA = "0x30C7C30", Offset = "0x30C6230", VA = "0x1830C7C30", Slot = "61")]
		set
		{
		}
	}

	[Token(Token = "0x1700049C")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EflexGrow
	{
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x30C5610", Offset = "0x30C3C10", VA = "0x1830C5610", Slot = "62")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x30C7CE0", Offset = "0x30C62E0", VA = "0x1830C7CE0", Slot = "63")]
		set
		{
		}
	}

	[Token(Token = "0x1700049D")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EflexShrink
	{
		[Token(Token = "0x600154E")]
		[Address(RVA = "0x30C5620", Offset = "0x30C3C20", VA = "0x1830C5620", Slot = "64")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x600154F")]
		[Address(RVA = "0x30C7D70", Offset = "0x30C6370", VA = "0x1830C7D70", Slot = "65")]
		set
		{
		}
	}

	[Token(Token = "0x1700049E")]
	private StyleEnum<Wrap> UnityEngine_002EUIElements_002EIStyle_002EflexWrap
	{
		[Token(Token = "0x6001550")]
		[Address(RVA = "0x30C5630", Offset = "0x30C3C30", VA = "0x1830C5630", Slot = "66")]
		get
		{
			return default(StyleEnum<Wrap>);
		}
		[Token(Token = "0x6001551")]
		[Address(RVA = "0x30C7E00", Offset = "0x30C6400", VA = "0x1830C7E00", Slot = "67")]
		set
		{
		}
	}

	[Token(Token = "0x1700049F")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EfontSize
	{
		[Token(Token = "0x6001552")]
		[Address(RVA = "0x30C56C0", Offset = "0x30C3CC0", VA = "0x1830C56C0", Slot = "68")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001553")]
		[Address(RVA = "0x30C7EB0", Offset = "0x30C64B0", VA = "0x1830C7EB0", Slot = "69")]
		set
		{
		}
	}

	[Token(Token = "0x170004A0")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eheight
	{
		[Token(Token = "0x6001554")]
		[Address(RVA = "0x30C5700", Offset = "0x30C3D00", VA = "0x1830C5700", Slot = "70")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001555")]
		[Address(RVA = "0x30C7F20", Offset = "0x30C6520", VA = "0x1830C7F20", Slot = "71")]
		set
		{
		}
	}

	[Token(Token = "0x170004A1")]
	private StyleEnum<Justify> UnityEngine_002EUIElements_002EIStyle_002EjustifyContent
	{
		[Token(Token = "0x6001556")]
		[Address(RVA = "0x30C5740", Offset = "0x30C3D40", VA = "0x1830C5740", Slot = "72")]
		get
		{
			return default(StyleEnum<Justify>);
		}
		[Token(Token = "0x6001557")]
		[Address(RVA = "0x30C7FD0", Offset = "0x30C65D0", VA = "0x1830C7FD0", Slot = "73")]
		set
		{
		}
	}

	[Token(Token = "0x170004A2")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eleft
	{
		[Token(Token = "0x6001558")]
		[Address(RVA = "0x30C57D0", Offset = "0x30C3DD0", VA = "0x1830C57D0", Slot = "74")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001559")]
		[Address(RVA = "0x30C8080", Offset = "0x30C6680", VA = "0x1830C8080", Slot = "75")]
		set
		{
		}
	}

	[Token(Token = "0x170004A3")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EletterSpacing
	{
		[Token(Token = "0x600155A")]
		[Address(RVA = "0x30C5810", Offset = "0x30C3E10", VA = "0x1830C5810", Slot = "76")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600155B")]
		[Address(RVA = "0x30C8130", Offset = "0x30C6730", VA = "0x1830C8130", Slot = "77")]
		set
		{
		}
	}

	[Token(Token = "0x170004A4")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginBottom
	{
		[Token(Token = "0x600155C")]
		[Address(RVA = "0x30C5850", Offset = "0x30C3E50", VA = "0x1830C5850", Slot = "78")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x30C81A0", Offset = "0x30C67A0", VA = "0x1830C81A0", Slot = "79")]
		set
		{
		}
	}

	[Token(Token = "0x170004A5")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginLeft
	{
		[Token(Token = "0x600155E")]
		[Address(RVA = "0x30C5890", Offset = "0x30C3E90", VA = "0x1830C5890", Slot = "80")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600155F")]
		[Address(RVA = "0x30C8250", Offset = "0x30C6850", VA = "0x1830C8250", Slot = "81")]
		set
		{
		}
	}

	[Token(Token = "0x170004A6")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginRight
	{
		[Token(Token = "0x6001560")]
		[Address(RVA = "0x30C58D0", Offset = "0x30C3ED0", VA = "0x1830C58D0", Slot = "82")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001561")]
		[Address(RVA = "0x30C8300", Offset = "0x30C6900", VA = "0x1830C8300", Slot = "83")]
		set
		{
		}
	}

	[Token(Token = "0x170004A7")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginTop
	{
		[Token(Token = "0x6001562")]
		[Address(RVA = "0x30C5910", Offset = "0x30C3F10", VA = "0x1830C5910", Slot = "84")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001563")]
		[Address(RVA = "0x30C83B0", Offset = "0x30C69B0", VA = "0x1830C83B0", Slot = "85")]
		set
		{
		}
	}

	[Token(Token = "0x170004A8")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmaxHeight
	{
		[Token(Token = "0x6001564")]
		[Address(RVA = "0x30C5950", Offset = "0x30C3F50", VA = "0x1830C5950", Slot = "86")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001565")]
		[Address(RVA = "0x30C8460", Offset = "0x30C6A60", VA = "0x1830C8460", Slot = "87")]
		set
		{
		}
	}

	[Token(Token = "0x170004A9")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmaxWidth
	{
		[Token(Token = "0x6001566")]
		[Address(RVA = "0x30C5990", Offset = "0x30C3F90", VA = "0x1830C5990", Slot = "88")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001567")]
		[Address(RVA = "0x30C8510", Offset = "0x30C6B10", VA = "0x1830C8510", Slot = "89")]
		set
		{
		}
	}

	[Token(Token = "0x170004AA")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EminHeight
	{
		[Token(Token = "0x6001568")]
		[Address(RVA = "0x30C59D0", Offset = "0x30C3FD0", VA = "0x1830C59D0", Slot = "90")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001569")]
		[Address(RVA = "0x30C85C0", Offset = "0x30C6BC0", VA = "0x1830C85C0", Slot = "91")]
		set
		{
		}
	}

	[Token(Token = "0x170004AB")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EminWidth
	{
		[Token(Token = "0x600156A")]
		[Address(RVA = "0x30C5A10", Offset = "0x30C4010", VA = "0x1830C5A10", Slot = "92")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600156B")]
		[Address(RVA = "0x30C8670", Offset = "0x30C6C70", VA = "0x1830C8670", Slot = "93")]
		set
		{
		}
	}

	[Token(Token = "0x170004AC")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002Eopacity
	{
		[Token(Token = "0x600156C")]
		[Address(RVA = "0x30C5A50", Offset = "0x30C4050", VA = "0x1830C5A50", Slot = "94")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x600156D")]
		[Address(RVA = "0x30C8720", Offset = "0x30C6D20", VA = "0x1830C8720", Slot = "95")]
		set
		{
		}
	}

	[Token(Token = "0x170004AD")]
	private StyleEnum<Overflow> UnityEngine_002EUIElements_002EIStyle_002Eoverflow
	{
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x30C5A60", Offset = "0x30C4060", VA = "0x1830C5A60", Slot = "96")]
		get
		{
			return default(StyleEnum<Overflow>);
		}
		[Token(Token = "0x600156F")]
		[Address(RVA = "0x30C8780", Offset = "0x30C6D80", VA = "0x1830C8780", Slot = "97")]
		set
		{
		}
	}

	[Token(Token = "0x170004AE")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingBottom
	{
		[Token(Token = "0x6001570")]
		[Address(RVA = "0x30C5AF0", Offset = "0x30C40F0", VA = "0x1830C5AF0", Slot = "98")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001571")]
		[Address(RVA = "0x30C88A0", Offset = "0x30C6EA0", VA = "0x1830C88A0", Slot = "99")]
		set
		{
		}
	}

	[Token(Token = "0x170004AF")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingLeft
	{
		[Token(Token = "0x6001572")]
		[Address(RVA = "0x30C5B30", Offset = "0x30C4130", VA = "0x1830C5B30", Slot = "100")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001573")]
		[Address(RVA = "0x30C8950", Offset = "0x30C6F50", VA = "0x1830C8950", Slot = "101")]
		set
		{
		}
	}

	[Token(Token = "0x170004B0")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingRight
	{
		[Token(Token = "0x6001574")]
		[Address(RVA = "0x30C5B70", Offset = "0x30C4170", VA = "0x1830C5B70", Slot = "102")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001575")]
		[Address(RVA = "0x30C8A00", Offset = "0x30C7000", VA = "0x1830C8A00", Slot = "103")]
		set
		{
		}
	}

	[Token(Token = "0x170004B1")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingTop
	{
		[Token(Token = "0x6001576")]
		[Address(RVA = "0x30C5BB0", Offset = "0x30C41B0", VA = "0x1830C5BB0", Slot = "104")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x30C8AB0", Offset = "0x30C70B0", VA = "0x1830C8AB0", Slot = "105")]
		set
		{
		}
	}

	[Token(Token = "0x170004B2")]
	private StyleEnum<Position> UnityEngine_002EUIElements_002EIStyle_002Eposition
	{
		[Token(Token = "0x6001578")]
		[Address(RVA = "0x30C5BF0", Offset = "0x30C41F0", VA = "0x1830C5BF0", Slot = "106")]
		get
		{
			return default(StyleEnum<Position>);
		}
		[Token(Token = "0x6001579")]
		[Address(RVA = "0x30C8B60", Offset = "0x30C7160", VA = "0x1830C8B60", Slot = "107")]
		set
		{
		}
	}

	[Token(Token = "0x170004B3")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eright
	{
		[Token(Token = "0x600157A")]
		[Address(RVA = "0x30C5C80", Offset = "0x30C4280", VA = "0x1830C5C80", Slot = "108")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600157B")]
		[Address(RVA = "0x30C8C10", Offset = "0x30C7210", VA = "0x1830C8C10", Slot = "109")]
		set
		{
		}
	}

	[Token(Token = "0x170004B4")]
	private StyleEnum<TextOverflow> UnityEngine_002EUIElements_002EIStyle_002EtextOverflow
	{
		[Token(Token = "0x600157C")]
		[Address(RVA = "0x30C5D90", Offset = "0x30C4390", VA = "0x1830C5D90", Slot = "114")]
		get
		{
			return default(StyleEnum<TextOverflow>);
		}
		[Token(Token = "0x600157D")]
		[Address(RVA = "0x30C8FF0", Offset = "0x30C75F0", VA = "0x1830C8FF0", Slot = "115")]
		set
		{
		}
	}

	[Token(Token = "0x170004B5")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Etop
	{
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x30C5E80", Offset = "0x30C4480", VA = "0x1830C5E80", Slot = "118")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600157F")]
		[Address(RVA = "0x30C9250", Offset = "0x30C7850", VA = "0x1830C9250", Slot = "119")]
		set
		{
		}
	}

	[Token(Token = "0x170004B6")]
	private StyleList<TimeValue> UnityEngine_002EUIElements_002EIStyle_002EtransitionDelay
	{
		[Token(Token = "0x6001580")]
		[Address(RVA = "0x30C5F30", Offset = "0x30C4530", VA = "0x1830C5F30", Slot = "122")]
		get
		{
			return default(StyleList<TimeValue>);
		}
		[Token(Token = "0x6001581")]
		[Address(RVA = "0x30C9490", Offset = "0x30C7A90", VA = "0x1830C9490", Slot = "123")]
		set
		{
		}
	}

	[Token(Token = "0x170004B7")]
	private StyleList<TimeValue> UnityEngine_002EUIElements_002EIStyle_002EtransitionDuration
	{
		[Token(Token = "0x6001582")]
		[Address(RVA = "0x30C5FA0", Offset = "0x30C45A0", VA = "0x1830C5FA0", Slot = "124")]
		get
		{
			return default(StyleList<TimeValue>);
		}
		[Token(Token = "0x6001583")]
		[Address(RVA = "0x30C9520", Offset = "0x30C7B20", VA = "0x1830C9520", Slot = "125")]
		set
		{
		}
	}

	[Token(Token = "0x170004B8")]
	private StyleList<StylePropertyName> UnityEngine_002EUIElements_002EIStyle_002EtransitionProperty
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x30C6010", Offset = "0x30C4610", VA = "0x1830C6010", Slot = "126")]
		get
		{
			return default(StyleList<StylePropertyName>);
		}
		[Token(Token = "0x6001585")]
		[Address(RVA = "0x30C95B0", Offset = "0x30C7BB0", VA = "0x1830C95B0", Slot = "127")]
		set
		{
		}
	}

	[Token(Token = "0x170004B9")]
	private StyleList<EasingFunction> UnityEngine_002EUIElements_002EIStyle_002EtransitionTimingFunction
	{
		[Token(Token = "0x6001586")]
		[Address(RVA = "0x30C6080", Offset = "0x30C4680", VA = "0x1830C6080", Slot = "128")]
		get
		{
			return default(StyleList<EasingFunction>);
		}
		[Token(Token = "0x6001587")]
		[Address(RVA = "0x30C9640", Offset = "0x30C7C40", VA = "0x1830C9640", Slot = "129")]
		set
		{
		}
	}

	[Token(Token = "0x170004BA")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EunityBackgroundImageTintColor
	{
		[Token(Token = "0x6001588")]
		[Address(RVA = "0x30C6160", Offset = "0x30C4760", VA = "0x1830C6160", Slot = "132")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x6001589")]
		[Address(RVA = "0x30C9880", Offset = "0x30C7E80", VA = "0x1830C9880", Slot = "133")]
		set
		{
		}
	}

	[Token(Token = "0x170004BB")]
	private StyleEnum<EditorTextRenderingMode> UnityEngine_002EUIElements_002EIStyle_002EunityEditorTextRenderingMode
	{
		[Token(Token = "0x600158A")]
		[Address(RVA = "0x30C61A0", Offset = "0x30C47A0", VA = "0x1830C61A0", Slot = "134")]
		get
		{
			return default(StyleEnum<EditorTextRenderingMode>);
		}
		[Token(Token = "0x600158B")]
		[Address(RVA = "0x30C98F0", Offset = "0x30C7EF0", VA = "0x1830C98F0", Slot = "135")]
		set
		{
		}
	}

	[Token(Token = "0x170004BC")]
	private StyleFont UnityEngine_002EUIElements_002EIStyle_002EunityFont
	{
		[Token(Token = "0x600158C")]
		[Address(RVA = "0x30C6310", Offset = "0x30C4910", VA = "0x1830C6310", Slot = "136")]
		get
		{
			return default(StyleFont);
		}
		[Token(Token = "0x600158D")]
		[Address(RVA = "0x30C9A80", Offset = "0x30C8080", VA = "0x1830C9A80", Slot = "137")]
		set
		{
		}
	}

	[Token(Token = "0x170004BD")]
	private StyleFontDefinition UnityEngine_002EUIElements_002EIStyle_002EunityFontDefinition
	{
		[Token(Token = "0x600158E")]
		[Address(RVA = "0x30C6230", Offset = "0x30C4830", VA = "0x1830C6230", Slot = "138")]
		get
		{
			return default(StyleFontDefinition);
		}
		[Token(Token = "0x600158F")]
		[Address(RVA = "0x30C9980", Offset = "0x30C7F80", VA = "0x1830C9980", Slot = "139")]
		set
		{
		}
	}

	[Token(Token = "0x170004BE")]
	private StyleEnum<FontStyle> UnityEngine_002EUIElements_002EIStyle_002EunityFontStyleAndWeight
	{
		[Token(Token = "0x6001590")]
		[Address(RVA = "0x30C6280", Offset = "0x30C4880", VA = "0x1830C6280", Slot = "140")]
		get
		{
			return default(StyleEnum<FontStyle>);
		}
		[Token(Token = "0x6001591")]
		[Address(RVA = "0x30C99F0", Offset = "0x30C7FF0", VA = "0x1830C99F0", Slot = "141")]
		set
		{
		}
	}

	[Token(Token = "0x170004BF")]
	private StyleMaterialDefinition UnityEngine_002EUIElements_002EIStyle_002EunityMaterial
	{
		[Token(Token = "0x6001592")]
		[Address(RVA = "0x30C6350", Offset = "0x30C4950", VA = "0x1830C6350", Slot = "142")]
		get
		{
			return default(StyleMaterialDefinition);
		}
		[Token(Token = "0x6001593")]
		[Address(RVA = "0x30C9AF0", Offset = "0x30C80F0", VA = "0x1830C9AF0", Slot = "143")]
		set
		{
		}
	}

	[Token(Token = "0x170004C0")]
	private StyleEnum<OverflowClipBox> UnityEngine_002EUIElements_002EIStyle_002EunityOverflowClipBox
	{
		[Token(Token = "0x6001594")]
		[Address(RVA = "0x30C63A0", Offset = "0x30C49A0", VA = "0x1830C63A0", Slot = "144")]
		get
		{
			return default(StyleEnum<OverflowClipBox>);
		}
		[Token(Token = "0x6001595")]
		[Address(RVA = "0x30C9B60", Offset = "0x30C8160", VA = "0x1830C9B60", Slot = "145")]
		set
		{
		}
	}

	[Token(Token = "0x170004C1")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EunityParagraphSpacing
	{
		[Token(Token = "0x6001596")]
		[Address(RVA = "0x30C6430", Offset = "0x30C4A30", VA = "0x1830C6430", Slot = "146")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001597")]
		[Address(RVA = "0x30C9BF0", Offset = "0x30C81F0", VA = "0x1830C9BF0", Slot = "147")]
		set
		{
		}
	}

	[Token(Token = "0x170004C2")]
	private StyleInt UnityEngine_002EUIElements_002EIStyle_002EunitySliceBottom
	{
		[Token(Token = "0x6001598")]
		[Address(RVA = "0x30C6470", Offset = "0x30C4A70", VA = "0x1830C6470", Slot = "148")]
		get
		{
			return default(StyleInt);
		}
		[Token(Token = "0x6001599")]
		[Address(RVA = "0x30C9C60", Offset = "0x30C8260", VA = "0x1830C9C60", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x170004C3")]
	private StyleInt UnityEngine_002EUIElements_002EIStyle_002EunitySliceLeft
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x30C6480", Offset = "0x30C4A80", VA = "0x1830C6480", Slot = "150")]
		get
		{
			return default(StyleInt);
		}
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x30C9CC0", Offset = "0x30C82C0", VA = "0x1830C9CC0", Slot = "151")]
		set
		{
		}
	}

	[Token(Token = "0x170004C4")]
	private StyleInt UnityEngine_002EUIElements_002EIStyle_002EunitySliceRight
	{
		[Token(Token = "0x600159C")]
		[Address(RVA = "0x30C6490", Offset = "0x30C4A90", VA = "0x1830C6490", Slot = "152")]
		get
		{
			return default(StyleInt);
		}
		[Token(Token = "0x600159D")]
		[Address(RVA = "0x30C9D20", Offset = "0x30C8320", VA = "0x1830C9D20", Slot = "153")]
		set
		{
		}
	}

	[Token(Token = "0x170004C5")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EunitySliceScale
	{
		[Token(Token = "0x600159E")]
		[Address(RVA = "0x30C64A0", Offset = "0x30C4AA0", VA = "0x1830C64A0", Slot = "154")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x600159F")]
		[Address(RVA = "0x30C9D80", Offset = "0x30C8380", VA = "0x1830C9D80", Slot = "155")]
		set
		{
		}
	}

	[Token(Token = "0x170004C6")]
	private StyleInt UnityEngine_002EUIElements_002EIStyle_002EunitySliceTop
	{
		[Token(Token = "0x60015A0")]
		[Address(RVA = "0x30C64B0", Offset = "0x30C4AB0", VA = "0x1830C64B0", Slot = "156")]
		get
		{
			return default(StyleInt);
		}
		[Token(Token = "0x60015A1")]
		[Address(RVA = "0x30C9DE0", Offset = "0x30C83E0", VA = "0x1830C9DE0", Slot = "157")]
		set
		{
		}
	}

	[Token(Token = "0x170004C7")]
	private StyleEnum<SliceType> UnityEngine_002EUIElements_002EIStyle_002EunitySliceType
	{
		[Token(Token = "0x60015A2")]
		[Address(RVA = "0x30C64C0", Offset = "0x30C4AC0", VA = "0x1830C64C0", Slot = "158")]
		get
		{
			return default(StyleEnum<SliceType>);
		}
		[Token(Token = "0x60015A3")]
		[Address(RVA = "0x30C9E40", Offset = "0x30C8440", VA = "0x1830C9E40", Slot = "159")]
		set
		{
		}
	}

	[Token(Token = "0x170004C8")]
	private StyleEnum<TextAnchor> UnityEngine_002EUIElements_002EIStyle_002EunityTextAlign
	{
		[Token(Token = "0x60015A4")]
		[Address(RVA = "0x30C6550", Offset = "0x30C4B50", VA = "0x1830C6550", Slot = "160")]
		get
		{
			return default(StyleEnum<TextAnchor>);
		}
		[Token(Token = "0x60015A5")]
		[Address(RVA = "0x30C9ED0", Offset = "0x30C84D0", VA = "0x1830C9ED0", Slot = "161")]
		set
		{
		}
	}

	[Token(Token = "0x170004C9")]
	private StyleEnum<TextGeneratorType> UnityEngine_002EUIElements_002EIStyle_002EunityTextGenerator
	{
		[Token(Token = "0x60015A6")]
		[Address(RVA = "0x30C6650", Offset = "0x30C4C50", VA = "0x1830C6650", Slot = "164")]
		get
		{
			return default(StyleEnum<TextGeneratorType>);
		}
		[Token(Token = "0x60015A7")]
		[Address(RVA = "0x30CA160", Offset = "0x30C8760", VA = "0x1830CA160", Slot = "165")]
		set
		{
		}
	}

	[Token(Token = "0x170004CA")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EunityTextOutlineColor
	{
		[Token(Token = "0x60015A8")]
		[Address(RVA = "0x30C66E0", Offset = "0x30C4CE0", VA = "0x1830C66E0", Slot = "166")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x60015A9")]
		[Address(RVA = "0x30CA1F0", Offset = "0x30C87F0", VA = "0x1830CA1F0", Slot = "167")]
		set
		{
		}
	}

	[Token(Token = "0x170004CB")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EunityTextOutlineWidth
	{
		[Token(Token = "0x60015AA")]
		[Address(RVA = "0x30C6720", Offset = "0x30C4D20", VA = "0x1830C6720", Slot = "168")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x60015AB")]
		[Address(RVA = "0x30CA260", Offset = "0x30C8860", VA = "0x1830CA260", Slot = "169")]
		set
		{
		}
	}

	[Token(Token = "0x170004CC")]
	private StyleEnum<TextOverflowPosition> UnityEngine_002EUIElements_002EIStyle_002EunityTextOverflowPosition
	{
		[Token(Token = "0x60015AC")]
		[Address(RVA = "0x30C6730", Offset = "0x30C4D30", VA = "0x1830C6730", Slot = "170")]
		get
		{
			return default(StyleEnum<TextOverflowPosition>);
		}
		[Token(Token = "0x60015AD")]
		[Address(RVA = "0x30CA2C0", Offset = "0x30C88C0", VA = "0x1830CA2C0", Slot = "171")]
		set
		{
		}
	}

	[Token(Token = "0x170004CD")]
	private StyleEnum<Visibility> UnityEngine_002EUIElements_002EIStyle_002Evisibility
	{
		[Token(Token = "0x60015AE")]
		[Address(RVA = "0x30C67C0", Offset = "0x30C4DC0", VA = "0x1830C67C0", Slot = "172")]
		get
		{
			return default(StyleEnum<Visibility>);
		}
		[Token(Token = "0x60015AF")]
		[Address(RVA = "0x30CA350", Offset = "0x30C8950", VA = "0x1830CA350", Slot = "173")]
		set
		{
		}
	}

	[Token(Token = "0x170004CE")]
	private StyleEnum<WhiteSpace> UnityEngine_002EUIElements_002EIStyle_002EwhiteSpace
	{
		[Token(Token = "0x60015B0")]
		[Address(RVA = "0x30C6850", Offset = "0x30C4E50", VA = "0x1830C6850", Slot = "174")]
		get
		{
			return default(StyleEnum<WhiteSpace>);
		}
		[Token(Token = "0x60015B1")]
		[Address(RVA = "0x30CA3E0", Offset = "0x30C89E0", VA = "0x1830CA3E0", Slot = "175")]
		set
		{
		}
	}

	[Token(Token = "0x170004CF")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Ewidth
	{
		[Token(Token = "0x60015B2")]
		[Address(RVA = "0x30C68E0", Offset = "0x30C4EE0", VA = "0x1830C68E0", Slot = "176")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x60015B3")]
		[Address(RVA = "0x30CA470", Offset = "0x30C8A70", VA = "0x1830CA470", Slot = "177")]
		set
		{
		}
	}

	[Token(Token = "0x170004D0")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EwordSpacing
	{
		[Token(Token = "0x60015B4")]
		[Address(RVA = "0x30C6920", Offset = "0x30C4F20", VA = "0x1830C6920", Slot = "178")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x60015B5")]
		[Address(RVA = "0x30CA520", Offset = "0x30C8B20", VA = "0x1830CA520", Slot = "179")]
		set
		{
		}
	}

	[Token(Token = "0x170004D1")]
	private VisualElement ve
	{
		[Token(Token = "0x60015B6")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60015B7")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004D2")]
	private StyleCursor UnityEngine_002EUIElements_002EIStyle_002Ecursor
	{
		[Token(Token = "0x60015BD")]
		[Address(RVA = "0x30C5380", Offset = "0x30C3980", VA = "0x1830C5380", Slot = "52")]
		get
		{
			return default(StyleCursor);
		}
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x30C78E0", Offset = "0x30C5EE0", VA = "0x1830C78E0", Slot = "53")]
		set
		{
		}
	}

	[Token(Token = "0x170004D3")]
	private StyleTextShadow UnityEngine_002EUIElements_002EIStyle_002EtextShadow
	{
		[Token(Token = "0x60015BF")]
		[Address(RVA = "0x30C5E20", Offset = "0x30C4420", VA = "0x1830C5E20", Slot = "116")]
		get
		{
			return default(StyleTextShadow);
		}
		[Token(Token = "0x60015C0")]
		[Address(RVA = "0x30C9080", Offset = "0x30C7680", VA = "0x1830C9080", Slot = "117")]
		set
		{
		}
	}

	[Token(Token = "0x170004D4")]
	private StyleTextAutoSize UnityEngine_002EUIElements_002EIStyle_002EunityTextAutoSize
	{
		[Token(Token = "0x60015C1")]
		[Address(RVA = "0x30C65E0", Offset = "0x30C4BE0", VA = "0x1830C65E0", Slot = "162")]
		get
		{
			return default(StyleTextAutoSize);
		}
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x30C9F60", Offset = "0x30C8560", VA = "0x1830C9F60", Slot = "163")]
		set
		{
		}
	}

	[Token(Token = "0x170004D5")]
	private StyleBackgroundSize UnityEngine_002EUIElements_002EIStyle_002EbackgroundSize
	{
		[Token(Token = "0x60015C3")]
		[Address(RVA = "0x30C5050", Offset = "0x30C3650", VA = "0x1830C5050", Slot = "22")]
		get
		{
			return default(StyleBackgroundSize);
		}
		[Token(Token = "0x60015C4")]
		[Address(RVA = "0x30C7070", Offset = "0x30C5670", VA = "0x1830C7070", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x170004D6")]
	private StyleList<FilterFunction> UnityEngine_002EUIElements_002EIStyle_002Efilter
	{
		[Token(Token = "0x60015C5")]
		[Address(RVA = "0x30C54A0", Offset = "0x30C3AA0", VA = "0x1830C54A0", Slot = "56")]
		get
		{
			return default(StyleList<FilterFunction>);
		}
		[Token(Token = "0x60015C6")]
		[Address(RVA = "0x30C7A00", Offset = "0x30C6000", VA = "0x1830C7A00", Slot = "57")]
		set
		{
		}
	}

	[Token(Token = "0x170004D7")]
	private StyleTransformOrigin UnityEngine_002EUIElements_002EIStyle_002EtransformOrigin
	{
		[Token(Token = "0x60015CA")]
		[Address(RVA = "0x30C5EC0", Offset = "0x30C44C0", VA = "0x1830C5EC0", Slot = "120")]
		get
		{
			return default(StyleTransformOrigin);
		}
		[Token(Token = "0x60015CB")]
		[Address(RVA = "0x30C9300", Offset = "0x30C7900", VA = "0x1830C9300", Slot = "121")]
		set
		{
		}
	}

	[Token(Token = "0x170004D8")]
	private StyleTranslate UnityEngine_002EUIElements_002EIStyle_002Etranslate
	{
		[Token(Token = "0x60015CC")]
		[Address(RVA = "0x30C60F0", Offset = "0x30C46F0", VA = "0x1830C60F0", Slot = "130")]
		get
		{
			return default(StyleTranslate);
		}
		[Token(Token = "0x60015CD")]
		[Address(RVA = "0x30C96D0", Offset = "0x30C7CD0", VA = "0x1830C96D0", Slot = "131")]
		set
		{
		}
	}

	[Token(Token = "0x170004D9")]
	private StyleRotate UnityEngine_002EUIElements_002EIStyle_002Erotate
	{
		[Token(Token = "0x60015CE")]
		[Address(RVA = "0x30C5CC0", Offset = "0x30C42C0", VA = "0x1830C5CC0", Slot = "110")]
		get
		{
			return default(StyleRotate);
		}
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x30C8CC0", Offset = "0x30C72C0", VA = "0x1830C8CC0", Slot = "111")]
		set
		{
		}
	}

	[Token(Token = "0x170004DA")]
	private StyleScale UnityEngine_002EUIElements_002EIStyle_002Escale
	{
		[Token(Token = "0x60015D0")]
		[Address(RVA = "0x30C5D30", Offset = "0x30C4330", VA = "0x1830C5D30", Slot = "112")]
		get
		{
			return default(StyleScale);
		}
		[Token(Token = "0x60015D1")]
		[Address(RVA = "0x30C8E70", Offset = "0x30C7470", VA = "0x1830C8E70", Slot = "113")]
		set
		{
		}
	}

	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x30CA610", Offset = "0x30C8C10", VA = "0x1830CA610")]
	public InlineStyleAccess(VisualElement ve)
	{
	}

	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x30C1C70", Offset = "0x30C0270", VA = "0x1830C1C70", Slot = "1")]
	~InlineStyleAccess()
	{
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x30C28D0", Offset = "0x30C0ED0", VA = "0x1830C28D0")]
	public void SetInlineRule(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x30C1D30", Offset = "0x30C0330", VA = "0x1830C1D30")]
	public bool IsValueSet(StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x30BF580", Offset = "0x30BDB80", VA = "0x1830BF580")]
	public void ApplyInlineStyles(ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x60015C7")]
	private StyleList<T> GetStyleList<T>(StylePropertyId id)
	{
		return default(StyleList<T>);
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x30C3110", Offset = "0x30C1710", VA = "0x1830C3110")]
	private void SetStyleValueManaged(StyleValueManaged value)
	{
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x30C4BF0", Offset = "0x30C31F0", VA = "0x1830C4BF0")]
	private bool TryGetStyleValueManaged(StylePropertyId id, ref StyleValueManaged value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x30C3320", Offset = "0x30C1920", VA = "0x1830C3320")]
	private bool SetStyleValue(StylePropertyId id, StyleBackgroundPosition inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x30C3B30", Offset = "0x30C2130", VA = "0x1830C3B30")]
	private bool SetStyleValue(StylePropertyId id, StyleBackgroundRepeat inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x30C34A0", Offset = "0x30C1AA0", VA = "0x1830C34A0")]
	private bool SetStyleValue(StylePropertyId id, StyleLength inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x30C4310", Offset = "0x30C2910", VA = "0x1830C4310")]
	private bool SetStyleValue(StylePropertyId id, StyleFloat inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x30C3FA0", Offset = "0x30C25A0", VA = "0x1830C3FA0")]
	private bool SetStyleValue(StylePropertyId id, StyleInt inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x30C3DD0", Offset = "0x30C23D0", VA = "0x1830C3DD0")]
	private bool SetStyleValue(StylePropertyId id, StyleColor inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D8")]
	private bool SetStyleValue<T>(StylePropertyId id, StyleEnum<T> inlineValue) where T : struct, IConvertible
	{
		return default(bool);
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x30C4470", Offset = "0x30C2A70", VA = "0x1830C4470")]
	private bool SetStyleValue(StylePropertyId id, StyleBackground inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x30C35E0", Offset = "0x30C1BE0", VA = "0x1830C35E0")]
	private bool SetStyleValue(StylePropertyId id, StyleFontDefinition inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x30C4110", Offset = "0x30C2710", VA = "0x1830C4110")]
	private bool SetStyleValue(StylePropertyId id, StyleFont inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x30C38E0", Offset = "0x30C1EE0", VA = "0x1830C38E0")]
	private bool SetStyleValue(StylePropertyId id, StyleMaterialDefinition inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DD")]
	private bool SetStyleValue<T>(StylePropertyId id, StyleList<T> inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x30C3C50", Offset = "0x30C2250", VA = "0x1830C3C50")]
	private bool SetStyleValue(StylePropertyId id, StyleRatio inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x30C2290", Offset = "0x30C0890", VA = "0x1830C2290")]
	private bool SetInlineCursor(StyleCursor inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x30C0B80", Offset = "0x30BF180", VA = "0x1830C0B80")]
	private void ApplyStyleCursor(StyleCursor cursor)
	{
	}

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x30C2C70", Offset = "0x30C1270", VA = "0x1830C2C70")]
	private bool SetInlineTextShadow(StyleTextShadow inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x30C1390", Offset = "0x30BF990", VA = "0x1830C1390")]
	private void ApplyStyleTextShadow(StyleTextShadow textShadow)
	{
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x30C2AA0", Offset = "0x30C10A0", VA = "0x1830C2AA0")]
	private bool SetInlineTextAutoSize(StyleTextAutoSize inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x30C1340", Offset = "0x30BF940", VA = "0x1830C1340")]
	private void ApplyStyleTextAutoSize(StyleTextAutoSize textAutoSize)
	{
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x30C2E10", Offset = "0x30C1410", VA = "0x1830C2E10")]
	private bool SetInlineTransformOrigin(StyleTransformOrigin inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x30C1570", Offset = "0x30BFB70", VA = "0x1830C1570")]
	private void ApplyStyleTransformOrigin(StyleTransformOrigin transformOrigin)
	{
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x30C2F70", Offset = "0x30C1570", VA = "0x1830C2F70")]
	private bool SetInlineTranslate(StyleTranslate inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x30C1750", Offset = "0x30BFD50", VA = "0x1830C1750")]
	private void ApplyStyleTranslate(StyleTranslate translate)
	{
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x30C2930", Offset = "0x30C0F30", VA = "0x1830C2930")]
	private bool SetInlineScale(StyleScale inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x30C1180", Offset = "0x30BF780", VA = "0x1830C1180")]
	private void ApplyStyleScale(StyleScale scale)
	{
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x30C2730", Offset = "0x30C0D30", VA = "0x1830C2730")]
	private bool SetInlineRotate(StyleRotate inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x30C0F30", Offset = "0x30BF530", VA = "0x1830C0F30")]
	private void ApplyStyleRotate(StyleRotate rotate)
	{
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x30C2130", Offset = "0x30C0730", VA = "0x1830C2130")]
	private bool SetInlineBackgroundSize(StyleBackgroundSize inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x30C09A0", Offset = "0x30BEFA0", VA = "0x1830C09A0")]
	private void ApplyStyleBackgroundSize(StyleBackgroundSize backgroundSize)
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x30C25C0", Offset = "0x30C0BC0", VA = "0x1830C25C0")]
	private bool SetInlineFilter(StyleList<FilterFunction> inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x30C0D60", Offset = "0x30BF360", VA = "0x1830C0D60")]
	private void ApplyStyleFilter(StyleList<FilterFunction> filter)
	{
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x30C1930", Offset = "0x30BFF30", VA = "0x1830C1930")]
	private void ApplyStyleValue(StyleValue value)
	{
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x30C1BB0", Offset = "0x30C01B0", VA = "0x1830C1BB0")]
	private void ApplyStyleValue(StyleValueManaged value)
	{
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x30C2040", Offset = "0x30C0640", VA = "0x1830C2040")]
	private bool RemoveInlineStyle(StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x30BF3B0", Offset = "0x30BD9B0", VA = "0x1830BF3B0")]
	private void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x30C4A60", Offset = "0x30C3060", VA = "0x1830C4A60")]
	public bool TryGetInlineCursor(ref StyleCursor value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x30C4B60", Offset = "0x30C3160", VA = "0x1830C4B60")]
	public bool TryGetInlineTextShadow(ref StyleTextShadow value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x30C4B40", Offset = "0x30C3140", VA = "0x1830C4B40")]
	public bool TryGetInlineTextAutoSize(ref StyleTextAutoSize value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x30C4B80", Offset = "0x30C3180", VA = "0x1830C4B80")]
	public bool TryGetInlineTransformOrigin(ref StyleTransformOrigin value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x30C4BB0", Offset = "0x30C31B0", VA = "0x1830C4BB0")]
	public bool TryGetInlineTranslate(ref StyleTranslate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x30C4AD0", Offset = "0x30C30D0", VA = "0x1830C4AD0")]
	public bool TryGetInlineRotate(ref StyleRotate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x30C4B10", Offset = "0x30C3110", VA = "0x1830C4B10")]
	public bool TryGetInlineScale(ref StyleScale value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x30C4A30", Offset = "0x30C3030", VA = "0x1830C4A30")]
	public bool TryGetInlineBackgroundSize(ref StyleBackgroundSize value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x30C4AA0", Offset = "0x30C30A0", VA = "0x1830C4AA0")]
	public bool TryGetInlineFilter(ref StyleList<FilterFunction> value)
	{
		return default(bool);
	}
}
