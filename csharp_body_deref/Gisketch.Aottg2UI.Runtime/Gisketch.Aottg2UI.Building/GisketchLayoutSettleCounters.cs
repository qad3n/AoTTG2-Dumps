// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchLayoutSettleCounters
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutSettleCounters.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000AD")]
public readonly struct GisketchLayoutSettleCounters
{
	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Calls;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x4")]
	public readonly int FullCalls;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x8")]
	public readonly int TargetedCalls;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0xC")]
	public readonly int MeasurementCalls;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x10")]
	public readonly int CanvasFlushes;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x14")]
	public readonly int FlexRefreshes;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x18")]
	public readonly int ScrollbarPasses;

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x527BD00", Offset = "0x527AD00", VA = "0x527BD00")]
	public GisketchLayoutSettleCounters(int calls, int fullCalls, int targetedCalls, int measurementCalls, int canvasFlushes, int flexRefreshes, int scrollbarPasses)
	{
	}
}
