// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplaySettingsVolume
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000074")]
public class DebugDisplaySettingsVolume : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery
{
	[Token(Token = "0x2000075")]
	private static class Styles
	{
		[Token(Token = "0x400017F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly GUIContent none;
	}

	[Token(Token = "0x2000076")]
	private static class Strings
	{
		[Token(Token = "0x4000180")]
		[FieldOffset(Offset = "0x0")]
		public static readonly string cameraNeedsRendering;

		[Token(Token = "0x4000181")]
		[FieldOffset(Offset = "0x8")]
		public static readonly string none;

		[Token(Token = "0x4000182")]
		[FieldOffset(Offset = "0x10")]
		public static readonly string parameter;

		[Token(Token = "0x4000183")]
		[FieldOffset(Offset = "0x18")]
		public static readonly string component;

		[Token(Token = "0x4000184")]
		[FieldOffset(Offset = "0x20")]
		public static readonly string debugViewNotSupported;

		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0x28")]
		public static readonly string volumeInfo;

		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x30")]
		public static readonly string gameObject;

		[Token(Token = "0x4000187")]
		[FieldOffset(Offset = "0x38")]
		public static readonly string priority;

		[Token(Token = "0x4000188")]
		[FieldOffset(Offset = "0x40")]
		public static readonly string resultValue;

		[Token(Token = "0x4000189")]
		[FieldOffset(Offset = "0x48")]
		public static readonly string resultValueTooltip;

		[Token(Token = "0x400018A")]
		[FieldOffset(Offset = "0x50")]
		public static readonly string globalDefaultValue;

		[Token(Token = "0x400018B")]
		[FieldOffset(Offset = "0x58")]
		public static readonly string globalDefaultValueTooltip;

		[Token(Token = "0x400018C")]
		[FieldOffset(Offset = "0x60")]
		public static readonly string qualityLevelValue;

		[Token(Token = "0x400018D")]
		[FieldOffset(Offset = "0x68")]
		public static readonly string qualityLevelValueTooltip;

		[Token(Token = "0x400018E")]
		[FieldOffset(Offset = "0x70")]
		public static readonly string global;

		[Token(Token = "0x400018F")]
		[FieldOffset(Offset = "0x78")]
		public static readonly string local;

		[Token(Token = "0x4000190")]
		[FieldOffset(Offset = "0x80")]
		public static readonly string volumeProfile;

		[Token(Token = "0x4000191")]
		[FieldOffset(Offset = "0x88")]
		public static readonly string parameterNotCalculated;
	}

	[Token(Token = "0x2000077")]
	internal static class WidgetFactory
	{
		[Token(Token = "0x2000078")]
		private struct VolumeParameterChain
		{
			[Token(Token = "0x4000193")]
			[FieldOffset(Offset = "0x0")]
			public DebugUI.Widget.NameAndTooltip nameAndTooltip;

			[Token(Token = "0x4000194")]
			[FieldOffset(Offset = "0x10")]
			public VolumeProfile volumeProfile;

			[Token(Token = "0x4000195")]
			[FieldOffset(Offset = "0x18")]
			public VolumeComponent volumeComponent;

			[Token(Token = "0x4000196")]
			[FieldOffset(Offset = "0x20")]
			public Volume volume;
		}

		[Token(Token = "0x4000192")]
		[FieldOffset(Offset = "0x0")]
		private static DebugUI.Value s_EmptyDebugUIValue;

		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x64C4700", Offset = "0x64C3700", VA = "0x64C4700")]
		public static DebugUI.EnumField CreateComponentSelector(SettingsPanel panel, Action<DebugUI.Field<int>, int> refresh)
		{
			return null;
		}

		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x64C4E60", Offset = "0x64C3E60", VA = "0x64C4E60")]
		public static DebugUI.CameraSelector CreateCameraSelector(SettingsPanel panel, Action<DebugUI.Field<Object>, Object> refresh)
		{
			return null;
		}

		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x64C50F0", Offset = "0x64C40F0", VA = "0x64C50F0")]
		internal static DebugUI.Widget CreateVolumeParameterWidget(string name, bool isResultParameter, VolumeParameter param)
		{
			return null;
		}

		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x64C5270", Offset = "0x64C4270", VA = "0x64C5270")]
		private static VolumeComponent GetSelectedVolumeComponent(VolumeProfile profile, Type selectedType)
		{
			return null;
		}

		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x64C5460", Offset = "0x64C4460", VA = "0x64C5460")]
		private static List<VolumeParameterChain> GetResolutionChain(DebugDisplaySettingsVolume data)
		{
			return null;
		}

		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x64C6270", Offset = "0x64C5270", VA = "0x64C6270")]
		public static DebugUI.Table CreateVolumeTable(DebugDisplaySettingsVolume data)
		{
			return null;
		}

		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x64C6900", Offset = "0x64C5900", VA = "0x64C6900")]
		private static void GenerateTableColumns(DebugUI.Table table, DebugDisplaySettingsVolume data, List<VolumeParameterChain> resolutionChain)
		{
		}

		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x64C6480", Offset = "0x64C5480", VA = "0x64C6480")]
		private static void GenerateTableRows(DebugUI.Table table, List<VolumeParameterChain> resolutionChain)
		{
		}
	}

	[Token(Token = "0x200007E")]
	[DisplayInfo(name = "Volume", order = 2147483647)]
	internal class SettingsPanel : DebugDisplaySettingsPanel<DebugDisplaySettingsVolume>
	{
		[Token(Token = "0x40001A0")]
		[FieldOffset(Offset = "0x28")]
		private DebugUI.Table m_VolumeTable;

		[Token(Token = "0x1700005C")]
		public override DebugUI.Flags Flags
		{
			[Token(Token = "0x60005EB")]
			[Address(RVA = "0x64C7D00", Offset = "0x64C6D00", VA = "0x64C7D00", Slot = "10")]
			get
			{
				return default(DebugUI.Flags);
			}
		}

		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x64C7D10", Offset = "0x64C6D10", VA = "0x64C7D10", Slot = "11")]
		public override void Dispose()
		{
		}

		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x64C3E30", Offset = "0x64C2E30", VA = "0x64C3E30")]
		public SettingsPanel(DebugDisplaySettingsVolume data)
		{
		}

		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x64C7E90", Offset = "0x64C6E90", VA = "0x64C7E90")]
		private void OnVolumeInfluenceChanged(ObservableList<Volume> sender, ListChangedEventArgs<Volume> e)
		{
		}

		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x64C7F70", Offset = "0x64C6F70", VA = "0x64C7F70")]
		private void Refresh()
		{
		}
	}

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x18")]
	private int m_SelectedComponentIndex;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x20")]
	private Camera m_SelectedCamera;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x28")]
	private VolumeComponent m_VolumeInterpolatedResults;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x30")]
	private bool m_StoreStackInterpolatedValues;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x38")]
	private ObservableList<Volume> m_InfluenceVolumes;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x40")]
	private List<(Volume volume, float weight)> m_VolumesWeights;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x48")]
	internal int volumeComponentEnumIndex;

	[Token(Token = "0x400017E")]
	private const string k_PanelTitle = "Volume";

	[Token(Token = "0x17000055")]
	[Obsolete("This property has been obsoleted and will be removed in a future version. #from(6000.2)")]
	public IVolumeDebugSettings volumeDebugSettings
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x64C29B0", Offset = "0x64C19B0", VA = "0x64C29B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public int selectedComponent
	{
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0x64C29C0", Offset = "0x64C19C0", VA = "0x64C29C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x64C29D0", Offset = "0x64C19D0", VA = "0x64C29D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public Type selectedComponentType
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x64C2B30", Offset = "0x64C1B30", VA = "0x64C2B30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x64C2C20", Offset = "0x64C1C20", VA = "0x64C2C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public List<(string, Type)> volumeComponentsPathAndType
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x64C2B90", Offset = "0x64C1B90", VA = "0x64C2B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public Camera selectedCamera
	{
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x64C2D40", Offset = "0x64C1D40", VA = "0x64C2D40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x64C2D50", Offset = "0x64C1D50", VA = "0x64C2D50")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	internal VolumeComponent resultVolumeComponent
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x64C3400", Offset = "0x64C2400", VA = "0x64C3400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x64C3DD0", Offset = "0x64C2DD0", VA = "0x64C3DD0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x64C2AB0", Offset = "0x64C1AB0", VA = "0x64C2AB0")]
	private void DestroyVolumeInterpolatedResults()
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x64C29E0", Offset = "0x64C19E0", VA = "0x64C29E0")]
	private void OnSelectionChanged()
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x64C2DD0", Offset = "0x64C1DD0", VA = "0x64C2DD0")]
	private void ClearInterpolationData()
	{
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x64C2E20", Offset = "0x64C1E20", VA = "0x64C2E20")]
	private static bool AreVolumesChanged(ObservableList<Volume> influenceVolumes, List<(Volume volume, float weight)> volumesWeights)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x64C2F70", Offset = "0x64C1F70", VA = "0x64C2F70")]
	private void OnBeginVolumeStackUpdate(VolumeStack stack, Camera camera)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x64C30E0", Offset = "0x64C20E0", VA = "0x64C30E0")]
	private void OnEndVolumeStackUpdate(VolumeStack stack, Camera camera)
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x64C3550", Offset = "0x64C2550", VA = "0x64C3550")]
	private void OnVolumeStackInterpolated(VolumeStack stack, Volume volume, float interpolationFactor)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x64C3640", Offset = "0x64C2640", VA = "0x64C3640")]
	public float GetVolumeWeight(Volume volume)
	{
		return default(float);
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x64C3820", Offset = "0x64C2820", VA = "0x64C3820")]
	public ObservableList<Volume> GetVolumesList()
	{
		return null;
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x64C3830", Offset = "0x64C2830", VA = "0x64C3830", Slot = "5")]
	private void UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002EReset()
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x64C3900", Offset = "0x64C2900", VA = "0x64C3900")]
	[Obsolete("This constructor has been obsoleted and will be removed in a future version. #from(6000.2)")]
	public DebugDisplaySettingsVolume(IVolumeDebugSettings volumeDebugSettings)
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x64C3930", Offset = "0x64C2930", VA = "0x64C3930")]
	public DebugDisplaySettingsVolume()
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x64C3A00", Offset = "0x64C2A00", VA = "0x64C3A00")]
	internal static string ExtractResult(VolumeParameter param)
	{
		return null;
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x64C3DE0", Offset = "0x64C2DE0", VA = "0x64C3DE0", Slot = "4")]
	public IDebugDisplaySettingsPanelDisposable CreatePanel()
	{
		return null;
	}
}
