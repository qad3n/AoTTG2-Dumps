// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200012D")]
[AottgDialog("setting-slider-value")]
public sealed class AottgSettingSliderValueDialog : AottgDialog
{
	[Token(Token = "0x40006E8")]
	public const string Id = "setting-slider-value";

	[Token(Token = "0x40006E9")]
	private const string InputId = "setting-slider-value-input";

	[Token(Token = "0x40006EA")]
	[FieldOffset(Offset = "0x0")]
	private static AottgSettingDescriptor _descriptor;

	[Token(Token = "0x170000EB")]
	protected override string Title
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x4363CE0", Offset = "0x4363CE0", VA = "0x4363CE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EC")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x4363D40", Offset = "0x4363D40", VA = "0x4363D40", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000ED")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x4363D50", Offset = "0x4363D50", VA = "0x4363D50", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EE")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x4363E20", Offset = "0x4363E20", VA = "0x4363E20", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x4362AE0", Offset = "0x4362AE0", VA = "0x4362AE0")]
	internal static void Open(GisketchActionContext context, AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x4363EE0", Offset = "0x4363EE0", VA = "0x4363EE0", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x4364840", Offset = "0x4364840", VA = "0x4364840", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x4364910", Offset = "0x4364910", VA = "0x4364910")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x4364C30", Offset = "0x4364C30", VA = "0x4364C30")]
	private static string InputText(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x4364160", Offset = "0x4364160", VA = "0x4364160")]
	private static string RangeCallout(IAottgSettingAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x4364DF0", Offset = "0x4364DF0", VA = "0x4364DF0")]
	private static string Format(float value)
	{
		return null;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4364E60", Offset = "0x4364E60", VA = "0x4364E60")]
	public AottgSettingSliderValueDialog()
	{
	}
}
