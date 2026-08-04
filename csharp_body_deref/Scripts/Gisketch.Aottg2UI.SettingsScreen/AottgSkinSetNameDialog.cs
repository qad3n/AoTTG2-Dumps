// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetNameDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000131")]
[AottgDialog("setting-skin-set-name")]
public sealed class AottgSkinSetNameDialog : AottgDialog
{
	[Token(Token = "0x40006F2")]
	public const string Id = "setting-skin-set-name";

	[Token(Token = "0x40006F3")]
	private const string InputId = "setting-skin-set-name-input";

	[Token(Token = "0x170000F4")]
	protected override string Title
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x4365E60", Offset = "0x4365E60", VA = "0x4365E60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x4365F80", Offset = "0x4365F80", VA = "0x4365F80", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x4365F90", Offset = "0x4365F90", VA = "0x4365F90", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F7")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x4366060", Offset = "0x4366060", VA = "0x4366060", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x4366120", Offset = "0x4366120", VA = "0x4366120", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x43662D0", Offset = "0x43662D0", VA = "0x43662D0", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x4365EF0", Offset = "0x4365EF0", VA = "0x4365EF0")]
	private static string TitleText()
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x43663A0", Offset = "0x43663A0", VA = "0x43663A0")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x4366460", Offset = "0x4366460", VA = "0x4366460")]
	private static string InputText(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x4366630", Offset = "0x4366630", VA = "0x4366630")]
	public AottgSkinSetNameDialog()
	{
	}
}
