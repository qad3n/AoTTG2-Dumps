// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMenuStatusLabel
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMenuStatusLabel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B3")]
internal sealed class AottgMenuStatusLabel : AottgComponent
{
	[Token(Token = "0x4000DCB")]
	private const string TextKey = "menu.status.text";

	[Token(Token = "0x4000DCC")]
	private const string VisibleKey = "menu.status.visible";

	[Token(Token = "0x4000DCD")]
	private const float RefreshSeconds = 0.25f;

	[Token(Token = "0x4000DCE")]
	private const float Padding = 20f;

	[Token(Token = "0x4000DCF")]
	[FieldOffset(Offset = "0x0")]
	private static float _nextRefreshTime;

	[Token(Token = "0x4000DD0")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000DD1")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _style;

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x57C1B10", Offset = "0x57C0B10", VA = "0x57C1B10")]
	public AottgMenuStatusLabel(string id, string style = "menuStatusText")
	{
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x57C29A0", Offset = "0x57C19A0", VA = "0x57C29A0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x57C2B30", Offset = "0x57C1B30", VA = "0x57C2B30")]
	public static void Refresh(GisketchUIState state)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x57C2C10", Offset = "0x57C1C10", VA = "0x57C2C10")]
	private static string StatusText()
	{
		return null;
	}
}
