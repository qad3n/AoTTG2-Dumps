// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.InlineStyleAccessPropertyBag
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000309")]
internal class InlineStyleAccessPropertyBag : PropertyBag<InlineStyleAccess>, INamedProperties<InlineStyleAccess>
{
	[Token(Token = "0x200030A")]
	private class AlignContentProperty : InlineStyleEnumProperty<Align>
	{
		[Token(Token = "0x170004DB")]
		public override string Name
		{
			[Token(Token = "0x6001604")]
			[Address(RVA = "0x30B61D0", Offset = "0x30B47D0", VA = "0x1830B61D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004DC")]
		public override string ussName
		{
			[Token(Token = "0x6001605")]
			[Address(RVA = "0x30B6200", Offset = "0x30B4800", VA = "0x1830B6200", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004DD")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001606")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001607")]
		[Address(RVA = "0x30B60E0", Offset = "0x30B46E0", VA = "0x1830B60E0", Slot = "14")]
		public override StyleEnum<Align> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Align>);
		}

		[Token(Token = "0x6001608")]
		[Address(RVA = "0x30B6130", Offset = "0x30B4730", VA = "0x1830B6130", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Align> value)
		{
		}

		[Token(Token = "0x6001609")]
		[Address(RVA = "0x30B6190", Offset = "0x30B4790", VA = "0x1830B6190")]
		public AlignContentProperty()
		{
		}
	}

	[Token(Token = "0x200030B")]
	private class AlignItemsProperty : InlineStyleEnumProperty<Align>
	{
		[Token(Token = "0x170004DE")]
		public override string Name
		{
			[Token(Token = "0x600160A")]
			[Address(RVA = "0x30B6320", Offset = "0x30B4920", VA = "0x1830B6320", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004DF")]
		public override string ussName
		{
			[Token(Token = "0x600160B")]
			[Address(RVA = "0x30B6350", Offset = "0x30B4950", VA = "0x1830B6350", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004E0")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600160C")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600160D")]
		[Address(RVA = "0x30B6230", Offset = "0x30B4830", VA = "0x1830B6230", Slot = "14")]
		public override StyleEnum<Align> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Align>);
		}

		[Token(Token = "0x600160E")]
		[Address(RVA = "0x30B6280", Offset = "0x30B4880", VA = "0x1830B6280", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Align> value)
		{
		}

		[Token(Token = "0x600160F")]
		[Address(RVA = "0x30B62E0", Offset = "0x30B48E0", VA = "0x1830B62E0")]
		public AlignItemsProperty()
		{
		}
	}

	[Token(Token = "0x200030C")]
	private class AlignSelfProperty : InlineStyleEnumProperty<Align>
	{
		[Token(Token = "0x170004E1")]
		public override string Name
		{
			[Token(Token = "0x6001610")]
			[Address(RVA = "0x30B6470", Offset = "0x30B4A70", VA = "0x1830B6470", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004E2")]
		public override string ussName
		{
			[Token(Token = "0x6001611")]
			[Address(RVA = "0x30B64A0", Offset = "0x30B4AA0", VA = "0x1830B64A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004E3")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001612")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001613")]
		[Address(RVA = "0x30B6380", Offset = "0x30B4980", VA = "0x1830B6380", Slot = "14")]
		public override StyleEnum<Align> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Align>);
		}

		[Token(Token = "0x6001614")]
		[Address(RVA = "0x30B63D0", Offset = "0x30B49D0", VA = "0x1830B63D0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Align> value)
		{
		}

		[Token(Token = "0x6001615")]
		[Address(RVA = "0x30B6430", Offset = "0x30B4A30", VA = "0x1830B6430")]
		public AlignSelfProperty()
		{
		}
	}

	[Token(Token = "0x200030D")]
	private class AspectRatioProperty : InlineStyleRatioProperty
	{
		[Token(Token = "0x170004E4")]
		public override string Name
		{
			[Token(Token = "0x6001616")]
			[Address(RVA = "0x30B66A0", Offset = "0x30B4CA0", VA = "0x1830B66A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004E5")]
		public override string ussName
		{
			[Token(Token = "0x6001617")]
			[Address(RVA = "0x30B66D0", Offset = "0x30B4CD0", VA = "0x1830B66D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004E6")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001618")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001619")]
		[Address(RVA = "0x30B64D0", Offset = "0x30B4AD0", VA = "0x1830B64D0", Slot = "14")]
		public override StyleRatio GetValue(ref InlineStyleAccess container)
		{
			return default(StyleRatio);
		}

		[Token(Token = "0x600161A")]
		[Address(RVA = "0x30B6590", Offset = "0x30B4B90", VA = "0x1830B6590", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleRatio value)
		{
		}

		[Token(Token = "0x600161B")]
		[Address(RVA = "0x30B6660", Offset = "0x30B4C60", VA = "0x1830B6660")]
		public AspectRatioProperty()
		{
		}
	}

	[Token(Token = "0x200030E")]
	private class BackgroundColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x170004E7")]
		public override string Name
		{
			[Token(Token = "0x600161C")]
			[Address(RVA = "0x30B6900", Offset = "0x30B4F00", VA = "0x1830B6900", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004E8")]
		public override string ussName
		{
			[Token(Token = "0x600161D")]
			[Address(RVA = "0x30B6930", Offset = "0x30B4F30", VA = "0x1830B6930", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004E9")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600161E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600161F")]
		[Address(RVA = "0x30B6700", Offset = "0x30B4D00", VA = "0x1830B6700", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001620")]
		[Address(RVA = "0x30B67E0", Offset = "0x30B4DE0", VA = "0x1830B67E0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001621")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		public BackgroundColorProperty()
		{
		}
	}

	[Token(Token = "0x200030F")]
	private class BackgroundImageProperty : InlineStyleBackgroundProperty
	{
		[Token(Token = "0x170004EA")]
		public override string Name
		{
			[Token(Token = "0x6001622")]
			[Address(RVA = "0x30B6B60", Offset = "0x30B5160", VA = "0x1830B6B60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004EB")]
		public override string ussName
		{
			[Token(Token = "0x6001623")]
			[Address(RVA = "0x30B6B90", Offset = "0x30B5190", VA = "0x1830B6B90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004EC")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001624")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001625")]
		[Address(RVA = "0x30B6960", Offset = "0x30B4F60", VA = "0x1830B6960", Slot = "14")]
		public override StyleBackground GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackground);
		}

		[Token(Token = "0x6001626")]
		[Address(RVA = "0x30B6A40", Offset = "0x30B5040", VA = "0x1830B6A40", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackground value)
		{
		}

		[Token(Token = "0x6001627")]
		[Address(RVA = "0x30B6B20", Offset = "0x30B5120", VA = "0x1830B6B20")]
		public BackgroundImageProperty()
		{
		}
	}

	[Token(Token = "0x2000310")]
	private class BackgroundPositionXProperty : InlineStyleBackgroundPositionProperty
	{
		[Token(Token = "0x170004ED")]
		public override string Name
		{
			[Token(Token = "0x6001628")]
			[Address(RVA = "0x30B6DA0", Offset = "0x30B53A0", VA = "0x1830B6DA0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004EE")]
		public override string ussName
		{
			[Token(Token = "0x6001629")]
			[Address(RVA = "0x30B6DD0", Offset = "0x30B53D0", VA = "0x1830B6DD0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004EF")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600162A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600162B")]
		[Address(RVA = "0x30B6BC0", Offset = "0x30B51C0", VA = "0x1830B6BC0", Slot = "14")]
		public override StyleBackgroundPosition GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackgroundPosition);
		}

		[Token(Token = "0x600162C")]
		[Address(RVA = "0x30B6C90", Offset = "0x30B5290", VA = "0x1830B6C90", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackgroundPosition value)
		{
		}

		[Token(Token = "0x600162D")]
		[Address(RVA = "0x30B6D60", Offset = "0x30B5360", VA = "0x1830B6D60")]
		public BackgroundPositionXProperty()
		{
		}
	}

	[Token(Token = "0x2000311")]
	private class BackgroundPositionYProperty : InlineStyleBackgroundPositionProperty
	{
		[Token(Token = "0x170004F0")]
		public override string Name
		{
			[Token(Token = "0x600162E")]
			[Address(RVA = "0x30B6FA0", Offset = "0x30B55A0", VA = "0x1830B6FA0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004F1")]
		public override string ussName
		{
			[Token(Token = "0x600162F")]
			[Address(RVA = "0x30B6FD0", Offset = "0x30B55D0", VA = "0x1830B6FD0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004F2")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001630")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001631")]
		[Address(RVA = "0x30B6E00", Offset = "0x30B5400", VA = "0x1830B6E00", Slot = "14")]
		public override StyleBackgroundPosition GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackgroundPosition);
		}

		[Token(Token = "0x6001632")]
		[Address(RVA = "0x30B6ED0", Offset = "0x30B54D0", VA = "0x1830B6ED0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackgroundPosition value)
		{
		}

		[Token(Token = "0x6001633")]
		[Address(RVA = "0x30B6D60", Offset = "0x30B5360", VA = "0x1830B6D60")]
		public BackgroundPositionYProperty()
		{
		}
	}

	[Token(Token = "0x2000312")]
	private class BackgroundRepeatProperty : InlineStyleBackgroundRepeatProperty
	{
		[Token(Token = "0x170004F3")]
		public override string Name
		{
			[Token(Token = "0x6001634")]
			[Address(RVA = "0x30B7200", Offset = "0x30B5800", VA = "0x1830B7200", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004F4")]
		public override string ussName
		{
			[Token(Token = "0x6001635")]
			[Address(RVA = "0x30B7230", Offset = "0x30B5830", VA = "0x1830B7230", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004F5")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001636")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001637")]
		[Address(RVA = "0x30B7000", Offset = "0x30B5600", VA = "0x1830B7000", Slot = "14")]
		public override StyleBackgroundRepeat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackgroundRepeat);
		}

		[Token(Token = "0x6001638")]
		[Address(RVA = "0x30B70E0", Offset = "0x30B56E0", VA = "0x1830B70E0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackgroundRepeat value)
		{
		}

		[Token(Token = "0x6001639")]
		[Address(RVA = "0x30B71C0", Offset = "0x30B57C0", VA = "0x1830B71C0")]
		public BackgroundRepeatProperty()
		{
		}
	}

	[Token(Token = "0x2000313")]
	private class BackgroundSizeProperty : InlineStyleBackgroundSizeProperty
	{
		[Token(Token = "0x170004F6")]
		public override string Name
		{
			[Token(Token = "0x600163A")]
			[Address(RVA = "0x30B7460", Offset = "0x30B5A60", VA = "0x1830B7460", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004F7")]
		public override string ussName
		{
			[Token(Token = "0x600163B")]
			[Address(RVA = "0x30B7490", Offset = "0x30B5A90", VA = "0x1830B7490", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004F8")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600163C")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600163D")]
		[Address(RVA = "0x30B7260", Offset = "0x30B5860", VA = "0x1830B7260", Slot = "14")]
		public override StyleBackgroundSize GetValue(ref InlineStyleAccess container)
		{
			return default(StyleBackgroundSize);
		}

		[Token(Token = "0x600163E")]
		[Address(RVA = "0x30B7340", Offset = "0x30B5940", VA = "0x1830B7340", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleBackgroundSize value)
		{
		}

		[Token(Token = "0x600163F")]
		[Address(RVA = "0x30B7420", Offset = "0x30B5A20", VA = "0x1830B7420")]
		public BackgroundSizeProperty()
		{
		}
	}

	[Token(Token = "0x2000314")]
	private class BorderBottomColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x170004F9")]
		public override string Name
		{
			[Token(Token = "0x6001640")]
			[Address(RVA = "0x30B7680", Offset = "0x30B5C80", VA = "0x1830B7680", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004FA")]
		public override string ussName
		{
			[Token(Token = "0x6001641")]
			[Address(RVA = "0x30B76B0", Offset = "0x30B5CB0", VA = "0x1830B76B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004FB")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001642")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001643")]
		[Address(RVA = "0x30B74C0", Offset = "0x30B5AC0", VA = "0x1830B74C0", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001644")]
		[Address(RVA = "0x30B75A0", Offset = "0x30B5BA0", VA = "0x1830B75A0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001645")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		public BorderBottomColorProperty()
		{
		}
	}

	[Token(Token = "0x2000315")]
	private class BorderBottomLeftRadiusProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170004FC")]
		public override string Name
		{
			[Token(Token = "0x6001646")]
			[Address(RVA = "0x30B78E0", Offset = "0x30B5EE0", VA = "0x1830B78E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004FD")]
		public override string ussName
		{
			[Token(Token = "0x6001647")]
			[Address(RVA = "0x30B7910", Offset = "0x30B5F10", VA = "0x1830B7910", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004FE")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001648")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001649")]
		[Address(RVA = "0x30B76E0", Offset = "0x30B5CE0", VA = "0x1830B76E0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600164A")]
		[Address(RVA = "0x30B77C0", Offset = "0x30B5DC0", VA = "0x1830B77C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600164B")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public BorderBottomLeftRadiusProperty()
		{
		}
	}

	[Token(Token = "0x2000316")]
	private class BorderBottomRightRadiusProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170004FF")]
		public override string Name
		{
			[Token(Token = "0x600164C")]
			[Address(RVA = "0x30B7B00", Offset = "0x30B6100", VA = "0x1830B7B00", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000500")]
		public override string ussName
		{
			[Token(Token = "0x600164D")]
			[Address(RVA = "0x30B7B30", Offset = "0x30B6130", VA = "0x1830B7B30", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000501")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600164E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600164F")]
		[Address(RVA = "0x30B7940", Offset = "0x30B5F40", VA = "0x1830B7940", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001650")]
		[Address(RVA = "0x30B7A20", Offset = "0x30B6020", VA = "0x1830B7A20", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001651")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public BorderBottomRightRadiusProperty()
		{
		}
	}

	[Token(Token = "0x2000317")]
	private class BorderBottomWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x17000502")]
		public override string Name
		{
			[Token(Token = "0x6001652")]
			[Address(RVA = "0x30B7C50", Offset = "0x30B6250", VA = "0x1830B7C50", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000503")]
		public override string ussName
		{
			[Token(Token = "0x6001653")]
			[Address(RVA = "0x30B7C80", Offset = "0x30B6280", VA = "0x1830B7C80", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000504")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001654")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001655")]
		[Address(RVA = "0x30B7B60", Offset = "0x30B6160", VA = "0x1830B7B60", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001656")]
		[Address(RVA = "0x30B7BB0", Offset = "0x30B61B0", VA = "0x1830B7BB0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001657")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public BorderBottomWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000318")]
	private class BorderLeftColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x17000505")]
		public override string Name
		{
			[Token(Token = "0x6001658")]
			[Address(RVA = "0x30B7E70", Offset = "0x30B6470", VA = "0x1830B7E70", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000506")]
		public override string ussName
		{
			[Token(Token = "0x6001659")]
			[Address(RVA = "0x30B7EA0", Offset = "0x30B64A0", VA = "0x1830B7EA0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000507")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600165A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600165B")]
		[Address(RVA = "0x30B7CB0", Offset = "0x30B62B0", VA = "0x1830B7CB0", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x600165C")]
		[Address(RVA = "0x30B7D90", Offset = "0x30B6390", VA = "0x1830B7D90", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x600165D")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		public BorderLeftColorProperty()
		{
		}
	}

	[Token(Token = "0x2000319")]
	private class BorderLeftWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x17000508")]
		public override string Name
		{
			[Token(Token = "0x600165E")]
			[Address(RVA = "0x30B7F80", Offset = "0x30B6580", VA = "0x1830B7F80", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000509")]
		public override string ussName
		{
			[Token(Token = "0x600165F")]
			[Address(RVA = "0x30B7FB0", Offset = "0x30B65B0", VA = "0x1830B7FB0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700050A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001660")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001661")]
		[Address(RVA = "0x30B7ED0", Offset = "0x30B64D0", VA = "0x1830B7ED0", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001662")]
		[Address(RVA = "0x30B7F20", Offset = "0x30B6520", VA = "0x1830B7F20", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001663")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public BorderLeftWidthProperty()
		{
		}
	}

	[Token(Token = "0x200031A")]
	private class BorderRightColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x1700050B")]
		public override string Name
		{
			[Token(Token = "0x6001664")]
			[Address(RVA = "0x30B81A0", Offset = "0x30B67A0", VA = "0x1830B81A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700050C")]
		public override string ussName
		{
			[Token(Token = "0x6001665")]
			[Address(RVA = "0x30B81D0", Offset = "0x30B67D0", VA = "0x1830B81D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700050D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001666")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001667")]
		[Address(RVA = "0x30B7FE0", Offset = "0x30B65E0", VA = "0x1830B7FE0", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001668")]
		[Address(RVA = "0x30B80C0", Offset = "0x30B66C0", VA = "0x1830B80C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001669")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		public BorderRightColorProperty()
		{
		}
	}

	[Token(Token = "0x200031B")]
	private class BorderRightWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x1700050E")]
		public override string Name
		{
			[Token(Token = "0x600166A")]
			[Address(RVA = "0x30B82B0", Offset = "0x30B68B0", VA = "0x1830B82B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700050F")]
		public override string ussName
		{
			[Token(Token = "0x600166B")]
			[Address(RVA = "0x30B82E0", Offset = "0x30B68E0", VA = "0x1830B82E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000510")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600166C")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600166D")]
		[Address(RVA = "0x30B8200", Offset = "0x30B6800", VA = "0x1830B8200", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x600166E")]
		[Address(RVA = "0x30B8250", Offset = "0x30B6850", VA = "0x1830B8250", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x600166F")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public BorderRightWidthProperty()
		{
		}
	}

	[Token(Token = "0x200031C")]
	private class BorderTopColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x17000511")]
		public override string Name
		{
			[Token(Token = "0x6001670")]
			[Address(RVA = "0x30B84D0", Offset = "0x30B6AD0", VA = "0x1830B84D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000512")]
		public override string ussName
		{
			[Token(Token = "0x6001671")]
			[Address(RVA = "0x30B8500", Offset = "0x30B6B00", VA = "0x1830B8500", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000513")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001672")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001673")]
		[Address(RVA = "0x30B8310", Offset = "0x30B6910", VA = "0x1830B8310", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001674")]
		[Address(RVA = "0x30B83F0", Offset = "0x30B69F0", VA = "0x1830B83F0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001675")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		public BorderTopColorProperty()
		{
		}
	}

	[Token(Token = "0x200031D")]
	private class BorderTopLeftRadiusProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000514")]
		public override string Name
		{
			[Token(Token = "0x6001676")]
			[Address(RVA = "0x30B86F0", Offset = "0x30B6CF0", VA = "0x1830B86F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000515")]
		public override string ussName
		{
			[Token(Token = "0x6001677")]
			[Address(RVA = "0x30B8720", Offset = "0x30B6D20", VA = "0x1830B8720", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000516")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001678")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001679")]
		[Address(RVA = "0x30B8530", Offset = "0x30B6B30", VA = "0x1830B8530", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600167A")]
		[Address(RVA = "0x30B8610", Offset = "0x30B6C10", VA = "0x1830B8610", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600167B")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public BorderTopLeftRadiusProperty()
		{
		}
	}

	[Token(Token = "0x200031E")]
	private class BorderTopRightRadiusProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000517")]
		public override string Name
		{
			[Token(Token = "0x600167C")]
			[Address(RVA = "0x30B8910", Offset = "0x30B6F10", VA = "0x1830B8910", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000518")]
		public override string ussName
		{
			[Token(Token = "0x600167D")]
			[Address(RVA = "0x30B8940", Offset = "0x30B6F40", VA = "0x1830B8940", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000519")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600167E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600167F")]
		[Address(RVA = "0x30B8750", Offset = "0x30B6D50", VA = "0x1830B8750", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001680")]
		[Address(RVA = "0x30B8830", Offset = "0x30B6E30", VA = "0x1830B8830", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001681")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public BorderTopRightRadiusProperty()
		{
		}
	}

	[Token(Token = "0x200031F")]
	private class BorderTopWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x1700051A")]
		public override string Name
		{
			[Token(Token = "0x6001682")]
			[Address(RVA = "0x30B8A20", Offset = "0x30B7020", VA = "0x1830B8A20", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700051B")]
		public override string ussName
		{
			[Token(Token = "0x6001683")]
			[Address(RVA = "0x30B8A50", Offset = "0x30B7050", VA = "0x1830B8A50", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700051C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001684")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001685")]
		[Address(RVA = "0x30B8970", Offset = "0x30B6F70", VA = "0x1830B8970", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001686")]
		[Address(RVA = "0x30B89C0", Offset = "0x30B6FC0", VA = "0x1830B89C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001687")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public BorderTopWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000320")]
	private class BottomProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700051D")]
		public override string Name
		{
			[Token(Token = "0x6001688")]
			[Address(RVA = "0x30B8C40", Offset = "0x30B7240", VA = "0x1830B8C40", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700051E")]
		public override string ussName
		{
			[Token(Token = "0x6001689")]
			[Address(RVA = "0x30B8C70", Offset = "0x30B7270", VA = "0x1830B8C70", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700051F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600168A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600168B")]
		[Address(RVA = "0x30B8A80", Offset = "0x30B7080", VA = "0x1830B8A80", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600168C")]
		[Address(RVA = "0x30B8B60", Offset = "0x30B7160", VA = "0x1830B8B60", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600168D")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public BottomProperty()
		{
		}
	}

	[Token(Token = "0x2000321")]
	private class ColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x17000520")]
		public override string Name
		{
			[Token(Token = "0x600168E")]
			[Address(RVA = "0x30B8E60", Offset = "0x30B7460", VA = "0x1830B8E60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000521")]
		public override string ussName
		{
			[Token(Token = "0x600168F")]
			[Address(RVA = "0x30B8E90", Offset = "0x30B7490", VA = "0x1830B8E90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000522")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001690")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001691")]
		[Address(RVA = "0x30B8CA0", Offset = "0x30B72A0", VA = "0x1830B8CA0", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001692")]
		[Address(RVA = "0x30B8D80", Offset = "0x30B7380", VA = "0x1830B8D80", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001693")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		public ColorProperty()
		{
		}
	}

	[Token(Token = "0x2000322")]
	private class CursorProperty : InlineStyleCursorProperty
	{
		[Token(Token = "0x17000523")]
		public override string Name
		{
			[Token(Token = "0x6001694")]
			[Address(RVA = "0x30B90C0", Offset = "0x30B76C0", VA = "0x1830B90C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000524")]
		public override string ussName
		{
			[Token(Token = "0x6001695")]
			[Address(RVA = "0x30B90F0", Offset = "0x30B76F0", VA = "0x1830B90F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000525")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001696")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001697")]
		[Address(RVA = "0x30B8EC0", Offset = "0x30B74C0", VA = "0x1830B8EC0", Slot = "14")]
		public override StyleCursor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleCursor);
		}

		[Token(Token = "0x6001698")]
		[Address(RVA = "0x30B8FA0", Offset = "0x30B75A0", VA = "0x1830B8FA0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleCursor value)
		{
		}

		[Token(Token = "0x6001699")]
		[Address(RVA = "0x30B9080", Offset = "0x30B7680", VA = "0x1830B9080")]
		public CursorProperty()
		{
		}
	}

	[Token(Token = "0x2000323")]
	private class DisplayProperty : InlineStyleEnumProperty<DisplayStyle>
	{
		[Token(Token = "0x17000526")]
		public override string Name
		{
			[Token(Token = "0x600169A")]
			[Address(RVA = "0x30B92F0", Offset = "0x30B78F0", VA = "0x1830B92F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000527")]
		public override string ussName
		{
			[Token(Token = "0x600169B")]
			[Address(RVA = "0x30B9320", Offset = "0x30B7920", VA = "0x1830B9320", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000528")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600169C")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600169D")]
		[Address(RVA = "0x30B9120", Offset = "0x30B7720", VA = "0x1830B9120", Slot = "14")]
		public override StyleEnum<DisplayStyle> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<DisplayStyle>);
		}

		[Token(Token = "0x600169E")]
		[Address(RVA = "0x30B91E0", Offset = "0x30B77E0", VA = "0x1830B91E0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<DisplayStyle> value)
		{
		}

		[Token(Token = "0x600169F")]
		[Address(RVA = "0x30B92B0", Offset = "0x30B78B0", VA = "0x1830B92B0")]
		public DisplayProperty()
		{
		}
	}

	[Token(Token = "0x2000324")]
	private class FilterProperty : InlineStyleListProperty<FilterFunction>
	{
		[Token(Token = "0x17000529")]
		public override string Name
		{
			[Token(Token = "0x60016A0")]
			[Address(RVA = "0x30BA660", Offset = "0x30B8C60", VA = "0x1830BA660", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700052A")]
		public override string ussName
		{
			[Token(Token = "0x60016A1")]
			[Address(RVA = "0x30BA690", Offset = "0x30B8C90", VA = "0x1830BA690", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700052B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016A2")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016A3")]
		[Address(RVA = "0x30BA480", Offset = "0x30B8A80", VA = "0x1830BA480", Slot = "14")]
		public override StyleList<FilterFunction> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<FilterFunction>);
		}

		[Token(Token = "0x60016A4")]
		[Address(RVA = "0x30BA550", Offset = "0x30B8B50", VA = "0x1830BA550", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<FilterFunction> value)
		{
		}

		[Token(Token = "0x60016A5")]
		[Address(RVA = "0x30BA620", Offset = "0x30B8C20", VA = "0x1830BA620")]
		public FilterProperty()
		{
		}
	}

	[Token(Token = "0x2000325")]
	private class FlexBasisProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700052C")]
		public override string Name
		{
			[Token(Token = "0x60016A6")]
			[Address(RVA = "0x30BA880", Offset = "0x30B8E80", VA = "0x1830BA880", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700052D")]
		public override string ussName
		{
			[Token(Token = "0x60016A7")]
			[Address(RVA = "0x30BA8B0", Offset = "0x30B8EB0", VA = "0x1830BA8B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700052E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016A8")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016A9")]
		[Address(RVA = "0x30BA6C0", Offset = "0x30B8CC0", VA = "0x1830BA6C0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016AA")]
		[Address(RVA = "0x30BA7A0", Offset = "0x30B8DA0", VA = "0x1830BA7A0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016AB")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public FlexBasisProperty()
		{
		}
	}

	[Token(Token = "0x2000326")]
	private class FlexDirectionProperty : InlineStyleEnumProperty<FlexDirection>
	{
		[Token(Token = "0x1700052F")]
		public override string Name
		{
			[Token(Token = "0x60016AC")]
			[Address(RVA = "0x30BAAB0", Offset = "0x30B90B0", VA = "0x1830BAAB0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000530")]
		public override string ussName
		{
			[Token(Token = "0x60016AD")]
			[Address(RVA = "0x30BAAE0", Offset = "0x30B90E0", VA = "0x1830BAAE0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000531")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016AE")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016AF")]
		[Address(RVA = "0x30BA8E0", Offset = "0x30B8EE0", VA = "0x1830BA8E0", Slot = "14")]
		public override StyleEnum<FlexDirection> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<FlexDirection>);
		}

		[Token(Token = "0x60016B0")]
		[Address(RVA = "0x30BA9A0", Offset = "0x30B8FA0", VA = "0x1830BA9A0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<FlexDirection> value)
		{
		}

		[Token(Token = "0x60016B1")]
		[Address(RVA = "0x30BAA70", Offset = "0x30B9070", VA = "0x1830BAA70")]
		public FlexDirectionProperty()
		{
		}
	}

	[Token(Token = "0x2000327")]
	private class FlexGrowProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x17000532")]
		public override string Name
		{
			[Token(Token = "0x60016B2")]
			[Address(RVA = "0x30BABC0", Offset = "0x30B91C0", VA = "0x1830BABC0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000533")]
		public override string ussName
		{
			[Token(Token = "0x60016B3")]
			[Address(RVA = "0x30BABF0", Offset = "0x30B91F0", VA = "0x1830BABF0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000534")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016B4")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016B5")]
		[Address(RVA = "0x30BAB10", Offset = "0x30B9110", VA = "0x1830BAB10", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x60016B6")]
		[Address(RVA = "0x30BAB60", Offset = "0x30B9160", VA = "0x1830BAB60", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x60016B7")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public FlexGrowProperty()
		{
		}
	}

	[Token(Token = "0x2000328")]
	private class FlexShrinkProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x17000535")]
		public override string Name
		{
			[Token(Token = "0x60016B8")]
			[Address(RVA = "0x30BACD0", Offset = "0x30B92D0", VA = "0x1830BACD0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000536")]
		public override string ussName
		{
			[Token(Token = "0x60016B9")]
			[Address(RVA = "0x30BAD00", Offset = "0x30B9300", VA = "0x1830BAD00", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000537")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016BA")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x30BAC20", Offset = "0x30B9220", VA = "0x1830BAC20", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x60016BC")]
		[Address(RVA = "0x30BAC70", Offset = "0x30B9270", VA = "0x1830BAC70", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x60016BD")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public FlexShrinkProperty()
		{
		}
	}

	[Token(Token = "0x2000329")]
	private class FlexWrapProperty : InlineStyleEnumProperty<Wrap>
	{
		[Token(Token = "0x17000538")]
		public override string Name
		{
			[Token(Token = "0x60016BE")]
			[Address(RVA = "0x30BAF00", Offset = "0x30B9500", VA = "0x1830BAF00", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000539")]
		public override string ussName
		{
			[Token(Token = "0x60016BF")]
			[Address(RVA = "0x30BAF30", Offset = "0x30B9530", VA = "0x1830BAF30", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700053A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016C0")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016C1")]
		[Address(RVA = "0x30BAD30", Offset = "0x30B9330", VA = "0x1830BAD30", Slot = "14")]
		public override StyleEnum<Wrap> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Wrap>);
		}

		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x30BADF0", Offset = "0x30B93F0", VA = "0x1830BADF0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Wrap> value)
		{
		}

		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x30BAEC0", Offset = "0x30B94C0", VA = "0x1830BAEC0")]
		public FlexWrapProperty()
		{
		}
	}

	[Token(Token = "0x200032A")]
	private class FontSizeProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700053B")]
		public override string Name
		{
			[Token(Token = "0x60016C4")]
			[Address(RVA = "0x30BB970", Offset = "0x30B9F70", VA = "0x1830BB970", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700053C")]
		public override string ussName
		{
			[Token(Token = "0x60016C5")]
			[Address(RVA = "0x30BB9A0", Offset = "0x30B9FA0", VA = "0x1830BB9A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700053D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016C6")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016C7")]
		[Address(RVA = "0x30BB7B0", Offset = "0x30B9DB0", VA = "0x1830BB7B0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x30BB890", Offset = "0x30B9E90", VA = "0x1830BB890", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public FontSizeProperty()
		{
		}
	}

	[Token(Token = "0x200032B")]
	private class HeightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700053E")]
		public override string Name
		{
			[Token(Token = "0x60016CA")]
			[Address(RVA = "0x30BBB90", Offset = "0x30BA190", VA = "0x1830BBB90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700053F")]
		public override string ussName
		{
			[Token(Token = "0x60016CB")]
			[Address(RVA = "0x30BBBC0", Offset = "0x30BA1C0", VA = "0x1830BBBC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000540")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016CC")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016CD")]
		[Address(RVA = "0x30BB9D0", Offset = "0x30B9FD0", VA = "0x1830BB9D0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016CE")]
		[Address(RVA = "0x30BBAB0", Offset = "0x30BA0B0", VA = "0x1830BBAB0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public HeightProperty()
		{
		}
	}

	[Token(Token = "0x200032C")]
	private class JustifyContentProperty : InlineStyleEnumProperty<Justify>
	{
		[Token(Token = "0x17000541")]
		public override string Name
		{
			[Token(Token = "0x60016D0")]
			[Address(RVA = "0x30CAAA0", Offset = "0x30C90A0", VA = "0x1830CAAA0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000542")]
		public override string ussName
		{
			[Token(Token = "0x60016D1")]
			[Address(RVA = "0x30CAAD0", Offset = "0x30C90D0", VA = "0x1830CAAD0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000543")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016D2")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x30CA8D0", Offset = "0x30C8ED0", VA = "0x1830CA8D0", Slot = "14")]
		public override StyleEnum<Justify> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Justify>);
		}

		[Token(Token = "0x60016D4")]
		[Address(RVA = "0x30CA990", Offset = "0x30C8F90", VA = "0x1830CA990", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Justify> value)
		{
		}

		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x30CAA60", Offset = "0x30C9060", VA = "0x1830CAA60")]
		public JustifyContentProperty()
		{
		}
	}

	[Token(Token = "0x200032D")]
	private class LeftProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000544")]
		public override string Name
		{
			[Token(Token = "0x60016D6")]
			[Address(RVA = "0x30CACC0", Offset = "0x30C92C0", VA = "0x1830CACC0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000545")]
		public override string ussName
		{
			[Token(Token = "0x60016D7")]
			[Address(RVA = "0x30CACF0", Offset = "0x30C92F0", VA = "0x1830CACF0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000546")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016D8")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016D9")]
		[Address(RVA = "0x30CAB00", Offset = "0x30C9100", VA = "0x1830CAB00", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016DA")]
		[Address(RVA = "0x30CABE0", Offset = "0x30C91E0", VA = "0x1830CABE0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016DB")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public LeftProperty()
		{
		}
	}

	[Token(Token = "0x200032E")]
	private class LetterSpacingProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000547")]
		public override string Name
		{
			[Token(Token = "0x60016DC")]
			[Address(RVA = "0x30CAEE0", Offset = "0x30C94E0", VA = "0x1830CAEE0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000548")]
		public override string ussName
		{
			[Token(Token = "0x60016DD")]
			[Address(RVA = "0x30CAF10", Offset = "0x30C9510", VA = "0x1830CAF10", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000549")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016DE")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016DF")]
		[Address(RVA = "0x30CAD20", Offset = "0x30C9320", VA = "0x1830CAD20", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016E0")]
		[Address(RVA = "0x30CAE00", Offset = "0x30C9400", VA = "0x1830CAE00", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016E1")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public LetterSpacingProperty()
		{
		}
	}

	[Token(Token = "0x200032F")]
	private class MarginBottomProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700054A")]
		public override string Name
		{
			[Token(Token = "0x60016E2")]
			[Address(RVA = "0x30CB100", Offset = "0x30C9700", VA = "0x1830CB100", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700054B")]
		public override string ussName
		{
			[Token(Token = "0x60016E3")]
			[Address(RVA = "0x30CB130", Offset = "0x30C9730", VA = "0x1830CB130", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700054C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016E4")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016E5")]
		[Address(RVA = "0x30CAF40", Offset = "0x30C9540", VA = "0x1830CAF40", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016E6")]
		[Address(RVA = "0x30CB020", Offset = "0x30C9620", VA = "0x1830CB020", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016E7")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public MarginBottomProperty()
		{
		}
	}

	[Token(Token = "0x2000330")]
	private class MarginLeftProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700054D")]
		public override string Name
		{
			[Token(Token = "0x60016E8")]
			[Address(RVA = "0x30CB320", Offset = "0x30C9920", VA = "0x1830CB320", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700054E")]
		public override string ussName
		{
			[Token(Token = "0x60016E9")]
			[Address(RVA = "0x30CB350", Offset = "0x30C9950", VA = "0x1830CB350", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700054F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016EA")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016EB")]
		[Address(RVA = "0x30CB160", Offset = "0x30C9760", VA = "0x1830CB160", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016EC")]
		[Address(RVA = "0x30CB240", Offset = "0x30C9840", VA = "0x1830CB240", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016ED")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public MarginLeftProperty()
		{
		}
	}

	[Token(Token = "0x2000331")]
	private class MarginRightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000550")]
		public override string Name
		{
			[Token(Token = "0x60016EE")]
			[Address(RVA = "0x30CB540", Offset = "0x30C9B40", VA = "0x1830CB540", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000551")]
		public override string ussName
		{
			[Token(Token = "0x60016EF")]
			[Address(RVA = "0x30CB570", Offset = "0x30C9B70", VA = "0x1830CB570", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000552")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016F0")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016F1")]
		[Address(RVA = "0x30CB380", Offset = "0x30C9980", VA = "0x1830CB380", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016F2")]
		[Address(RVA = "0x30CB460", Offset = "0x30C9A60", VA = "0x1830CB460", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016F3")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public MarginRightProperty()
		{
		}
	}

	[Token(Token = "0x2000332")]
	private class MarginTopProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000553")]
		public override string Name
		{
			[Token(Token = "0x60016F4")]
			[Address(RVA = "0x30CB760", Offset = "0x30C9D60", VA = "0x1830CB760", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000554")]
		public override string ussName
		{
			[Token(Token = "0x60016F5")]
			[Address(RVA = "0x30CB790", Offset = "0x30C9D90", VA = "0x1830CB790", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000555")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016F6")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016F7")]
		[Address(RVA = "0x30CB5A0", Offset = "0x30C9BA0", VA = "0x1830CB5A0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016F8")]
		[Address(RVA = "0x30CB680", Offset = "0x30C9C80", VA = "0x1830CB680", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016F9")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public MarginTopProperty()
		{
		}
	}

	[Token(Token = "0x2000333")]
	private class MaxHeightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000556")]
		public override string Name
		{
			[Token(Token = "0x60016FA")]
			[Address(RVA = "0x30CB980", Offset = "0x30C9F80", VA = "0x1830CB980", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000557")]
		public override string ussName
		{
			[Token(Token = "0x60016FB")]
			[Address(RVA = "0x30CB9B0", Offset = "0x30C9FB0", VA = "0x1830CB9B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000558")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60016FC")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016FD")]
		[Address(RVA = "0x30CB7C0", Offset = "0x30C9DC0", VA = "0x1830CB7C0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60016FE")]
		[Address(RVA = "0x30CB8A0", Offset = "0x30C9EA0", VA = "0x1830CB8A0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60016FF")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public MaxHeightProperty()
		{
		}
	}

	[Token(Token = "0x2000334")]
	private class MaxWidthProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000559")]
		public override string Name
		{
			[Token(Token = "0x6001700")]
			[Address(RVA = "0x30CBBA0", Offset = "0x30CA1A0", VA = "0x1830CBBA0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700055A")]
		public override string ussName
		{
			[Token(Token = "0x6001701")]
			[Address(RVA = "0x30CBBD0", Offset = "0x30CA1D0", VA = "0x1830CBBD0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700055B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001702")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001703")]
		[Address(RVA = "0x30CB9E0", Offset = "0x30C9FE0", VA = "0x1830CB9E0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001704")]
		[Address(RVA = "0x30CBAC0", Offset = "0x30CA0C0", VA = "0x1830CBAC0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001705")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public MaxWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000335")]
	private class MinHeightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700055C")]
		public override string Name
		{
			[Token(Token = "0x6001706")]
			[Address(RVA = "0x30CBDC0", Offset = "0x30CA3C0", VA = "0x1830CBDC0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700055D")]
		public override string ussName
		{
			[Token(Token = "0x6001707")]
			[Address(RVA = "0x30CBDF0", Offset = "0x30CA3F0", VA = "0x1830CBDF0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700055E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001708")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001709")]
		[Address(RVA = "0x30CBC00", Offset = "0x30CA200", VA = "0x1830CBC00", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600170A")]
		[Address(RVA = "0x30CBCE0", Offset = "0x30CA2E0", VA = "0x1830CBCE0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600170B")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public MinHeightProperty()
		{
		}
	}

	[Token(Token = "0x2000336")]
	private class MinWidthProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700055F")]
		public override string Name
		{
			[Token(Token = "0x600170C")]
			[Address(RVA = "0x30CBFE0", Offset = "0x30CA5E0", VA = "0x1830CBFE0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000560")]
		public override string ussName
		{
			[Token(Token = "0x600170D")]
			[Address(RVA = "0x30CC010", Offset = "0x30CA610", VA = "0x1830CC010", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000561")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600170E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600170F")]
		[Address(RVA = "0x30CBE20", Offset = "0x30CA420", VA = "0x1830CBE20", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001710")]
		[Address(RVA = "0x30CBF00", Offset = "0x30CA500", VA = "0x1830CBF00", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001711")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public MinWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000337")]
	private class OpacityProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x17000562")]
		public override string Name
		{
			[Token(Token = "0x6001712")]
			[Address(RVA = "0x30CC0F0", Offset = "0x30CA6F0", VA = "0x1830CC0F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000563")]
		public override string ussName
		{
			[Token(Token = "0x6001713")]
			[Address(RVA = "0x30CC120", Offset = "0x30CA720", VA = "0x1830CC120", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000564")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001714")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001715")]
		[Address(RVA = "0x30CC040", Offset = "0x30CA640", VA = "0x1830CC040", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001716")]
		[Address(RVA = "0x30CC090", Offset = "0x30CA690", VA = "0x1830CC090", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001717")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public OpacityProperty()
		{
		}
	}

	[Token(Token = "0x2000338")]
	private class OverflowProperty : InlineStyleEnumProperty<Overflow>
	{
		[Token(Token = "0x17000565")]
		public override string Name
		{
			[Token(Token = "0x6001718")]
			[Address(RVA = "0x30CC320", Offset = "0x30CA920", VA = "0x1830CC320", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000566")]
		public override string ussName
		{
			[Token(Token = "0x6001719")]
			[Address(RVA = "0x30CC350", Offset = "0x30CA950", VA = "0x1830CC350", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000567")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600171A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600171B")]
		[Address(RVA = "0x30CC150", Offset = "0x30CA750", VA = "0x1830CC150", Slot = "14")]
		public override StyleEnum<Overflow> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Overflow>);
		}

		[Token(Token = "0x600171C")]
		[Address(RVA = "0x30CC210", Offset = "0x30CA810", VA = "0x1830CC210", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Overflow> value)
		{
		}

		[Token(Token = "0x600171D")]
		[Address(RVA = "0x30CC2E0", Offset = "0x30CA8E0", VA = "0x1830CC2E0")]
		public OverflowProperty()
		{
		}
	}

	[Token(Token = "0x2000339")]
	private class PaddingBottomProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000568")]
		public override string Name
		{
			[Token(Token = "0x600171E")]
			[Address(RVA = "0x30CC540", Offset = "0x30CAB40", VA = "0x1830CC540", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000569")]
		public override string ussName
		{
			[Token(Token = "0x600171F")]
			[Address(RVA = "0x30CC570", Offset = "0x30CAB70", VA = "0x1830CC570", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700056A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001720")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001721")]
		[Address(RVA = "0x30CC380", Offset = "0x30CA980", VA = "0x1830CC380", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001722")]
		[Address(RVA = "0x30CC460", Offset = "0x30CAA60", VA = "0x1830CC460", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001723")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public PaddingBottomProperty()
		{
		}
	}

	[Token(Token = "0x200033A")]
	private class PaddingLeftProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700056B")]
		public override string Name
		{
			[Token(Token = "0x6001724")]
			[Address(RVA = "0x30CC760", Offset = "0x30CAD60", VA = "0x1830CC760", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700056C")]
		public override string ussName
		{
			[Token(Token = "0x6001725")]
			[Address(RVA = "0x30CC790", Offset = "0x30CAD90", VA = "0x1830CC790", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700056D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001726")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001727")]
		[Address(RVA = "0x30CC5A0", Offset = "0x30CABA0", VA = "0x1830CC5A0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001728")]
		[Address(RVA = "0x30CC680", Offset = "0x30CAC80", VA = "0x1830CC680", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001729")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public PaddingLeftProperty()
		{
		}
	}

	[Token(Token = "0x200033B")]
	private class PaddingRightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x1700056E")]
		public override string Name
		{
			[Token(Token = "0x600172A")]
			[Address(RVA = "0x30CC980", Offset = "0x30CAF80", VA = "0x1830CC980", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700056F")]
		public override string ussName
		{
			[Token(Token = "0x600172B")]
			[Address(RVA = "0x30CC9B0", Offset = "0x30CAFB0", VA = "0x1830CC9B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000570")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600172C")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600172D")]
		[Address(RVA = "0x30CC7C0", Offset = "0x30CADC0", VA = "0x1830CC7C0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600172E")]
		[Address(RVA = "0x30CC8A0", Offset = "0x30CAEA0", VA = "0x1830CC8A0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600172F")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public PaddingRightProperty()
		{
		}
	}

	[Token(Token = "0x200033C")]
	private class PaddingTopProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000571")]
		public override string Name
		{
			[Token(Token = "0x6001730")]
			[Address(RVA = "0x30CCBA0", Offset = "0x30CB1A0", VA = "0x1830CCBA0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000572")]
		public override string ussName
		{
			[Token(Token = "0x6001731")]
			[Address(RVA = "0x30CCBD0", Offset = "0x30CB1D0", VA = "0x1830CCBD0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000573")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001732")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001733")]
		[Address(RVA = "0x30CC9E0", Offset = "0x30CAFE0", VA = "0x1830CC9E0", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001734")]
		[Address(RVA = "0x30CCAC0", Offset = "0x30CB0C0", VA = "0x1830CCAC0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001735")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public PaddingTopProperty()
		{
		}
	}

	[Token(Token = "0x200033D")]
	private class PositionProperty : InlineStyleEnumProperty<Position>
	{
		[Token(Token = "0x17000574")]
		public override string Name
		{
			[Token(Token = "0x6001736")]
			[Address(RVA = "0x30CCD60", Offset = "0x30CB360", VA = "0x1830CCD60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000575")]
		public override string ussName
		{
			[Token(Token = "0x6001737")]
			[Address(RVA = "0x30CCD90", Offset = "0x30CB390", VA = "0x1830CCD90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000576")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001738")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001739")]
		[Address(RVA = "0x30CCC00", Offset = "0x30CB200", VA = "0x1830CCC00", Slot = "14")]
		public override StyleEnum<Position> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Position>);
		}

		[Token(Token = "0x600173A")]
		[Address(RVA = "0x30CCCC0", Offset = "0x30CB2C0", VA = "0x1830CCCC0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Position> value)
		{
		}

		[Token(Token = "0x600173B")]
		[Address(RVA = "0x30CCD20", Offset = "0x30CB320", VA = "0x1830CCD20")]
		public PositionProperty()
		{
		}
	}

	[Token(Token = "0x200033E")]
	private class RightProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000577")]
		public override string Name
		{
			[Token(Token = "0x600173C")]
			[Address(RVA = "0x30CE330", Offset = "0x30CC930", VA = "0x1830CE330", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000578")]
		public override string ussName
		{
			[Token(Token = "0x600173D")]
			[Address(RVA = "0x30CE360", Offset = "0x30CC960", VA = "0x1830CE360", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000579")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600173E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600173F")]
		[Address(RVA = "0x30CE170", Offset = "0x30CC770", VA = "0x1830CE170", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001740")]
		[Address(RVA = "0x30CE250", Offset = "0x30CC850", VA = "0x1830CE250", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001741")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public RightProperty()
		{
		}
	}

	[Token(Token = "0x200033F")]
	private class RotateProperty : InlineStyleRotateProperty
	{
		[Token(Token = "0x1700057A")]
		public override string Name
		{
			[Token(Token = "0x6001742")]
			[Address(RVA = "0x30CE550", Offset = "0x30CCB50", VA = "0x1830CE550", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700057B")]
		public override string ussName
		{
			[Token(Token = "0x6001743")]
			[Address(RVA = "0x30CE580", Offset = "0x30CCB80", VA = "0x1830CE580", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700057C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001744")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001745")]
		[Address(RVA = "0x30CE390", Offset = "0x30CC990", VA = "0x1830CE390", Slot = "14")]
		public override StyleRotate GetValue(ref InlineStyleAccess container)
		{
			return default(StyleRotate);
		}

		[Token(Token = "0x6001746")]
		[Address(RVA = "0x30CE470", Offset = "0x30CCA70", VA = "0x1830CE470", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleRotate value)
		{
		}

		[Token(Token = "0x6001747")]
		[Address(RVA = "0x30CA750", Offset = "0x30C8D50", VA = "0x1830CA750")]
		public RotateProperty()
		{
		}
	}

	[Token(Token = "0x2000340")]
	private class ScaleProperty : InlineStyleScaleProperty
	{
		[Token(Token = "0x1700057D")]
		public override string Name
		{
			[Token(Token = "0x6001748")]
			[Address(RVA = "0x30CE770", Offset = "0x30CCD70", VA = "0x1830CE770", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700057E")]
		public override string ussName
		{
			[Token(Token = "0x6001749")]
			[Address(RVA = "0x30CE7A0", Offset = "0x30CCDA0", VA = "0x1830CE7A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700057F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600174A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600174B")]
		[Address(RVA = "0x30CE5B0", Offset = "0x30CCBB0", VA = "0x1830CE5B0", Slot = "14")]
		public override StyleScale GetValue(ref InlineStyleAccess container)
		{
			return default(StyleScale);
		}

		[Token(Token = "0x600174C")]
		[Address(RVA = "0x30CE690", Offset = "0x30CCC90", VA = "0x1830CE690", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleScale value)
		{
		}

		[Token(Token = "0x600174D")]
		[Address(RVA = "0x30CA790", Offset = "0x30C8D90", VA = "0x1830CA790")]
		public ScaleProperty()
		{
		}
	}

	[Token(Token = "0x2000341")]
	private class TextOverflowProperty : InlineStyleEnumProperty<TextOverflow>
	{
		[Token(Token = "0x17000580")]
		public override string Name
		{
			[Token(Token = "0x600174E")]
			[Address(RVA = "0x30CE9A0", Offset = "0x30CCFA0", VA = "0x1830CE9A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000581")]
		public override string ussName
		{
			[Token(Token = "0x600174F")]
			[Address(RVA = "0x30CE9D0", Offset = "0x30CCFD0", VA = "0x1830CE9D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000582")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001750")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001751")]
		[Address(RVA = "0x30CE7D0", Offset = "0x30CCDD0", VA = "0x1830CE7D0", Slot = "14")]
		public override StyleEnum<TextOverflow> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<TextOverflow>);
		}

		[Token(Token = "0x6001752")]
		[Address(RVA = "0x30CE890", Offset = "0x30CCE90", VA = "0x1830CE890", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<TextOverflow> value)
		{
		}

		[Token(Token = "0x6001753")]
		[Address(RVA = "0x30CE960", Offset = "0x30CCF60", VA = "0x1830CE960")]
		public TextOverflowProperty()
		{
		}
	}

	[Token(Token = "0x2000342")]
	private class TextShadowProperty : InlineStyleTextShadowProperty
	{
		[Token(Token = "0x17000583")]
		public override string Name
		{
			[Token(Token = "0x6001754")]
			[Address(RVA = "0x30CEBC0", Offset = "0x30CD1C0", VA = "0x1830CEBC0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000584")]
		public override string ussName
		{
			[Token(Token = "0x6001755")]
			[Address(RVA = "0x30CEBF0", Offset = "0x30CD1F0", VA = "0x1830CEBF0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000585")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001756")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001757")]
		[Address(RVA = "0x30CEA00", Offset = "0x30CD000", VA = "0x1830CEA00", Slot = "14")]
		public override StyleTextShadow GetValue(ref InlineStyleAccess container)
		{
			return default(StyleTextShadow);
		}

		[Token(Token = "0x6001758")]
		[Address(RVA = "0x30CEAE0", Offset = "0x30CD0E0", VA = "0x1830CEAE0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleTextShadow value)
		{
		}

		[Token(Token = "0x6001759")]
		[Address(RVA = "0x30CA810", Offset = "0x30C8E10", VA = "0x1830CA810")]
		public TextShadowProperty()
		{
		}
	}

	[Token(Token = "0x2000343")]
	private class TopProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x17000586")]
		public override string Name
		{
			[Token(Token = "0x600175A")]
			[Address(RVA = "0x30CEDE0", Offset = "0x30CD3E0", VA = "0x1830CEDE0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000587")]
		public override string ussName
		{
			[Token(Token = "0x600175B")]
			[Address(RVA = "0x30CEE10", Offset = "0x30CD410", VA = "0x1830CEE10", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000588")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600175C")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600175D")]
		[Address(RVA = "0x30CEC20", Offset = "0x30CD220", VA = "0x1830CEC20", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600175E")]
		[Address(RVA = "0x30CED00", Offset = "0x30CD300", VA = "0x1830CED00", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600175F")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public TopProperty()
		{
		}
	}

	[Token(Token = "0x2000344")]
	private class TransformOriginProperty : InlineStyleTransformOriginProperty
	{
		[Token(Token = "0x17000589")]
		public override string Name
		{
			[Token(Token = "0x6001760")]
			[Address(RVA = "0x30CF000", Offset = "0x30CD600", VA = "0x1830CF000", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700058A")]
		public override string ussName
		{
			[Token(Token = "0x6001761")]
			[Address(RVA = "0x30CF030", Offset = "0x30CD630", VA = "0x1830CF030", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700058B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001762")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001763")]
		[Address(RVA = "0x30CEE40", Offset = "0x30CD440", VA = "0x1830CEE40", Slot = "14")]
		public override StyleTransformOrigin GetValue(ref InlineStyleAccess container)
		{
			return default(StyleTransformOrigin);
		}

		[Token(Token = "0x6001764")]
		[Address(RVA = "0x30CEF20", Offset = "0x30CD520", VA = "0x1830CEF20", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleTransformOrigin value)
		{
		}

		[Token(Token = "0x6001765")]
		[Address(RVA = "0x30CA850", Offset = "0x30C8E50", VA = "0x1830CA850")]
		public TransformOriginProperty()
		{
		}
	}

	[Token(Token = "0x2000345")]
	private class TransitionDelayProperty : InlineStyleListProperty<TimeValue>
	{
		[Token(Token = "0x1700058C")]
		public override string Name
		{
			[Token(Token = "0x6001766")]
			[Address(RVA = "0x30CF240", Offset = "0x30CD840", VA = "0x1830CF240", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700058D")]
		public override string ussName
		{
			[Token(Token = "0x6001767")]
			[Address(RVA = "0x30CF270", Offset = "0x30CD870", VA = "0x1830CF270", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700058E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001768")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001769")]
		[Address(RVA = "0x30CF060", Offset = "0x30CD660", VA = "0x1830CF060", Slot = "14")]
		public override StyleList<TimeValue> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<TimeValue>);
		}

		[Token(Token = "0x600176A")]
		[Address(RVA = "0x30CF130", Offset = "0x30CD730", VA = "0x1830CF130", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<TimeValue> value)
		{
		}

		[Token(Token = "0x600176B")]
		[Address(RVA = "0x30CF200", Offset = "0x30CD800", VA = "0x1830CF200")]
		public TransitionDelayProperty()
		{
		}
	}

	[Token(Token = "0x2000346")]
	private class TransitionDurationProperty : InlineStyleListProperty<TimeValue>
	{
		[Token(Token = "0x1700058F")]
		public override string Name
		{
			[Token(Token = "0x600176C")]
			[Address(RVA = "0x30CF480", Offset = "0x30CDA80", VA = "0x1830CF480", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000590")]
		public override string ussName
		{
			[Token(Token = "0x600176D")]
			[Address(RVA = "0x30CF4B0", Offset = "0x30CDAB0", VA = "0x1830CF4B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000591")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600176E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600176F")]
		[Address(RVA = "0x30CF2A0", Offset = "0x30CD8A0", VA = "0x1830CF2A0", Slot = "14")]
		public override StyleList<TimeValue> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<TimeValue>);
		}

		[Token(Token = "0x6001770")]
		[Address(RVA = "0x30CF370", Offset = "0x30CD970", VA = "0x1830CF370", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<TimeValue> value)
		{
		}

		[Token(Token = "0x6001771")]
		[Address(RVA = "0x30CF440", Offset = "0x30CDA40", VA = "0x1830CF440")]
		public TransitionDurationProperty()
		{
		}
	}

	[Token(Token = "0x2000347")]
	private class TransitionPropertyProperty : InlineStyleListProperty<StylePropertyName>
	{
		[Token(Token = "0x17000592")]
		public override string Name
		{
			[Token(Token = "0x6001772")]
			[Address(RVA = "0x30CF6C0", Offset = "0x30CDCC0", VA = "0x1830CF6C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000593")]
		public override string ussName
		{
			[Token(Token = "0x6001773")]
			[Address(RVA = "0x30CF6F0", Offset = "0x30CDCF0", VA = "0x1830CF6F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000594")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001774")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001775")]
		[Address(RVA = "0x30CF4E0", Offset = "0x30CDAE0", VA = "0x1830CF4E0", Slot = "14")]
		public override StyleList<StylePropertyName> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<StylePropertyName>);
		}

		[Token(Token = "0x6001776")]
		[Address(RVA = "0x30CF5B0", Offset = "0x30CDBB0", VA = "0x1830CF5B0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<StylePropertyName> value)
		{
		}

		[Token(Token = "0x6001777")]
		[Address(RVA = "0x30CF680", Offset = "0x30CDC80", VA = "0x1830CF680")]
		public TransitionPropertyProperty()
		{
		}
	}

	[Token(Token = "0x2000348")]
	private class TransitionTimingFunctionProperty : InlineStyleListProperty<EasingFunction>
	{
		[Token(Token = "0x17000595")]
		public override string Name
		{
			[Token(Token = "0x6001778")]
			[Address(RVA = "0x30CF900", Offset = "0x30CDF00", VA = "0x1830CF900", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000596")]
		public override string ussName
		{
			[Token(Token = "0x6001779")]
			[Address(RVA = "0x30CF930", Offset = "0x30CDF30", VA = "0x1830CF930", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000597")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600177A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600177B")]
		[Address(RVA = "0x30CF720", Offset = "0x30CDD20", VA = "0x1830CF720", Slot = "14")]
		public override StyleList<EasingFunction> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleList<EasingFunction>);
		}

		[Token(Token = "0x600177C")]
		[Address(RVA = "0x30CF7F0", Offset = "0x30CDDF0", VA = "0x1830CF7F0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleList<EasingFunction> value)
		{
		}

		[Token(Token = "0x600177D")]
		[Address(RVA = "0x30CF8C0", Offset = "0x30CDEC0", VA = "0x1830CF8C0")]
		public TransitionTimingFunctionProperty()
		{
		}
	}

	[Token(Token = "0x2000349")]
	private class TranslateProperty : InlineStyleTranslateProperty
	{
		[Token(Token = "0x17000598")]
		public override string Name
		{
			[Token(Token = "0x600177E")]
			[Address(RVA = "0x30CFB20", Offset = "0x30CE120", VA = "0x1830CFB20", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000599")]
		public override string ussName
		{
			[Token(Token = "0x600177F")]
			[Address(RVA = "0x30CFB50", Offset = "0x30CE150", VA = "0x1830CFB50", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700059A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001780")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001781")]
		[Address(RVA = "0x30CF960", Offset = "0x30CDF60", VA = "0x1830CF960", Slot = "14")]
		public override StyleTranslate GetValue(ref InlineStyleAccess container)
		{
			return default(StyleTranslate);
		}

		[Token(Token = "0x6001782")]
		[Address(RVA = "0x30CFA40", Offset = "0x30CE040", VA = "0x1830CFA40", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleTranslate value)
		{
		}

		[Token(Token = "0x6001783")]
		[Address(RVA = "0x30CA890", Offset = "0x30C8E90", VA = "0x1830CA890")]
		public TranslateProperty()
		{
		}
	}

	[Token(Token = "0x200034A")]
	private class UnityBackgroundImageTintColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x1700059B")]
		public override string Name
		{
			[Token(Token = "0x6001784")]
			[Address(RVA = "0x30CFD40", Offset = "0x30CE340", VA = "0x1830CFD40", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700059C")]
		public override string ussName
		{
			[Token(Token = "0x6001785")]
			[Address(RVA = "0x30CFD70", Offset = "0x30CE370", VA = "0x1830CFD70", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700059D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001786")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001787")]
		[Address(RVA = "0x30CFB80", Offset = "0x30CE180", VA = "0x1830CFB80", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x6001788")]
		[Address(RVA = "0x30CFC60", Offset = "0x30CE260", VA = "0x1830CFC60", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x6001789")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		public UnityBackgroundImageTintColorProperty()
		{
		}
	}

	[Token(Token = "0x200034B")]
	private class UnityEditorTextRenderingModeProperty : InlineStyleEnumProperty<EditorTextRenderingMode>
	{
		[Token(Token = "0x1700059E")]
		public override string Name
		{
			[Token(Token = "0x600178A")]
			[Address(RVA = "0x30CFF70", Offset = "0x30CE570", VA = "0x1830CFF70", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700059F")]
		public override string ussName
		{
			[Token(Token = "0x600178B")]
			[Address(RVA = "0x30CFFA0", Offset = "0x30CE5A0", VA = "0x1830CFFA0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A0")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600178C")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600178D")]
		[Address(RVA = "0x30CFDA0", Offset = "0x30CE3A0", VA = "0x1830CFDA0", Slot = "14")]
		public override StyleEnum<EditorTextRenderingMode> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<EditorTextRenderingMode>);
		}

		[Token(Token = "0x600178E")]
		[Address(RVA = "0x30CFE60", Offset = "0x30CE460", VA = "0x1830CFE60", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<EditorTextRenderingMode> value)
		{
		}

		[Token(Token = "0x600178F")]
		[Address(RVA = "0x30CFF30", Offset = "0x30CE530", VA = "0x1830CFF30")]
		public UnityEditorTextRenderingModeProperty()
		{
		}
	}

	[Token(Token = "0x200034C")]
	private class UnityFontProperty : InlineStyleFontProperty
	{
		[Token(Token = "0x170005A1")]
		public override string Name
		{
			[Token(Token = "0x6001790")]
			[Address(RVA = "0x30D0390", Offset = "0x30CE990", VA = "0x1830D0390", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A2")]
		public override string ussName
		{
			[Token(Token = "0x6001791")]
			[Address(RVA = "0x30D03C0", Offset = "0x30CE9C0", VA = "0x1830D03C0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A3")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001792")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001793")]
		[Address(RVA = "0x30D01F0", Offset = "0x30CE7F0", VA = "0x1830D01F0", Slot = "14")]
		public override StyleFont GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFont);
		}

		[Token(Token = "0x6001794")]
		[Address(RVA = "0x30D02C0", Offset = "0x30CE8C0", VA = "0x1830D02C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFont value)
		{
		}

		[Token(Token = "0x6001795")]
		[Address(RVA = "0x30CA690", Offset = "0x30C8C90", VA = "0x1830CA690")]
		public UnityFontProperty()
		{
		}
	}

	[Token(Token = "0x200034D")]
	private class UnityFontDefinitionProperty : InlineStyleFontDefinitionProperty
	{
		[Token(Token = "0x170005A4")]
		public override string Name
		{
			[Token(Token = "0x6001796")]
			[Address(RVA = "0x30D0190", Offset = "0x30CE790", VA = "0x1830D0190", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A5")]
		public override string ussName
		{
			[Token(Token = "0x6001797")]
			[Address(RVA = "0x30D01C0", Offset = "0x30CE7C0", VA = "0x1830D01C0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A6")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001798")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001799")]
		[Address(RVA = "0x30CFFD0", Offset = "0x30CE5D0", VA = "0x1830CFFD0", Slot = "14")]
		public override StyleFontDefinition GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFontDefinition);
		}

		[Token(Token = "0x600179A")]
		[Address(RVA = "0x30D00B0", Offset = "0x30CE6B0", VA = "0x1830D00B0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFontDefinition value)
		{
		}

		[Token(Token = "0x600179B")]
		[Address(RVA = "0x30CA650", Offset = "0x30C8C50", VA = "0x1830CA650")]
		public UnityFontDefinitionProperty()
		{
		}
	}

	[Token(Token = "0x200034E")]
	private class UnityFontStyleAndWeightProperty : InlineStyleEnumProperty<FontStyle>
	{
		[Token(Token = "0x170005A7")]
		public override string Name
		{
			[Token(Token = "0x600179C")]
			[Address(RVA = "0x30D05C0", Offset = "0x30CEBC0", VA = "0x1830D05C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A8")]
		public override string ussName
		{
			[Token(Token = "0x600179D")]
			[Address(RVA = "0x30D05F0", Offset = "0x30CEBF0", VA = "0x1830D05F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005A9")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600179E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600179F")]
		[Address(RVA = "0x30D03F0", Offset = "0x30CE9F0", VA = "0x1830D03F0", Slot = "14")]
		public override StyleEnum<FontStyle> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<FontStyle>);
		}

		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x30D04B0", Offset = "0x30CEAB0", VA = "0x1830D04B0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<FontStyle> value)
		{
		}

		[Token(Token = "0x60017A1")]
		[Address(RVA = "0x30D0580", Offset = "0x30CEB80", VA = "0x1830D0580")]
		public UnityFontStyleAndWeightProperty()
		{
		}
	}

	[Token(Token = "0x200034F")]
	private class UnityMaterialProperty : InlineStyleMaterialDefinitionProperty
	{
		[Token(Token = "0x170005AA")]
		public override string Name
		{
			[Token(Token = "0x60017A2")]
			[Address(RVA = "0x30D07E0", Offset = "0x30CEDE0", VA = "0x1830D07E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005AB")]
		public override string ussName
		{
			[Token(Token = "0x60017A3")]
			[Address(RVA = "0x30D0810", Offset = "0x30CEE10", VA = "0x1830D0810", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005AC")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017A4")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x30D0620", Offset = "0x30CEC20", VA = "0x1830D0620", Slot = "14")]
		public override StyleMaterialDefinition GetValue(ref InlineStyleAccess container)
		{
			return default(StyleMaterialDefinition);
		}

		[Token(Token = "0x60017A6")]
		[Address(RVA = "0x30D0700", Offset = "0x30CED00", VA = "0x1830D0700", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleMaterialDefinition value)
		{
		}

		[Token(Token = "0x60017A7")]
		[Address(RVA = "0x30CA710", Offset = "0x30C8D10", VA = "0x1830CA710")]
		public UnityMaterialProperty()
		{
		}
	}

	[Token(Token = "0x2000350")]
	private class UnityOverflowClipBoxProperty : InlineStyleEnumProperty<OverflowClipBox>
	{
		[Token(Token = "0x170005AD")]
		public override string Name
		{
			[Token(Token = "0x60017A8")]
			[Address(RVA = "0x30D0A10", Offset = "0x30CF010", VA = "0x1830D0A10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005AE")]
		public override string ussName
		{
			[Token(Token = "0x60017A9")]
			[Address(RVA = "0x30D0A40", Offset = "0x30CF040", VA = "0x1830D0A40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005AF")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017AA")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017AB")]
		[Address(RVA = "0x30D0840", Offset = "0x30CEE40", VA = "0x1830D0840", Slot = "14")]
		public override StyleEnum<OverflowClipBox> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<OverflowClipBox>);
		}

		[Token(Token = "0x60017AC")]
		[Address(RVA = "0x30D0900", Offset = "0x30CEF00", VA = "0x1830D0900", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<OverflowClipBox> value)
		{
		}

		[Token(Token = "0x60017AD")]
		[Address(RVA = "0x30D09D0", Offset = "0x30CEFD0", VA = "0x1830D09D0")]
		public UnityOverflowClipBoxProperty()
		{
		}
	}

	[Token(Token = "0x2000351")]
	private class UnityParagraphSpacingProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005B0")]
		public override string Name
		{
			[Token(Token = "0x60017AE")]
			[Address(RVA = "0x30D0C30", Offset = "0x30CF230", VA = "0x1830D0C30", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B1")]
		public override string ussName
		{
			[Token(Token = "0x60017AF")]
			[Address(RVA = "0x30D0C60", Offset = "0x30CF260", VA = "0x1830D0C60", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B2")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017B0")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017B1")]
		[Address(RVA = "0x30D0A70", Offset = "0x30CF070", VA = "0x1830D0A70", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x60017B2")]
		[Address(RVA = "0x30D0B50", Offset = "0x30CF150", VA = "0x1830D0B50", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x60017B3")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public UnityParagraphSpacingProperty()
		{
		}
	}

	[Token(Token = "0x2000352")]
	private class UnitySliceBottomProperty : InlineStyleIntProperty
	{
		[Token(Token = "0x170005B3")]
		public override string Name
		{
			[Token(Token = "0x60017B4")]
			[Address(RVA = "0x30D0D40", Offset = "0x30CF340", VA = "0x1830D0D40", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B4")]
		public override string ussName
		{
			[Token(Token = "0x60017B5")]
			[Address(RVA = "0x30D0D70", Offset = "0x30CF370", VA = "0x1830D0D70", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B5")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017B6")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017B7")]
		[Address(RVA = "0x30D0C90", Offset = "0x30CF290", VA = "0x1830D0C90", Slot = "14")]
		public override StyleInt GetValue(ref InlineStyleAccess container)
		{
			return default(StyleInt);
		}

		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x30D0CE0", Offset = "0x30CF2E0", VA = "0x1830D0CE0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleInt value)
		{
		}

		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x30CA6D0", Offset = "0x30C8CD0", VA = "0x1830CA6D0")]
		public UnitySliceBottomProperty()
		{
		}
	}

	[Token(Token = "0x2000353")]
	private class UnitySliceLeftProperty : InlineStyleIntProperty
	{
		[Token(Token = "0x170005B6")]
		public override string Name
		{
			[Token(Token = "0x60017BA")]
			[Address(RVA = "0x30D0E50", Offset = "0x30CF450", VA = "0x1830D0E50", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B7")]
		public override string ussName
		{
			[Token(Token = "0x60017BB")]
			[Address(RVA = "0x30D0E80", Offset = "0x30CF480", VA = "0x1830D0E80", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005B8")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017BC")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017BD")]
		[Address(RVA = "0x30D0DA0", Offset = "0x30CF3A0", VA = "0x1830D0DA0", Slot = "14")]
		public override StyleInt GetValue(ref InlineStyleAccess container)
		{
			return default(StyleInt);
		}

		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x30D0DF0", Offset = "0x30CF3F0", VA = "0x1830D0DF0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleInt value)
		{
		}

		[Token(Token = "0x60017BF")]
		[Address(RVA = "0x30CA6D0", Offset = "0x30C8CD0", VA = "0x1830CA6D0")]
		public UnitySliceLeftProperty()
		{
		}
	}

	[Token(Token = "0x2000354")]
	private class UnitySliceRightProperty : InlineStyleIntProperty
	{
		[Token(Token = "0x170005B9")]
		public override string Name
		{
			[Token(Token = "0x60017C0")]
			[Address(RVA = "0x30D0F60", Offset = "0x30CF560", VA = "0x1830D0F60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005BA")]
		public override string ussName
		{
			[Token(Token = "0x60017C1")]
			[Address(RVA = "0x30D0F90", Offset = "0x30CF590", VA = "0x1830D0F90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005BB")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017C2")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017C3")]
		[Address(RVA = "0x30D0EB0", Offset = "0x30CF4B0", VA = "0x1830D0EB0", Slot = "14")]
		public override StyleInt GetValue(ref InlineStyleAccess container)
		{
			return default(StyleInt);
		}

		[Token(Token = "0x60017C4")]
		[Address(RVA = "0x30D0F00", Offset = "0x30CF500", VA = "0x1830D0F00", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleInt value)
		{
		}

		[Token(Token = "0x60017C5")]
		[Address(RVA = "0x30CA6D0", Offset = "0x30C8CD0", VA = "0x1830CA6D0")]
		public UnitySliceRightProperty()
		{
		}
	}

	[Token(Token = "0x2000355")]
	private class UnitySliceScaleProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x170005BC")]
		public override string Name
		{
			[Token(Token = "0x60017C6")]
			[Address(RVA = "0x30D1070", Offset = "0x30CF670", VA = "0x1830D1070", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005BD")]
		public override string ussName
		{
			[Token(Token = "0x60017C7")]
			[Address(RVA = "0x30D10A0", Offset = "0x30CF6A0", VA = "0x1830D10A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005BE")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017C8")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x30D0FC0", Offset = "0x30CF5C0", VA = "0x1830D0FC0", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x30D1010", Offset = "0x30CF610", VA = "0x1830D1010", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x60017CB")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public UnitySliceScaleProperty()
		{
		}
	}

	[Token(Token = "0x2000356")]
	private class UnitySliceTopProperty : InlineStyleIntProperty
	{
		[Token(Token = "0x170005BF")]
		public override string Name
		{
			[Token(Token = "0x60017CC")]
			[Address(RVA = "0x30D1180", Offset = "0x30CF780", VA = "0x1830D1180", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C0")]
		public override string ussName
		{
			[Token(Token = "0x60017CD")]
			[Address(RVA = "0x30D11B0", Offset = "0x30CF7B0", VA = "0x1830D11B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C1")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017CE")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017CF")]
		[Address(RVA = "0x30D10D0", Offset = "0x30CF6D0", VA = "0x1830D10D0", Slot = "14")]
		public override StyleInt GetValue(ref InlineStyleAccess container)
		{
			return default(StyleInt);
		}

		[Token(Token = "0x60017D0")]
		[Address(RVA = "0x30D1120", Offset = "0x30CF720", VA = "0x1830D1120", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleInt value)
		{
		}

		[Token(Token = "0x60017D1")]
		[Address(RVA = "0x30CA6D0", Offset = "0x30C8CD0", VA = "0x1830CA6D0")]
		public UnitySliceTopProperty()
		{
		}
	}

	[Token(Token = "0x2000357")]
	private class UnitySliceTypeProperty : InlineStyleEnumProperty<SliceType>
	{
		[Token(Token = "0x170005C2")]
		public override string Name
		{
			[Token(Token = "0x60017D2")]
			[Address(RVA = "0x30D13B0", Offset = "0x30CF9B0", VA = "0x1830D13B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C3")]
		public override string ussName
		{
			[Token(Token = "0x60017D3")]
			[Address(RVA = "0x30D13E0", Offset = "0x30CF9E0", VA = "0x1830D13E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C4")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017D4")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017D5")]
		[Address(RVA = "0x30D11E0", Offset = "0x30CF7E0", VA = "0x1830D11E0", Slot = "14")]
		public override StyleEnum<SliceType> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<SliceType>);
		}

		[Token(Token = "0x60017D6")]
		[Address(RVA = "0x30D12A0", Offset = "0x30CF8A0", VA = "0x1830D12A0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<SliceType> value)
		{
		}

		[Token(Token = "0x60017D7")]
		[Address(RVA = "0x30D1370", Offset = "0x30CF970", VA = "0x1830D1370")]
		public UnitySliceTypeProperty()
		{
		}
	}

	[Token(Token = "0x2000358")]
	private class UnityTextAlignProperty : InlineStyleEnumProperty<TextAnchor>
	{
		[Token(Token = "0x170005C5")]
		public override string Name
		{
			[Token(Token = "0x60017D8")]
			[Address(RVA = "0x30D15E0", Offset = "0x30CFBE0", VA = "0x1830D15E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C6")]
		public override string ussName
		{
			[Token(Token = "0x60017D9")]
			[Address(RVA = "0x30D1610", Offset = "0x30CFC10", VA = "0x1830D1610", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C7")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017DA")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017DB")]
		[Address(RVA = "0x30D1410", Offset = "0x30CFA10", VA = "0x1830D1410", Slot = "14")]
		public override StyleEnum<TextAnchor> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<TextAnchor>);
		}

		[Token(Token = "0x60017DC")]
		[Address(RVA = "0x30D14D0", Offset = "0x30CFAD0", VA = "0x1830D14D0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<TextAnchor> value)
		{
		}

		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x30D15A0", Offset = "0x30CFBA0", VA = "0x1830D15A0")]
		public UnityTextAlignProperty()
		{
		}
	}

	[Token(Token = "0x2000359")]
	private class UnityTextAutoSizeProperty : InlineStyleTextAutoSizeProperty
	{
		[Token(Token = "0x170005C8")]
		public override string Name
		{
			[Token(Token = "0x60017DE")]
			[Address(RVA = "0x30D1800", Offset = "0x30CFE00", VA = "0x1830D1800", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005C9")]
		public override string ussName
		{
			[Token(Token = "0x60017DF")]
			[Address(RVA = "0x30D1830", Offset = "0x30CFE30", VA = "0x1830D1830", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005CA")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017E0")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x30D1640", Offset = "0x30CFC40", VA = "0x1830D1640", Slot = "14")]
		public override StyleTextAutoSize GetValue(ref InlineStyleAccess container)
		{
			return default(StyleTextAutoSize);
		}

		[Token(Token = "0x60017E2")]
		[Address(RVA = "0x30D1720", Offset = "0x30CFD20", VA = "0x1830D1720", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleTextAutoSize value)
		{
		}

		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x30CA7D0", Offset = "0x30C8DD0", VA = "0x1830CA7D0")]
		public UnityTextAutoSizeProperty()
		{
		}
	}

	[Token(Token = "0x200035A")]
	private class UnityTextGeneratorProperty : InlineStyleEnumProperty<TextGeneratorType>
	{
		[Token(Token = "0x170005CB")]
		public override string Name
		{
			[Token(Token = "0x60017E4")]
			[Address(RVA = "0x30D1A30", Offset = "0x30D0030", VA = "0x1830D1A30", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005CC")]
		public override string ussName
		{
			[Token(Token = "0x60017E5")]
			[Address(RVA = "0x30D1A60", Offset = "0x30D0060", VA = "0x1830D1A60", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005CD")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017E6")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017E7")]
		[Address(RVA = "0x30D1860", Offset = "0x30CFE60", VA = "0x1830D1860", Slot = "14")]
		public override StyleEnum<TextGeneratorType> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<TextGeneratorType>);
		}

		[Token(Token = "0x60017E8")]
		[Address(RVA = "0x30D1920", Offset = "0x30CFF20", VA = "0x1830D1920", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<TextGeneratorType> value)
		{
		}

		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x30D19F0", Offset = "0x30CFFF0", VA = "0x1830D19F0")]
		public UnityTextGeneratorProperty()
		{
		}
	}

	[Token(Token = "0x200035B")]
	private class UnityTextOutlineColorProperty : InlineStyleColorProperty
	{
		[Token(Token = "0x170005CE")]
		public override string Name
		{
			[Token(Token = "0x60017EA")]
			[Address(RVA = "0x30D1C50", Offset = "0x30D0250", VA = "0x1830D1C50", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005CF")]
		public override string ussName
		{
			[Token(Token = "0x60017EB")]
			[Address(RVA = "0x30D1C80", Offset = "0x30D0280", VA = "0x1830D1C80", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D0")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017EC")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017ED")]
		[Address(RVA = "0x30D1A90", Offset = "0x30D0090", VA = "0x1830D1A90", Slot = "14")]
		public override StyleColor GetValue(ref InlineStyleAccess container)
		{
			return default(StyleColor);
		}

		[Token(Token = "0x60017EE")]
		[Address(RVA = "0x30D1B70", Offset = "0x30D0170", VA = "0x1830D1B70", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleColor value)
		{
		}

		[Token(Token = "0x60017EF")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		public UnityTextOutlineColorProperty()
		{
		}
	}

	[Token(Token = "0x200035C")]
	private class UnityTextOutlineWidthProperty : InlineStyleFloatProperty
	{
		[Token(Token = "0x170005D1")]
		public override string Name
		{
			[Token(Token = "0x60017F0")]
			[Address(RVA = "0x30D1D60", Offset = "0x30D0360", VA = "0x1830D1D60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D2")]
		public override string ussName
		{
			[Token(Token = "0x60017F1")]
			[Address(RVA = "0x30D1D90", Offset = "0x30D0390", VA = "0x1830D1D90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D3")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017F2")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017F3")]
		[Address(RVA = "0x30D1CB0", Offset = "0x30D02B0", VA = "0x1830D1CB0", Slot = "14")]
		public override StyleFloat GetValue(ref InlineStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x30D1D00", Offset = "0x30D0300", VA = "0x1830D1D00", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		public UnityTextOutlineWidthProperty()
		{
		}
	}

	[Token(Token = "0x200035D")]
	private class UnityTextOverflowPositionProperty : InlineStyleEnumProperty<TextOverflowPosition>
	{
		[Token(Token = "0x170005D4")]
		public override string Name
		{
			[Token(Token = "0x60017F6")]
			[Address(RVA = "0x30D1F90", Offset = "0x30D0590", VA = "0x1830D1F90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D5")]
		public override string ussName
		{
			[Token(Token = "0x60017F7")]
			[Address(RVA = "0x30D1FC0", Offset = "0x30D05C0", VA = "0x1830D1FC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D6")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017F8")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017F9")]
		[Address(RVA = "0x30D1DC0", Offset = "0x30D03C0", VA = "0x1830D1DC0", Slot = "14")]
		public override StyleEnum<TextOverflowPosition> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<TextOverflowPosition>);
		}

		[Token(Token = "0x60017FA")]
		[Address(RVA = "0x30D1E80", Offset = "0x30D0480", VA = "0x1830D1E80", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<TextOverflowPosition> value)
		{
		}

		[Token(Token = "0x60017FB")]
		[Address(RVA = "0x30D1F50", Offset = "0x30D0550", VA = "0x1830D1F50")]
		public UnityTextOverflowPositionProperty()
		{
		}
	}

	[Token(Token = "0x200035E")]
	private class VisibilityProperty : InlineStyleEnumProperty<Visibility>
	{
		[Token(Token = "0x170005D7")]
		public override string Name
		{
			[Token(Token = "0x60017FC")]
			[Address(RVA = "0x30D2150", Offset = "0x30D0750", VA = "0x1830D2150", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D8")]
		public override string ussName
		{
			[Token(Token = "0x60017FD")]
			[Address(RVA = "0x30D2180", Offset = "0x30D0780", VA = "0x1830D2180", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005D9")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60017FE")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60017FF")]
		[Address(RVA = "0x30D1FF0", Offset = "0x30D05F0", VA = "0x1830D1FF0", Slot = "14")]
		public override StyleEnum<Visibility> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<Visibility>);
		}

		[Token(Token = "0x6001800")]
		[Address(RVA = "0x30D20B0", Offset = "0x30D06B0", VA = "0x1830D20B0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<Visibility> value)
		{
		}

		[Token(Token = "0x6001801")]
		[Address(RVA = "0x30D2110", Offset = "0x30D0710", VA = "0x1830D2110")]
		public VisibilityProperty()
		{
		}
	}

	[Token(Token = "0x200035F")]
	private class WhiteSpaceProperty : InlineStyleEnumProperty<WhiteSpace>
	{
		[Token(Token = "0x170005DA")]
		public override string Name
		{
			[Token(Token = "0x6001802")]
			[Address(RVA = "0x30E8AD0", Offset = "0x30E70D0", VA = "0x1830E8AD0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DB")]
		public override string ussName
		{
			[Token(Token = "0x6001803")]
			[Address(RVA = "0x30E8B00", Offset = "0x30E7100", VA = "0x1830E8B00", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DC")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001804")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001805")]
		[Address(RVA = "0x30E8900", Offset = "0x30E6F00", VA = "0x1830E8900", Slot = "14")]
		public override StyleEnum<WhiteSpace> GetValue(ref InlineStyleAccess container)
		{
			return default(StyleEnum<WhiteSpace>);
		}

		[Token(Token = "0x6001806")]
		[Address(RVA = "0x30E89C0", Offset = "0x30E6FC0", VA = "0x1830E89C0", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleEnum<WhiteSpace> value)
		{
		}

		[Token(Token = "0x6001807")]
		[Address(RVA = "0x30E8A90", Offset = "0x30E7090", VA = "0x1830E8A90")]
		public WhiteSpaceProperty()
		{
		}
	}

	[Token(Token = "0x2000360")]
	private class WidthProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005DD")]
		public override string Name
		{
			[Token(Token = "0x6001808")]
			[Address(RVA = "0x30E8CF0", Offset = "0x30E72F0", VA = "0x1830E8CF0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DE")]
		public override string ussName
		{
			[Token(Token = "0x6001809")]
			[Address(RVA = "0x30E8D20", Offset = "0x30E7320", VA = "0x1830E8D20", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DF")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600180A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600180B")]
		[Address(RVA = "0x30E8B30", Offset = "0x30E7130", VA = "0x1830E8B30", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x600180C")]
		[Address(RVA = "0x30E8C10", Offset = "0x30E7210", VA = "0x1830E8C10", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x600180D")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public WidthProperty()
		{
		}
	}

	[Token(Token = "0x2000361")]
	private class WordSpacingProperty : InlineStyleLengthProperty
	{
		[Token(Token = "0x170005E0")]
		public override string Name
		{
			[Token(Token = "0x600180E")]
			[Address(RVA = "0x30E8F10", Offset = "0x30E7510", VA = "0x1830E8F10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E1")]
		public override string ussName
		{
			[Token(Token = "0x600180F")]
			[Address(RVA = "0x30E8F40", Offset = "0x30E7540", VA = "0x1830E8F40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E2")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001810")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001811")]
		[Address(RVA = "0x30E8D50", Offset = "0x30E7350", VA = "0x1830E8D50", Slot = "14")]
		public override StyleLength GetValue(ref InlineStyleAccess container)
		{
			return default(StyleLength);
		}

		[Token(Token = "0x6001812")]
		[Address(RVA = "0x30E8E30", Offset = "0x30E7430", VA = "0x1830E8E30", Slot = "15")]
		public override void SetValue(ref InlineStyleAccess container, StyleLength value)
		{
		}

		[Token(Token = "0x6001813")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		public WordSpacingProperty()
		{
		}
	}

	[Token(Token = "0x2000362")]
	internal interface IStyleProperty : IProperty<InlineStyleAccess>, IProperty, IPropertyAccept<InlineStyleAccess>
	{
		[Token(Token = "0x170005E3")]
		string ussName
		{
			[Token(Token = "0x6001814")]
			get;
		}
	}

	[Token(Token = "0x2000363")]
	private abstract class InlineStyleProperty<TStyleValue> : Property<InlineStyleAccess, TStyleValue>, IStyleProperty, IProperty<InlineStyleAccess>, IProperty, IPropertyAccept<InlineStyleAccess>
	{
		[Token(Token = "0x170005E4")]
		public abstract string ussName
		{
			[Token(Token = "0x6001815")]
			get;
		}

		[Token(Token = "0x6001816")]
		protected InlineStyleProperty()
		{
		}
	}

	[Token(Token = "0x2000364")]
	private abstract class InlineStyleEnumProperty<TValue> : InlineStyleProperty<StyleEnum<TValue>> where TValue : struct, IConvertible
	{
		[Token(Token = "0x6001817")]
		protected InlineStyleEnumProperty()
		{
		}
	}

	[Token(Token = "0x2000365")]
	private abstract class InlineStyleColorProperty : InlineStyleProperty<StyleColor>
	{
		[Token(Token = "0x6001818")]
		[Address(RVA = "0x30B68C0", Offset = "0x30B4EC0", VA = "0x1830B68C0")]
		protected InlineStyleColorProperty()
		{
		}
	}

	[Token(Token = "0x2000366")]
	private abstract class InlineStyleRatioProperty : InlineStyleProperty<StyleRatio>
	{
		[Token(Token = "0x6001819")]
		[Address(RVA = "0x30B6660", Offset = "0x30B4C60", VA = "0x1830B6660")]
		protected InlineStyleRatioProperty()
		{
		}
	}

	[Token(Token = "0x2000367")]
	private abstract class InlineStyleBackgroundProperty : InlineStyleProperty<StyleBackground>
	{
		[Token(Token = "0x600181A")]
		[Address(RVA = "0x30B6B20", Offset = "0x30B5120", VA = "0x1830B6B20")]
		protected InlineStyleBackgroundProperty()
		{
		}
	}

	[Token(Token = "0x2000368")]
	private abstract class InlineStyleLengthProperty : InlineStyleProperty<StyleLength>
	{
		[Token(Token = "0x600181B")]
		[Address(RVA = "0x30B78A0", Offset = "0x30B5EA0", VA = "0x1830B78A0")]
		protected InlineStyleLengthProperty()
		{
		}
	}

	[Token(Token = "0x2000369")]
	private abstract class InlineStyleFloatProperty : InlineStyleProperty<StyleFloat>
	{
		[Token(Token = "0x600181C")]
		[Address(RVA = "0x30B7C10", Offset = "0x30B6210", VA = "0x1830B7C10")]
		protected InlineStyleFloatProperty()
		{
		}
	}

	[Token(Token = "0x200036A")]
	private abstract class InlineStyleListProperty<T> : InlineStyleProperty<StyleList<T>>
	{
		[Token(Token = "0x600181D")]
		protected InlineStyleListProperty()
		{
		}
	}

	[Token(Token = "0x200036B")]
	private abstract class InlineStyleFontProperty : InlineStyleProperty<StyleFont>
	{
		[Token(Token = "0x600181E")]
		[Address(RVA = "0x30CA690", Offset = "0x30C8C90", VA = "0x1830CA690")]
		protected InlineStyleFontProperty()
		{
		}
	}

	[Token(Token = "0x200036C")]
	private abstract class InlineStyleFontDefinitionProperty : InlineStyleProperty<StyleFontDefinition>
	{
		[Token(Token = "0x600181F")]
		[Address(RVA = "0x30CA650", Offset = "0x30C8C50", VA = "0x1830CA650")]
		protected InlineStyleFontDefinitionProperty()
		{
		}
	}

	[Token(Token = "0x200036D")]
	private abstract class InlineStyleIntProperty : InlineStyleProperty<StyleInt>
	{
		[Token(Token = "0x6001820")]
		[Address(RVA = "0x30CA6D0", Offset = "0x30C8CD0", VA = "0x1830CA6D0")]
		protected InlineStyleIntProperty()
		{
		}
	}

	[Token(Token = "0x200036E")]
	private abstract class InlineStyleRotateProperty : InlineStyleProperty<StyleRotate>
	{
		[Token(Token = "0x6001821")]
		[Address(RVA = "0x30CA750", Offset = "0x30C8D50", VA = "0x1830CA750")]
		protected InlineStyleRotateProperty()
		{
		}
	}

	[Token(Token = "0x200036F")]
	private abstract class InlineStyleScaleProperty : InlineStyleProperty<StyleScale>
	{
		[Token(Token = "0x6001822")]
		[Address(RVA = "0x30CA790", Offset = "0x30C8D90", VA = "0x1830CA790")]
		protected InlineStyleScaleProperty()
		{
		}
	}

	[Token(Token = "0x2000370")]
	private abstract class InlineStyleCursorProperty : InlineStyleProperty<StyleCursor>
	{
		[Token(Token = "0x6001823")]
		[Address(RVA = "0x30B9080", Offset = "0x30B7680", VA = "0x1830B9080")]
		protected InlineStyleCursorProperty()
		{
		}
	}

	[Token(Token = "0x2000371")]
	private abstract class InlineStyleTextShadowProperty : InlineStyleProperty<StyleTextShadow>
	{
		[Token(Token = "0x6001824")]
		[Address(RVA = "0x30CA810", Offset = "0x30C8E10", VA = "0x1830CA810")]
		protected InlineStyleTextShadowProperty()
		{
		}
	}

	[Token(Token = "0x2000372")]
	private abstract class InlineStyleTextAutoSizeProperty : InlineStyleProperty<StyleTextAutoSize>
	{
		[Token(Token = "0x6001825")]
		[Address(RVA = "0x30CA7D0", Offset = "0x30C8DD0", VA = "0x1830CA7D0")]
		protected InlineStyleTextAutoSizeProperty()
		{
		}
	}

	[Token(Token = "0x2000373")]
	private abstract class InlineStyleTransformOriginProperty : InlineStyleProperty<StyleTransformOrigin>
	{
		[Token(Token = "0x6001826")]
		[Address(RVA = "0x30CA850", Offset = "0x30C8E50", VA = "0x1830CA850")]
		protected InlineStyleTransformOriginProperty()
		{
		}
	}

	[Token(Token = "0x2000374")]
	private abstract class InlineStyleTranslateProperty : InlineStyleProperty<StyleTranslate>
	{
		[Token(Token = "0x6001827")]
		[Address(RVA = "0x30CA890", Offset = "0x30C8E90", VA = "0x1830CA890")]
		protected InlineStyleTranslateProperty()
		{
		}
	}

	[Token(Token = "0x2000375")]
	private abstract class InlineStyleBackgroundPositionProperty : InlineStyleProperty<StyleBackgroundPosition>
	{
		[Token(Token = "0x6001828")]
		[Address(RVA = "0x30B6D60", Offset = "0x30B5360", VA = "0x1830B6D60")]
		protected InlineStyleBackgroundPositionProperty()
		{
		}
	}

	[Token(Token = "0x2000376")]
	private abstract class InlineStyleBackgroundRepeatProperty : InlineStyleProperty<StyleBackgroundRepeat>
	{
		[Token(Token = "0x6001829")]
		[Address(RVA = "0x30B71C0", Offset = "0x30B57C0", VA = "0x1830B71C0")]
		protected InlineStyleBackgroundRepeatProperty()
		{
		}
	}

	[Token(Token = "0x2000377")]
	private abstract class InlineStyleBackgroundSizeProperty : InlineStyleProperty<StyleBackgroundSize>
	{
		[Token(Token = "0x600182A")]
		[Address(RVA = "0x30B7420", Offset = "0x30B5A20", VA = "0x1830B7420")]
		protected InlineStyleBackgroundSizeProperty()
		{
		}
	}

	[Token(Token = "0x2000378")]
	private abstract class InlineStyleMaterialDefinitionProperty : InlineStyleProperty<StyleMaterialDefinition>
	{
		[Token(Token = "0x600182B")]
		[Address(RVA = "0x30CA710", Offset = "0x30C8D10", VA = "0x1830CA710")]
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

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x30BC020", Offset = "0x30BA620", VA = "0x1830BC020")]
	public InlineStyleAccessPropertyBag()
	{
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x30BBBF0", Offset = "0x30BA1F0", VA = "0x1830BBBF0")]
	private void AddPropertyRange(params IStyleProperty[] properties)
	{
	}

	[Token(Token = "0x6001601")]
	[Address(RVA = "0x30BBEF0", Offset = "0x30BA4F0", VA = "0x1830BBEF0", Slot = "12")]
	public override PropertyCollection<InlineStyleAccess> GetProperties()
	{
		return default(PropertyCollection<InlineStyleAccess>);
	}

	[Token(Token = "0x6001602")]
	[Address(RVA = "0x30BBF50", Offset = "0x30BA550", VA = "0x1830BBF50", Slot = "13")]
	public override PropertyCollection<InlineStyleAccess> GetProperties(ref InlineStyleAccess container)
	{
		return default(PropertyCollection<InlineStyleAccess>);
	}

	[Token(Token = "0x6001603")]
	[Address(RVA = "0x30BBFB0", Offset = "0x30BA5B0", VA = "0x1830BBFB0", Slot = "16")]
	public bool TryGetProperty(ref InlineStyleAccess container, string name, out IProperty<InlineStyleAccess> property)
	{
		return default(bool);
	}
}
