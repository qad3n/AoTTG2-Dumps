// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000E")]
public readonly struct GisketchVirtualScrollMetrics
{
	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x0")]
	public readonly float ItemHeight;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x4")]
	public readonly float Gap;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x8")]
	public readonly float ViewportHeight;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0xC")]
	public readonly int VirtualizationThreshold;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x10")]
	public readonly int OverscanRows;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x14")]
	public readonly float PaddingLeft;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x18")]
	public readonly float PaddingRight;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x1C")]
	public readonly float PaddingTop;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x20")]
	public readonly float PaddingBottom;

	[Token(Token = "0x17000011")]
	public float Step
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x189E5B0", Offset = "0x189CBB0", VA = "0x18189E5B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x189E520", Offset = "0x189CB20", VA = "0x18189E520")]
	public GisketchVirtualScrollMetrics(float itemHeight, float gap, float viewportHeight, int virtualizationThreshold = 80, int overscanRows = 2, float paddingLeft = 0f, float paddingRight = 0f, float paddingTop = 0f, float paddingBottom = 0f)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x189E510", Offset = "0x189CB10", VA = "0x18189E510")]
	public bool ShouldVirtualize(int itemCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x189E330", Offset = "0x189C930", VA = "0x18189E330")]
	public float ContentHeight(int itemCount)
	{
		return default(float);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x189E3C0", Offset = "0x189C9C0", VA = "0x18189E3C0")]
	public GisketchVirtualRange RangeFor(int itemCount, float offset, float viewportHeight)
	{
		return default(GisketchVirtualRange);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x189E390", Offset = "0x189C990", VA = "0x18189E390")]
	public float OffsetFor(int itemIndex)
	{
		return default(float);
	}
}
