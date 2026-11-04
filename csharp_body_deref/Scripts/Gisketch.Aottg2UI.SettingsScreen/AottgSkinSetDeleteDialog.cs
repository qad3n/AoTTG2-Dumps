// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetDeleteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001A2")]
[AottgDialog("setting-skin-set-delete")]
public sealed class AottgSkinSetDeleteDialog : AottgDialog
{
	[Token(Token = "0x40008CF")]
	public const string Id = "setting-skin-set-delete";

	[Token(Token = "0x17000118")]
	protected override string Title
	{
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x239EB60", Offset = "0x239D160", VA = "0x18239EB60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000119")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60008EA")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60008EB")]
		[Address(RVA = "0x239EA60", Offset = "0x239D060", VA = "0x18239EA60", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x239E730", Offset = "0x239CD30", VA = "0x18239E730", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x239E7F0", Offset = "0x239CDF0", VA = "0x18239E7F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x239E8F0", Offset = "0x239CEF0", VA = "0x18239E8F0")]
	private static void Delete(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgSkinSetDeleteDialog()
	{
	}
}
