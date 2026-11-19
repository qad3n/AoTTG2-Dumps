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

[Token(Token = "0x2000390")]
public struct RenderQueueRange : IEquatable<RenderQueueRange>
{
	[Token(Token = "0x4000AC4")]
	[FieldOffset(Offset = "0x0")]
	private int m_LowerBound;

	[Token(Token = "0x4000AC5")]
	[FieldOffset(Offset = "0x4")]
	private int m_UpperBound;

	[Token(Token = "0x4000AC6")]
	private const int k_MinimumBound = 0;

	[Token(Token = "0x4000AC7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int minimumBound;

	[Token(Token = "0x4000AC8")]
	private const int k_MaximumBound = 5000;

	[Token(Token = "0x4000AC9")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int maximumBound;

	[Token(Token = "0x17000375")]
	public static RenderQueueRange all
	{
		[Token(Token = "0x6001646")]
		[Address(RVA = "0x695AF80", Offset = "0x6959F80", VA = "0x695AF80")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x17000376")]
	public static RenderQueueRange opaque
	{
		[Token(Token = "0x6001647")]
		[Address(RVA = "0x695DC50", Offset = "0x695CC50", VA = "0x695DC50")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x17000377")]
	public static RenderQueueRange transparent
	{
		[Token(Token = "0x6001648")]
		[Address(RVA = "0x695DC60", Offset = "0x695CC60", VA = "0x695DC60")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x17000378")]
	public int lowerBound
	{
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x695DC70", Offset = "0x695CC70", VA = "0x695DC70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000379")]
	public int upperBound
	{
		[Token(Token = "0x600164A")]
		[Address(RVA = "0x695DC80", Offset = "0x695CC80", VA = "0x695DC80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600164B")]
	[Address(RVA = "0x695B080", Offset = "0x695A080", VA = "0x695B080", Slot = "4")]
	public bool Equals(RenderQueueRange other)
	{
		return default(bool);
	}

	[Token(Token = "0x600164C")]
	[Address(RVA = "0x695DC90", Offset = "0x695CC90", VA = "0x695DC90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600164D")]
	[Address(RVA = "0x695B210", Offset = "0x695A210", VA = "0x695B210", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600164E")]
	[Address(RVA = "0x695DD30", Offset = "0x695CD30", VA = "0x695DD30")]
	public static bool operator ==(RenderQueueRange left, RenderQueueRange right)
	{
		return default(bool);
	}
}
