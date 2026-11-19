// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScriptableRendererData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000AD")]
public abstract class ScriptableRendererData : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x20000AE")]
	[Obsolete("Moved to UniversalRenderPipelineDebugShaders on GraphicsSettings. #from(2023.3)")]
	[ReloadGroup]
	public sealed class DebugShaderResources
	{
		[Token(Token = "0x400036D")]
		[FieldOffset(Offset = "0x10")]
		[Obsolete("Moved to UniversalRenderPipelineDebugShaders on GraphicsSettings. #from(2023.3)")]
		[Reload("Shaders/Debug/DebugReplacement.shader", ReloadAttribute.Package.Root)]
		public Shader debugReplacementPS;

		[Token(Token = "0x400036E")]
		[FieldOffset(Offset = "0x18")]
		[Obsolete("Moved to UniversalRenderPipelineDebugShaders on GraphicsSettings. #from(2023.3)")]
		[Reload("Shaders/Debug/HDRDebugView.shader", ReloadAttribute.Package.Root)]
		public Shader hdrDebugViewPS;

		[Token(Token = "0x6000430")]
		[Address(RVA = "0x6627A20", Offset = "0x6626A20", VA = "0x6627A20")]
		public DebugShaderResources()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20000AF")]
	[ReloadGroup]
	[Obsolete("Probe volume debug resource are now in the ProbeVolumeDebugResources class. #from(2023.3)")]
	public sealed class ProbeVolumeResources
	{
		[Token(Token = "0x400036F")]
		[FieldOffset(Offset = "0x10")]
		[Obsolete("This shader is now in the ProbeVolumeDebugResources class. #from(2023.3)")]
		public Shader probeVolumeDebugShader;

		[Token(Token = "0x4000370")]
		[FieldOffset(Offset = "0x18")]
		[Obsolete("This shader is now in the ProbeVolumeDebugResources class. #from(2023.3)")]
		public Shader probeVolumeFragmentationDebugShader;

		[Token(Token = "0x4000371")]
		[FieldOffset(Offset = "0x20")]
		[Obsolete("This shader is now in the ProbeVolumeDebugResources class. #from(2023.3)")]
		public Shader probeVolumeOffsetDebugShader;

		[Token(Token = "0x4000372")]
		[FieldOffset(Offset = "0x28")]
		[Obsolete("This shader is now in the ProbeVolumeDebugResources class. #from(2023.3)")]
		public Shader probeVolumeSamplingDebugShader;

		[Token(Token = "0x4000373")]
		[FieldOffset(Offset = "0x30")]
		[Obsolete("This shader is now in the ProbeVolumeDebugResources class. #from(2023.3)")]
		public Mesh probeSamplingDebugMesh;

		[Token(Token = "0x4000374")]
		[FieldOffset(Offset = "0x38")]
		[Obsolete("This shader is now in the ProbeVolumeDebugResources class. #from(2023.3)")]
		public Texture2D probeSamplingDebugTexture;

		[Token(Token = "0x4000375")]
		[FieldOffset(Offset = "0x40")]
		[Obsolete("This shader is now in the ProbeVolumeRuntimeResources class. #from(2023.3)")]
		public ComputeShader probeVolumeBlendStatesCS;

		[Token(Token = "0x6000431")]
		[Address(RVA = "0x6627A30", Offset = "0x6626A30", VA = "0x6627A30")]
		public ProbeVolumeResources()
		{
		}
	}

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x18")]
	[Obsolete("Moved to UniversalRenderPipelineDebugShaders on GraphicsSettings. #from(2023.3)")]
	public DebugShaderResources debugShaders;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x20")]
	[Obsolete("Probe volume debug resource are now in the ProbeVolumeDebugResources class. #from(2023.3)")]
	public ProbeVolumeResources probeVolumeResources;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal List<ScriptableRendererFeature> m_RendererFeatures;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal List<long> m_RendererFeatureMap;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private bool m_UseNativeRenderPass;

	[NonSerialized]
	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x41")]
	private bool m_StripShadowsOffVariants;

	[NonSerialized]
	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x42")]
	private bool m_StripAdditionalLightOffVariants;

	[Token(Token = "0x17000105")]
	internal bool isInvalidated
	{
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x6627870", Offset = "0x6626870", VA = "0x6627870")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x6627880", Offset = "0x6626880", VA = "0x6627880")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	internal virtual bool stripShadowsOffVariants
	{
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x6627890", Offset = "0x6626890", VA = "0x6627890", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x66278A0", Offset = "0x66268A0", VA = "0x66278A0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	internal virtual bool stripAdditionalLightOffVariants
	{
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x66278B0", Offset = "0x66268B0", VA = "0x66278B0", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x66278C0", Offset = "0x66268C0", VA = "0x66278C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	public List<ScriptableRendererFeature> rendererFeatures
	{
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x66278D0", Offset = "0x66268D0", VA = "0x66278D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	public bool useNativeRenderPass
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x6627930", Offset = "0x6626930", VA = "0x6627930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x6627940", Offset = "0x6626940", VA = "0x6627940")]
		set
		{
		}
	}

	[Token(Token = "0x6000426")]
	protected abstract ScriptableRenderer Create();

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x66278E0", Offset = "0x66268E0", VA = "0x66278E0")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x66278F0", Offset = "0x66268F0", VA = "0x66278F0")]
	internal ScriptableRenderer InternalCreateRenderer()
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x6627910", Offset = "0x6626910", VA = "0x6627910", Slot = "9")]
	protected virtual void OnValidate()
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x6627920", Offset = "0x6626920", VA = "0x6627920", Slot = "10")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x600042E")]
	public bool TryGetRendererFeature<T>(out T rendererFeature) where T : ScriptableRendererFeature
	{
		return default(bool);
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x6627950", Offset = "0x6626950", VA = "0x6627950")]
	protected ScriptableRendererData()
	{
	}
}
