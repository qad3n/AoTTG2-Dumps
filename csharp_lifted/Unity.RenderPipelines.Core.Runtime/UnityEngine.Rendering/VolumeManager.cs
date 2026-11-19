// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E3")]
public sealed class VolumeManager
{
	[Token(Token = "0x40002E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_ProfilerMarkerInitialize;

	[Token(Token = "0x40002E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_ProfilerMarkerInitializeBaseTypesArray;

	[Token(Token = "0x40002EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_ProfilerMarkerUpdate;

	[Token(Token = "0x40002EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_ProfilerMarkerReplaceData;

	[Token(Token = "0x40002EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_ProfilerMarkerEvaluateVolumeDefaultState;

	[Token(Token = "0x40002ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly Lazy<VolumeManager> s_Instance;

	[Token(Token = "0x40002EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly Dictionary<Type, List<(string, Type)>> s_SupportedVolumeComponentsForRenderPipeline;

	[Token(Token = "0x40002F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Type[] m_BaseComponentTypeArray;

	[Token(Token = "0x40002F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly VolumeCollection m_VolumeCollection;

	[Token(Token = "0x40002F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private VolumeComponent[] m_ComponentsDefaultState;

	[Token(Token = "0x40002F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal VolumeParameter[] m_ParametersDefaultState;

	[Token(Token = "0x40002F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private VolumeStack m_DefaultStack;

	[Token(Token = "0x40002F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly List<VolumeStack> m_CreatedVolumeStacks;

	[Token(Token = "0x170000DD")]
	public static VolumeManager instance
	{
		[Token(Token = "0x6000813")]
		[Address(RVA = "0x64F6D70", Offset = "0x64F5D70", VA = "0x64F6D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	public VolumeStack stack
	{
		[Token(Token = "0x6000814")]
		[Address(RVA = "0x64F6E00", Offset = "0x64F5E00", VA = "0x64F6E00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000815")]
		[Address(RVA = "0x64F6E10", Offset = "0x64F5E10", VA = "0x64F6E10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	[Obsolete("Please use baseComponentTypeArray instead. #from(2021.2)")]
	public IEnumerable<Type> baseComponentTypes
	{
		[Token(Token = "0x6000816")]
		[Address(RVA = "0x64F6E20", Offset = "0x64F5E20", VA = "0x64F6E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	public Type[] baseComponentTypeArray
	{
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x64F6E80", Offset = "0x64F5E80", VA = "0x64F6E80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081A")]
		[Address(RVA = "0x64F7790", Offset = "0x64F6790", VA = "0x64F7790")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public VolumeProfile globalDefaultProfile
	{
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x64F77A0", Offset = "0x64F67A0", VA = "0x64F77A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600081C")]
		[Address(RVA = "0x64F77B0", Offset = "0x64F67B0", VA = "0x64F77B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public VolumeProfile qualityDefaultProfile
	{
		[Token(Token = "0x600081D")]
		[Address(RVA = "0x64F77C0", Offset = "0x64F67C0", VA = "0x64F77C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x64F77D0", Offset = "0x64F67D0", VA = "0x64F77D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public ReadOnlyCollection<VolumeProfile> customDefaultProfiles
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x64F77E0", Offset = "0x64F67E0", VA = "0x64F77E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x64F77F0", Offset = "0x64F67F0", VA = "0x64F77F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E4")]
	public bool isInitialized
	{
		[Token(Token = "0x6000823")]
		[Address(RVA = "0x64F79C0", Offset = "0x64F69C0", VA = "0x64F79C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000824")]
		[Address(RVA = "0x64F79D0", Offset = "0x64F69D0", VA = "0x64F79D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x64F6750", Offset = "0x64F5750", VA = "0x64F6750")]
	[Obsolete("Please use the Register without a given layer index. #from(6000.0)")]
	public void Register(Volume volume, int layer)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x64F6A60", Offset = "0x64F5A60", VA = "0x64F6A60")]
	[Obsolete("Please use the Register without a given layer index. #from(6000.0)")]
	public void Unregister(Volume volume, int layer)
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x64F6EE0", Offset = "0x64F5EE0", VA = "0x64F6EE0")]
	internal List<(string, Type)> GetVolumeComponentsForDisplay(Type currentPipelineAssetType)
	{
		return null;
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x64F73C0", Offset = "0x64F63C0", VA = "0x64F73C0")]
	private List<(string, Type)> BuildVolumeComponentDisplayList(Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x64F7800", Offset = "0x64F6800", VA = "0x64F7800")]
	public VolumeComponent GetVolumeComponentDefaultState(Type volumeComponentType)
	{
		return null;
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x64F7910", Offset = "0x64F6910", VA = "0x64F7910")]
	internal VolumeManager()
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x64F79E0", Offset = "0x64F69E0", VA = "0x64F79E0")]
	public void Initialize([Optional] VolumeProfile globalDefaultVolumeProfile, [Optional] VolumeProfile qualityDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x64F7150", Offset = "0x64F6150", VA = "0x64F7150")]
	private void InitializeBaseTypesArray([Optional] VolumeProfile globalDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x64F7B70", Offset = "0x64F6B70", VA = "0x64F7B70")]
	internal void InitializeInternal([Optional] VolumeProfile globalDefaultVolumeProfile, [Optional] VolumeProfile qualityDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x64F8920", Offset = "0x64F7920", VA = "0x64F8920")]
	public void Deinitialize()
	{
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x64F8BC0", Offset = "0x64F7BC0", VA = "0x64F8BC0")]
	public void SetGlobalDefaultProfile(VolumeProfile profile)
	{
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x64F8C40", Offset = "0x64F7C40", VA = "0x64F8C40")]
	public void SetQualityDefaultProfile(VolumeProfile profile)
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x64F8C60", Offset = "0x64F7C60", VA = "0x64F8C60")]
	public void SetCustomDefaultProfiles(List<VolumeProfile> profiles)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x64F8ED0", Offset = "0x64F7ED0", VA = "0x64F8ED0")]
	public void OnVolumeProfileChanged(VolumeProfile profile)
	{
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x64F8FB0", Offset = "0x64F7FB0", VA = "0x64F8FB0")]
	public void OnVolumeComponentChanged(VolumeComponent component)
	{
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x64F9260", Offset = "0x64F8260", VA = "0x64F9260")]
	public VolumeStack CreateStack()
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x64F8850", Offset = "0x64F7850", VA = "0x64F8850")]
	private VolumeStack CreateStackInternal()
	{
		return null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x64F92C0", Offset = "0x64F82C0", VA = "0x64F92C0")]
	public void ResetMainStack()
	{
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x64F8B60", Offset = "0x64F7B60", VA = "0x64F8B60")]
	public void DestroyStack(VolumeStack stack)
	{
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x64F92E0", Offset = "0x64F82E0", VA = "0x64F92E0")]
	internal void LoadBaseTypesByDefaultVolume(Type rpType, VolumeProfile globalDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x64F7BE0", Offset = "0x64F6BE0", VA = "0x64F7BE0")]
	private void LoadBaseTypes(Type pipelineAssetType, [Optional] VolumeProfile globalDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x64F7BF0", Offset = "0x64F6BF0", VA = "0x64F7BF0")]
	internal void InitializeVolumeComponents()
	{
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x64F7CB0", Offset = "0x64F6CB0", VA = "0x64F7CB0")]
	private void EvaluateVolumeDefaultState()
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x64F6A10", Offset = "0x64F5A10", VA = "0x64F6A10")]
	public void Register(Volume volume)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x64F6D20", Offset = "0x64F5D20", VA = "0x64F6D20")]
	public void Unregister(Volume volume)
	{
	}

	[Token(Token = "0x6000838")]
	public bool IsComponentActiveInMask<T>(LayerMask layerMask) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x64F99A0", Offset = "0x64F89A0", VA = "0x64F99A0")]
	internal void SetLayerDirty(int layer)
	{
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x64F99C0", Offset = "0x64F89C0", VA = "0x64F99C0")]
	internal void UpdateVolumeLayer(Volume volume, int prevLayer, int newLayer)
	{
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x64F99E0", Offset = "0x64F89E0", VA = "0x64F99E0")]
	private void OverrideData(VolumeStack stack, Volume volume, float interpFactor)
	{
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x64F9B70", Offset = "0x64F8B70", VA = "0x64F9B70")]
	internal void ReplaceData(VolumeStack stack)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x64F9DA0", Offset = "0x64F8DA0", VA = "0x64F9DA0")]
	[Conditional("UNITY_EDITOR")]
	public void CheckDefaultVolumeState()
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x64F9E30", Offset = "0x64F8E30", VA = "0x64F9E30")]
	[Conditional("UNITY_EDITOR")]
	public void CheckStack(VolumeStack stack)
	{
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x64FA0F0", Offset = "0x64F90F0", VA = "0x64FA0F0")]
	private bool CheckUpdateRequired(VolumeStack stack)
	{
		return default(bool);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x64FA140", Offset = "0x64F9140", VA = "0x64FA140")]
	public void Update(Transform trigger, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x64FA150", Offset = "0x64F9150", VA = "0x64FA150")]
	public void Update(VolumeStack stack, Transform trigger, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x64FA690", Offset = "0x64F9690", VA = "0x64FA690")]
	public Volume[] GetVolumes(LayerMask layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x64FA670", Offset = "0x64F9670", VA = "0x64FA670")]
	private List<Volume> GrabVolumes(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x64FA7F0", Offset = "0x64F97F0", VA = "0x64FA7F0")]
	private static bool IsVolumeRenderedByCamera(Volume volume, Camera camera)
	{
		return default(bool);
	}
}
