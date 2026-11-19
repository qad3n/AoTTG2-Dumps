// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x2000009")]
public readonly struct GisketchVirtualContentMetrics
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x0")]
	public readonly GisketchVirtualContentMode Mode;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x4")]
	public readonly int Columns;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x8")]
	public readonly float ItemWidth;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0xC")]
	public readonly float ItemHeight;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x10")]
	public readonly float Gap;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x14")]
	public readonly float ViewportHeight;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x18")]
	public readonly int VirtualizationThreshold;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int OverscanRows;

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x521E3C0", Offset = "0x521D3C0", VA = "0x521E3C0")]
	public GisketchVirtualContentMetrics(GisketchVirtualContentMode mode, float itemWidth, float itemHeight, float gap, float viewportHeight, int columns = 1, int virtualizationThreshold = 80, int overscanRows = 2)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x521E400", Offset = "0x521D400", VA = "0x521E400")]
	public bool ShouldVirtualize(int itemCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x521E410", Offset = "0x521D410", VA = "0x521E410")]
	public int RowCount(int itemCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x521E4A0", Offset = "0x521D4A0", VA = "0x521E4A0")]
	public float ContentHeight(int itemCount)
	{
		return default(float);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x521E550", Offset = "0x521D550", VA = "0x521E550")]
	public float ContentWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x521E590", Offset = "0x521D590", VA = "0x521E590")]
	public GisketchVirtualRange RangeFor(int itemCount, float offset, float viewportHeight)
	{
		return default(GisketchVirtualRange);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x521E790", Offset = "0x521D790", VA = "0x521E790")]
	public Vector2 PositionFor(int itemIndex)
	{
		return default(Vector2);
	}
}
