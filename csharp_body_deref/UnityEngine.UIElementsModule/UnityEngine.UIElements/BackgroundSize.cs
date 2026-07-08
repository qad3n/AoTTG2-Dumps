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
				[Address(RVA = "0x4BE68B0", Offset = "0x4BE68B0", VA = "0x4BE68B0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600005A")]
			[Address(RVA = "0x4BE6790", Offset = "0x4BE6790", VA = "0x4BE6790")]
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
				[Address(RVA = "0x4BE68C0", Offset = "0x4BE68C0", VA = "0x4BE68C0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600005C")]
			[Address(RVA = "0x4BE67F0", Offset = "0x4BE67F0", VA = "0x4BE67F0")]
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
				[Address(RVA = "0x4BE68D0", Offset = "0x4BE68D0", VA = "0x4BE68D0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600005E")]
			[Address(RVA = "0x4BE6850", Offset = "0x4BE6850", VA = "0x4BE6850")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x6000058")]
		[Address(RVA = "0x4BE6570", Offset = "0x4BE6570", VA = "0x4BE6570")]
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
		[Address(RVA = "0x4BE6230", Offset = "0x4BE6230", VA = "0x4BE6230")]
		get
		{
			return default(BackgroundSizeType);
		}
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4BE6240", Offset = "0x4BE6240", VA = "0x4BE6240")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Length x
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4BE6290", Offset = "0x4BE6290", VA = "0x4BE6290")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4BE62A0", Offset = "0x4BE62A0", VA = "0x4BE62A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Length y
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x4BE62B0", Offset = "0x4BE62B0", VA = "0x4BE62B0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x4BE62C0", Offset = "0x4BE62C0", VA = "0x4BE62C0")]
		set
		{
		}
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4BE5910", Offset = "0x4BE5910", VA = "0x4BE5910")]
	public BackgroundSize(Length sizeX, Length sizeY)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4BE58C0", Offset = "0x4BE58C0", VA = "0x4BE58C0")]
	public BackgroundSize(BackgroundSizeType sizeType)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4BE62D0", Offset = "0x4BE62D0", VA = "0x4BE62D0")]
	internal static BackgroundSize Initial()
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4BE6320", Offset = "0x4BE6320", VA = "0x4BE6320", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4BE63B0", Offset = "0x4BE63B0", VA = "0x4BE63B0", Slot = "4")]
	public bool Equals(BackgroundSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4BE6400", Offset = "0x4BE6400", VA = "0x4BE6400", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4BE5DE0", Offset = "0x4BE5DE0", VA = "0x4BE5DE0")]
	public static bool operator ==(BackgroundSize style1, BackgroundSize style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4BE6450", Offset = "0x4BE6450", VA = "0x4BE6450")]
	public static bool operator !=(BackgroundSize style1, BackgroundSize style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4BE64B0", Offset = "0x4BE64B0", VA = "0x4BE64B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
