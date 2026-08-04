// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000119")]
[AottgDialog("setting-keybind-capture", DismissOnBackdrop = false)]
public sealed class AottgKeybindCaptureDialog : AottgDialog
{
	[Token(Token = "0x40006A5")]
	public const string Id = "setting-keybind-capture";

	[Token(Token = "0x40006A6")]
	[FieldOffset(Offset = "0x0")]
	private static KeybindSetting _setting;

	[Token(Token = "0x40006A7")]
	[FieldOffset(Offset = "0x8")]
	private static int _slot;

	[Token(Token = "0x40006A8")]
	[FieldOffset(Offset = "0x10")]
	private static string _label;

	[Token(Token = "0x40006A9")]
	[FieldOffset(Offset = "0x18")]
	private static int _captureToken;

	[Token(Token = "0x40006AA")]
	[FieldOffset(Offset = "0x20")]
	private static InputKey _draft;

	[Token(Token = "0x170000C2")]
	protected override string Title
	{
		[Token(Token = "0x60005B2")]
		[Address(RVA = "0x435D920", Offset = "0x435D920", VA = "0x435D920", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C3")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x435D990", Offset = "0x435D990", VA = "0x435D990", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C4")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x435D9A0", Offset = "0x435D9A0", VA = "0x435D9A0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0x435DA70", Offset = "0x435DA70", VA = "0x435DA70", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x435DB30", Offset = "0x435DB30", VA = "0x435DB30")]
	internal static void Open(GisketchActionContext context, KeybindSetting setting, int slot, string label)
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x435DE70", Offset = "0x435DE70", VA = "0x435DE70", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x435E280", Offset = "0x435E280", VA = "0x435E280", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x435E360", Offset = "0x435E360", VA = "0x435E360")]
	internal static void CaptureNext(GameObject source)
	{
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x435E4A0", Offset = "0x435E4A0", VA = "0x435E4A0")]
	internal static void EndCapture(int token)
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x435E1D0", Offset = "0x435E1D0", VA = "0x435E1D0")]
	private static string CurrentText()
	{
		return null;
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x435E4F0", Offset = "0x435E4F0", VA = "0x435E4F0")]
	private static void Cancel(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x435E510", Offset = "0x435E510", VA = "0x435E510")]
	private static void Unbind(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x435E3F0", Offset = "0x435E3F0", VA = "0x435E3F0")]
	private static void Commit(string value, GameObject source)
	{
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x435E500", Offset = "0x435E500", VA = "0x435E500")]
	private static void Close(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x435E550", Offset = "0x435E550", VA = "0x435E550")]
	private static void Close(GameObject source)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x435E660", Offset = "0x435E660", VA = "0x435E660")]
	public AottgKeybindCaptureDialog()
	{
	}
}
