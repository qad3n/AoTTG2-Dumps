// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardKickPopup
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardKickPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20007AD")]
internal sealed class ScoreboardKickPopup : AottgScoreboardPopup
{
	[Token(Token = "0x40026C7")]
	[FieldOffset(Offset = "0xD0")]
	private UnityAction _onConfirm;

	[Token(Token = "0x17000D70")]
	protected override string DialogId
	{
		[Token(Token = "0x6004AAB")]
		[Address(RVA = "0x2262F60", Offset = "0x2261560", VA = "0x182262F60", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004AAC")]
	[Address(RVA = "0x2262E90", Offset = "0x2261490", VA = "0x182262E90")]
	public void Show(string message, UnityAction onConfirm)
	{
	}

	[Token(Token = "0x6004AAD")]
	[Address(RVA = "0x2262E20", Offset = "0x2261420", VA = "0x182262E20")]
	internal void Confirm()
	{
	}

	[Token(Token = "0x6004AAE")]
	[Address(RVA = "0x225DAF0", Offset = "0x225C0F0", VA = "0x18225DAF0")]
	public ScoreboardKickPopup()
	{
	}
}
