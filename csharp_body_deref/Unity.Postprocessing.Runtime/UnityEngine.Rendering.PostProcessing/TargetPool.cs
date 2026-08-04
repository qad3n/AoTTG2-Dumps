// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.TargetPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B65B80", Offset = "0x4B65B80", VA = "0x4B65B80")]
	internal TargetPool()
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4B65C10", Offset = "0x4B65C10", VA = "0x4B65C10")]
	internal int Get()
	{
		return default(int);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4B65C30", Offset = "0x4B65C30", VA = "0x4B65C30")]
	private int Get(int i)
	{
		return default(int);
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4B65D90", Offset = "0x4B65D90", VA = "0x4B65D90")]
	internal void Reset()
	{
	}
}
