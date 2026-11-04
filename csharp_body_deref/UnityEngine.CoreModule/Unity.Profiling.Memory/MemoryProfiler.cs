// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.Memory.MemoryProfiler
// Update status: CHANGED in this game update
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<string, bool> m_SnapshotFinished;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<string, bool, DebugScreenCapture> m_SaveScreenshotToDisk;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<MemorySnapshotMetadata> m_CreatingMetadata;

	[Token(Token = "0x14000001")]
	public static event Action<MemorySnapshotMetadata> CreatingMetadata
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x2ECD740", Offset = "0x2ECBD40", VA = "0x182ECD740")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x2ECD810", Offset = "0x2ECBE10", VA = "0x182ECD810")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2ECD200", Offset = "0x2ECB800", VA = "0x182ECD200")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static byte[] PrepareMetadata()
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x2ECD620", Offset = "0x2ECBC20", VA = "0x182ECD620")]
	internal static int WriteIntToByteArray(byte[] array, int offset, int value)
	{
		return default(int);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x2ECD6A0", Offset = "0x2ECBCA0", VA = "0x182ECD6A0")]
	internal static int WriteStringToByteArray(byte[] array, int offset, string value)
	{
		return default(int);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x2ECD170", Offset = "0x2ECB770", VA = "0x182ECD170")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FinalizeSnapshot(string path, bool result)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x2ECD500", Offset = "0x2ECBB00", VA = "0x182ECD500")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SaveScreenshotToDisk(string path, bool result, IntPtr pixelsPtr, int pixelsCount, TextureFormat format, int width, int height)
	{
	}
}
