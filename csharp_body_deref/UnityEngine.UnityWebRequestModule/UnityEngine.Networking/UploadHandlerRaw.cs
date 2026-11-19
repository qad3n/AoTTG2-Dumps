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
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6D1F600", Offset = "0x6D1E600", VA = "0x6D1F600")]
	private unsafe static extern IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] UploadHandlerRaw self, byte* data, int dataLength);

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6D1EE30", Offset = "0x6D1DE30", VA = "0x6D1EE30")]
	public UploadHandlerRaw(byte[] data)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6D1F640", Offset = "0x6D1E640", VA = "0x6D1F640")]
	public UploadHandlerRaw(NativeArray<byte> data, bool transferOwnership)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6D1F720", Offset = "0x6D1E720", VA = "0x6D1F720", Slot = "5")]
	public override void Dispose()
	{
	}
}
