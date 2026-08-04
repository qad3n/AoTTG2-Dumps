// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BackgroundSize
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

[Token(Token = "0x2000013")]
public struct BackgroundSize : IEquatable<BackgroundSize>
{
	[Token(Token = "0x2000014")]
	internal class PropertyBag : ContainerPropertyBag<BackgroundSize>
	{
		[Token(Token = "0x2000015")]
		private class SizeTypeProperty : Property<BackgroundSize, BackgroundSizeType>
		{
			[Token(Token = "0x4000028")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700000F")]
			public override string Name
			{
				[Token(Token = "0x6000059")]
				[Address(RVA = "0x4F0E1E0", Offset = "0x4F0E1E0", VA = "0x4F0E1E0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600005A")]
			[Address(RVA = "0x4F0E0C0", Offset = "0x4F0E0C0", VA = "0x4F0E0C0")]
			public SizeTypeProperty()
			{
			}
		}

		[Token(Token = "0x2000016")]
		private class XProperty : Property<BackgroundSize, Length>
		{
			[Token(Token = "0x400002A")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000010")]
			public override string Name
			{
				[Token(Token = "0x600005B")]
				[Address(RVA = "0x4F0E1F0", Offset = "0x4F0E1F0", VA = "0x4F0E1F0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600005C")]
			[Address(RVA = "0x4F0E120", Offset = "0x4F0E120", VA = "0x4F0E120")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000017")]
		private class YProperty : Property<BackgroundSize, Length>
		{
			[Token(Token = "0x400002C")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000011")]
			public override string Name
			{
				[Token(Token = "0x600005D")]
				[Address(RVA = "0x4F0E200", Offset = "0x4F0E200", VA = "0x4F0E200", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600005E")]
			[Address(RVA = "0x4F0E180", Offset = "0x4F0E180", VA = "0x4F0E180")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x6000058")]
		[Address(RVA = "0x4F0DEA0", Offset = "0x4F0DEA0", VA = "0x4F0DEA0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x0")]
	private BackgroundSizeType m_SizeType;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x4")]
	private Length m_X;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0xC")]
	private Length m_Y;

	[Token(Token = "0x1700000C")]
	public BackgroundSizeType sizeType
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4F0DB60", Offset = "0x4F0DB60", VA = "0x4F0DB60")]
		get
		{
			return default(BackgroundSizeType);
		}
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4F0DB70", Offset = "0x4F0DB70", VA = "0x4F0DB70")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Length x
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4F0DBC0", Offset = "0x4F0DBC0", VA = "0x4F0DBC0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4F0DBD0", Offset = "0x4F0DBD0", VA = "0x4F0DBD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Length y
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x4F0DBE0", Offset = "0x4F0DBE0", VA = "0x4F0DBE0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x4F0DBF0", Offset = "0x4F0DBF0", VA = "0x4F0DBF0")]
		set
		{
		}
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4F0D240", Offset = "0x4F0D240", VA = "0x4F0D240")]
	public BackgroundSize(Length sizeX, Length sizeY)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4F0D1F0", Offset = "0x4F0D1F0", VA = "0x4F0D1F0")]
	public BackgroundSize(BackgroundSizeType sizeType)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4F0DC00", Offset = "0x4F0DC00", VA = "0x4F0DC00")]
	internal static BackgroundSize Initial()
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4F0DC50", Offset = "0x4F0DC50", VA = "0x4F0DC50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4F0DCE0", Offset = "0x4F0DCE0", VA = "0x4F0DCE0", Slot = "4")]
	public bool Equals(BackgroundSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4F0DD30", Offset = "0x4F0DD30", VA = "0x4F0DD30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4F0D710", Offset = "0x4F0D710", VA = "0x4F0D710")]
	public static bool operator ==(BackgroundSize style1, BackgroundSize style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4F0DD80", Offset = "0x4F0DD80", VA = "0x4F0DD80")]
	public static bool operator !=(BackgroundSize style1, BackgroundSize style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4F0DDE0", Offset = "0x4F0DDE0", VA = "0x4F0DDE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
