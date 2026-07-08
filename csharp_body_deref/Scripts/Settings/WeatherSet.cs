using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000096")]
internal class WeatherSet : BaseSetSetting
{
	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Skybox;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x40")]
	public ColorSetting SkyboxColor;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x48")]
	public ColorSetting Daylight;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting DaylightIntensity;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x58")]
	public Vector3Setting DaylightDirection;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x60")]
	public ColorSetting AmbientLight;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x68")]
	public ColorSetting Flashlight;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x70")]
	public FloatSetting FogDensity;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x78")]
	public ColorSetting FogColor;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x80")]
	public FloatSetting Rain;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x88")]
	public FloatSetting Thunder;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting Snow;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting Wind;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0xA0")]
	public Vector3Setting WindDirection;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0xA8")]
	public FloatSetting RainForce;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0xB0")]
	public FloatSetting SnowForce;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting WindForce;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting UseSchedule;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting ScheduleLoop;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0xD0")]
	public StringSetting Schedule;

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x3C965F0", Offset = "0x3C965F0", VA = "0x3C965F0")]
	public WeatherSet()
	{
	}
}
