using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002FE")]
public struct SortingLayerRange : IEquatable<SortingLayerRange>
{
	[Token(Token = "0x400092D")]
	[FieldOffset(Offset = "0x0")]
	private short m_LowerBound;

	[Token(Token = "0x400092E")]
	[FieldOffset(Offset = "0x2")]
	private short m_UpperBound;

	[Token(Token = "0x170002A1")]
	public static SortingLayerRange all
	{
		[Token(Token = "0x60010C3")]
		[Address(RVA = "0x4B06C90", Offset = "0x4B06C90", VA = "0x4B06C90")]
		get
		{
			return default(SortingLayerRange);
		}
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x4B0BBA0", Offset = "0x4B0BBA0", VA = "0x4B0BBA0", Slot = "4")]
	public bool Equals(SortingLayerRange other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x4B0BBC0", Offset = "0x4B0BBC0", VA = "0x4B0BBC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x4B0BC30", Offset = "0x4B0BC30", VA = "0x4B0BC30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
