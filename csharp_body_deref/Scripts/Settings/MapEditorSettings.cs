// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MapEditorSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/MapEditorSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/MapEditorSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A2")]
internal class MapEditorSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting CurrentMap;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x28")]
	public FloatSetting CameraMoveSpeed;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x30")]
	public FloatSetting CameraSlowMoveSpeed;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting CameraFastMoveSpeed;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting CameraRotateSpeed;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting RenderDistance;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting SnapMove;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting SnapRotate;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting SnapScale;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting PlacementDistance;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting PlaceOnFirstSurface;

	[Token(Token = "0x17000097")]
	protected override string FileName
	{
		[Token(Token = "0x600034A")]
		[Address(RVA = "0x40F6E60", Offset = "0x40F6E60", VA = "0x40F6E60", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x40F6E90", Offset = "0x40F6E90", VA = "0x40F6E90", Slot = "11")]
	public override void Apply()
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x40F6F10", Offset = "0x40F6F10", VA = "0x40F6F10")]
	public MapEditorSettings()
	{
	}
}
