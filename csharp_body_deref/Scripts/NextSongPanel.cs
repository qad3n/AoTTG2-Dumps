// ==================== AoTTG2 cross-reference ====================
// Type: NextSongPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/NextSongPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UI;
using UnityEngine.UI;

[Token(Token = "0x2000021")]
internal class NextSongPanel : SimplePanel
{
	[Token(Token = "0x40000B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Text _nextSongPanelLabel;

	[Token(Token = "0x17000012")]
	protected override float Width
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x3F63C80", Offset = "0x3F63C80", VA = "0x3F63C80", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000013")]
	protected override float Height
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x3F63C90", Offset = "0x3F63C90", VA = "0x3F63C90", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000014")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x3F63CA0", Offset = "0x3F63CA0", VA = "0x3F63CA0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x3F63CB0", Offset = "0x3F63CB0", VA = "0x3F63CB0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x3F63CC0", Offset = "0x3F63CC0", VA = "0x3F63CC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000017")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x3F63CD0", Offset = "0x3F63CD0", VA = "0x3F63CD0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x3F63CE0", Offset = "0x3F63CE0", VA = "0x3F63CE0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3F63CF0", Offset = "0x3F63CF0", VA = "0x3F63CF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3F64110", Offset = "0x3F64110", VA = "0x3F64110")]
	public void ChangeSongText(string name)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3F64140", Offset = "0x3F64140", VA = "0x3F64140")]
	public NextSongPanel()
	{
	}
}
