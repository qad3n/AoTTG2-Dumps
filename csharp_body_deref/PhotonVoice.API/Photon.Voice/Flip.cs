using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000086")]
public struct Flip
{
	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x0")]
	public static Flip None;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x2")]
	public static Flip Vertical;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x4")]
	public static Flip Horizontal;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x6")]
	public static Flip Both;

	[Token(Token = "0x170000C1")]
	public bool IsVertical
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x3C39B70", Offset = "0x3C39B70", VA = "0x3C39B70")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x3C39B80", Offset = "0x3C39B80", VA = "0x3C39B80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public bool IsHorizontal
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x3C39B90", Offset = "0x3C39B90", VA = "0x3C39B90")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x3C39BA0", Offset = "0x3C39BA0", VA = "0x3C39BA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x3C39BB0", Offset = "0x3C39BB0", VA = "0x3C39BB0")]
	public static bool operator ==(Flip f1, Flip f2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x3C39C30", Offset = "0x3C39C30", VA = "0x3C39C30")]
	public static bool operator !=(Flip f1, Flip f2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x3C39CB0", Offset = "0x3C39CB0", VA = "0x3C39CB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x3C39D10", Offset = "0x3C39D10", VA = "0x3C39D10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x3C39D60", Offset = "0x3C39D60", VA = "0x3C39D60")]
	public static Flip operator *(Flip f1, Flip f2)
	{
		return default(Flip);
	}
}
