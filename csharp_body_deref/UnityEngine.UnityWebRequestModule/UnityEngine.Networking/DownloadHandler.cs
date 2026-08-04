// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadHandler
// Update status: unchanged since the previous dump
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
[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandler.h")]
public class DownloadHandler : IDisposable
{
	[NonSerialized]
	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000002")]
	public byte[] data
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x51063A0", Offset = "0x51063A0", VA = "0x51063A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public string text
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x51063C0", Offset = "0x51063C0", VA = "0x51063C0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5106290", Offset = "0x5106290", VA = "0x5106290")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private extern void Release();

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x51062C0", Offset = "0x51062C0", VA = "0x51062C0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal DownloadHandler()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x51062D0", Offset = "0x51062D0", VA = "0x51062D0", Slot = "1")]
	~DownloadHandler()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x5106360", Offset = "0x5106360", VA = "0x5106360", Slot = "5")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x51063E0", Offset = "0x51063E0", VA = "0x51063E0", Slot = "6")]
	protected virtual NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x51063F0", Offset = "0x51063F0", VA = "0x51063F0", Slot = "7")]
	protected virtual byte[] GetData()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5106510", Offset = "0x5106510", VA = "0x5106510", Slot = "8")]
	protected virtual string GetText()
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x51065C0", Offset = "0x51065C0", VA = "0x51065C0")]
	private Encoding GetTextEncoder()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x5106840", Offset = "0x5106840", VA = "0x5106840")]
	private extern string GetContentType();

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x5106870", Offset = "0x5106870", VA = "0x5106870", Slot = "9")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual bool ReceiveData(byte[] data, int dataLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x5106880", Offset = "0x5106880", VA = "0x5106880", Slot = "10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual void ReceiveContentLengthHeader(ulong contentLength)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x51068A0", Offset = "0x51068A0", VA = "0x51068A0", Slot = "11")]
	[Obsolete("Use ReceiveContentLengthHeader")]
	protected virtual void ReceiveContentLength(int contentLength)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x51068B0", Offset = "0x51068B0", VA = "0x51068B0", Slot = "12")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	protected virtual void CompleteContent()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x51068C0", Offset = "0x51068C0", VA = "0x51068C0", Slot = "13")]
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

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x51068D0", Offset = "0x51068D0", VA = "0x51068D0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern byte* InternalGetByteArray(DownloadHandler dh, out int length);

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x5106480", Offset = "0x5106480", VA = "0x5106480")]
	internal static byte[] InternalGetByteArray(DownloadHandler dh)
	{
		return null;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x5106910", Offset = "0x5106910", VA = "0x5106910")]
	internal static NativeArray<byte> InternalGetNativeArray(DownloadHandler dh, ref NativeArray<byte> nativeArray)
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x5106A00", Offset = "0x5106A00", VA = "0x5106A00")]
	internal static void DisposeNativeArray(ref NativeArray<byte> data)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x5106A30", Offset = "0x5106A30", VA = "0x5106A30")]
	internal unsafe static void CreateNativeArrayForNativeData(ref NativeArray<byte> data, byte* bytes, int length)
	{
	}
}
