// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GraphicsSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/GraphicsSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/GraphicsSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.Universal;

namespace Settings;

[Token(Token = "0x200008E")]
internal class GraphicsSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x0")]
	public static UniversalRenderPipelineAsset URPAsset;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting PresetQuality;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting FullScreenMode;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting ScreenResolution;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting FPSCap;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting MenuFPSCap;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting VSync;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting InterpolationEnabled;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting ShowFPS;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting RenderDistance;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting TextureQuality;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting ShadowQuality;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting ShadowDistance;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting LightDistance;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0xA0")]
	public IntSetting AntiAliasingQuality;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0xA8")]
	public IntSetting AnisotropicFiltering;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting WeatherEffects;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0xB8")]
	public IntSetting WeaponTrail;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting WeaponTrailHold;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting WeaponFireEffect;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting WindEffectEnabled;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting BloodSplatterEnabled;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting NapeBloodEnabled;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting MipmapEnabled;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0xF0")]
	public IntSetting AdditionalLights;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0xF8")]
	public IntSetting Bloom;

	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0x100")]
	public IntSetting ChromaticAberrationFX;

	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x108")]
	public IntSetting DepthOfField;

	[Token(Token = "0x40002D7")]
	[FieldOffset(Offset = "0x110")]
	public IntSetting MotionBlur;

	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x118")]
	public IntSetting WaterFX;

	[Token(Token = "0x40002D9")]
	[FieldOffset(Offset = "0x120")]
	public IntSetting AmbientOcclusion;

	[Token(Token = "0x40002DA")]
	[FieldOffset(Offset = "0x128")]
	public IntSetting ColorGrading;

	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x130")]
	public IntSetting AutoExposure;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x138")]
	public BoolSetting HDR;

	[Token(Token = "0x17000094")]
	protected override string FileName
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x1F16650", Offset = "0x1F14C50", VA = "0x181F16650", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000095")]
	protected override int CurrentVersion
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x1F14B50", Offset = "0x1F13150", VA = "0x181F14B50", Slot = "21")]
	protected override bool Migrate(int fromVersion)
	{
		return default(bool);
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x1F14240", Offset = "0x1F12840", VA = "0x181F14240")]
	private void ApplyRenderingPreset()
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x1F151A0", Offset = "0x1F137A0", VA = "0x181F151A0")]
	protected void SetupURPAsset()
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x1F150E0", Offset = "0x1F136E0", VA = "0x181F150E0")]
	protected static void SetURPField(string fieldName, object value)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x1F14400", Offset = "0x1F12A00", VA = "0x181F14400", Slot = "12")]
	public override void Apply()
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x1F14C80", Offset = "0x1F13280", VA = "0x181F14C80")]
	public void OnSelectPreset()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x1F15480", Offset = "0x1F13A80", VA = "0x181F15480")]
	public GraphicsSettings()
	{
	}
}
