// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.XRSystemData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000B1")]
[Obsolete("Moved to UniversalRenderPipelineRuntimeXRResources on GraphicsSettings. #from(2023.3)")]
public class XRSystemData : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x20000B2")]
	[ReloadGroup]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeXRResources on GraphicsSettings. #from(2023.3)")]
	public sealed class ShaderResources
	{
		[Token(Token = "0x4000383")]
		[FieldOffset(Offset = "0x10")]
		[Reload("Shaders/XR/XROcclusionMesh.shader", ReloadAttribute.Package.Root)]
		public Shader xrOcclusionMeshPS;

		[Token(Token = "0x4000384")]
		[FieldOffset(Offset = "0x18")]
		[Reload("Shaders/XR/XRMirrorView.shader", ReloadAttribute.Package.Root)]
		public Shader xrMirrorViewPS;

		[Token(Token = "0x6000436")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ShaderResources()
		{
		}
	}

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x18")]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeXRResources on GraphicsSettings. #from(2023.3)")]
	public ShaderResources shaders;

	[Token(Token = "0x6000435")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	public XRSystemData()
	{
	}
}
