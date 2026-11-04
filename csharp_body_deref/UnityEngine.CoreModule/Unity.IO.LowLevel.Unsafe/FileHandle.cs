// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.FileHandle
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
using UnityEngine.Bindings;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x2000042")]
public readonly struct FileHandle
{
	[Token(Token = "0x40000C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr fileCommandPtr;

	[Token(Token = "0x40000C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal readonly int version;

	[Token(Token = "0x17000018")]
	public JobHandle JobHandle
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x2EC70B0", Offset = "0x2EC56B0", VA = "0x182EC70B0")]
		get
		{
			return default(JobHandle);
		}
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x2EC7070", Offset = "0x2EC5670", VA = "0x182EC7070")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x2EC6EE0", Offset = "0x2EC54E0", VA = "0x182EC6EE0")]
	public JobHandle Close([Optional] JobHandle dependency)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2EC7070", Offset = "0x2EC5670", VA = "0x182EC7070")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::IsFileHandleValid")]
	private static extern bool IsFileHandleValid(in FileHandle handle);

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2EC7020", Offset = "0x2EC5620", VA = "0x182EC7020")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::GetJobFenceFromManagedHandle")]
	private static JobHandle GetJobHandle_Internal(in FileHandle handle)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2EC6FD0", Offset = "0x2EC55D0", VA = "0x182EC6FD0")]
	private static extern void GetJobHandle_Internal_Injected(in FileHandle handle, out JobHandle ret);
}
