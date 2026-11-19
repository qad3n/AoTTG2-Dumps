// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6601250", Offset = "0x6600250", VA = "0x6601250")]
		internal static DebugUI.Widget CreateMapOverlays(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x66014E0", Offset = "0x66004E0", VA = "0x66014E0")]
		internal static DebugUI.Widget CreateStpDebugViews(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x6601880", Offset = "0x6600880", VA = "0x6601880")]
		internal static DebugUI.Widget CreateMapOverlaySize(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x6601C20", Offset = "0x6600C20", VA = "0x6601C20")]
		internal static DebugUI.Widget CreateAdditionalWireframeShaderViews(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x6601F80", Offset = "0x6600F80", VA = "0x6601F80")]
		internal static DebugUI.Widget CreateWireframeNotSupportedWarning(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x66020D0", Offset = "0x66010D0", VA = "0x66020D0")]
		internal static DebugUI.Widget CreateOverdrawMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x6602360", Offset = "0x6601360", VA = "0x6602360")]
		internal static DebugUI.Widget CreateMaxOverdrawCount(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x6602750", Offset = "0x6601750", VA = "0x6602750")]
		internal static DebugUI.Widget CreateMipMapDebugWidget(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x6602A70", Offset = "0x6601A70", VA = "0x6602A70")]
		internal static DebugUI.Widget CreateMipMapMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x6602D00", Offset = "0x6601D00", VA = "0x6602D00")]
		internal static DebugUI.Widget CreateMipMapDebugSettings(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x6603930", Offset = "0x6602930", VA = "0x6603930")]
		internal static DebugUI.Widget CreateMipMapDebugSlotSelector(SettingsPanel panel, Func<bool> hiddenCB, GUIContent[] texSlotStrings, int[] texSlotValues)
		{
			return null;
		}

		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x6603DC0", Offset = "0x6602DC0", VA = "0x6603DC0")]
		internal static DebugUI.Widget CreateMipMapDebugCooldownSlider(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x6603BD0", Offset = "0x6602BD0", VA = "0x6603BD0")]
		internal static DebugUI.Widget CreateMipMapShowStatusCodeToggle(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x6604160", Offset = "0x6603160", VA = "0x6604160")]
		internal static DebugUI.Widget CreatePostProcessing(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x6604400", Offset = "0x6603400", VA = "0x6604400")]
		internal static DebugUI.Widget CreateMSAA(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x66045B0", Offset = "0x66035B0", VA = "0x66045B0")]
		internal static DebugUI.Widget CreateHDR(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x6604760", Offset = "0x6603760", VA = "0x6604760")]
		internal static DebugUI.Widget CreateTaaDebugMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x6604AD0", Offset = "0x6603AD0", VA = "0x6604AD0")]
		internal static DebugUI.Widget CreatePixelValidationMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x6604E40", Offset = "0x6603E40", VA = "0x6604E40")]
		internal static DebugUI.Widget CreatePixelValidationChannels(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x66050E0", Offset = "0x66040E0", VA = "0x66050E0")]
		internal static DebugUI.Widget CreatePixelValueRangeMin(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x66052A0", Offset = "0x66042A0", VA = "0x66052A0")]
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
		[Address(RVA = "0x6600190", Offset = "0x65FF190", VA = "0x6600190")]
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
		[Address(RVA = "0x65FFCC0", Offset = "0x65FECC0", VA = "0x65FFCC0")]
		get
		{
			return default(DebugWireframeMode);
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x65FFCD0", Offset = "0x65FECD0", VA = "0x65FFCD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	[Obsolete("overdraw has been deprecated. Use overdrawMode instead. #from(2022.2) #breakingFrom(2023.1)", true)]
	public bool overdraw
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x65FFD10", Offset = "0x65FED10", VA = "0x65FFD10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x65FFD20", Offset = "0x65FED20", VA = "0x65FFD20")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public DebugOverdrawMode overdrawMode
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x65FFD50", Offset = "0x65FED50", VA = "0x65FFD50")]
		get
		{
			return default(DebugOverdrawMode);
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x65FFD60", Offset = "0x65FED60", VA = "0x65FFD60")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public int maxOverdrawCount
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x65FFD80", Offset = "0x65FED80", VA = "0x65FFD80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x65FFD90", Offset = "0x65FED90", VA = "0x65FFD90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public DebugFullScreenMode fullScreenDebugMode
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x65FFDA0", Offset = "0x65FEDA0", VA = "0x65FFDA0")]
		[CompilerGenerated]
		get
		{
			return default(DebugFullScreenMode);
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x65FFDB0", Offset = "0x65FEDB0", VA = "0x65FFDB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000090")]
	internal int stpDebugViewIndex
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x65FFDC0", Offset = "0x65FEDC0", VA = "0x65FFDC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x65FFDD0", Offset = "0x65FEDD0", VA = "0x65FFDD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public int fullScreenDebugModeOutputSizeScreenPercent
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x65FFDE0", Offset = "0x65FEDE0", VA = "0x65FFDE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x65FFDF0", Offset = "0x65FEDF0", VA = "0x65FFDF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	internal DebugSceneOverrideMode sceneOverrideMode
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x65FFE00", Offset = "0x65FEE00", VA = "0x65FFE00")]
		[CompilerGenerated]
		get
		{
			return default(DebugSceneOverrideMode);
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x65FFE10", Offset = "0x65FEE10", VA = "0x65FFE10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public DebugMipInfoMode mipInfoMode
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x65FFE20", Offset = "0x65FEE20", VA = "0x65FFE20")]
		[CompilerGenerated]
		get
		{
			return default(DebugMipInfoMode);
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x65FFE30", Offset = "0x65FEE30", VA = "0x65FFE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public bool mipDebugStatusShowCode
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x65FFE40", Offset = "0x65FEE40", VA = "0x65FFE40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x65FFE50", Offset = "0x65FEE50", VA = "0x65FFE50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public DebugMipMapStatusMode mipDebugStatusMode
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x65FFE60", Offset = "0x65FEE60", VA = "0x65FFE60")]
		[CompilerGenerated]
		get
		{
			return default(DebugMipMapStatusMode);
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x65FFE70", Offset = "0x65FEE70", VA = "0x65FFE70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public float mipDebugOpacity
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x65FFE80", Offset = "0x65FEE80", VA = "0x65FFE80")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x65FFE90", Offset = "0x65FEE90", VA = "0x65FFE90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public float mipDebugRecentUpdateCooldown
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x65FFEA0", Offset = "0x65FEEA0", VA = "0x65FFEA0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x65FFEB0", Offset = "0x65FEEB0", VA = "0x65FFEB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public int mipDebugMaterialTextureSlot
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x65FFEC0", Offset = "0x65FEEC0", VA = "0x65FFEC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x65FFED0", Offset = "0x65FEED0", VA = "0x65FFED0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public bool showInfoForAllSlots
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x65FFEE0", Offset = "0x65FEEE0", VA = "0x65FFEE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x65FFEF0", Offset = "0x65FEEF0", VA = "0x65FFEF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	internal bool canAggregateData
	{
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x65FFF00", Offset = "0x65FEF00", VA = "0x65FFF00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009B")]
	public DebugMipMapModeTerrainTexture mipDebugTerrainTexture
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x65FFF10", Offset = "0x65FEF10", VA = "0x65FFF10")]
		[CompilerGenerated]
		get
		{
			return default(DebugMipMapModeTerrainTexture);
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x65FFF20", Offset = "0x65FEF20", VA = "0x65FFF20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public DebugPostProcessingMode postProcessingDebugMode
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x65FFF30", Offset = "0x65FEF30", VA = "0x65FFF30")]
		[CompilerGenerated]
		get
		{
			return default(DebugPostProcessingMode);
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x65FFF40", Offset = "0x65FEF40", VA = "0x65FFF40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public bool enableMsaa
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x65FFF50", Offset = "0x65FEF50", VA = "0x65FFF50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x65FFF60", Offset = "0x65FEF60", VA = "0x65FFF60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public bool enableHDR
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x65FFF70", Offset = "0x65FEF70", VA = "0x65FFF70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x65FFF80", Offset = "0x65FEF80", VA = "0x65FFF80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public TaaDebugMode taaDebugMode
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x65FFF90", Offset = "0x65FEF90", VA = "0x65FFF90")]
		[CompilerGenerated]
		get
		{
			return default(TaaDebugMode);
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x65FFFA0", Offset = "0x65FEFA0", VA = "0x65FFFA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public DebugValidationMode validationMode
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x65FFFB0", Offset = "0x65FEFB0", VA = "0x65FFFB0")]
		[CompilerGenerated]
		get
		{
			return default(DebugValidationMode);
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x65FFFC0", Offset = "0x65FEFC0", VA = "0x65FFFC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public PixelValidationChannels validationChannels
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x65FFFD0", Offset = "0x65FEFD0", VA = "0x65FFFD0")]
		[CompilerGenerated]
		get
		{
			return default(PixelValidationChannels);
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x65FFFE0", Offset = "0x65FEFE0", VA = "0x65FFFE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public float validationRangeMin
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x65FFFF0", Offset = "0x65FEFF0", VA = "0x65FFFF0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x6600000", Offset = "0x65FF000", VA = "0x6600000")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public float validationRangeMax
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x6600010", Offset = "0x65FF010", VA = "0x6600010")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x6600020", Offset = "0x65FF020", VA = "0x6600020")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x6600030", Offset = "0x65FF030", VA = "0x6600030", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A5")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x6600070", Offset = "0x65FF070", VA = "0x6600070", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	public bool IsLightingActive
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x6600090", Offset = "0x65FF090", VA = "0x6600090", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x65FFCF0", Offset = "0x65FECF0", VA = "0x65FFCF0")]
	private void UpdateDebugSceneOverrideMode()
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x66000B0", Offset = "0x65FF0B0", VA = "0x66000B0", Slot = "9")]
	public bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x6600140", Offset = "0x65FF140", VA = "0x6600140", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x6600750", Offset = "0x65FF750", VA = "0x6600750")]
	public DebugDisplaySettingsRendering()
	{
	}
}
