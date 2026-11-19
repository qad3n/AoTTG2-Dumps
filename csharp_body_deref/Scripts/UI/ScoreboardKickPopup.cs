// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardKickPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardKickPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000859")]
internal sealed class ScoreboardKickPopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A47")]
	[FieldOffset(Offset = "0xD0")]
	private UnityAction _onConfirm;

	[Token(Token = "0x17000DE1")]
	protected override string DialogId
	{
		[Token(Token = "0x6004FC7")]
		[Address(RVA = "0x5C3EA40", Offset = "0x5C3DA40", VA = "0x5C3EA40", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004FC8")]
	[Address(RVA = "0x5C3EA70", Offset = "0x5C3DA70", VA = "0x5C3EA70")]
	public void Show(string message, UnityAction onConfirm)
	{
	}

	[Token(Token = "0x6004FC9")]
	[Address(RVA = "0x5C3EB30", Offset = "0x5C3DB30", VA = "0x5C3EB30")]
	internal void Confirm()
	{
	}

	[Token(Token = "0x6004FCA")]
	[Address(RVA = "0x5C3EBA0", Offset = "0x5C3DBA0", VA = "0x5C3EBA0")]
	public ScoreboardKickPopup()
	{
	}
}
