// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GraphicsBuffer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000E6")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/GraphicsBuffer.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsBuffer.h")]
public sealed class GraphicsBuffer : IDisposable
{
	[Token(Token = "0x20000E7")]
	[Flags]
	public enum Target
	{
		[Token(Token = "0x4000255")]
		Vertex = 1,
		[Token(Token = "0x4000256")]
		Index = 2,
		[Token(Token = "0x4000257")]
		CopySource = 4,
		[Token(Token = "0x4000258")]
		CopyDestination = 8,
		[Token(Token = "0x4000259")]
		Structured = 0x10,
		[Token(Token = "0x400025A")]
		Raw = 0x20,
		[Token(Token = "0x400025B")]
		Append = 0x40,
		[Token(Token = "0x400025C")]
		Counter = 0x80,
		[Token(Token = "0x400025D")]
		IndirectArguments = 0x100,
		[Token(Token = "0x400025E")]
		Constant = 0x200
	}

	[Token(Token = "0x20000E8")]
	[Flags]
	public enum UsageFlags
	{
		[Token(Token = "0x4000260")]
		None = 0,
		[Token(Token = "0x4000261")]
		LockBufferForWrite = 1
	}

	[Token(Token = "0x20000E9")]
	public struct IndirectDrawIndexedArgs
	{
		[Token(Token = "0x4000264")]
		[FieldOffset(Offset = "0x8")]
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private uint _003CstartIndex_003Ek__BackingField;

		[Token(Token = "0x4000265")]
		[FieldOffset(Offset = "0xC")]
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private uint _003CbaseVertexIndex_003Ek__BackingField;

		[Token(Token = "0x4000266")]
		[FieldOffset(Offset = "0x10")]
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private uint _003CstartInstance_003Ek__BackingField;

