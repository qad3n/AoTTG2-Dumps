// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200004A")]
public class DebugDisplaySettingsRendering : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery
{
	[Token(Token = "0x200004B")]
	public enum TaaDebugMode
	{
		[Token(Token = "0x400017B")]
		None,
		[Token(Token = "0x400017C")]
		ShowRawFrame,
		[Token(Token = "0x400017D")]
		ShowRawFrameNoJitter,
		[Token(Token = "0x400017E")]
		ShowClampedHistory
	}

	[Token(Token = "0x200004C")]
	private static class Strings
	{
		[Token(Token = "0x400017F")]
		public const string RangeValidationSettingsContainerName = "Pixel Range Settings";

		[Token(Token = "0x4000180")]
		[FieldOffset(Offset = "0x0")]
		public static readonly DebugUI.Widget.NameAndTooltip MapOverlays;

		[Token(Token = "0x4000181")]
		[FieldOffset(Offset = "0x10")]
		public static readonly DebugUI.Widget.NameAndTooltip StpDebugViews;

		[Token(Token = "0x4000182")]
		[FieldOffset(Offset = "0x20")]
		public static readonly DebugUI.Widget.NameAndTooltip MapSize;

		[Token(Token = "0x4000183")]
		[FieldOffset(Offset = "0x30")]
		public static readonly DebugUI.Widget.NameAndTooltip AdditionalWireframeModes;

		[Token(Token = "0x4000184")]
		[FieldOffset(Offset = "0x40")]
		public static readonly DebugUI.Widget.NameAndTooltip WireframeNotSupportedWarning;

		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0x50")]
		public static readonly DebugUI.Widget.NameAndTooltip OverdrawMode;

		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x60")]
		public static readonly DebugUI.Widget.NameAndTooltip MaxOverdrawCount;

		[Token(Token = "0x4000187")]
		[FieldOffset(Offset = "0x70")]
		public static readonly DebugUI.Widget.NameAndTooltip MipMapDisableMipCaching;

		[Token(Token = "0x4000188")]
		[FieldOffset(Offset = "0x80")]
		public static readonly DebugUI.Widget.NameAndTooltip MipMapDebugView;

		[Token(Token = "0x4000189")]
		[FieldOffset(Offset = "0x90")]
		public static readonly DebugUI.Widget.NameAndTooltip MipMapDebugOpacity;

		[Token(Token = "0x400018A")]
		[FieldOffset(Offset = "0xA0")]
		public static readonly DebugUI.Widget.NameAndTooltip MipMapMaterialTextureSlot;

		[Token(Token = "0x400018B")]
		[FieldOffset(Offset = "0xB0")]
		public static readonly DebugUI.Widget.NameAndTooltip MipMapTerrainTexture;

		[Token(Token = "0x400018C")]
		[FieldOffset(Offset = "0xC0")]
		public static readonly DebugUI.Widget.NameAndTooltip MipMapDisplayStatusCodes;

		[Token(Token = "0x400018D")]
		[FieldOffset(Offset = "0xD0")]
		public static readonly DebugUI.Widget.NameAndTooltip MipMapActivityTimespan;

		[Token(Token = "0x400018E")]
		[FieldOffset(Offset = "0xE0")]
		public static readonly DebugUI.Widget.NameAndTooltip MipMapCombinePerMaterial;

		[Token(Token = "0x400018F")]
		[FieldOffset(Offset = "0xF0")]
		public static readonly DebugUI.Widget.NameAndTooltip PostProcessing;

		[Token(Token = "0x4000190")]
		[FieldOffset(Offset = "0x100")]
		public static readonly DebugUI.Widget.NameAndTooltip MSAA;

		[Token(Token = "0x4000191")]
		[FieldOffset(Offset = "0x110")]
		public static readonly DebugUI.Widget.NameAndTooltip HDR;

		[Token(Token = "0x4000192")]
		[FieldOffset(Offset = "0x120")]
		public static readonly DebugUI.Widget.NameAndTooltip TaaDebugMode;

		[Token(Token = "0x4000193")]
		[FieldOffset(Offset = "0x130")]
		public static readonly DebugUI.Widget.NameAndTooltip PixelValidationMode;

		[Token(Token = "0x4000194")]
		[FieldOffset(Offset = "0x140")]
		public static readonly DebugUI.Widget.NameAndTooltip Channels;

