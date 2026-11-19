// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgAdvancedConfigurationDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgAdvancedConfigurationDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002A0")]
[AottgDialog("advanced-configuration")]
public sealed class AottgAdvancedConfigurationDialog : AottgDialog
{
	[Token(Token = "0x4000D68")]
	public const string Id = "advanced-configuration";

	[Token(Token = "0x4000D69")]
	private const string Prefix = "MainMenu.AdvancedConfigurationPopup.";

	[Token(Token = "0x4000D6A")]
	private const int KeyMaxLength = 64;

	[Token(Token = "0x4000D6B")]
	private const int UrlMaxLength = 2048;

	[Token(Token = "0x4000D6C")]
	private const int SecretMaxLength = 4096;

	[Token(Token = "0x4000D6D")]
	private const float KeyWidth = 220f;

	[Token(Token = "0x4000D6E")]
	private const float DeleteSize = 44f;

	[Token(Token = "0x4000D6F")]
	[FieldOffset(Offset = "0x0")]
	private static AdvancedSettings _draft;

	[Token(Token = "0x170001C1")]
	protected override string Title
	{
		[Token(Token = "0x600100E")]
		[Address(RVA = "0x57BCC80", Offset = "0x57BBC80", VA = "0x57BCC80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600100F")]
		[Address(RVA = "0x57BCCE0", Offset = "0x57BBCE0", VA = "0x57BCCE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6001010")]
		[Address(RVA = "0x57BCD10", Offset = "0x57BBD10", VA = "0x57BCD10", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001C4")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001011")]
		[Address(RVA = "0x57BCD20", Offset = "0x57BBD20", VA = "0x57BCD20", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001012")]
		[Address(RVA = "0x57BCE10", Offset = "0x57BBE10", VA = "0x57BCE10", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x57BCEC0", Offset = "0x57BBEC0", VA = "0x57BCEC0")]
	public static void Open()
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x57BCFD0", Offset = "0x57BBFD0", VA = "0x57BCFD0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x57BD2A0", Offset = "0x57BC2A0", VA = "0x57BD2A0")]
	private static void BuildSection(AottgUi body, string id, ListSetting<StringSetting> keys, ListSetting<StringSetting> values, string valueKey, AottgInputType valueType, int valueMaxLength, Action<StringSetting> validate, string addKey)
	{
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x57BD960", Offset = "0x57BC960", VA = "0x57BD960", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x57BD680", Offset = "0x57BC680", VA = "0x57BD680")]
	private static void BuildHeader(AottgUi body, string id, string valueKey)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x57BD7C0", Offset = "0x57BC7C0", VA = "0x57BD7C0")]
	private static void BuildRow(AottgUi body, string id, ListSetting<StringSetting> keys, ListSetting<StringSetting> values, StringSetting key, StringSetting value, AottgInputType valueType, int valueMaxLength, Action<StringSetting> validate)
	{
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x57BDB20", Offset = "0x57BCB20", VA = "0x57BDB20")]
	private static void Input(AottgUi row, string id, StringSetting setting, AottgInputType type, int maxLength, GisketchLayoutDefinition layout, Action<StringSetting> validate)
	{
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x57BDD00", Offset = "0x57BCD00", VA = "0x57BDD00")]
	private static void ValidateUrl(StringSetting url)
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x57BE030", Offset = "0x57BD030", VA = "0x57BE030")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x57BE190", Offset = "0x57BD190", VA = "0x57BE190")]
	private static void Refresh()
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x57BDF40", Offset = "0x57BCF40", VA = "0x57BDF40")]
	private static void Toast(AottgToastVariant variant, string icon, string content)
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x57BDA40", Offset = "0x57BCA40", VA = "0x57BDA40")]
	private static GisketchLayoutDefinition RowLayout()
	{
		return null;
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x57BDEC0", Offset = "0x57BCEC0", VA = "0x57BDEC0")]
	private static string Text(string item)
	{
		return null;
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x57BE1E0", Offset = "0x57BD1E0", VA = "0x57BE1E0")]
	public AottgAdvancedConfigurationDialog()
	{
	}
}
