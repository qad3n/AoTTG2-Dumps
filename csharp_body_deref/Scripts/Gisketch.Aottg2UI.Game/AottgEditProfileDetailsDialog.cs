// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001B1")]
[AottgDialog("profile-edit-details")]
public sealed class AottgEditProfileDetailsDialog : AottgDialog
{
	[Token(Token = "0x4000959")]
	public const string Id = "profile-edit-details";

	[Token(Token = "0x1700015E")]
	protected override string Title
	{
		[Token(Token = "0x6000A3A")]
		[Address(RVA = "0x4421400", Offset = "0x4421400", VA = "0x4421400", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000A3B")]
		[Address(RVA = "0x4421430", Offset = "0x4421430", VA = "0x4421430", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000A3C")]
		[Address(RVA = "0x4421460", Offset = "0x4421460", VA = "0x4421460", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x4421530", Offset = "0x4421530", VA = "0x4421530", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x4421E50", Offset = "0x4421E50", VA = "0x4421E50", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x4421770", Offset = "0x4421770", VA = "0x4421770")]
	private static void AccountNameInput(AottgUi ui)
	{
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x4421A20", Offset = "0x4421A20", VA = "0x4421A20")]
	private static void LocalBioImport(AottgUi ui)
	{
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x4421C60", Offset = "0x4421C60", VA = "0x4421C60")]
	private static void LabeledTextArea(AottgUi ui, string label, string id, string placeholder)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x4421F90", Offset = "0x4421F90", VA = "0x4421F90")]
	public AottgEditProfileDetailsDialog()
	{
	}
}
