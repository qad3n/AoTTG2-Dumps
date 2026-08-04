// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadHandlerFile
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandlerVFS.h")]
public sealed class DownloadHandlerFile : DownloadHandler
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x5106BB0", Offset = "0x5106BB0", VA = "0x5106BB0")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern IntPtr Create(DownloadHandlerFile obj, string path, bool append);

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x5106BF0", Offset = "0x5106BF0", VA = "0x5106BF0")]
	private void InternalCreateVFS(string path, bool append)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x5106CA0", Offset = "0x5106CA0", VA = "0x5106CA0")]
	public DownloadHandlerFile(string path)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x5106CD0", Offset = "0x5106CD0", VA = "0x5106CD0", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x5106D20", Offset = "0x5106D20", VA = "0x5106D20", Slot = "7")]
	protected override byte[] GetData()
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x5106D70", Offset = "0x5106D70", VA = "0x5106D70", Slot = "8")]
	protected override string GetText()
	{
		return null;
	}
}
