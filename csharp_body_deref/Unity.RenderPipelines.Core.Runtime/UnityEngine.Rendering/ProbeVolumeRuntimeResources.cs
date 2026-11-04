// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeRuntimeResources
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000135")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "R: Adaptive Probe Volumes", Order = 1000)]
[HideInInspector]
internal class ProbeVolumeRuntimeResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x18")]
	[Header("Runtime")]
	[ResourcePath("Runtime/Lighting/ProbeVolume/ProbeVolumeBlendStates.compute", SearchType.ProjectPath)]
	public ComputeShader probeVolumeBlendStatesCS;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x20")]
	[ResourcePath("Runtime/Lighting/ProbeVolume/ProbeVolumeUploadData.compute", SearchType.ProjectPath)]
	public ComputeShader probeVolumeUploadDataCS;

	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x28")]
	[ResourcePath("Runtime/Lighting/ProbeVolume/ProbeVolumeUploadDataL2.compute", SearchType.ProjectPath)]
	public ComputeShader probeVolumeUploadDataL2CS;

	[Token(Token = "0x17000136")]
	public int version
	{
		[Token(Token = "0x6000AA0")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	public ProbeVolumeRuntimeResources()
	{
	}
}
