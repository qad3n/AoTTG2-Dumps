// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardProfileDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardProfileDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028F")]
[AottgDialog("ingame-scoreboard-profile")]
public sealed class AottgScoreboardProfileDialog : AottgDialog
{
	[Token(Token = "0x4000D16")]
	public const string Id = "ingame-scoreboard-profile";

	[Token(Token = "0x4000D17")]
	public const string ContentId = "ingame-scoreboard-profile-content";

	[Token(Token = "0x170001A2")]
	protected override string Title
	{
		[Token(Token = "0x6000F98")]
		[Address(RVA = "0x57B50E0", Offset = "0x57B40E0", VA = "0x57B50E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A3")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F99")]
		[Address(RVA = "0x57B5140", Offset = "0x57B4140", VA = "0x57B5140", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x57B5210", Offset = "0x57B4210", VA = "0x57B5210", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x57B5330", Offset = "0x57B4330", VA = "0x57B5330", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x57B5390", Offset = "0x57B4390", VA = "0x57B5390")]
	public AottgScoreboardProfileDialog()
	{
	}
}
