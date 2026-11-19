// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog
// Update status: CHANGED in this game update
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

[Token(Token = "0x200017D")]
[AottgDialog("setting-slider-value")]
public sealed class AottgSettingSliderValueDialog : AottgDialog
{
	[Token(Token = "0x40008A0")]
	public const string Id = "setting-slider-value";

	[Token(Token = "0x40008A1")]
	private const string InputId = "setting-slider-value-input";

	[Token(Token = "0x40008A2")]
	[FieldOffset(Offset = "0x0")]
	private static AottgSettingDescriptor _descriptor;

	[Token(Token = "0x17000108")]
	protected override string Title
	{
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x5D38C60", Offset = "0x5D37C60", VA = "0x5D38C60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x5D38CE0", Offset = "0x5D37CE0", VA = "0x5D38CE0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x5D38CF0", Offset = "0x5D37CF0", VA = "0x5D38CF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010B")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x5D38DB0", Offset = "0x5D37DB0", VA = "0x5D38DB0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x5D38E60", Offset = "0x5D37E60", VA = "0x5D38E60")]
	internal static void Open(GisketchActionContext context, AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x5D38F30", Offset = "0x5D37F30", VA = "0x5D38F30", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x5D39840", Offset = "0x5D38840", VA = "0x5D39840", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x5D39910", Offset = "0x5D38910", VA = "0x5D39910")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x5D39C20", Offset = "0x5D38C20", VA = "0x5D39C20")]
	private static string InputText(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x5D391E0", Offset = "0x5D381E0", VA = "0x5D391E0")]
	private static AottgInputType InputType(IAottgSettingAdapter adapter)
	{
		return default(AottgInputType);
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x5D39230", Offset = "0x5D38230", VA = "0x5D39230")]
	private static string RangeCallout(IAottgSettingAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x5D39DD0", Offset = "0x5D38DD0", VA = "0x5D39DD0")]
	private static string Format(float value)
	{
		return null;
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x5D39E40", Offset = "0x5D38E40", VA = "0x5D39E40")]
	public AottgSettingSliderValueDialog()
	{
	}
}
