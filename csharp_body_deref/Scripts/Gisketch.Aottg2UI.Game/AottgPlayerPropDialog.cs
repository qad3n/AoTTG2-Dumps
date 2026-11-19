// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPlayerPropDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028B")]
[AottgDialog("ingame-moderation-player-prop")]
public sealed class AottgPlayerPropDialog : AottgDialog
{
	[Token(Token = "0x4000D0C")]
	public const string Id = "ingame-moderation-player-prop";

	[Token(Token = "0x4000D0D")]
	public const string TitleKey = "ingame-moderation-player-prop-title";

	[Token(Token = "0x4000D0E")]
	public const string NameId = "ingame-moderation-player-prop-name";

	[Token(Token = "0x4000D0F")]
	public const string ValueId = "ingame-moderation-player-prop-value";

	[Token(Token = "0x4000D10")]
	public const string StatusId = "ingame-moderation-player-prop-status";

	[Token(Token = "0x17000195")]
	protected override string Title
	{
		[Token(Token = "0x6000F81")]
		[Address(RVA = "0x57B3FF0", Offset = "0x57B2FF0", VA = "0x57B3FF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000196")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000F82")]
		[Address(RVA = "0x57B4050", Offset = "0x57B3050", VA = "0x57B4050", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000197")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000F83")]
		[Address(RVA = "0x57B4080", Offset = "0x57B3080", VA = "0x57B4080", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000198")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x57B4090", Offset = "0x57B3090", VA = "0x57B4090", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x57B4150", Offset = "0x57B3150", VA = "0x57B4150", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x57B4300", Offset = "0x57B3300", VA = "0x57B4300", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x57B4390", Offset = "0x57B3390", VA = "0x57B4390")]
	public AottgPlayerPropDialog()
	{
	}
}
