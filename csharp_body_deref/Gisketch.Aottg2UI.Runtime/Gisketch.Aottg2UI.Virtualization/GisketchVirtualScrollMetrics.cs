// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000E")]
public readonly struct GisketchVirtualScrollMetrics
{
	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x0")]
	public readonly float ItemHeight;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x4")]
	public readonly float Gap;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x8")]
	public readonly float ViewportHeight;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0xC")]
	public readonly int VirtualizationThreshold;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x10")]
	public readonly int OverscanRows;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x14")]
	public readonly float PaddingLeft;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x18")]
	public readonly float PaddingRight;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x1C")]
	public readonly float PaddingTop;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x20")]
	public readonly float PaddingBottom;

	[Token(Token = "0x17000011")]
	public float Step
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x5220880", Offset = "0x521F880", VA = "0x5220880")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5220820", Offset = "0x521F820", VA = "0x5220820")]
	public GisketchVirtualScrollMetrics(float itemHeight, float gap, float viewportHeight, int virtualizationThreshold = 80, int overscanRows = 2, float paddingLeft = 0f, float paddingRight = 0f, float paddingTop = 0f, float paddingBottom = 0f)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5220870", Offset = "0x521F870", VA = "0x5220870")]
	public bool ShouldVirtualize(int itemCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x5220890", Offset = "0x521F890", VA = "0x5220890")]
	public float ContentHeight(int itemCount)
	{
		return default(float);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x52208D0", Offset = "0x521F8D0", VA = "0x52208D0")]
	public GisketchVirtualRange RangeFor(int itemCount, float offset, float viewportHeight)
	{
		return default(GisketchVirtualRange);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x5220A50", Offset = "0x521FA50", VA = "0x5220A50")]
	public float OffsetFor(int itemIndex)
	{
		return default(float);
	}
}
