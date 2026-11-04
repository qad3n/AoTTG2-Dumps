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
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
	public byte[] data
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x1A96900", Offset = "0x1A94F00", VA = "0x181A96900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public string text
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x1B53230", Offset = "0x1B51830", VA = "0x181B53230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x330A0B0", Offset = "0x33086B0", VA = "0x18330A0B0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private void ReleaseFromScripting()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal DownloadHandler()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3309980", Offset = "0x3307F80", VA = "0x183309980", Slot = "1")]
	~DownloadHandler()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3309930", Offset = "0x3307F30", VA = "0x183309930", Slot = "5")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0xB62B20", Offset = "0xB61120", VA = "0x180B62B20", Slot = "6")]
	protected virtual NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3309B10", Offset = "0x3308110", VA = "0x183309B10", Slot = "7")]
	protected virtual byte[] GetData()
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3309DB0", Offset = "0x33083B0", VA = "0x183309DB0", Slot = "8")]
	protected virtual string GetText()
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3309BB0", Offset = "0x33081B0", VA = "0x183309BB0")]
	private Encoding GetTextEncoder()
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3309A40", Offset = "0x3308040", VA = "0x183309A40")]
	private string GetContentType()
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "9")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual bool ReceiveData(byte[] data, int dataLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x330A050", Offset = "0x3308650", VA = "0x18330A050", Slot = "10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual void ReceiveContentLengthHeader(ulong contentLength)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	[Obsolete("Use ReceiveContentLengthHeader")]
	protected virtual void ReceiveContentLength(int contentLength)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual void CompleteContent()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x3309BA0", Offset = "0x33081A0", VA = "0x183309BA0", Slot = "13")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual float GetProgress()
	{
		return default(float);
	}

	[Token(Token = "0x6000027")]
	protected static T GetCheckedDownloader<T>(UnityWebRequest www) where T : DownloadHandler
	{
		return null;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3309EE0", Offset = "0x33084E0", VA = "0x183309EE0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static byte* InternalGetByteArray(DownloadHandler dh, out int length)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3309B10", Offset = "0x3308110", VA = "0x183309B10")]
	internal static byte[] InternalGetByteArray(DownloadHandler dh)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3309F30", Offset = "0x3308530", VA = "0x183309F30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UnityWebRequestAudioModule", "UnityEngine.UnityWebRequestTextureModule" })]
	internal static NativeArray<byte> InternalGetNativeArray(DownloadHandler dh, ref NativeArray<byte> nativeArray)
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x33098F0", Offset = "0x3307EF0", VA = "0x1833098F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UnityWebRequestAudioModule", "UnityEngine.UnityWebRequestTextureModule" })]
	internal static void DisposeNativeArray(ref NativeArray<byte> data)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3309880", Offset = "0x3307E80", VA = "0x183309880")]
	internal unsafe static void CreateNativeArrayForNativeData(ref NativeArray<byte> data, byte* bytes, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x330A070", Offset = "0x3308670", VA = "0x18330A070")]
	private static extern void ReleaseFromScripting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x33099F0", Offset = "0x3307FF0", VA = "0x1833099F0")]
	private static extern void GetContentType_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x3309E90", Offset = "0x3308490", VA = "0x183309E90")]
	private unsafe static extern byte* InternalGetByteArray_Injected(IntPtr dh, out int length);
}
