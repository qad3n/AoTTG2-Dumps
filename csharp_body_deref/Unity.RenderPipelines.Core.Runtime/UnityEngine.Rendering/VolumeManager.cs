// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeManager
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2B1E3B0", Offset = "0x2B1C9B0", VA = "0x182B1E3B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	public VolumeStack stack
	{
		[Token(Token = "0x6000814")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000815")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
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
		[Address(RVA = "0x2B1E340", Offset = "0x2B1C940", VA = "0x182B1E340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	public Type[] baseComponentTypeArray
	{
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x2B1E340", Offset = "0x2B1C940", VA = "0x182B1E340")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081A")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public VolumeProfile globalDefaultProfile
	{
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600081C")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public VolumeProfile qualityDefaultProfile
	{
		[Token(Token = "0x600081D")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public ReadOnlyCollection<VolumeProfile> customDefaultProfiles
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E4")]
	public bool isInitialized
	{
		[Token(Token = "0x6000823")]
		[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000824")]
		[Address(RVA = "0x1D1FF10", Offset = "0x1D1E510", VA = "0x181D1FF10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x2B1CCB0", Offset = "0x2B1B2B0", VA = "0x182B1CCB0")]
	[Obsolete("Please use the Register without a given layer index. #from(6000.0)")]
	public void Register(Volume volume, int layer)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x2B1D720", Offset = "0x2B1BD20", VA = "0x182B1D720")]
	[Obsolete("Please use the Register without a given layer index. #from(6000.0)")]
	public void Unregister(Volume volume, int layer)
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x2B1BAD0", Offset = "0x2B1A0D0", VA = "0x182B1BAD0")]
	internal List<(string, Type)> GetVolumeComponentsForDisplay(Type currentPipelineAssetType)
	{
		return null;
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x2B1A6E0", Offset = "0x2B18CE0", VA = "0x182B1A6E0")]
	private List<(string, Type)> BuildVolumeComponentDisplayList(Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x2B1B9B0", Offset = "0x2B19FB0", VA = "0x182B1B9B0")]
	public VolumeComponent GetVolumeComponentDefaultState(Type volumeComponentType)
	{
		return null;
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x2B1E290", Offset = "0x2B1C890", VA = "0x182B1E290")]
	internal VolumeManager()
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x2B1C260", Offset = "0x2B1A860", VA = "0x182B1C260")]
	public void Initialize([Optional] VolumeProfile globalDefaultVolumeProfile, [Optional] VolumeProfile qualityDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x2B1BEB0", Offset = "0x2B1A4B0", VA = "0x182B1BEB0")]
	private void InitializeBaseTypesArray([Optional] VolumeProfile globalDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x2B1C050", Offset = "0x2B1A650", VA = "0x182B1C050")]
	internal void InitializeInternal([Optional] VolumeProfile globalDefaultVolumeProfile, [Optional] VolumeProfile qualityDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x2B1AEE0", Offset = "0x2B194E0", VA = "0x182B1AEE0")]
	public void Deinitialize()
	{
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x2B1D400", Offset = "0x2B1BA00", VA = "0x182B1D400")]
	public void SetGlobalDefaultProfile(VolumeProfile profile)
	{
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x2B1D4A0", Offset = "0x2B1BAA0", VA = "0x182B1D4A0")]
	public void SetQualityDefaultProfile(VolumeProfile profile)
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x2B1D1D0", Offset = "0x2B1B7D0", VA = "0x182B1D1D0")]
	public void SetCustomDefaultProfiles(List<VolumeProfile> profiles)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x2B1CA70", Offset = "0x2B1B070", VA = "0x182B1CA70")]
	public void OnVolumeProfileChanged(VolumeProfile profile)
	{
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x2B1C7D0", Offset = "0x2B1ADD0", VA = "0x182B1C7D0")]
	public void OnVolumeComponentChanged(VolumeComponent component)
	{
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x2B1AE70", Offset = "0x2B19470", VA = "0x182B1AE70")]
	public VolumeStack CreateStack()
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x2B1AD80", Offset = "0x2B19380", VA = "0x182B1AD80")]
	private VolumeStack CreateStackInternal()
	{
		return null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x2B1D1B0", Offset = "0x2B1B7B0", VA = "0x182B1D1B0")]
	public void ResetMainStack()
	{
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x2B1B0F0", Offset = "0x2B196F0", VA = "0x182B1B0F0")]
	public void DestroyStack(VolumeStack stack)
	{
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x2B1C460", Offset = "0x2B1AA60", VA = "0x182B1C460")]
	internal void LoadBaseTypesByDefaultVolume(Type rpType, VolumeProfile globalDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x2B1C7C0", Offset = "0x2B1ADC0", VA = "0x182B1C7C0")]
	private void LoadBaseTypes(Type pipelineAssetType, [Optional] VolumeProfile globalDefaultVolumeProfile)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x2B1C190", Offset = "0x2B1A790", VA = "0x182B1C190")]
	internal void InitializeVolumeComponents()
	{
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x2B1B160", Offset = "0x2B19760", VA = "0x182B1B160")]
	private void EvaluateVolumeDefaultState()
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x2B1CFA0", Offset = "0x2B1B5A0", VA = "0x182B1CFA0")]
	public void Register(Volume volume)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x2B1D6C0", Offset = "0x2B1BCC0", VA = "0x182B1D6C0")]
	public void Unregister(Volume volume)
	{
	}

	[Token(Token = "0x6000838")]
	public bool IsComponentActiveInMask<T>(LayerMask layerMask) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x2B1D480", Offset = "0x2B1BA80", VA = "0x182B1D480")]
	internal void SetLayerDirty(int layer)
	{
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x2B1DA10", Offset = "0x2B1C010", VA = "0x182B1DA10")]
	internal void UpdateVolumeLayer(Volume volume, int prevLayer, int newLayer)
	{
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x2B1CB50", Offset = "0x2B1B150", VA = "0x182B1CB50")]
	private void OverrideData(VolumeStack stack, Volume volume, float interpFactor)
	{
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x2B1D000", Offset = "0x2B1B600", VA = "0x182B1D000")]
	internal void ReplaceData(VolumeStack stack)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x2B1AA70", Offset = "0x2B19070", VA = "0x182B1AA70")]
	[Conditional("UNITY_EDITOR")]
	public void CheckDefaultVolumeState()
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x2B1AB00", Offset = "0x2B19100", VA = "0x182B1AB00")]
	[Conditional("UNITY_EDITOR")]
	public void CheckStack(VolumeStack stack)
	{
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x2B1AD30", Offset = "0x2B19330", VA = "0x182B1AD30")]
	private bool CheckUpdateRequired(VolumeStack stack)
	{
		return default(bool);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x2B1DFD0", Offset = "0x2B1C5D0", VA = "0x182B1DFD0")]
	public void Update(Transform trigger, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x2B1DA40", Offset = "0x2B1C040", VA = "0x182B1DA40")]
	public void Update(VolumeStack stack, Transform trigger, LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x2B1BD30", Offset = "0x2B1A330", VA = "0x182B1BD30")]
	public Volume[] GetVolumes(LayerMask layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x2B1BE90", Offset = "0x2B1A490", VA = "0x182B1BE90")]
	private List<Volume> GrabVolumes(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private static bool IsVolumeRenderedByCamera(Volume volume, Camera camera)
	{
		return default(bool);
	}
}
