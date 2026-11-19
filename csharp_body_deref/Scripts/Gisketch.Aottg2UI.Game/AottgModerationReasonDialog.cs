// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgModerationReasonDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028C")]
[AottgDialog("ingame-moderation-reason")]
public sealed class AottgModerationReasonDialog : AottgDialog
{
	[Token(Token = "0x4000D11")]
	public const string Id = "ingame-moderation-reason";

	[Token(Token = "0x4000D12")]
	public const string TitleKey = "ingame-moderation-reason-title";

	[Token(Token = "0x4000D13")]
	public const string ReasonId = "ingame-moderation-reason-reason";

	[Token(Token = "0x17000199")]
	protected override string Title
	{
		[Token(Token = "0x6000F88")]
		[Address(RVA = "0x57B43A0", Offset = "0x57B33A0", VA = "0x57B43A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019A")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000F89")]
		[Address(RVA = "0x57B4400", Offset = "0x57B3400", VA = "0x57B4400", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019B")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x57B4430", Offset = "0x57B3430", VA = "0x57B4430", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019C")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x57B4440", Offset = "0x57B3440", VA = "0x57B4440", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x57B4500", Offset = "0x57B3500", VA = "0x57B4500", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x57B45E0", Offset = "0x57B35E0", VA = "0x57B45E0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x57B4670", Offset = "0x57B3670", VA = "0x57B4670")]
	public AottgModerationReasonDialog()
	{
	}
}
