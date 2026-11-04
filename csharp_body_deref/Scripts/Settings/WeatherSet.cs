// ==================== AoTTG2 cross-reference ====================
// Type: Settings.WeatherSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/WeatherSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B5")]
internal class WeatherSet : BaseSetSetting
{
	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Skybox;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x50")]
	public ColorSetting SkyboxColor;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x58")]
	public ColorSetting Daylight;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting DaylightIntensity;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x68")]
	public Vector3Setting DaylightDirection;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x70")]
	public ColorSetting AmbientLight;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x78")]
	public ColorSetting Flashlight;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x80")]
	public FloatSetting FogDensity;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x88")]
	public ColorSetting FogColor;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting Rain;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting Thunder;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting Snow;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0xA8")]
	public FloatSetting Wind;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0xB0")]
	public Vector3Setting WindDirection;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting RainForce;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0xC0")]
	public FloatSetting SnowForce;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0xC8")]
	public FloatSetting WindForce;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting UseSchedule;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting ScheduleLoop;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0xE0")]
	public StringSetting Schedule;

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x1F2C220", Offset = "0x1F2A820", VA = "0x181F2C220")]
	public WeatherSet()
	{
	}
}
