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

[Token(Token = "0x2000309")]
internal class InlineStyleAccess : StyleValueCollection, IStyle
{
	[Token(Token = "0x200030A")]
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

	[Token(Token = "0x1700052D")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignContent
	{
		[Token(Token = "0x600161B")]
		[Address(RVA = "0x6AB3470", Offset = "0x6AB2470", VA = "0x6AB3470", Slot = "4")]
		get
		{
			return default(StyleEnum<Align>);
		}
		[Token(Token = "0x600161C")]
		[Address(RVA = "0x6AB3500", Offset = "0x6AB2500", VA = "0x6AB3500", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700052E")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignItems
	{
		[Token(Token = "0x600161D")]
		[Address(RVA = "0x6AB3600", Offset = "0x6AB2600", VA = "0x6AB3600", Slot = "6")]
		get
		{
			return default(StyleEnum<Align>);
		}
		[Token(Token = "0x600161E")]
		[Address(RVA = "0x6AB3690", Offset = "0x6AB2690", VA = "0x6AB3690", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700052F")]
	private StyleEnum<Align> UnityEngine_002EUIElements_002EIStyle_002EalignSelf
	{
		[Token(Token = "0x600161F")]
		[Address(RVA = "0x6AB3740", Offset = "0x6AB2740", VA = "0x6AB3740", Slot = "8")]
		get
		{
			return default(StyleEnum<Align>);
		}
		[Token(Token = "0x6001620")]
		[Address(RVA = "0x6AB37D0", Offset = "0x6AB27D0", VA = "0x6AB37D0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000530")]
	private StyleRatio UnityEngine_002EUIElements_002EIStyle_002EaspectRatio
	{
		[Token(Token = "0x6001621")]
		[Address(RVA = "0x6AB3880", Offset = "0x6AB2880", VA = "0x6AB3880", Slot = "10")]
		get
		{
			return default(StyleRatio);
		}
		[Token(Token = "0x6001622")]
		[Address(RVA = "0x6AB3890", Offset = "0x6AB2890", VA = "0x6AB3890", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000531")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EbackgroundColor
	{
		[Token(Token = "0x6001623")]
		[Address(RVA = "0x6AB3A50", Offset = "0x6AB2A50", VA = "0x6AB3A50", Slot = "12")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x6001624")]
		[Address(RVA = "0x6AB3A90", Offset = "0x6AB2A90", VA = "0x6AB3A90", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000532")]
	private StyleBackground UnityEngine_002EUIElements_002EIStyle_002EbackgroundImage
	{
		[Token(Token = "0x6001625")]
		[Address(RVA = "0x6AB3C50", Offset = "0x6AB2C50", VA = "0x6AB3C50", Slot = "14")]
		get
		{
			return default(StyleBackground);
		}
		[Token(Token = "0x6001626")]
		[Address(RVA = "0x6AB3C90", Offset = "0x6AB2C90", VA = "0x6AB3C90", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000533")]
	private StyleBackgroundPosition UnityEngine_002EUIElements_002EIStyle_002EbackgroundPositionX
	{
		[Token(Token = "0x6001627")]
		[Address(RVA = "0x6AB4400", Offset = "0x6AB3400", VA = "0x6AB4400", Slot = "16")]
		get
		{
			return default(StyleBackgroundPosition);
		}
		[Token(Token = "0x6001628")]
		[Address(RVA = "0x6AB4410", Offset = "0x6AB3410", VA = "0x6AB4410", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000534")]
	private StyleBackgroundPosition UnityEngine_002EUIElements_002EIStyle_002EbackgroundPositionY
	{
		[Token(Token = "0x6001629")]
		[Address(RVA = "0x6AB4590", Offset = "0x6AB3590", VA = "0x6AB4590", Slot = "18")]
		get
		{
			return default(StyleBackgroundPosition);
		}
		[Token(Token = "0x600162A")]
		[Address(RVA = "0x6AB45A0", Offset = "0x6AB35A0", VA = "0x6AB45A0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000535")]
	private StyleBackgroundRepeat UnityEngine_002EUIElements_002EIStyle_002EbackgroundRepeat
	{
		[Token(Token = "0x600162B")]
		[Address(RVA = "0x6AB45F0", Offset = "0x6AB35F0", VA = "0x6AB45F0", Slot = "20")]
		get
		{
			return default(StyleBackgroundRepeat);
		}
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x6AB4600", Offset = "0x6AB3600", VA = "0x6AB4600", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x17000536")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderBottomColor
	{
		[Token(Token = "0x600162D")]
		[Address(RVA = "0x6AB4770", Offset = "0x6AB3770", VA = "0x6AB4770", Slot = "24")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x600162E")]
		[Address(RVA = "0x6AB47B0", Offset = "0x6AB37B0", VA = "0x6AB47B0", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000537")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderBottomLeftRadius
	{
		[Token(Token = "0x600162F")]
		[Address(RVA = "0x6AB4820", Offset = "0x6AB3820", VA = "0x6AB4820", Slot = "26")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001630")]
		[Address(RVA = "0x6AB4830", Offset = "0x6AB3830", VA = "0x6AB4830", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x17000538")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderBottomRightRadius
	{
		[Token(Token = "0x6001631")]
		[Address(RVA = "0x6AB49B0", Offset = "0x6AB39B0", VA = "0x6AB49B0", Slot = "28")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001632")]
		[Address(RVA = "0x6AB49C0", Offset = "0x6AB39C0", VA = "0x6AB49C0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x17000539")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderBottomWidth
	{
		[Token(Token = "0x6001633")]
		[Address(RVA = "0x6AB4A10", Offset = "0x6AB3A10", VA = "0x6AB4A10", Slot = "30")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001634")]
		[Address(RVA = "0x6AB4A20", Offset = "0x6AB3A20", VA = "0x6AB4A20", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x1700053A")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderLeftColor
	{
		[Token(Token = "0x6001635")]
		[Address(RVA = "0x6AB4BC0", Offset = "0x6AB3BC0", VA = "0x6AB4BC0", Slot = "32")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x6001636")]
		[Address(RVA = "0x6AB4C00", Offset = "0x6AB3C00", VA = "0x6AB4C00", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x1700053B")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderLeftWidth
	{
		[Token(Token = "0x6001637")]
		[Address(RVA = "0x6AB4C70", Offset = "0x6AB3C70", VA = "0x6AB4C70", Slot = "34")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001638")]
		[Address(RVA = "0x6AB4C80", Offset = "0x6AB3C80", VA = "0x6AB4C80", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700053C")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderRightColor
	{
		[Token(Token = "0x6001639")]
		[Address(RVA = "0x6AB4D00", Offset = "0x6AB3D00", VA = "0x6AB4D00", Slot = "36")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x600163A")]
		[Address(RVA = "0x6AB4D40", Offset = "0x6AB3D40", VA = "0x6AB4D40", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x1700053D")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderRightWidth
	{
		[Token(Token = "0x600163B")]
		[Address(RVA = "0x6AB4DB0", Offset = "0x6AB3DB0", VA = "0x6AB4DB0", Slot = "38")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x600163C")]
		[Address(RVA = "0x6AB4DC0", Offset = "0x6AB3DC0", VA = "0x6AB4DC0", Slot = "39")]
		set
		{
		}
	}

	[Token(Token = "0x1700053E")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EborderTopColor
	{
		[Token(Token = "0x600163D")]
		[Address(RVA = "0x6AB4E40", Offset = "0x6AB3E40", VA = "0x6AB4E40", Slot = "40")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x600163E")]
		[Address(RVA = "0x6AB4E80", Offset = "0x6AB3E80", VA = "0x6AB4E80", Slot = "41")]
		set
		{
		}
	}

	[Token(Token = "0x1700053F")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderTopLeftRadius
	{
		[Token(Token = "0x600163F")]
		[Address(RVA = "0x6AB4EF0", Offset = "0x6AB3EF0", VA = "0x6AB4EF0", Slot = "42")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001640")]
		[Address(RVA = "0x6AB4F00", Offset = "0x6AB3F00", VA = "0x6AB4F00", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000540")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EborderTopRightRadius
	{
		[Token(Token = "0x6001641")]
		[Address(RVA = "0x6AB4F50", Offset = "0x6AB3F50", VA = "0x6AB4F50", Slot = "44")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001642")]
		[Address(RVA = "0x6AB4F60", Offset = "0x6AB3F60", VA = "0x6AB4F60", Slot = "45")]
		set
		{
		}
	}

	[Token(Token = "0x17000541")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EborderTopWidth
	{
		[Token(Token = "0x6001643")]
		[Address(RVA = "0x6AB4FB0", Offset = "0x6AB3FB0", VA = "0x6AB4FB0", Slot = "46")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001644")]
		[Address(RVA = "0x6AB4FC0", Offset = "0x6AB3FC0", VA = "0x6AB4FC0", Slot = "47")]
		set
		{
		}
	}

	[Token(Token = "0x17000542")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Ebottom
	{
		[Token(Token = "0x6001645")]
		[Address(RVA = "0x6AB5040", Offset = "0x6AB4040", VA = "0x6AB5040", Slot = "48")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001646")]
		[Address(RVA = "0x6AB5050", Offset = "0x6AB4050", VA = "0x6AB5050", Slot = "49")]
		set
		{
		}
	}

	[Token(Token = "0x17000543")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002Ecolor
	{
		[Token(Token = "0x6001647")]
		[Address(RVA = "0x6AB50E0", Offset = "0x6AB40E0", VA = "0x6AB50E0", Slot = "50")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x6001648")]
		[Address(RVA = "0x6AB5120", Offset = "0x6AB4120", VA = "0x6AB5120", Slot = "51")]
		set
		{
		}
	}

	[Token(Token = "0x17000544")]
	private StyleEnum<DisplayStyle> UnityEngine_002EUIElements_002EIStyle_002Edisplay
	{
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x6AB5190", Offset = "0x6AB4190", VA = "0x6AB5190", Slot = "54")]
		get
		{
			return default(StyleEnum<DisplayStyle>);
		}
		[Token(Token = "0x600164A")]
		[Address(RVA = "0x6AB5220", Offset = "0x6AB4220", VA = "0x6AB5220", Slot = "55")]
		set
		{
		}
	}

	[Token(Token = "0x17000545")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EflexBasis
	{
		[Token(Token = "0x600164B")]
		[Address(RVA = "0x6AB52D0", Offset = "0x6AB42D0", VA = "0x6AB52D0", Slot = "58")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600164C")]
		[Address(RVA = "0x6AB52E0", Offset = "0x6AB42E0", VA = "0x6AB52E0", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x17000546")]
	private StyleEnum<FlexDirection> UnityEngine_002EUIElements_002EIStyle_002EflexDirection
	{
		[Token(Token = "0x600164D")]
		[Address(RVA = "0x6AB5370", Offset = "0x6AB4370", VA = "0x6AB5370", Slot = "60")]
		get
		{
			return default(StyleEnum<FlexDirection>);
		}
		[Token(Token = "0x600164E")]
		[Address(RVA = "0x6AB5400", Offset = "0x6AB4400", VA = "0x6AB5400", Slot = "61")]
		set
		{
		}
	}

	[Token(Token = "0x17000547")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EflexGrow
	{
		[Token(Token = "0x600164F")]
		[Address(RVA = "0x6AB54B0", Offset = "0x6AB44B0", VA = "0x6AB54B0", Slot = "62")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001650")]
		[Address(RVA = "0x6AB54C0", Offset = "0x6AB44C0", VA = "0x6AB54C0", Slot = "63")]
		set
		{
		}
	}

	[Token(Token = "0x17000548")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EflexShrink
	{
		[Token(Token = "0x6001651")]
		[Address(RVA = "0x6AB5540", Offset = "0x6AB4540", VA = "0x6AB5540", Slot = "64")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001652")]
		[Address(RVA = "0x6AB5550", Offset = "0x6AB4550", VA = "0x6AB5550", Slot = "65")]
		set
		{
		}
	}

	[Token(Token = "0x17000549")]
	private StyleEnum<Wrap> UnityEngine_002EUIElements_002EIStyle_002EflexWrap
	{
		[Token(Token = "0x6001653")]
		[Address(RVA = "0x6AB55D0", Offset = "0x6AB45D0", VA = "0x6AB55D0", Slot = "66")]
		get
		{
			return default(StyleEnum<Wrap>);
		}
		[Token(Token = "0x6001654")]
		[Address(RVA = "0x6AB5660", Offset = "0x6AB4660", VA = "0x6AB5660", Slot = "67")]
		set
		{
		}
	}

	[Token(Token = "0x1700054A")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EfontSize
	{
		[Token(Token = "0x6001655")]
		[Address(RVA = "0x6AB5710", Offset = "0x6AB4710", VA = "0x6AB5710", Slot = "68")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x6AB5720", Offset = "0x6AB4720", VA = "0x6AB5720", Slot = "69")]
		set
		{
		}
	}

	[Token(Token = "0x1700054B")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eheight
	{
		[Token(Token = "0x6001657")]
		[Address(RVA = "0x6AB5770", Offset = "0x6AB4770", VA = "0x6AB5770", Slot = "70")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001658")]
		[Address(RVA = "0x6AB5780", Offset = "0x6AB4780", VA = "0x6AB5780", Slot = "71")]
		set
		{
		}
	}

	[Token(Token = "0x1700054C")]
	private StyleEnum<Justify> UnityEngine_002EUIElements_002EIStyle_002EjustifyContent
	{
		[Token(Token = "0x6001659")]
		[Address(RVA = "0x6AB5810", Offset = "0x6AB4810", VA = "0x6AB5810", Slot = "72")]
		get
		{
			return default(StyleEnum<Justify>);
		}
		[Token(Token = "0x600165A")]
		[Address(RVA = "0x6AB58A0", Offset = "0x6AB48A0", VA = "0x6AB58A0", Slot = "73")]
		set
		{
		}
	}

	[Token(Token = "0x1700054D")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eleft
	{
		[Token(Token = "0x600165B")]
		[Address(RVA = "0x6AB5950", Offset = "0x6AB4950", VA = "0x6AB5950", Slot = "74")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600165C")]
		[Address(RVA = "0x6AB5960", Offset = "0x6AB4960", VA = "0x6AB5960", Slot = "75")]
		set
		{
		}
	}

	[Token(Token = "0x1700054E")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EletterSpacing
	{
		[Token(Token = "0x600165D")]
		[Address(RVA = "0x6AB59F0", Offset = "0x6AB49F0", VA = "0x6AB59F0", Slot = "76")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600165E")]
		[Address(RVA = "0x6AB5A00", Offset = "0x6AB4A00", VA = "0x6AB5A00", Slot = "77")]
		set
		{
		}
	}

	[Token(Token = "0x1700054F")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginBottom
	{
		[Token(Token = "0x600165F")]
		[Address(RVA = "0x6AB5A50", Offset = "0x6AB4A50", VA = "0x6AB5A50", Slot = "78")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001660")]
		[Address(RVA = "0x6AB5A60", Offset = "0x6AB4A60", VA = "0x6AB5A60", Slot = "79")]
		set
		{
		}
	}

	[Token(Token = "0x17000550")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginLeft
	{
		[Token(Token = "0x6001661")]
		[Address(RVA = "0x6AB5AF0", Offset = "0x6AB4AF0", VA = "0x6AB5AF0", Slot = "80")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001662")]
		[Address(RVA = "0x6AB5B00", Offset = "0x6AB4B00", VA = "0x6AB5B00", Slot = "81")]
		set
		{
		}
	}

	[Token(Token = "0x17000551")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginRight
	{
		[Token(Token = "0x6001663")]
		[Address(RVA = "0x6AB5B90", Offset = "0x6AB4B90", VA = "0x6AB5B90", Slot = "82")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001664")]
		[Address(RVA = "0x6AB5BA0", Offset = "0x6AB4BA0", VA = "0x6AB5BA0", Slot = "83")]
		set
		{
		}
	}

	[Token(Token = "0x17000552")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmarginTop
	{
		[Token(Token = "0x6001665")]
		[Address(RVA = "0x6AB5C30", Offset = "0x6AB4C30", VA = "0x6AB5C30", Slot = "84")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001666")]
		[Address(RVA = "0x6AB5C40", Offset = "0x6AB4C40", VA = "0x6AB5C40", Slot = "85")]
		set
		{
		}
	}

	[Token(Token = "0x17000553")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmaxHeight
	{
		[Token(Token = "0x6001667")]
		[Address(RVA = "0x6AB5CD0", Offset = "0x6AB4CD0", VA = "0x6AB5CD0", Slot = "86")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001668")]
		[Address(RVA = "0x6AB5CE0", Offset = "0x6AB4CE0", VA = "0x6AB5CE0", Slot = "87")]
		set
		{
		}
	}

	[Token(Token = "0x17000554")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EmaxWidth
	{
		[Token(Token = "0x6001669")]
		[Address(RVA = "0x6AB5D70", Offset = "0x6AB4D70", VA = "0x6AB5D70", Slot = "88")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600166A")]
		[Address(RVA = "0x6AB5D80", Offset = "0x6AB4D80", VA = "0x6AB5D80", Slot = "89")]
		set
		{
		}
	}

	[Token(Token = "0x17000555")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EminHeight
	{
		[Token(Token = "0x600166B")]
		[Address(RVA = "0x6AB5E10", Offset = "0x6AB4E10", VA = "0x6AB5E10", Slot = "90")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600166C")]
		[Address(RVA = "0x6AB5E20", Offset = "0x6AB4E20", VA = "0x6AB5E20", Slot = "91")]
		set
		{
		}
	}

	[Token(Token = "0x17000556")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EminWidth
	{
		[Token(Token = "0x600166D")]
		[Address(RVA = "0x6AB5EB0", Offset = "0x6AB4EB0", VA = "0x6AB5EB0", Slot = "92")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600166E")]
		[Address(RVA = "0x6AB5EC0", Offset = "0x6AB4EC0", VA = "0x6AB5EC0", Slot = "93")]
		set
		{
		}
	}

	[Token(Token = "0x17000557")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002Eopacity
	{
		[Token(Token = "0x600166F")]
		[Address(RVA = "0x6AB5F50", Offset = "0x6AB4F50", VA = "0x6AB5F50", Slot = "94")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x6001670")]
		[Address(RVA = "0x6AB5F60", Offset = "0x6AB4F60", VA = "0x6AB5F60", Slot = "95")]
		set
		{
		}
	}

	[Token(Token = "0x17000558")]
	private StyleEnum<Overflow> UnityEngine_002EUIElements_002EIStyle_002Eoverflow
	{
		[Token(Token = "0x6001671")]
		[Address(RVA = "0x6AB5FB0", Offset = "0x6AB4FB0", VA = "0x6AB5FB0", Slot = "96")]
		get
		{
			return default(StyleEnum<Overflow>);
		}
		[Token(Token = "0x6001672")]
		[Address(RVA = "0x6AB6040", Offset = "0x6AB5040", VA = "0x6AB6040", Slot = "97")]
		set
		{
		}
	}

	[Token(Token = "0x17000559")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingBottom
	{
		[Token(Token = "0x6001673")]
		[Address(RVA = "0x6AB6160", Offset = "0x6AB5160", VA = "0x6AB6160", Slot = "98")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001674")]
		[Address(RVA = "0x6AB6170", Offset = "0x6AB5170", VA = "0x6AB6170", Slot = "99")]
		set
		{
		}
	}

	[Token(Token = "0x1700055A")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingLeft
	{
		[Token(Token = "0x6001675")]
		[Address(RVA = "0x6AB6200", Offset = "0x6AB5200", VA = "0x6AB6200", Slot = "100")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001676")]
		[Address(RVA = "0x6AB6210", Offset = "0x6AB5210", VA = "0x6AB6210", Slot = "101")]
		set
		{
		}
	}

	[Token(Token = "0x1700055B")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingRight
	{
		[Token(Token = "0x6001677")]
		[Address(RVA = "0x6AB62A0", Offset = "0x6AB52A0", VA = "0x6AB62A0", Slot = "102")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001678")]
		[Address(RVA = "0x6AB62B0", Offset = "0x6AB52B0", VA = "0x6AB62B0", Slot = "103")]
		set
		{
		}
	}

	[Token(Token = "0x1700055C")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EpaddingTop
	{
		[Token(Token = "0x6001679")]
		[Address(RVA = "0x6AB6340", Offset = "0x6AB5340", VA = "0x6AB6340", Slot = "104")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600167A")]
		[Address(RVA = "0x6AB6350", Offset = "0x6AB5350", VA = "0x6AB6350", Slot = "105")]
		set
		{
		}
	}

	[Token(Token = "0x1700055D")]
	private StyleEnum<Position> UnityEngine_002EUIElements_002EIStyle_002Eposition
	{
		[Token(Token = "0x600167B")]
		[Address(RVA = "0x6AB63E0", Offset = "0x6AB53E0", VA = "0x6AB63E0", Slot = "106")]
		get
		{
			return default(StyleEnum<Position>);
		}
		[Token(Token = "0x600167C")]
		[Address(RVA = "0x6AB6470", Offset = "0x6AB5470", VA = "0x6AB6470", Slot = "107")]
		set
		{
		}
	}

	[Token(Token = "0x1700055E")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Eright
	{
		[Token(Token = "0x600167D")]
		[Address(RVA = "0x6AB6520", Offset = "0x6AB5520", VA = "0x6AB6520", Slot = "108")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600167E")]
		[Address(RVA = "0x6AB6530", Offset = "0x6AB5530", VA = "0x6AB6530", Slot = "109")]
		set
		{
		}
	}

	[Token(Token = "0x1700055F")]
	private StyleEnum<TextOverflow> UnityEngine_002EUIElements_002EIStyle_002EtextOverflow
	{
		[Token(Token = "0x600167F")]
		[Address(RVA = "0x6AB65C0", Offset = "0x6AB55C0", VA = "0x6AB65C0", Slot = "114")]
		get
		{
			return default(StyleEnum<TextOverflow>);
		}
		[Token(Token = "0x6001680")]
		[Address(RVA = "0x6AB6650", Offset = "0x6AB5650", VA = "0x6AB6650", Slot = "115")]
		set
		{
		}
	}

	[Token(Token = "0x17000560")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Etop
	{
		[Token(Token = "0x6001681")]
		[Address(RVA = "0x6AB66E0", Offset = "0x6AB56E0", VA = "0x6AB66E0", Slot = "118")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x6001682")]
		[Address(RVA = "0x6AB66F0", Offset = "0x6AB56F0", VA = "0x6AB66F0", Slot = "119")]
		set
		{
		}
	}

	[Token(Token = "0x17000561")]
	private StyleList<TimeValue> UnityEngine_002EUIElements_002EIStyle_002EtransitionDelay
	{
		[Token(Token = "0x6001683")]
		[Address(RVA = "0x6AB6780", Offset = "0x6AB5780", VA = "0x6AB6780", Slot = "122")]
		get
		{
			return default(StyleList<TimeValue>);
		}
		[Token(Token = "0x6001684")]
		[Address(RVA = "0x6AB67C0", Offset = "0x6AB57C0", VA = "0x6AB67C0", Slot = "123")]
		set
		{
		}
	}

	[Token(Token = "0x17000562")]
	private StyleList<TimeValue> UnityEngine_002EUIElements_002EIStyle_002EtransitionDuration
	{
		[Token(Token = "0x6001685")]
		[Address(RVA = "0x6AB6850", Offset = "0x6AB5850", VA = "0x6AB6850", Slot = "124")]
		get
		{
			return default(StyleList<TimeValue>);
		}
		[Token(Token = "0x6001686")]
		[Address(RVA = "0x6AB6890", Offset = "0x6AB5890", VA = "0x6AB6890", Slot = "125")]
		set
		{
		}
	}

	[Token(Token = "0x17000563")]
	private StyleList<StylePropertyName> UnityEngine_002EUIElements_002EIStyle_002EtransitionProperty
	{
		[Token(Token = "0x6001687")]
		[Address(RVA = "0x6AB6920", Offset = "0x6AB5920", VA = "0x6AB6920", Slot = "126")]
		get
		{
			return default(StyleList<StylePropertyName>);
		}
		[Token(Token = "0x6001688")]
		[Address(RVA = "0x6AB6960", Offset = "0x6AB5960", VA = "0x6AB6960", Slot = "127")]
		set
		{
		}
	}

	[Token(Token = "0x17000564")]
	private StyleList<EasingFunction> UnityEngine_002EUIElements_002EIStyle_002EtransitionTimingFunction
	{
		[Token(Token = "0x6001689")]
		[Address(RVA = "0x6AB69F0", Offset = "0x6AB59F0", VA = "0x6AB69F0", Slot = "128")]
		get
		{
			return default(StyleList<EasingFunction>);
		}
		[Token(Token = "0x600168A")]
		[Address(RVA = "0x6AB6A30", Offset = "0x6AB5A30", VA = "0x6AB6A30", Slot = "129")]
		set
		{
		}
	}

	[Token(Token = "0x17000565")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EunityBackgroundImageTintColor
	{
		[Token(Token = "0x600168B")]
		[Address(RVA = "0x6AB6AC0", Offset = "0x6AB5AC0", VA = "0x6AB6AC0", Slot = "132")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x600168C")]
		[Address(RVA = "0x6AB6B00", Offset = "0x6AB5B00", VA = "0x6AB6B00", Slot = "133")]
		set
		{
		}
	}

	[Token(Token = "0x17000566")]
	private StyleEnum<EditorTextRenderingMode> UnityEngine_002EUIElements_002EIStyle_002EunityEditorTextRenderingMode
	{
		[Token(Token = "0x600168D")]
		[Address(RVA = "0x6AB6B70", Offset = "0x6AB5B70", VA = "0x6AB6B70", Slot = "134")]
		get
		{
			return default(StyleEnum<EditorTextRenderingMode>);
		}
		[Token(Token = "0x600168E")]
		[Address(RVA = "0x6AB6C00", Offset = "0x6AB5C00", VA = "0x6AB6C00", Slot = "135")]
		set
		{
		}
	}

	[Token(Token = "0x17000567")]
	private StyleFont UnityEngine_002EUIElements_002EIStyle_002EunityFont
	{
		[Token(Token = "0x600168F")]
		[Address(RVA = "0x6AB6C90", Offset = "0x6AB5C90", VA = "0x6AB6C90", Slot = "136")]
		get
		{
			return default(StyleFont);
		}
		[Token(Token = "0x6001690")]
		[Address(RVA = "0x6AB6CA0", Offset = "0x6AB5CA0", VA = "0x6AB6CA0", Slot = "137")]
		set
		{
		}
	}

	[Token(Token = "0x17000568")]
	private StyleFontDefinition UnityEngine_002EUIElements_002EIStyle_002EunityFontDefinition
	{
		[Token(Token = "0x6001691")]
		[Address(RVA = "0x6AB6F10", Offset = "0x6AB5F10", VA = "0x6AB6F10", Slot = "138")]
		get
		{
			return default(StyleFontDefinition);
		}
		[Token(Token = "0x6001692")]
		[Address(RVA = "0x6AB6F50", Offset = "0x6AB5F50", VA = "0x6AB6F50", Slot = "139")]
		set
		{
		}
	}

	[Token(Token = "0x17000569")]
	private StyleEnum<FontStyle> UnityEngine_002EUIElements_002EIStyle_002EunityFontStyleAndWeight
	{
		[Token(Token = "0x6001693")]
		[Address(RVA = "0x6AB72C0", Offset = "0x6AB62C0", VA = "0x6AB72C0", Slot = "140")]
		get
		{
			return default(StyleEnum<FontStyle>);
		}
		[Token(Token = "0x6001694")]
		[Address(RVA = "0x6AB7350", Offset = "0x6AB6350", VA = "0x6AB7350", Slot = "141")]
		set
		{
		}
	}

	[Token(Token = "0x1700056A")]
	private StyleMaterialDefinition UnityEngine_002EUIElements_002EIStyle_002EunityMaterial
	{
		[Token(Token = "0x6001695")]
		[Address(RVA = "0x6AB73E0", Offset = "0x6AB63E0", VA = "0x6AB73E0", Slot = "142")]
		get
		{
			return default(StyleMaterialDefinition);
		}
		[Token(Token = "0x6001696")]
		[Address(RVA = "0x6AB7420", Offset = "0x6AB6420", VA = "0x6AB7420", Slot = "143")]
		set
		{
		}
	}

	[Token(Token = "0x1700056B")]
	private StyleEnum<OverflowClipBox> UnityEngine_002EUIElements_002EIStyle_002EunityOverflowClipBox
	{
		[Token(Token = "0x6001697")]
		[Address(RVA = "0x6AB76E0", Offset = "0x6AB66E0", VA = "0x6AB76E0", Slot = "144")]
		get
		{
			return default(StyleEnum<OverflowClipBox>);
		}
		[Token(Token = "0x6001698")]
		[Address(RVA = "0x6AB7770", Offset = "0x6AB6770", VA = "0x6AB7770", Slot = "145")]
		set
		{
		}
	}

	[Token(Token = "0x1700056C")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EunityParagraphSpacing
	{
		[Token(Token = "0x6001699")]
		[Address(RVA = "0x6AB7800", Offset = "0x6AB6800", VA = "0x6AB7800", Slot = "146")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x600169A")]
		[Address(RVA = "0x6AB7810", Offset = "0x6AB6810", VA = "0x6AB7810", Slot = "147")]
		set
		{
		}
	}

	[Token(Token = "0x1700056D")]
	private StyleInt UnityEngine_002EUIElements_002EIStyle_002EunitySliceBottom
	{
		[Token(Token = "0x600169B")]
		[Address(RVA = "0x6AB7860", Offset = "0x6AB6860", VA = "0x6AB7860", Slot = "148")]
		get
		{
			return default(StyleInt);
		}
		[Token(Token = "0x600169C")]
		[Address(RVA = "0x6AB7870", Offset = "0x6AB6870", VA = "0x6AB7870", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x1700056E")]
	private StyleInt UnityEngine_002EUIElements_002EIStyle_002EunitySliceLeft
	{
		[Token(Token = "0x600169D")]
		[Address(RVA = "0x6AB79F0", Offset = "0x6AB69F0", VA = "0x6AB79F0", Slot = "150")]
		get
		{
			return default(StyleInt);
		}
		[Token(Token = "0x600169E")]
		[Address(RVA = "0x6AB7A00", Offset = "0x6AB6A00", VA = "0x6AB7A00", Slot = "151")]
		set
		{
		}
	}

	[Token(Token = "0x1700056F")]
	private StyleInt UnityEngine_002EUIElements_002EIStyle_002EunitySliceRight
	{
		[Token(Token = "0x600169F")]
		[Address(RVA = "0x6AB7A50", Offset = "0x6AB6A50", VA = "0x6AB7A50", Slot = "152")]
		get
		{
			return default(StyleInt);
		}
		[Token(Token = "0x60016A0")]
		[Address(RVA = "0x6AB7A60", Offset = "0x6AB6A60", VA = "0x6AB7A60", Slot = "153")]
		set
		{
		}
	}

	[Token(Token = "0x17000570")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EunitySliceScale
	{
		[Token(Token = "0x60016A1")]
		[Address(RVA = "0x6AB7AB0", Offset = "0x6AB6AB0", VA = "0x6AB7AB0", Slot = "154")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x60016A2")]
		[Address(RVA = "0x6AB7AC0", Offset = "0x6AB6AC0", VA = "0x6AB7AC0", Slot = "155")]
		set
		{
		}
	}

	[Token(Token = "0x17000571")]
	private StyleInt UnityEngine_002EUIElements_002EIStyle_002EunitySliceTop
	{
		[Token(Token = "0x60016A3")]
		[Address(RVA = "0x6AB7B10", Offset = "0x6AB6B10", VA = "0x6AB7B10", Slot = "156")]
		get
		{
			return default(StyleInt);
		}
		[Token(Token = "0x60016A4")]
		[Address(RVA = "0x6AB7B20", Offset = "0x6AB6B20", VA = "0x6AB7B20", Slot = "157")]
		set
		{
		}
	}

	[Token(Token = "0x17000572")]
	private StyleEnum<SliceType> UnityEngine_002EUIElements_002EIStyle_002EunitySliceType
	{
		[Token(Token = "0x60016A5")]
		[Address(RVA = "0x6AB7B70", Offset = "0x6AB6B70", VA = "0x6AB7B70", Slot = "158")]
		get
		{
			return default(StyleEnum<SliceType>);
		}
		[Token(Token = "0x60016A6")]
		[Address(RVA = "0x6AB7C00", Offset = "0x6AB6C00", VA = "0x6AB7C00", Slot = "159")]
		set
		{
		}
	}

	[Token(Token = "0x17000573")]
	private StyleEnum<TextAnchor> UnityEngine_002EUIElements_002EIStyle_002EunityTextAlign
	{
		[Token(Token = "0x60016A7")]
		[Address(RVA = "0x6AB7C90", Offset = "0x6AB6C90", VA = "0x6AB7C90", Slot = "160")]
		get
		{
			return default(StyleEnum<TextAnchor>);
		}
		[Token(Token = "0x60016A8")]
		[Address(RVA = "0x6AB7D20", Offset = "0x6AB6D20", VA = "0x6AB7D20", Slot = "161")]
		set
		{
		}
	}

	[Token(Token = "0x17000574")]
	private StyleEnum<TextGeneratorType> UnityEngine_002EUIElements_002EIStyle_002EunityTextGenerator
	{
		[Token(Token = "0x60016A9")]
		[Address(RVA = "0x6AB7DB0", Offset = "0x6AB6DB0", VA = "0x6AB7DB0", Slot = "164")]
		get
		{
			return default(StyleEnum<TextGeneratorType>);
		}
		[Token(Token = "0x60016AA")]
		[Address(RVA = "0x6AB7E40", Offset = "0x6AB6E40", VA = "0x6AB7E40", Slot = "165")]
		set
		{
		}
	}

	[Token(Token = "0x17000575")]
	private StyleColor UnityEngine_002EUIElements_002EIStyle_002EunityTextOutlineColor
	{
		[Token(Token = "0x60016AB")]
		[Address(RVA = "0x6AB7ED0", Offset = "0x6AB6ED0", VA = "0x6AB7ED0", Slot = "166")]
		get
		{
			return default(StyleColor);
		}
		[Token(Token = "0x60016AC")]
		[Address(RVA = "0x6AB7F10", Offset = "0x6AB6F10", VA = "0x6AB7F10", Slot = "167")]
		set
		{
		}
	}

	[Token(Token = "0x17000576")]
	private StyleFloat UnityEngine_002EUIElements_002EIStyle_002EunityTextOutlineWidth
	{
		[Token(Token = "0x60016AD")]
		[Address(RVA = "0x6AB7F80", Offset = "0x6AB6F80", VA = "0x6AB7F80", Slot = "168")]
		get
		{
			return default(StyleFloat);
		}
		[Token(Token = "0x60016AE")]
		[Address(RVA = "0x6AB7F90", Offset = "0x6AB6F90", VA = "0x6AB7F90", Slot = "169")]
		set
		{
		}
	}

	[Token(Token = "0x17000577")]
	private StyleEnum<TextOverflowPosition> UnityEngine_002EUIElements_002EIStyle_002EunityTextOverflowPosition
	{
		[Token(Token = "0x60016AF")]
		[Address(RVA = "0x6AB7FE0", Offset = "0x6AB6FE0", VA = "0x6AB7FE0", Slot = "170")]
		get
		{
			return default(StyleEnum<TextOverflowPosition>);
		}
		[Token(Token = "0x60016B0")]
		[Address(RVA = "0x6AB8070", Offset = "0x6AB7070", VA = "0x6AB8070", Slot = "171")]
		set
		{
		}
	}

	[Token(Token = "0x17000578")]
	private StyleEnum<Visibility> UnityEngine_002EUIElements_002EIStyle_002Evisibility
	{
		[Token(Token = "0x60016B1")]
		[Address(RVA = "0x6AB8100", Offset = "0x6AB7100", VA = "0x6AB8100", Slot = "172")]
		get
		{
			return default(StyleEnum<Visibility>);
		}
		[Token(Token = "0x60016B2")]
		[Address(RVA = "0x6AB8190", Offset = "0x6AB7190", VA = "0x6AB8190", Slot = "173")]
		set
		{
		}
	}

	[Token(Token = "0x17000579")]
	private StyleEnum<WhiteSpace> UnityEngine_002EUIElements_002EIStyle_002EwhiteSpace
	{
		[Token(Token = "0x60016B3")]
		[Address(RVA = "0x6AB8220", Offset = "0x6AB7220", VA = "0x6AB8220", Slot = "174")]
		get
		{
			return default(StyleEnum<WhiteSpace>);
		}
		[Token(Token = "0x60016B4")]
		[Address(RVA = "0x6AB82B0", Offset = "0x6AB72B0", VA = "0x6AB82B0", Slot = "175")]
		set
		{
		}
	}

	[Token(Token = "0x1700057A")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002Ewidth
	{
		[Token(Token = "0x60016B5")]
		[Address(RVA = "0x6AB8340", Offset = "0x6AB7340", VA = "0x6AB8340", Slot = "176")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x60016B6")]
		[Address(RVA = "0x6AB8350", Offset = "0x6AB7350", VA = "0x6AB8350", Slot = "177")]
		set
		{
		}
	}

	[Token(Token = "0x1700057B")]
	private StyleLength UnityEngine_002EUIElements_002EIStyle_002EwordSpacing
	{
		[Token(Token = "0x60016B7")]
		[Address(RVA = "0x6AB83E0", Offset = "0x6AB73E0", VA = "0x6AB83E0", Slot = "178")]
		get
		{
			return default(StyleLength);
		}
		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x6AB83F0", Offset = "0x6AB73F0", VA = "0x6AB83F0", Slot = "179")]
		set
		{
		}
	}

	[Token(Token = "0x1700057C")]
	private VisualElement ve
	{
		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x6AB8440", Offset = "0x6AB7440", VA = "0x6AB8440")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x6AB8450", Offset = "0x6AB7450", VA = "0x6AB8450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700057D")]
	private StyleCursor UnityEngine_002EUIElements_002EIStyle_002Ecursor
	{
		[Token(Token = "0x60016C0")]
		[Address(RVA = "0x6AB9D30", Offset = "0x6AB8D30", VA = "0x6AB9D30", Slot = "52")]
		get
		{
			return default(StyleCursor);
		}
		[Token(Token = "0x60016C1")]
		[Address(RVA = "0x6AB9DE0", Offset = "0x6AB8DE0", VA = "0x6AB9DE0", Slot = "53")]
		set
		{
		}
	}

	[Token(Token = "0x1700057E")]
	private StyleTextShadow UnityEngine_002EUIElements_002EIStyle_002EtextShadow
	{
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x6AB9FF0", Offset = "0x6AB8FF0", VA = "0x6AB9FF0", Slot = "116")]
		get
		{
			return default(StyleTextShadow);
		}
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x6ABA070", Offset = "0x6AB9070", VA = "0x6ABA070", Slot = "117")]
		set
		{
		}
	}

	[Token(Token = "0x1700057F")]
	private StyleTextAutoSize UnityEngine_002EUIElements_002EIStyle_002EunityTextAutoSize
	{
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x6ABA270", Offset = "0x6AB9270", VA = "0x6ABA270", Slot = "162")]
		get
		{
			return default(StyleTextAutoSize);
		}
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x6ABA2F0", Offset = "0x6AB92F0", VA = "0x6ABA2F0", Slot = "163")]
		set
		{
		}
	}

	[Token(Token = "0x17000580")]
	private StyleBackgroundSize UnityEngine_002EUIElements_002EIStyle_002EbackgroundSize
	{
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x6ABA530", Offset = "0x6AB9530", VA = "0x6ABA530", Slot = "22")]
		get
		{
			return default(StyleBackgroundSize);
		}
		[Token(Token = "0x60016C7")]
		[Address(RVA = "0x6ABA5D0", Offset = "0x6AB95D0", VA = "0x6ABA5D0", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000581")]
	private StyleList<FilterFunction> UnityEngine_002EUIElements_002EIStyle_002Efilter
	{
		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x6ABA780", Offset = "0x6AB9780", VA = "0x6ABA780", Slot = "56")]
		get
		{
			return default(StyleList<FilterFunction>);
		}
		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x6ABA820", Offset = "0x6AB9820", VA = "0x6ABA820", Slot = "57")]
		set
		{
		}
	}

	[Token(Token = "0x17000582")]
	private StyleTransformOrigin UnityEngine_002EUIElements_002EIStyle_002EtransformOrigin
	{
		[Token(Token = "0x60016CD")]
		[Address(RVA = "0x6ABACE0", Offset = "0x6AB9CE0", VA = "0x6ABACE0", Slot = "120")]
		get
		{
			return default(StyleTransformOrigin);
		}
		[Token(Token = "0x60016CE")]
		[Address(RVA = "0x6ABAD80", Offset = "0x6AB9D80", VA = "0x6ABAD80", Slot = "121")]
		set
		{
		}
	}

	[Token(Token = "0x17000583")]
	private StyleTranslate UnityEngine_002EUIElements_002EIStyle_002Etranslate
	{
		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x6ABAF30", Offset = "0x6AB9F30", VA = "0x6ABAF30", Slot = "130")]
		get
		{
			return default(StyleTranslate);
		}
		[Token(Token = "0x60016D0")]
		[Address(RVA = "0x6ABAFC0", Offset = "0x6AB9FC0", VA = "0x6ABAFC0", Slot = "131")]
		set
		{
		}
	}

	[Token(Token = "0x17000584")]
	private StyleRotate UnityEngine_002EUIElements_002EIStyle_002Erotate
	{
		[Token(Token = "0x60016D1")]
		[Address(RVA = "0x6ABB180", Offset = "0x6ABA180", VA = "0x6ABB180", Slot = "110")]
		get
		{
			return default(StyleRotate);
		}
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x6ABB210", Offset = "0x6ABA210", VA = "0x6ABB210", Slot = "111")]
		set
		{
		}
	}

	[Token(Token = "0x17000585")]
	private StyleScale UnityEngine_002EUIElements_002EIStyle_002Escale
	{
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x6ABB3D0", Offset = "0x6ABA3D0", VA = "0x6ABB3D0", Slot = "112")]
		get
		{
			return default(StyleScale);
		}
		[Token(Token = "0x60016D4")]
		[Address(RVA = "0x6ABB450", Offset = "0x6ABA450", VA = "0x6ABB450", Slot = "113")]
		set
		{
		}
	}

	[Token(Token = "0x60016BB")]
	[Address(RVA = "0x6AB8460", Offset = "0x6AB7460", VA = "0x6AB8460")]
	public InlineStyleAccess(VisualElement ve)
	{
	}

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x6AB8490", Offset = "0x6AB7490", VA = "0x6AB8490", Slot = "1")]
	~InlineStyleAccess()
	{
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x6AB8580", Offset = "0x6AB7580", VA = "0x6AB8580")]
	public void SetInlineRule(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x60016BE")]
	[Address(RVA = "0x6AB9960", Offset = "0x6AB8960", VA = "0x6AB9960")]
	public bool IsValueSet(StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x6AB85E0", Offset = "0x6AB75E0", VA = "0x6AB85E0")]
	public void ApplyInlineStyles(ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x60016CA")]
	private StyleList<T> GetStyleList<T>(StylePropertyId id)
	{
		return default(StyleList<T>);
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x6ABA9B0", Offset = "0x6AB99B0", VA = "0x6ABA9B0")]
	private void SetStyleValueManaged(StyleValueManaged value)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x6ABAB70", Offset = "0x6AB9B70", VA = "0x6ABAB70")]
	private bool TryGetStyleValueManaged(StylePropertyId id, ref StyleValueManaged value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x6AB4460", Offset = "0x6AB3460", VA = "0x6AB4460")]
	private bool SetStyleValue(StylePropertyId id, StyleBackgroundPosition inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x6AB4650", Offset = "0x6AB3650", VA = "0x6AB4650")]
	private bool SetStyleValue(StylePropertyId id, StyleBackgroundRepeat inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x6AB4880", Offset = "0x6AB3880", VA = "0x6AB4880")]
	private bool SetStyleValue(StylePropertyId id, StyleLength inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x6AB4AA0", Offset = "0x6AB3AA0", VA = "0x6AB4AA0")]
	private bool SetStyleValue(StylePropertyId id, StyleFloat inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x6AB78C0", Offset = "0x6AB68C0", VA = "0x6AB78C0")]
	private bool SetStyleValue(StylePropertyId id, StyleInt inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x6AB3B00", Offset = "0x6AB2B00", VA = "0x6AB3B00")]
	private bool SetStyleValue(StylePropertyId id, StyleColor inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DB")]
	private bool SetStyleValue<T>(StylePropertyId id, StyleEnum<T> inlineValue) where T : struct, IConvertible
	{
		return default(bool);
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x6AB3D10", Offset = "0x6AB2D10", VA = "0x6AB3D10")]
	private bool SetStyleValue(StylePropertyId id, StyleBackground inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x6AB6FC0", Offset = "0x6AB5FC0", VA = "0x6AB6FC0")]
	private bool SetStyleValue(StylePropertyId id, StyleFontDefinition inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x6AB6CF0", Offset = "0x6AB5CF0", VA = "0x6AB6CF0")]
	private bool SetStyleValue(StylePropertyId id, StyleFont inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x6AB7490", Offset = "0x6AB6490", VA = "0x6AB7490")]
	private bool SetStyleValue(StylePropertyId id, StyleMaterialDefinition inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E0")]
	private bool SetStyleValue<T>(StylePropertyId id, StyleList<T> inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x6AB3910", Offset = "0x6AB2910", VA = "0x6AB3910")]
	private bool SetStyleValue(StylePropertyId id, StyleRatio inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x6AB9E50", Offset = "0x6AB8E50", VA = "0x6AB9E50")]
	private bool SetInlineCursor(StyleCursor inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x6ABB950", Offset = "0x6ABA950", VA = "0x6ABB950")]
	private void ApplyStyleCursor(StyleCursor cursor)
	{
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x6ABA0E0", Offset = "0x6AB90E0", VA = "0x6ABA0E0")]
	private bool SetInlineTextShadow(StyleTextShadow inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x6ABBB10", Offset = "0x6ABAB10", VA = "0x6ABBB10")]
	private void ApplyStyleTextShadow(StyleTextShadow textShadow)
	{
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x6ABA360", Offset = "0x6AB9360", VA = "0x6ABA360")]
	private bool SetInlineTextAutoSize(StyleTextAutoSize inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E7")]
	[Address(RVA = "0x6ABBD30", Offset = "0x6ABAD30", VA = "0x6ABBD30")]
	private void ApplyStyleTextAutoSize(StyleTextAutoSize textAutoSize)
	{
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x6ABADF0", Offset = "0x6AB9DF0", VA = "0x6ABADF0")]
	private bool SetInlineTransformOrigin(StyleTransformOrigin inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x6ABBD80", Offset = "0x6ABAD80", VA = "0x6ABBD80")]
	private void ApplyStyleTransformOrigin(StyleTransformOrigin transformOrigin)
	{
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x6ABB030", Offset = "0x6ABA030", VA = "0x6ABB030")]
	private bool SetInlineTranslate(StyleTranslate inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x6ABBF80", Offset = "0x6ABAF80", VA = "0x6ABBF80")]
	private void ApplyStyleTranslate(StyleTranslate translate)
	{
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x6ABB4B0", Offset = "0x6ABA4B0", VA = "0x6ABB4B0")]
	private bool SetInlineScale(StyleScale inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x6ABC180", Offset = "0x6ABB180", VA = "0x6ABC180")]
	private void ApplyStyleScale(StyleScale scale)
	{
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x6ABB280", Offset = "0x6ABA280", VA = "0x6ABB280")]
	private bool SetInlineRotate(StyleRotate inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x6ABC370", Offset = "0x6ABB370", VA = "0x6ABC370")]
	private void ApplyStyleRotate(StyleRotate rotate)
	{
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x6ABA640", Offset = "0x6AB9640", VA = "0x6ABA640")]
	private bool SetInlineBackgroundSize(StyleBackgroundSize inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x6ABC5C0", Offset = "0x6ABB5C0", VA = "0x6ABC5C0")]
	private void ApplyStyleBackgroundSize(StyleBackgroundSize backgroundSize)
	{
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x6ABA870", Offset = "0x6AB9870", VA = "0x6ABA870")]
	private bool SetInlineFilter(StyleList<FilterFunction> inlineValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x6ABC7C0", Offset = "0x6ABB7C0", VA = "0x6ABC7C0")]
	private void ApplyStyleFilter(StyleList<FilterFunction> filter)
	{
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x6ABB6B0", Offset = "0x6ABA6B0", VA = "0x6ABB6B0")]
	private void ApplyStyleValue(StyleValue value)
	{
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x6ABC9D0", Offset = "0x6ABB9D0", VA = "0x6ABC9D0")]
	private void ApplyStyleValue(StyleValueManaged value)
	{
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x6ABB5D0", Offset = "0x6ABA5D0", VA = "0x6ABB5D0")]
	private bool RemoveInlineStyle(StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x6ABCA90", Offset = "0x6ABBA90", VA = "0x6ABCA90")]
	private void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x6AB9DB0", Offset = "0x6AB8DB0", VA = "0x6AB9DB0")]
	public bool TryGetInlineCursor(ref StyleCursor value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x6ABA050", Offset = "0x6AB9050", VA = "0x6ABA050")]
	public bool TryGetInlineTextShadow(ref StyleTextShadow value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x6ABA2D0", Offset = "0x6AB92D0", VA = "0x6ABA2D0")]
	public bool TryGetInlineTextAutoSize(ref StyleTextAutoSize value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x6ABAD50", Offset = "0x6AB9D50", VA = "0x6ABAD50")]
	public bool TryGetInlineTransformOrigin(ref StyleTransformOrigin value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x6ABAF90", Offset = "0x6AB9F90", VA = "0x6ABAF90")]
	public bool TryGetInlineTranslate(ref StyleTranslate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x6ABB1E0", Offset = "0x6ABA1E0", VA = "0x6ABB1E0")]
	public bool TryGetInlineRotate(ref StyleRotate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x6ABB430", Offset = "0x6ABA430", VA = "0x6ABB430")]
	public bool TryGetInlineScale(ref StyleScale value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x6ABA5A0", Offset = "0x6AB95A0", VA = "0x6ABA5A0")]
	public bool TryGetInlineBackgroundSize(ref StyleBackgroundSize value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x6ABA7F0", Offset = "0x6AB97F0", VA = "0x6ABA7F0")]
	public bool TryGetInlineFilter(ref StyleList<FilterFunction> value)
	{
		return default(bool);
	}
}
