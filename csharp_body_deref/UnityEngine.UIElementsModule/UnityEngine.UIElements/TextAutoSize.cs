// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextAutoSize
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004B2")]
public struct TextAutoSize : IEquatable<TextAutoSize>
{
	[Token(Token = "0x20004B3")]
	internal class PropertyBag : ContainerPropertyBag<TextAutoSize>
	{
		[Token(Token = "0x20004B4")]
		private class ModeProperty : Property<TextAutoSize, TextAutoSizeMode>
		{
			[Token(Token = "0x1700099D")]
			public override string Name
			{
				[Token(Token = "0x60024C4")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700099E")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60024C5")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60024C6")]
			[Address(RVA = "0x1392600", Offset = "0x1390C00", VA = "0x181392600", Slot = "14")]
			public override TextAutoSizeMode GetValue(ref TextAutoSize container)
			{
				return default(TextAutoSizeMode);
			}

			[Token(Token = "0x60024C7")]
			[Address(RVA = "0x2FF6340", Offset = "0x2FF4940", VA = "0x182FF6340", Slot = "15")]
			public override void SetValue(ref TextAutoSize container, TextAutoSizeMode value)
			{
			}

			[Token(Token = "0x60024C8")]
			[Address(RVA = "0x313D2C0", Offset = "0x313B8C0", VA = "0x18313D2C0")]
			public ModeProperty()
			{
			}
		}

		[Token(Token = "0x20004B5")]
		private class MinSizeProperty : Property<TextAutoSize, Length>
		{
			[Token(Token = "0x1700099F")]
			public override string Name
			{
				[Token(Token = "0x60024C9")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170009A0")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60024CA")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60024CB")]
			[Address(RVA = "0x3095F30", Offset = "0x3094530", VA = "0x183095F30", Slot = "14")]
			public override Length GetValue(ref TextAutoSize container)
			{
				return default(Length);
			}

			[Token(Token = "0x60024CC")]
			[Address(RVA = "0x3095F40", Offset = "0x3094540", VA = "0x183095F40", Slot = "15")]
			public override void SetValue(ref TextAutoSize container, Length value)
			{
			}

			[Token(Token = "0x60024CD")]
			[Address(RVA = "0x313D250", Offset = "0x313B850", VA = "0x18313D250")]
			public MinSizeProperty()
			{
			}
		}

		[Token(Token = "0x20004B6")]
		private class MaxSizeProperty : Property<TextAutoSize, Length>
		{
			[Token(Token = "0x170009A1")]
			public override string Name
			{
				[Token(Token = "0x60024CE")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170009A2")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60024CF")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60024D0")]
			[Address(RVA = "0x313D1C0", Offset = "0x313B7C0", VA = "0x18313D1C0", Slot = "14")]
			public override Length GetValue(ref TextAutoSize container)
			{
				return default(Length);
			}

			[Token(Token = "0x60024D1")]
			[Address(RVA = "0x313D1D0", Offset = "0x313B7D0", VA = "0x18313D1D0", Slot = "15")]
			public override void SetValue(ref TextAutoSize container, Length value)
			{
			}

			[Token(Token = "0x60024D2")]
			[Address(RVA = "0x313D1E0", Offset = "0x313B7E0", VA = "0x18313D1E0")]
			public MaxSizeProperty()
			{
			}
		}

		[Token(Token = "0x60024C3")]
		[Address(RVA = "0x313D4A0", Offset = "0x313BAA0", VA = "0x18313D4A0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x1700099A")]
	public TextAutoSizeMode mode
	{
		[Token(Token = "0x60024B7")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		readonly get
		{
			return default(TextAutoSizeMode);
		}
		[Token(Token = "0x60024B8")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700099B")]
	public Length minSize
	{
		[Token(Token = "0x60024B9")]
		[Address(RVA = "0xADC3D0", Offset = "0xADA9D0", VA = "0x180ADC3D0")]
		[CompilerGenerated]
		readonly get
		{
			return default(Length);
		}
		[Token(Token = "0x60024BA")]
		[Address(RVA = "0x1B943B0", Offset = "0x1B929B0", VA = "0x181B943B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700099C")]
	public Length maxSize
	{
		[Token(Token = "0x60024BB")]
		[Address(RVA = "0x2FCDF30", Offset = "0x2FCC530", VA = "0x182FCDF30")]
		[CompilerGenerated]
		readonly get
		{
			return default(Length);
		}
		[Token(Token = "0x60024BC")]
		[Address(RVA = "0x2FC6610", Offset = "0x2FC4C10", VA = "0x182FC6610")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60024BD")]
	[Address(RVA = "0x313DBD0", Offset = "0x313C1D0", VA = "0x18313DBD0")]
	public static TextAutoSize None()
	{
		return default(TextAutoSize);
	}

	[Token(Token = "0x60024BE")]
	[Address(RVA = "0x313DA00", Offset = "0x313C000", VA = "0x18313DA00", Slot = "4")]
	public bool Equals(TextAutoSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x60024BF")]
	[Address(RVA = "0x313DA70", Offset = "0x313C070", VA = "0x18313DA70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024C0")]
	[Address(RVA = "0x313DB40", Offset = "0x313C140", VA = "0x18313DB40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024C1")]
	[Address(RVA = "0x313DC30", Offset = "0x313C230", VA = "0x18313DC30")]
	public static bool operator ==(TextAutoSize left, TextAutoSize right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024C2")]
	[Address(RVA = "0x313DC90", Offset = "0x313C290", VA = "0x18313DC90")]
	public static bool operator !=(TextAutoSize left, TextAutoSize right)
	{
		return default(bool);
	}
}
