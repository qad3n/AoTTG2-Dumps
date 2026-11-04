// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgModerationReasonDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000266")]
[AottgDialog("ingame-moderation-reason")]
public sealed class AottgModerationReasonDialog : AottgDialog
{
	[Token(Token = "0x4000C61")]
	public const string Id = "ingame-moderation-reason";

	[Token(Token = "0x4000C62")]
	public const string TitleKey = "ingame-moderation-reason-title";

	[Token(Token = "0x4000C63")]
	public const string ReasonId = "ingame-moderation-reason-reason";

	[Token(Token = "0x1700018E")]
	protected override string Title
	{
		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x1DE41D0", Offset = "0x1DE27D0", VA = "0x181DE41D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018F")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x1DE40A0", Offset = "0x1DE26A0", VA = "0x181DE40A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000190")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000E7B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000191")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000E7C")]
		[Address(RVA = "0x1DE40D0", Offset = "0x1DE26D0", VA = "0x181DE40D0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x1DE3EF0", Offset = "0x1DE24F0", VA = "0x181DE3EF0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x1DE3FE0", Offset = "0x1DE25E0", VA = "0x181DE3FE0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgModerationReasonDialog()
	{
	}
}
