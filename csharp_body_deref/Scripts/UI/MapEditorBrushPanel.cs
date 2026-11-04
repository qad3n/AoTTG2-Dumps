// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorBrushPanel
// Update status: CHANGED in this game update
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

[Token(Token = "0x200081C")]
internal class MapEditorBrushPanel : HeadedPanel
{
	[Token(Token = "0x4002885")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002886")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002887")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private FloatSetting _radius;

	[Token(Token = "0x4002888")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private IntSetting _count;

	[Token(Token = "0x4002889")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private BoolSetting _randomize;

	[Token(Token = "0x400288A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _mode;

	[Token(Token = "0x400288B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private IntSetting _gridX;

	[Token(Token = "0x400288C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private IntSetting _gridY;

	[Token(Token = "0x400288D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private IntSetting _gridZ;

	[Token(Token = "0x400288E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _spacingX;

	[Token(Token = "0x400288F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _spacingY;

	[Token(Token = "0x4002890")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _spacingZ;

	[Token(Token = "0x4002891")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private BoolSetting _boundsSnap;

	[Token(Token = "0x4002892")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private StringSetting _curveAxis;

	[Token(Token = "0x4002893")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private FloatSetting _curveAmount;

	[Token(Token = "0x4002894")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private BoolSetting _flatPlane;

	[Token(Token = "0x4002895")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private BoolSetting _alignToSurface;

	[Token(Token = "0x4002896")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private List<FloatSetting> _weight;

	[Token(Token = "0x4002897")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private List<BoolSetting> _advanced;

	[Token(Token = "0x4002898")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private List<FloatSetting> _scaleMin;

	[Token(Token = "0x4002899")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private List<FloatSetting> _scaleMax;

	[Token(Token = "0x400289A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private List<FloatSetting> _yawMin;

	[Token(Token = "0x400289B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private List<FloatSetting> _yawMax;

	[Token(Token = "0x400289C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private List<FloatSetting> _scaleXMin;

	[Token(Token = "0x400289D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private List<FloatSetting> _scaleXMax;

	[Token(Token = "0x400289E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private List<FloatSetting> _scaleYMin;

	[Token(Token = "0x400289F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private List<FloatSetting> _scaleYMax;

	[Token(Token = "0x40028A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private List<FloatSetting> _scaleZMin;

	[Token(Token = "0x40028A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private List<FloatSetting> _scaleZMax;

	[Token(Token = "0x40028A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private List<FloatSetting> _rotXMin;

	[Token(Token = "0x40028A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private List<FloatSetting> _rotXMax;

	[Token(Token = "0x40028A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private List<FloatSetting> _rotYMin;

	[Token(Token = "0x40028A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private List<FloatSetting> _rotYMax;

	[Token(Token = "0x40028A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private List<FloatSetting> _rotZMin;

	[Token(Token = "0x40028A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<FloatSetting> _rotZMax;

	[Token(Token = "0x40028A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<BoolSetting> _active;

	[Token(Token = "0x40028A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private List<BoolSetting> _static;

	[Token(Token = "0x40028AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private List<BoolSetting> _visible;

	[Token(Token = "0x40028AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private List<StringSetting> _collideMode;

	[Token(Token = "0x40028AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private List<StringSetting> _collideWith;

	[Token(Token = "0x40028AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private List<StringSetting> _physicsMaterial;

	[Token(Token = "0x40028AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private List<StringSetting> _shader;

	[Token(Token = "0x40028AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private List<ColorSetting> _color;

	[Token(Token = "0x40028B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private List<ColorSetting> _reflectColor;

	[Token(Token = "0x40028B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private List<StringSetting> _texture;

	[Token(Token = "0x40028B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private List<FloatSetting> _tilingX;

	[Token(Token = "0x40028B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private List<FloatSetting> _tilingY;

	[Token(Token = "0x40028B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private List<FloatSetting> _offsetX;

	[Token(Token = "0x40028B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private List<FloatSetting> _offsetY;

	[Token(Token = "0x40028B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private List<FloatSetting> _yOffset;

	[Token(Token = "0x17000E61")]
	protected override float Width
	{
		[Token(Token = "0x6004E1B")]
		[Address(RVA = "0x1DA8B00", Offset = "0x1DA7100", VA = "0x181DA8B00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E62")]
	protected override float Height
	{
		[Token(Token = "0x6004E1C")]
		[Address(RVA = "0x229A1F0", Offset = "0x22987F0", VA = "0x18229A1F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E63")]
	protected override string Title
	{
		[Token(Token = "0x6004E1D")]
		[Address(RVA = "0x22A8670", Offset = "0x22A6C70", VA = "0x1822A8670", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E64")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004E1E")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E65")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004E1F")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E66")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004E20")]
		[Address(RVA = "0x2182A90", Offset = "0x2181090", VA = "0x182182A90", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E67")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E21")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E68")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E22")]
		[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E69")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004E23")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E6A")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004E24")]
		[Address(RVA = "0x22A8640", Offset = "0x22A6C40", VA = "0x1822A8640", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004E25")]
	[Address(RVA = "0x22A75A0", Offset = "0x22A5BA0", VA = "0x1822A75A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E26")]
	[Address(RVA = "0x22A7780", Offset = "0x22A5D80", VA = "0x1822A7780")]
	public new void Show()
	{
	}

	[Token(Token = "0x6004E27")]
	[Address(RVA = "0x22A77A0", Offset = "0x22A5DA0", VA = "0x1822A77A0")]
	public void SyncValues()
	{
	}

	[Token(Token = "0x6004E28")]
	[Address(RVA = "0x22A2990", Offset = "0x22A0F90", VA = "0x1822A2990")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x6004E29")]
	[Address(RVA = "0x22A26E0", Offset = "0x22A0CE0", VA = "0x1822A26E0")]
	private void OnRadiusChanged()
	{
	}

	[Token(Token = "0x6004E2A")]
	[Address(RVA = "0x22A1A80", Offset = "0x22A0080", VA = "0x1822A1A80")]
	private void OnCountChanged()
	{
	}

	[Token(Token = "0x6004E2B")]
	[Address(RVA = "0x22A2750", Offset = "0x22A0D50", VA = "0x1822A2750")]
	private void OnRandomizeChanged()
	{
	}

	[Token(Token = "0x6004E2C")]
	[Address(RVA = "0x22A2530", Offset = "0x22A0B30", VA = "0x1822A2530")]
	private void OnModeChanged()
	{
	}

	[Token(Token = "0x6004E2D")]
	[Address(RVA = "0x22A23C0", Offset = "0x22A09C0", VA = "0x1822A23C0")]
	private void OnFlatPlaneChanged()
	{
	}

	[Token(Token = "0x6004E2E")]
	[Address(RVA = "0x22A19A0", Offset = "0x229FFA0", VA = "0x1822A19A0")]
	private void OnAlignToSurfaceChanged()
	{
	}

	[Token(Token = "0x6004E2F")]
	[Address(RVA = "0x22A2440", Offset = "0x22A0A40", VA = "0x1822A2440")]
	private void OnGridChanged()
	{
	}

	[Token(Token = "0x6004E30")]
	[Address(RVA = "0x22A1A00", Offset = "0x22A0000", VA = "0x1822A1A00")]
	private void OnBoundsSnapChanged()
	{
	}

	[Token(Token = "0x6004E31")]
	[Address(RVA = "0x22A1B60", Offset = "0x22A0160", VA = "0x1822A1B60")]
	private void OnCurveAxisChanged()
	{
	}

	[Token(Token = "0x6004E32")]
	[Address(RVA = "0x22A1AE0", Offset = "0x22A00E0", VA = "0x1822A1AE0")]
	private void OnCurveAmountChanged()
	{
	}

	[Token(Token = "0x6004E33")]
	[Address(RVA = "0x22A17F0", Offset = "0x229FDF0", VA = "0x1822A17F0")]
	private void OnAddAsset()
	{
	}

	[Token(Token = "0x6004E34")]
	[Address(RVA = "0x22A27F0", Offset = "0x22A0DF0", VA = "0x1822A27F0")]
	private void OnReroll()
	{
	}

	[Token(Token = "0x6004E35")]
	[Address(RVA = "0x22A27B0", Offset = "0x22A0DB0", VA = "0x1822A27B0")]
	private void OnRemove(int index)
	{
	}

	[Token(Token = "0x6004E36")]
	[Address(RVA = "0x22A1C70", Offset = "0x22A0270", VA = "0x1822A1C70")]
	private void OnEntryChanged(int index)
	{
	}

	[Token(Token = "0x6004E37")]
	[Address(RVA = "0x22A2820", Offset = "0x22A0E20", VA = "0x1822A2820")]
	private void OnShaderChanged(int index)
	{
	}

	[Token(Token = "0x6004E38")]
	[Address(RVA = "0x22A25D0", Offset = "0x22A0BD0", VA = "0x1822A25D0")]
	private void OnPickTexture(int index)
	{
	}

	[Token(Token = "0x6004E39")]
	[Address(RVA = "0x22A1850", Offset = "0x229FE50", VA = "0x1822A1850")]
	private void OnAdvancedChanged(int index)
	{
	}

	[Token(Token = "0x6004E3A")]
	[Address(RVA = "0x22A7AE0", Offset = "0x22A60E0", VA = "0x1822A7AE0")]
	public MapEditorBrushPanel()
	{
	}
}
