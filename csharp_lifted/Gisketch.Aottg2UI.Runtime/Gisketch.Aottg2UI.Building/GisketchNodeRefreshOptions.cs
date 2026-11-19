// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchNodeRefreshOptions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchNodeRefreshOptions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000C1")]
public sealed class GisketchNodeRefreshOptions
{
	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x10")]
	public bool PreserveScroll;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x11")]
	public bool PreserveFocus;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x12")]
	public bool SettleLayout;

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x5294530", Offset = "0x5293530", VA = "0x5294530")]
	public GisketchNodeRefreshOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchNodeRefreshOptions.c (Gisketch.Aottg2UI.Building.GisketchNodeRefreshOptions$$.ctor): clean
		this.PreserveScroll = true;
		this.PreserveFocus = true;
		this.SettleLayout = true;
		base();
		return;
	}
}
