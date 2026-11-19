// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GeneralSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/GeneralSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/GeneralSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000C3")]
internal class GeneralSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Language;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting MouseSpeed;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting CameraDistance;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting CameraHeight;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting CameraSide;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting InvertMouse;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting CameraTiltStrength;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting SnapshotsEnabled;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting SnapshotsShowInGame;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting SnapshotsMinimumDamage;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting MinimapEnabled;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting MinimapCameraHeight;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting CameraMode;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting OriginalCameraWOWRotation;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting SkipCutscenes;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting CameraClipping;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting FOVMin;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0xC0")]
	public FloatSetting FOVMax;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0xC8")]
	public FloatSetting FPSFOVMin;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0xD0")]
	public FloatSetting FPSFOVMax;

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0xD8")]
	public FloatSetting OriginalCameraDeadzone;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0xE0")]
	public FloatSetting OriginalCameraSpeed;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting MobileInputEnabled;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting MobileButtonIcons;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0xF8")]
	public BoolSetting MobileGyroscope;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x100")]
	public FloatSetting MobileGyroscopeHorizontalSensitivity;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x108")]
	public FloatSetting MobileGyroscopeVerticalSensitivity;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x110")]
	public FloatSetting MobileLookStabilization;

	[Token(Token = "0x170000B0")]
	protected override string FileName
	{
		[Token(Token = "0x60004FF")]
		[Address(RVA = "0x5A40380", Offset = "0x5A3F380", VA = "0x5A40380", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/GeneralSettings.c (Settings.GeneralSettings$$get_FileName): clean
			return "General.json";
		}
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x5A403B0", Offset = "0x5A3F3B0", VA = "0x5A403B0", Slot = "12")]
	public override void Apply()
	{
		// Lifted from source/cpp/Settings/GeneralSettings.c (Settings.GeneralSettings$$Apply): 1 lines keep C-only constructs
		byte bVar1;
		InGameCamera __this_00;

		__this_00 = (InGameCamera)SceneLoader.CurrentCamera ;
		if (__this_00 != null) {
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameCamera) )) {
				__this_00.ApplyGeneralSettings();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x5A40430", Offset = "0x5A3F430", VA = "0x5A40430", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/GeneralSettings.c (Settings.GeneralSettings$$DeserializeFromJsonObject): clean
		this.DeserializeFromJsonObject(json);
		return;
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x5A40440", Offset = "0x5A3F440", VA = "0x5A40440")]
	public GeneralSettings()
	{
		// Lifted from source/cpp/Settings/GeneralSettings.c (Settings.GeneralSettings$$.ctor): clean
		int iVar1;
		StringSetting __this_00;
		FloatSetting pSVar2;
		BoolSetting pSVar3;
		IntSetting pSVar4;
		float fVar5;

		__this_00 = new StringSetting("English", 0x7fffffff);
		this.Language = __this_00;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.01;
		pSVar2.MaxValue = 1.0;
		fVar5 = pSVar2.SanitizeValue(0.5);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.MouseSpeed = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 1.0;
		fVar5 = pSVar2.SanitizeValue(1.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.CameraDistance = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 2.0;
		fVar5 = pSVar2.SanitizeValue(1.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.CameraHeight = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 2.0;
		fVar5 = pSVar2.SanitizeValue(1.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.CameraSide = pSVar2;
		pSVar3 = new BoolSetting(false);
		this.InvertMouse = pSVar3;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 1.0;
		fVar5 = pSVar2.SanitizeValue(0.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.CameraTiltStrength = pSVar2;
		pSVar3 = new BoolSetting(false);
		this.SnapshotsEnabled = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.SnapshotsShowInGame = pSVar3;
		pSVar4.MinValue = -0x80000000;
		pSVar4.MaxValue = 0x7fffffff;
		pSVar4 = new IntSetting();
		pSVar4.MinValue = 0;
		pSVar4.MaxValue = 0x7fffffff;
		iVar1 = pSVar4.SanitizeValue(0);
		pSVar4.DefaultValue = iVar1;
		pSVar4.SetDefault();
		this.SnapshotsMinimumDamage = pSVar4;
		pSVar3 = new BoolSetting(true);
		this.MinimapEnabled = pSVar3;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 100.0;
		pSVar2.MaxValue = 3.4028235e+38;
		fVar5 = pSVar2.SanitizeValue(1000.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.MinimapCameraHeight = pSVar2;
		pSVar4.MinValue = -0x80000000;
		pSVar4.MaxValue = 0x7fffffff;
		pSVar4 = new IntSetting();
		pSVar4.MinValue = -0x80000000;
		pSVar4.MaxValue = 0x7fffffff;
		iVar1 = pSVar4.SanitizeValue(0);
		pSVar4.DefaultValue = iVar1;
		pSVar4.SetDefault();
		this.CameraMode = pSVar4;
		pSVar3 = new BoolSetting(false);
		this.OriginalCameraWOWRotation = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.SkipCutscenes = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.CameraClipping = pSVar3;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 1.0;
		pSVar2.MaxValue = 120.0;
		fVar5 = pSVar2.SanitizeValue(50.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.FOVMin = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 1.0;
		pSVar2.MaxValue = 120.0;
		fVar5 = pSVar2.SanitizeValue(100.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.FOVMax = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 1.0;
		pSVar2.MaxValue = 120.0;
		fVar5 = pSVar2.SanitizeValue(80.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.FPSFOVMin = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 1.0;
		pSVar2.MaxValue = 120.0;
		fVar5 = pSVar2.SanitizeValue(100.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.FPSFOVMax = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 0.99;
		fVar5 = pSVar2.SanitizeValue(0.2);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.OriginalCameraDeadzone = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.1;
		pSVar2.MaxValue = 200.0;
		fVar5 = pSVar2.SanitizeValue(60.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.OriginalCameraSpeed = pSVar2;
		pSVar3 = new BoolSetting(true);
		this.MobileInputEnabled = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.MobileButtonIcons = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.MobileGyroscope = pSVar3;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = -1.0;
		pSVar2.MaxValue = 1.0;
		fVar5 = pSVar2.SanitizeValue(1.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.MobileGyroscopeHorizontalSensitivity = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = -1.0;
		pSVar2.MaxValue = 1.0;
		fVar5 = pSVar2.SanitizeValue(1.0);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.MobileGyroscopeVerticalSensitivity = pSVar2;
		pSVar2.MinValue = -3.4028235e+38;
		pSVar2.MaxValue = 3.4028235e+38;
		pSVar2 = new FloatSetting();
		pSVar2.MinValue = 0.0;
		pSVar2.MaxValue = 0.9;
		fVar5 = pSVar2.SanitizeValue(0.6);
		pSVar2.DefaultValue = fVar5;
		pSVar2.SetDefault();
		this.MobileLookStabilization = pSVar2;
		base();
		return;
	}
}
