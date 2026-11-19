// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000292")]
[AottgDialog("ingame-scoreboard-kick")]
public sealed class AottgScoreboardKickDialog : AottgDialog
{
	[Token(Token = "0x4000D1F")]
	public const string Id = "ingame-scoreboard-kick";

	[Token(Token = "0x4000D20")]
	public const string MessageId = "ingame-scoreboard-kick-message";

	[Token(Token = "0x170001A7")]
	protected override string Title
	{
		[Token(Token = "0x6000FA6")]
		[Address(RVA = "0x57B59E0", Offset = "0x57B49E0", VA = "0x57B59E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A8")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x57B5A40", Offset = "0x57B4A40", VA = "0x57B5A40", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A9")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x57B5A50", Offset = "0x57B4A50", VA = "0x57B5A50", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001AA")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x57B5A60", Offset = "0x57B4A60", VA = "0x57B5A60", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x57B5B20", Offset = "0x57B4B20", VA = "0x57B5B20", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x57B5BB0", Offset = "0x57B4BB0", VA = "0x57B5BB0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x57B5C40", Offset = "0x57B4C40", VA = "0x57B5C40")]
	public AottgScoreboardKickDialog()
	{
	}
}
