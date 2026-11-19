// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModerationReasonPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000852")]
internal class ModerationReasonPopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private TMP_InputField _reason;

	[Token(Token = "0x4002A27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Action<string> _onConfirm;

	[Token(Token = "0x17000DDA")]
	protected override string DialogId
	{
		[Token(Token = "0x6004F91")]
		[Address(RVA = "0x5C39EC0", Offset = "0x5C38EC0", VA = "0x5C39EC0", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004F92")]
	[Address(RVA = "0x5C39EF0", Offset = "0x5C38EF0", VA = "0x5C39EF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004F93")]
	[Address(RVA = "0x5C39F90", Offset = "0x5C38F90", VA = "0x5C39F90")]
	public void Show(string actionTitle, Action<string> onConfirm)
	{
	}

	[Token(Token = "0x6004F94")]
	[Address(RVA = "0x5C3A040", Offset = "0x5C39040", VA = "0x5C3A040")]
	internal void Confirm()
	{
	}

	[Token(Token = "0x6004F95")]
	[Address(RVA = "0x5C3A0D0", Offset = "0x5C390D0", VA = "0x5C3A0D0")]
	public ModerationReasonPopup()
	{
	}
}
