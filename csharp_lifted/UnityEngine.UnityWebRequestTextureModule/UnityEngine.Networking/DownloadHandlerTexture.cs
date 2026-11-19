// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadHandlerTexture
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequestTexture/Public/DownloadHandlerTexture.h")]
public sealed class DownloadHandlerTexture : DownloadHandler
{
	[Token(Token = "0x2000005")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x6D1FB70", Offset = "0x6D1EB70", VA = "0x6D1FB70")]
		public static IntPtr ConvertToNative(DownloadHandlerTexture handler)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private NativeArray<byte> m_NativeData;

	[Token(Token = "0x17000004")]
	public Texture2D texture
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x6D1F950", Offset = "0x6D1E950", VA = "0x6D1F950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6D1F800", Offset = "0x6D1E800", VA = "0x6D1F800")]
	private static IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] DownloadHandlerTexture obj, DownloadedTextureParams parameters)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x6D1F880", Offset = "0x6D1E880", VA = "0x6D1F880")]
	private void InternalCreateTexture(DownloadedTextureParams parameters)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x6D1F8D0", Offset = "0x6D1E8D0", VA = "0x6D1F8D0")]
	public DownloadHandlerTexture(DownloadedTextureParams parameters)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x6D1F920", Offset = "0x6D1E920", VA = "0x6D1F920", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6D1F930", Offset = "0x6D1E930", VA = "0x6D1F930", Slot = "5")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x6D1F9E0", Offset = "0x6D1E9E0", VA = "0x6D1F9E0")]
	[UnityEngine.Bindings.NativeThrows]
	private Texture2D InternalGetTextureNative()
	{
		return null;
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x6D1FAA0", Offset = "0x6D1EAA0", VA = "0x6D1FAA0")]
	public static Texture2D GetContent(UnityWebRequest www)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x6D1F840", Offset = "0x6D1E840", VA = "0x6D1F840")]
	private static extern IntPtr Create_Injected(DownloadHandlerTexture obj, [In] ref DownloadedTextureParams parameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x6D1FA70", Offset = "0x6D1EA70", VA = "0x6D1FA70")]
	private static extern IntPtr InternalGetTextureNative_Injected(IntPtr _unity_self);
}
