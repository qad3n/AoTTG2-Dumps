// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadHandlerBuffer
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
[Token(Token = "0x2000007")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandlerBuffer.h")]
public sealed class DownloadHandlerBuffer : DownloadHandler
{
	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private NativeArray<byte> m_NativeData;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x5106A80", Offset = "0x5106A80", VA = "0x5106A80")]
	private static extern IntPtr Create(DownloadHandlerBuffer obj);

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x5106AB0", Offset = "0x5106AB0", VA = "0x5106AB0")]
	private void InternalCreateBuffer()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x5106AF0", Offset = "0x5106AF0", VA = "0x5106AF0")]
	public DownloadHandlerBuffer()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x5106B30", Offset = "0x5106B30", VA = "0x5106B30", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x5106B40", Offset = "0x5106B40", VA = "0x5106B40", Slot = "5")]
	public override void Dispose()
	{
	}
}
