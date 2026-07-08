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
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4DE10A0", Offset = "0x4DE10A0", VA = "0x4DE10A0")]
	private unsafe static extern IntPtr Create(UploadHandlerRaw self, byte* data, int dataLength);

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4DE10E0", Offset = "0x4DE10E0", VA = "0x4DE10E0")]
	public UploadHandlerRaw(byte[] data)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4DE1160", Offset = "0x4DE1160", VA = "0x4DE1160")]
	public UploadHandlerRaw(NativeArray<byte> data, bool transferOwnership)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4DE1240", Offset = "0x4DE1240", VA = "0x4DE1240", Slot = "5")]
	public override void Dispose()
	{
	}
}
