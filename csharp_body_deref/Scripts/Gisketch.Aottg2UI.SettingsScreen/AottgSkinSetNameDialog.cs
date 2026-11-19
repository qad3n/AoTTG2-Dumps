// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001B2")]
[AottgDialog("setting-skin-set-name")]
public sealed class AottgSkinSetNameDialog : AottgDialog
{
	[Token(Token = "0x400092C")]
	public const string Id = "setting-skin-set-name";

	[Token(Token = "0x400092D")]
	private const string InputId = "setting-skin-set-name-input";

	[Token(Token = "0x1700011E")]
	protected override string Title
	{
		[Token(Token = "0x6000984")]
		[Address(RVA = "0x5D56750", Offset = "0x5D55750", VA = "0x5D56750", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011F")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000985")]
		[Address(RVA = "0x5D56850", Offset = "0x5D55850", VA = "0x5D56850", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000120")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000986")]
		[Address(RVA = "0x5D56860", Offset = "0x5D55860", VA = "0x5D56860", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000121")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000987")]
		[Address(RVA = "0x5D56920", Offset = "0x5D55920", VA = "0x5D56920", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x5D569D0", Offset = "0x5D559D0", VA = "0x5D569D0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x5D56B70", Offset = "0x5D55B70", VA = "0x5D56B70", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x5D56760", Offset = "0x5D55760", VA = "0x5D56760")]
	private static string TitleText()
	{
		return null;
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x5D56C40", Offset = "0x5D55C40", VA = "0x5D56C40")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x5D56CF0", Offset = "0x5D55CF0", VA = "0x5D56CF0")]
	private static string InputText(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x5D56EB0", Offset = "0x5D55EB0", VA = "0x5D56EB0")]
	public AottgSkinSetNameDialog()
	{
	}
}
