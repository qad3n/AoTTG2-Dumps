using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200008B")]
internal class TargetPool
{
	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<int> m_Pool;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x18")]
	private int m_Current;

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4840A90", Offset = "0x4840A90", VA = "0x4840A90")]
	internal TargetPool()
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4840B20", Offset = "0x4840B20", VA = "0x4840B20")]
	internal int Get()
	{
		return default(int);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4840B40", Offset = "0x4840B40", VA = "0x4840B40")]
	private int Get(int i)
	{
		return default(int);
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4840CA0", Offset = "0x4840CA0", VA = "0x4840CA0")]
	internal void Reset()
	{
	}
}
