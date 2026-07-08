using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000072")]
internal class GraphicsSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x20")]
	public IntSetting PresetQuality;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x28")]
	public IntSetting FullScreenMode;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting ScreenResolution;

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting FPSCap;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting MenuFPSCap;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting VSync;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting InterpolationEnabled;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting ShowFPS;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting RenderDistance;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting TextureQuality;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting ShadowQuality;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting ShadowDistance;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting LightDistance;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting AntiAliasing;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting AnisotropicFiltering;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting WeatherEffects;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0xA0")]
	public IntSetting WeaponTrail;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting WeaponTrailHold;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting WeaponFireEffect;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0xB8")]
	public BoolSetting WindEffectEnabled;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting BloodSplatterEnabled;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting NapeBloodEnabled;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting MipmapEnabled;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0xD8")]
	public IntSetting AmbientOcclusion;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0xE0")]
	public IntSetting Bloom;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0xE8")]
	public IntSetting ChromaticAberrationFX;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0xF0")]
	public IntSetting ColorGrading;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0xF8")]
	public IntSetting AutoExposure;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x100")]
	public IntSetting DepthOfField;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x108")]
	public IntSetting MotionBlur;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x110")]
	public IntSetting WaterFX;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x118")]
	public BoolSetting HDR;

	[Token(Token = "0x17000088")]
	protected override string FileName
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x3C91AB0", Offset = "0x3C91AB0", VA = "0x3C91AB0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x3C91AE0", Offset = "0x3C91AE0", VA = "0x3C91AE0", Slot = "11")]
	public override void Apply()
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x3C91FF0", Offset = "0x3C91FF0", VA = "0x3C91FF0")]
	public void OnSelectPreset()
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x3C92890", Offset = "0x3C92890", VA = "0x3C92890")]
	public GraphicsSettings()
	{
	}
}
