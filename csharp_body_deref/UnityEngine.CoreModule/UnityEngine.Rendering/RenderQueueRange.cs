// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderQueueRange
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F3")]
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

	[Token(Token = "0x1700029B")]
	public static RenderQueueRange all
	{
		[Token(Token = "0x600107D")]
		[Address(RVA = "0x4E2E5B0", Offset = "0x4E2E5B0", VA = "0x4E2E5B0")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x600107E")]
	[Address(RVA = "0x4E2E670", Offset = "0x4E2E670", VA = "0x4E2E670", Slot = "4")]
	public bool Equals(RenderQueueRange other)
	{
		return default(bool);
	}

	[Token(Token = "0x600107F")]
	[Address(RVA = "0x4E30440", Offset = "0x4E30440", VA = "0x4E30440", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001080")]
	[Address(RVA = "0x4E2E7D0", Offset = "0x4E2E7D0", VA = "0x4E2E7D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
