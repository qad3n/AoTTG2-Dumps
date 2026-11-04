// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorRulerPanel
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorRulerPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200084A")]
internal class MapEditorRulerPanel : HeadedPanel
{
	[Token(Token = "0x40029BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private readonly List<FloatSetting> _originX;

	[Token(Token = "0x40029BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private readonly List<FloatSetting> _originY;

	[Token(Token = "0x40029BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private readonly List<FloatSetting> _originZ;

	[Token(Token = "0x40029BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private readonly List<FloatSetting> _length;

	[Token(Token = "0x40029BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private readonly List<ColorSetting> _color;

	[Token(Token = "0x40029BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x40029C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MapEditorMenu _menu;

	[Token(Token = "0x17000EA0")]
	protected override float Width
	{
		[Token(Token = "0x600501D")]
		[Address(RVA = "0x1DA8B00", Offset = "0x1DA7100", VA = "0x181DA8B00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA1")]
	protected override float Height
	{
		[Token(Token = "0x600501E")]
		[Address(RVA = "0x229A1F0", Offset = "0x22987F0", VA = "0x18229A1F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA2")]
	protected override string Title
	{
		[Token(Token = "0x600501F")]
		[Address(RVA = "0x22CF560", Offset = "0x22CDB60", VA = "0x1822CF560", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000EA3")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6005020")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA4")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6005021")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005022")]
		[Address(RVA = "0x2182A90", Offset = "0x2181090", VA = "0x182182A90", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA6")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6005023")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EA7")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005024")]
		[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EA8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005025")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EA9")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6005026")]
		[Address(RVA = "0x22CF530", Offset = "0x22CDB30", VA = "0x1822CF530", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6005027")]
	[Address(RVA = "0x22CF160", Offset = "0x22CD760", VA = "0x1822CF160", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005028")]
	[Address(RVA = "0x22CF340", Offset = "0x22CD940", VA = "0x1822CF340")]
	public new void Show()
	{
	}

	[Token(Token = "0x6005029")]
	[Address(RVA = "0x22CDF90", Offset = "0x22CC590", VA = "0x1822CDF90")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x600502A")]
	[Address(RVA = "0x22CDE70", Offset = "0x22CC470", VA = "0x1822CDE70")]
	private void OnOriginChanged(int index)
	{
	}

	[Token(Token = "0x600502B")]
	[Address(RVA = "0x22CF360", Offset = "0x22CD960", VA = "0x1822CF360")]
	private void ToggleCreateMeasurement()
	{
	}

	[Token(Token = "0x600502C")]
	[Address(RVA = "0x22CDDE0", Offset = "0x22CC3E0", VA = "0x1822CDDE0")]
	private void OnLengthChanged(int index)
	{
	}

	[Token(Token = "0x600502D")]
	[Address(RVA = "0x22CDD10", Offset = "0x22CC310", VA = "0x1822CDD10")]
	private void OnColorChanged(int index)
	{
	}

	[Token(Token = "0x600502E")]
	[Address(RVA = "0x22CDDA0", Offset = "0x22CC3A0", VA = "0x1822CDDA0")]
	private void OnDelete(int index)
	{
	}

	[Token(Token = "0x600502F")]
	[Address(RVA = "0x22CF3C0", Offset = "0x22CD9C0", VA = "0x1822CF3C0")]
	public MapEditorRulerPanel()
	{
	}
}
