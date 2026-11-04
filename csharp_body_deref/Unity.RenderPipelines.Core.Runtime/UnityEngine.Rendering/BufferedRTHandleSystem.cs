// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BufferedRTHandleSystem
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2B3F280", Offset = "0x2B3D880", VA = "0x182B3F280")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000170")]
	public int maxHeight
	{
		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x2B3F260", Offset = "0x2B3D860", VA = "0x182B3F260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000171")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x2B3F2A0", Offset = "0x2B3D8A0", VA = "0x182B3F2A0")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x2B3E9F0", Offset = "0x2B3CFF0", VA = "0x182B3E9F0")]
	public RTHandle GetFrameRT(int bufferId, int frameIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x2B3E760", Offset = "0x2B3CD60", VA = "0x182B3E760")]
	public void ClearBuffers(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x2B3E4F0", Offset = "0x2B3CAF0", VA = "0x182B3E4F0")]
	public void AllocBuffer(int bufferId, Func<RTHandleSystem, int, RTHandle> allocator, int bufferCount)
	{
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x2B3E150", Offset = "0x2B3C750", VA = "0x182B3E150")]
	public void AllocBuffer(int bufferId, int bufferCount, ref RenderTextureDescriptor descriptor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x2B3ECF0", Offset = "0x2B3D2F0", VA = "0x182B3ECF0")]
	public void ReleaseBuffer(int bufferId)
	{
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x2B3EE00", Offset = "0x2B3D400", VA = "0x182B3EE00")]
	public void SwapAndSetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x2B3EDD0", Offset = "0x2B3D3D0", VA = "0x182B3EDD0")]
	public void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x2B3EAA0", Offset = "0x2B3D0A0", VA = "0x182B3EAA0")]
	public int GetNumFramesAllocated(int bufferId)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x2B3E720", Offset = "0x2B3CD20", VA = "0x182B3E720")]
	public Vector2 CalculateRatioAgainstMaxSize(int width, int height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x2B3EE60", Offset = "0x2B3D460", VA = "0x182B3EE60")]
	private void Swap()
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x2B3E950", Offset = "0x2B3CF50", VA = "0x182B3E950")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x2B3E9A0", Offset = "0x2B3CFA0", VA = "0x182B3E9A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x2B3EB30", Offset = "0x2B3D130", VA = "0x182B3EB30")]
	public void ReleaseAll()
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x2B3F1B0", Offset = "0x2B3D7B0", VA = "0x182B3F1B0")]
	public BufferedRTHandleSystem()
	{
	}
}
