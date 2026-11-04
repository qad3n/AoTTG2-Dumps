// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer
// Update status: NEW in this game update
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
			[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50", Slot = "10")]
			get
			{
				return default(DebugUI.Flags);
			}
		}

		[Token(Token = "0x600003B")]
		[Address(RVA = "0x2BD1F60", Offset = "0x2BD0560", VA = "0x182BD1F60")]
		public SettingsPanel(DebugDisplayGPUResidentDrawer data)
		{
		}

		[Token(Token = "0x600003C")]
		[Address(RVA = "0x2BD0CD0", Offset = "0x2BCF2D0", VA = "0x182BD0CD0")]
		private void AddInstanceCullingStatsWidget(DebugDisplayGPUResidentDrawer data)
		{
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x2BD1B50", Offset = "0x2BD0150", VA = "0x182BD1B50")]
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
		[Address(RVA = "0x2BBFA40", Offset = "0x2BBE040", VA = "0x182BBFA40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2BBFC00", Offset = "0x2BBE200", VA = "0x182BBFC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal bool occlusionTestOverlayEnable
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x2BBFB20", Offset = "0x2BBE120", VA = "0x182BBFB20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x2BBFCC0", Offset = "0x2BBE2C0", VA = "0x182BBFCC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	private bool occlusionTestOverlayCountVisible
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x2BBFAB0", Offset = "0x2BBE0B0", VA = "0x182BBFAB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x2BBFC60", Offset = "0x2BBE260", VA = "0x182BBFC60")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	private bool overrideOcclusionTestToAlwaysPass
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x2BBFB90", Offset = "0x2BBE190", VA = "0x182BBFB90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x2BBFD20", Offset = "0x2BBE320", VA = "0x182BBFD20")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x2BBFA40", Offset = "0x2BBE040", VA = "0x182BBFA40", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000B")]
	public bool IsLightingActive
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2BBF650", Offset = "0x2BBDC50", VA = "0x182BBF650")]
	internal bool GetOccluderViewInstanceID(out int viewInstanceID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2BBF250", Offset = "0x2BBD850", VA = "0x182BBF250")]
	private static InstanceCullerViewStats GetInstanceCullerViewStats(int viewIndex)
	{
		return default(InstanceCullerViewStats);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2BBF430", Offset = "0x2BBDA30", VA = "0x182BBF430")]
	private static InstanceOcclusionEventStats GetInstanceOcclusionEventStats(int passIndex)
	{
		return default(InstanceOcclusionEventStats);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2BBF550", Offset = "0x2BBDB50", VA = "0x182BBF550")]
	private static DebugOccluderStats GetOccluderStats(int occluderIndex)
	{
		return default(DebugOccluderStats);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2BBF780", Offset = "0x2BBDD80", VA = "0x182BBF780")]
	private static int GetOcclusionContextsCounts()
	{
		return default(int);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2BBF1A0", Offset = "0x2BBD7A0", VA = "0x182BBF1A0")]
	private static int GetInstanceCullerViewCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2BBF380", Offset = "0x2BBD980", VA = "0x182BBF380")]
	private static int GetInstanceOcclusionEventCount()
	{
		return default(int);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2BBDEF0", Offset = "0x2BBC4F0", VA = "0x182BBDEF0")]
	private static DebugUI.Table.Row AddInstanceCullerViewDataRow(int viewIndex)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2BBF830", Offset = "0x2BBDE30", VA = "0x182BBF830")]
	private static object OccluderVersionString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2BBF890", Offset = "0x2BBDE90", VA = "0x182BBF890")]
	private static object OcclusionTestString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2BBF960", Offset = "0x2BBDF60", VA = "0x182BBF960")]
	private static object VisibleInstancesString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x2BBF0E0", Offset = "0x2BBD6E0", VA = "0x182BBF0E0")]
	private static object CulledInstancesString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2BBF9C0", Offset = "0x2BBDFC0", VA = "0x182BBF9C0")]
	private static object VisiblePrimitivesString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x2BBF140", Offset = "0x2BBD740", VA = "0x182BBF140")]
	private static object CulledPrimitivesString(in InstanceOcclusionEventStats stats)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x2BBE510", Offset = "0x2BBCB10", VA = "0x182BBE510")]
	private static DebugUI.Table.Row AddInstanceOcclusionPassDataRow(int eventIndex)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2BBED40", Offset = "0x2BBD340", VA = "0x182BBED40")]
	private static DebugUI.Table.Row AddOcclusionContextDataRow(int index)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	public bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2BBF900", Offset = "0x2BBDF00", VA = "0x182BBF900", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2BBFA20", Offset = "0x2BBE020", VA = "0x182BBFA20")]
	public DebugDisplayGPUResidentDrawer()
	{
	}
}
