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

[Token(Token = "0x200089A")]
internal class MapEditorBrushPanel : HeadedPanel
{
	[Token(Token = "0x4002B3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002B3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002B40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private FloatSetting _radius;

	[Token(Token = "0x4002B41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private IntSetting _count;

	[Token(Token = "0x4002B42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private BoolSetting _randomize;

	[Token(Token = "0x4002B43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _mode;

	[Token(Token = "0x4002B44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private IntSetting _gridX;

	[Token(Token = "0x4002B45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private IntSetting _gridY;

	[Token(Token = "0x4002B46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private IntSetting _gridZ;

	[Token(Token = "0x4002B47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _spacingX;

	[Token(Token = "0x4002B48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _spacingY;

	[Token(Token = "0x4002B49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _spacingZ;

	[Token(Token = "0x4002B4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private BoolSetting _boundsSnap;

	[Token(Token = "0x4002B4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private StringSetting _curveAxis;

	[Token(Token = "0x4002B4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private FloatSetting _curveAmount;

	[Token(Token = "0x4002B4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private BoolSetting _flatPlane;

	[Token(Token = "0x4002B4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private BoolSetting _alignToSurface;

	[Token(Token = "0x4002B4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private List<FloatSetting> _weight;

	[Token(Token = "0x4002B50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private List<BoolSetting> _advanced;

	[Token(Token = "0x4002B51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private List<FloatSetting> _scaleMin;

	[Token(Token = "0x4002B52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private List<FloatSetting> _scaleMax;

	[Token(Token = "0x4002B53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private List<FloatSetting> _yawMin;

	[Token(Token = "0x4002B54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private List<FloatSetting> _yawMax;

	[Token(Token = "0x4002B55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private List<FloatSetting> _scaleXMin;

	[Token(Token = "0x4002B56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private List<FloatSetting> _scaleXMax;

	[Token(Token = "0x4002B57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private List<FloatSetting> _scaleYMin;

	[Token(Token = "0x4002B58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private List<FloatSetting> _scaleYMax;

	[Token(Token = "0x4002B59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private List<FloatSetting> _scaleZMin;

	[Token(Token = "0x4002B5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private List<FloatSetting> _scaleZMax;

	[Token(Token = "0x4002B5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private List<FloatSetting> _rotXMin;

	[Token(Token = "0x4002B5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private List<FloatSetting> _rotXMax;

	[Token(Token = "0x4002B5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private List<FloatSetting> _rotYMin;

	[Token(Token = "0x4002B5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private List<FloatSetting> _rotYMax;

	[Token(Token = "0x4002B5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private List<FloatSetting> _rotZMin;

	[Token(Token = "0x4002B60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<FloatSetting> _rotZMax;

	[Token(Token = "0x4002B61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<BoolSetting> _active;

	[Token(Token = "0x4002B62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private List<BoolSetting> _static;

	[Token(Token = "0x4002B63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private List<BoolSetting> _visible;

	[Token(Token = "0x4002B64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private List<StringSetting> _collideMode;

	[Token(Token = "0x4002B65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private List<StringSetting> _collideWith;

	[Token(Token = "0x4002B66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private List<StringSetting> _physicsMaterial;

	[Token(Token = "0x4002B67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private List<StringSetting> _shader;

	[Token(Token = "0x4002B68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private List<ColorSetting> _color;

	[Token(Token = "0x4002B69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private List<ColorSetting> _reflectColor;

	[Token(Token = "0x4002B6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private List<StringSetting> _texture;

	[Token(Token = "0x4002B6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private List<FloatSetting> _tilingX;

	[Token(Token = "0x4002B6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private List<FloatSetting> _tilingY;

	[Token(Token = "0x4002B6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private List<FloatSetting> _offsetX;

	[Token(Token = "0x4002B6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private List<FloatSetting> _offsetY;

	[Token(Token = "0x4002B6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private List<FloatSetting> _yOffset;

	[Token(Token = "0x17000E62")]
	protected override float Width
	{
		[Token(Token = "0x60051B6")]
		[Address(RVA = "0x5C62340", Offset = "0x5C61340", VA = "0x5C62340", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E63")]
	protected override float Height
	{
		[Token(Token = "0x60051B7")]
		[Address(RVA = "0x5C62350", Offset = "0x5C61350", VA = "0x5C62350", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E64")]
	protected override string Title
	{
		[Token(Token = "0x60051B8")]
		[Address(RVA = "0x5C62360", Offset = "0x5C61360", VA = "0x5C62360", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E65")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60051B9")]
		[Address(RVA = "0x5C62400", Offset = "0x5C61400", VA = "0x5C62400", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E66")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60051BA")]
		[Address(RVA = "0x5C62410", Offset = "0x5C61410", VA = "0x5C62410", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E67")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60051BB")]
		[Address(RVA = "0x5C62420", Offset = "0x5C61420", VA = "0x5C62420", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E68")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60051BC")]
		[Address(RVA = "0x5C62430", Offset = "0x5C61430", VA = "0x5C62430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E69")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60051BD")]
		[Address(RVA = "0x5C62440", Offset = "0x5C61440", VA = "0x5C62440", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E6A")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60051BE")]
		[Address(RVA = "0x5C62450", Offset = "0x5C61450", VA = "0x5C62450", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E6B")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60051BF")]
		[Address(RVA = "0x5C62460", Offset = "0x5C61460", VA = "0x5C62460", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60051C0")]
	[Address(RVA = "0x5C62490", Offset = "0x5C61490", VA = "0x5C62490", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60051C1")]
	[Address(RVA = "0x5C62630", Offset = "0x5C61630", VA = "0x5C62630")]
	public new void Show()
	{
	}

	[Token(Token = "0x60051C2")]
	[Address(RVA = "0x5C694D0", Offset = "0x5C684D0", VA = "0x5C694D0")]
	public void SyncValues()
	{
	}

	[Token(Token = "0x60051C3")]
	[Address(RVA = "0x5C62650", Offset = "0x5C61650", VA = "0x5C62650")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x60051C4")]
	[Address(RVA = "0x5C697E0", Offset = "0x5C687E0", VA = "0x5C697E0")]
	private static string Locale(string item)
	{
		return null;
	}

	[Token(Token = "0x60051C5")]
	[Address(RVA = "0x5C69870", Offset = "0x5C68870", VA = "0x5C69870")]
	private void OnRadiusChanged()
	{
	}

	[Token(Token = "0x60051C6")]
	[Address(RVA = "0x5C698D0", Offset = "0x5C688D0", VA = "0x5C698D0")]
	private void OnCountChanged()
	{
	}

	[Token(Token = "0x60051C7")]
	[Address(RVA = "0x5C69930", Offset = "0x5C68930", VA = "0x5C69930")]
	private void OnRandomizeChanged()
	{
	}

	[Token(Token = "0x60051C8")]
	[Address(RVA = "0x5C69990", Offset = "0x5C68990", VA = "0x5C69990")]
	private void OnModeChanged()
	{
	}

	[Token(Token = "0x60051C9")]
	[Address(RVA = "0x5C69A30", Offset = "0x5C68A30", VA = "0x5C69A30")]
	private void OnFlatPlaneChanged()
	{
	}

	[Token(Token = "0x60051CA")]
	[Address(RVA = "0x5C69A90", Offset = "0x5C68A90", VA = "0x5C69A90")]
	private void OnAlignToSurfaceChanged()
	{
	}

	[Token(Token = "0x60051CB")]
	[Address(RVA = "0x5C69AF0", Offset = "0x5C68AF0", VA = "0x5C69AF0")]
	private void OnGridChanged()
	{
	}

	[Token(Token = "0x60051CC")]
	[Address(RVA = "0x5C69C40", Offset = "0x5C68C40", VA = "0x5C69C40")]
	private void OnBoundsSnapChanged()
	{
	}

	[Token(Token = "0x60051CD")]
	[Address(RVA = "0x5C69CA0", Offset = "0x5C68CA0", VA = "0x5C69CA0")]
	private void OnCurveAxisChanged()
	{
	}

	[Token(Token = "0x60051CE")]
	[Address(RVA = "0x5C69DB0", Offset = "0x5C68DB0", VA = "0x5C69DB0")]
	private void OnCurveAmountChanged()
	{
	}

	[Token(Token = "0x60051CF")]
	[Address(RVA = "0x5C69E10", Offset = "0x5C68E10", VA = "0x5C69E10")]
	private void OnAddAsset()
	{
	}

	[Token(Token = "0x60051D0")]
	[Address(RVA = "0x5C69E60", Offset = "0x5C68E60", VA = "0x5C69E60")]
	private void OnReroll()
	{
	}

	[Token(Token = "0x60051D1")]
	[Address(RVA = "0x5C69E90", Offset = "0x5C68E90", VA = "0x5C69E90")]
	private void OnRemove(int index)
	{
	}

	[Token(Token = "0x60051D2")]
	[Address(RVA = "0x5C69ED0", Offset = "0x5C68ED0", VA = "0x5C69ED0")]
	private void OnEntryChanged(int index)
	{
	}

	[Token(Token = "0x60051D3")]
	[Address(RVA = "0x5C6A630", Offset = "0x5C69630", VA = "0x5C6A630")]
	private void OnShaderChanged(int index)
	{
	}

	[Token(Token = "0x60051D4")]
	[Address(RVA = "0x5C6A7A0", Offset = "0x5C697A0", VA = "0x5C6A7A0")]
	private void OnPickTexture(int index)
	{
	}

	[Token(Token = "0x60051D5")]
	[Address(RVA = "0x5C6A8B0", Offset = "0x5C698B0", VA = "0x5C6A8B0")]
	private void OnAdvancedChanged(int index)
	{
	}

	[Token(Token = "0x60051D6")]
	[Address(RVA = "0x5C6AA00", Offset = "0x5C69A00", VA = "0x5C6AA00")]
	public MapEditorBrushPanel()
	{
	}
}
