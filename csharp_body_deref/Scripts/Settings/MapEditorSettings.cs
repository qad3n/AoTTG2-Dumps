// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MapEditorSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/MapEditorSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/MapEditorSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F8")]
internal class MapEditorSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting CurrentMap;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting CameraMoveSpeed;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting CameraSlowMoveSpeed;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting CameraFastMoveSpeed;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting CameraRotateSpeed;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting RenderDistance;

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting SnapMove;

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x70")]
	public FloatSetting SnapRotate;

	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x78")]
	public FloatSetting SnapScale;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x80")]
	public FloatSetting PlacementDistance;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting PlaceOnFirstSurface;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting HierarchyPanelWidth;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting InspectorPanelWidth;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting HUDScale;

	[Token(Token = "0x170000BF")]
	protected override string FileName
	{
		[Token(Token = "0x6000547")]
		[Address(RVA = "0x5A50F60", Offset = "0x5A4FF60", VA = "0x5A50F60", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	protected override int CurrentVersion
	{
		[Token(Token = "0x6000548")]
		[Address(RVA = "0x5A50F90", Offset = "0x5A4FF90", VA = "0x5A50F90", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x5A50FA0", Offset = "0x5A4FFA0", VA = "0x5A50FA0", Slot = "21")]
	protected override bool Migrate(int fromVersion)
	{
		return default(bool);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x5A51030", Offset = "0x5A50030", VA = "0x5A51030", Slot = "12")]
	public override void Apply()
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x5A51140", Offset = "0x5A50140", VA = "0x5A51140")]
	public MapEditorSettings()
	{
	}
}
