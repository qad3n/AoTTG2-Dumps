// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPlayerPropDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000265")]
[AottgDialog("ingame-moderation-player-prop")]
public sealed class AottgPlayerPropDialog : AottgDialog
{
	[Token(Token = "0x4000C5C")]
	public const string Id = "ingame-moderation-player-prop";

	[Token(Token = "0x4000C5D")]
	public const string TitleKey = "ingame-moderation-player-prop-title";

	[Token(Token = "0x4000C5E")]
	public const string NameId = "ingame-moderation-player-prop-name";

	[Token(Token = "0x4000C5F")]
	public const string ValueId = "ingame-moderation-player-prop-value";

	[Token(Token = "0x4000C60")]
	public const string StatusId = "ingame-moderation-player-prop-status";

	[Token(Token = "0x1700018A")]
	protected override string Title
	{
		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x1DE5060", Offset = "0x1DE3660", VA = "0x181DE5060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018B")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000E73")]
		[Address(RVA = "0x1DE4F30", Offset = "0x1DE3530", VA = "0x181DE4F30", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018C")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000E74")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018D")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000E75")]
		[Address(RVA = "0x1DE4F60", Offset = "0x1DE3560", VA = "0x181DE4F60", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x1DE4CA0", Offset = "0x1DE32A0", VA = "0x181DE4CA0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x1DE4E70", Offset = "0x1DE3470", VA = "0x181DE4E70", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgPlayerPropDialog()
	{
	}
}
