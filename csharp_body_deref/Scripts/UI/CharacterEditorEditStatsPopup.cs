// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorEditStatsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorEditStatsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditStatsPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000712")]
internal class CharacterEditorEditStatsPopup : BasePopup
{
	[Token(Token = "0x4002367")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected IntSetting Speed;

	[Token(Token = "0x4002368")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected IntSetting Acceleration;

	[Token(Token = "0x4002369")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected IntSetting Ammunition;

	[Token(Token = "0x400236A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected IntSetting Gas;

	[Token(Token = "0x400236B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x17000C77")]
	protected override string Title
	{
		[Token(Token = "0x6004568")]
		[Address(RVA = "0x21D91A0", Offset = "0x21D77A0", VA = "0x1821D91A0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C78")]
	protected override float Width
	{
		[Token(Token = "0x6004569")]
		[Address(RVA = "0x21D9240", Offset = "0x21D7840", VA = "0x1821D9240", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C79")]
	protected override float Height
	{
		[Token(Token = "0x600456A")]
		[Address(RVA = "0x21D9190", Offset = "0x21D7790", VA = "0x1821D9190", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C7A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600456B")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C7B")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600456C")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C7C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600456D")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600456E")]
	[Address(RVA = "0x21D8850", Offset = "0x21D6E50", VA = "0x1821D8850", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600456F")]
	[Address(RVA = "0x21D82C0", Offset = "0x21D68C0", VA = "0x1821D82C0")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6004570")]
	[Address(RVA = "0x21D8600", Offset = "0x21D6C00", VA = "0x1821D8600")]
	protected void OnStatChanged(IntSetting setting)
	{
	}

	[Token(Token = "0x6004571")]
	[Address(RVA = "0x21D9030", Offset = "0x21D7630", VA = "0x1821D9030")]
	public CharacterEditorEditStatsPopup()
	{
	}
}
