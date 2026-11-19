// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000301")]
[AottgDialog("profile-change-emote-text")]
public sealed class AottgChangeEmoteTextDialog : AottgDialog
{
	[Token(Token = "0x4000F51")]
	public const string Id = "profile-change-emote-text";

	[Token(Token = "0x4000F52")]
	public const string InputId = "profile-change-emote-text-input";

	[Token(Token = "0x1700020B")]
	protected override string Title
	{
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x57F5310", Offset = "0x57F4310", VA = "0x57F5310", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020C")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x57F5370", Offset = "0x57F4370", VA = "0x57F5370", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020D")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x57F53A0", Offset = "0x57F43A0", VA = "0x57F53A0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x57F53B0", Offset = "0x57F43B0", VA = "0x57F53B0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x57F5470", Offset = "0x57F4470", VA = "0x57F5470", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x57F5730", Offset = "0x57F4730", VA = "0x57F5730", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x57F5650", Offset = "0x57F4650", VA = "0x57F5650")]
	private static string TextValue(int index)
	{
		return null;
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x57F57C0", Offset = "0x57F47C0", VA = "0x57F57C0")]
	public AottgChangeEmoteTextDialog()
	{
	}
}
