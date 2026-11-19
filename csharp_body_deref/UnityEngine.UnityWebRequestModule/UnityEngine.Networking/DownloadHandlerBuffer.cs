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
[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandlerBuffer.h")]
public sealed class DownloadHandlerBuffer : DownloadHandler
{
	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private NativeArray<byte> m_NativeData;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6D1B9F0", Offset = "0x6D1A9F0", VA = "0x6D1B9F0")]
	private static extern IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] DownloadHandlerBuffer obj);

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x6D1BA20", Offset = "0x6D1AA20", VA = "0x6D1BA20")]
	private void InternalCreateBuffer()
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6D1BA60", Offset = "0x6D1AA60", VA = "0x6D1BA60")]
	public DownloadHandlerBuffer()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6D1BAA0", Offset = "0x6D1AAA0", VA = "0x6D1BAA0", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6D1BAB0", Offset = "0x6D1AAB0", VA = "0x6D1BAB0", Slot = "5")]
	public override void Dispose()
	{
	}
}
