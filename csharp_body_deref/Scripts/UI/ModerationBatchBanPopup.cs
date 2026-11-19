// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModerationBatchBanPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ModerationBatchBanPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using TMPro;

namespace UI;

[Token(Token = "0x2000851")]
internal class ModerationBatchBanPopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private TMP_InputField _targets;

	[Token(Token = "0x17000DD9")]
	protected override string DialogId
	{
		[Token(Token = "0x6004F8D")]
		[Address(RVA = "0x5C39C00", Offset = "0x5C38C00", VA = "0x5C39C00", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004F8E")]
	[Address(RVA = "0x5C39C30", Offset = "0x5C38C30", VA = "0x5C39C30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004F8F")]
	[Address(RVA = "0x5C39CD0", Offset = "0x5C38CD0", VA = "0x5C39CD0")]
	internal void Submit(string action)
	{
	}

	[Token(Token = "0x6004F90")]
	[Address(RVA = "0x5C39EB0", Offset = "0x5C38EB0", VA = "0x5C39EB0")]
	public ModerationBatchBanPopup()
	{
	}
}
