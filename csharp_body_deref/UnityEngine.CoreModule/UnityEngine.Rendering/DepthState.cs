// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DepthState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E5")]
public struct DepthState : IEquatable<DepthState>
{
	[Token(Token = "0x400089C")]
	[FieldOffset(Offset = "0x0")]
	private byte m_WriteEnabled;

	[Token(Token = "0x400089D")]
	[FieldOffset(Offset = "0x1")]
	private sbyte m_CompareFunction;

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x4E2D850", Offset = "0x4E2D850", VA = "0x4E2D850", Slot = "4")]
	public bool Equals(DepthState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x4E2D870", Offset = "0x4E2D870", VA = "0x4E2D870", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x4E2D8F0", Offset = "0x4E2D8F0", VA = "0x4E2D8F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
