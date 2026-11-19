// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.Memory.MemoryProfiler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Profiling.Memory;

[Token(Token = "0x200003A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/Runtime/MemorySnapshotManager.h")]
public static class MemoryProfiler
{
	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<string, bool> m_SnapshotFinished;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<string, bool, DebugScreenCapture> m_SaveScreenshotToDisk;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<MemorySnapshotMetadata> m_CreatingMetadata;

	[Token(Token = "0x14000001")]
	public static event Action<MemorySnapshotMetadata> CreatingMetadata
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x68B62C0", Offset = "0x68B52C0", VA = "0x68B62C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x68B6390", Offset = "0x68B5390", VA = "0x68B6390")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x68B6460", Offset = "0x68B5460", VA = "0x68B6460")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static byte[] PrepareMetadata()
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x68B6730", Offset = "0x68B5730", VA = "0x68B6730")]
	internal static int WriteIntToByteArray(byte[] array, int offset, int value)
	{
		return default(int);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x68B67A0", Offset = "0x68B57A0", VA = "0x68B67A0")]
	internal static int WriteStringToByteArray(byte[] array, int offset, string value)
	{
		return default(int);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x68B6870", Offset = "0x68B5870", VA = "0x68B6870")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FinalizeSnapshot(string path, bool result)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x68B68F0", Offset = "0x68B58F0", VA = "0x68B68F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SaveScreenshotToDisk(string path, bool result, IntPtr pixelsPtr, int pixelsCount, TextureFormat format, int width, int height)
	{
	}
}
