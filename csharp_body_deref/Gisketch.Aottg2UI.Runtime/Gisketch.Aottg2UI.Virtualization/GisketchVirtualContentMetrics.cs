// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics
// Update status: NEW in this game update
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
	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x0")]
	public readonly GisketchVirtualContentMode Mode;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x4")]
	public readonly int Columns;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x8")]
	public readonly float ItemWidth;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0xC")]
	public readonly float ItemHeight;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x10")]
	public readonly float Gap;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x14")]
	public readonly float ViewportHeight;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x18")]
	public readonly int VirtualizationThreshold;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int OverscanRows;

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x189BDD0", Offset = "0x189A3D0", VA = "0x18189BDD0")]
	public GisketchVirtualContentMetrics(GisketchVirtualContentMode mode, float itemWidth, float itemHeight, float gap, float viewportHeight, int columns = 1, int virtualizationThreshold = 80, int overscanRows = 2)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x189BDC0", Offset = "0x189A3C0", VA = "0x18189BDC0")]
	public bool ShouldVirtualize(int itemCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x189BD40", Offset = "0x189A340", VA = "0x18189BD40")]
	public int RowCount(int itemCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x189BA80", Offset = "0x189A080", VA = "0x18189BA80")]
	public float ContentHeight(int itemCount)
	{
		return default(float);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x189BAC0", Offset = "0x189A0C0", VA = "0x18189BAC0")]
	public float ContentWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x189BB40", Offset = "0x189A140", VA = "0x18189BB40")]
	public GisketchVirtualRange RangeFor(int itemCount, float offset, float viewportHeight)
	{
		return default(GisketchVirtualRange);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x189BB00", Offset = "0x189A100", VA = "0x18189BB00")]
	public Vector2 PositionFor(int itemIndex)
	{
		return default(Vector2);
	}
}
