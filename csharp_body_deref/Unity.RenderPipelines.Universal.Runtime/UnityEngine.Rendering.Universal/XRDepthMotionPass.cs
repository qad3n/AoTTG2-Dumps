// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.XRDepthMotionPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C71FF0", Offset = "0x2C705F0", VA = "0x182C71FF0")]
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
	[Address(RVA = "0x2C90BD0", Offset = "0x2C8F1D0", VA = "0x182C90BD0")]
	public XRDepthMotionPass(RenderPassEvent evt, Shader xrMotionVector)
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x2C8EDB0", Offset = "0x2C8D3B0", VA = "0x182C8EDB0")]
	private static DrawingSettings GetObjectMotionDrawingSettings(Camera camera)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x2C8F630", Offset = "0x2C8DC30", VA = "0x182C8F630")]
	private void InitObjectMotionRendererLists(ref PassData passData, ref CullingResults cullResults, RenderGraph renderGraph, Camera camera)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x2C8FC40", Offset = "0x2C8E240", VA = "0x182C8FC40")]
	private void InitPassData(ref PassData passData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x2C8F010", Offset = "0x2C8D610", VA = "0x182C8F010")]
	private void ImportXRMotionColorAndDepth(RenderGraph renderGraph, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x2C8FD60", Offset = "0x2C8E360", VA = "0x182C8FD60")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x2C90500", Offset = "0x2C8EB00", VA = "0x182C90500")]
	private void ResetMotionData()
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x2C90630", Offset = "0x2C8EC30", VA = "0x182C90630")]
	public void Update(ref UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x2C8ED40", Offset = "0x2C8D340", VA = "0x182C8ED40")]
	public void Dispose()
	{
	}
}
