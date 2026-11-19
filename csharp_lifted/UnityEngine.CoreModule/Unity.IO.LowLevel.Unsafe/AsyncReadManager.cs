// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.AsyncReadManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.Bindings;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x2000044")]
[UnityEngine.Bindings.NativeHeader("Runtime/File/AsyncReadManagerManagedApi.h")]
public static class AsyncReadManager
{
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x68B7350", Offset = "0x68B6350", VA = "0x68B7350")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::GetFileInfo", IsThreadSafe = true)]
	private unsafe static ReadHandle GetFileInfoInternal(string filename, void* cmd)
	{
		return default(ReadHandle);
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x68B7510", Offset = "0x68B6510", VA = "0x68B7510")]
	public unsafe static ReadHandle GetFileInfo(string filename, FileInfoResult* result)
	{
		return default(ReadHandle);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x68B7570", Offset = "0x68B6570", VA = "0x68B7570")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::ReadWithHandles_NativeCopy", IsThreadSafe = true)]
	private unsafe static ReadHandle ReadWithHandlesInternal_NativeCopy(in FileHandle fileHandle, void* readCmdArray)
	{
		return default(ReadHandle);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x68B7600", Offset = "0x68B6600", VA = "0x68B7600")]
	public static ReadHandle Read(in FileHandle fileHandle, ReadCommandArray readCmdArray)
	{
		return default(ReadHandle);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x68B76D0", Offset = "0x68B66D0", VA = "0x68B76D0")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::ScheduleOpenRequest", IsThreadSafe = true)]
	private static FileHandle OpenFileAsync_Internal(string fileName)
	{
		return default(FileHandle);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x68B7890", Offset = "0x68B6890", VA = "0x68B7890")]
	public static FileHandle OpenFileAsync(string fileName)
	{
		return default(FileHandle);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x68B6C70", Offset = "0x68B5C70", VA = "0x68B6C70")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::ScheduleCloseRequest", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static JobHandle CloseFileAsync(in FileHandle fileHandle, JobHandle dependency)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x68B74D0", Offset = "0x68B64D0", VA = "0x68B74D0")]
	private unsafe static extern void GetFileInfoInternal_Injected(ref ManagedSpanWrapper filename, void* cmd, out ReadHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x68B75C0", Offset = "0x68B65C0", VA = "0x68B75C0")]
	private unsafe static extern void ReadWithHandlesInternal_NativeCopy_Injected(in FileHandle fileHandle, void* readCmdArray, out ReadHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x68B7850", Offset = "0x68B6850", VA = "0x68B7850")]
	private static extern void OpenFileAsync_Internal_Injected(ref ManagedSpanWrapper fileName, out FileHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x68B78F0", Offset = "0x68B68F0", VA = "0x68B78F0")]
	private static extern void CloseFileAsync_Injected(in FileHandle fileHandle, [In] ref JobHandle dependency, out JobHandle ret);
}
