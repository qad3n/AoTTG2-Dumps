// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ComputeBuffer
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001D0")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsBuffer.h")]
[UnityEngine.NativeClass("GraphicsBuffer")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/GraphicsBuffer.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class ComputeBuffer : IDisposable
{
	[Token(Token = "0x20001D1")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000F08")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(ComputeBuffer computeBuffer)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x1700024F")]
	public int count
	{
		[Token(Token = "0x6000EFC")]
		[Address(RVA = "0x2F154C0", Offset = "0x2F13AC0", VA = "0x182F154C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000250")]
	public int stride
	{
		[Token(Token = "0x6000EFD")]
		[Address(RVA = "0x2F15560", Offset = "0x2F13B60", VA = "0x182F15560")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x2F14DE0", Offset = "0x2F133E0", VA = "0x182F14DE0", Slot = "1")]
	~ComputeBuffer()
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x2F14C60", Offset = "0x2F13260", VA = "0x182F14C60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x2F14D20", Offset = "0x2F13320", VA = "0x182F14D20")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x2F14E90", Offset = "0x2F13490", VA = "0x182F14E90")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::InitComputeBuffer")]
	private static extern IntPtr InitBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage);

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x2F14C20", Offset = "0x2F13220", VA = "0x182F14C20")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::DestroyComputeBuffer")]
	private static void DestroyBuffer(ComputeBuffer buf)
	{
	}

	[Token(Token = "0x6000EF8")]
	[Address(RVA = "0x2F15450", Offset = "0x2F13A50", VA = "0x182F15450")]
	public ComputeBuffer(int count, int stride)
	{
	}

	[Token(Token = "0x6000EF9")]
	[Address(RVA = "0x2F15220", Offset = "0x2F13820", VA = "0x182F15220")]
	public ComputeBuffer(int count, int stride, ComputeBufferType type)
	{
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x2F15250", Offset = "0x2F13850", VA = "0x182F15250")]
	private ComputeBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage, int stackDepth)
	{
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x2F14C60", Offset = "0x2F13260", VA = "0x182F14C60")]
	public void Release()
	{
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x2F15080", Offset = "0x2F13680", VA = "0x182F15080")]
	public void SetData(Array data)
	{
	}

	[Token(Token = "0x6000EFF")]
	public void SetData<T>(NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000F00")]
	public void SetData<T>(NativeArray<T> data, int nativeBufferStartIndex, int computeBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x2F15000", Offset = "0x2F13600", VA = "0x182F15000")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetNativeData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetNativeData(IntPtr data, int nativeBufferStartIndex, int computeBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x2F14F30", Offset = "0x2F13530", VA = "0x182F14F30")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x2F14BE0", Offset = "0x2F131E0", VA = "0x182F14BE0")]
	private static extern void DestroyBuffer_Injected(IntPtr buf);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x2F15480", Offset = "0x2F13A80", VA = "0x182F15480")]
	private static extern int get_count_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x2F15520", Offset = "0x2F13B20", VA = "0x182F15520")]
	private static extern int get_stride_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x2F14FB0", Offset = "0x2F135B0", VA = "0x182F14FB0")]
	private static extern void InternalSetNativeData_Injected(IntPtr _unity_self, IntPtr data, int nativeBufferStartIndex, int computeBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x2F14EE0", Offset = "0x2F134E0", VA = "0x182F14EE0")]
	private static extern void InternalSetData_Injected(IntPtr _unity_self, Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize);
}
