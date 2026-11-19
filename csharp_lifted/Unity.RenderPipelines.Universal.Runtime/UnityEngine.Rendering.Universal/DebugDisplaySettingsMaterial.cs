// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000033")]
public class DebugDisplaySettingsMaterial : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery
{
	[Token(Token = "0x2000034")]
	public enum AlbedoDebugValidationPreset
	{
		[Token(Token = "0x4000127")]
		DefaultLuminance,
		[Token(Token = "0x4000128")]
		BlackAcrylicPaint,
		[Token(Token = "0x4000129")]
		DarkSoil,
		[Token(Token = "0x400012A")]
		WornAsphalt,
		[Token(Token = "0x400012B")]
		DryClaySoil,
		[Token(Token = "0x400012C")]
		GreenGrass,
		[Token(Token = "0x400012D")]
		OldConcrete,
		[Token(Token = "0x400012E")]
		RedClayTile,
		[Token(Token = "0x400012F")]
		DrySand,
		[Token(Token = "0x4000130")]
		NewConcrete,
		[Token(Token = "0x4000131")]
		WhiteAcrylicPaint,
		[Token(Token = "0x4000132")]
		FreshSnow,
		[Token(Token = "0x4000133")]
		BlueSky,
		[Token(Token = "0x4000134")]
		Foliage,
		[Token(Token = "0x4000135")]
		Custom
	}

	[Token(Token = "0x2000035")]
	private struct AlbedoDebugValidationPresetData
	{
		[Token(Token = "0x4000136")]
		[FieldOffset(Offset = "0x0")]
		public string name;

		[Token(Token = "0x4000137")]
		[FieldOffset(Offset = "0x8")]
		public Color color;

		[Token(Token = "0x4000138")]
		[FieldOffset(Offset = "0x18")]
		public float minLuminance;

		[Token(Token = "0x4000139")]
		[FieldOffset(Offset = "0x1C")]
		public float maxLuminance;
	}

	[Token(Token = "0x2000036")]
	private static class Strings
	{
		[Token(Token = "0x400013A")]
		public const string AlbedoSettingsContainerName = "Albedo Settings";

		[Token(Token = "0x400013B")]
		public const string MetallicSettingsContainerName = "Metallic Settings";

		[Token(Token = "0x400013C")]
		public const string RenderingLayerMasksSettingsContainerName = "Rendering Layer Masks Settings";

