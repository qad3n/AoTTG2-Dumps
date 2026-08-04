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

[Token(Token = "0x200059F")]
internal class CharacterEditorEditStatsPopup : BasePopup
{
	[Token(Token = "0x4001BAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected IntSetting Speed;

	[Token(Token = "0x4001BAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected IntSetting Acceleration;

	[Token(Token = "0x4001BAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected IntSetting Ammunition;

	[Token(Token = "0x4001BAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected IntSetting Gas;

	[Token(Token = "0x4001BAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x17000B1F")]
	protected override string Title
	{
		[Token(Token = "0x6003A37")]
		[Address(RVA = "0x425FCC0", Offset = "0x425FCC0", VA = "0x425FCC0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B20")]
	protected override float Width
	{
		[Token(Token = "0x6003A38")]
		[Address(RVA = "0x425FD60", Offset = "0x425FD60", VA = "0x425FD60", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B21")]
	protected override float Height
	{
		[Token(Token = "0x6003A39")]
		[Address(RVA = "0x425FD70", Offset = "0x425FD70", VA = "0x425FD70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B22")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003A3A")]
		[Address(RVA = "0x425FD80", Offset = "0x425FD80", VA = "0x425FD80", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B23")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003A3B")]
		[Address(RVA = "0x425FD90", Offset = "0x425FD90", VA = "0x425FD90", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B24")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003A3C")]
		[Address(RVA = "0x425FDA0", Offset = "0x425FDA0", VA = "0x425FDA0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003A3D")]
	[Address(RVA = "0x425FDB0", Offset = "0x425FDB0", VA = "0x425FDB0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003A3E")]
	[Address(RVA = "0x42606E0", Offset = "0x42606E0", VA = "0x42606E0")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6003A3F")]
	[Address(RVA = "0x4260490", Offset = "0x4260490", VA = "0x4260490")]
	protected void OnStatChanged(IntSetting setting)
	{
	}

	[Token(Token = "0x6003A40")]
	[Address(RVA = "0x4260A20", Offset = "0x4260A20", VA = "0x4260A20")]
	public CharacterEditorEditStatsPopup()
	{
	}
}
