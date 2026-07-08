using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F0")]
public struct RenderQueueRange : IEquatable<RenderQueueRange>
{
	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x0")]
	private int m_LowerBound;

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x4")]
	private int m_UpperBound;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int minimumBound;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int maximumBound;

	[Token(Token = "0x1700029A")]
	public static RenderQueueRange all
	{
		[Token(Token = "0x600107B")]
		[Address(RVA = "0x4B06C80", Offset = "0x4B06C80", VA = "0x4B06C80")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x4B06D40", Offset = "0x4B06D40", VA = "0x4B06D40", Slot = "4")]
	public bool Equals(RenderQueueRange other)
	{
		return default(bool);
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x4B08B10", Offset = "0x4B08B10", VA = "0x4B08B10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600107E")]
	[Address(RVA = "0x4B06EA0", Offset = "0x4B06EA0", VA = "0x4B06EA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
