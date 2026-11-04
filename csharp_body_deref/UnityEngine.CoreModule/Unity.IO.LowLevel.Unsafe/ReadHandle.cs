// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.ReadHandle
// Update status: NEW in this game update
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
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x2ED01B0", Offset = "0x2ECE7B0", VA = "0x182ED01B0")]
		get
		{
			return default(JobHandle);
		}
	}

	[Token(Token = "0x1700001A")]
	public ReadStatus Status
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x2ED02A0", Offset = "0x2ECE8A0", VA = "0x182ED02A0")]
		get
		{
			return default(ReadStatus);
		}
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2ED00F0", Offset = "0x2ECE6F0", VA = "0x182ED00F0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2ECFE40", Offset = "0x2ECE440", VA = "0x182ECFE40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x2ECFD80", Offset = "0x2ECE380", VA = "0x182ECFD80")]
	public void Cancel()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x2ECFD40", Offset = "0x2ECE340", VA = "0x182ECFD40")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::CancelReadRequest")]
	private static void CancelInternal(ReadHandle handle)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x2ED0030", Offset = "0x2ECE630", VA = "0x182ED0030")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::GetReadStatus", IsThreadSafe = true)]
	private static ReadStatus GetReadStatus(ReadHandle handle)
	{
		return default(ReadStatus);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x2ED0170", Offset = "0x2ECE770", VA = "0x182ED0170")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::ReleaseReadHandle", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	private static void ReleaseReadHandle(ReadHandle handle)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x2ED00B0", Offset = "0x2ECE6B0", VA = "0x182ED00B0")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::IsReadHandleValid", IsThreadSafe = true)]
	private static bool IsReadHandleValid(ReadHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x2ECFFA0", Offset = "0x2ECE5A0", VA = "0x182ECFFA0")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::GetJobHandle", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	private static JobHandle GetJobHandle(ReadHandle handle)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x2ECFD00", Offset = "0x2ECE300", VA = "0x182ECFD00")]
	private static extern void CancelInternal_Injected([In] ref ReadHandle handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x2ECFFF0", Offset = "0x2ECE5F0", VA = "0x182ECFFF0")]
	private static extern ReadStatus GetReadStatus_Injected([In] ref ReadHandle handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x2ED0130", Offset = "0x2ECE730", VA = "0x182ED0130")]
	private static extern void ReleaseReadHandle_Injected([In] ref ReadHandle handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x2ED0070", Offset = "0x2ECE670", VA = "0x182ED0070")]
	private static extern bool IsReadHandleValid_Injected([In] ref ReadHandle handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x2ECFF50", Offset = "0x2ECE550", VA = "0x182ECFF50")]
	private static extern void GetJobHandle_Injected([In] ref ReadHandle handle, out JobHandle ret);
}
