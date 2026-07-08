using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Profiling.Memory;

[Token(Token = "0x200002E")]
[UnityEngine.Bindings.NativeHeader("Modules/Profiler/Runtime/MemorySnapshotManager.h")]
public static class MemoryProfiler
{
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<string, bool> m_SnapshotFinished;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<string, bool, DebugScreenCapture> m_SaveScreenshotToDisk;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<MemorySnapshotMetadata> CreatingMetadata;

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4A85850", Offset = "0x4A85850", VA = "0x4A85850")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static byte[] PrepareMetadata()
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4A85B10", Offset = "0x4A85B10", VA = "0x4A85B10")]
	internal static int WriteIntToByteArray(byte[] array, int offset, int value)
	{
		return default(int);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4A85B70", Offset = "0x4A85B70", VA = "0x4A85B70")]
	internal static int WriteStringToByteArray(byte[] array, int offset, string value)
	{
		return default(int);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4A85C40", Offset = "0x4A85C40", VA = "0x4A85C40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FinalizeSnapshot(string path, bool result)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4A85CC0", Offset = "0x4A85CC0", VA = "0x4A85CC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SaveScreenshotToDisk(string path, bool result, IntPtr pixelsPtr, int pixelsCount, TextureFormat format, int width, int height)
	{
	}
}
