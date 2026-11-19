// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadHandler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000007")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandler.h")]
public class DownloadHandler : IDisposable
{
	[Token(Token = "0x2000008")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x6D1B9D0", Offset = "0x6D1A9D0", VA = "0x6D1B9D0")]
		public static IntPtr ConvertToNative(DownloadHandler handler)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000002")]
	public string text
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x6D1B210", Offset = "0x6D1A210", VA = "0x6D1B210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x6D1B080", Offset = "0x6D1A080", VA = "0x6D1B080")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private void ReleaseFromScripting()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x6D1B110", Offset = "0x6D1A110", VA = "0x6D1B110")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal DownloadHandler()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x6D1B120", Offset = "0x6D1A120", VA = "0x6D1B120", Slot = "1")]
	~DownloadHandler()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x6D1B1C0", Offset = "0x6D1A1C0", VA = "0x6D1B1C0", Slot = "5")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6D1B230", Offset = "0x6D1A230", VA = "0x6D1B230", Slot = "6")]
	protected virtual NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6D1B240", Offset = "0x6D1A240", VA = "0x6D1B240", Slot = "7")]
	protected virtual string GetText()
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6D1B2F0", Offset = "0x6D1A2F0", VA = "0x6D1B2F0")]
	private Encoding GetTextEncoder()
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6D1B630", Offset = "0x6D1A630", VA = "0x6D1B630")]
	private string GetContentType()
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6D1B750", Offset = "0x6D1A750", VA = "0x6D1B750", Slot = "8")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual bool ReceiveData(byte[] data, int dataLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6D1B760", Offset = "0x6D1A760", VA = "0x6D1B760", Slot = "9")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual void ReceiveContentLengthHeader(ulong contentLength)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6D1B780", Offset = "0x6D1A780", VA = "0x6D1B780", Slot = "10")]
	[Obsolete("Use ReceiveContentLengthHeader")]
	protected virtual void ReceiveContentLength(int contentLength)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6D1B790", Offset = "0x6D1A790", VA = "0x6D1B790", Slot = "11")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual void CompleteContent()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6D1B7A0", Offset = "0x6D1A7A0", VA = "0x6D1B7A0", Slot = "12")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual float GetProgress()
	{
		return default(float);
	}

	[Token(Token = "0x6000025")]
	protected static T GetCheckedDownloader<T>(UnityWebRequest www) where T : DownloadHandler
	{
		return null;
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6D1B7B0", Offset = "0x6D1A7B0", VA = "0x6D1B7B0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static byte* InternalGetByteArray(DownloadHandler dh, out int length)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6D1B840", Offset = "0x6D1A840", VA = "0x6D1B840")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UnityWebRequestAudioModule", "UnityEngine.UnityWebRequestTextureModule" })]
	internal static NativeArray<byte> InternalGetNativeArray(DownloadHandler dh, ref NativeArray<byte> nativeArray)
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6D1B950", Offset = "0x6D1A950", VA = "0x6D1B950")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UnityWebRequestAudioModule", "UnityEngine.UnityWebRequestTextureModule" })]
	internal static void DisposeNativeArray(ref NativeArray<byte> data)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6D1B980", Offset = "0x6D1A980", VA = "0x6D1B980")]
	internal unsafe static void CreateNativeArrayForNativeData(ref NativeArray<byte> data, byte* bytes, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x6D1B0E0", Offset = "0x6D1A0E0", VA = "0x6D1B0E0")]
	private static extern void ReleaseFromScripting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x6D1B710", Offset = "0x6D1A710", VA = "0x6D1B710")]
	private static extern void GetContentType_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x6D1B800", Offset = "0x6D1A800", VA = "0x6D1B800")]
	private unsafe static extern byte* InternalGetByteArray_Injected(IntPtr dh, out int length);
}
