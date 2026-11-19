// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorRulerPanel
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20008C8")]
internal class MapEditorRulerPanel : HeadedPanel
{
	[Token(Token = "0x4002C73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private readonly List<FloatSetting> _originX;

	[Token(Token = "0x4002C74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private readonly List<FloatSetting> _originY;

	[Token(Token = "0x4002C75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private readonly List<FloatSetting> _originZ;

	[Token(Token = "0x4002C76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private readonly List<FloatSetting> _length;

	[Token(Token = "0x4002C77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private readonly List<ColorSetting> _color;

	[Token(Token = "0x4002C78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002C79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MapEditorMenu _menu;

	[Token(Token = "0x17000EA1")]
	protected override float Width
	{
		[Token(Token = "0x60053BD")]
		[Address(RVA = "0x5C99510", Offset = "0x5C98510", VA = "0x5C99510", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA2")]
	protected override float Height
	{
		[Token(Token = "0x60053BE")]
		[Address(RVA = "0x5C99520", Offset = "0x5C98520", VA = "0x5C99520", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA3")]
	protected override string Title
	{
		[Token(Token = "0x60053BF")]
		[Address(RVA = "0x5C99530", Offset = "0x5C98530", VA = "0x5C99530", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000EA4")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60053C0")]
		[Address(RVA = "0x5C995D0", Offset = "0x5C985D0", VA = "0x5C995D0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA5")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60053C1")]
		[Address(RVA = "0x5C995E0", Offset = "0x5C985E0", VA = "0x5C995E0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA6")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60053C2")]
		[Address(RVA = "0x5C995F0", Offset = "0x5C985F0", VA = "0x5C995F0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EA7")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60053C3")]
		[Address(RVA = "0x5C99600", Offset = "0x5C98600", VA = "0x5C99600", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EA8")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60053C4")]
		[Address(RVA = "0x5C99610", Offset = "0x5C98610", VA = "0x5C99610", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EA9")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60053C5")]
		[Address(RVA = "0x5C99620", Offset = "0x5C98620", VA = "0x5C99620", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EAA")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60053C6")]
		[Address(RVA = "0x5C99630", Offset = "0x5C98630", VA = "0x5C99630", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60053C7")]
	[Address(RVA = "0x5C99660", Offset = "0x5C98660", VA = "0x5C99660", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60053C8")]
	[Address(RVA = "0x5C96CC0", Offset = "0x5C95CC0", VA = "0x5C96CC0")]
	public new void Show()
	{
	}

	[Token(Token = "0x60053C9")]
	[Address(RVA = "0x5C96E10", Offset = "0x5C95E10", VA = "0x5C96E10")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x60053CA")]
	[Address(RVA = "0x5C99810", Offset = "0x5C98810", VA = "0x5C99810")]
	private void OnOriginChanged(int index)
	{
	}

	[Token(Token = "0x60053CB")]
	[Address(RVA = "0x5C99900", Offset = "0x5C98900", VA = "0x5C99900")]
	private void ToggleCreateMeasurement()
	{
	}

	[Token(Token = "0x60053CC")]
	[Address(RVA = "0x5C99930", Offset = "0x5C98930", VA = "0x5C99930")]
	private void OnLengthChanged(int index)
	{
	}

	[Token(Token = "0x60053CD")]
	[Address(RVA = "0x5C999C0", Offset = "0x5C989C0", VA = "0x5C999C0")]
	private void OnColorChanged(int index)
	{
	}

	[Token(Token = "0x60053CE")]
	[Address(RVA = "0x5C99A50", Offset = "0x5C98A50", VA = "0x5C99A50")]
	private void OnDelete(int index)
	{
	}

	[Token(Token = "0x60053CF")]
	[Address(RVA = "0x5C99A90", Offset = "0x5C98A90", VA = "0x5C99A90")]
	public MapEditorRulerPanel()
	{
	}
}
