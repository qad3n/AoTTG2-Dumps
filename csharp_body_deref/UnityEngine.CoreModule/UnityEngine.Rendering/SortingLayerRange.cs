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

[Token(Token = "0x2000301")]
public struct SortingLayerRange : IEquatable<SortingLayerRange>
{
	[Token(Token = "0x400092D")]
	[FieldOffset(Offset = "0x0")]
	private short m_LowerBound;

	[Token(Token = "0x400092E")]
	[FieldOffset(Offset = "0x2")]
	private short m_UpperBound;

	[Token(Token = "0x170002A2")]
	public static SortingLayerRange all
	{
		[Token(Token = "0x60010C5")]
		[Address(RVA = "0x4E2E5C0", Offset = "0x4E2E5C0", VA = "0x4E2E5C0")]
		get
		{
			return default(SortingLayerRange);
		}
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x4E334D0", Offset = "0x4E334D0", VA = "0x4E334D0", Slot = "4")]
	public bool Equals(SortingLayerRange other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x4E334F0", Offset = "0x4E334F0", VA = "0x4E334F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x4E33560", Offset = "0x4E33560", VA = "0x4E33560", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