		[Token(Token = "0x1700012C")]
		public uint indexCountPerInstance
		{
			[Token(Token = "0x60006CF")]
			[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700012D")]
		public uint instanceCount
		{
			[Token(Token = "0x60006D0")]
			[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
			[CompilerGenerated]
			set
			{
			}
		}
	}

	[Token(Token = "0x20000EA")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x2ED70C0", Offset = "0x2ED56C0", VA = "0x182ED70C0")]
		public static GraphicsBuffer ConvertToManaged(IntPtr ptr)
		{
			return null;
		}

		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(GraphicsBuffer graphicsBuffer)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000127")]
	public int count
	{
		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x2EDABC0", Offset = "0x2ED91C0", VA = "0x182EDABC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000128")]
	public int stride
	{
		[Token(Token = "0x60006B1")]
		[Address(RVA = "0x2EDAC60", Offset = "0x2ED9260", VA = "0x182EDAC60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000129")]
	public UsageFlags usageFlags
	{
		[Token(Token = "0x60006B3")]
		[Address(RVA = "0x2ED9BB0", Offset = "0x2ED81B0", VA = "0x182ED9BB0")]
		get
		{
			return default(UsageFlags);
		}
	}

	[Token(Token = "0x1700012A")]
	public GraphicsBufferHandle bufferHandle
	{
		[Token(Token = "0x60006B4")]
		[Address(RVA = "0x2EDAB10", Offset = "0x2ED9110", VA = "0x182EDAB10")]
		get
		{
			return default(GraphicsBufferHandle);
		}
	}

	[Token(Token = "0x1700012B")]
	public string name
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x2EDACC0", Offset = "0x2ED92C0", VA = "0x182EDACC0")]
		set
		{
		}
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x2ED9800", Offset = "0x2ED7E00", VA = "0x182ED9800", Slot = "1")]
	~GraphicsBuffer()
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x2ED95E0", Offset = "0x2ED7BE0", VA = "0x182ED95E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x2ED96A0", Offset = "0x2ED7CA0", VA = "0x182ED96A0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x2EDA3C0", Offset = "0x2ED89C0", VA = "0x182EDA3C0")]
	private static bool RequiresCompute(Target target)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x2EDA3B0", Offset = "0x2ED89B0", VA = "0x182EDA3B0")]
	private static bool IsVertexIndexOrCopyOnly(Target target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x2ED9C10", Offset = "0x2ED8210", VA = "0x182ED9C10")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::InitBuffer")]
	private static extern IntPtr InitBuffer(Target target, UsageFlags usageFlags, int count, int stride);

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x2ED95A0", Offset = "0x2ED7BA0", VA = "0x182ED95A0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::DestroyBuffer")]
	private static void DestroyBuffer(GraphicsBuffer buf)
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x2EC4A00", Offset = "0x2EC3000", VA = "0x182EC4A00")]
	private GraphicsBuffer(IntPtr ptr)
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x2EDAA70", Offset = "0x2ED9070", VA = "0x182EDAA70")]
	public GraphicsBuffer(Target target, int count, int stride)
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x2EDAA30", Offset = "0x2ED9030", VA = "0x182EDAA30")]
	public GraphicsBuffer(Target target, UsageFlags usageFlags, int count, int stride)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x2ED9D30", Offset = "0x2ED8330", VA = "0x182ED9D30")]
	private void InternalInitialization(Target target, UsageFlags usageFlags, int count, int stride)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x2ED95E0", Offset = "0x2ED7BE0", VA = "0x182ED95E0")]
	public void Release()
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x2EDA310", Offset = "0x2ED8910", VA = "0x182EDA310")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::IsValidBuffer")]
	private static bool IsValidBuffer(GraphicsBuffer buf)
	{
		return default(bool);
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x2EDA350", Offset = "0x2ED8950", VA = "0x182EDA350")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x2ED9BB0", Offset = "0x2ED81B0", VA = "0x182ED9BB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::GetUsageFlags", HasExplicitThis = true)]
	private UsageFlags GetUsageFlags()
	{
		return default(UsageFlags);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x2EDA690", Offset = "0x2ED8C90", VA = "0x182EDA690")]
	public void SetData(Array data)
	{
	}

	[Token(Token = "0x60006B6")]
	public void SetData<T>(NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x2EDA3D0", Offset = "0x2ED89D0", VA = "0x182EDA3D0")]
	public void SetData(Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x60006B8")]
	public void SetData<T>(NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x2EDA250", Offset = "0x2ED8850", VA = "0x182EDA250")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetNativeData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetNativeData(IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x2EDA180", Offset = "0x2ED8780", VA = "0x182EDA180")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetData(Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x2ED98B0", Offset = "0x2ED7EB0", VA = "0x182ED98B0")]
	public void GetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x2ED9CB0", Offset = "0x2ED82B0", VA = "0x182ED9CB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalGetData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalGetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x2ED94F0", Offset = "0x2ED7AF0", VA = "0x182ED94F0")]
	private unsafe void* BeginBufferWrite(int offset = 0, int size = 0)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60006BE")]
	public NativeArray<T> LockBufferForWrite<T>(int bufferStartIndex, int count) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x2ED97A0", Offset = "0x2ED7DA0", VA = "0x182ED97A0")]
	private void EndBufferWrite(int bytesWritten = 0)
	{
	}

	[Token(Token = "0x60006C0")]
	public void UnlockBufferAfterWrite<T>(int countWritten) where T : struct
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x2EDA880", Offset = "0x2ED8E80", VA = "0x182EDA880")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::SetName", HasExplicitThis = true)]
	private void SetName(string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x2ED9560", Offset = "0x2ED7B60", VA = "0x182ED9560")]
	private static extern void DestroyBuffer_Injected(IntPtr buf);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x2EDA2D0", Offset = "0x2ED88D0", VA = "0x182EDA2D0")]
	private static extern bool IsValidBuffer_Injected(IntPtr buf);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x2EDAB80", Offset = "0x2ED9180", VA = "0x182EDAB80")]
	private static extern int get_count_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x2EDAC20", Offset = "0x2ED9220", VA = "0x182EDAC20")]
	private static extern int get_stride_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x2ED9B70", Offset = "0x2ED8170", VA = "0x182ED9B70")]
	private static extern UsageFlags GetUsageFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x2EDAAC0", Offset = "0x2ED90C0", VA = "0x182EDAAC0")]
	private static extern void get_bufferHandle_Injected(IntPtr _unity_self, out GraphicsBufferHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x2EDA200", Offset = "0x2ED8800", VA = "0x182EDA200")]
	private static extern void InternalSetNativeData_Injected(IntPtr _unity_self, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x2EDA130", Offset = "0x2ED8730", VA = "0x182EDA130")]
	private static extern void InternalSetData_Injected(IntPtr _unity_self, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x2ED9C60", Offset = "0x2ED8260", VA = "0x182ED9C60")]
	private static extern void InternalGetData_Injected(IntPtr _unity_self, Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x2ED94A0", Offset = "0x2ED7AA0", VA = "0x182ED94A0")]
	private unsafe static extern void* BeginBufferWrite_Injected(IntPtr _unity_self, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x2ED9760", Offset = "0x2ED7D60", VA = "0x182ED9760")]
	private static extern void EndBufferWrite_Injected(IntPtr _unity_self, int bytesWritten);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x2EDA830", Offset = "0x2ED8E30", VA = "0x182EDA830")]
	private static extern void SetName_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);
}
