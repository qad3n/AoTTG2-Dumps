// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModerationBatchBanPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ModerationBatchBanPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using TMPro;

namespace UI;

[Token(Token = "0x20007A4")]
internal class ModerationBatchBanPopup : AottgScoreboardPopup
{
	[Token(Token = "0x40026A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private TMP_InputField _targets;

	[Token(Token = "0x17000D5D")]
	protected override string DialogId
	{
		[Token(Token = "0x6004A5F")]
		[Address(RVA = "0x225DB00", Offset = "0x225C100", VA = "0x18225DB00", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004A60")]
	[Address(RVA = "0x225D880", Offset = "0x225BE80", VA = "0x18225D880", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A61")]
	[Address(RVA = "0x225D920", Offset = "0x225BF20", VA = "0x18225D920")]
	internal void Submit(string action)
	{
	}

	[Token(Token = "0x6004A62")]
	[Address(RVA = "0x225DAF0", Offset = "0x225C0F0", VA = "0x18225DAF0")]
	public ModerationBatchBanPopup()
	{
	}
}
