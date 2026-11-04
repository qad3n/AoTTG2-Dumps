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
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(DownloadHandlerTexture handler)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private NativeArray<byte> m_NativeData;

	[Token(Token = "0x17000003")]
	public Texture2D texture
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x330F780", Offset = "0x330DD80", VA = "0x18330F780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x330F500", Offset = "0x330DB00", VA = "0x18330F500")]
	private static IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] DownloadHandlerTexture obj, DownloadedTextureParams parameters)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x330F6F0", Offset = "0x330DCF0", VA = "0x18330F6F0")]
	private void InternalCreateTexture(DownloadedTextureParams parameters)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x330F8A0", Offset = "0x330DEA0", VA = "0x18330F8A0")]
	public DownloadHandlerTexture(bool readable)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x330F6C0", Offset = "0x330DCC0", VA = "0x18330F6C0", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x330F540", Offset = "0x330DB40", VA = "0x18330F540", Slot = "5")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x330F780", Offset = "0x330DD80", VA = "0x18330F780")]
	[UnityEngine.Bindings.NativeThrows]
	private Texture2D InternalGetTextureNative()
	{
		return null;
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x330F570", Offset = "0x330DB70", VA = "0x18330F570")]
	public static Texture2D GetContent(UnityWebRequest www)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x330F4B0", Offset = "0x330DAB0", VA = "0x18330F4B0")]
	private static extern IntPtr Create_Injected(DownloadHandlerTexture obj, [In] ref DownloadedTextureParams parameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x330F740", Offset = "0x330DD40", VA = "0x18330F740")]
	private static extern IntPtr InternalGetTextureNative_Injected(IntPtr _unity_self);
}
