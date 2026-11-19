// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000009")]
public class DebugDisplayGPUResidentDrawer : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery
{
	[Token(Token = "0x200000A")]
	private static class Strings
	{
		[Token(Token = "0x4000015")]
		public const string drawerSettingsContainerName = "GPU Resident Drawer Settings";

		[Token(Token = "0x4000016")]
		[FieldOffset(Offset = "0x0")]
		public static readonly DebugUI.Widget.NameAndTooltip displayBatcherStats;

		[Token(Token = "0x4000017")]
		public const string occlusionCullingTitle = "Occlusion Culling";

		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x10")]
		public static readonly DebugUI.Widget.NameAndTooltip occlusionTestOverlayEnable;

		[Token(Token = "0x4000019")]
		[FieldOffset(Offset = "0x20")]
		public static readonly DebugUI.Widget.NameAndTooltip occlusionTestOverlayCountVisible;

		[Token(Token = "0x400001A")]
		[FieldOffset(Offset = "0x30")]
		public static readonly DebugUI.Widget.NameAndTooltip overrideOcclusionTestToAlwaysPass;

		[Token(Token = "0x400001B")]
		[FieldOffset(Offset = "0x40")]
		public static readonly DebugUI.Widget.NameAndTooltip occluderContextStats;

		[Token(Token = "0x400001C")]
		[FieldOffset(Offset = "0x50")]
		public static readonly DebugUI.Widget.NameAndTooltip occluderDebugViewEnable;

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x60")]
		public static readonly DebugUI.Widget.NameAndTooltip occluderDebugViewIndex;

		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x70")]
		public static readonly DebugUI.Widget.NameAndTooltip occluderDebugViewRangeMin;

		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x80")]
		public static readonly DebugUI.Widget.NameAndTooltip occluderDebugViewRangeMax;
	}

	[Token(Token = "0x200000B")]
	[DisplayInfo(name = "Rendering", order = 5)]
	private class SettingsPanel : DebugDisplaySettingsPanel
	{
		[Token(Token = "0x1700000C")]
		public override DebugUI.Flags Flags
		{
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x65B4820", Offset = "0x65B3820", VA = "0x65B4820", Slot = "10")]
			get
			{
				return default(DebugUI.Flags);
			}
		}

		[Token(Token = "0x600003B")]
		[Address(RVA = "0x65B3210", Offset = "0x65B2210", VA = "0x65B3210")]
		public SettingsPanel(DebugDisplayGPUResidentDrawer data)
		{
		}

		[Token(Token = "0x600003C")]
		[Address(RVA = "0x65B4E90", Offset = "0x65B3E90", VA = "0x65B4E90")]
		private void AddInstanceCullingStatsWidget(DebugDisplayGPUResidentDrawer data)
		{
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x65B4840", Offset = "0x65B3840", VA = "0x65B4840")]
		private void AddOcclusionContextStatsWidget(DebugDisplayGPUResidentDrawer data)
		{
		}
	}

	[Token(Token = "0x400000C")]
	private const string k_FormatString = "{0}";

	[Token(Token = "0x400000D")]
	private const float k_RefreshRate = 0.2f;

	[Token(Token = "0x400000E")]
	private const int k_MaxViewCount = 32;

	[Token(Token = "0x400000F")]
	private const int k_MaxOcclusionPassCount = 32;

	[Token(Token = "0x4000010")]
	private const int k_MaxContextCount = 16;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x10")]
	public bool occluderDebugViewEnable;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x11")]
	internal bool occluderContextStats;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x14")]
	internal Vector2 occluderDebugViewRange;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x1C")]
	internal int occluderDebugViewIndex;

	[Token(Token = "0x17000005")]
	private bool displayBatcherStats
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x65B12C0", Offset = "0x65B02C0", VA = "0x65B12C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x65B1380", Offset = "0x65B0380", VA = "0x65B1380")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal bool occlusionTestOverlayEnable
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x65B14F0", Offset = "0x65B04F0", VA = "0x65B14F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x65B1550", Offset = "0x65B0550", VA = "0x65B1550")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	private bool occlusionTestOverlayCountVisible
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x65B15B0", Offset = "0x65B05B0", VA = "0x65B15B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x65B1610", Offset = "0x65B0610", VA = "0x65B1610")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	private bool overrideOcclusionTestToAlwaysPass
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x65B1670", Offset = "0x65B0670", VA = "0x65B1670")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x65B16D0", Offset = "0x65B06D0", VA = "0x65B16D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x65B3130", Offset = "0x65B2130", VA = "0x65B3130", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x65B3190", Offset = "0x65B2190", VA = "0x65B3190", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000B")]
	public bool IsLightingActive
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x65B31A0", Offset = "0x65B21A0", VA = "0x65B31A0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x65B13E0", Offset = "0x65B03E0", VA = "0x65B13E0")]
	internal bool GetOccluderViewInstanceID(out int viewInstanceID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x65B1730", Offset = "0x65B0730", VA = "0x65B1730")]
	private static InstanceCullerViewStats GetInstanceCullerViewStats(int viewIndex)
	{
		return default(InstanceCullerViewStats);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x65B1830", Offset = "0x65B0830", VA = "0x65B1830")]
	private static InstanceOcclusionEventStats GetInstanceOcclusionEventStats(int passIndex)
	{
		return default(InstanceOcclusionEventStats);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x65B1950", Offset = "0x65B0950", VA = "0x65B1950")]
	private static DebugOccluderStats GetOccluderStats(int occluderIndex)
	{
		return default(DebugOccluderStats);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x65B1A40", Offset = "0x65B0A40", VA = "0x65B1A40")]
	private static int GetOcclusionContextsCounts()
	{
		return default(int);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x65B1AE0", Offset = "0x65B0AE0", VA = "0x65B1AE0")]
	private static int GetInstanceCullerViewCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x65B1B80", Offset = "0x65B0B80", VA = "0x65B1B80")]
	private static int GetInstanceOcclusionEventCount()
	{
		return default(int);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x65B1C20", Offset = "0x65B0C20", VA = "0x65B1C20")]
	private static DebugUI.Table.Row AddInstanceCullerViewDataRow(int viewIndex)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x65B2280", Offset = "0x65B1280", VA = "0x65B2280")]
	private static object OccluderVersionString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x65B22F0", Offset = "0x65B12F0", VA = "0x65B22F0")]
	private static object OcclusionTestString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x65B2360", Offset = "0x65B1360", VA = "0x65B2360")]
	private static object VisibleInstancesString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x65B23C0", Offset = "0x65B13C0", VA = "0x65B23C0")]
	private static object CulledInstancesString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x65B2420", Offset = "0x65B1420", VA = "0x65B2420")]
	private static object VisiblePrimitivesString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x65B2480", Offset = "0x65B1480", VA = "0x65B2480")]
	private static object CulledPrimitivesString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x65B24E0", Offset = "0x65B14E0", VA = "0x65B24E0")]
	private static DebugUI.Table.Row AddInstanceOcclusionPassDataRow(int eventIndex)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x65B2D60", Offset = "0x65B1D60", VA = "0x65B2D60")]
	private static DebugUI.Table.Row AddOcclusionContextDataRow(int index)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x65B31B0", Offset = "0x65B21B0", VA = "0x65B31B0", Slot = "9")]
	public bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x65B31C0", Offset = "0x65B21C0", VA = "0x65B31C0", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x65B43A0", Offset = "0x65B33A0", VA = "0x65B43A0")]
	public DebugDisplayGPUResidentDrawer()
	{
	}
}
