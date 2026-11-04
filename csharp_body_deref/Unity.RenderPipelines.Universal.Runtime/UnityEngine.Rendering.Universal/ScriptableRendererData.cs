// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScriptableRendererData
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000421")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	internal virtual bool stripShadowsOffVariants
	{
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x1AD8270", Offset = "0x1AD6870", VA = "0x181AD8270", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x1D263A0", Offset = "0x1D249A0", VA = "0x181D263A0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	internal virtual bool stripAdditionalLightOffVariants
	{
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x1D26370", Offset = "0x1D24970", VA = "0x181D26370", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x1D26390", Offset = "0x1D24990", VA = "0x181D26390", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	public List<ScriptableRendererFeature> rendererFeatures
	{
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	public bool useNativeRenderPass
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x2C2A0C0", Offset = "0x2C286C0", VA = "0x182C2A0C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000426")]
	protected abstract ScriptableRenderer Create();

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x2ABF3A0", Offset = "0x2ABD9A0", VA = "0x182ABF3A0")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x2C29FD0", Offset = "0x2C285D0", VA = "0x182C29FD0")]
	internal ScriptableRenderer InternalCreateRenderer()
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x2ABF3A0", Offset = "0x2ABD9A0", VA = "0x182ABF3A0", Slot = "9")]
	protected virtual void OnValidate()
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x2ABF3A0", Offset = "0x2ABD9A0", VA = "0x182ABF3A0", Slot = "10")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x600042E")]
	public bool TryGetRendererFeature<T>(out T rendererFeature) where T : ScriptableRendererFeature
	{
		return default(bool);
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x2C29FF0", Offset = "0x2C285F0", VA = "0x182C29FF0")]
	protected ScriptableRendererData()
	{
	}
}
