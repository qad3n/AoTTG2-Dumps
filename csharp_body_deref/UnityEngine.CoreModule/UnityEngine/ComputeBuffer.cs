using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000192")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/GraphicsBuffer.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsBuffer.h")]
[UnityEngine.NativeClass("GraphicsBuffer")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class ComputeBuffer : IDisposable
{
	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x170001DE")]
	public extern int count
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000B68")]
		[Address(RVA = "0x4ADC910", Offset = "0x4ADC910", VA = "0x4ADC910")]
		get;
	}

	[Token(Token = "0x170001DF")]
	public extern int stride
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000B69")]
		[Address(RVA = "0x4ADC940", Offset = "0x4ADC940", VA = "0x4ADC940")]
		get;
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x4ADC420", Offset = "0x4ADC420", VA = "0x4ADC420", Slot = "1")]
	~ComputeBuffer()
	{
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x4ADC5A0", Offset = "0x4ADC5A0", VA = "0x4ADC5A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4ADC500", Offset = "0x4ADC500", VA = "0x4ADC500")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4ADC690", Offset = "0x4ADC690", VA = "0x4ADC690")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::InitComputeBuffer")]
	private static extern IntPtr InitBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x4ADC660", Offset = "0x4ADC660", VA = "0x4ADC660")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::DestroyComputeBuffer")]
	private static extern void DestroyBuffer(ComputeBuffer buf);

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4ADC6E0", Offset = "0x4ADC6E0", VA = "0x4ADC6E0")]
	public ComputeBuffer(int count, int stride)
	{
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4ADC8C0", Offset = "0x4ADC8C0", VA = "0x4ADC8C0")]
	public ComputeBuffer(int count, int stride, ComputeBufferType type)
	{
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4ADC6F0", Offset = "0x4ADC6F0", VA = "0x4ADC6F0")]
	private ComputeBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage, int stackDepth)
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4ADC900", Offset = "0x4ADC900", VA = "0x4ADC900")]
	public void Release()
	{
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4ADC970", Offset = "0x4ADC970", VA = "0x4ADC970")]
	public void SetData(Array data)
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x4ADCB30", Offset = "0x4ADCB30", VA = "0x4ADCB30")]
	public void SetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x4ADCAD0", Offset = "0x4ADCAD0", VA = "0x4ADCAD0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize);
}
