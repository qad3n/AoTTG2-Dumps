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

[Token(Token = "0x2000175")]
[AottgDialog("setting-slider-value")]
public sealed class AottgSettingSliderValueDialog : AottgDialog
{
	[Token(Token = "0x4000856")]
	public const string Id = "setting-slider-value";

	[Token(Token = "0x4000857")]
	private const string InputId = "setting-slider-value-input";

	[Token(Token = "0x4000858")]
	[FieldOffset(Offset = "0x0")]
	private static AottgSettingDescriptor _descriptor;

	[Token(Token = "0x17000105")]
	protected override string Title
	{
		[Token(Token = "0x60007CE")]
		[Address(RVA = "0x2312DD0", Offset = "0x23113D0", VA = "0x182312DD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000106")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60007CF")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000107")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60007D0")]
		[Address(RVA = "0x2312CD0", Offset = "0x23112D0", VA = "0x182312CD0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000108")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x2312BE0", Offset = "0x23111E0", VA = "0x182312BE0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x23125D0", Offset = "0x2310BD0", VA = "0x1823125D0")]
	internal static void Open(GisketchActionContext context, AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x2311FF0", Offset = "0x23105F0", VA = "0x182311FF0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x2312260", Offset = "0x2310860", VA = "0x182312260", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x2312870", Offset = "0x2310E70", VA = "0x182312870")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x23123D0", Offset = "0x23109D0", VA = "0x1823123D0")]
	private static string InputText(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x2312570", Offset = "0x2310B70", VA = "0x182312570")]
	private static AottgInputType InputType(IAottgSettingAdapter adapter)
	{
		return default(AottgInputType);
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x2312690", Offset = "0x2310C90", VA = "0x182312690")]
	private static string RangeCallout(IAottgSettingAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x2312B80", Offset = "0x2311180", VA = "0x182312B80")]
	private static string Text(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x2312360", Offset = "0x2310960", VA = "0x182312360")]
	private static string Format(float value)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgSettingSliderValueDialog()
	{
	}
}
