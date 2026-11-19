// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.ReadHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.Bindings;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x2000043")]
public struct ReadHandle : IDisposable
{
	[Token(Token = "0x40000C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal IntPtr ptr;

	[Token(Token = "0x40000C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal int version;

	[Token(Token = "0x17000019")]
	public JobHandle JobHandle
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x68B7100", Offset = "0x68B6100", VA = "0x68B7100")]
		get
		{
			return default(JobHandle);
		}
	}

	[Token(Token = "0x1700001A")]
	public ReadStatus Status
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x68B6EA0", Offset = "0x68B5EA0", VA = "0x68B6EA0")]
		get
		{
			return default(ReadStatus);
		}
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x68B6D10", Offset = "0x68B5D10", VA = "0x68B6D10")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x68B6DB0", Offset = "0x68B5DB0", VA = "0x68B6DB0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x68B6FC0", Offset = "0x68B5FC0", VA = "0x68B6FC0")]
	public void Cancel()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x68B7080", Offset = "0x68B6080", VA = "0x68B7080")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::CancelReadRequest")]
	private static void CancelInternal(ReadHandle handle)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x68B7230", Offset = "0x68B6230", VA = "0x68B7230")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::GetReadStatus", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	private static ReadStatus GetReadStatus(ReadHandle handle)
	{
		return default(ReadStatus);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x68B6F70", Offset = "0x68B5F70", VA = "0x68B6F70")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::ReleaseReadHandle", IsThreadSafe = true)]
	private static void ReleaseReadHandle(ReadHandle handle)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x68B6D60", Offset = "0x68B5D60", VA = "0x68B6D60")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::IsReadHandleValid", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	private static bool IsReadHandleValid(ReadHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x68B71E0", Offset = "0x68B61E0", VA = "0x68B71E0")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::GetJobHandle", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	private static JobHandle GetJobHandle(ReadHandle handle)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x68B70D0", Offset = "0x68B60D0", VA = "0x68B70D0")]
	private static extern void CancelInternal_Injected([In] ref ReadHandle handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x68B7280", Offset = "0x68B6280", VA = "0x68B7280")]
	private static extern ReadStatus GetReadStatus_Injected([In] ref ReadHandle handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x68B72B0", Offset = "0x68B62B0", VA = "0x68B72B0")]
	private static extern void ReleaseReadHandle_Injected([In] ref ReadHandle handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x68B72E0", Offset = "0x68B62E0", VA = "0x68B72E0")]
	private static extern bool IsReadHandleValid_Injected([In] ref ReadHandle handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x68B7310", Offset = "0x68B6310", VA = "0x68B7310")]
	private static extern void GetJobHandle_Injected([In] ref ReadHandle handle, out JobHandle ret);
}
