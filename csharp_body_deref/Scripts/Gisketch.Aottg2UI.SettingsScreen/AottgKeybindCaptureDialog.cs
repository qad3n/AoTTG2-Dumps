// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000157")]
[AottgDialog("setting-keybind-capture", DismissOnBackdrop = false)]
public sealed class AottgKeybindCaptureDialog : AottgDialog
{
	[Token(Token = "0x40007CF")]
	public const string Id = "setting-keybind-capture";

	[Token(Token = "0x40007D0")]
	[FieldOffset(Offset = "0x0")]
	private static KeybindSetting _setting;

	[Token(Token = "0x40007D1")]
	[FieldOffset(Offset = "0x8")]
	private static int _slot;

	[Token(Token = "0x40007D2")]
	[FieldOffset(Offset = "0x10")]
	private static string _label;

	[Token(Token = "0x40007D3")]
	[FieldOffset(Offset = "0x18")]
	private static string _rowId;

	[Token(Token = "0x40007D4")]
	[FieldOffset(Offset = "0x20")]
	private static int _captureToken;

	[Token(Token = "0x40007D5")]
	[FieldOffset(Offset = "0x28")]
	private static InputKey _draft;

	[Token(Token = "0x170000D7")]
	protected override string Title
	{
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x2305B20", Offset = "0x2304120", VA = "0x182305B20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x2305A20", Offset = "0x2304020", VA = "0x182305A20", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60006DE")]
		[Address(RVA = "0x2305930", Offset = "0x2303F30", VA = "0x182305930", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x23053A0", Offset = "0x23039A0", VA = "0x1823053A0")]
	internal static void Open(GisketchActionContext context, KeybindSetting setting, int slot, string label, string rowId)
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x23047C0", Offset = "0x2302DC0", VA = "0x1823047C0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x2304CC0", Offset = "0x23032C0", VA = "0x182304CC0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x2304DF0", Offset = "0x23033F0", VA = "0x182304DF0")]
	internal static void CaptureNext(GameObject source)
	{
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x2305330", Offset = "0x2303930", VA = "0x182305330")]
	internal static void EndCapture(int token)
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x2305200", Offset = "0x2303800", VA = "0x182305200")]
	private static string CurrentText()
	{
		return null;
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x2305890", Offset = "0x2303E90", VA = "0x182305890")]
	private static string Text(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x2304DE0", Offset = "0x23033E0", VA = "0x182304DE0")]
	private static void Cancel(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x2305610", Offset = "0x2303C10", VA = "0x182305610")]
	private static bool ShouldIgnorePointerRelease()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x23058F0", Offset = "0x2303EF0", VA = "0x1823058F0")]
	private static void Unbind(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x2305140", Offset = "0x2303740", VA = "0x182305140")]
	private static void Commit(string value, GameObject source)
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x2304DE0", Offset = "0x23033E0", VA = "0x182304DE0")]
	private static void Close(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x2304F50", Offset = "0x2303550", VA = "0x182304F50")]
	private static void Close(GameObject source, bool sync)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x2304E90", Offset = "0x2303490", VA = "0x182304E90")]
	private static void ClearSelectedFocus()
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgKeybindCaptureDialog()
	{
	}
}
