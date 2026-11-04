// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BackgroundPosition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200000E")]
public struct BackgroundPosition : IEquatable<BackgroundPosition>
{
	[Token(Token = "0x200000F")]
	internal class PropertyBag : ContainerPropertyBag<BackgroundPosition>
	{
		[Token(Token = "0x2000010")]
		private class KeywordProperty : Property<BackgroundPosition, BackgroundPositionKeyword>
		{
			[Token(Token = "0x1700000F")]
			public override string Name
			{
				[Token(Token = "0x600004B")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000010")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600004C")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600004D")]
			[Address(RVA = "0x1392600", Offset = "0x1390C00", VA = "0x181392600", Slot = "14")]
			public override BackgroundPositionKeyword GetValue(ref BackgroundPosition container)
			{
				return default(BackgroundPositionKeyword);
			}

			[Token(Token = "0x600004E")]
			[Address(RVA = "0x2FF6340", Offset = "0x2FF4940", VA = "0x182FF6340", Slot = "15")]
			public override void SetValue(ref BackgroundPosition container, BackgroundPositionKeyword value)
			{
			}

			[Token(Token = "0x600004F")]
			[Address(RVA = "0x3095D40", Offset = "0x3094340", VA = "0x183095D40")]
			public KeywordProperty()
			{
			}
		}

		[Token(Token = "0x2000011")]
		private class OffsetProperty : Property<BackgroundPosition, Length>
		{
			[Token(Token = "0x17000011")]
			public override string Name
			{
				[Token(Token = "0x6000050")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000012")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000051")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000052")]
			[Address(RVA = "0x3095F30", Offset = "0x3094530", VA = "0x183095F30", Slot = "14")]
			public override Length GetValue(ref BackgroundPosition container)
			{
				return default(Length);
			}

			[Token(Token = "0x6000053")]
			[Address(RVA = "0x3095F40", Offset = "0x3094540", VA = "0x183095F40", Slot = "15")]
			public override void SetValue(ref BackgroundPosition container, Length value)
			{
			}

			[Token(Token = "0x6000054")]
			[Address(RVA = "0x3095F50", Offset = "0x3094550", VA = "0x183095F50")]
			public OffsetProperty()
			{
			}
		}

		[Token(Token = "0x600004A")]
		[Address(RVA = "0x3096140", Offset = "0x3094740", VA = "0x183096140")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x0")]
	public BackgroundPositionKeyword keyword;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x4")]
	public Length offset;

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x307DC00", Offset = "0x307C200", VA = "0x18307DC00")]
	public BackgroundPosition(BackgroundPositionKeyword keyword)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x1028B40", Offset = "0x1027140", VA = "0x181028B40")]
	public BackgroundPosition(BackgroundPositionKeyword keyword, Length offset)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x307DB10", Offset = "0x307C110", VA = "0x18307DB10")]
	internal static BackgroundPosition Initial()
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x307DA30", Offset = "0x307C030", VA = "0x18307DA30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x307D9E0", Offset = "0x307BFE0", VA = "0x18307D9E0", Slot = "4")]
	public bool Equals(BackgroundPosition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x307DAD0", Offset = "0x307C0D0", VA = "0x18307DAD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x307D9E0", Offset = "0x307BFE0", VA = "0x18307D9E0")]
	public static bool operator ==(BackgroundPosition style1, BackgroundPosition style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x307DC40", Offset = "0x307C240", VA = "0x18307DC40")]
	public static bool operator !=(BackgroundPosition style1, BackgroundPosition style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x307DB60", Offset = "0x307C160", VA = "0x18307DB60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
