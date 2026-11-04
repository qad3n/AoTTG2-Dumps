// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineGlobalSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000B8")]
[DisplayInfo(name = "URP Global Settings Asset", order = 40002)]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[DisplayName("URP")]
internal class UniversalRenderPipelineGlobalSettings : RenderPipelineGlobalSettings<UniversalRenderPipelineGlobalSettings, UniversalRenderPipeline>
{
	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal ShaderStrippingSetting m_ShaderStrippingSetting;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal URPShaderStrippingSetting m_URPShaderStrippingSetting;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal UnityEngine.Rendering.ShaderVariantLogLevel m_ShaderVariantLogLevel;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal bool m_ExportShaderVariants;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x35")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal bool m_StripDebugVariants;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x36")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal bool m_StripUnusedPostProcessingVariants;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x37")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal bool m_StripUnusedVariants;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal bool m_StripScreenCoordOverrideVariants;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x39")]
	[Obsolete("Please use stripRuntimeDebugShaders instead. #from(2023.1)")]
	public bool supportRuntimeDebugDisplay;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x3A")]
	[SerializeField]
	[Obsolete("Keep for migration. #from(2023.2)")]
	internal bool m_EnableRenderGraph;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private RenderPipelineGraphicsSettingsContainer m_Settings;

	[Token(Token = "0x40003BE")]
	internal const int k_LastVersion = 10;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[FormerlySerializedAs("k_AssetVersion")]
	internal int m_AssetVersion;

	[Token(Token = "0x40003C0")]
	public const string defaultAssetName = "UniversalRenderPipelineGlobalSettings";

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[FormerlySerializedAs("m_DefaultVolumeProfile")]
	[Obsolete("Kept For Migration. #from(2023.3)")]
	internal VolumeProfile m_ObsoleteDefaultVolumeProfile;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	internal string[] m_RenderingLayerNames;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private uint m_ValidRenderingLayers;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x68")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2022.2)")]
	public string lightLayerName0;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x70")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2022.2)")]
	public string lightLayerName1;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x78")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2022.2)")]
	public string lightLayerName2;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x80")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2022.2)")]
	public string lightLayerName3;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x88")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2022.2)")]
	public string lightLayerName4;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x90")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2022.2)")]
	public string lightLayerName5;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x98")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2022.2)")]
	public string lightLayerName6;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0xA0")]
	[Obsolete("This is obsolete, please use renderingLayerNames instead. #from(2022.2)")]
	public string lightLayerName7;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	internal ProbeVolumeSceneData apvScenesData;

	[Token(Token = "0x1700011A")]
	[Obsolete("No longer used as Shader Prefiltering automatically strips out unused LOD Crossfade variants. Please use the LOD Crossfade setting in the URP Asset to disable the feature if not used. #from(2023.1)")]
	public bool stripUnusedLODCrossFadeVariants
	{
		[Token(Token = "0x600045F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	protected override List<IRenderPipelineGraphicsSettings> settingsList
	{
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x2C34070", Offset = "0x2C32670", VA = "0x182C34070", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011C")]
	[Obsolete("This property is obsolete. Use RenderingLayerMask API and Tags & Layers project settings instead. #from(2022.2) #breackingFrom(2023.1)", true)]
	public string[] prefixedLightLayerNames
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x2C34030", Offset = "0x2C32630", VA = "0x182C34030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011D")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2022.2)")]
	public string[] lightLayerNames
	{
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x2C33FF0", Offset = "0x2C325F0", VA = "0x182C33FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x2C33D50", Offset = "0x2C32350", VA = "0x182C33D50")]
	internal bool IsAtLastVersion()
	{
		return default(bool);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x2C33DF0", Offset = "0x2C323F0", VA = "0x182C33DF0", Slot = "9")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	internal static VolumeProfile GetOrCreateDefaultVolumeProfile(VolumeProfile defaultVolumeProfile)
	{
		return null;
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x2C33D60", Offset = "0x2C32360", VA = "0x182C33D60")]
	internal void ResetRenderingLayerNames()
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x2C33CB0", Offset = "0x2C322B0", VA = "0x182C33CB0")]
	internal ProbeVolumeSceneData GetOrCreateAPVSceneData()
	{
		return null;
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x2C33E70", Offset = "0x2C32470", VA = "0x182C33E70")]
	public UniversalRenderPipelineGlobalSettings()
	{
	}
}
