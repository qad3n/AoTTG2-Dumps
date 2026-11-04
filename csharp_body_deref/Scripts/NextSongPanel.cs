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

[Token(Token = "0x2000023")]
internal class NextSongPanel : SimplePanel
{
	[Token(Token = "0x40000C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Text _nextSongPanelLabel;

	[Token(Token = "0x17000014")]
	protected override float Width
	{
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x1DA8B00", Offset = "0x1DA7100", VA = "0x181DA8B00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000015")]
	protected override float Height
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x1DA8AF0", Offset = "0x1DA70F0", VA = "0x181DA8AF0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000016")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000017")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000019")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001A")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x1DA8640", Offset = "0x1DA6C40", VA = "0x181DA8640", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x1DA8610", Offset = "0x1DA6C10", VA = "0x181DA8610")]
	public void ChangeSongText(string name)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public NextSongPanel()
	{
	}
}
