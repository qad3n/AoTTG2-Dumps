using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200055A")]
internal class CharacterEditorEditStatsPopup : BasePopup
{
	[Token(Token = "0x4001A97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected IntSetting Speed;

	[Token(Token = "0x4001A98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected IntSetting Acceleration;

	[Token(Token = "0x4001A99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected IntSetting Ammunition;

	[Token(Token = "0x4001A9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected IntSetting Gas;

	[Token(Token = "0x4001A9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x17000AB5")]
	protected override string Title
	{
		[Token(Token = "0x6003828")]
		[Address(RVA = "0x3F51E40", Offset = "0x3F51E40", VA = "0x3F51E40", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AB6")]
	protected override float Width
	{
		[Token(Token = "0x6003829")]
		[Address(RVA = "0x3F51EE0", Offset = "0x3F51EE0", VA = "0x3F51EE0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB7")]
	protected override float Height
	{
		[Token(Token = "0x600382A")]
		[Address(RVA = "0x3F51EF0", Offset = "0x3F51EF0", VA = "0x3F51EF0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB8")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600382B")]
		[Address(RVA = "0x3F51F00", Offset = "0x3F51F00", VA = "0x3F51F00", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB9")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600382C")]
		[Address(RVA = "0x3F51F10", Offset = "0x3F51F10", VA = "0x3F51F10", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000ABA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600382D")]
		[Address(RVA = "0x3F51F20", Offset = "0x3F51F20", VA = "0x3F51F20", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600382E")]
	[Address(RVA = "0x3F51F30", Offset = "0x3F51F30", VA = "0x3F51F30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600382F")]
	[Address(RVA = "0x3F52860", Offset = "0x3F52860", VA = "0x3F52860")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6003830")]
	[Address(RVA = "0x3F52610", Offset = "0x3F52610", VA = "0x3F52610")]
	protected void OnStatChanged(IntSetting setting)
	{
	}

	[Token(Token = "0x6003831")]
	[Address(RVA = "0x3F52BA0", Offset = "0x3F52BA0", VA = "0x3F52BA0")]
	public CharacterEditorEditStatsPopup()
	{
	}
}
