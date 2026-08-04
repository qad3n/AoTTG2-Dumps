// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorBrushPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorBrushPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20006C1")]
internal class MapEditorBrushPanel : HeadedPanel
{
	[Token(Token = "0x40020B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x40020B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private MapEditorMenu _menu;

	[Token(Token = "0x40020B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private FloatSetting _radius;

	[Token(Token = "0x40020B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private IntSetting _count;

	[Token(Token = "0x40020B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private BoolSetting _randomize;

	[Token(Token = "0x40020B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _mode;

	[Token(Token = "0x40020B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private IntSetting _gridX;

	[Token(Token = "0x40020B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private IntSetting _gridY;

	[Token(Token = "0x40020B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private IntSetting _gridZ;

	[Token(Token = "0x40020BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _spacingX;

	[Token(Token = "0x40020BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _spacingY;

	[Token(Token = "0x40020BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _spacingZ;

	[Token(Token = "0x40020BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private StringSetting _curveAxis;

	[Token(Token = "0x40020BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private FloatSetting _curveAmount;

	[Token(Token = "0x40020BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private List<FloatSetting> _weight;

	[Token(Token = "0x40020C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private List<BoolSetting> _advanced;

	[Token(Token = "0x40020C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private List<FloatSetting> _scaleMin;

	[Token(Token = "0x40020C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private List<FloatSetting> _scaleMax;

	[Token(Token = "0x40020C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private List<FloatSetting> _yawMin;

	[Token(Token = "0x40020C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private List<FloatSetting> _yawMax;

	[Token(Token = "0x40020C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private List<FloatSetting> _scaleXMin;

	[Token(Token = "0x40020C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private List<FloatSetting> _scaleXMax;

	[Token(Token = "0x40020C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private List<FloatSetting> _scaleYMin;

	[Token(Token = "0x40020C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private List<FloatSetting> _scaleYMax;

	[Token(Token = "0x40020C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private List<FloatSetting> _scaleZMin;

	[Token(Token = "0x40020CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private List<FloatSetting> _scaleZMax;

	[Token(Token = "0x40020CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private List<FloatSetting> _rotXMin;

	[Token(Token = "0x40020CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private List<FloatSetting> _rotXMax;

	[Token(Token = "0x40020CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private List<FloatSetting> _rotYMin;

	[Token(Token = "0x40020CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private List<FloatSetting> _rotYMax;

	[Token(Token = "0x40020CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private List<FloatSetting> _rotZMin;

	[Token(Token = "0x40020D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private List<FloatSetting> _rotZMax;

	[Token(Token = "0x40020D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private List<BoolSetting> _active;

	[Token(Token = "0x40020D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private List<BoolSetting> _static;

	[Token(Token = "0x40020D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<BoolSetting> _visible;

	[Token(Token = "0x40020D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<StringSetting> _collideMode;

	[Token(Token = "0x40020D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private List<StringSetting> _collideWith;

	[Token(Token = "0x40020D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private List<StringSetting> _physicsMaterial;

	[Token(Token = "0x40020D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private List<StringSetting> _shader;

	[Token(Token = "0x40020D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private List<ColorSetting> _color;

	[Token(Token = "0x40020D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private List<ColorSetting> _reflectColor;

	[Token(Token = "0x40020DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private List<StringSetting> _texture;

	[Token(Token = "0x40020DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private List<FloatSetting> _tilingX;

	[Token(Token = "0x40020DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private List<FloatSetting> _tilingY;

	[Token(Token = "0x40020DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private List<FloatSetting> _offsetX;

	[Token(Token = "0x40020DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private List<FloatSetting> _offsetY;

	[Token(Token = "0x40020DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private List<FloatSetting> _yOffset;

	[Token(Token = "0x17000D1B")]
	protected override float Width
	{
		[Token(Token = "0x6004327")]
		[Address(RVA = "0x431B5F0", Offset = "0x431B5F0", VA = "0x431B5F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1C")]
	protected override float Height
	{
		[Token(Token = "0x6004328")]
		[Address(RVA = "0x431B600", Offset = "0x431B600", VA = "0x431B600", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1D")]
	protected override string Title
	{
		[Token(Token = "0x6004329")]
		[Address(RVA = "0x431B610", Offset = "0x431B610", VA = "0x431B610", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D1E")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600432A")]
		[Address(RVA = "0x431B640", Offset = "0x431B640", VA = "0x431B640", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1F")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600432B")]
		[Address(RVA = "0x431B650", Offset = "0x431B650", VA = "0x431B650", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D20")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600432C")]
		[Address(RVA = "0x431B660", Offset = "0x431B660", VA = "0x431B660", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D21")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600432D")]
		[Address(RVA = "0x431B670", Offset = "0x431B670", VA = "0x431B670", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D22")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600432E")]
		[Address(RVA = "0x431B680", Offset = "0x431B680", VA = "0x431B680", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D23")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600432F")]
		[Address(RVA = "0x431B690", Offset = "0x431B690", VA = "0x431B690", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D24")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004330")]
		[Address(RVA = "0x431B6A0", Offset = "0x431B6A0", VA = "0x431B6A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004331")]
	[Address(RVA = "0x431B6D0", Offset = "0x431B6D0", VA = "0x431B6D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004332")]
	[Address(RVA = "0x431B870", Offset = "0x431B870", VA = "0x431B870")]
	public new void Show()
	{
	}

	[Token(Token = "0x6004333")]
	[Address(RVA = "0x4320BD0", Offset = "0x4320BD0", VA = "0x4320BD0")]
	public void SyncValues()
	{
	}

	[Token(Token = "0x6004334")]
	[Address(RVA = "0x431B890", Offset = "0x431B890", VA = "0x431B890")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x6004335")]
	[Address(RVA = "0x4320E90", Offset = "0x4320E90", VA = "0x4320E90")]
	private void OnRadiusChanged()
	{
	}

	[Token(Token = "0x6004336")]
	[Address(RVA = "0x4320EF0", Offset = "0x4320EF0", VA = "0x4320EF0")]
	private void OnCountChanged()
	{
	}

	[Token(Token = "0x6004337")]
	[Address(RVA = "0x4320F50", Offset = "0x4320F50", VA = "0x4320F50")]
	private void OnRandomizeChanged()
	{
	}

	[Token(Token = "0x6004338")]
	[Address(RVA = "0x4320FB0", Offset = "0x4320FB0", VA = "0x4320FB0")]
	private void OnModeChanged()
	{
	}

	[Token(Token = "0x6004339")]
	[Address(RVA = "0x4321050", Offset = "0x4321050", VA = "0x4321050")]
	private void OnGridChanged()
	{
	}

	[Token(Token = "0x600433A")]
	[Address(RVA = "0x4321140", Offset = "0x4321140", VA = "0x4321140")]
	private void OnCurveAxisChanged()
	{
	}

	[Token(Token = "0x600433B")]
	[Address(RVA = "0x4321250", Offset = "0x4321250", VA = "0x4321250")]
	private void OnCurveAmountChanged()
	{
	}

	[Token(Token = "0x600433C")]
	[Address(RVA = "0x43212B0", Offset = "0x43212B0", VA = "0x43212B0")]
	private void OnAddAsset()
	{
	}

	[Token(Token = "0x600433D")]
	[Address(RVA = "0x4321300", Offset = "0x4321300", VA = "0x4321300")]
	private void OnReroll()
	{
	}

	[Token(Token = "0x600433E")]
	[Address(RVA = "0x4321330", Offset = "0x4321330", VA = "0x4321330")]
	private void OnRemove(int index)
	{
	}

	[Token(Token = "0x600433F")]
	[Address(RVA = "0x4321370", Offset = "0x4321370", VA = "0x4321370")]
	private void OnEntryChanged(int index)
	{
	}

	[Token(Token = "0x6004340")]
	[Address(RVA = "0x4321A80", Offset = "0x4321A80", VA = "0x4321A80")]
	private void OnShaderChanged(int index)
	{
	}

	[Token(Token = "0x6004341")]
	[Address(RVA = "0x4321BF0", Offset = "0x4321BF0", VA = "0x4321BF0")]
	private void OnPickTexture(int index)
	{
	}

	[Token(Token = "0x6004342")]
	[Address(RVA = "0x4321D00", Offset = "0x4321D00", VA = "0x4321D00")]
	private void OnAdvancedChanged(int index)
	{
	}

	[Token(Token = "0x6004343")]
	[Address(RVA = "0x4321E40", Offset = "0x4321E40", VA = "0x4321E40")]
	public MapEditorBrushPanel()
	{
	}
}
