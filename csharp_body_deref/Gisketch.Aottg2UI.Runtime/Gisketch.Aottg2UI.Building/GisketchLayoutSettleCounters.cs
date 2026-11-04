// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchLayoutSettleCounters
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutSettleCounters.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000A7")]
public readonly struct GisketchLayoutSettleCounters
{
	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Calls;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x4")]
	public readonly int FullCalls;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x8")]
	public readonly int TargetedCalls;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0xC")]
	public readonly int MeasurementCalls;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x10")]
	public readonly int CanvasFlushes;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x14")]
	public readonly int FlexRefreshes;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x18")]
	public readonly int ScrollbarPasses;

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x18DADB0", Offset = "0x18D93B0", VA = "0x1818DADB0")]
	public GisketchLayoutSettleCounters(int calls, int fullCalls, int targetedCalls, int measurementCalls, int canvasFlushes, int flexRefreshes, int scrollbarPasses)
	{
	}
}
