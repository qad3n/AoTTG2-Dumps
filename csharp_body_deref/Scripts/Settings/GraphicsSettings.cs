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

[Token(Token = "0x20000C5")]
internal class GraphicsSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003ED")]
	private const int MobileMediumPresetMinMemoryMB = 5000;

	[Token(Token = "0x40003EE")]
	private const int MobileFPSCap = 60;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x0")]
	public static UniversalRenderPipelineAsset URPAsset;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting PresetQuality;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting FullScreenMode;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting ScreenResolution;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting FPSCap;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting MenuFPSCap;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting VSync;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting InterpolationEnabled;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting ShowFPS;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting RenderDistance;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting RenderScale;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting TextureQuality;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting ShadowQuality;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting ShadowDistance;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0xA0")]
	public IntSetting LightDistance;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0xA8")]
	public IntSetting AntiAliasingQuality;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting AnisotropicFiltering;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0xB8")]
	public IntSetting WeatherEffects;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0xC0")]
	public IntSetting WeaponTrail;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting WeaponTrailHold;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting WeaponFireEffect;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting WindEffectEnabled;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting BloodSplatterEnabled;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting NapeBloodEnabled;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting TitanGore;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0xF8")]
	public BoolSetting MipmapEnabled;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x100")]
	public IntSetting AdditionalLights;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x108")]
	public IntSetting Bloom;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x110")]
	public IntSetting ChromaticAberrationFX;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x118")]
	public IntSetting DepthOfField;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x120")]
	public IntSetting MotionBlur;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x128")]
	public IntSetting WaterFX;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x130")]
	public IntSetting AmbientOcclusion;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x138")]
	public IntSetting ColorGrading;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x140")]
	public IntSetting AutoExposure;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x148")]
	public BoolSetting HDR;

	[Token(Token = "0x170000B1")]
	protected override string FileName
	{
		[Token(Token = "0x6000503")]
		[Address(RVA = "0x5A41370", Offset = "0x5A40370", VA = "0x5A41370", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B2")]
	protected override int CurrentVersion
	{
		[Token(Token = "0x6000504")]
		[Address(RVA = "0x5A413A0", Offset = "0x5A403A0", VA = "0x5A413A0", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x5A413B0", Offset = "0x5A403B0", VA = "0x5A413B0", Slot = "21")]
	protected override bool Migrate(int fromVersion)
	{
		return default(bool);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x5A414F0", Offset = "0x5A404F0", VA = "0x5A414F0")]
	private void MigrateToVersion1()
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x5A41500", Offset = "0x5A40500", VA = "0x5A41500")]
	private void MigrateToVersion2()
	{
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x5A41840", Offset = "0x5A40840", VA = "0x5A41840", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x5A41C20", Offset = "0x5A40C20", VA = "0x5A41C20", Slot = "20")]
	protected override void LoadLegacy()
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x5A41BA0", Offset = "0x5A40BA0", VA = "0x5A41BA0")]
	private void ApplyMobileDefaults()
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x5A41640", Offset = "0x5A40640", VA = "0x5A41640")]
	private void ApplyRenderingPreset()
	{
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x5A417B0", Offset = "0x5A407B0", VA = "0x5A417B0")]
	private void ApplyResolutionPreset()
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x5A42030", Offset = "0x5A41030", VA = "0x5A42030")]
	protected void SetupURPAsset()
	{
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x5A42350", Offset = "0x5A41350", VA = "0x5A42350")]
	protected static void SetURPField(string fieldName, object value)
	{
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x5A42410", Offset = "0x5A41410", VA = "0x5A42410", Slot = "12")]
	public override void Apply()
	{
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x5A41C40", Offset = "0x5A40C40", VA = "0x5A41C40")]
	public void OnSelectPreset()
	{
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x5A42B10", Offset = "0x5A41B10", VA = "0x5A42B10")]
	public GraphicsSettings()
	{
	}
}
