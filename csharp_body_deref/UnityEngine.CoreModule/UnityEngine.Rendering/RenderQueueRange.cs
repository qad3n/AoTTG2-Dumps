// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderQueueRange
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003BF")]
public struct RenderQueueRange : IEquatable<RenderQueueRange>
{
	[Token(Token = "0x4000BF7")]
	[FieldOffset(Offset = "0x0")]
	private int m_LowerBound;

	[Token(Token = "0x4000BF8")]
	[FieldOffset(Offset = "0x4")]
	private int m_UpperBound;

	[Token(Token = "0x4000BF9")]
	private const int k_MinimumBound = 0;

	[Token(Token = "0x4000BFA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int minimumBound;

	[Token(Token = "0x4000BFB")]
	private const int k_MaximumBound = 5000;

	[Token(Token = "0x4000BFC")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int maximumBound;

	[Token(Token = "0x1700038B")]
	public static RenderQueueRange all
	{
		[Token(Token = "0x60016AD")]
		[Address(RVA = "0x2F6AEC0", Offset = "0x2F694C0", VA = "0x182F6AEC0")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x1700038C")]
	public static RenderQueueRange opaque
	{
		[Token(Token = "0x60016AE")]
		[Address(RVA = "0x2F6AEE0", Offset = "0x2F694E0", VA = "0x182F6AEE0")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x1700038D")]
	public static RenderQueueRange transparent
	{
		[Token(Token = "0x60016AF")]
		[Address(RVA = "0x2F6AF00", Offset = "0x2F69500", VA = "0x182F6AF00")]
		get
		{
			return default(RenderQueueRange);
		}
	}

	[Token(Token = "0x1700038E")]
	public int lowerBound
	{
		[Token(Token = "0x60016B0")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700038F")]
	public int upperBound
	{
		[Token(Token = "0x60016B1")]
		[Address(RVA = "0xD161B0", Offset = "0xD147B0", VA = "0x180D161B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60016B2")]
	[Address(RVA = "0x2ED5CB0", Offset = "0x2ED42B0", VA = "0x182ED5CB0", Slot = "4")]
	public bool Equals(RenderQueueRange other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B3")]
	[Address(RVA = "0x2F6ADA0", Offset = "0x2F693A0", VA = "0x182F6ADA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B4")]
	[Address(RVA = "0x2F6AE60", Offset = "0x2F69460", VA = "0x182F6AE60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016B5")]
	[Address(RVA = "0x2F6AF20", Offset = "0x2F69520", VA = "0x182F6AF20")]
	public static bool operator ==(RenderQueueRange left, RenderQueueRange right)
	{
		return default(bool);
	}
}
