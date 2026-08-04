// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadHandlerTexture
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
[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequestTexture/Public/DownloadHandlerTexture.h")]
public sealed class DownloadHandlerTexture : DownloadHandler
{
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private NativeArray<byte> m_NativeData;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool mNonReadable;

	[Token(Token = "0x17000001")]
	public Texture2D texture
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x51091D0", Offset = "0x51091D0", VA = "0x51091D0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x51090D0", Offset = "0x51090D0", VA = "0x51090D0")]
	private static extern IntPtr Create(DownloadHandlerTexture obj, bool readable);

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x5109110", Offset = "0x5109110", VA = "0x5109110")]
	private void InternalCreateTexture(bool readable)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x5109150", Offset = "0x5109150", VA = "0x5109150")]
	public DownloadHandlerTexture(bool readable)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x51091A0", Offset = "0x51091A0", VA = "0x51091A0", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x51091B0", Offset = "0x51091B0", VA = "0x51091B0", Slot = "5")]
	public override void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5109200", Offset = "0x5109200", VA = "0x5109200")]
	[UnityEngine.Bindings.NativeThrows]
	private extern Texture2D InternalGetTextureNative();

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x5109230", Offset = "0x5109230", VA = "0x5109230")]
	public static Texture2D GetContent(UnityWebRequest www)
	{
		return null;
	}
}
