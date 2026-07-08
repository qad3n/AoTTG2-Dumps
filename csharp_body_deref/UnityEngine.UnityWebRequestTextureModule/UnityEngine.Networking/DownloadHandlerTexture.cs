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
		[Address(RVA = "0x4DE13C0", Offset = "0x4DE13C0", VA = "0x4DE13C0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4DE12C0", Offset = "0x4DE12C0", VA = "0x4DE12C0")]
	private static extern IntPtr Create(DownloadHandlerTexture obj, bool readable);

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4DE1300", Offset = "0x4DE1300", VA = "0x4DE1300")]
	private void InternalCreateTexture(bool readable)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4DE1340", Offset = "0x4DE1340", VA = "0x4DE1340")]
	public DownloadHandlerTexture(bool readable)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4DE1390", Offset = "0x4DE1390", VA = "0x4DE1390", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4DE13A0", Offset = "0x4DE13A0", VA = "0x4DE13A0", Slot = "5")]
	public override void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DE13F0", Offset = "0x4DE13F0", VA = "0x4DE13F0")]
	[UnityEngine.Bindings.NativeThrows]
	private extern Texture2D InternalGetTextureNative();

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4DE1420", Offset = "0x4DE1420", VA = "0x4DE1420")]
	public static Texture2D GetContent(UnityWebRequest www)
	{
		return null;
	}
}
