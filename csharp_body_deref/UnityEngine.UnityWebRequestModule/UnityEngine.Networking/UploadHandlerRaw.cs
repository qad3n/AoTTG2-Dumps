// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.UploadHandlerRaw
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
[Token(Token = "0x200000F")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UploadHandler/UploadHandlerRaw.h")]
public sealed class UploadHandlerRaw : UploadHandler
{
	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private NativeArray<byte> m_Payload;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x5108F30", Offset = "0x5108F30", VA = "0x5108F30")]
	private unsafe static extern IntPtr Create(UploadHandlerRaw self, byte* data, int dataLength);

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x5108990", Offset = "0x5108990", VA = "0x5108990")]
	public UploadHandlerRaw(byte[] data)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x5108F70", Offset = "0x5108F70", VA = "0x5108F70")]
	public UploadHandlerRaw(NativeArray<byte> data, bool transferOwnership)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x5109050", Offset = "0x5109050", VA = "0x5109050", Slot = "5")]
	public override void Dispose()
	{
	}
}
