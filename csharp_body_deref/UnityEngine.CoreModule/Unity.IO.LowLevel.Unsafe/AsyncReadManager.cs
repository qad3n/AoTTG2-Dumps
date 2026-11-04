// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.AsyncReadManager
// Update status: NEW in this game update
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
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x2EBB2C0", Offset = "0x2EB98C0", VA = "0x182EBB2C0")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::GetFileInfo", IsThreadSafe = true)]
	private unsafe static ReadHandle GetFileInfoInternal(string filename, void* cmd)
	{
		return default(ReadHandle);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2EBB4A0", Offset = "0x2EB9AA0", VA = "0x182EBB4A0")]
	public unsafe static ReadHandle GetFileInfo(string filename, FileInfoResult* result)
	{
		return default(ReadHandle);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x2EBB830", Offset = "0x2EB9E30", VA = "0x182EBB830")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::ReadWithHandles_NativeCopy", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	private unsafe static ReadHandle ReadWithHandlesInternal_NativeCopy(in FileHandle fileHandle, void* readCmdArray)
	{
		return default(ReadHandle);
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2EBB890", Offset = "0x2EB9E90", VA = "0x182EBB890")]
	public static ReadHandle Read(in FileHandle fileHandle, ReadCommandArray readCmdArray)
	{
		return default(ReadHandle);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x2EBB570", Offset = "0x2EB9B70", VA = "0x182EBB570")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::ScheduleOpenRequest", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	private static FileHandle OpenFileAsync_Internal(string fileName)
	{
		return default(FileHandle);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x2EBB740", Offset = "0x2EB9D40", VA = "0x182EBB740")]
	public static FileHandle OpenFileAsync(string fileName)
	{
		return default(FileHandle);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x2EBB200", Offset = "0x2EB9800", VA = "0x182EBB200")]
	[UnityEngine.Bindings.FreeFunction("AsyncReadManagerManaged::ScheduleCloseRequest", IsThreadSafe = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static JobHandle CloseFileAsync(in FileHandle fileHandle, JobHandle dependency)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x2EBB260", Offset = "0x2EB9860", VA = "0x182EBB260")]
	private unsafe static extern void GetFileInfoInternal_Injected(ref ManagedSpanWrapper filename, void* cmd, out ReadHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x2EBB7D0", Offset = "0x2EB9DD0", VA = "0x182EBB7D0")]
	private unsafe static extern void ReadWithHandlesInternal_NativeCopy_Injected(in FileHandle fileHandle, void* readCmdArray, out ReadHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x2EBB520", Offset = "0x2EB9B20", VA = "0x182EBB520")]
	private static extern void OpenFileAsync_Internal_Injected(ref ManagedSpanWrapper fileName, out FileHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x2EBB1A0", Offset = "0x2EB97A0", VA = "0x182EBB1A0")]
	private static extern void CloseFileAsync_Injected(in FileHandle fileHandle, [In] ref JobHandle dependency, out JobHandle ret);
}
