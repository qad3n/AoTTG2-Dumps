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
				[Address(RVA = "0x6A7C770", Offset = "0x6A7B770", VA = "0x6A7C770", Slot = "12")]
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
				[Address(RVA = "0x6A7C780", Offset = "0x6A7B780", VA = "0x6A7C780", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600004D")]
			[Address(RVA = "0x6A7C790", Offset = "0x6A7B790", VA = "0x6A7C790", Slot = "14")]
			public override BackgroundPositionKeyword GetValue(ref BackgroundPosition container)
			{
				return default(BackgroundPositionKeyword);
			}

			[Token(Token = "0x600004E")]
			[Address(RVA = "0x6A7C7A0", Offset = "0x6A7B7A0", VA = "0x6A7C7A0", Slot = "15")]
			public override void SetValue(ref BackgroundPosition container, BackgroundPositionKeyword value)
			{
			}

			[Token(Token = "0x600004F")]
			[Address(RVA = "0x6A7C6B0", Offset = "0x6A7B6B0", VA = "0x6A7C6B0")]
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
				[Address(RVA = "0x6A7C7B0", Offset = "0x6A7B7B0", VA = "0x6A7C7B0", Slot = "12")]
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
				[Address(RVA = "0x6A7C7C0", Offset = "0x6A7B7C0", VA = "0x6A7C7C0", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000052")]
			[Address(RVA = "0x6A7C7D0", Offset = "0x6A7B7D0", VA = "0x6A7C7D0", Slot = "14")]
			public override Length GetValue(ref BackgroundPosition container)
			{
				return default(Length);
			}

			[Token(Token = "0x6000053")]
			[Address(RVA = "0x6A7C7E0", Offset = "0x6A7B7E0", VA = "0x6A7C7E0", Slot = "15")]
			public override void SetValue(ref BackgroundPosition container, Length value)
			{
			}

			[Token(Token = "0x6000054")]
			[Address(RVA = "0x6A7C710", Offset = "0x6A7B710", VA = "0x6A7C710")]
			public OffsetProperty()
			{
			}
		}

		[Token(Token = "0x600004A")]
		[Address(RVA = "0x6A7C510", Offset = "0x6A7B510", VA = "0x6A7C510")]
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
	[Address(RVA = "0x6A7C200", Offset = "0x6A7B200", VA = "0x6A7C200")]
	public BackgroundPosition(BackgroundPositionKeyword keyword)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6A7C240", Offset = "0x6A7B240", VA = "0x6A7C240")]
	public BackgroundPosition(BackgroundPositionKeyword keyword, Length offset)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x6A7C250", Offset = "0x6A7B250", VA = "0x6A7C250")]
	internal static BackgroundPosition Initial()
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6A7C2D0", Offset = "0x6A7B2D0", VA = "0x6A7C2D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6A7C360", Offset = "0x6A7B360", VA = "0x6A7C360", Slot = "4")]
	public bool Equals(BackgroundPosition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x6A7C3A0", Offset = "0x6A7B3A0", VA = "0x6A7C3A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x6A7C3E0", Offset = "0x6A7B3E0", VA = "0x6A7C3E0")]
	public static bool operator ==(BackgroundPosition style1, BackgroundPosition style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6A7C420", Offset = "0x6A7B420", VA = "0x6A7C420")]
	public static bool operator !=(BackgroundPosition style1, BackgroundPosition style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6A7C470", Offset = "0x6A7B470", VA = "0x6A7C470", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
