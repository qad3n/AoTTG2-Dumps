// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanSkinsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanSkinsPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007CD")]
internal class CharacterEditorTitanSkinsPanel : HeadedPanel
{
	[Token(Token = "0x4002729")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int _previewSetIndex;

	[Token(Token = "0x400272A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static bool _previewEnabled;

	[Token(Token = "0x400272B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5")]
	private static bool _hasInitialized;

	[Token(Token = "0x400272C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x400272D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private IntSetting _setIndex;

	[Token(Token = "0x400272E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private BoolSetting _enabled;

	[Token(Token = "0x17000D24")]
	protected override string Title
	{
		[Token(Token = "0x6004B3A")]
		[Address(RVA = "0x5BDE790", Offset = "0x5BDD790", VA = "0x5BDE790", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D25")]
	protected override float Width
	{
		[Token(Token = "0x6004B3B")]
		[Address(RVA = "0x5BDE830", Offset = "0x5BDD830", VA = "0x5BDE830", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D26")]
	protected override float Height
	{
		[Token(Token = "0x6004B3C")]
		[Address(RVA = "0x5BDE840", Offset = "0x5BDD840", VA = "0x5BDE840", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D27")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B3D")]
		[Address(RVA = "0x5BDE850", Offset = "0x5BDD850", VA = "0x5BDE850", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D28")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B3E")]
		[Address(RVA = "0x5BDE860", Offset = "0x5BDD860", VA = "0x5BDE860", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D29")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B3F")]
		[Address(RVA = "0x5BDE870", Offset = "0x5BDD870", VA = "0x5BDE870", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004B40")]
	[Address(RVA = "0x5BDE880", Offset = "0x5BDD880", VA = "0x5BDE880")]
	public static void ResetPreview()
	{
	}

	[Token(Token = "0x6004B41")]
	[Address(RVA = "0x5BDE8C0", Offset = "0x5BDD8C0", VA = "0x5BDE8C0")]
	private static void EnsureInitialized()
	{
	}

	[Token(Token = "0x6004B42")]
	[Address(RVA = "0x5BDE980", Offset = "0x5BDD980", VA = "0x5BDE980")]
	public static TitanCustomSkinSet GetPreviewSkinSet()
	{
		return null;
	}

	[Token(Token = "0x6004B43")]
	[Address(RVA = "0x5BDEB60", Offset = "0x5BDDB60", VA = "0x5BDEB60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B44")]
	[Address(RVA = "0x5BDEFC0", Offset = "0x5BDDFC0", VA = "0x5BDEFC0")]
	private void ExpandLabel(GameObject setting)
	{
	}

	[Token(Token = "0x6004B45")]
	[Address(RVA = "0x5BDF140", Offset = "0x5BDE140", VA = "0x5BDF140")]
	private void OnSkinsChanged()
	{
	}

	[Token(Token = "0x6004B46")]
	[Address(RVA = "0x5BDF1E0", Offset = "0x5BDE1E0", VA = "0x5BDF1E0")]
	public CharacterEditorTitanSkinsPanel()
	{
	}
}
