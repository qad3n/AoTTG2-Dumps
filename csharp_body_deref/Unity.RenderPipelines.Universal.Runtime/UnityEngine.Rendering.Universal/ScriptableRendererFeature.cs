// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScriptableRendererFeature
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000BF")]
[ExcludeFromPreset]
public abstract class ScriptableRendererFeature : ScriptableObject, IDisposable
{
	[Token(Token = "0x20000C0")]
	[Obsolete("This enum is not used. #from(6000.3)", false)]
	public enum IntermediateTextureUsage
	{
		[Token(Token = "0x400042B")]
		Unknown,
		[Token(Token = "0x400042C")]
		Required,
		[Token(Token = "0x400042D")]
		NotRequired
	}

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[HideInInspector]
	private bool m_Active;

	[Token(Token = "0x17000131")]
	public bool isActive
	{
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	[Obsolete("This property is not used. #from(6000.3)", false)]
	protected virtual IntermediateTextureUsage useIntermediateTextures
	{
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
		get
		{
			return default(IntermediateTextureUsage);
		}
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void SetupRenderPasses(ScriptableRenderer renderer, in RenderingData renderingData)
	{
	}

	[Token(Token = "0x60004AB")]
	public abstract void Create();

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void OnCameraPreCull(ScriptableRenderer renderer, in CameraData cameraData)
	{
	}

	[Token(Token = "0x60004AD")]
	public abstract void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData);

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x2C3FA90", Offset = "0x2C3E090", VA = "0x182C3FA90")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x2C3FB20", Offset = "0x2C3E120", VA = "0x182C3FB20")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x2C3FBB0", Offset = "0x2C3E1B0", VA = "0x182C3FBB0", Slot = "10")]
	internal virtual bool RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals, out RenderingLayerUtils.Event atEvent, out RenderingLayerUtils.MaskSize maskSize)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x2C3FA30", Offset = "0x2C3E030", VA = "0x182C3FA30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x2B66210", Offset = "0x2B64810", VA = "0x182B66210")]
	protected ScriptableRendererFeature()
	{
	}
}