		[Token(Token = "0x4000195")]
		[FieldOffset(Offset = "0x150")]
		public static readonly DebugUI.Widget.NameAndTooltip ValueRangeMin;

		[Token(Token = "0x4000196")]
		[FieldOffset(Offset = "0x160")]
		public static readonly DebugUI.Widget.NameAndTooltip ValueRangeMax;
	}

	[Token(Token = "0x200004D")]
	internal static class WidgetFactory
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x2C14A20", Offset = "0x2C13020", VA = "0x182C14A20")]
		internal static DebugUI.Widget CreateMapOverlays(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x2C185B0", Offset = "0x2C16BB0", VA = "0x182C185B0")]
		internal static DebugUI.Widget CreateStpDebugViews(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x2C14690", Offset = "0x2C12C90", VA = "0x182C14690")]
		internal static DebugUI.Widget CreateMapOverlaySize(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x2C129C0", Offset = "0x2C10FC0", VA = "0x182C129C0")]
		internal static DebugUI.Widget CreateAdditionalWireframeShaderViews(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x2C18ED0", Offset = "0x2C174D0", VA = "0x182C18ED0")]
		internal static DebugUI.Widget CreateWireframeNotSupportedWarning(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x2C173E0", Offset = "0x2C159E0", VA = "0x182C173E0")]
		internal static DebugUI.Widget CreateOverdrawMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x2C15260", Offset = "0x2C13860", VA = "0x182C15260")]
		internal static DebugUI.Widget CreateMaxOverdrawCount(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x2C16C30", Offset = "0x2C15230", VA = "0x182C16C30")]
		internal static DebugUI.Widget CreateMipMapDebugWidget(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x2C16F70", Offset = "0x2C15570", VA = "0x182C16F70")]
		internal static DebugUI.Widget CreateMipMapMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x2C15D10", Offset = "0x2C14310", VA = "0x182C15D10")]
		internal static DebugUI.Widget CreateMipMapDebugSettings(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x2C169B0", Offset = "0x2C14FB0", VA = "0x182C169B0")]
		internal static DebugUI.Widget CreateMipMapDebugSlotSelector(SettingsPanel panel, Func<bool> hiddenCB, GUIContent[] texSlotStrings, int[] texSlotValues)
		{
			return null;
		}

		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x2C159A0", Offset = "0x2C13FA0", VA = "0x182C159A0")]
		internal static DebugUI.Widget CreateMipMapDebugCooldownSlider(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x2C171F0", Offset = "0x2C157F0", VA = "0x182C171F0")]
		internal static DebugUI.Widget CreateMipMapShowStatusCodeToggle(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x2C17F90", Offset = "0x2C16590", VA = "0x182C17F90")]
		internal static DebugUI.Widget CreatePostProcessing(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x2C144E0", Offset = "0x2C12AE0", VA = "0x182C144E0")]
		internal static DebugUI.Widget CreateMSAA(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x2C13EC0", Offset = "0x2C124C0", VA = "0x182C13EC0")]
		internal static DebugUI.Widget CreateHDR(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x2C18900", Offset = "0x2C16F00", VA = "0x182C18900")]
		internal static DebugUI.Widget CreateTaaDebugMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x2C178E0", Offset = "0x2C15EE0", VA = "0x182C178E0")]
		internal static DebugUI.Widget CreatePixelValidationMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x2C17660", Offset = "0x2C15C60", VA = "0x182C17660")]
		internal static DebugUI.Widget CreatePixelValidationChannels(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x2C17DE0", Offset = "0x2C163E0", VA = "0x182C17DE0")]
		internal static DebugUI.Widget CreatePixelValueRangeMin(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x2C17C30", Offset = "0x2C16230", VA = "0x182C17C30")]
		internal static DebugUI.Widget CreatePixelValueRangeMax(SettingsPanel panel)
		{
			return null;
		}
	}

	[Token(Token = "0x2000063")]
	[DisplayInfo(name = "Rendering", order = 1)]
	internal class SettingsPanel : DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>
	{
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x2C0A800", Offset = "0x2C08E00", VA = "0x182C0A800")]
		public SettingsPanel(DebugDisplaySettingsRendering data)
		{
		}
	}

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x10")]
	private DebugWireframeMode m_WireframeMode;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x14")]
	private bool m_Overdraw;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x18")]
	private DebugOverdrawMode m_OverdrawMode;

	[Token(Token = "0x1700008B")]
	public DebugWireframeMode wireframeMode
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(DebugWireframeMode);
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x2C00B00", Offset = "0x2BFF100", VA = "0x182C00B00")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	[Obsolete("overdraw has been deprecated. Use overdrawMode instead. #from(2022.2) #breakingFrom(2023.1)", true)]
	public bool overdraw
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x2C00AC0", Offset = "0x2BFF0C0", VA = "0x182C00AC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public DebugOverdrawMode overdrawMode
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(DebugOverdrawMode);
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x2C00A80", Offset = "0x2BFF080", VA = "0x182C00A80")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public int maxOverdrawCount
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600018C")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public DebugFullScreenMode fullScreenDebugMode
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(DebugFullScreenMode);
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000090")]
	internal int stpDebugViewIndex
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public int fullScreenDebugModeOutputSizeScreenPercent
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	internal DebugSceneOverrideMode sceneOverrideMode
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		[CompilerGenerated]
		get
		{
			return default(DebugSceneOverrideMode);
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public DebugMipInfoMode mipInfoMode
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		[CompilerGenerated]
		get
		{
			return default(DebugMipInfoMode);
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public bool mipDebugStatusShowCode
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0xAB9F80", Offset = "0xAB8580", VA = "0x180AB9F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public DebugMipMapStatusMode mipDebugStatusMode
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		[CompilerGenerated]
		get
		{
			return default(DebugMipMapStatusMode);
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public float mipDebugOpacity
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x1ED2DD0", Offset = "0x1ED13D0", VA = "0x181ED2DD0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x1ED2F20", Offset = "0x1ED1520", VA = "0x181ED2F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public float mipDebugRecentUpdateCooldown
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0xE8F6E0", Offset = "0xE8DCE0", VA = "0x180E8F6E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0xE8F730", Offset = "0xE8DD30", VA = "0x180E8F730")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public int mipDebugMaterialTextureSlot
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x58AA10", Offset = "0x589010", VA = "0x18058AA10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public bool showInfoForAllSlots
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	internal bool canAggregateData
	{
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x2C00A30", Offset = "0x2BFF030", VA = "0x182C00A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009B")]
	public DebugMipMapModeTerrainTexture mipDebugTerrainTexture
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		[CompilerGenerated]
		get
		{
			return default(DebugMipMapModeTerrainTexture);
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x58A9A0", Offset = "0x588FA0", VA = "0x18058A9A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public DebugPostProcessingMode postProcessingDebugMode
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		[CompilerGenerated]
		get
		{
			return default(DebugPostProcessingMode);
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x58A8D0", Offset = "0x588ED0", VA = "0x18058A8D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public bool enableMsaa
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x2C00A50", Offset = "0x2BFF050", VA = "0x182C00A50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x2C00A70", Offset = "0x2BFF070", VA = "0x182C00A70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public bool enableHDR
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x27363B0", Offset = "0x27349B0", VA = "0x1827363B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x2C00A60", Offset = "0x2BFF060", VA = "0x182C00A60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public TaaDebugMode taaDebugMode
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		[CompilerGenerated]
		get
		{
			return default(TaaDebugMode);
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public DebugValidationMode validationMode
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		[CompilerGenerated]
		get
		{
			return default(DebugValidationMode);
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public PixelValidationChannels validationChannels
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		[CompilerGenerated]
		get
		{
			return default(PixelValidationChannels);
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public float validationRangeMin
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0xCDE8A0", Offset = "0xCDCEA0", VA = "0x180CDE8A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0xCDEB40", Offset = "0xCDD140", VA = "0x180CDEB40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public float validationRangeMax
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x12BF160", Offset = "0x12BD760", VA = "0x1812BF160")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x12BF410", Offset = "0x12BDA10", VA = "0x1812BF410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x2C009B0", Offset = "0x2BFEFB0", VA = "0x182C009B0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A5")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x2C00A10", Offset = "0x2BFF010", VA = "0x182C00A10", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	public bool IsLightingActive
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x2C009F0", Offset = "0x2BFEFF0", VA = "0x182C009F0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x2C00930", Offset = "0x2BFEF30", VA = "0x182C00930")]
	private void UpdateDebugSceneOverrideMode()
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x2C00810", Offset = "0x2BFEE10", VA = "0x182C00810", Slot = "9")]
	public bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x2C008D0", Offset = "0x2BFEED0", VA = "0x182C008D0", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x2C00970", Offset = "0x2BFEF70", VA = "0x182C00970")]
	public DebugDisplaySettingsRendering()
	{
	}
}
