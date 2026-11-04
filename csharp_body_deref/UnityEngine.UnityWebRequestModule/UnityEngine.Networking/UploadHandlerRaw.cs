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
[Token(Token = "0x2000015")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UploadHandler/UploadHandlerRaw.h")]
public sealed class UploadHandlerRaw : UploadHandler
{
	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private NativeArray<byte> m_Payload;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x330D500", Offset = "0x330BB00", VA = "0x18330D500")]
	private unsafe static extern IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] UploadHandlerRaw self, byte* data, int dataLength);

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x330D5F0", Offset = "0x330BBF0", VA = "0x18330D5F0")]
	public UploadHandlerRaw(byte[] data)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x330D750", Offset = "0x330BD50", VA = "0x18330D750")]
	public UploadHandlerRaw(NativeArray<byte> data, bool transferOwnership)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x330D560", Offset = "0x330BB60", VA = "0x18330D560", Slot = "5")]
	public override void Dispose()
	{
	}
}
