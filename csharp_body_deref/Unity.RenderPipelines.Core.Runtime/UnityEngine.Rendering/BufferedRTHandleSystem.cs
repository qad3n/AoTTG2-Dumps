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
		[Address(RVA = "0x48BA530", Offset = "0x48BA530", VA = "0x48BA530")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013A")]
	public int maxHeight
	{
		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x48BA550", Offset = "0x48BA550", VA = "0x48BA550")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013B")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x48BA570", Offset = "0x48BA570", VA = "0x48BA570")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x48BA5A0", Offset = "0x48BA5A0", VA = "0x48BA5A0")]
	public RTHandle GetFrameRT(int bufferId, int frameIndex)
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x48BA640", Offset = "0x48BA640", VA = "0x48BA640")]
	public void ClearBuffers(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x48BA8A0", Offset = "0x48BA8A0", VA = "0x48BA8A0")]
	public void AllocBuffer(int bufferId, Func<RTHandleSystem, int, RTHandle> allocator, int bufferCount)
	{
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x48BAA50", Offset = "0x48BAA50", VA = "0x48BAA50")]
	public void ReleaseBuffer(int bufferId)
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x48BAB30", Offset = "0x48BAB30", VA = "0x48BAB30")]
	public void SwapAndSetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x48BAF30", Offset = "0x48BAF30", VA = "0x48BAF30")]
	public void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x48BAF50", Offset = "0x48BAF50", VA = "0x48BAF50")]
	public int GetNumFramesAllocated(int bufferId)
	{
		return default(int);
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x48BAFD0", Offset = "0x48BAFD0", VA = "0x48BAFD0")]
	public Vector2 CalculateRatioAgainstMaxSize(int width, int height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x48BAB60", Offset = "0x48BAB60", VA = "0x48BAB60")]
	private void Swap()
	{
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x48BB000", Offset = "0x48BB000", VA = "0x48BB000")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x48BB280", Offset = "0x48BB280", VA = "0x48BB280", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x48BB060", Offset = "0x48BB060", VA = "0x48BB060")]
	public void ReleaseAll()
	{
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x48BB2E0", Offset = "0x48BB2E0", VA = "0x48BB2E0")]
	public BufferedRTHandleSystem()
	{
	}
}
