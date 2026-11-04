// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MapEditorSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MapEditorSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/MapEditorSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C0")]
internal class MapEditorSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting CurrentMap;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting CameraMoveSpeed;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting CameraSlowMoveSpeed;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting CameraFastMoveSpeed;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting CameraRotateSpeed;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting RenderDistance;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting SnapMove;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x70")]
	public FloatSetting SnapRotate;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x78")]
	public FloatSetting SnapScale;

	[Token(Token = "0x40004B3")]
	[FieldOffset(Offset = "0x80")]
	public FloatSetting PlacementDistance;

	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting PlaceOnFirstSurface;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting HierarchyPanelWidth;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting InspectorPanelWidth;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting HUDScale;

	[Token(Token = "0x170000A2")]
	protected override string FileName
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x1F21CA0", Offset = "0x1F202A0", VA = "0x181F21CA0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	protected override int CurrentVersion
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x1F214C0", Offset = "0x1F1FAC0", VA = "0x181F214C0", Slot = "21")]
	protected override bool Migrate(int fromVersion)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x1F21380", Offset = "0x1F1F980", VA = "0x181F21380", Slot = "12")]
	public override void Apply()
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x1F21540", Offset = "0x1F1FB40", VA = "0x181F21540")]
	public MapEditorSettings()
	{
	}
}
