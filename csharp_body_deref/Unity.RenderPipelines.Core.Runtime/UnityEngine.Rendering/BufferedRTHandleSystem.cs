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

[Token(Token = "0x200017E")]
public class BufferedRTHandleSystem : IDisposable
{
	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, RTHandle[]> m_RTHandles;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0x18")]
	private RTHandleSystem m_RTHandleSystem;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x20")]
	private bool m_DisposedValue;

	[Token(Token = "0x17000139")]
	public int maxWidth
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x4BDF5D0", Offset = "0x4BDF5D0", VA = "0x4BDF5D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013A")]
	public int maxHeight
	{
		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x4BDF5F0", Offset = "0x4BDF5F0", VA = "0x4BDF5F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013B")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x4BDF610", Offset = "0x4BDF610", VA = "0x4BDF610")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x4BDF640", Offset = "0x4BDF640", VA = "0x4BDF640")]
	public RTHandle GetFrameRT(int bufferId, int frameIndex)
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x4BDF6E0", Offset = "0x4BDF6E0", VA = "0x4BDF6E0")]
	public void ClearBuffers(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x4BDF940", Offset = "0x4BDF940", VA = "0x4BDF940")]
	public void AllocBuffer(int bufferId, Func<RTHandleSystem, int, RTHandle> allocator, int bufferCount)
	{
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x4BDFAF0", Offset = "0x4BDFAF0", VA = "0x4BDFAF0")]
	public void ReleaseBuffer(int bufferId)
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x4BDFBD0", Offset = "0x4BDFBD0", VA = "0x4BDFBD0")]
	public void SwapAndSetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x4BDFFD0", Offset = "0x4BDFFD0", VA = "0x4BDFFD0")]
	public void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x4BDFFF0", Offset = "0x4BDFFF0", VA = "0x4BDFFF0")]
	public int GetNumFramesAllocated(int bufferId)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x4BE0070", Offset = "0x4BE0070", VA = "0x4BE0070")]
	public Vector2 CalculateRatioAgainstMaxSize(int width, int height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x4BDFC00", Offset = "0x4BDFC00", VA = "0x4BDFC00")]
	private void Swap()
	{
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x4BE00A0", Offset = "0x4BE00A0", VA = "0x4BE00A0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x4BE0320", Offset = "0x4BE0320", VA = "0x4BE0320", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x4BE0100", Offset = "0x4BE0100", VA = "0x4BE0100")]
	public void ReleaseAll()
	{
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x4BE0380", Offset = "0x4BE0380", VA = "0x4BE0380")]
	public BufferedRTHandleSystem()
	{
	}
}
