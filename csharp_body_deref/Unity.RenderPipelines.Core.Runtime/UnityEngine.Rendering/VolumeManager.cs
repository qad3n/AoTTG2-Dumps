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
		[Address(RVA = "0x48E09B0", Offset = "0x48E09B0", VA = "0x48E09B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000196")]
	public VolumeStack stack
	{
		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x48E2D60", Offset = "0x48E2D60", VA = "0x48E2D60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D77")]
		[Address(RVA = "0x48E2D70", Offset = "0x48E2D70", VA = "0x48E2D70")]
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
		[Address(RVA = "0x48E2D80", Offset = "0x48E2D80", VA = "0x48E2D80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x48E2D90", Offset = "0x48E2D90", VA = "0x48E2D90")]
		private set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public Type[] baseComponentTypeArray
	{
		[Token(Token = "0x6000D7C")]
		[Address(RVA = "0x48E35D0", Offset = "0x48E35D0", VA = "0x48E35D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D7D")]
		[Address(RVA = "0x48E35E0", Offset = "0x48E35E0", VA = "0x48E35E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x48E2DF0", Offset = "0x48E2DF0", VA = "0x48E2DF0")]
	internal static List<(string, Type)> GetSupportedVolumeComponents(Type currentPipelineType, Type currentRenderPipelineAsset)
	{
		return null;
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x48E2FF0", Offset = "0x48E2FF0", VA = "0x48E2FF0")]
	private static List<(string, Type)> FilterVolumeComponentTypes(Type[] types, Type currentPipelineType, Type currentPipelineAsset)
	{
		return null;
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x48E35F0", Offset = "0x48E35F0", VA = "0x48E35F0")]
	internal VolumeComponent GetDefaultVolumeComponent(Type volumeComponentType)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x48E37C0", Offset = "0x48E37C0", VA = "0x48E37C0")]
	internal VolumeManager()
	{
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x48E3CD0", Offset = "0x48E3CD0", VA = "0x48E3CD0")]
	public VolumeStack CreateStack()
	{
		return null;
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x48E43F0", Offset = "0x48E43F0", VA = "0x48E43F0")]
	public void ResetMainStack()
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x48E4410", Offset = "0x48E4410", VA = "0x48E4410")]
	public void DestroyStack(VolumeStack stack)
	{
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x48E39A0", Offset = "0x48E39A0", VA = "0x48E39A0")]
	private void ReloadBaseTypes()
	{
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x48E0A40", Offset = "0x48E0A40", VA = "0x48E0A40")]
	public void Register(Volume volume, int layer)
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x48E0E60", Offset = "0x48E0E60", VA = "0x48E0E60")]
	public void Unregister(Volume volume, int layer)
	{
	}

	[Token(Token = "0x6000D86")]
	public bool IsComponentActiveInMask<T>(LayerMask layerMask) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x48E1280", Offset = "0x48E1280", VA = "0x48E1280")]
	internal void SetLayerDirty(int layer)
	{
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x48E1440", Offset = "0x48E1440", VA = "0x48E1440")]
	internal void UpdateVolumeLayer(Volume volume, int prevLayer, int newLayer)
	{
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x48E4440", Offset = "0x48E4440", VA = "0x48E4440")]
	private void OverrideData(VolumeStack stack, List<VolumeComponent> components, float interpFactor)
	{
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x48E4620", Offset = "0x48E4620", VA = "0x48E4620")]
	internal void ReplaceData(VolumeStack stack)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x48E46D0", Offset = "0x48E46D0", VA = "0x48E46D0")]
	[Conditional("UNITY_EDITOR")]
	public void CheckBaseTypes()
	{
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x48E4770", Offset = "0x48E4770", VA = "0x48E4770")]
	[Conditional("UNITY_EDITOR")]
	public void CheckStack(VolumeStack stack)
	{
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x48E49D0", Offset = "0x48E49D0", VA = "0x48E49D0")]
	private bool CheckUpdateRequired(VolumeStack stack)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x48E4A40", Offset = "0x48E4A40", VA = "0x48E4A40")]
	public void Update(Transform trigger, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x48E4A50", Offset = "0x48E4A50", VA = "0x48E4A50")]
	public void Update(VolumeStack stack, Transform trigger, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x48E56A0", Offset = "0x48E56A0", VA = "0x48E56A0")]
	public Volume[] GetVolumes(LayerMask layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x48E5390", Offset = "0x48E5390", VA = "0x48E5390")]
	private List<Volume> GrabVolumes(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x48E57F0", Offset = "0x48E57F0", VA = "0x48E57F0")]
	private static void SortByPriority(List<Volume> volumes)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x48E5920", Offset = "0x48E5920", VA = "0x48E5920")]
	private static bool IsVolumeRenderedByCamera(Volume volume, Camera camera)
	{
		return default(bool);
	}
}
