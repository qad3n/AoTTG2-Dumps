// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.XRDepthMotionPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200015A")]
public class XRDepthMotionPass : ScriptableRenderPass
{
	[Token(Token = "0x200015B")]
	private class PassData
	{
		[Token(Token = "0x40007FA")]
		[FieldOffset(Offset = "0x10")]
		internal RendererListHandle objMotionRendererList;

		[Token(Token = "0x40007FB")]
		[FieldOffset(Offset = "0x20")]
		internal Matrix4x4[] previousViewProjectionStereo;

		[Token(Token = "0x40007FC")]
		[FieldOffset(Offset = "0x28")]
		internal Matrix4x4[] viewProjectionStereo;

		[Token(Token = "0x40007FD")]
		[FieldOffset(Offset = "0x30")]
		internal Material xrMotionVector;

		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x6675770", Offset = "0x6674770", VA = "0x6675770")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x40007EA")]
	public const string k_MotionOnlyShaderTagIdName = "XRMotionVectors";

	[Token(Token = "0x40007EB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ShaderTagId k_MotionOnlyShaderTagId;

	[Token(Token = "0x40007EC")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int k_SpaceWarpNDCModifier;

	[Token(Token = "0x40007ED")]
	[FieldOffset(Offset = "0x60")]
	private RTHandle m_XRMotionVectorColor;

	[Token(Token = "0x40007EE")]
	[FieldOffset(Offset = "0x68")]
	private TextureHandle xrMotionVectorColor;

	[Token(Token = "0x40007EF")]
	[FieldOffset(Offset = "0x78")]
	private RTHandle m_XRMotionVectorDepth;

	[Token(Token = "0x40007F0")]
	[FieldOffset(Offset = "0x80")]
	private TextureHandle xrMotionVectorDepth;

	[Token(Token = "0x40007F1")]
	[FieldOffset(Offset = "0x90")]
	private bool m_XRSpaceWarpRightHandedNDC;

	[Token(Token = "0x40007F2")]
	private const int k_XRViewCountPerPass = 2;

	[Token(Token = "0x40007F3")]
	[FieldOffset(Offset = "0x98")]
	private Matrix4x4[] m_StagingMatrixArray;

	[Token(Token = "0x40007F4")]
	[FieldOffset(Offset = "0xA0")]
	private Matrix4x4[] m_PreviousStagingMatrixArray;

	[Token(Token = "0x40007F5")]
	private const int k_XRViewCount = 4;

	[Token(Token = "0x40007F6")]
	[FieldOffset(Offset = "0xA8")]
	private Matrix4x4[] m_ViewProjection;

	[Token(Token = "0x40007F7")]
	[FieldOffset(Offset = "0xB0")]
	private Matrix4x4[] m_PreviousViewProjection;

	[Token(Token = "0x40007F8")]
	[FieldOffset(Offset = "0xB8")]
	private int m_LastFrameIndex;

	[Token(Token = "0x40007F9")]
	[FieldOffset(Offset = "0xC0")]
	private Material m_XRMotionVectorMaterial;

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x6672F80", Offset = "0x6671F80", VA = "0x6672F80")]
	public XRDepthMotionPass(RenderPassEvent evt, Shader xrMotionVector)
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x66734D0", Offset = "0x66724D0", VA = "0x66734D0")]
	private static DrawingSettings GetObjectMotionDrawingSettings(Camera camera)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x6673740", Offset = "0x6672740", VA = "0x6673740")]
	private void InitObjectMotionRendererLists(ref PassData passData, ref CullingResults cullResults, RenderGraph renderGraph, Camera camera)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x6673E00", Offset = "0x6672E00", VA = "0x6673E00")]
	private void InitPassData(ref PassData passData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x6673F00", Offset = "0x6672F00", VA = "0x6673F00")]
	private void ImportXRMotionColorAndDepth(RenderGraph renderGraph, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x6674640", Offset = "0x6673640", VA = "0x6674640")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x6673210", Offset = "0x6672210", VA = "0x6673210")]
	private void ResetMotionData()
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x6674E40", Offset = "0x6673E40", VA = "0x6674E40")]
	public void Update(ref UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x6675650", Offset = "0x6674650", VA = "0x6675650")]
	public void Dispose()
	{
	}
}
