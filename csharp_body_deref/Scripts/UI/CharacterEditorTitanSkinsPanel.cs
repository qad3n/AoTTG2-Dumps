// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanSkinsPanel
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanSkinsPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000725")]
internal class CharacterEditorTitanSkinsPanel : HeadedPanel
{
	[Token(Token = "0x40023AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int _previewSetIndex;

	[Token(Token = "0x40023AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static bool _previewEnabled;

	[Token(Token = "0x40023AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5")]
	private static bool _hasInitialized;

	[Token(Token = "0x40023B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x40023B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private IntSetting _setIndex;

	[Token(Token = "0x40023B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private BoolSetting _enabled;

	[Token(Token = "0x17000C9F")]
	protected override string Title
	{
		[Token(Token = "0x6004611")]
		[Address(RVA = "0x21E1AC0", Offset = "0x21E00C0", VA = "0x1821E1AC0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CA0")]
	protected override float Width
	{
		[Token(Token = "0x6004612")]
		[Address(RVA = "0x21D2010", Offset = "0x21D0610", VA = "0x1821D2010", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA1")]
	protected override float Height
	{
		[Token(Token = "0x6004613")]
		[Address(RVA = "0x21C1230", Offset = "0x21BF830", VA = "0x1821C1230", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA2")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004614")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA3")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004615")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CA4")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004616")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004617")]
	[Address(RVA = "0x21E1450", Offset = "0x21DFA50", VA = "0x1821E1450")]
	public static void ResetPreview()
	{
	}

	[Token(Token = "0x6004618")]
	[Address(RVA = "0x21E0F60", Offset = "0x21DF560", VA = "0x1821E0F60")]
	private static void EnsureInitialized()
	{
	}

	[Token(Token = "0x6004619")]
	[Address(RVA = "0x21E11C0", Offset = "0x21DF7C0", VA = "0x1821E11C0")]
	public static TitanCustomSkinSet GetPreviewSkinSet()
	{
		return null;
	}

	[Token(Token = "0x600461A")]
	[Address(RVA = "0x21E14B0", Offset = "0x21DFAB0", VA = "0x1821E14B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600461B")]
	[Address(RVA = "0x21E1040", Offset = "0x21DF640", VA = "0x1821E1040")]
	private void ExpandLabel(GameObject setting)
	{
	}

	[Token(Token = "0x600461C")]
	[Address(RVA = "0x21E13A0", Offset = "0x21DF9A0", VA = "0x1821E13A0")]
	private void OnSkinsChanged()
	{
	}

	[Token(Token = "0x600461D")]
	[Address(RVA = "0x21D6E20", Offset = "0x21D5420", VA = "0x1821D6E20")]
	public CharacterEditorTitanSkinsPanel()
	{
	}
}
