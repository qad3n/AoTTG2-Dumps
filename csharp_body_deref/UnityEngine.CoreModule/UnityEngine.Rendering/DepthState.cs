using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E2")]
public struct DepthState : IEquatable<DepthState>
{
	[Token(Token = "0x400089C")]
	[FieldOffset(Offset = "0x0")]
	private byte m_WriteEnabled;

	[Token(Token = "0x400089D")]
	[FieldOffset(Offset = "0x1")]
	private sbyte m_CompareFunction;

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x4B05F20", Offset = "0x4B05F20", VA = "0x4B05F20", Slot = "4")]
	public bool Equals(DepthState other)
	{
		return default(bool);
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x4B05F40", Offset = "0x4B05F40", VA = "0x4B05F40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x4B05FC0", Offset = "0x4B05FC0", VA = "0x4B05FC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
