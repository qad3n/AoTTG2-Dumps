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

[Token(Token = "0x200015F")]
[AottgDialog("setting-keybind-capture", DismissOnBackdrop = false)]
public sealed class AottgKeybindCaptureDialog : AottgDialog
{
	[Token(Token = "0x400081B")]
	public const string Id = "setting-keybind-capture";

	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x0")]
	private static KeybindSetting _setting;

	[Token(Token = "0x400081D")]
	[FieldOffset(Offset = "0x8")]
	private static int _slot;

	[Token(Token = "0x400081E")]
	[FieldOffset(Offset = "0x10")]
	private static string _label;

	[Token(Token = "0x400081F")]
	[FieldOffset(Offset = "0x18")]
	private static string _rowId;

	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x20")]
	private static int _captureToken;

	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x28")]
	private static InputKey _draft;

	[Token(Token = "0x170000DA")]
	protected override string Title
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x5CBE120", Offset = "0x5CBD120", VA = "0x5CBE120", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DB")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x5CBE1B0", Offset = "0x5CBD1B0", VA = "0x5CBE1B0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DC")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x5CBE1C0", Offset = "0x5CBD1C0", VA = "0x5CBE1C0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x5CBE280", Offset = "0x5CBD280", VA = "0x5CBE280", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x5CBE330", Offset = "0x5CBD330", VA = "0x5CBE330")]
	internal static void Open(GisketchActionContext context, KeybindSetting setting, int slot, string label, string rowId)
	{
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x5CBE6A0", Offset = "0x5CBD6A0", VA = "0x5CBE6A0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x5CBEB10", Offset = "0x5CBDB10", VA = "0x5CBEB10", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x5CBEBF0", Offset = "0x5CBDBF0", VA = "0x5CBEBF0")]
	internal static void CaptureNext(GameObject source)
	{
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x5CBEFA0", Offset = "0x5CBDFA0", VA = "0x5CBEFA0")]
	internal static void EndCapture(int token)
	{
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x5CBEA30", Offset = "0x5CBDA30", VA = "0x5CBEA30")]
	private static string CurrentText()
	{
		return null;
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x5CBF010", Offset = "0x5CBE010", VA = "0x5CBF010")]
	private static void Cancel(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x5CBEC90", Offset = "0x5CBDC90", VA = "0x5CBEC90")]
	private static bool ShouldIgnorePointerRelease()
	{
		return default(bool);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x5CBF030", Offset = "0x5CBE030", VA = "0x5CBF030")]
	private static void Unbind(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x5CBEEF0", Offset = "0x5CBDEF0", VA = "0x5CBEEF0")]
	private static void Commit(string value, GameObject source)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x5CBF020", Offset = "0x5CBE020", VA = "0x5CBF020")]
	private static void Close(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x5CBF070", Offset = "0x5CBE070", VA = "0x5CBF070")]
	private static void Close(GameObject source, bool sync)
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x5CBF1D0", Offset = "0x5CBE1D0", VA = "0x5CBF1D0")]
	private static void ClearSelectedFocus()
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x5CBF660", Offset = "0x5CBE660", VA = "0x5CBF660")]
	public AottgKeybindCaptureDialog()
	{
	}
}
