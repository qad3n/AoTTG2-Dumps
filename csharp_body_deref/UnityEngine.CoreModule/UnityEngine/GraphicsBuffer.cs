// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GraphicsBuffer
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000E7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsBuffer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/GraphicsBuffer.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class GraphicsBuffer : IDisposable
{
	[Token(Token = "0x20000E8")]
	[Flags]
	public enum Target
	{
		[Token(Token = "0x400025A")]
		Vertex = 1,
		[Token(Token = "0x400025B")]
		Index = 2,
		[Token(Token = "0x400025C")]
		CopySource = 4,
		[Token(Token = "0x400025D")]
		CopyDestination = 8,
		[Token(Token = "0x400025E")]
		Structured = 0x10,
		[Token(Token = "0x400025F")]
		Raw = 0x20,
		[Token(Token = "0x4000260")]
		Append = 0x40,
		[Token(Token = "0x4000261")]
		Counter = 0x80,
		[Token(Token = "0x4000262")]
		IndirectArguments = 0x100,
		[Token(Token = "0x4000263")]
		Constant = 0x200
	}

	[Token(Token = "0x20000E9")]
	[Flags]
	public enum UsageFlags
	{
		[Token(Token = "0x4000265")]
		None = 0,
		[Token(Token = "0x4000266")]
		LockBufferForWrite = 1
	}

	[Token(Token = "0x20000EA")]
	public struct IndirectDrawIndexedArgs
	{
		[Token(Token = "0x4000269")]
		[FieldOffset(Offset = "0x8")]
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private uint _003CstartIndex_003Ek__BackingField;

		[Token(Token = "0x400026A")]
		[FieldOffset(Offset = "0xC")]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		[CompilerGenerated]
		private uint _003CbaseVertexIndex_003Ek__BackingField;

		[Token(Token = "0x400026B")]
		[FieldOffset(Offset = "0x10")]
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private uint _003CstartInstance_003Ek__BackingField;

		[Token(Token = "0x17000132")]
		public uint indexCountPerInstance
		{
			[Token(Token = "0x60006DF")]
			[Address(RVA = "0x68E2830", Offset = "0x68E1830", VA = "0x68E2830")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000133")]
		public uint instanceCount
		{
			[Token(Token = "0x60006E0")]
			[Address(RVA = "0x68E2840", Offset = "0x68E1840", VA = "0x68E2840")]
			[CompilerGenerated]
			set
			{
			}
		}
	}

	[Token(Token = "0x20000EB")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x68E2850", Offset = "0x68E1850", VA = "0x68E2850")]
		public static GraphicsBuffer ConvertToManaged(IntPtr ptr)
		{
			return null;
		}

		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x68E28A0", Offset = "0x68E18A0", VA = "0x68E28A0")]
		public static IntPtr ConvertToNative(GraphicsBuffer graphicsBuffer)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x1700012D")]
	public int count
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x68E18F0", Offset = "0x68E08F0", VA = "0x68E18F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012E")]
	public int stride
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x68E1980", Offset = "0x68E0980", VA = "0x68E1980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012F")]
	public UsageFlags usageFlags
	{
		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x68E1AA0", Offset = "0x68E0AA0", VA = "0x68E1AA0")]
		get
		{
			return default(UsageFlags);
		}
	}

	[Token(Token = "0x17000130")]
	public GraphicsBufferHandle bufferHandle
	{
		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x68E1B00", Offset = "0x68E0B00", VA = "0x68E1B00")]
		get
		{
			return default(GraphicsBufferHandle);
		}
	}

	[Token(Token = "0x17000131")]
	public string name
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x68E2640", Offset = "0x68E1640", VA = "0x68E2640")]
		set
		{
		}
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x68E10F0", Offset = "0x68E00F0", VA = "0x68E10F0", Slot = "1")]
	~GraphicsBuffer()
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x68E12A0", Offset = "0x68E02A0", VA = "0x68E12A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x68E11E0", Offset = "0x68E01E0", VA = "0x68E11E0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x68E13D0", Offset = "0x68E03D0", VA = "0x68E13D0")]
	private static bool RequiresCompute(Target target)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x68E13E0", Offset = "0x68E03E0", VA = "0x68E13E0")]
	private static bool IsVertexIndexOrCopyOnly(Target target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x68E13F0", Offset = "0x68E03F0", VA = "0x68E13F0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::InitBuffer")]
	private static extern IntPtr InitBuffer(Target target, UsageFlags usageFlags, int count, int stride);

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x68E1380", Offset = "0x68E0380", VA = "0x68E1380")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::DestroyBuffer")]
	private static void DestroyBuffer(GraphicsBuffer buf)
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x68E1470", Offset = "0x68E0470", VA = "0x68E1470")]
	private GraphicsBuffer(IntPtr ptr)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x68E1490", Offset = "0x68E0490", VA = "0x68E1490")]
	public GraphicsBuffer(Target target, int count, int stride)
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x68E17E0", Offset = "0x68E07E0", VA = "0x68E17E0")]
	public GraphicsBuffer(Target target, UsageFlags usageFlags, int count, int stride)
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x68E14D0", Offset = "0x68E04D0", VA = "0x68E14D0")]
	private void InternalInitialization(Target target, UsageFlags usageFlags, int count, int stride)
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x68E1820", Offset = "0x68E0820", VA = "0x68E1820")]
	public void Release()
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x68E1830", Offset = "0x68E0830", VA = "0x68E1830")]
	[UnityEngine.Bindings.FreeFunction("GraphicsBuffer_Bindings::IsValidBuffer")]
	private static bool IsValidBuffer(GraphicsBuffer buf)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x68E18B0", Offset = "0x68E08B0", VA = "0x68E18B0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x68E1A10", Offset = "0x68E0A10", VA = "0x68E1A10")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::GetUsageFlags", HasExplicitThis = true)]
	private UsageFlags GetUsageFlags()
	{
		return default(UsageFlags);
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x68E1BB0", Offset = "0x68E0BB0", VA = "0x68E1BB0")]
	public void SetData(Array data)
	{
	}

	[Token(Token = "0x60006C6")]
	public void SetData<T>(NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x68E1DC0", Offset = "0x68E0DC0", VA = "0x68E1DC0")]
	public void SetData(Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x60006C8")]
	public void SetData<T>(NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x68E2040", Offset = "0x68E1040", VA = "0x68E2040")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetNativeData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetNativeData(IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x68E1D30", Offset = "0x68E0D30", VA = "0x68E1D30")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalSetData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetData(Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x68E2190", Offset = "0x68E1190", VA = "0x68E2190")]
	public void GetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x68E2410", Offset = "0x68E1410", VA = "0x68E2410")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::InternalGetData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalGetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x68E2500", Offset = "0x68E1500", VA = "0x68E2500")]
	private unsafe void* BeginBufferWrite(int offset = 0, int size = 0)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60006CE")]
	public NativeArray<T> LockBufferForWrite<T>(int bufferStartIndex, int count) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x68E25A0", Offset = "0x68E15A0", VA = "0x68E25A0")]
	private void EndBufferWrite(int bytesWritten = 0)
	{
	}

	[Token(Token = "0x60006D0")]
	public void UnlockBufferAfterWrite<T>(int countWritten) where T : struct
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x68E2650", Offset = "0x68E1650", VA = "0x68E2650")]
	[UnityEngine.Bindings.FreeFunction(Name = "GraphicsBuffer_Bindings::SetName", HasExplicitThis = true)]
	private void SetName(string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x68E1440", Offset = "0x68E0440", VA = "0x68E1440")]
	private static extern void DestroyBuffer_Injected(IntPtr buf);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x68E1880", Offset = "0x68E0880", VA = "0x68E1880")]
	private static extern bool IsValidBuffer_Injected(IntPtr buf);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x68E1950", Offset = "0x68E0950", VA = "0x68E1950")]
	private static extern int get_count_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x68E19E0", Offset = "0x68E09E0", VA = "0x68E19E0")]
	private static extern int get_stride_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x68E1A70", Offset = "0x68E0A70", VA = "0x68E1A70")]
	private static extern UsageFlags GetUsageFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x68E1B70", Offset = "0x68E0B70", VA = "0x68E1B70")]
	private static extern void get_bufferHandle_Injected(IntPtr _unity_self, out GraphicsBufferHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x68E20D0", Offset = "0x68E10D0", VA = "0x68E20D0")]
	private static extern void InternalSetNativeData_Injected(IntPtr _unity_self, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x68E2130", Offset = "0x68E1130", VA = "0x68E2130")]
	private static extern void InternalSetData_Injected(IntPtr _unity_self, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x68E24A0", Offset = "0x68E14A0", VA = "0x68E24A0")]
	private static extern void InternalGetData_Injected(IntPtr _unity_self, Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x68E2560", Offset = "0x68E1560", VA = "0x68E2560")]
	private unsafe static extern void* BeginBufferWrite_Injected(IntPtr _unity_self, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x68E2600", Offset = "0x68E1600", VA = "0x68E2600")]
	private static extern void EndBufferWrite_Injected(IntPtr _unity_self, int bytesWritten);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x68E27F0", Offset = "0x68E17F0", VA = "0x68E27F0")]
	private static extern void SetName_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);
}
