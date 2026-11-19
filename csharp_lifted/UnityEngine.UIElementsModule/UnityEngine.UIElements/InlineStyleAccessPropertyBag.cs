// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.InlineStyleAccessPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200030B")]
internal class InlineStyleAccessPropertyBag : PropertyBag<InlineStyleAccess>, INamedProperties<InlineStyleAccess>
{
	[Token(Token = "0x200030C")]
	private class AlignContentProperty : InlineStyleEnumProperty<Align>
	{
		[Token(Token = "0x17000586")]
		public override string Name
		{
			[Token(Token = "0x6001707")]
			[Address(RVA = "0x6AC1730", Offset = "0x6AC0730", VA = "0x6AC1730", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000587")]
		public override string ussName
		{
			[Token(Token = "0x6001708")]
			[Address(RVA = "0x6AC1760", Offset = "0x6AC0760", VA = "0x6AC1760", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000588")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001709")]
			[Address(RVA = "0x6AC1790", Offset = "0x6AC0790", VA = "0x6AC1790", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600170A")]
		[Address(RVA = "0x6AC17A0", Offset = "0x6AC07A0", VA = "0x6AC17A0", Slot = "14")]
		public override StyleEnum<Align> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Align>);
		}

		[Token(Token = "0x600170B")]
		[Address(RVA = "0x6AC1830", Offset = "0x6AC0830", VA = "0x6AC1830", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Align> value)
		{
		}

		[Token(Token = "0x600170C")]
		[Address(RVA = "0x6ABFCE0", Offset = "0x6ABECE0", VA = "0x6ABFCE0")]
		public AlignContentProperty()
		{
		}
	}

	[Token(Token = "0x200030D")]
	private class AlignItemsProperty : InlineStyleEnumProperty<Align>
	{
		[Token(Token = "0x17000589")]
		public override string Name
		{
			[Token(Token = "0x600170D")]
			[Address(RVA = "0x6AC18E0", Offset = "0x6AC08E0", VA = "0x6AC18E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700058A")]
		public override string ussName
		{
			[Token(Token = "0x600170E")]
			[Address(RVA = "0x6AC1910", Offset = "0x6AC0910", VA = "0x6AC1910", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700058B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600170F")]
			[Address(RVA = "0x6AC1940", Offset = "0x6AC0940", VA = "0x6AC1940", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001710")]
		[Address(RVA = "0x6AC1950", Offset = "0x6AC0950", VA = "0x6AC1950", Slot = "14")]
		public override StyleEnum<Align> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Align>);
		}

		[Token(Token = "0x6001711")]
		[Address(RVA = "0x6AC19F0", Offset = "0x6AC09F0", VA = "0x6AC19F0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Align> value)
		{
		}

		[Token(Token = "0x6001712")]
		[Address(RVA = "0x6ABFD20", Offset = "0x6ABED20", VA = "0x6ABFD20")]
		public AlignItemsProperty()
		{
		}
	}

	[Token(Token = "0x200030E")]
	private class AlignSelfProperty : InlineStyleEnumProperty<Align>
	{
		[Token(Token = "0x1700058C")]
		public override string Name
		{
			[Token(Token = "0x6001713")]
			[Address(RVA = "0x6AC1AA0", Offset = "0x6AC0AA0", VA = "0x6AC1AA0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700058D")]
		public override string ussName
		{
			[Token(Token = "0x6001714")]
			[Address(RVA = "0x6AC1AD0", Offset = "0x6AC0AD0", VA = "0x6AC1AD0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700058E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001715")]
			[Address(RVA = "0x6AC1B00", Offset = "0x6AC0B00", VA = "0x6AC1B00", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001716")]
		[Address(RVA = "0x6AC1B10", Offset = "0x6AC0B10", VA = "0x6AC1B10", Slot = "14")]
		public override StyleEnum<Align> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Align>);
		}

		[Token(Token = "0x6001717")]
		[Address(RVA = "0x6AC1BB0", Offset = "0x6AC0BB0", VA = "0x6AC1BB0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Align> value)
		{
		}

		[Token(Token = "0x6001718")]
		[Address(RVA = "0x6ABFD60", Offset = "0x6ABED60", VA = "0x6ABFD60")]
		public AlignSelfProperty()
		{
		}
	}

	[Token(Token = "0x200030F")]
	private class AspectRatioProperty : InlineStyleRatioProperty
	{
		[Token(Token = "0x1700058F")]
		public override string Name
		{
			[Token(Token = "0x6001719")]
			[Address(RVA = "0x6AC1C60", Offset = "0x6AC0C60", VA = "0x6AC1C60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000590")]
		public override string ussName
		{
			[Token(Token = "0x600171A")]
			[Address(RVA = "0x6AC1C90", Offset = "0x6AC0C90", VA = "0x6AC1C90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000591")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600171B")]
			[Address(RVA = "0x6AC1CC0", Offset = "0x6AC0CC0", VA = "0x6AC1CC0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600171C")]
		[Address(RVA = "0x6AC1CD0", Offset = "0x6AC0CD0", VA = "0x6AC1CD0", Slot = "14")]
		public override StyleRatio GetValue(ref InlineStyleAccess container)
		{
			return default(StyleRatio);
		}

		[Token(Token = "0x600171D")]
		[Address(RVA = "0x6AC1D70", Offset = "0x6AC0D70", VA = "0x6AC1D70", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleRatio value)
		{
		}

		[Token(Token = "0x600171E")]
		[Address(RVA = "0x6ABFDA0", Offset = "0x6ABEDA0", VA = "0x6ABFDA0")]
		public AspectRatioProperty()
		{
		}
	}

	[Token(Token = "0x2000310")]
	private class BackgroundColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x17000592")]
		public override string Name
		{
			[Token(Token = "0x600171F")]
			[Address(RVA = "0x6AC1E60", Offset = "0x6AC0E60", VA = "0x6AC1E60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000593")]
		public override string ussName
		{
			[Token(Token = "0x6001720")]
			[Address(RVA = "0x6AC1E90", Offset = "0x6AC0E90", VA = "0x6AC1E90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000594")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001721")]
			[Address(RVA = "0x6AC1EC0", Offset = "0x6AC0EC0", VA = "0x6AC1EC0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001722")]
		[Address(RVA = "0x6AC1ED0", Offset = "0x6AC0ED0", VA = "0x6AC1ED0", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001723")]
		[Address(RVA = "0x6AC1FA0", Offset = "0x6AC0FA0", VA = "0x6AC1FA0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001724")]
		[Address(RVA = "0x6ABFDE0", Offset = "0x6ABEDE0", VA = "0x6ABFDE0")]
		public BackgroundColorProperty()
		{
		}
	}

	[Token(Token = "0x2000311")]
	private class BackgroundImageProperty : InlineStyleBackgroundProperty
	{
		[Token(Token = "0x17000595")]
		public override string Name
		{
			[Token(Token = "0x6001725")]
			[Address(RVA = "0x6AC2080", Offset = "0x6AC1080", VA = "0x6AC2080", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000596")]
		public override string ussName
		{
			[Token(Token = "0x6001726")]
			[Address(RVA = "0x6AC20B0", Offset = "0x6AC10B0", VA = "0x6AC20B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000597")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001727")]
			[Address(RVA = "0x6AC20E0", Offset = "0x6AC10E0", VA = "0x6AC20E0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001728")]
		[Address(RVA = "0x6AC20F0", Offset = "0x6AC10F0", VA = "0x6AC20F0", Slot = "14")]
		public override StyleBackground GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackground);
		}

		[Token(Token = "0x6001729")]
		[Address(RVA = "0x6AC21C0", Offset = "0x6AC11C0", VA = "0x6AC21C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackground value)
		{
		}

		[Token(Token = "0x600172A")]
		[Address(RVA = "0x6ABFE20", Offset = "0x6ABEE20", VA = "0x6ABFE20")]
		public BackgroundImageProperty()
		{
		}
	}

	[Token(Token = "0x2000312")]
	private class BackgroundPositionXProperty : InlineStyleBackgroundPositionProperty
	{
		[Token(Token = "0x17000598")]
		public override string Name
		{
			[Token(Token = "0x600172B")]
			[Address(RVA = "0x6AC22A0", Offset = "0x6AC12A0", VA = "0x6AC22A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000599")]
		public override string ussName
		{
			[Token(Token = "0x600172C")]
			[Address(RVA = "0x6AC22D0", Offset = "0x6AC12D0", VA = "0x6AC22D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700059A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600172D")]
			[Address(RVA = "0x6AC2300", Offset = "0x6AC1300", VA = "0x6AC2300", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600172E")]
		[Address(RVA = "0x6AC2310", Offset = "0x6AC1310", VA = "0x6AC2310", Slot = "14")]
		public override StyleBackgroundPosition GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackgroundPosition);
		}

		[Token(Token = "0x600172F")]
		[Address(RVA = "0x6AC23B0", Offset = "0x6AC13B0", VA = "0x6AC23B0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackgroundPosition value)
		{
		}

		[Token(Token = "0x6001730")]
		[Address(RVA = "0x6ABFE60", Offset = "0x6ABEE60", VA = "0x6ABFE60")]
		public BackgroundPositionXProperty()
		{
		}
	}

	[Token(Token = "0x2000313")]
	private class BackgroundPositionYProperty : InlineStyleBackgroundPositionProperty
	{
		[Token(Token = "0x1700059B")]
		public override string Name
		{
			[Token(Token = "0x6001731")]
			[Address(RVA = "0x6AC24B0", Offset = "0x6AC14B0", VA = "0x6AC24B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700059C")]
		public override string ussName
		{
			[Token(Token = "0x6001732")]
			[Address(RVA = "0x6AC24E0", Offset = "0x6AC14E0", VA = "0x6AC24E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700059D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001733")]
			[Address(RVA = "0x6AC2510", Offset = "0x6AC1510", VA = "0x6AC2510", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001734")]
		[Address(RVA = "0x6AC2520", Offset = "0x6AC1520", VA = "0x6AC2520", Slot = "14")]
		public override StyleBackgroundPosition GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackgroundPosition);
		}

		[Token(Token = "0x6001735")]
		[Address(RVA = "0x6AC25C0", Offset = "0x6AC15C0", VA = "0x6AC25C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackgroundPosition value)
		{
		}

		[Token(Token = "0x6001736")]
		[Address(RVA = "0x6ABFEA0", Offset = "0x6ABEEA0", VA = "0x6ABFEA0")]
		public BackgroundPositionYProperty()
		{
		}
	}

	[Token(Token = "0x2000314")]
	private class BackgroundRepeatProperty : InlineStyleBackgroundRepeatProperty
	{
		[Token(Token = "0x1700059E")]
		public override string Name
		{
			[Token(Token = "0x6001737")]
			[Address(RVA = "0x6AC2680", Offset = "0x6AC1680", VA = "0x6AC2680", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700059F")]
		public override string ussName
		{
			[Token(Token = "0x6001738")]
			[Address(RVA = "0x6AC26B0", Offset = "0x6AC16B0", VA = "0x6AC26B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A0")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001739")]
			[Address(RVA = "0x6AC26E0", Offset = "0x6AC16E0", VA = "0x6AC26E0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600173A")]
		[Address(RVA = "0x6AC26F0", Offset = "0x6AC16F0", VA = "0x6AC26F0", Slot = "14")]
		public override StyleBackgroundRepeat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackgroundRepeat);
		}

		[Token(Token = "0x600173B")]
		[Address(RVA = "0x6AC2790", Offset = "0x6AC1790", VA = "0x6AC2790", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackgroundRepeat value)
		{
		}

		[Token(Token = "0x600173C")]
		[Address(RVA = "0x6ABFEE0", Offset = "0x6ABEEE0", VA = "0x6ABFEE0")]
		public BackgroundRepeatProperty()
		{
		}
	}

	[Token(Token = "0x2000315")]
	private class BackgroundSizeProperty : InlineStyleBackgroundSizeProperty
	{
		[Token(Token = "0x170005A1")]
		public override string Name
		{
			[Token(Token = "0x600173D")]
			[Address(RVA = "0x6AC2890", Offset = "0x6AC1890", VA = "0x6AC2890", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A2")]
		public override string ussName
		{
			[Token(Token = "0x600173E")]
			[Address(RVA = "0x6AC28C0", Offset = "0x6AC18C0", VA = "0x6AC28C0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A3")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600173F")]
			[Address(RVA = "0x6AC28F0", Offset = "0x6AC18F0", VA = "0x6AC28F0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001740")]
		[Address(RVA = "0x6AC2900", Offset = "0x6AC1900", VA = "0x6AC2900", Slot = "14")]
		public override StyleBackgroundSize GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackgroundSize);
		}

		[Token(Token = "0x6001741")]
		[Address(RVA = "0x6AC29D0", Offset = "0x6AC19D0", VA = "0x6AC29D0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackgroundSize value)
		{
		}

		[Token(Token = "0x6001742")]
		[Address(RVA = "0x6ABFF20", Offset = "0x6ABEF20", VA = "0x6ABFF20")]
		public BackgroundSizeProperty()
		{
		}
	}

	[Token(Token = "0x2000316")]
	private class BorderBottomColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x170005A4")]
		public override string Name
		{
			[Token(Token = "0x6001743")]
			[Address(RVA = "0x6AC2AB0", Offset = "0x6AC1AB0", VA = "0x6AC2AB0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A5")]
		public override string ussName
		{
			[Token(Token = "0x6001744")]
			[Address(RVA = "0x6AC2AE0", Offset = "0x6AC1AE0", VA = "0x6AC2AE0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A6")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001745")]
			[Address(RVA = "0x6AC2B10", Offset = "0x6AC1B10", VA = "0x6AC2B10", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001746")]
		[Address(RVA = "0x6AC2B20", Offset = "0x6AC1B20", VA = "0x6AC2B20", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001747")]
		[Address(RVA = "0x6AC2BF0", Offset = "0x6AC1BF0", VA = "0x6AC2BF0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001748")]
		[Address(RVA = "0x6ABFF60", Offset = "0x6ABEF60", VA = "0x6ABFF60")]
		public BorderBottomColorProperty()
		{
		}
	}

	[Token(Token = "0x2000317")]
	private class BorderBottomLeftRadiusProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005A7")]
		public override string Name
		{
			[Token(Token = "0x6001749")]
			[Address(RVA = "0x6AC2C90", Offset = "0x6AC1C90", VA = "0x6AC2C90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A8")]
		public override string ussName
		{
			[Token(Token = "0x600174A")]
			[Address(RVA = "0x6AC2CC0", Offset = "0x6AC1CC0", VA = "0x6AC2CC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A9")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600174B")]
			[Address(RVA = "0x6AC2CF0", Offset = "0x6AC1CF0", VA = "0x6AC2CF0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600174C")]
		[Address(RVA = "0x6AC2D00", Offset = "0x6AC1D00", VA = "0x6AC2D00", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600174D")]
		[Address(RVA = "0x6AC2DA0", Offset = "0x6AC1DA0", VA = "0x6AC2DA0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600174E")]
		[Address(RVA = "0x6ABFFA0", Offset = "0x6ABEFA0", VA = "0x6ABFFA0")]
		public BorderBottomLeftRadiusProperty()
		{
		}
	}

	[Token(Token = "0x2000318")]
	private class BorderBottomRightRadiusProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005AA")]
		public override string Name
		{
			[Token(Token = "0x600174F")]
			[Address(RVA = "0x6AC2EA0", Offset = "0x6AC1EA0", VA = "0x6AC2EA0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005AB")]
		public override string ussName
		{
			[Token(Token = "0x6001750")]
			[Address(RVA = "0x6AC2ED0", Offset = "0x6AC1ED0", VA = "0x6AC2ED0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005AC")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001751")]
			[Address(RVA = "0x6AC2F00", Offset = "0x6AC1F00", VA = "0x6AC2F00", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001752")]
		[Address(RVA = "0x6AC2F10", Offset = "0x6AC1F10", VA = "0x6AC2F10", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001753")]
		[Address(RVA = "0x6AC2FB0", Offset = "0x6AC1FB0", VA = "0x6AC2FB0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001754")]
		[Address(RVA = "0x6ABFFE0", Offset = "0x6ABEFE0", VA = "0x6ABFFE0")]
		public BorderBottomRightRadiusProperty()
		{
		}
	}

	[Token(Token = "0x2000319")]
	private class BorderBottomWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x170005AD")]
		public override string Name
		{
			[Token(Token = "0x6001755")]
			[Address(RVA = "0x6AC3070", Offset = "0x6AC2070", VA = "0x6AC3070", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005AE")]
		public override string ussName
		{
			[Token(Token = "0x6001756")]
			[Address(RVA = "0x6AC30A0", Offset = "0x6AC20A0", VA = "0x6AC30A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005AF")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001757")]
			[Address(RVA = "0x6AC30D0", Offset = "0x6AC20D0", VA = "0x6AC30D0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001758")]
		[Address(RVA = "0x6AC30E0", Offset = "0x6AC20E0", VA = "0x6AC30E0", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001759")]
		[Address(RVA = "0x6AC3180", Offset = "0x6AC2180", VA = "0x6AC3180", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x600175A")]
		[Address(RVA = "0x6AC0020", Offset = "0x6ABF020", VA = "0x6AC0020")]
		public BorderBottomWidthProperty()
		{
		}
	}

	[Token(Token = "0x200031A")]
	private class BorderLeftColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x170005B0")]
		public override string Name
		{
			[Token(Token = "0x600175B")]
			[Address(RVA = "0x6AC3270", Offset = "0x6AC2270", VA = "0x6AC3270", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B1")]
		public override string ussName
		{
			[Token(Token = "0x600175C")]
			[Address(RVA = "0x6AC32A0", Offset = "0x6AC22A0", VA = "0x6AC32A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B2")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600175D")]
			[Address(RVA = "0x6AC32D0", Offset = "0x6AC22D0", VA = "0x6AC32D0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600175E")]
		[Address(RVA = "0x6AC32E0", Offset = "0x6AC22E0", VA = "0x6AC32E0", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x600175F")]
		[Address(RVA = "0x6AC33B0", Offset = "0x6AC23B0", VA = "0x6AC33B0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001760")]
		[Address(RVA = "0x6AC0060", Offset = "0x6ABF060", VA = "0x6AC0060")]
		public BorderLeftColorProperty()
		{
		}
	}

	[Token(Token = "0x200031B")]
	private class BorderLeftWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x170005B3")]
		public override string Name
		{
			[Token(Token = "0x6001761")]
			[Address(RVA = "0x6AC3450", Offset = "0x6AC2450", VA = "0x6AC3450", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B4")]
		public override string ussName
		{
			[Token(Token = "0x6001762")]
			[Address(RVA = "0x6AC3480", Offset = "0x6AC2480", VA = "0x6AC3480", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B5")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001763")]
			[Address(RVA = "0x6AC34B0", Offset = "0x6AC24B0", VA = "0x6AC34B0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001764")]
		[Address(RVA = "0x6AC34C0", Offset = "0x6AC24C0", VA = "0x6AC34C0", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001765")]
		[Address(RVA = "0x6AC3560", Offset = "0x6AC2560", VA = "0x6AC3560", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001766")]
		[Address(RVA = "0x6AC00A0", Offset = "0x6ABF0A0", VA = "0x6AC00A0")]
		public BorderLeftWidthProperty()
		{
		}
	}

	[Token(Token = "0x200031C")]
	private class BorderRightColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x170005B6")]
		public override string Name
		{
			[Token(Token = "0x6001767")]
			[Address(RVA = "0x6AC3610", Offset = "0x6AC2610", VA = "0x6AC3610", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B7")]
		public override string ussName
		{
			[Token(Token = "0x6001768")]
			[Address(RVA = "0x6AC3640", Offset = "0x6AC2640", VA = "0x6AC3640", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B8")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001769")]
			[Address(RVA = "0x6AC3670", Offset = "0x6AC2670", VA = "0x6AC3670", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600176A")]
		[Address(RVA = "0x6AC3680", Offset = "0x6AC2680", VA = "0x6AC3680", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x600176B")]
		[Address(RVA = "0x6AC3750", Offset = "0x6AC2750", VA = "0x6AC3750", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x600176C")]
		[Address(RVA = "0x6AC00E0", Offset = "0x6ABF0E0", VA = "0x6AC00E0")]
		public BorderRightColorProperty()
		{
		}
	}

	[Token(Token = "0x200031D")]
	private class BorderRightWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x170005B9")]
		public override string Name
		{
			[Token(Token = "0x600176D")]
			[Address(RVA = "0x6AC37F0", Offset = "0x6AC27F0", VA = "0x6AC37F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005BA")]
		public override string ussName
		{
			[Token(Token = "0x600176E")]
			[Address(RVA = "0x6AC3820", Offset = "0x6AC2820", VA = "0x6AC3820", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005BB")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600176F")]
			[Address(RVA = "0x6AC3850", Offset = "0x6AC2850", VA = "0x6AC3850", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001770")]
		[Address(RVA = "0x6AC3860", Offset = "0x6AC2860", VA = "0x6AC3860", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001771")]
		[Address(RVA = "0x6AC3900", Offset = "0x6AC2900", VA = "0x6AC3900", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001772")]
		[Address(RVA = "0x6AC0120", Offset = "0x6ABF120", VA = "0x6AC0120")]
		public BorderRightWidthProperty()
		{
		}
	}

	[Token(Token = "0x200031E")]
	private class BorderTopColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x170005BC")]
		public override string Name
		{
			[Token(Token = "0x6001773")]
			[Address(RVA = "0x6AC39B0", Offset = "0x6AC29B0", VA = "0x6AC39B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005BD")]
		public override string ussName
		{
			[Token(Token = "0x6001774")]
			[Address(RVA = "0x6AC39E0", Offset = "0x6AC29E0", VA = "0x6AC39E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005BE")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001775")]
			[Address(RVA = "0x6AC3A10", Offset = "0x6AC2A10", VA = "0x6AC3A10", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001776")]
		[Address(RVA = "0x6AC3A20", Offset = "0x6AC2A20", VA = "0x6AC3A20", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001777")]
		[Address(RVA = "0x6AC3AF0", Offset = "0x6AC2AF0", VA = "0x6AC3AF0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001778")]
		[Address(RVA = "0x6AC0160", Offset = "0x6ABF160", VA = "0x6AC0160")]
		public BorderTopColorProperty()
		{
		}
	}

	[Token(Token = "0x200031F")]
	private class BorderTopLeftRadiusProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005BF")]
		public override string Name
		{
			[Token(Token = "0x6001779")]
			[Address(RVA = "0x6AC3B90", Offset = "0x6AC2B90", VA = "0x6AC3B90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C0")]
		public override string ussName
		{
			[Token(Token = "0x600177A")]
			[Address(RVA = "0x6AC3BC0", Offset = "0x6AC2BC0", VA = "0x6AC3BC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C1")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600177B")]
			[Address(RVA = "0x6AC3BF0", Offset = "0x6AC2BF0", VA = "0x6AC3BF0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600177C")]
		[Address(RVA = "0x6AC3C00", Offset = "0x6AC2C00", VA = "0x6AC3C00", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600177D")]
		[Address(RVA = "0x6AC3CA0", Offset = "0x6AC2CA0", VA = "0x6AC3CA0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600177E")]
		[Address(RVA = "0x6AC01A0", Offset = "0x6ABF1A0", VA = "0x6AC01A0")]
		public BorderTopLeftRadiusProperty()
		{
		}
	}

	[Token(Token = "0x2000320")]
	private class BorderTopRightRadiusProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005C2")]
		public override string Name
		{
			[Token(Token = "0x600177F")]
			[Address(RVA = "0x6AC3D60", Offset = "0x6AC2D60", VA = "0x6AC3D60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C3")]
		public override string ussName
		{
			[Token(Token = "0x6001780")]
			[Address(RVA = "0x6AC3D90", Offset = "0x6AC2D90", VA = "0x6AC3D90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C4")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001781")]
			[Address(RVA = "0x6AC3DC0", Offset = "0x6AC2DC0", VA = "0x6AC3DC0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001782")]
		[Address(RVA = "0x6AC3DD0", Offset = "0x6AC2DD0", VA = "0x6AC3DD0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001783")]
		[Address(RVA = "0x6AC3E70", Offset = "0x6AC2E70", VA = "0x6AC3E70", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001784")]
		[Address(RVA = "0x6AC01E0", Offset = "0x6ABF1E0", VA = "0x6AC01E0")]
		public BorderTopRightRadiusProperty()
		{
		}
	}

	[Token(Token = "0x2000321")]
	private class BorderTopWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x170005C5")]
		public override string Name
		{
			[Token(Token = "0x6001785")]
			[Address(RVA = "0x6AC3F30", Offset = "0x6AC2F30", VA = "0x6AC3F30", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C6")]
		public override string ussName
		{
			[Token(Token = "0x6001786")]
			[Address(RVA = "0x6AC3F60", Offset = "0x6AC2F60", VA = "0x6AC3F60", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C7")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001787")]
			[Address(RVA = "0x6AC3F90", Offset = "0x6AC2F90", VA = "0x6AC3F90", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001788")]
		[Address(RVA = "0x6AC3FA0", Offset = "0x6AC2FA0", VA = "0x6AC3FA0", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001789")]
		[Address(RVA = "0x6AC4040", Offset = "0x6AC3040", VA = "0x6AC4040", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x600178A")]
		[Address(RVA = "0x6AC0220", Offset = "0x6ABF220", VA = "0x6AC0220")]
		public BorderTopWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000322")]
	private class BottomProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005C8")]
		public override string Name
		{
			[Token(Token = "0x600178B")]
			[Address(RVA = "0x6AC40F0", Offset = "0x6AC30F0", VA = "0x6AC40F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C9")]
		public override string ussName
		{
			[Token(Token = "0x600178C")]
			[Address(RVA = "0x6AC4120", Offset = "0x6AC3120", VA = "0x6AC4120", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005CA")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600178D")]
			[Address(RVA = "0x6AC4150", Offset = "0x6AC3150", VA = "0x6AC4150", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600178E")]
		[Address(RVA = "0x6AC4160", Offset = "0x6AC3160", VA = "0x6AC4160", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600178F")]
		[Address(RVA = "0x6AC4200", Offset = "0x6AC3200", VA = "0x6AC4200", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001790")]
		[Address(RVA = "0x6AC0260", Offset = "0x6ABF260", VA = "0x6AC0260")]
		public BottomProperty()
		{
		}
	}

	[Token(Token = "0x2000323")]
	private class ColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x170005CB")]
		public override string Name
		{
			[Token(Token = "0x6001791")]
			[Address(RVA = "0x6AC42C0", Offset = "0x6AC32C0", VA = "0x6AC42C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005CC")]
		public override string ussName
		{
			[Token(Token = "0x6001792")]
			[Address(RVA = "0x6AC42F0", Offset = "0x6AC32F0", VA = "0x6AC42F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005CD")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001793")]
			[Address(RVA = "0x6AC4320", Offset = "0x6AC3320", VA = "0x6AC4320", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001794")]
		[Address(RVA = "0x6AC4330", Offset = "0x6AC3330", VA = "0x6AC4330", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001795")]
		[Address(RVA = "0x6AC4400", Offset = "0x6AC3400", VA = "0x6AC4400", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001796")]
		[Address(RVA = "0x6AC02A0", Offset = "0x6ABF2A0", VA = "0x6AC02A0")]
		public ColorProperty()
		{
		}
	}

	[Token(Token = "0x2000324")]
	private class CursorProperty : InlineStyleCursorProperty
	{
		[Token(Token = "0x170005CE")]
		public override string Name
		{
			[Token(Token = "0x6001797")]
			[Address(RVA = "0x6AC44A0", Offset = "0x6AC34A0", VA = "0x6AC44A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005CF")]
		public override string ussName
		{
			[Token(Token = "0x6001798")]
			[Address(RVA = "0x6AC44D0", Offset = "0x6AC34D0", VA = "0x6AC44D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D0")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001799")]
			[Address(RVA = "0x6AC4500", Offset = "0x6AC3500", VA = "0x6AC4500", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600179A")]
		[Address(RVA = "0x6AC4510", Offset = "0x6AC3510", VA = "0x6AC4510", Slot = "14")]
		public override StyleCursor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleCursor);
		}

		[Token(Token = "0x600179B")]
		[Address(RVA = "0x6AC45E0", Offset = "0x6AC35E0", VA = "0x6AC45E0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleCursor value)
		{
		}

		[Token(Token = "0x600179C")]
		[Address(RVA = "0x6AC02E0", Offset = "0x6ABF2E0", VA = "0x6AC02E0")]
		public CursorProperty()
		{
		}
	}

	[Token(Token = "0x2000325")]
	private class DisplayProperty : InlineStyleEnumProperty<DisplayStyle>
	{
		[Token(Token = "0x170005D1")]
		public override string Name
		{
			[Token(Token = "0x600179D")]
			[Address(RVA = "0x6AC46C0", Offset = "0x6AC36C0", VA = "0x6AC46C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D2")]
		public override string ussName
		{
			[Token(Token = "0x600179E")]
			[Address(RVA = "0x6AC46F0", Offset = "0x6AC36F0", VA = "0x6AC46F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D3")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600179F")]
			[Address(RVA = "0x6AC4720", Offset = "0x6AC3720", VA = "0x6AC4720", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x6AC4730", Offset = "0x6AC3730", VA = "0x6AC4730", Slot = "14")]
		public override StyleEnum<DisplayStyle> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<DisplayStyle>);
		}

		[Token(Token = "0x60017A1")]
		[Address(RVA = "0x6AC47D0", Offset = "0x6AC37D0", VA = "0x6AC47D0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<DisplayStyle> value)
		{
		}

		[Token(Token = "0x60017A2")]
		[Address(RVA = "0x6AC0320", Offset = "0x6ABF320", VA = "0x6AC0320")]
		public DisplayProperty()
		{
		}
	}

	[Token(Token = "0x2000326")]
	private class FilterProperty : InlineStyleListProperty<FilterFunction>
	{
		[Token(Token = "0x170005D4")]
		public override string Name
		{
			[Token(Token = "0x60017A3")]
			[Address(RVA = "0x6AC4880", Offset = "0x6AC3880", VA = "0x6AC4880", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D5")]
		public override string ussName
		{
			[Token(Token = "0x60017A4")]
			[Address(RVA = "0x6AC48B0", Offset = "0x6AC38B0", VA = "0x6AC48B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D6")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017A5")]
			[Address(RVA = "0x6AC48E0", Offset = "0x6AC38E0", VA = "0x6AC48E0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017A6")]
		[Address(RVA = "0x6AC48F0", Offset = "0x6AC38F0", VA = "0x6AC48F0", Slot = "14")]
		public override StyleList<FilterFunction> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<FilterFunction>);
		}

		[Token(Token = "0x60017A7")]
		[Address(RVA = "0x6AC4990", Offset = "0x6AC3990", VA = "0x6AC4990", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<FilterFunction> value)
		{
		}

		[Token(Token = "0x60017A8")]
		[Address(RVA = "0x6AC0360", Offset = "0x6ABF360", VA = "0x6AC0360")]
		public FilterProperty()
		{
		}
	}

	[Token(Token = "0x2000327")]
	private class FlexBasisProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005D7")]
		public override string Name
		{
			[Token(Token = "0x60017A9")]
			[Address(RVA = "0x6AC4A40", Offset = "0x6AC3A40", VA = "0x6AC4A40", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D8")]
		public override string ussName
		{
			[Token(Token = "0x60017AA")]
			[Address(RVA = "0x6AC4A70", Offset = "0x6AC3A70", VA = "0x6AC4A70", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D9")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017AB")]
			[Address(RVA = "0x6AC4AA0", Offset = "0x6AC3AA0", VA = "0x6AC4AA0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017AC")]
		[Address(RVA = "0x6AC4AB0", Offset = "0x6AC3AB0", VA = "0x6AC4AB0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017AD")]
		[Address(RVA = "0x6AC4B50", Offset = "0x6AC3B50", VA = "0x6AC4B50", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017AE")]
		[Address(RVA = "0x6AC03A0", Offset = "0x6ABF3A0", VA = "0x6AC03A0")]
		public FlexBasisProperty()
		{
		}
	}

	[Token(Token = "0x2000328")]
	private class FlexDirectionProperty : InlineStyleEnumProperty<FlexDirection>
	{
		[Token(Token = "0x170005DA")]
		public override string Name
		{
			[Token(Token = "0x60017AF")]
			[Address(RVA = "0x6AC4C10", Offset = "0x6AC3C10", VA = "0x6AC4C10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DB")]
		public override string ussName
		{
			[Token(Token = "0x60017B0")]
			[Address(RVA = "0x6AC4C40", Offset = "0x6AC3C40", VA = "0x6AC4C40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DC")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017B1")]
			[Address(RVA = "0x6AC4C70", Offset = "0x6AC3C70", VA = "0x6AC4C70", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017B2")]
		[Address(RVA = "0x6AC4C80", Offset = "0x6AC3C80", VA = "0x6AC4C80", Slot = "14")]
		public override StyleEnum<FlexDirection> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<FlexDirection>);
		}

		[Token(Token = "0x60017B3")]
		[Address(RVA = "0x6AC4D20", Offset = "0x6AC3D20", VA = "0x6AC4D20", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<FlexDirection> value)
		{
		}

		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x6AC03E0", Offset = "0x6ABF3E0", VA = "0x6AC03E0")]
		public FlexDirectionProperty()
		{
		}
	}

	[Token(Token = "0x2000329")]
	private class FlexGrowProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x170005DD")]
		public override string Name
		{
			[Token(Token = "0x60017B5")]
			[Address(RVA = "0x6AC4DD0", Offset = "0x6AC3DD0", VA = "0x6AC4DD0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DE")]
		public override string ussName
		{
			[Token(Token = "0x60017B6")]
			[Address(RVA = "0x6AC4E00", Offset = "0x6AC3E00", VA = "0x6AC4E00", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DF")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017B7")]
			[Address(RVA = "0x6AC4E30", Offset = "0x6AC3E30", VA = "0x6AC4E30", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x6AC4E40", Offset = "0x6AC3E40", VA = "0x6AC4E40", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x6AC4EE0", Offset = "0x6AC3EE0", VA = "0x6AC4EE0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x60017BA")]
		[Address(RVA = "0x6AC0420", Offset = "0x6ABF420", VA = "0x6AC0420")]
		public FlexGrowProperty()
		{
		}
	}

	[Token(Token = "0x200032A")]
	private class FlexShrinkProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x170005E0")]
		public override string Name
		{
			[Token(Token = "0x60017BB")]
			[Address(RVA = "0x6AC4F90", Offset = "0x6AC3F90", VA = "0x6AC4F90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E1")]
		public override string ussName
		{
			[Token(Token = "0x60017BC")]
			[Address(RVA = "0x6AC4FC0", Offset = "0x6AC3FC0", VA = "0x6AC4FC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E2")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017BD")]
			[Address(RVA = "0x6AC4FF0", Offset = "0x6AC3FF0", VA = "0x6AC4FF0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x6AC5000", Offset = "0x6AC4000", VA = "0x6AC5000", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x60017BF")]
		[Address(RVA = "0x6AC50A0", Offset = "0x6AC40A0", VA = "0x6AC50A0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x60017C0")]
		[Address(RVA = "0x6AC0460", Offset = "0x6ABF460", VA = "0x6AC0460")]
		public FlexShrinkProperty()
		{
		}
	}

	[Token(Token = "0x200032B")]
	private class FlexWrapProperty : InlineStyleEnumProperty<Wrap>
	{
		[Token(Token = "0x170005E3")]
		public override string Name
		{
			[Token(Token = "0x60017C1")]
			[Address(RVA = "0x6AC5150", Offset = "0x6AC4150", VA = "0x6AC5150", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E4")]
		public override string ussName
		{
			[Token(Token = "0x60017C2")]
			[Address(RVA = "0x6AC5180", Offset = "0x6AC4180", VA = "0x6AC5180", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E5")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017C3")]
			[Address(RVA = "0x6AC51B0", Offset = "0x6AC41B0", VA = "0x6AC51B0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017C4")]
		[Address(RVA = "0x6AC51C0", Offset = "0x6AC41C0", VA = "0x6AC51C0", Slot = "14")]
		public override StyleEnum<Wrap> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Wrap>);
		}

		[Token(Token = "0x60017C5")]
		[Address(RVA = "0x6AC5260", Offset = "0x6AC4260", VA = "0x6AC5260", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Wrap> value)
		{
		}

		[Token(Token = "0x60017C6")]
		[Address(RVA = "0x6AC04A0", Offset = "0x6ABF4A0", VA = "0x6AC04A0")]
		public FlexWrapProperty()
		{
		}
	}

	[Token(Token = "0x200032C")]
	private class FontSizeProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005E6")]
		public override string Name
		{
			[Token(Token = "0x60017C7")]
			[Address(RVA = "0x6AC5310", Offset = "0x6AC4310", VA = "0x6AC5310", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E7")]
		public override string ussName
		{
			[Token(Token = "0x60017C8")]
			[Address(RVA = "0x6AC5340", Offset = "0x6AC4340", VA = "0x6AC5340", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E8")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017C9")]
			[Address(RVA = "0x6AC5370", Offset = "0x6AC4370", VA = "0x6AC5370", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x6AC5380", Offset = "0x6AC4380", VA = "0x6AC5380", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017CB")]
		[Address(RVA = "0x6AC5420", Offset = "0x6AC4420", VA = "0x6AC5420", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x6AC04E0", Offset = "0x6ABF4E0", VA = "0x6AC04E0")]
		public FontSizeProperty()
		{
		}
	}

	[Token(Token = "0x200032D")]
	private class HeightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005E9")]
		public override string Name
		{
			[Token(Token = "0x60017CD")]
			[Address(RVA = "0x6AC54E0", Offset = "0x6AC44E0", VA = "0x6AC54E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005EA")]
		public override string ussName
		{
			[Token(Token = "0x60017CE")]
			[Address(RVA = "0x6AC5510", Offset = "0x6AC4510", VA = "0x6AC5510", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005EB")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017CF")]
			[Address(RVA = "0x6AC5540", Offset = "0x6AC4540", VA = "0x6AC5540", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017D0")]
		[Address(RVA = "0x6AC5550", Offset = "0x6AC4550", VA = "0x6AC5550", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017D1")]
		[Address(RVA = "0x6AC55F0", Offset = "0x6AC45F0", VA = "0x6AC55F0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017D2")]
		[Address(RVA = "0x6AC0520", Offset = "0x6ABF520", VA = "0x6AC0520")]
		public HeightProperty()
		{
		}
	}

	[Token(Token = "0x200032E")]
	private class JustifyContentProperty : InlineStyleEnumProperty<Justify>
	{
		[Token(Token = "0x170005EC")]
		public override string Name
		{
			[Token(Token = "0x60017D3")]
			[Address(RVA = "0x6AC56B0", Offset = "0x6AC46B0", VA = "0x6AC56B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005ED")]
		public override string ussName
		{
			[Token(Token = "0x60017D4")]
			[Address(RVA = "0x6AC56E0", Offset = "0x6AC46E0", VA = "0x6AC56E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005EE")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017D5")]
			[Address(RVA = "0x6AC5710", Offset = "0x6AC4710", VA = "0x6AC5710", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017D6")]
		[Address(RVA = "0x6AC5720", Offset = "0x6AC4720", VA = "0x6AC5720", Slot = "14")]
		public override StyleEnum<Justify> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Justify>);
		}

		[Token(Token = "0x60017D7")]
		[Address(RVA = "0x6AC57C0", Offset = "0x6AC47C0", VA = "0x6AC57C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Justify> value)
		{
		}

		[Token(Token = "0x60017D8")]
		[Address(RVA = "0x6AC0560", Offset = "0x6ABF560", VA = "0x6AC0560")]
		public JustifyContentProperty()
		{
		}
	}

	[Token(Token = "0x200032F")]
	private class LeftProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005EF")]
		public override string Name
		{
			[Token(Token = "0x60017D9")]
			[Address(RVA = "0x6AC5870", Offset = "0x6AC4870", VA = "0x6AC5870", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005F0")]
		public override string ussName
		{
			[Token(Token = "0x60017DA")]
			[Address(RVA = "0x6AC58A0", Offset = "0x6AC48A0", VA = "0x6AC58A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005F1")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017DB")]
			[Address(RVA = "0x6AC58D0", Offset = "0x6AC48D0", VA = "0x6AC58D0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017DC")]
		[Address(RVA = "0x6AC58E0", Offset = "0x6AC48E0", VA = "0x6AC58E0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x6AC5980", Offset = "0x6AC4980", VA = "0x6AC5980", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017DE")]
		[Address(RVA = "0x6AC05A0", Offset = "0x6ABF5A0", VA = "0x6AC05A0")]
		public LeftProperty()
		{
		}
	}

	[Token(Token = "0x2000330")]
	private class LetterSpacingProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005F2")]
		public override string Name
		{
			[Token(Token = "0x60017DF")]
			[Address(RVA = "0x6AC5A40", Offset = "0x6AC4A40", VA = "0x6AC5A40", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005F3")]
		public override string ussName
		{
			[Token(Token = "0x60017E0")]
			[Address(RVA = "0x6AC5A70", Offset = "0x6AC4A70", VA = "0x6AC5A70", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005F4")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017E1")]
			[Address(RVA = "0x6AC5AA0", Offset = "0x6AC4AA0", VA = "0x6AC5AA0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017E2")]
		[Address(RVA = "0x6AC5AB0", Offset = "0x6AC4AB0", VA = "0x6AC5AB0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x6AC5B50", Offset = "0x6AC4B50", VA = "0x6AC5B50", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x6AC05E0", Offset = "0x6ABF5E0", VA = "0x6AC05E0")]
		public LetterSpacingProperty()
		{
		}
	}

	[Token(Token = "0x2000331")]
	private class MarginBottomProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005F5")]
		public override string Name
		{
			[Token(Token = "0x60017E5")]
			[Address(RVA = "0x6AC5C10", Offset = "0x6AC4C10", VA = "0x6AC5C10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005F6")]
		public override string ussName
		{
			[Token(Token = "0x60017E6")]
			[Address(RVA = "0x6AC5C40", Offset = "0x6AC4C40", VA = "0x6AC5C40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005F7")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017E7")]
			[Address(RVA = "0x6AC5C70", Offset = "0x6AC4C70", VA = "0x6AC5C70", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017E8")]
		[Address(RVA = "0x6AC5C80", Offset = "0x6AC4C80", VA = "0x6AC5C80", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x6AC5D20", Offset = "0x6AC4D20", VA = "0x6AC5D20", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x6AC0620", Offset = "0x6ABF620", VA = "0x6AC0620")]
		public MarginBottomProperty()
		{
		}
	}

	[Token(Token = "0x2000332")]
	private class MarginLeftProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005F8")]
		public override string Name
		{
			[Token(Token = "0x60017EB")]
			[Address(RVA = "0x6AC5DE0", Offset = "0x6AC4DE0", VA = "0x6AC5DE0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005F9")]
		public override string ussName
		{
			[Token(Token = "0x60017EC")]
			[Address(RVA = "0x6AC5E10", Offset = "0x6AC4E10", VA = "0x6AC5E10", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005FA")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017ED")]
			[Address(RVA = "0x6AC5E40", Offset = "0x6AC4E40", VA = "0x6AC5E40", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017EE")]
		[Address(RVA = "0x6AC5E50", Offset = "0x6AC4E50", VA = "0x6AC5E50", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017EF")]
		[Address(RVA = "0x6AC5EF0", Offset = "0x6AC4EF0", VA = "0x6AC5EF0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017F0")]
		[Address(RVA = "0x6AC0660", Offset = "0x6ABF660", VA = "0x6AC0660")]
		public MarginLeftProperty()
		{
		}
	}

	[Token(Token = "0x2000333")]
	private class MarginRightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005FB")]
		public override string Name
		{
			[Token(Token = "0x60017F1")]
			[Address(RVA = "0x6AC5FB0", Offset = "0x6AC4FB0", VA = "0x6AC5FB0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005FC")]
		public override string ussName
		{
			[Token(Token = "0x60017F2")]
			[Address(RVA = "0x6AC5FE0", Offset = "0x6AC4FE0", VA = "0x6AC5FE0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005FD")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017F3")]
			[Address(RVA = "0x6AC6010", Offset = "0x6AC5010", VA = "0x6AC6010", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x6AC6020", Offset = "0x6AC5020", VA = "0x6AC6020", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x6AC60C0", Offset = "0x6AC50C0", VA = "0x6AC60C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017F6")]
		[Address(RVA = "0x6AC06A0", Offset = "0x6ABF6A0", VA = "0x6AC06A0")]
		public MarginRightProperty()
		{
		}
	}

	[Token(Token = "0x2000334")]
	private class MarginTopProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005FE")]
		public override string Name
		{
			[Token(Token = "0x60017F7")]
			[Address(RVA = "0x6AC6180", Offset = "0x6AC5180", VA = "0x6AC6180", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005FF")]
		public override string ussName
		{
			[Token(Token = "0x60017F8")]
			[Address(RVA = "0x6AC61B0", Offset = "0x6AC51B0", VA = "0x6AC61B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000600")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017F9")]
			[Address(RVA = "0x6AC61E0", Offset = "0x6AC51E0", VA = "0x6AC61E0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017FA")]
		[Address(RVA = "0x6AC61F0", Offset = "0x6AC51F0", VA = "0x6AC61F0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017FB")]
		[Address(RVA = "0x6AC6290", Offset = "0x6AC5290", VA = "0x6AC6290", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017FC")]
		[Address(RVA = "0x6AC06E0", Offset = "0x6ABF6E0", VA = "0x6AC06E0")]
		public MarginTopProperty()
		{
		}
	}

	[Token(Token = "0x2000335")]
	private class MaxHeightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000601")]
		public override string Name
		{
			[Token(Token = "0x60017FD")]
			[Address(RVA = "0x6AC6350", Offset = "0x6AC5350", VA = "0x6AC6350", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000602")]
		public override string ussName
		{
			[Token(Token = "0x60017FE")]
			[Address(RVA = "0x6AC6380", Offset = "0x6AC5380", VA = "0x6AC6380", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000603")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017FF")]
			[Address(RVA = "0x6AC63B0", Offset = "0x6AC53B0", VA = "0x6AC63B0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001800")]
		[Address(RVA = "0x6AC63C0", Offset = "0x6AC53C0", VA = "0x6AC63C0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001801")]
		[Address(RVA = "0x6AC6460", Offset = "0x6AC5460", VA = "0x6AC6460", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001802")]
		[Address(RVA = "0x6AC0720", Offset = "0x6ABF720", VA = "0x6AC0720")]
		public MaxHeightProperty()
		{
		}
	}

	[Token(Token = "0x2000336")]
	private class MaxWidthProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000604")]
		public override string Name
		{
			[Token(Token = "0x6001803")]
			[Address(RVA = "0x6AC6520", Offset = "0x6AC5520", VA = "0x6AC6520", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000605")]
		public override string ussName
		{
			[Token(Token = "0x6001804")]
			[Address(RVA = "0x6AC6550", Offset = "0x6AC5550", VA = "0x6AC6550", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000606")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001805")]
			[Address(RVA = "0x6AC6580", Offset = "0x6AC5580", VA = "0x6AC6580", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001806")]
		[Address(RVA = "0x6AC6590", Offset = "0x6AC5590", VA = "0x6AC6590", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001807")]
		[Address(RVA = "0x6AC6630", Offset = "0x6AC5630", VA = "0x6AC6630", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001808")]
		[Address(RVA = "0x6AC0760", Offset = "0x6ABF760", VA = "0x6AC0760")]
		public MaxWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000337")]
	private class MinHeightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000607")]
		public override string Name
		{
			[Token(Token = "0x6001809")]
			[Address(RVA = "0x6AC66F0", Offset = "0x6AC56F0", VA = "0x6AC66F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000608")]
		public override string ussName
		{
			[Token(Token = "0x600180A")]
			[Address(RVA = "0x6AC6720", Offset = "0x6AC5720", VA = "0x6AC6720", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000609")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600180B")]
			[Address(RVA = "0x6AC6750", Offset = "0x6AC5750", VA = "0x6AC6750", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600180C")]
		[Address(RVA = "0x6AC6760", Offset = "0x6AC5760", VA = "0x6AC6760", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600180D")]
		[Address(RVA = "0x6AC6800", Offset = "0x6AC5800", VA = "0x6AC6800", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600180E")]
		[Address(RVA = "0x6AC07A0", Offset = "0x6ABF7A0", VA = "0x6AC07A0")]
		public MinHeightProperty()
		{
		}
	}

	[Token(Token = "0x2000338")]
	private class MinWidthProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700060A")]
		public override string Name
		{
			[Token(Token = "0x600180F")]
			[Address(RVA = "0x6AC68C0", Offset = "0x6AC58C0", VA = "0x6AC68C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060B")]
		public override string ussName
		{
			[Token(Token = "0x6001810")]
			[Address(RVA = "0x6AC68F0", Offset = "0x6AC58F0", VA = "0x6AC68F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001811")]
			[Address(RVA = "0x6AC6920", Offset = "0x6AC5920", VA = "0x6AC6920", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001812")]
		[Address(RVA = "0x6AC6930", Offset = "0x6AC5930", VA = "0x6AC6930", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001813")]
		[Address(RVA = "0x6AC69D0", Offset = "0x6AC59D0", VA = "0x6AC69D0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001814")]
		[Address(RVA = "0x6AC07E0", Offset = "0x6ABF7E0", VA = "0x6AC07E0")]
		public MinWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000339")]
	private class OpacityProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x1700060D")]
		public override string Name
		{
			[Token(Token = "0x6001815")]
			[Address(RVA = "0x6AC6A90", Offset = "0x6AC5A90", VA = "0x6AC6A90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060E")]
		public override string ussName
		{
			[Token(Token = "0x6001816")]
			[Address(RVA = "0x6AC6AC0", Offset = "0x6AC5AC0", VA = "0x6AC6AC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001817")]
			[Address(RVA = "0x6AC6AF0", Offset = "0x6AC5AF0", VA = "0x6AC6AF0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001818")]
		[Address(RVA = "0x6AC6B00", Offset = "0x6AC5B00", VA = "0x6AC6B00", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001819")]
		[Address(RVA = "0x6AC6BA0", Offset = "0x6AC5BA0", VA = "0x6AC6BA0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x600181A")]
		[Address(RVA = "0x6AC0820", Offset = "0x6ABF820", VA = "0x6AC0820")]
		public OpacityProperty()
		{
		}
	}

	[Token(Token = "0x200033A")]
	private class OverflowProperty : InlineStyleEnumProperty<Overflow>
	{
		[Token(Token = "0x17000610")]
		public override string Name
		{
			[Token(Token = "0x600181B")]
			[Address(RVA = "0x6AC6C50", Offset = "0x6AC5C50", VA = "0x6AC6C50", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000611")]
		public override string ussName
		{
			[Token(Token = "0x600181C")]
			[Address(RVA = "0x6AC6C80", Offset = "0x6AC5C80", VA = "0x6AC6C80", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000612")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600181D")]
			[Address(RVA = "0x6AC6CB0", Offset = "0x6AC5CB0", VA = "0x6AC6CB0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600181E")]
		[Address(RVA = "0x6AC6CC0", Offset = "0x6AC5CC0", VA = "0x6AC6CC0", Slot = "14")]
		public override StyleEnum<Overflow> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Overflow>);
		}

		[Token(Token = "0x600181F")]
		[Address(RVA = "0x6AC6D60", Offset = "0x6AC5D60", VA = "0x6AC6D60", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Overflow> value)
		{
		}

		[Token(Token = "0x6001820")]
		[Address(RVA = "0x6AC0860", Offset = "0x6ABF860", VA = "0x6AC0860")]
		public OverflowProperty()
		{
		}
	}

	[Token(Token = "0x200033B")]
	private class PaddingBottomProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000613")]
		public override string Name
		{
			[Token(Token = "0x6001821")]
			[Address(RVA = "0x6AC6E10", Offset = "0x6AC5E10", VA = "0x6AC6E10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000614")]
		public override string ussName
		{
			[Token(Token = "0x6001822")]
			[Address(RVA = "0x6AC6E40", Offset = "0x6AC5E40", VA = "0x6AC6E40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000615")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001823")]
			[Address(RVA = "0x6AC6E70", Offset = "0x6AC5E70", VA = "0x6AC6E70", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001824")]
		[Address(RVA = "0x6AC6E80", Offset = "0x6AC5E80", VA = "0x6AC6E80", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001825")]
		[Address(RVA = "0x6AC6F20", Offset = "0x6AC5F20", VA = "0x6AC6F20", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001826")]
		[Address(RVA = "0x6AC08A0", Offset = "0x6ABF8A0", VA = "0x6AC08A0")]
		public PaddingBottomProperty()
		{
		}
	}

	[Token(Token = "0x200033C")]
	private class PaddingLeftProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000616")]
		public override string Name
		{
			[Token(Token = "0x6001827")]
			[Address(RVA = "0x6AC6FE0", Offset = "0x6AC5FE0", VA = "0x6AC6FE0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000617")]
		public override string ussName
		{
			[Token(Token = "0x6001828")]
			[Address(RVA = "0x6AC7010", Offset = "0x6AC6010", VA = "0x6AC7010", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000618")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001829")]
			[Address(RVA = "0x6AC7040", Offset = "0x6AC6040", VA = "0x6AC7040", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600182A")]
		[Address(RVA = "0x6AC7050", Offset = "0x6AC6050", VA = "0x6AC7050", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600182B")]
		[Address(RVA = "0x6AC70F0", Offset = "0x6AC60F0", VA = "0x6AC70F0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600182C")]
		[Address(RVA = "0x6AC08E0", Offset = "0x6ABF8E0", VA = "0x6AC08E0")]
		public PaddingLeftProperty()
		{
		}
	}

	[Token(Token = "0x200033D")]
	private class PaddingRightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000619")]
		public override string Name
		{
			[Token(Token = "0x600182D")]
			[Address(RVA = "0x6AC71B0", Offset = "0x6AC61B0", VA = "0x6AC71B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700061A")]
		public override string ussName
		{
			[Token(Token = "0x600182E")]
			[Address(RVA = "0x6AC71E0", Offset = "0x6AC61E0", VA = "0x6AC71E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700061B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600182F")]
			[Address(RVA = "0x6AC7210", Offset = "0x6AC6210", VA = "0x6AC7210", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001830")]
		[Address(RVA = "0x6AC7220", Offset = "0x6AC6220", VA = "0x6AC7220", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001831")]
		[Address(RVA = "0x6AC72C0", Offset = "0x6AC62C0", VA = "0x6AC72C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001832")]
		[Address(RVA = "0x6AC0920", Offset = "0x6ABF920", VA = "0x6AC0920")]
		public PaddingRightProperty()
		{
		}
	}

	[Token(Token = "0x200033E")]
	private class PaddingTopProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700061C")]
		public override string Name
		{
			[Token(Token = "0x6001833")]
			[Address(RVA = "0x6AC7380", Offset = "0x6AC6380", VA = "0x6AC7380", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700061D")]
		public override string ussName
		{
			[Token(Token = "0x6001834")]
			[Address(RVA = "0x6AC73B0", Offset = "0x6AC63B0", VA = "0x6AC73B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700061E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001835")]
			[Address(RVA = "0x6AC73E0", Offset = "0x6AC63E0", VA = "0x6AC73E0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001836")]
		[Address(RVA = "0x6AC73F0", Offset = "0x6AC63F0", VA = "0x6AC73F0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001837")]
		[Address(RVA = "0x6AC7490", Offset = "0x6AC6490", VA = "0x6AC7490", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001838")]
		[Address(RVA = "0x6AC0960", Offset = "0x6ABF960", VA = "0x6AC0960")]
		public PaddingTopProperty()
		{
		}
	}

	[Token(Token = "0x200033F")]
	private class PositionProperty : InlineStyleEnumProperty<Position>
	{
		[Token(Token = "0x1700061F")]
		public override string Name
		{
			[Token(Token = "0x6001839")]
			[Address(RVA = "0x6AC7550", Offset = "0x6AC6550", VA = "0x6AC7550", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000620")]
		public override string ussName
		{
			[Token(Token = "0x600183A")]
			[Address(RVA = "0x6AC7580", Offset = "0x6AC6580", VA = "0x6AC7580", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000621")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600183B")]
			[Address(RVA = "0x6AC75B0", Offset = "0x6AC65B0", VA = "0x6AC75B0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600183C")]
		[Address(RVA = "0x6AC75C0", Offset = "0x6AC65C0", VA = "0x6AC75C0", Slot = "14")]
		public override StyleEnum<Position> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Position>);
		}

		[Token(Token = "0x600183D")]
		[Address(RVA = "0x6AC7660", Offset = "0x6AC6660", VA = "0x6AC7660", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Position> value)
		{
		}

		[Token(Token = "0x600183E")]
		[Address(RVA = "0x6AC09A0", Offset = "0x6ABF9A0", VA = "0x6AC09A0")]
		public PositionProperty()
		{
		}
	}

	[Token(Token = "0x2000340")]
	private class RightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000622")]
		public override string Name
		{
			[Token(Token = "0x600183F")]
			[Address(RVA = "0x6AC7710", Offset = "0x6AC6710", VA = "0x6AC7710", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000623")]
		public override string ussName
		{
			[Token(Token = "0x6001840")]
			[Address(RVA = "0x6AC7740", Offset = "0x6AC6740", VA = "0x6AC7740", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000624")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001841")]
			[Address(RVA = "0x6AC7770", Offset = "0x6AC6770", VA = "0x6AC7770", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001842")]
		[Address(RVA = "0x6AC7780", Offset = "0x6AC6780", VA = "0x6AC7780", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001843")]
		[Address(RVA = "0x6AC7820", Offset = "0x6AC6820", VA = "0x6AC7820", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001844")]
		[Address(RVA = "0x6AC09E0", Offset = "0x6ABF9E0", VA = "0x6AC09E0")]
		public RightProperty()
		{
		}
	}

	[Token(Token = "0x2000341")]
	private class RotateProperty : InlineStyleRotateProperty
	{
		[Token(Token = "0x17000625")]
		public override string Name
		{
			[Token(Token = "0x6001845")]
			[Address(RVA = "0x6AC78E0", Offset = "0x6AC68E0", VA = "0x6AC78E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000626")]
		public override string ussName
		{
			[Token(Token = "0x6001846")]
			[Address(RVA = "0x6AC7910", Offset = "0x6AC6910", VA = "0x6AC7910", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000627")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001847")]
			[Address(RVA = "0x6AC7940", Offset = "0x6AC6940", VA = "0x6AC7940", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001848")]
		[Address(RVA = "0x6AC7950", Offset = "0x6AC6950", VA = "0x6AC7950", Slot = "14")]
		public override StyleRotate GetValue(ref InlineStyleAccess container)
		{
			return default(StyleRotate);
		}

		[Token(Token = "0x6001849")]
		[Address(RVA = "0x6AC7A20", Offset = "0x6AC6A20", VA = "0x6AC7A20", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleRotate value)
		{
		}

		[Token(Token = "0x600184A")]
		[Address(RVA = "0x6AC0A20", Offset = "0x6ABFA20", VA = "0x6AC0A20")]
		public RotateProperty()
		{
		}
	}

	[Token(Token = "0x2000342")]
	private class ScaleProperty : InlineStyleScaleProperty
	{
		[Token(Token = "0x17000628")]
		public override string Name
		{
			[Token(Token = "0x600184B")]
			[Address(RVA = "0x6AC7B00", Offset = "0x6AC6B00", VA = "0x6AC7B00", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000629")]
		public override string ussName
		{
			[Token(Token = "0x600184C")]
			[Address(RVA = "0x6AC7B30", Offset = "0x6AC6B30", VA = "0x6AC7B30", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700062A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600184D")]
			[Address(RVA = "0x6AC7B60", Offset = "0x6AC6B60", VA = "0x6AC7B60", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600184E")]
		[Address(RVA = "0x6AC7B70", Offset = "0x6AC6B70", VA = "0x6AC7B70", Slot = "14")]
		public override StyleScale GetValue(ref InlineStyleAccess container)
		{
			return default(StyleScale);
		}

		[Token(Token = "0x600184F")]
		[Address(RVA = "0x6AC7C40", Offset = "0x6AC6C40", VA = "0x6AC7C40", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleScale value)
		{
		}

		[Token(Token = "0x6001850")]
		[Address(RVA = "0x6AC0A60", Offset = "0x6ABFA60", VA = "0x6AC0A60")]
		public ScaleProperty()
		{
		}
	}

	[Token(Token = "0x2000343")]
	private class TextOverflowProperty : InlineStyleEnumProperty<TextOverflow>
	{
		[Token(Token = "0x1700062B")]
		public override string Name
		{
			[Token(Token = "0x6001851")]
			[Address(RVA = "0x6AC7D20", Offset = "0x6AC6D20", VA = "0x6AC7D20", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700062C")]
		public override string ussName
		{
			[Token(Token = "0x6001852")]
			[Address(RVA = "0x6AC7D50", Offset = "0x6AC6D50", VA = "0x6AC7D50", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700062D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001853")]
			[Address(RVA = "0x6AC7D80", Offset = "0x6AC6D80", VA = "0x6AC7D80", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001854")]
		[Address(RVA = "0x6AC7D90", Offset = "0x6AC6D90", VA = "0x6AC7D90", Slot = "14")]
		public override StyleEnum<TextOverflow> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<TextOverflow>);
		}

		[Token(Token = "0x6001855")]
		[Address(RVA = "0x6AC7E30", Offset = "0x6AC6E30", VA = "0x6AC7E30", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<TextOverflow> value)
		{
		}

		[Token(Token = "0x6001856")]
		[Address(RVA = "0x6AC0AA0", Offset = "0x6ABFAA0", VA = "0x6AC0AA0")]
		public TextOverflowProperty()
		{
		}
	}

	[Token(Token = "0x2000344")]
	private class TextShadowProperty : InlineStyleTextShadowProperty
	{
		[Token(Token = "0x1700062E")]
		public override string Name
		{
			[Token(Token = "0x6001857")]
			[Address(RVA = "0x6AC7EE0", Offset = "0x6AC6EE0", VA = "0x6AC7EE0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700062F")]
		public override string ussName
		{
			[Token(Token = "0x6001858")]
			[Address(RVA = "0x6AC7F10", Offset = "0x6AC6F10", VA = "0x6AC7F10", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000630")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001859")]
			[Address(RVA = "0x6AC7F40", Offset = "0x6AC6F40", VA = "0x6AC7F40", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600185A")]
		[Address(RVA = "0x6AC7F50", Offset = "0x6AC6F50", VA = "0x6AC7F50", Slot = "14")]
		public override StyleTextShadow GetValue(ref InlineStyleAccess container)
		{
			return default(StyleTextShadow);
		}

		[Token(Token = "0x600185B")]
		[Address(RVA = "0x6AC8020", Offset = "0x6AC7020", VA = "0x6AC8020", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleTextShadow value)
		{
		}

		[Token(Token = "0x600185C")]
		[Address(RVA = "0x6AC0AE0", Offset = "0x6ABFAE0", VA = "0x6AC0AE0")]
		public TextShadowProperty()
		{
		}
	}

	[Token(Token = "0x2000345")]
	private class TopProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000631")]
		public override string Name
		{
			[Token(Token = "0x600185D")]
			[Address(RVA = "0x6AC8100", Offset = "0x6AC7100", VA = "0x6AC8100", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000632")]
		public override string ussName
		{
			[Token(Token = "0x600185E")]
			[Address(RVA = "0x6AC8130", Offset = "0x6AC7130", VA = "0x6AC8130", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000633")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600185F")]
			[Address(RVA = "0x6AC8160", Offset = "0x6AC7160", VA = "0x6AC8160", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001860")]
		[Address(RVA = "0x6AC8170", Offset = "0x6AC7170", VA = "0x6AC8170", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001861")]
		[Address(RVA = "0x6AC8210", Offset = "0x6AC7210", VA = "0x6AC8210", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001862")]
		[Address(RVA = "0x6AC0B20", Offset = "0x6ABFB20", VA = "0x6AC0B20")]
		public TopProperty()
		{
		}
	}

	[Token(Token = "0x2000346")]
	private class TransformOriginProperty : InlineStyleTransformOriginProperty
	{
		[Token(Token = "0x17000634")]
		public override string Name
		{
			[Token(Token = "0x6001863")]
			[Address(RVA = "0x6AC82D0", Offset = "0x6AC72D0", VA = "0x6AC82D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000635")]
		public override string ussName
		{
			[Token(Token = "0x6001864")]
			[Address(RVA = "0x6AC8300", Offset = "0x6AC7300", VA = "0x6AC8300", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000636")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001865")]
			[Address(RVA = "0x6AC8330", Offset = "0x6AC7330", VA = "0x6AC8330", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001866")]
		[Address(RVA = "0x6AC8340", Offset = "0x6AC7340", VA = "0x6AC8340", Slot = "14")]
		public override StyleTransformOrigin GetValue(ref InlineStyleAccess container)
		{
			return default(StyleTransformOrigin);
		}

		[Token(Token = "0x6001867")]
		[Address(RVA = "0x6AC8410", Offset = "0x6AC7410", VA = "0x6AC8410", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleTransformOrigin value)
		{
		}

		[Token(Token = "0x6001868")]
		[Address(RVA = "0x6AC0B60", Offset = "0x6ABFB60", VA = "0x6AC0B60")]
		public TransformOriginProperty()
		{
		}
	}

	[Token(Token = "0x2000347")]
	private class TransitionDelayProperty : InlineStyleListProperty<TimeValue>
	{
		[Token(Token = "0x17000637")]
		public override string Name
		{
			[Token(Token = "0x6001869")]
			[Address(RVA = "0x6AC84F0", Offset = "0x6AC74F0", VA = "0x6AC84F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000638")]
		public override string ussName
		{
			[Token(Token = "0x600186A")]
			[Address(RVA = "0x6AC8520", Offset = "0x6AC7520", VA = "0x6AC8520", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000639")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600186B")]
			[Address(RVA = "0x6AC8550", Offset = "0x6AC7550", VA = "0x6AC8550", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600186C")]
		[Address(RVA = "0x6AC8560", Offset = "0x6AC7560", VA = "0x6AC8560", Slot = "14")]
		public override StyleList<TimeValue> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<TimeValue>);
		}

		[Token(Token = "0x600186D")]
		[Address(RVA = "0x6AC8600", Offset = "0x6AC7600", VA = "0x6AC8600", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<TimeValue> value)
		{
		}

		[Token(Token = "0x600186E")]
		[Address(RVA = "0x6AC0BA0", Offset = "0x6ABFBA0", VA = "0x6AC0BA0")]
		public TransitionDelayProperty()
		{
		}
	}

	[Token(Token = "0x2000348")]
	private class TransitionDurationProperty : InlineStyleListProperty<TimeValue>
	{
		[Token(Token = "0x1700063A")]
		public override string Name
		{
			[Token(Token = "0x600186F")]
			[Address(RVA = "0x6AC86B0", Offset = "0x6AC76B0", VA = "0x6AC86B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700063B")]
		public override string ussName
		{
			[Token(Token = "0x6001870")]
			[Address(RVA = "0x6AC86E0", Offset = "0x6AC76E0", VA = "0x6AC86E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700063C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001871")]
			[Address(RVA = "0x6AC8710", Offset = "0x6AC7710", VA = "0x6AC8710", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001872")]
		[Address(RVA = "0x6AC8720", Offset = "0x6AC7720", VA = "0x6AC8720", Slot = "14")]
		public override StyleList<TimeValue> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<TimeValue>);
		}

		[Token(Token = "0x6001873")]
		[Address(RVA = "0x6AC87C0", Offset = "0x6AC77C0", VA = "0x6AC87C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<TimeValue> value)
		{
		}

		[Token(Token = "0x6001874")]
		[Address(RVA = "0x6AC0BE0", Offset = "0x6ABFBE0", VA = "0x6AC0BE0")]
		public TransitionDurationProperty()
		{
		}
	}

	[Token(Token = "0x2000349")]
	private class TransitionPropertyProperty : InlineStyleListProperty<StylePropertyName>
	{
		[Token(Token = "0x1700063D")]
		public override string Name
		{
			[Token(Token = "0x6001875")]
			[Address(RVA = "0x6AC8870", Offset = "0x6AC7870", VA = "0x6AC8870", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700063E")]
		public override string ussName
		{
			[Token(Token = "0x6001876")]
			[Address(RVA = "0x6AC88A0", Offset = "0x6AC78A0", VA = "0x6AC88A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700063F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001877")]
			[Address(RVA = "0x6AC88D0", Offset = "0x6AC78D0", VA = "0x6AC88D0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001878")]
		[Address(RVA = "0x6AC88E0", Offset = "0x6AC78E0", VA = "0x6AC88E0", Slot = "14")]
		public override StyleList<StylePropertyName> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<StylePropertyName>);
		}

		[Token(Token = "0x6001879")]
		[Address(RVA = "0x6AC8980", Offset = "0x6AC7980", VA = "0x6AC8980", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<StylePropertyName> value)
		{
		}

		[Token(Token = "0x600187A")]
		[Address(RVA = "0x6AC0C20", Offset = "0x6ABFC20", VA = "0x6AC0C20")]
		public TransitionPropertyProperty()
		{
		}
	}

	[Token(Token = "0x200034A")]
	private class TransitionTimingFunctionProperty : InlineStyleListProperty<EasingFunction>
	{
		[Token(Token = "0x17000640")]
		public override string Name
		{
			[Token(Token = "0x600187B")]
			[Address(RVA = "0x6AC8A30", Offset = "0x6AC7A30", VA = "0x6AC8A30", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000641")]
		public override string ussName
		{
			[Token(Token = "0x600187C")]
			[Address(RVA = "0x6AC8A60", Offset = "0x6AC7A60", VA = "0x6AC8A60", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000642")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600187D")]
			[Address(RVA = "0x6AC8A90", Offset = "0x6AC7A90", VA = "0x6AC8A90", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600187E")]
		[Address(RVA = "0x6AC8AA0", Offset = "0x6AC7AA0", VA = "0x6AC8AA0", Slot = "14")]
		public override StyleList<EasingFunction> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<EasingFunction>);
		}

		[Token(Token = "0x600187F")]
		[Address(RVA = "0x6AC8B40", Offset = "0x6AC7B40", VA = "0x6AC8B40", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<EasingFunction> value)
		{
		}

		[Token(Token = "0x6001880")]
		[Address(RVA = "0x6AC0C60", Offset = "0x6ABFC60", VA = "0x6AC0C60")]
		public TransitionTimingFunctionProperty()
		{
		}
	}

	[Token(Token = "0x200034B")]
	private class TranslateProperty : InlineStyleTranslateProperty
	{
		[Token(Token = "0x17000643")]
		public override string Name
		{
			[Token(Token = "0x6001881")]
			[Address(RVA = "0x6AC8BF0", Offset = "0x6AC7BF0", VA = "0x6AC8BF0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000644")]
		public override string ussName
		{
			[Token(Token = "0x6001882")]
			[Address(RVA = "0x6AC8C20", Offset = "0x6AC7C20", VA = "0x6AC8C20", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000645")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001883")]
			[Address(RVA = "0x6AC8C50", Offset = "0x6AC7C50", VA = "0x6AC8C50", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001884")]
		[Address(RVA = "0x6AC8C60", Offset = "0x6AC7C60", VA = "0x6AC8C60", Slot = "14")]
		public override StyleTranslate GetValue(ref InlineStyleAccess container)
		{
			return default(StyleTranslate);
		}

		[Token(Token = "0x6001885")]
		[Address(RVA = "0x6AC8D30", Offset = "0x6AC7D30", VA = "0x6AC8D30", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleTranslate value)
		{
		}

		[Token(Token = "0x6001886")]
		[Address(RVA = "0x6AC0CA0", Offset = "0x6ABFCA0", VA = "0x6AC0CA0")]
		public TranslateProperty()
		{
		}
	}

	[Token(Token = "0x200034C")]
	private class UnityBackgroundImageTintColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x17000646")]
		public override string Name
		{
			[Token(Token = "0x6001887")]
			[Address(RVA = "0x6AC8E10", Offset = "0x6AC7E10", VA = "0x6AC8E10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000647")]
		public override string ussName
		{
			[Token(Token = "0x6001888")]
			[Address(RVA = "0x6AC8E40", Offset = "0x6AC7E40", VA = "0x6AC8E40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000648")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001889")]
			[Address(RVA = "0x6AC8E70", Offset = "0x6AC7E70", VA = "0x6AC8E70", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600188A")]
		[Address(RVA = "0x6AC8E80", Offset = "0x6AC7E80", VA = "0x6AC8E80", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x600188B")]
		[Address(RVA = "0x6AC8F50", Offset = "0x6AC7F50", VA = "0x6AC8F50", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x600188C")]
		[Address(RVA = "0x6AC0CE0", Offset = "0x6ABFCE0", VA = "0x6AC0CE0")]
		public UnityBackgroundImageTintColorProperty()
		{
		}
	}

	[Token(Token = "0x200034D")]
	private class UnityEditorTextRenderingModeProperty : InlineStyleEnumProperty<EditorTextRenderingMode>
	{
		[Token(Token = "0x17000649")]
		public override string Name
		{
			[Token(Token = "0x600188D")]
			[Address(RVA = "0x6AC8FF0", Offset = "0x6AC7FF0", VA = "0x6AC8FF0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700064A")]
		public override string ussName
		{
			[Token(Token = "0x600188E")]
			[Address(RVA = "0x6AC9020", Offset = "0x6AC8020", VA = "0x6AC9020", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700064B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600188F")]
			[Address(RVA = "0x6AC9050", Offset = "0x6AC8050", VA = "0x6AC9050", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001890")]
		[Address(RVA = "0x6AC9060", Offset = "0x6AC8060", VA = "0x6AC9060", Slot = "14")]
		public override StyleEnum<EditorTextRenderingMode> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<EditorTextRenderingMode>);
		}

		[Token(Token = "0x6001891")]
		[Address(RVA = "0x6AC9100", Offset = "0x6AC8100", VA = "0x6AC9100", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<EditorTextRenderingMode> value)
		{
		}

		[Token(Token = "0x6001892")]
		[Address(RVA = "0x6AC0D20", Offset = "0x6ABFD20", VA = "0x6AC0D20")]
		public UnityEditorTextRenderingModeProperty()
		{
		}
	}

	[Token(Token = "0x200034E")]
	private class UnityFontProperty : InlineStyleFontProperty
	{
		[Token(Token = "0x1700064C")]
		public override string Name
		{
			[Token(Token = "0x6001893")]
			[Address(RVA = "0x6AC91C0", Offset = "0x6AC81C0", VA = "0x6AC91C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700064D")]
		public override string ussName
		{
			[Token(Token = "0x6001894")]
			[Address(RVA = "0x6AC91F0", Offset = "0x6AC81F0", VA = "0x6AC91F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700064E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001895")]
			[Address(RVA = "0x6AC9220", Offset = "0x6AC8220", VA = "0x6AC9220", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001896")]
		[Address(RVA = "0x6AC9230", Offset = "0x6AC8230", VA = "0x6AC9230", Slot = "14")]
		public override StyleFont GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFont);
		}

		[Token(Token = "0x6001897")]
		[Address(RVA = "0x6AC92D0", Offset = "0x6AC82D0", VA = "0x6AC92D0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFont value)
		{
		}

		[Token(Token = "0x6001898")]
		[Address(RVA = "0x6AC0D60", Offset = "0x6ABFD60", VA = "0x6AC0D60")]
		public UnityFontProperty()
		{
		}
	}

	[Token(Token = "0x200034F")]
	private class UnityFontDefinitionProperty : InlineStyleFontDefinitionProperty
	{
		[Token(Token = "0x1700064F")]
		public override string Name
		{
			[Token(Token = "0x6001899")]
			[Address(RVA = "0x6AC93D0", Offset = "0x6AC83D0", VA = "0x6AC93D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000650")]
		public override string ussName
		{
			[Token(Token = "0x600189A")]
			[Address(RVA = "0x6AC9400", Offset = "0x6AC8400", VA = "0x6AC9400", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000651")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600189B")]
			[Address(RVA = "0x6AC9430", Offset = "0x6AC8430", VA = "0x6AC9430", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600189C")]
		[Address(RVA = "0x6AC9440", Offset = "0x6AC8440", VA = "0x6AC9440", Slot = "14")]
		public override StyleFontDefinition GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFontDefinition);
		}

		[Token(Token = "0x600189D")]
		[Address(RVA = "0x6AC9510", Offset = "0x6AC8510", VA = "0x6AC9510", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFontDefinition value)
		{
		}

		[Token(Token = "0x600189E")]
		[Address(RVA = "0x6AC0DA0", Offset = "0x6ABFDA0", VA = "0x6AC0DA0")]
		public UnityFontDefinitionProperty()
		{
		}
	}

	[Token(Token = "0x2000350")]
	private class UnityFontStyleAndWeightProperty : InlineStyleEnumProperty<FontStyle>
	{
		[Token(Token = "0x17000652")]
		public override string Name
		{
			[Token(Token = "0x600189F")]
			[Address(RVA = "0x6AC95F0", Offset = "0x6AC85F0", VA = "0x6AC95F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000653")]
		public override string ussName
		{
			[Token(Token = "0x60018A0")]
			[Address(RVA = "0x6AC9620", Offset = "0x6AC8620", VA = "0x6AC9620", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000654")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018A1")]
			[Address(RVA = "0x6AC9650", Offset = "0x6AC8650", VA = "0x6AC9650", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018A2")]
		[Address(RVA = "0x6AC9660", Offset = "0x6AC8660", VA = "0x6AC9660", Slot = "14")]
		public override StyleEnum<FontStyle> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<FontStyle>);
		}

		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x6AC9700", Offset = "0x6AC8700", VA = "0x6AC9700", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<FontStyle> value)
		{
		}

		[Token(Token = "0x60018A4")]
		[Address(RVA = "0x6AC0DE0", Offset = "0x6ABFDE0", VA = "0x6AC0DE0")]
		public UnityFontStyleAndWeightProperty()
		{
		}
	}

	[Token(Token = "0x2000351")]
	private class UnityMaterialProperty : InlineStyleMaterialDefinitionProperty
	{
		[Token(Token = "0x17000655")]
		public override string Name
		{
			[Token(Token = "0x60018A5")]
			[Address(RVA = "0x6AC97C0", Offset = "0x6AC87C0", VA = "0x6AC97C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000656")]
		public override string ussName
		{
			[Token(Token = "0x60018A6")]
			[Address(RVA = "0x6AC97F0", Offset = "0x6AC87F0", VA = "0x6AC97F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000657")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018A7")]
			[Address(RVA = "0x6AC9820", Offset = "0x6AC8820", VA = "0x6AC9820", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018A8")]
		[Address(RVA = "0x6AC9830", Offset = "0x6AC8830", VA = "0x6AC9830", Slot = "14")]
		public override StyleMaterialDefinition GetValue(ref InlineStyleAccess container)
		{
			return default(StyleMaterialDefinition);
		}

		[Token(Token = "0x60018A9")]
		[Address(RVA = "0x6AC9900", Offset = "0x6AC8900", VA = "0x6AC9900", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleMaterialDefinition value)
		{
		}

		[Token(Token = "0x60018AA")]
		[Address(RVA = "0x6AC0E20", Offset = "0x6ABFE20", VA = "0x6AC0E20")]
		public UnityMaterialProperty()
		{
		}
	}

	[Token(Token = "0x2000352")]
	private class UnityOverflowClipBoxProperty : InlineStyleEnumProperty<OverflowClipBox>
	{
		[Token(Token = "0x17000658")]
		public override string Name
		{
			[Token(Token = "0x60018AB")]
			[Address(RVA = "0x6AC99E0", Offset = "0x6AC89E0", VA = "0x6AC99E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000659")]
		public override string ussName
		{
			[Token(Token = "0x60018AC")]
			[Address(RVA = "0x6AC9A10", Offset = "0x6AC8A10", VA = "0x6AC9A10", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700065A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018AD")]
			[Address(RVA = "0x6AC9A40", Offset = "0x6AC8A40", VA = "0x6AC9A40", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018AE")]
		[Address(RVA = "0x6AC9A50", Offset = "0x6AC8A50", VA = "0x6AC9A50", Slot = "14")]
		public override StyleEnum<OverflowClipBox> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<OverflowClipBox>);
		}

		[Token(Token = "0x60018AF")]
		[Address(RVA = "0x6AC9AF0", Offset = "0x6AC8AF0", VA = "0x6AC9AF0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<OverflowClipBox> value)
		{
		}

		[Token(Token = "0x60018B0")]
		[Address(RVA = "0x6AC0E60", Offset = "0x6ABFE60", VA = "0x6AC0E60")]
		public UnityOverflowClipBoxProperty()
		{
		}
	}

	[Token(Token = "0x2000353")]
	private class UnityParagraphSpacingProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700065B")]
		public override string Name
		{
			[Token(Token = "0x60018B1")]
			[Address(RVA = "0x6AC9BB0", Offset = "0x6AC8BB0", VA = "0x6AC9BB0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700065C")]
		public override string ussName
		{
			[Token(Token = "0x60018B2")]
			[Address(RVA = "0x6AC9BE0", Offset = "0x6AC8BE0", VA = "0x6AC9BE0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700065D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018B3")]
			[Address(RVA = "0x6AC9C10", Offset = "0x6AC8C10", VA = "0x6AC9C10", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018B4")]
		[Address(RVA = "0x6AC9C20", Offset = "0x6AC8C20", VA = "0x6AC9C20", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60018B5")]
		[Address(RVA = "0x6AC9CC0", Offset = "0x6AC8CC0", VA = "0x6AC9CC0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60018B6")]
		[Address(RVA = "0x6AC0EA0", Offset = "0x6ABFEA0", VA = "0x6AC0EA0")]
		public UnityParagraphSpacingProperty()
		{
		}
	}

	[Token(Token = "0x2000354")]
	private class UnitySliceBottomProperty : InlineStyleIntProperty
	{
		[Token(Token = "0x1700065E")]
		public override string Name
		{
			[Token(Token = "0x60018B7")]
			[Address(RVA = "0x6AC9D80", Offset = "0x6AC8D80", VA = "0x6AC9D80", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700065F")]
		public override string ussName
		{
			[Token(Token = "0x60018B8")]
			[Address(RVA = "0x6AC9DB0", Offset = "0x6AC8DB0", VA = "0x6AC9DB0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000660")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018B9")]
			[Address(RVA = "0x6AC9DE0", Offset = "0x6AC8DE0", VA = "0x6AC9DE0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018BA")]
		[Address(RVA = "0x6AC9DF0", Offset = "0x6AC8DF0", VA = "0x6AC9DF0", Slot = "14")]
		public override StyleInt GetValue(ref InlineStyleAccess container)
		{
			return default(StyleInt);
		}

		[Token(Token = "0x60018BB")]
		[Address(RVA = "0x6AC9E90", Offset = "0x6AC8E90", VA = "0x6AC9E90", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleInt value)
		{
		}

		[Token(Token = "0x60018BC")]
		[Address(RVA = "0x6AC0EE0", Offset = "0x6ABFEE0", VA = "0x6AC0EE0")]
		public UnitySliceBottomProperty()
		{
		}
	}

	[Token(Token = "0x2000355")]
	private class UnitySliceLeftProperty : InlineStyleIntProperty
	{
		[Token(Token = "0x17000661")]
		public override string Name
		{
			[Token(Token = "0x60018BD")]
			[Address(RVA = "0x6AC9F90", Offset = "0x6AC8F90", VA = "0x6AC9F90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000662")]
		public override string ussName
		{
			[Token(Token = "0x60018BE")]
			[Address(RVA = "0x6AC9FC0", Offset = "0x6AC8FC0", VA = "0x6AC9FC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000663")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018BF")]
			[Address(RVA = "0x6AC9FF0", Offset = "0x6AC8FF0", VA = "0x6AC9FF0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018C0")]
		[Address(RVA = "0x6ACA000", Offset = "0x6AC9000", VA = "0x6ACA000", Slot = "14")]
		public override StyleInt GetValue(ref InlineStyleAccess container)
		{
			return default(StyleInt);
		}

		[Token(Token = "0x60018C1")]
		[Address(RVA = "0x6ACA0A0", Offset = "0x6AC90A0", VA = "0x6ACA0A0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleInt value)
		{
		}

		[Token(Token = "0x60018C2")]
		[Address(RVA = "0x6AC0F20", Offset = "0x6ABFF20", VA = "0x6AC0F20")]
		public UnitySliceLeftProperty()
		{
		}
	}

	[Token(Token = "0x2000356")]
	private class UnitySliceRightProperty : InlineStyleIntProperty
	{
		[Token(Token = "0x17000664")]
		public override string Name
		{
			[Token(Token = "0x60018C3")]
			[Address(RVA = "0x6ACA160", Offset = "0x6AC9160", VA = "0x6ACA160", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000665")]
		public override string ussName
		{
			[Token(Token = "0x60018C4")]
			[Address(RVA = "0x6ACA190", Offset = "0x6AC9190", VA = "0x6ACA190", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000666")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018C5")]
			[Address(RVA = "0x6ACA1C0", Offset = "0x6AC91C0", VA = "0x6ACA1C0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018C6")]
		[Address(RVA = "0x6ACA1D0", Offset = "0x6AC91D0", VA = "0x6ACA1D0", Slot = "14")]
		public override StyleInt GetValue(ref InlineStyleAccess container)
		{
			return default(StyleInt);
		}

		[Token(Token = "0x60018C7")]
		[Address(RVA = "0x6ACA270", Offset = "0x6AC9270", VA = "0x6ACA270", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleInt value)
		{
		}

		[Token(Token = "0x60018C8")]
		[Address(RVA = "0x6AC0F60", Offset = "0x6ABFF60", VA = "0x6AC0F60")]
		public UnitySliceRightProperty()
		{
		}
	}

	[Token(Token = "0x2000357")]
	private class UnitySliceScaleProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x17000667")]
		public override string Name
		{
			[Token(Token = "0x60018C9")]
			[Address(RVA = "0x6ACA330", Offset = "0x6AC9330", VA = "0x6ACA330", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000668")]
		public override string ussName
		{
			[Token(Token = "0x60018CA")]
			[Address(RVA = "0x6ACA360", Offset = "0x6AC9360", VA = "0x6ACA360", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000669")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018CB")]
			[Address(RVA = "0x6ACA390", Offset = "0x6AC9390", VA = "0x6ACA390", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018CC")]
		[Address(RVA = "0x6ACA3A0", Offset = "0x6AC93A0", VA = "0x6ACA3A0", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x60018CD")]
		[Address(RVA = "0x6ACA440", Offset = "0x6AC9440", VA = "0x6ACA440", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x60018CE")]
		[Address(RVA = "0x6AC0FA0", Offset = "0x6ABFFA0", VA = "0x6AC0FA0")]
		public UnitySliceScaleProperty()
		{
		}
	}

	[Token(Token = "0x2000358")]
	private class UnitySliceTopProperty : InlineStyleIntProperty
	{
		[Token(Token = "0x1700066A")]
		public override string Name
		{
			[Token(Token = "0x60018CF")]
			[Address(RVA = "0x6ACA500", Offset = "0x6AC9500", VA = "0x6ACA500", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700066B")]
		public override string ussName
		{
			[Token(Token = "0x60018D0")]
			[Address(RVA = "0x6ACA530", Offset = "0x6AC9530", VA = "0x6ACA530", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700066C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018D1")]
			[Address(RVA = "0x6ACA560", Offset = "0x6AC9560", VA = "0x6ACA560", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018D2")]
		[Address(RVA = "0x6ACA570", Offset = "0x6AC9570", VA = "0x6ACA570", Slot = "14")]
		public override StyleInt GetValue(ref InlineStyleAccess container)
		{
			return default(StyleInt);
		}

		[Token(Token = "0x60018D3")]
		[Address(RVA = "0x6ACA610", Offset = "0x6AC9610", VA = "0x6ACA610", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleInt value)
		{
		}

		[Token(Token = "0x60018D4")]
		[Address(RVA = "0x6AC0FE0", Offset = "0x6ABFFE0", VA = "0x6AC0FE0")]
		public UnitySliceTopProperty()
		{
		}
	}

	[Token(Token = "0x2000359")]
	private class UnitySliceTypeProperty : InlineStyleEnumProperty<SliceType>
	{
		[Token(Token = "0x1700066D")]
		public override string Name
		{
			[Token(Token = "0x60018D5")]
			[Address(RVA = "0x6ACA6D0", Offset = "0x6AC96D0", VA = "0x6ACA6D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700066E")]
		public override string ussName
		{
			[Token(Token = "0x60018D6")]
			[Address(RVA = "0x6ACA700", Offset = "0x6AC9700", VA = "0x6ACA700", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700066F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018D7")]
			[Address(RVA = "0x6ACA730", Offset = "0x6AC9730", VA = "0x6ACA730", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018D8")]
		[Address(RVA = "0x6ACA740", Offset = "0x6AC9740", VA = "0x6ACA740", Slot = "14")]
		public override StyleEnum<SliceType> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<SliceType>);
		}

		[Token(Token = "0x60018D9")]
		[Address(RVA = "0x6ACA7E0", Offset = "0x6AC97E0", VA = "0x6ACA7E0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<SliceType> value)
		{
		}

		[Token(Token = "0x60018DA")]
		[Address(RVA = "0x6AC1020", Offset = "0x6AC0020", VA = "0x6AC1020")]
		public UnitySliceTypeProperty()
		{
		}
	}

	[Token(Token = "0x200035A")]
	private class UnityTextAlignProperty : InlineStyleEnumProperty<TextAnchor>
	{
		[Token(Token = "0x17000670")]
		public override string Name
		{
			[Token(Token = "0x60018DB")]
			[Address(RVA = "0x6ACA8A0", Offset = "0x6AC98A0", VA = "0x6ACA8A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000671")]
		public override string ussName
		{
			[Token(Token = "0x60018DC")]
			[Address(RVA = "0x6ACA8D0", Offset = "0x6AC98D0", VA = "0x6ACA8D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000672")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018DD")]
			[Address(RVA = "0x6ACA900", Offset = "0x6AC9900", VA = "0x6ACA900", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018DE")]
		[Address(RVA = "0x6ACA910", Offset = "0x6AC9910", VA = "0x6ACA910", Slot = "14")]
		public override StyleEnum<TextAnchor> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<TextAnchor>);
		}

		[Token(Token = "0x60018DF")]
		[Address(RVA = "0x6ACA9B0", Offset = "0x6AC99B0", VA = "0x6ACA9B0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<TextAnchor> value)
		{
		}

		[Token(Token = "0x60018E0")]
		[Address(RVA = "0x6AC1060", Offset = "0x6AC0060", VA = "0x6AC1060")]
		public UnityTextAlignProperty()
		{
		}
	}

	[Token(Token = "0x200035B")]
	private class UnityTextAutoSizeProperty : InlineStyleTextAutoSizeProperty
	{
		[Token(Token = "0x17000673")]
		public override string Name
		{
			[Token(Token = "0x60018E1")]
			[Address(RVA = "0x6ACAA70", Offset = "0x6AC9A70", VA = "0x6ACAA70", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000674")]
		public override string ussName
		{
			[Token(Token = "0x60018E2")]
			[Address(RVA = "0x6ACAAA0", Offset = "0x6AC9AA0", VA = "0x6ACAAA0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000675")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018E3")]
			[Address(RVA = "0x6ACAAD0", Offset = "0x6AC9AD0", VA = "0x6ACAAD0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018E4")]
		[Address(RVA = "0x6ACAAE0", Offset = "0x6AC9AE0", VA = "0x6ACAAE0", Slot = "14")]
		public override StyleTextAutoSize GetValue(ref InlineStyleAccess container)
		{
			return default(StyleTextAutoSize);
		}

		[Token(Token = "0x60018E5")]
		[Address(RVA = "0x6ACABB0", Offset = "0x6AC9BB0", VA = "0x6ACABB0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleTextAutoSize value)
		{
		}

		[Token(Token = "0x60018E6")]
		[Address(RVA = "0x6AC10A0", Offset = "0x6AC00A0", VA = "0x6AC10A0")]
		public UnityTextAutoSizeProperty()
		{
		}
	}

	[Token(Token = "0x200035C")]
	private class UnityTextGeneratorProperty : InlineStyleEnumProperty<TextGeneratorType>
	{
		[Token(Token = "0x17000676")]
		public override string Name
		{
			[Token(Token = "0x60018E7")]
			[Address(RVA = "0x6ACAC90", Offset = "0x6AC9C90", VA = "0x6ACAC90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000677")]
		public override string ussName
		{
			[Token(Token = "0x60018E8")]
			[Address(RVA = "0x6ACACC0", Offset = "0x6AC9CC0", VA = "0x6ACACC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000678")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018E9")]
			[Address(RVA = "0x6ACACF0", Offset = "0x6AC9CF0", VA = "0x6ACACF0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018EA")]
		[Address(RVA = "0x6ACAD00", Offset = "0x6AC9D00", VA = "0x6ACAD00", Slot = "14")]
		public override StyleEnum<TextGeneratorType> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<TextGeneratorType>);
		}

		[Token(Token = "0x60018EB")]
		[Address(RVA = "0x6ACADA0", Offset = "0x6AC9DA0", VA = "0x6ACADA0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<TextGeneratorType> value)
		{
		}

		[Token(Token = "0x60018EC")]
		[Address(RVA = "0x6AC10E0", Offset = "0x6AC00E0", VA = "0x6AC10E0")]
		public UnityTextGeneratorProperty()
		{
		}
	}

	[Token(Token = "0x200035D")]
	private class UnityTextOutlineColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x17000679")]
		public override string Name
		{
			[Token(Token = "0x60018ED")]
			[Address(RVA = "0x6ACAE60", Offset = "0x6AC9E60", VA = "0x6ACAE60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067A")]
		public override string ussName
		{
			[Token(Token = "0x60018EE")]
			[Address(RVA = "0x6ACAE90", Offset = "0x6AC9E90", VA = "0x6ACAE90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018EF")]
			[Address(RVA = "0x6ACAEC0", Offset = "0x6AC9EC0", VA = "0x6ACAEC0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018F0")]
		[Address(RVA = "0x6ACAED0", Offset = "0x6AC9ED0", VA = "0x6ACAED0", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x60018F1")]
		[Address(RVA = "0x6ACAFA0", Offset = "0x6AC9FA0", VA = "0x6ACAFA0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x60018F2")]
		[Address(RVA = "0x6AC1120", Offset = "0x6AC0120", VA = "0x6AC1120")]
		public UnityTextOutlineColorProperty()
		{
		}
	}

	[Token(Token = "0x200035E")]
	private class UnityTextOutlineWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x1700067C")]
		public override string Name
		{
			[Token(Token = "0x60018F3")]
			[Address(RVA = "0x6ACB040", Offset = "0x6ACA040", VA = "0x6ACB040", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067D")]
		public override string ussName
		{
			[Token(Token = "0x60018F4")]
			[Address(RVA = "0x6ACB070", Offset = "0x6ACA070", VA = "0x6ACB070", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018F5")]
			[Address(RVA = "0x6ACB0A0", Offset = "0x6ACA0A0", VA = "0x6ACB0A0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018F6")]
		[Address(RVA = "0x6ACB0B0", Offset = "0x6ACA0B0", VA = "0x6ACB0B0", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x60018F7")]
		[Address(RVA = "0x6ACB150", Offset = "0x6ACA150", VA = "0x6ACB150", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x60018F8")]
		[Address(RVA = "0x6AC1160", Offset = "0x6AC0160", VA = "0x6AC1160")]
		public UnityTextOutlineWidthProperty()
		{
		}
	}

	[Token(Token = "0x200035F")]
	private class UnityTextOverflowPositionProperty : InlineStyleEnumProperty<TextOverflowPosition>
	{
		[Token(Token = "0x1700067F")]
		public override string Name
		{
			[Token(Token = "0x60018F9")]
			[Address(RVA = "0x6ACB210", Offset = "0x6ACA210", VA = "0x6ACB210", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000680")]
		public override string ussName
		{
			[Token(Token = "0x60018FA")]
			[Address(RVA = "0x6ACB240", Offset = "0x6ACA240", VA = "0x6ACB240", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000681")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60018FB")]
			[Address(RVA = "0x6ACB270", Offset = "0x6ACA270", VA = "0x6ACB270", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60018FC")]
		[Address(RVA = "0x6ACB280", Offset = "0x6ACA280", VA = "0x6ACB280", Slot = "14")]
		public override StyleEnum<TextOverflowPosition> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<TextOverflowPosition>);
		}

		[Token(Token = "0x60018FD")]
		[Address(RVA = "0x6ACB320", Offset = "0x6ACA320", VA = "0x6ACB320", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<TextOverflowPosition> value)
		{
		}

		[Token(Token = "0x60018FE")]
		[Address(RVA = "0x6AC11A0", Offset = "0x6AC01A0", VA = "0x6AC11A0")]
		public UnityTextOverflowPositionProperty()
		{
		}
	}

	[Token(Token = "0x2000360")]
	private class VisibilityProperty : InlineStyleEnumProperty<Visibility>
	{
		[Token(Token = "0x17000682")]
		public override string Name
		{
			[Token(Token = "0x60018FF")]
			[Address(RVA = "0x6ACB3E0", Offset = "0x6ACA3E0", VA = "0x6ACB3E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000683")]
		public override string ussName
		{
			[Token(Token = "0x6001900")]
			[Address(RVA = "0x6ACB410", Offset = "0x6ACA410", VA = "0x6ACB410", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000684")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001901")]
			[Address(RVA = "0x6ACB440", Offset = "0x6ACA440", VA = "0x6ACB440", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001902")]
		[Address(RVA = "0x6ACB450", Offset = "0x6ACA450", VA = "0x6ACB450", Slot = "14")]
		public override StyleEnum<Visibility> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Visibility>);
		}

		[Token(Token = "0x6001903")]
		[Address(RVA = "0x6ACB4F0", Offset = "0x6ACA4F0", VA = "0x6ACB4F0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Visibility> value)
		{
		}

		[Token(Token = "0x6001904")]
		[Address(RVA = "0x6AC11E0", Offset = "0x6AC01E0", VA = "0x6AC11E0")]
		public VisibilityProperty()
		{
		}
	}

	[Token(Token = "0x2000361")]
	private class WhiteSpaceProperty : InlineStyleEnumProperty<WhiteSpace>
	{
		[Token(Token = "0x17000685")]
		public override string Name
		{
			[Token(Token = "0x6001905")]
			[Address(RVA = "0x6ACB5B0", Offset = "0x6ACA5B0", VA = "0x6ACB5B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000686")]
		public override string ussName
		{
			[Token(Token = "0x6001906")]
			[Address(RVA = "0x6ACB5E0", Offset = "0x6ACA5E0", VA = "0x6ACB5E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000687")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001907")]
			[Address(RVA = "0x6ACB610", Offset = "0x6ACA610", VA = "0x6ACB610", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001908")]
		[Address(RVA = "0x6ACB620", Offset = "0x6ACA620", VA = "0x6ACB620", Slot = "14")]
		public override StyleEnum<WhiteSpace> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<WhiteSpace>);
		}

		[Token(Token = "0x6001909")]
		[Address(RVA = "0x6ACB6C0", Offset = "0x6ACA6C0", VA = "0x6ACB6C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<WhiteSpace> value)
		{
		}

		[Token(Token = "0x600190A")]
		[Address(RVA = "0x6AC1220", Offset = "0x6AC0220", VA = "0x6AC1220")]
		public WhiteSpaceProperty()
		{
		}
	}

	[Token(Token = "0x2000362")]
	private class WidthProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000688")]
		public override string Name
		{
			[Token(Token = "0x600190B")]
			[Address(RVA = "0x6ACB780", Offset = "0x6ACA780", VA = "0x6ACB780", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000689")]
		public override string ussName
		{
			[Token(Token = "0x600190C")]
			[Address(RVA = "0x6ACB7B0", Offset = "0x6ACA7B0", VA = "0x6ACB7B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700068A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600190D")]
			[Address(RVA = "0x6ACB7E0", Offset = "0x6ACA7E0", VA = "0x6ACB7E0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600190E")]
		[Address(RVA = "0x6ACB7F0", Offset = "0x6ACA7F0", VA = "0x6ACB7F0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600190F")]
		[Address(RVA = "0x6ACB890", Offset = "0x6ACA890", VA = "0x6ACB890", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001910")]
		[Address(RVA = "0x6AC1260", Offset = "0x6AC0260", VA = "0x6AC1260")]
		public WidthProperty()
		{
		}
	}

	[Token(Token = "0x2000363")]
	private class WordSpacingProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700068B")]
		public override string Name
		{
			[Token(Token = "0x6001911")]
			[Address(RVA = "0x6ACB950", Offset = "0x6ACA950", VA = "0x6ACB950", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700068C")]
		public override string ussName
		{
			[Token(Token = "0x6001912")]
			[Address(RVA = "0x6ACB980", Offset = "0x6ACA980", VA = "0x6ACB980", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700068D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001913")]
			[Address(RVA = "0x6ACB9B0", Offset = "0x6ACA9B0", VA = "0x6ACB9B0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001914")]
		[Address(RVA = "0x6ACB9C0", Offset = "0x6ACA9C0", VA = "0x6ACB9C0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001915")]
		[Address(RVA = "0x6ACBA60", Offset = "0x6ACAA60", VA = "0x6ACBA60", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001916")]
		[Address(RVA = "0x6AC12A0", Offset = "0x6AC02A0", VA = "0x6AC12A0")]
		public WordSpacingProperty()
		{
		}
	}

	[Token(Token = "0x2000364")]
	internal interface IStyleProperty : IProperty<InlineStyleAccess>, IProperty, IPropertyAccept<InlineStyleAccess>
	{
		[Token(Token = "0x1700068E")]
		string ussName
		{
			[Token(Token = "0x6001917")]
			get;
		}
	}

	[Token(Token = "0x2000365")]
	private abstract class InlineStyleProperty<TStyleValue> : Property<InlineStyleAccess, TStyleValue>, IStyleProperty, IProperty<InlineStyleAccess>, IProperty, IPropertyAccept<InlineStyleAccess>
	{
		[Token(Token = "0x1700068F")]
		public abstract string ussName
		{
			[Token(Token = "0x6001918")]
			get;
		}

		[Token(Token = "0x6001919")]
		protected InlineStyleProperty()
		{
		}
	}

	[Token(Token = "0x2000366")]
	private abstract class InlineStyleEnumProperty<TValue> : InlineStyleProperty<StyleEnum<TValue>> where TValue : struct, IConvertible
	{
		[Token(Token = "0x600191A")]
		protected InlineStyleEnumProperty()
		{
		}
	}

	[Token(Token = "0x2000367")]
	private abstract class InlineStyleColorProperty : InlineStyleProperty<StyleColor>
	{
		[Token(Token = "0x600191B")]
		[Address(RVA = "0x6AC2040", Offset = "0x6AC1040", VA = "0x6AC2040")]
		protected InlineStyleColorProperty()
		{
		}
	}

	[Token(Token = "0x2000368")]
	private abstract class InlineStyleRatioProperty : InlineStyleProperty<StyleRatio>
	{
		[Token(Token = "0x600191C")]
		[Address(RVA = "0x6AC1E20", Offset = "0x6AC0E20", VA = "0x6AC1E20")]
		protected InlineStyleRatioProperty()
		{
		}
	}

	[Token(Token = "0x2000369")]
	private abstract class InlineStyleBackgroundProperty : InlineStyleProperty<StyleBackground>
	{
		[Token(Token = "0x600191D")]
		[Address(RVA = "0x6AC2260", Offset = "0x6AC1260", VA = "0x6AC2260")]
		protected InlineStyleBackgroundProperty()
		{
		}
	}

	[Token(Token = "0x200036A")]
	private abstract class InlineStyleLengthProperty : InlineStyleProperty<StyleLength>
	{
		[Token(Token = "0x600191E")]
		[Address(RVA = "0x6AC2E60", Offset = "0x6AC1E60", VA = "0x6AC2E60")]
		protected InlineStyleLengthProperty()
		{
		}
	}

	[Token(Token = "0x200036B")]
	private abstract class InlineStyleFloatProperty : InlineStyleProperty<StyleFloat>
	{
		[Token(Token = "0x600191F")]
		[Address(RVA = "0x6AC3230", Offset = "0x6AC2230", VA = "0x6AC3230")]
		protected InlineStyleFloatProperty()
		{
		}
	}

	[Token(Token = "0x200036C")]
	private abstract class InlineStyleListProperty<T> : InlineStyleProperty<StyleList<T>>
	{
		[Token(Token = "0x6001920")]
		protected InlineStyleListProperty()
		{
		}
	}

	[Token(Token = "0x200036D")]
	private abstract class InlineStyleFontProperty : InlineStyleProperty<StyleFont>
	{
		[Token(Token = "0x6001921")]
		[Address(RVA = "0x6AC9390", Offset = "0x6AC8390", VA = "0x6AC9390")]
		protected InlineStyleFontProperty()
		{
		}
	}

	[Token(Token = "0x200036E")]
	private abstract class InlineStyleFontDefinitionProperty : InlineStyleProperty<StyleFontDefinition>
	{
		[Token(Token = "0x6001922")]
		[Address(RVA = "0x6AC95B0", Offset = "0x6AC85B0", VA = "0x6AC95B0")]
		protected InlineStyleFontDefinitionProperty()
		{
		}
	}

	[Token(Token = "0x200036F")]
	private abstract class InlineStyleIntProperty : InlineStyleProperty<StyleInt>
	{
		[Token(Token = "0x6001923")]
		[Address(RVA = "0x6AC9F50", Offset = "0x6AC8F50", VA = "0x6AC9F50")]
		protected InlineStyleIntProperty()
		{
		}
	}

	[Token(Token = "0x2000370")]
	private abstract class InlineStyleRotateProperty : InlineStyleProperty<StyleRotate>
	{
		[Token(Token = "0x6001924")]
		[Address(RVA = "0x6AC7AC0", Offset = "0x6AC6AC0", VA = "0x6AC7AC0")]
		protected InlineStyleRotateProperty()
		{
		}
	}

	[Token(Token = "0x2000371")]
	private abstract class InlineStyleScaleProperty : InlineStyleProperty<StyleScale>
	{
		[Token(Token = "0x6001925")]
		[Address(RVA = "0x6AC7CE0", Offset = "0x6AC6CE0", VA = "0x6AC7CE0")]
		protected InlineStyleScaleProperty()
		{
		}
	}

	[Token(Token = "0x2000372")]
	private abstract class InlineStyleCursorProperty : InlineStyleProperty<StyleCursor>
	{
		[Token(Token = "0x6001926")]
		[Address(RVA = "0x6AC4680", Offset = "0x6AC3680", VA = "0x6AC4680")]
		protected InlineStyleCursorProperty()
		{
		}
	}

	[Token(Token = "0x2000373")]
	private abstract class InlineStyleTextShadowProperty : InlineStyleProperty<StyleTextShadow>
	{
		[Token(Token = "0x6001927")]
		[Address(RVA = "0x6AC80C0", Offset = "0x6AC70C0", VA = "0x6AC80C0")]
		protected InlineStyleTextShadowProperty()
		{
		}
	}

	[Token(Token = "0x2000374")]
	private abstract class InlineStyleTextAutoSizeProperty : InlineStyleProperty<StyleTextAutoSize>
	{
		[Token(Token = "0x6001928")]
		[Address(RVA = "0x6ACAC50", Offset = "0x6AC9C50", VA = "0x6ACAC50")]
		protected InlineStyleTextAutoSizeProperty()
		{
		}
	}

	[Token(Token = "0x2000375")]
	private abstract class InlineStyleTransformOriginProperty : InlineStyleProperty<StyleTransformOrigin>
	{
		[Token(Token = "0x6001929")]
		[Address(RVA = "0x6AC84B0", Offset = "0x6AC74B0", VA = "0x6AC84B0")]
		protected InlineStyleTransformOriginProperty()
		{
		}
	}

	[Token(Token = "0x2000376")]
	private abstract class InlineStyleTranslateProperty : InlineStyleProperty<StyleTranslate>
	{
		[Token(Token = "0x600192A")]
		[Address(RVA = "0x6AC8DD0", Offset = "0x6AC7DD0", VA = "0x6AC8DD0")]
		protected InlineStyleTranslateProperty()
		{
		}
	}

	[Token(Token = "0x2000377")]
	private abstract class InlineStyleBackgroundPositionProperty : InlineStyleProperty<StyleBackgroundPosition>
	{
		[Token(Token = "0x600192B")]
		[Address(RVA = "0x6AC2470", Offset = "0x6AC1470", VA = "0x6AC2470")]
		protected InlineStyleBackgroundPositionProperty()
		{
		}
	}

	[Token(Token = "0x2000378")]
	private abstract class InlineStyleBackgroundRepeatProperty : InlineStyleProperty<StyleBackgroundRepeat>
	{
		[Token(Token = "0x600192C")]
		[Address(RVA = "0x6AC2850", Offset = "0x6AC1850", VA = "0x6AC2850")]
		protected InlineStyleBackgroundRepeatProperty()
		{
		}
	}

	[Token(Token = "0x2000379")]
	private abstract class InlineStyleBackgroundSizeProperty : InlineStyleProperty<StyleBackgroundSize>
	{
		[Token(Token = "0x600192D")]
		[Address(RVA = "0x6AC2A70", Offset = "0x6AC1A70", VA = "0x6AC2A70")]
		protected InlineStyleBackgroundSizeProperty()
		{
		}
	}

	[Token(Token = "0x200037A")]
	private abstract class InlineStyleMaterialDefinitionProperty : InlineStyleProperty<StyleMaterialDefinition>
	{
		[Token(Token = "0x600192E")]
		[Address(RVA = "0x6AC99A0", Offset = "0x6AC89A0", VA = "0x6AC99A0")]
		protected InlineStyleMaterialDefinitionProperty()
		{
		}
	}

	[Token(Token = "0x4000BE9")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<IProperty<InlineStyleAccess>> m_PropertiesList;

	[Token(Token = "0x4000BEA")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, IProperty<InlineStyleAccess>> m_PropertiesHash;

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x6ABCD10", Offset = "0x6ABBD10", VA = "0x6ABCD10")]
	public InlineStyleAccessPropertyBag()
	{
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x6AC12E0", Offset = "0x6AC02E0", VA = "0x6AC12E0")]
	private void AddPropertyRange(params IStyleProperty[] properties)
	{
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x6AC1610", Offset = "0x6AC0610", VA = "0x6AC1610", Slot = "12")]
	public override PropertyCollection<InlineStyleAccess> GetProperties()
	{
		return default(PropertyCollection<InlineStyleAccess>);
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x6AC1670", Offset = "0x6AC0670", VA = "0x6AC1670", Slot = "13")]
	public override PropertyCollection<InlineStyleAccess> GetProperties(ref InlineStyleAccess container)
	{
		return default(PropertyCollection<InlineStyleAccess>);
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x6AC16D0", Offset = "0x6AC06D0", VA = "0x6AC16D0", Slot = "16")]
	public bool TryGetProperty(ref InlineStyleAccess container, string name, out IProperty<InlineStyleAccess> property)
	{
		return default(bool);
	}
}
