// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BufferedRTHandleSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000195")]
public class BufferedRTHandleSystem : IDisposable
{
	[Token(Token = "0x40007D0")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, RTHandle[]> m_RTHandles;

	[Token(Token = "0x40007D1")]
	[FieldOffset(Offset = "0x18")]
	private RTHandleSystem m_RTHandleSystem;

	[Token(Token = "0x40007D2")]
	[FieldOffset(Offset = "0x20")]
	private bool m_DisposedValue;

	[Token(Token = "0x1700016F")]
	public int maxWidth
	{
		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x6526550", Offset = "0x6525550", VA = "0x6526550")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000170")]
	public int maxHeight
	{
		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x6526570", Offset = "0x6525570", VA = "0x6526570")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000171")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x6526590", Offset = "0x6525590", VA = "0x6526590")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x65265C0", Offset = "0x65255C0", VA = "0x65265C0")]
	public RTHandle GetFrameRT(int bufferId, int frameIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x6526660", Offset = "0x6525660", VA = "0x6526660")]
	public void ClearBuffers(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x6526860", Offset = "0x6525860", VA = "0x6526860")]
	public void AllocBuffer(int bufferId, Func<RTHandleSystem, int, RTHandle> allocator, int bufferCount)
	{
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x6526AF0", Offset = "0x6525AF0", VA = "0x6526AF0")]
	public void AllocBuffer(int bufferId, int bufferCount, ref RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x6527220", Offset = "0x6526220", VA = "0x6527220")]
	public void ReleaseBuffer(int bufferId)
	{
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x6527310", Offset = "0x6526310", VA = "0x6527310")]
	public void SwapAndSetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x65276B0", Offset = "0x65266B0", VA = "0x65276B0")]
	public void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x65276E0", Offset = "0x65266E0", VA = "0x65276E0")]
	public int GetNumFramesAllocated(int bufferId)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x6527760", Offset = "0x6526760", VA = "0x6527760")]
	public Vector2 CalculateRatioAgainstMaxSize(int width, int height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x6527340", Offset = "0x6526340", VA = "0x6527340")]
	private void Swap()
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x6527A40", Offset = "0x6526A40", VA = "0x6527A40")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x6527C90", Offset = "0x6526C90", VA = "0x6527C90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x6527AA0", Offset = "0x6526AA0", VA = "0x6527AA0")]
	public void ReleaseAll()
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x6527CF0", Offset = "0x6526CF0", VA = "0x6527CF0")]
	public BufferedRTHandleSystem()
	{
	}
}
