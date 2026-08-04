// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001DC")]
public sealed class VolumeManager
{
	[Token(Token = "0x4000808")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_ProfilerMarkerUpdate;

	[Token(Token = "0x4000809")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_ProfilerMarkerReplaceData;

	[Token(Token = "0x400080A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Lazy<VolumeManager> s_Instance;

	[Token(Token = "0x400080C")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<Type, List<(string, Type)>> s_SupportedVolumeComponentsForRenderPipeline;

	[Token(Token = "0x400080E")]
	private const int k_MaxLayerCount = 32;

	[Token(Token = "0x400080F")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<int, List<Volume>> m_SortedVolumes;

	[Token(Token = "0x4000810")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Volume> m_Volumes;

	[Token(Token = "0x4000811")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<int, bool> m_SortNeeded;

	[Token(Token = "0x4000812")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<VolumeComponent> m_ComponentsDefaultState;

	[Token(Token = "0x4000813")]
	[FieldOffset(Offset = "0x40")]
	private readonly List<Collider> m_TempColliders;

	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x48")]
	private VolumeStack m_DefaultStack;

	[Token(Token = "0x17000195")]
	public static VolumeManager instance
	{
		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x4C05A20", Offset = "0x4C05A20", VA = "0x4C05A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000196")]
	public VolumeStack stack
	{
		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x4C07DD0", Offset = "0x4C07DD0", VA = "0x4C07DD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D77")]
		[Address(RVA = "0x4C07DE0", Offset = "0x4C07DE0", VA = "0x4C07DE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000197")]
	[Obsolete("Please use baseComponentTypeArray instead.")]
	public IEnumerable<Type> baseComponentTypes
	{
		[Token(Token = "0x6000D78")]
		[Address(RVA = "0x4C07DF0", Offset = "0x4C07DF0", VA = "0x4C07DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x4C07E00", Offset = "0x4C07E00", VA = "0x4C07E00")]
		private set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public Type[] baseComponentTypeArray
	{
		[Token(Token = "0x6000D7C")]
		[Address(RVA = "0x4C08640", Offset = "0x4C08640", VA = "0x4C08640")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D7D")]
		[Address(RVA = "0x4C08650", Offset = "0x4C08650", VA = "0x4C08650")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x4C07E60", Offset = "0x4C07E60", VA = "0x4C07E60")]
	internal static List<(string, Type)> GetSupportedVolumeComponents(Type currentPipelineType, Type currentRenderPipelineAsset)
	{
		return null;
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x4C08060", Offset = "0x4C08060", VA = "0x4C08060")]
	private static List<(string, Type)> FilterVolumeComponentTypes(Type[] types, Type currentPipelineType, Type currentPipelineAsset)
	{
		return null;
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x4C08660", Offset = "0x4C08660", VA = "0x4C08660")]
	internal VolumeComponent GetDefaultVolumeComponent(Type volumeComponentType)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x4C08830", Offset = "0x4C08830", VA = "0x4C08830")]
	internal VolumeManager()
	{
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x4C08D40", Offset = "0x4C08D40", VA = "0x4C08D40")]
	public VolumeStack CreateStack()
	{
		return null;
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x4C09460", Offset = "0x4C09460", VA = "0x4C09460")]
	public void ResetMainStack()
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x4C09480", Offset = "0x4C09480", VA = "0x4C09480")]
	public void DestroyStack(VolumeStack stack)
	{
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x4C08A10", Offset = "0x4C08A10", VA = "0x4C08A10")]
	private void ReloadBaseTypes()
	{
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x4C05AB0", Offset = "0x4C05AB0", VA = "0x4C05AB0")]
	public void Register(Volume volume, int layer)
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x4C05ED0", Offset = "0x4C05ED0", VA = "0x4C05ED0")]
	public void Unregister(Volume volume, int layer)
	{
	}

	[Token(Token = "0x6000D86")]
	public bool IsComponentActiveInMask<T>(LayerMask layerMask) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x4C062F0", Offset = "0x4C062F0", VA = "0x4C062F0")]
	internal void SetLayerDirty(int layer)
	{
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x4C064B0", Offset = "0x4C064B0", VA = "0x4C064B0")]
	internal void UpdateVolumeLayer(Volume volume, int prevLayer, int newLayer)
	{
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x4C094B0", Offset = "0x4C094B0", VA = "0x4C094B0")]
	private void OverrideData(VolumeStack stack, List<VolumeComponent> components, float interpFactor)
	{
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x4C09690", Offset = "0x4C09690", VA = "0x4C09690")]
	internal void ReplaceData(VolumeStack stack)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x4C09740", Offset = "0x4C09740", VA = "0x4C09740")]
	[Conditional("UNITY_EDITOR")]
	public void CheckBaseTypes()
	{
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x4C097E0", Offset = "0x4C097E0", VA = "0x4C097E0")]
	[Conditional("UNITY_EDITOR")]
	public void CheckStack(VolumeStack stack)
	{
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x4C09A40", Offset = "0x4C09A40", VA = "0x4C09A40")]
	private bool CheckUpdateRequired(VolumeStack stack)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x4C09AB0", Offset = "0x4C09AB0", VA = "0x4C09AB0")]
	public void Update(Transform trigger, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x4C09AC0", Offset = "0x4C09AC0", VA = "0x4C09AC0")]
	public void Update(VolumeStack stack, Transform trigger, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x4C0A710", Offset = "0x4C0A710", VA = "0x4C0A710")]
	public Volume[] GetVolumes(LayerMask layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x4C0A400", Offset = "0x4C0A400", VA = "0x4C0A400")]
	private List<Volume> GrabVolumes(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x4C0A860", Offset = "0x4C0A860", VA = "0x4C0A860")]
	private static void SortByPriority(List<Volume> volumes)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x4C0A990", Offset = "0x4C0A990", VA = "0x4C0A990")]
	private static bool IsVolumeRenderedByCamera(Volume volume, Camera camera)
	{
		return default(bool);
	}
}
