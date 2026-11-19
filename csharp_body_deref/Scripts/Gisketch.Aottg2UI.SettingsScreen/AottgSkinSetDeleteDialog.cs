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

[Token(Token = "0x20001B1")]
[AottgDialog("setting-skin-set-delete")]
public sealed class AottgSkinSetDeleteDialog : AottgDialog
{
	[Token(Token = "0x400092B")]
	public const string Id = "setting-skin-set-delete";

	[Token(Token = "0x1700011B")]
	protected override string Title
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x5D56400", Offset = "0x5D55400", VA = "0x5D56400", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011C")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x5D56460", Offset = "0x5D55460", VA = "0x5D56460", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011D")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0x5D56470", Offset = "0x5D55470", VA = "0x5D56470", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x5D56530", Offset = "0x5D55530", VA = "0x5D56530", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x5D565D0", Offset = "0x5D555D0", VA = "0x5D565D0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x5D566A0", Offset = "0x5D556A0", VA = "0x5D566A0")]
	private static void Delete(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x5D56740", Offset = "0x5D55740", VA = "0x5D56740")]
	public AottgSkinSetDeleteDialog()
	{
	}
}