		[Token(Token = "0x400013D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly DebugUI.Widget.NameAndTooltip MaterialOverride;

		[Token(Token = "0x400013E")]
		[FieldOffset(Offset = "0x10")]
		public static readonly DebugUI.Widget.NameAndTooltip VertexAttribute;

		[Token(Token = "0x400013F")]
		[FieldOffset(Offset = "0x20")]
		public static readonly DebugUI.Widget.NameAndTooltip MaterialValidationMode;

		[Token(Token = "0x4000140")]
		[FieldOffset(Offset = "0x30")]
		public static readonly DebugUI.Widget.NameAndTooltip RenderingLayersSelectedLight;

		[Token(Token = "0x4000141")]
		[FieldOffset(Offset = "0x40")]
		public static readonly DebugUI.Widget.NameAndTooltip SelectedLightShadowLayerMask;

		[Token(Token = "0x4000142")]
		[FieldOffset(Offset = "0x50")]
		public static readonly DebugUI.Widget.NameAndTooltip FilterRenderingLayerMask;

		[Token(Token = "0x4000143")]
		[FieldOffset(Offset = "0x60")]
		public static readonly DebugUI.Widget.NameAndTooltip ValidationPreset;

		[Token(Token = "0x4000144")]
		[FieldOffset(Offset = "0x70")]
		public static readonly DebugUI.Widget.NameAndTooltip AlbedoCustomColor;

		[Token(Token = "0x4000145")]
		[FieldOffset(Offset = "0x80")]
		public static readonly DebugUI.Widget.NameAndTooltip AlbedoMinLuminance;

		[Token(Token = "0x4000146")]
		[FieldOffset(Offset = "0x90")]
		public static readonly DebugUI.Widget.NameAndTooltip AlbedoMaxLuminance;

		[Token(Token = "0x4000147")]
		[FieldOffset(Offset = "0xA0")]
		public static readonly DebugUI.Widget.NameAndTooltip AlbedoHueTolerance;

		[Token(Token = "0x4000148")]
		[FieldOffset(Offset = "0xB0")]
		public static readonly DebugUI.Widget.NameAndTooltip AlbedoSaturationTolerance;

		[Token(Token = "0x4000149")]
		[FieldOffset(Offset = "0xC0")]
		public static readonly DebugUI.Widget.NameAndTooltip MetallicMinValue;

		[Token(Token = "0x400014A")]
		[FieldOffset(Offset = "0xD0")]
		public static readonly DebugUI.Widget.NameAndTooltip MetallicMaxValue;
	}

	[Token(Token = "0x2000037")]
	internal static class WidgetFactory
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x65FCDD0", Offset = "0x65FBDD0", VA = "0x65FCDD0")]
		internal static DebugUI.Widget CreateMaterialOverride(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000136")]
		[Address(RVA = "0x65FD060", Offset = "0x65FC060", VA = "0x65FD060")]
		internal static DebugUI.Widget CreateVertexAttribute(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000137")]
		[Address(RVA = "0x65FD2F0", Offset = "0x65FC2F0", VA = "0x65FD2F0")]
		internal static DebugUI.Widget CreateMaterialValidationMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000138")]
		[Address(RVA = "0x65FD650", Offset = "0x65FC650", VA = "0x65FD650")]
		internal static DebugUI.Widget CreateRenderingLayersSelectedLight(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000139")]
		[Address(RVA = "0x65FD800", Offset = "0x65FC800", VA = "0x65FD800")]
		internal static DebugUI.Widget CreateSelectedLightShadowLayerMask(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013A")]
		[Address(RVA = "0x65FDA00", Offset = "0x65FCA00", VA = "0x65FDA00")]
		internal static DebugUI.RenderingLayerField CreateFilterRenderingLayerMasks(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013B")]
		[Address(RVA = "0x65FDCB0", Offset = "0x65FCCB0", VA = "0x65FDCB0")]
		internal static DebugUI.Widget CreateAlbedoPreset(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013C")]
		[Address(RVA = "0x65FE010", Offset = "0x65FD010", VA = "0x65FE010")]
		internal static DebugUI.Widget CreateAlbedoCustomColor(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013D")]
		[Address(RVA = "0x65FE210", Offset = "0x65FD210", VA = "0x65FE210")]
		internal static DebugUI.Widget CreateAlbedoMinLuminance(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013E")]
		[Address(RVA = "0x65FE3D0", Offset = "0x65FD3D0", VA = "0x65FE3D0")]
		internal static DebugUI.Widget CreateAlbedoMaxLuminance(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013F")]
		[Address(RVA = "0x65FE590", Offset = "0x65FD590", VA = "0x65FE590")]
		internal static DebugUI.Widget CreateAlbedoHueTolerance(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000140")]
		[Address(RVA = "0x65FE7A0", Offset = "0x65FD7A0", VA = "0x65FE7A0")]
		internal static DebugUI.Widget CreateAlbedoSaturationTolerance(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000141")]
		[Address(RVA = "0x65FE9B0", Offset = "0x65FD9B0", VA = "0x65FE9B0")]
		internal static DebugUI.Widget CreateMetallicMinValue(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000142")]
		[Address(RVA = "0x65FEB70", Offset = "0x65FDB70", VA = "0x65FEB70")]
		internal static DebugUI.Widget CreateMetallicMaxValue(SettingsPanel panel)
		{
			return null;
		}
	}

	[Token(Token = "0x2000047")]
	[DisplayInfo(name = "Material", order = 2)]
	internal class SettingsPanel : DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x65FB570", Offset = "0x65FA570", VA = "0x65FB570")]
		public SettingsPanel(DebugDisplaySettingsMaterial data)
		{
		}
	}

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x10")]
	private AlbedoDebugValidationPresetData[] m_AlbedoDebugValidationPresetData;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x18")]
	private AlbedoDebugValidationPreset m_AlbedoValidationPreset;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x24")]
	private float m_AlbedoHueTolerance;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x28")]
	private float m_AlbedoSaturationTolerance;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x50")]
	public Vector4[] debugRenderingLayersColors;

	[Token(Token = "0x1700007A")]
	public AlbedoDebugValidationPreset albedoValidationPreset
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x65FB2A0", Offset = "0x65FA2A0", VA = "0x65FB2A0")]
		get
		{
			return default(AlbedoDebugValidationPreset);
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x65FB2B0", Offset = "0x65FA2B0", VA = "0x65FB2B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public float albedoMinLuminance
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x65FB2F0", Offset = "0x65FA2F0", VA = "0x65FB2F0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x65FB300", Offset = "0x65FA300", VA = "0x65FB300")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public float albedoMaxLuminance
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x65FB310", Offset = "0x65FA310", VA = "0x65FB310")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x65FB320", Offset = "0x65FA320", VA = "0x65FB320")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public float albedoHueTolerance
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x65FB330", Offset = "0x65FA330", VA = "0x65FB330")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x65FB350", Offset = "0x65FA350", VA = "0x65FB350")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public float albedoSaturationTolerance
	{
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x65FB360", Offset = "0x65FA360", VA = "0x65FB360")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x65FB380", Offset = "0x65FA380", VA = "0x65FB380")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public Color albedoCompareColor
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x65FB390", Offset = "0x65FA390", VA = "0x65FB390")]
		[CompilerGenerated]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x65FB3A0", Offset = "0x65FA3A0", VA = "0x65FB3A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public float metallicMinValue
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x65FB3B0", Offset = "0x65FA3B0", VA = "0x65FB3B0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x65FB3C0", Offset = "0x65FA3C0", VA = "0x65FB3C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public float metallicMaxValue
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x65FB3D0", Offset = "0x65FA3D0", VA = "0x65FB3D0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x65FB3E0", Offset = "0x65FA3E0", VA = "0x65FB3E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public bool renderingLayersSelectedLight
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x65FB3F0", Offset = "0x65FA3F0", VA = "0x65FB3F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x65FB400", Offset = "0x65FA400", VA = "0x65FB400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public bool selectedLightShadowLayerMask
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x65FB410", Offset = "0x65FA410", VA = "0x65FB410")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x65FB420", Offset = "0x65FA420", VA = "0x65FB420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public uint renderingLayerMask
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x65FB430", Offset = "0x65FA430", VA = "0x65FB430")]
		[CompilerGenerated]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x65FB440", Offset = "0x65FA440", VA = "0x65FB440")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public DebugMaterialValidationMode materialValidationMode
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x65FB460", Offset = "0x65FA460", VA = "0x65FB460")]
		[CompilerGenerated]
		get
		{
			return default(DebugMaterialValidationMode);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x65FB470", Offset = "0x65FA470", VA = "0x65FB470")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public DebugMaterialMode materialDebugMode
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x65FB480", Offset = "0x65FA480", VA = "0x65FB480")]
		[CompilerGenerated]
		get
		{
			return default(DebugMaterialMode);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x65FB490", Offset = "0x65FA490", VA = "0x65FB490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public DebugVertexAttributeMode vertexAttributeDebugMode
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x65FB4A0", Offset = "0x65FA4A0", VA = "0x65FB4A0")]
		[CompilerGenerated]
		get
		{
			return default(DebugVertexAttributeMode);
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x65FB4B0", Offset = "0x65FA4B0", VA = "0x65FB4B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x65FB4C0", Offset = "0x65FA4C0", VA = "0x65FB4C0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000089")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x65FB4E0", Offset = "0x65FA4E0", VA = "0x65FB4E0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008A")]
	public bool IsLightingActive
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x65FB500", Offset = "0x65FA500", VA = "0x65FB500", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x65FB450", Offset = "0x65FA450", VA = "0x65FB450")]
	public uint GetDebugLightLayersMask()
	{
		return default(uint);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x65FB520", Offset = "0x65FA520", VA = "0x65FB520", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x65FBB30", Offset = "0x65FAB30", VA = "0x65FBB30")]
	public DebugDisplaySettingsMaterial()
	{
	}
}
