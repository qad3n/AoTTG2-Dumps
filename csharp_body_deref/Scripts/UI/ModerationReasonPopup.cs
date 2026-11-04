// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModerationReasonPopup
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ModerationReasonPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using TMPro;

namespace UI;

[Token(Token = "0x20007A6")]
internal class ModerationReasonPopup : AottgScoreboardPopup
{
	[Token(Token = "0x40026A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private TMP_InputField _reason;

	[Token(Token = "0x40026AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Action<string> _onConfirm;

	[Token(Token = "0x17000D64")]
	protected override string DialogId
	{
		[Token(Token = "0x6004A6E")]
		[Address(RVA = "0x225E210", Offset = "0x225C810", VA = "0x18225E210", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004A6F")]
	[Address(RVA = "0x225E0B0", Offset = "0x225C6B0", VA = "0x18225E0B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A70")]
	[Address(RVA = "0x225E150", Offset = "0x225C750", VA = "0x18225E150")]
	public void Show(string actionTitle, Action<string> onConfirm)
	{
	}

	[Token(Token = "0x6004A71")]
	[Address(RVA = "0x225E010", Offset = "0x225C610", VA = "0x18225E010")]
	internal void Confirm()
	{
	}

	[Token(Token = "0x6004A72")]
	[Address(RVA = "0x225DAF0", Offset = "0x225C0F0", VA = "0x18225DAF0")]
	public ModerationReasonPopup()
	{
	}
}
