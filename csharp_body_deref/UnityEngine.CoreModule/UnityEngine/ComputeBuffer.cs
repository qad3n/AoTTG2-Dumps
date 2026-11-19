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
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001D1")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsBuffer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/GraphicsBuffer.bindings.h")]
[UnityEngine.NativeClass("GraphicsBuffer")]
public sealed class ComputeBuffer : IDisposable
{
	[Token(Token = "0x20001D2")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000F1A")]
		[Address(RVA = "0x6924AB0", Offset = "0x6923AB0", VA = "0x6924AB0")]
		public static IntPtr ConvertToNative(ComputeBuffer computeBuffer)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000666")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000254")]
	public int count
	{
		[Token(Token = "0x6000F0E")]
		[Address(RVA = "0x6924630", Offset = "0x6923630", VA = "0x6924630")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000255")]
	public int stride
	{
		[Token(Token = "0x6000F0F")]
		[Address(RVA = "0x69246C0", Offset = "0x69236C0", VA = "0x69246C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x69240A0", Offset = "0x69230A0", VA = "0x69240A0", Slot = "1")]
	~ComputeBuffer()
	{
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x6924250", Offset = "0x6923250", VA = "0x6924250", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x6924190", Offset = "0x6923190", VA = "0x6924190")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x6924380", Offset = "0x6923380", VA = "0x6924380")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::InitComputeBuffer")]
	private static extern IntPtr InitBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage);

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x6924330", Offset = "0x6923330", VA = "0x6924330")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::DestroyComputeBuffer")]
	private static void DestroyBuffer(ComputeBuffer buf)
	{
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x6924400", Offset = "0x6923400", VA = "0x6924400")]
	public ComputeBuffer(int count, int stride)
	{
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x69245E0", Offset = "0x69235E0", VA = "0x69245E0")]
	public ComputeBuffer(int count, int stride, ComputeBufferType type)
	{
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x6924410", Offset = "0x6923410", VA = "0x6924410")]
	private ComputeBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage, int stackDepth)
	{
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x6924620", Offset = "0x6923620", VA = "0x6924620")]
	public void Release()
	{
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x6924750", Offset = "0x6923750", VA = "0x6924750")]
	public void SetData(Array data)
	{
	}

	[Token(Token = "0x6000F11")]
	public void SetData<T>(NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000F12")]
	public void SetData<T>(NativeArray<T> data, int nativeBufferStartIndex, int computeBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x6924960", Offset = "0x6923960", VA = "0x6924960")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetNativeData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetNativeData(IntPtr data, int nativeBufferStartIndex, int computeBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x69248D0", Offset = "0x69238D0", VA = "0x69248D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x69243D0", Offset = "0x69233D0", VA = "0x69243D0")]
	private static extern void DestroyBuffer_Injected(IntPtr buf);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x6924690", Offset = "0x6923690", VA = "0x6924690")]
	private static extern int get_count_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x6924720", Offset = "0x6923720", VA = "0x6924720")]
	private static extern int get_stride_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x69249F0", Offset = "0x69239F0", VA = "0x69249F0")]
	private static extern void InternalSetNativeData_Injected(IntPtr _unity_self, IntPtr data, int nativeBufferStartIndex, int computeBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x6924A50", Offset = "0x6923A50", VA = "0x6924A50")]
	private static extern void InternalSetData_Injected(IntPtr _unity_self, Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize);
}
