// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000130")]
[AottgDialog("setting-skin-set-delete")]
public sealed class AottgSkinSetDeleteDialog : AottgDialog
{
	[Token(Token = "0x40006F1")]
	public const string Id = "setting-skin-set-delete";

	[Token(Token = "0x170000F1")]
	protected override string Title
	{
		[Token(Token = "0x6000654")]
		[Address(RVA = "0x4365B50", Offset = "0x4365B50", VA = "0x4365B50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F2")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000655")]
		[Address(RVA = "0x4365B80", Offset = "0x4365B80", VA = "0x4365B80", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F3")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x4365B90", Offset = "0x4365B90", VA = "0x4365B90", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x4365C60", Offset = "0x4365C60", VA = "0x4365C60", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x4365CD0", Offset = "0x4365CD0", VA = "0x4365CD0", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x4365DA0", Offset = "0x4365DA0", VA = "0x4365DA0")]
	private static void Delete(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x4365E50", Offset = "0x4365E50", VA = "0x4365E50")]
	public AottgSkinSetDeleteDialog()
	{
	}
}
