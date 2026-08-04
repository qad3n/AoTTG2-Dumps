// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BackgroundPosition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200000A")]
public struct BackgroundPosition : IEquatable<BackgroundPosition>
{
	[Token(Token = "0x200000B")]
	internal class PropertyBag : ContainerPropertyBag<BackgroundPosition>
	{
		[Token(Token = "0x200000C")]
		private class KeywordProperty : Property<BackgroundPosition, BackgroundPositionKeyword>
		{
			[Token(Token = "0x400001B")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000008")]
			public override string Name
			{
				[Token(Token = "0x6000034")]
				[Address(RVA = "0x4F0D0E0", Offset = "0x4F0D0E0", VA = "0x4F0D0E0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000035")]
			[Address(RVA = "0x4F0D020", Offset = "0x4F0D020", VA = "0x4F0D020")]
			public KeywordProperty()
			{
			}
		}

		[Token(Token = "0x200000D")]
		private class OffsetProperty : Property<BackgroundPosition, Length>
		{
			[Token(Token = "0x400001D")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000009")]
			public override string Name
			{
				[Token(Token = "0x6000036")]
				[Address(RVA = "0x4F0D0F0", Offset = "0x4F0D0F0", VA = "0x4F0D0F0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000037")]
			[Address(RVA = "0x4F0D080", Offset = "0x4F0D080", VA = "0x4F0D080")]
			public OffsetProperty()
			{
			}
		}

		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4F0CE90", Offset = "0x4F0CE90", VA = "0x4F0CE90")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x0")]
	public BackgroundPositionKeyword keyword;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x4")]
	public Length offset;

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4F0CB60", Offset = "0x4F0CB60", VA = "0x4F0CB60")]
	public BackgroundPosition(BackgroundPositionKeyword keyword)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4F0CBA0", Offset = "0x4F0CBA0", VA = "0x4F0CBA0")]
	public BackgroundPosition(BackgroundPositionKeyword keyword, Length offset)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4F0CBB0", Offset = "0x4F0CBB0", VA = "0x4F0CBB0")]
	internal static BackgroundPosition Initial()
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4F0CC50", Offset = "0x4F0CC50", VA = "0x4F0CC50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4F0CCE0", Offset = "0x4F0CCE0", VA = "0x4F0CCE0", Slot = "4")]
	public bool Equals(BackgroundPosition other)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4F0CD20", Offset = "0x4F0CD20", VA = "0x4F0CD20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4F0CD60", Offset = "0x4F0CD60", VA = "0x4F0CD60")]
	public static bool operator ==(BackgroundPosition style1, BackgroundPosition style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4F0CDA0", Offset = "0x4F0CDA0", VA = "0x4F0CDA0")]
	public static bool operator !=(BackgroundPosition style1, BackgroundPosition style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4F0CDF0", Offset = "0x4F0CDF0", VA = "0x4F0CDF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
