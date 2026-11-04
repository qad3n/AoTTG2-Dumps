// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScrollContentLayout
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollContentLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gilzoide.FlexUi;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000B2")]
internal sealed class GisketchScrollContentLayout : FlexLayout
{
	[Token(Token = "0x40003A9")]
	private const float Epsilon = 0.01f;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x120")]
	private float _styleLeft;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x124")]
	private float _styleTop;

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x1903980", Offset = "0x1901F80", VA = "0x181903980")]
	public void SyncScrollOffset()
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x1903C10", Offset = "0x1902210", VA = "0x181903C10")]
	public GisketchScrollContentLayout()
	{
	}
}
