// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GraphicsSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/GraphicsSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/GraphicsSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$get_FileName): clean
			return "Graphics.json";
		}
	}

	[Token(Token = "0x170000B2")]
	protected override int CurrentVersion
	{
		[Token(Token = "0x6000504")]
		[Address(RVA = "0x5A413A0", Offset = "0x5A403A0", VA = "0x5A413A0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$get_CurrentVersion): clean
			return 2;
		}
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x5A413B0", Offset = "0x5A403B0", VA = "0x5A413B0", Slot = "21")]
	protected override bool Migrate(int fromVersion)
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$Migrate): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		IntSetting pSVar1;
		Il2CppType handle;
		bool bVar2;
		bool bVar3;
		Type enumType;
		MethodInfo method_00;
		int iStack_2c;

		if (Il2CppMethodInitialized_0754727a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754727a = true;
		}
		__this_00 = (HashSet<object>)this.FoundSettings;
		if (__this_00 == null) {
	label_05b414e4: ;
			throw new NullReferenceException();
		}
		bVar2 = __this_00.Contains((Il2CppObject *)"PresetQuality");
		handle = TypeRef_Settings_PresetQualityLevel;
		if (bVar2) {
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			pSVar1 = this.PresetQuality;
			if (pSVar1 == null) goto label_05b414e4;
			iStack_2c = pSVar1._value;
			method_00 = (MethodInfo)(object)iStack_2c;
			bVar2 = false;
			bVar3 = Enum.IsDefined(enumType, (object)method_00);
			if (bVar3) {
				if (fromVersion < 1) {
					this.ApplyRenderingPreset();
				}
				else if (fromVersion != 1) {
					return true;
				}
				this.MigrateToVersion2();
				bVar2 = true;
			}
		}
		else {
			bVar2 = false;
		}
		return bVar2;
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x5A414F0", Offset = "0x5A404F0", VA = "0x5A414F0")]
	private void MigrateToVersion1()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$MigrateToVersion1): clean
		this.ApplyRenderingPreset();
		return;
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x5A41500", Offset = "0x5A40500", VA = "0x5A41500")]
	private void MigrateToVersion2()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$MigrateToVersion2): 2 lines keep C-only constructs
		IntSetting pSVar1;
		BoolSetting pSVar2;
		bool bVar3;

		pSVar1 = this.DepthOfField;
		if (pSVar1 != null) {
			pSVar1.Value = 0;
			pSVar1 = this.PresetQuality;
			if ((pSVar1 != null) &&(pSVar2 = this.TitanGore, pSVar2 != null)) {
				pSVar2.Value = 1 < pSVar1._value;
				pSVar2 = this.BloodSplatterEnabled;
				if ((pSVar2 != null) &&(pSVar1 = this.PresetQuality, pSVar1 != null)) {
					pSVar2.Value = 1 < pSVar1._value &&((Settings_TypedSetting_bool__Fields)&pSVar2.fields)._value != false;
					pSVar2 = this.WindEffectEnabled;
					if ((pSVar2 != null) &&(pSVar1 = this.PresetQuality, pSVar1 != null)) {
						bVar3 = 0 < pSVar1._value &&((Settings_TypedSetting_bool__Fields)&pSVar2.fields)._value != false;
						pSVar2.Value = bVar3;
						this.ApplyResolutionPreset();
						bVar3 = MobilePlatformUtility.IsMobileRuntime();
						if (!bVar3) {
							return;
						}
						pSVar1 = this.FPSCap;
						if (pSVar1 != null) {
							pSVar1.Value = 0x3c;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x5A41840", Offset = "0x5A40840", VA = "0x5A41840", Slot = "4")]
	public override void SetDefault()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$SetDefault): clean
		bool bVar1;

		this.SetDefault();
		bVar1 = MobilePlatformUtility.IsMobileRuntime();
		if (bVar1) {
			this.ApplyMobileDefaults();
			return;
		}
		return;
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x5A41C20", Offset = "0x5A40C20", VA = "0x5A41C20", Slot = "20")]
	protected override void LoadLegacy()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$LoadLegacy): clean
		bool bVar1;

		bVar1 = MobilePlatformUtility.IsMobileRuntime();
		if (bVar1) {
			this.ApplyMobileDefaults();
			return;
		}
		return;
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x5A41BA0", Offset = "0x5A40BA0", VA = "0x5A41BA0")]
	private void ApplyMobileDefaults()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$ApplyMobileDefaults): clean
		IntSetting pSVar1;
		int iVar2;
		uint value;

		pSVar1 = this.PresetQuality;
		iVar2 = SystemInfo.systemMemorySize;
		if (pSVar1 != null) {
			value = (4999 < iVar2) + 1;
			pSVar1.Value = value;
			this.OnSelectPreset();
			pSVar1 = this.FPSCap;
			if (pSVar1 != null) {
				pSVar1.Value = 0x3c;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x5A41640", Offset = "0x5A40640", VA = "0x5A41640")]
	private void ApplyRenderingPreset()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$ApplyRenderingPreset): clean
		int iVar1;
		IntSetting pSVar2;
		BoolSetting __this_00;
		int iVar3;
		int value;

		pSVar2 = this.PresetQuality;
		if ((pSVar2 != null) &&(__this_00 = this.HDR, __this_00 != null)) {
			iVar1 = pSVar2._value;
			__this_00.Value = iVar1 - 3U < 2;
			pSVar2 = this.AutoExposure;
			if (pSVar2 != null) {
				pSVar2.Value = 0;
				pSVar2 = this.Bloom;
				iVar3 = 1;
				if (iVar1 != 3) {
					iVar3 = (uint)(iVar1 == 4) * 2;
				}
				if (pSVar2 != null) {
					pSVar2.Value = iVar3;
					pSVar2 = this.LightDistance;
					if (pSVar2 != null) {
						value = 0;
						if (iVar1 - 2U < 3) {
							value = (iVar1 - 2U) * 500 + 500;
						}
						pSVar2.Value = value;
						pSVar2 = this.AntiAliasingQuality;
						if (pSVar2 != null) {
							pSVar2.Value = iVar3;
							pSVar2 = this.AnisotropicFiltering;
							if (pSVar2 != null) {
								iVar3 = 1;
								if (iVar1 != 2) {
									iVar3 = (uint)(0xfffffffd < iVar1 - 5U) * 2;
								}
								pSVar2.Value = iVar3;
								pSVar2 = this.AdditionalLights;
								if (pSVar2 != null) {
									pSVar2.Value = iVar3;
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x5A417B0", Offset = "0x5A407B0", VA = "0x5A417B0")]
	private void ApplyResolutionPreset()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$ApplyResolutionPreset): clean
		int iVar1;
		IntSetting pSVar2;
		IntSetting __this_00;
		int value;

		pSVar2 = this.PresetQuality;
		if ((pSVar2 != null) &&(__this_00 = this.TextureQuality, __this_00 != null)) {
			iVar1 = pSVar2._value;
			__this_00.Value = iVar1 == 0 ^ 3;
			pSVar2 = this.RenderScale;
			if (pSVar2 != null) {
				value = 100;
				if (iVar1 == 0) {
					value = 0x32;
				}
				pSVar2.Value = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x5A42030", Offset = "0x5A41030", VA = "0x5A42030")]
	protected void SetupURPAsset()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$SetupURPAsset): 6 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		bool bVar3;
		GraphicsSettings.c__DisplayClass50_0 __this_00;
		RenderPipelineAsset pUVar4;
		UniversalRenderPipelineAsset pUVar5;
		Action __this_01;
		RenderPipelineAsset x;

		__this_00 = il2cpp_codegen_object_new(typeof(GraphicsSettings.c__DisplayClass50_0)) ;
		__this_00 = new Object();
		pUVar5 = GraphicsSettings.URPAsset;
		bVar3 = ((Object)pUVar5 != null);
		if (bVar3) {
			return;
		}
		if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
			bVar3 = Application.isPlaying;
		}
		else {
			bVar3 = Application.isPlaying;
		}
		if (!bVar3) {
			return;
		}
		pUVar4 = QualitySettings.renderPipeline;
		if (pUVar4 == null) {
	label_05b4217d: ;
			x = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(UniversalRenderPipelineAsset)._2).typeHierarchyDepth;
			if ((pUVar4.klass._2).typeHierarchyDepth < bVar1) goto label_05b4217d;
			x = null;
			if ((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(UniversalRenderPipelineAsset)) {
				x = pUVar4;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar3 = ((Object)x == null);
		if (bVar3) {
			x = null;
			pUVar4 = GraphicsSettings.defaultRenderPipeline;
			if (pUVar4 != null) {
				bVar1 = (typeof(UniversalRenderPipelineAsset)._2).typeHierarchyDepth;
				if (bVar1 <= (pUVar4.klass._2).typeHierarchyDepth) {
					x = null;
					if ((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(UniversalRenderPipelineAsset)) {
						x = pUVar4;
					}
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
					goto joined_r0x05b421ec;
				}
				x = null;
			}
		}
		uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
	joined_r0x05b421ec: ;
		if (uVar2 == 0) {
		}
		bVar3 = ((Object)x == null);
		if (bVar3) {
			return;
		}
		pUVar4 = QualitySettings.renderPipeline;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.originalRenderPipeline = pUVar4;
		pUVar5 = Object.Instantiate<UniversalRenderPipelineAsset>((object)x);
		GraphicsSettings.URPAsset = pUVar5;
		QualitySettings.renderPipeline = (RenderPipelineAsset)GraphicsSettings.URPAsset;
		__this_01 = new Action((object)__this_00, (intptr_t)MethodInfo_Settings_GraphicsSettings_c__DisplayClass50_0_SetupURPAsset_b__0);
		Application.add_quitting(__this_01);
		return;
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x5A42350", Offset = "0x5A41350", VA = "0x5A42350")]
	protected static void SetURPField(string fieldName, object value)
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$SetURPField): clean
		Il2CppType handle;
		Type pSVar1;
		FieldInfo __this;

		handle = TypeRef_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		__this = (FieldInfo)pSVar1.unknown(fieldName, 0x24);
		if (__this == null) {
			return;
		}
		__this.SetValue((object)GraphicsSettings.URPAsset, value);
		return;
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x5A42410", Offset = "0x5A41410", VA = "0x5A42410", Slot = "12")]
	public override void Apply()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$Apply): 5 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		UniversalRenderPipelineAsset pUVar3;
		BoolSetting pSVar4;
		InGameCamera __this_00;
		IntSetting pSVar5;
		BaseMenu x;
		bool bVar6;
		int iVar7;
		object pIVar8;
		IntSetting pSVar9;
		PostProcessingManager __this_01;
		uint uVar10;
		String* __this_02;
		InGameMenu __this_03;
		byte uStack_2d;
		int iStack_2c;
		uint uStack_28;
		uint uStack_24;

		__this_02 = (String*)this;
		if (Il2CppMethodInitialized_07547281 == false) {
			__this_02 = &"m_AdditionalLightShadowsSupported";
			Il2CppMethodInitialized_07547281 = true;
		}
		__this_02.SetupURPAsset();
		pUVar3 = GraphicsSettings.URPAsset;
		bVar6 = ((Object)pUVar3 != null);
		if (bVar6) {
			pSVar4 = this.HDR;
			if ((pSVar4 == null) ||(pUVar3 = GraphicsSettings.URPAsset, pUVar3 == null)) goto label_05b42afa;
			pUVar3.m_SupportsHDR = pSVar4._value;
			pSVar9 = this.RenderScale;
			if (pSVar9 == null) goto label_05b42afa;
			pUVar3.renderScale = (float)pSVar9._value / 100.0;
			pSVar9 = this.AdditionalLights;
			if (pSVar9 == null) goto label_05b42afa;
			uStack_24 = (uint)(pSVar9._value != 0);
			pIVar8 = (object)uStack_24 ;
			GraphicsSettings.SetURPField("m_AdditionalLightsRenderingMode", pIVar8);
			pSVar9 = this.ShadowQuality;
			if (pSVar9 == null) goto label_05b42afa;
			pUVar3 = GraphicsSettings.URPAsset;
			if (pSVar9._value == 0) {
				if (pUVar3 == null) goto label_05b42afa;
				pUVar3.shadowDistance = 0.0;
			}
			else {
				pSVar9 = this.ShadowDistance;
				if ((pSVar9 == null) ||(pUVar3 == null)) goto label_05b42afa;
				pUVar3.shadowDistance = (float)pSVar9._value;
				pSVar9 = this.ShadowQuality;
				if (pSVar9 == null) goto label_05b42afa;
				iVar2 = pSVar9._value;
				if (iVar2 == 3) {
					pUVar3 = GraphicsSettings.URPAsset;
					if (pUVar3 == null) goto label_05b42afa;
					pUVar3.shadowCascadeCount = 4;
					uVar10 = 0x800;
				}
				else if (iVar2 == 2) {
					pUVar3 = GraphicsSettings.URPAsset;
					if (pUVar3 == null) goto label_05b42afa;
					pUVar3.shadowCascadeCount = 2;
					uVar10 = 0x400;
				}
				else {
					uVar10 = 0x200;
					if (iVar2 == 1) {
						pUVar3 = GraphicsSettings.URPAsset;
						if (pUVar3 == null) goto label_05b42afa;
						pUVar3.shadowCascadeCount = 1;
					}
				}
				uStack_28 = uVar10;
				pIVar8 = (object)uStack_28 ;
				GraphicsSettings.SetURPField("m_MainLightShadowmapResolution", pIVar8);
			}
			pSVar9 = this.ShadowQuality;
			if (pSVar9 == null) goto label_05b42afa;
			if (pSVar9._value == 0) {
				bVar6 = false;
			}
			else {
				pSVar9 = this.AdditionalLights;
				if (pSVar9 == null) goto label_05b42afa;
				bVar6 = pSVar9._value == 2;
			}
			uStack_2d = bVar6;
			pIVar8 = (object)uStack_2d;
			GraphicsSettings.SetURPField("m_AdditionalLightShadowsSupported", pIVar8);
			if (bVar6) {
				pSVar9 = this.ShadowQuality;
				if (pSVar9 == null) goto label_05b42afa;
				iStack_2c = (uint)(pSVar9._value == 3) * 0x400 + 0x400;
				pIVar8 = (object)iStack_2c ;
				GraphicsSettings.SetURPField("m_AdditionalLightsShadowmapResolution", pIVar8);
			}
			pSVar9 = this.AntiAliasingQuality;
			if ((pSVar9 == null) ||(pUVar3 = GraphicsSettings.URPAsset, pUVar3 == null)) goto label_05b42afa;
			iVar2 = pSVar9._value;
			iVar7 = 2;
			if (iVar2 != 1) {
				iVar7 = (uint)(iVar2 == 2) * 3 + 1;
			}
			pUVar3.m_MSAA = iVar7;
		}
		pSVar4 = this.VSync;
		if (pSVar4 != null) {
			bVar6 = pSVar4._value;
			iVar7 = Convert.ToInt32(bVar6);
			QualitySettings.vSyncCount = iVar7;
			if ((SceneLoader.SceneName & 0xfffffffeU) == 2) {
				pSVar9 = this.FPSCap;
			}
			else {
				pSVar9 = this.MenuFPSCap;
			}
			if (pSVar9 != null) {
				iVar7 = pSVar9._value;
				iVar7 = FullscreenHandler.GetTargetFrameRate(iVar7);
				Application.targetFrameRate = iVar7;
				pSVar9 = this.TextureQuality;
				if (pSVar9 != null) {
					QualitySettings.globalTextureMipmapLimit = 3 - pSVar9._value;
					pSVar9 = this.AnisotropicFiltering;
					if (pSVar9 != null) {
						QualitySettings.anisotropicFiltering = pSVar9._value;
						__this_00 = (InGameCamera)SceneLoader.CurrentCamera;
						if (__this_00 != null) {
							bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
							if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameCamera))) {
								__this_00.ApplyGraphicsSettings();
							}
						}
						pSVar9 = this.ScreenResolution;
						if (pSVar9 != null) {
							iVar7 = pSVar9._value;
							if ((typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(FullscreenHandler)) ;
							}
							iVar7 = FullscreenHandler.SanitizeResolutionSetting(iVar7);
							pSVar9.Value = iVar7;
							pSVar9 = this.ScreenResolution;
							if ((pSVar9 != null) &&(pSVar5 = this.FullScreenMode, pSVar5 != null)) {
								FullscreenHandler.Apply(pSVar9._value, pSVar5._value);
								__this_01 = Object.FindFirstObjectByType<PostProcessingManager>();
								bVar6 = ((Object)__this_01 != null);
								if (bVar6) {
									if (__this_01 == null) goto label_05b42afa;
									__this_01.Apply();
								}
								x = UIManager.CurrentMenu;
								bVar6 = ((Object)x != null);
								if (bVar6) {
									if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
										__this_03 = (InGameMenu)UIManager.CurrentMenu;
									}
									else {
										__this_03 = (InGameMenu)UIManager.CurrentMenu;
									}
									if (__this_03 != null) {
										bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
										if ((bVar1 <= (((BaseMenu)__this_03.klass)._2).typeHierarchyDepth) &&((((BaseMenu)__this_03.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameMenu))) {
											if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
												__this_03 = (InGameMenu)UIManager.CurrentMenu;
												if (__this_03 == null) goto label_05b42afa;
											}
											bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
											if (((__this_03.klass._2).typeHierarchyDepth < bVar1) ||((__this_03.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameMenu))) {
												throw new InvalidCastException();
											}
											__this_03.ApplyUISettings();
										}
									}
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05b42afa: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x5A41C40", Offset = "0x5A40C40", VA = "0x5A41C40")]
	public void OnSelectPreset()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$OnSelectPreset): clean
		BoolSetting pSVar1;
		int value;
		IntSetting pSVar2;

		this.ApplyRenderingPreset();
		this.ApplyResolutionPreset();
		pSVar2 = this.PresetQuality;
		if ((pSVar2 == null) ||(pSVar1 = this.TitanGore, pSVar1 == null)) goto label_05b4202b;
		pSVar1.Value = 1 < pSVar2._value;
		pSVar2 = this.PresetQuality;
		if ((pSVar2 == null) ||(pSVar1 = this.BloodSplatterEnabled, pSVar1 == null)) goto label_05b4202b;
		pSVar1.Value = 1 < pSVar2._value;
		pSVar2 = this.PresetQuality;
		if ((pSVar2 == null) ||(pSVar1 = this.WindEffectEnabled, pSVar1 == null)) goto label_05b4202b;
		pSVar1.Value = 0 < pSVar2._value;
		pSVar2 = this.ColorGrading;
		if (pSVar2 == null) goto label_05b4202b;
		pSVar2.Value = 0;
		pSVar2 = this.AmbientOcclusion;
		if (pSVar2 == null) goto label_05b4202b;
		pSVar2.Value = 0;
		pSVar2 = this.MotionBlur;
		if (pSVar2 == null) goto label_05b4202b;
		pSVar2.Value = 0;
		pSVar2 = this.ChromaticAberrationFX;
		if (pSVar2 == null) goto label_05b4202b;
		pSVar2.Value = 0;
		pSVar2 = this.DepthOfField;
		if (pSVar2 == null) goto label_05b4202b;
		pSVar2.Value = 0;
		pSVar2 = this.PresetQuality;
		if (pSVar2 == null) goto label_05b4202b;
		switch(pSVar2._value) {
		case 0:
			pSVar2 = this.ShadowQuality;
			if (pSVar2 != null) {
				pSVar2.Value = 0;
				pSVar2 = this.WeatherEffects;
				if (pSVar2 != null) {
					pSVar2.Value = 0;
					pSVar2 = this.ShadowDistance;
					if (pSVar2 != null) {
						pSVar2.Value = 500;
						pSVar2 = this.WaterFX;
						if (pSVar2 != null) {
							pSVar2.Value = 1;
							pSVar2 = this.RenderDistance;
							if (pSVar2 != null) {
								pSVar2.Value = 1000;
								return;
							}
						}
					}
				}
			}
			break;
		case 1:
			pSVar2 = this.ShadowQuality;
			if (pSVar2 != null) {
				pSVar2.Value = 0;
				pSVar2 = this.WeatherEffects;
				if (pSVar2 != null) {
					pSVar2.Value = 1;
					pSVar2 = this.ShadowDistance;
					if (pSVar2 != null) {
						pSVar2.Value = 500;
						pSVar2 = this.WaterFX;
						if (pSVar2 != null) {
							pSVar2.Value = 1;
							pSVar2 = this.RenderDistance;
							if (pSVar2 != null) {
								pSVar2.Value = 2000;
								return;
							}
						}
					}
				}
			}
			break;
		case 2:
			pSVar2 = this.ShadowQuality;
			if (pSVar2 != null) {
				pSVar2.Value = 1;
				pSVar2 = this.WeatherEffects;
				if (pSVar2 != null) {
					pSVar2.Value = 2;
					pSVar2 = this.ShadowDistance;
					if (pSVar2 != null) {
						pSVar2.Value = 500;
						pSVar2 = this.WaterFX;
						if (pSVar2 != null) {
							pSVar2.Value = 2;
							pSVar2 = this.RenderDistance;
							if (pSVar2 != null) {
								pSVar2.Value = 5000;
								return;
							}
						}
					}
				}
			}
			break;
		case 3:
			pSVar2 = this.ShadowQuality;
			if (pSVar2 == null) break;
			value = 2;
			goto label_05b41fbe;
		case 4:
			pSVar2 = this.ShadowQuality;
			if (pSVar2 == null) break;
			value = 3;
	label_05b41fbe: ;
			pSVar2.Value = value;
			pSVar2 = this.WeatherEffects;
			if (pSVar2 != null) {
				pSVar2.Value = 3;
				pSVar2 = this.ShadowDistance;
				if (pSVar2 != null) {
					pSVar2.Value = 1000;
					pSVar2 = this.WaterFX;
					if (pSVar2 != null) {
						pSVar2.Value = 3;
						pSVar2 = this.RenderDistance;
						if (pSVar2 != null) {
							pSVar2.Value = 10000;
							return;
						}
					}
				}
			}
			break;
		default: ;
			return;
		}
	label_05b4202b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x5A42B10", Offset = "0x5A41B10", VA = "0x5A42B10")]
	public GraphicsSettings()
	{
		// Lifted from source/cpp/Settings/GraphicsSettings.c (Settings.GraphicsSettings$$.ctor): 1 lines keep C-only constructs
		int iVar1;
		IntSetting pSVar2;
		BoolSetting pSVar3;

		if (Il2CppMethodInitialized_07547283 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_ChromaticAberrationLevel) ;
			Il2CppMethodInitialized_07547283 = true;
		}
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(4);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.PresetQuality = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(1);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.FullScreenMode = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.ScreenResolution = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(0x90);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.FPSCap = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(0x3c);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.MenuFPSCap = pSVar2;
		pSVar3 = new BoolSetting(false);
		this.VSync = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.InterpolationEnabled = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.ShowFPS = pSVar3;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 10;
		pSVar2.MaxValue = 1000000;
		iVar1 = pSVar2.SanitizeValue(10000);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.RenderDistance = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0x32;
		pSVar2.MaxValue = 100;
		iVar1 = pSVar2.SanitizeValue(100);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.RenderScale = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(3);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.TextureQuality = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(3);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.ShadowQuality = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = 3000;
		iVar1 = pSVar2.SanitizeValue(1000);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.ShadowDistance = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = 3000;
		iVar1 = pSVar2.SanitizeValue(0x5dc);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.LightDistance = pSVar2;
		iVar1 = Util.EnumMaxValue<AntiAliasingLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(2);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.AntiAliasingQuality = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(2);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.AnisotropicFiltering = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(3);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.WeatherEffects = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(2);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.WeaponTrail = pSVar2;
		pSVar3 = new BoolSetting(false);
		this.WeaponTrailHold = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.WeaponFireEffect = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.WindEffectEnabled = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.BloodSplatterEnabled = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.NapeBloodEnabled = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.TitanGore = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.MipmapEnabled = pSVar3;
		iVar1 = Util.EnumMaxValue<AdditionalLightingMode>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(2);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.AdditionalLights = pSVar2;
		iVar1 = Util.EnumMaxValue<BloomLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(2);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.Bloom = pSVar2;
		iVar1 = Util.EnumMaxValue<ChromaticAberrationLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.ChromaticAberrationFX = pSVar2;
		iVar1 = Util.EnumMaxValue<DepthOfFieldLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.DepthOfField = pSVar2;
		iVar1 = Util.EnumMaxValue<MotionBlurLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.MotionBlur = pSVar2;
		iVar1 = Util.EnumMaxValue<WaterFXLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(3);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.WaterFX = pSVar2;
		iVar1 = Util.EnumMaxValue<AmbientOcclusionLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.AmbientOcclusion = pSVar2;
		iVar1 = Util.EnumMaxValue<ColorGradingLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.ColorGrading = pSVar2;
		iVar1 = Util.EnumMaxValue<AutoExposureLevel>();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = iVar1;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.AutoExposure = pSVar2;
		pSVar3 = new BoolSetting(true);
		this.HDR = pSVar3;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/GraphicsSettings.c.

	// Settings.GraphicsSettings.<>c__DisplayClass50_0$$.ctor: clean
	private void c__DisplayClass50_0__ctor()
	{
		base();
		return;
	}

	// Settings.GraphicsSettings.<>c__DisplayClass50_0$$<SetupURPAsset>b__0: clean
	private void c__DisplayClass50_0__SetupURPAsset_b__0()
	{
		QualitySettings.renderPipeline = this.originalRenderPipeline;
		return;
	}
}
