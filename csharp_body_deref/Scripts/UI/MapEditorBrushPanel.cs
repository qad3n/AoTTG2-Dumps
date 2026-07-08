using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000675")]
internal class MapEditorBrushPanel : HeadedPanel
{
	[Token(Token = "0x4001F5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4001F5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4001F5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private FloatSetting _radius;

	[Token(Token = "0x4001F5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private IntSetting _count;

	[Token(Token = "0x4001F60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private BoolSetting _randomize;

	[Token(Token = "0x4001F61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _mode;

	[Token(Token = "0x4001F62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private IntSetting _gridX;

	[Token(Token = "0x4001F63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private IntSetting _gridY;

	[Token(Token = "0x4001F64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private IntSetting _gridZ;

	[Token(Token = "0x4001F65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _spacingX;

	[Token(Token = "0x4001F66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _spacingY;

	[Token(Token = "0x4001F67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _spacingZ;

	[Token(Token = "0x4001F68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private StringSetting _curveAxis;

	[Token(Token = "0x4001F69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private FloatSetting _curveAmount;

	[Token(Token = "0x4001F6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private List<FloatSetting> _weight;

	[Token(Token = "0x4001F6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private List<BoolSetting> _advanced;

	[Token(Token = "0x4001F6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private List<FloatSetting> _scaleMin;

	[Token(Token = "0x4001F6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private List<FloatSetting> _scaleMax;

	[Token(Token = "0x4001F6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private List<FloatSetting> _yawMin;

	[Token(Token = "0x4001F6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private List<FloatSetting> _yawMax;

	[Token(Token = "0x4001F70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private List<FloatSetting> _scaleXMin;

	[Token(Token = "0x4001F71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private List<FloatSetting> _scaleXMax;

	[Token(Token = "0x4001F72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private List<FloatSetting> _scaleYMin;

	[Token(Token = "0x4001F73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private List<FloatSetting> _scaleYMax;

	[Token(Token = "0x4001F74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private List<FloatSetting> _scaleZMin;

	[Token(Token = "0x4001F75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private List<FloatSetting> _scaleZMax;

	[Token(Token = "0x4001F76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private List<FloatSetting> _rotXMin;

	[Token(Token = "0x4001F77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private List<FloatSetting> _rotXMax;

	[Token(Token = "0x4001F78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private List<FloatSetting> _rotYMin;

	[Token(Token = "0x4001F79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private List<FloatSetting> _rotYMax;

	[Token(Token = "0x4001F7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private List<FloatSetting> _rotZMin;

	[Token(Token = "0x4001F7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private List<FloatSetting> _rotZMax;

	[Token(Token = "0x4001F7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private List<BoolSetting> _active;

	[Token(Token = "0x4001F7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private List<BoolSetting> _static;

	[Token(Token = "0x4001F7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<BoolSetting> _visible;

	[Token(Token = "0x4001F7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<StringSetting> _collideMode;

	[Token(Token = "0x4001F80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private List<StringSetting> _collideWith;

	[Token(Token = "0x4001F81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private List<StringSetting> _physicsMaterial;

	[Token(Token = "0x4001F82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private List<StringSetting> _shader;

	[Token(Token = "0x4001F83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private List<ColorSetting> _color;

	[Token(Token = "0x4001F84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private List<ColorSetting> _reflectColor;

	[Token(Token = "0x4001F85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private List<StringSetting> _texture;

	[Token(Token = "0x4001F86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private List<FloatSetting> _tilingX;

	[Token(Token = "0x4001F87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private List<FloatSetting> _tilingY;

	[Token(Token = "0x4001F88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private List<FloatSetting> _offsetX;

	[Token(Token = "0x4001F89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private List<FloatSetting> _offsetY;

	[Token(Token = "0x4001F8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private List<FloatSetting> _yOffset;

	[Token(Token = "0x17000CA1")]
	protected override float Width
	{
		[Token(Token = "0x60040C9")]
		[Address(RVA = "0x4007120", Offset = "0x4007120", VA = "0x4007120", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA2")]
	protected override float Height
	{
		[Token(Token = "0x60040CA")]
		[Address(RVA = "0x4007130", Offset = "0x4007130", VA = "0x4007130", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA3")]
	protected override string Title
	{
		[Token(Token = "0x60040CB")]
		[Address(RVA = "0x4007140", Offset = "0x4007140", VA = "0x4007140", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CA4")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60040CC")]
		[Address(RVA = "0x4007170", Offset = "0x4007170", VA = "0x4007170", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA5")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60040CD")]
		[Address(RVA = "0x4007180", Offset = "0x4007180", VA = "0x4007180", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA6")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60040CE")]
		[Address(RVA = "0x4007190", Offset = "0x4007190", VA = "0x4007190", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA7")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60040CF")]
		[Address(RVA = "0x40071A0", Offset = "0x40071A0", VA = "0x40071A0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CA8")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60040D0")]
		[Address(RVA = "0x40071B0", Offset = "0x40071B0", VA = "0x40071B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CA9")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60040D1")]
		[Address(RVA = "0x40071C0", Offset = "0x40071C0", VA = "0x40071C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CAA")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60040D2")]
		[Address(RVA = "0x40071D0", Offset = "0x40071D0", VA = "0x40071D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60040D3")]
	[Address(RVA = "0x4007200", Offset = "0x4007200", VA = "0x4007200", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60040D4")]
	[Address(RVA = "0x40073A0", Offset = "0x40073A0", VA = "0x40073A0")]
	public new void Show()
	{
	}

	[Token(Token = "0x60040D5")]
	[Address(RVA = "0x400C700", Offset = "0x400C700", VA = "0x400C700")]
	public void SyncValues()
	{
	}

	[Token(Token = "0x60040D6")]
	[Address(RVA = "0x40073C0", Offset = "0x40073C0", VA = "0x40073C0")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x60040D7")]
	[Address(RVA = "0x400C9C0", Offset = "0x400C9C0", VA = "0x400C9C0")]
	private void OnRadiusChanged()
	{
	}

	[Token(Token = "0x60040D8")]
	[Address(RVA = "0x400CA20", Offset = "0x400CA20", VA = "0x400CA20")]
	private void OnCountChanged()
	{
	}

	[Token(Token = "0x60040D9")]
	[Address(RVA = "0x400CA80", Offset = "0x400CA80", VA = "0x400CA80")]
	private void OnRandomizeChanged()
	{
	}

	[Token(Token = "0x60040DA")]
	[Address(RVA = "0x400CAE0", Offset = "0x400CAE0", VA = "0x400CAE0")]
	private void OnModeChanged()
	{
	}

	[Token(Token = "0x60040DB")]
	[Address(RVA = "0x400CB80", Offset = "0x400CB80", VA = "0x400CB80")]
	private void OnGridChanged()
	{
	}

	[Token(Token = "0x60040DC")]
	[Address(RVA = "0x400CC70", Offset = "0x400CC70", VA = "0x400CC70")]
	private void OnCurveAxisChanged()
	{
	}

	[Token(Token = "0x60040DD")]
	[Address(RVA = "0x400CD80", Offset = "0x400CD80", VA = "0x400CD80")]
	private void OnCurveAmountChanged()
	{
	}

	[Token(Token = "0x60040DE")]
	[Address(RVA = "0x400CDE0", Offset = "0x400CDE0", VA = "0x400CDE0")]
	private void OnAddAsset()
	{
	}

	[Token(Token = "0x60040DF")]
	[Address(RVA = "0x400CE30", Offset = "0x400CE30", VA = "0x400CE30")]
	private void OnReroll()
	{
	}

	[Token(Token = "0x60040E0")]
	[Address(RVA = "0x400CE60", Offset = "0x400CE60", VA = "0x400CE60")]
	private void OnRemove(int index)
	{
	}

	[Token(Token = "0x60040E1")]
	[Address(RVA = "0x400CEA0", Offset = "0x400CEA0", VA = "0x400CEA0")]
	private void OnEntryChanged(int index)
	{
	}

	[Token(Token = "0x60040E2")]
	[Address(RVA = "0x400D5B0", Offset = "0x400D5B0", VA = "0x400D5B0")]
	private void OnShaderChanged(int index)
	{
	}

	[Token(Token = "0x60040E3")]
	[Address(RVA = "0x400D720", Offset = "0x400D720", VA = "0x400D720")]
	private void OnPickTexture(int index)
	{
	}

	[Token(Token = "0x60040E4")]
	[Address(RVA = "0x400D830", Offset = "0x400D830", VA = "0x400D830")]
	private void OnAdvancedChanged(int index)
	{
	}

	[Token(Token = "0x60040E5")]
	[Address(RVA = "0x400D970", Offset = "0x400D970", VA = "0x400D970")]
	public MapEditorBrushPanel()
	{
	}
}
