using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A1")]
internal class MapEditorSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting CurrentMap;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x28")]
	public FloatSetting CameraMoveSpeed;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x30")]
	public FloatSetting CameraSlowMoveSpeed;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting CameraFastMoveSpeed;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting CameraRotateSpeed;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting RenderDistance;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting SnapMove;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting SnapRotate;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting SnapScale;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting PlacementDistance;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting PlaceOnFirstSurface;

	[Token(Token = "0x17000095")]
	protected override string FileName
	{
		[Token(Token = "0x6000344")]
		[Address(RVA = "0x3E07F30", Offset = "0x3E07F30", VA = "0x3E07F30", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x3E07F60", Offset = "0x3E07F60", VA = "0x3E07F60", Slot = "11")]
	public override void Apply()
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x3E07FE0", Offset = "0x3E07FE0", VA = "0x3E07FE0")]
	public MapEditorSettings()
	{
	}
}
