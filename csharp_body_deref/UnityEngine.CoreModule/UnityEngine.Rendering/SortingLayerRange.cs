// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SortingLayerRange
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003CA")]
public struct SortingLayerRange : IEquatable<SortingLayerRange>
{
	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0x0")]
	private short m_LowerBound;

	[Token(Token = "0x4000C38")]
	[FieldOffset(Offset = "0x2")]
	private short m_UpperBound;

	[Token(Token = "0x1700039D")]
	public static SortingLayerRange all
	{
		[Token(Token = "0x6001714")]
		[Address(RVA = "0x2F729B0", Offset = "0x2F70FB0", VA = "0x182F729B0")]
		get
		{
			return default(SortingLayerRange);
		}
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x2F728E0", Offset = "0x2F70EE0", VA = "0x182F728E0", Slot = "4")]
	public bool Equals(SortingLayerRange other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x2F72900", Offset = "0x2F70F00", VA = "0x182F72900", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x2F729A0", Offset = "0x2F70FA0", VA = "0x182F729A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
