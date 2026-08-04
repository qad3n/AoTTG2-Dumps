// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ComputeBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000195")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/GraphicsBuffer.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsBuffer.h")]
[UnityEngine.NativeClass("GraphicsBuffer")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class ComputeBuffer : IDisposable
{
	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x170001DF")]
	public extern int count
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0x4E04240", Offset = "0x4E04240", VA = "0x4E04240")]
		get;
	}

	[Token(Token = "0x170001E0")]
	public extern int stride
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x4E04270", Offset = "0x4E04270", VA = "0x4E04270")]
		get;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4E03D50", Offset = "0x4E03D50", VA = "0x4E03D50", Slot = "1")]
	~ComputeBuffer()
	{
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4E03ED0", Offset = "0x4E03ED0", VA = "0x4E03ED0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x4E03E30", Offset = "0x4E03E30", VA = "0x4E03E30")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4E03FC0", Offset = "0x4E03FC0", VA = "0x4E03FC0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::InitComputeBuffer")]
	private static extern IntPtr InitBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4E03F90", Offset = "0x4E03F90", VA = "0x4E03F90")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::DestroyComputeBuffer")]
	private static extern void DestroyBuffer(ComputeBuffer buf);

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4E04010", Offset = "0x4E04010", VA = "0x4E04010")]
	public ComputeBuffer(int count, int stride)
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4E041F0", Offset = "0x4E041F0", VA = "0x4E041F0")]
	public ComputeBuffer(int count, int stride, ComputeBufferType type)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x4E04020", Offset = "0x4E04020", VA = "0x4E04020")]
	private ComputeBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage, int stackDepth)
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4E04230", Offset = "0x4E04230", VA = "0x4E04230")]
	public void Release()
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x4E042A0", Offset = "0x4E042A0", VA = "0x4E042A0")]
	public void SetData(Array data)
	{
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x4E04460", Offset = "0x4E04460", VA = "0x4E04460")]
	public void SetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x4E04400", Offset = "0x4E04400", VA = "0x4E04400")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize);
}
