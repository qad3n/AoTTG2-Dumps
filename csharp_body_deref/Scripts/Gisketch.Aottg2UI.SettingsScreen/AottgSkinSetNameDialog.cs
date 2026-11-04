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

[Token(Token = "0x20001A3")]
[AottgDialog("setting-skin-set-name")]
public sealed class AottgSkinSetNameDialog : AottgDialog
{
	[Token(Token = "0x40008D0")]
	public const string Id = "setting-skin-set-name";

	[Token(Token = "0x40008D1")]
	private const string InputId = "setting-skin-set-name-input";

	[Token(Token = "0x1700011B")]
	protected override string Title
	{
		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x239F4A0", Offset = "0x239DAA0", VA = "0x18239F4A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011C")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011D")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x239F3A0", Offset = "0x239D9A0", VA = "0x18239F3A0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x239F2B0", Offset = "0x239D8B0", VA = "0x18239F2B0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x239EBD0", Offset = "0x239D1D0", VA = "0x18239EBD0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x239EDC0", Offset = "0x239D3C0", VA = "0x18239EDC0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x239F190", Offset = "0x239D790", VA = "0x18239F190")]
	private static string TitleText()
	{
		return null;
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x239F130", Offset = "0x239D730", VA = "0x18239F130")]
	private static string Text(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x239F080", Offset = "0x239D680", VA = "0x18239F080")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x239EEC0", Offset = "0x239D4C0", VA = "0x18239EEC0")]
	private static string InputText(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgSkinSetNameDialog()
	{
	}
}
