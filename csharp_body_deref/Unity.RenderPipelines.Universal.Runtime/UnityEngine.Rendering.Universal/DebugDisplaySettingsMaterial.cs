// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C14CA0", Offset = "0x2C132A0", VA = "0x182C14CA0")]
		internal static DebugUI.Widget CreateMaterialOverride(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000136")]
		[Address(RVA = "0x2C18C50", Offset = "0x2C17250", VA = "0x182C18C50")]
		internal static DebugUI.Widget CreateVertexAttribute(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000137")]
		[Address(RVA = "0x2C14F20", Offset = "0x2C13520", VA = "0x182C14F20")]
		internal static DebugUI.Widget CreateMaterialValidationMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000138")]
		[Address(RVA = "0x2C18210", Offset = "0x2C16810", VA = "0x182C18210")]
		internal static DebugUI.Widget CreateRenderingLayersSelectedLight(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000139")]
		[Address(RVA = "0x2C183C0", Offset = "0x2C169C0", VA = "0x182C183C0")]
		internal static DebugUI.Widget CreateSelectedLightShadowLayerMask(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013A")]
		[Address(RVA = "0x2C139A0", Offset = "0x2C11FA0", VA = "0x182C139A0")]
		internal static DebugUI.RenderingLayerField CreateFilterRenderingLayerMasks(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013B")]
		[Address(RVA = "0x2C13460", Offset = "0x2C11A60", VA = "0x182C13460")]
		internal static DebugUI.Widget CreateAlbedoPreset(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013C")]
		[Address(RVA = "0x2C12D00", Offset = "0x2C11300", VA = "0x182C12D00")]
		internal static DebugUI.Widget CreateAlbedoCustomColor(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013D")]
		[Address(RVA = "0x2C132B0", Offset = "0x2C118B0", VA = "0x182C132B0")]
		internal static DebugUI.Widget CreateAlbedoMinLuminance(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013E")]
		[Address(RVA = "0x2C13100", Offset = "0x2C11700", VA = "0x182C13100")]
		internal static DebugUI.Widget CreateAlbedoMaxLuminance(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x600013F")]
		[Address(RVA = "0x2C12F00", Offset = "0x2C11500", VA = "0x182C12F00")]
		internal static DebugUI.Widget CreateAlbedoHueTolerance(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000140")]
		[Address(RVA = "0x2C137A0", Offset = "0x2C11DA0", VA = "0x182C137A0")]
		internal static DebugUI.Widget CreateAlbedoSaturationTolerance(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000141")]
		[Address(RVA = "0x2C157F0", Offset = "0x2C13DF0", VA = "0x182C157F0")]
		internal static DebugUI.Widget CreateMetallicMinValue(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000142")]
		[Address(RVA = "0x2C15640", Offset = "0x2C13C40", VA = "0x182C15640")]
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
		[Address(RVA = "0x2C09390", Offset = "0x2C07990", VA = "0x182C09390")]
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
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(AlbedoDebugValidationPreset);
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x2C00790", Offset = "0x2BFED90", VA = "0x182C00790")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public float albedoMinLuminance
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0xE8F460", Offset = "0xE8DA60", VA = "0x180E8F460")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x2B5B5F0", Offset = "0x2B59BF0", VA = "0x182B5B5F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public float albedoMaxLuminance
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x584280", Offset = "0x582880", VA = "0x180584280")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x5842A0", Offset = "0x5828A0", VA = "0x1805842A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public float albedoHueTolerance
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x2C00740", Offset = "0x2BFED40", VA = "0x182C00740")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x18A4270", Offset = "0x18A2870", VA = "0x1818A4270")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public float albedoSaturationTolerance
	{
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x2C00760", Offset = "0x2BFED60", VA = "0x182C00760")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x584B70", Offset = "0x583170", VA = "0x180584B70")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public Color albedoCompareColor
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x20B97A0", Offset = "0x20B7DA0", VA = "0x1820B97A0")]
		[CompilerGenerated]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x2C00780", Offset = "0x2BFED80", VA = "0x182C00780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public float metallicMinValue
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x1ED2DD0", Offset = "0x1ED13D0", VA = "0x181ED2DD0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x1ED2F20", Offset = "0x1ED1520", VA = "0x181ED2F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public float metallicMaxValue
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0xE8F6E0", Offset = "0xE8DCE0", VA = "0x180E8F6E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000121")]
		[Address(RVA = "0xE8F730", Offset = "0xE8DD30", VA = "0x180E8F730")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public bool renderingLayersSelectedLight
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x1CC5A60", Offset = "0x1CC4060", VA = "0x181CC5A60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x1CC5C30", Offset = "0x1CC4230", VA = "0x181CC5C30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public bool selectedLightShadowLayerMask
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x12B3A90", Offset = "0x12B2090", VA = "0x1812B3A90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x2C00800", Offset = "0x2BFEE00", VA = "0x182C00800")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public uint renderingLayerMask
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		[CompilerGenerated]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public DebugMaterialValidationMode materialValidationMode
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		[CompilerGenerated]
		get
		{
			return default(DebugMaterialValidationMode);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public DebugMaterialMode materialDebugMode
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		[CompilerGenerated]
		get
		{
			return default(DebugMaterialMode);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public DebugVertexAttributeMode vertexAttributeDebugMode
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		[CompilerGenerated]
		get
		{
			return default(DebugVertexAttributeMode);
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x2C00700", Offset = "0x2BFED00", VA = "0x182C00700", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000089")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x2C00720", Offset = "0x2BFED20", VA = "0x182C00720", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008A")]
	public bool IsLightingActive
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x2C00720", Offset = "0x2BFED20", VA = "0x182C00720", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x1A5F210", Offset = "0x1A5D810", VA = "0x181A5F210")]
	public uint GetDebugLightLayersMask()
	{
		return default(uint);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x2BFFA10", Offset = "0x2BFE010", VA = "0x182BFFA10", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x2BFFA70", Offset = "0x2BFE070", VA = "0x182BFFA70")]
	public DebugDisplaySettingsMaterial()
	{
	}
}
