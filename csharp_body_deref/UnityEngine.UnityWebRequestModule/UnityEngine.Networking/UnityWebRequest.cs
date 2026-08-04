// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.UnityWebRequest
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000A")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UnityWebRequest.h")]
public class UnityWebRequest : IDisposable
{
	[Token(Token = "0x200000B")]
	internal enum UnityWebRequestMethod
	{
		[Token(Token = "0x4000020")]
		Get,
		[Token(Token = "0x4000021")]
		Post,
		[Token(Token = "0x4000022")]
		Put,
		[Token(Token = "0x4000023")]
		Head,
		[Token(Token = "0x4000024")]
		Custom
	}

	[Token(Token = "0x200000C")]
	internal enum UnityWebRequestError
	{
		[Token(Token = "0x4000026")]
		OK,
		[Token(Token = "0x4000027")]
		OKCached,
		[Token(Token = "0x4000028")]
		Unknown,
		[Token(Token = "0x4000029")]
		SDKError,
		[Token(Token = "0x400002A")]
		UnsupportedProtocol,
		[Token(Token = "0x400002B")]
		MalformattedUrl,
		[Token(Token = "0x400002C")]
		CannotResolveProxy,
		[Token(Token = "0x400002D")]
		CannotResolveHost,
		[Token(Token = "0x400002E")]
		CannotConnectToHost,
		[Token(Token = "0x400002F")]
		AccessDenied,
		[Token(Token = "0x4000030")]
		GenericHttpError,
		[Token(Token = "0x4000031")]
		WriteError,
		[Token(Token = "0x4000032")]
		ReadError,
		[Token(Token = "0x4000033")]
		OutOfMemory,
		[Token(Token = "0x4000034")]
		Timeout,
		[Token(Token = "0x4000035")]
		HTTPPostError,
		[Token(Token = "0x4000036")]
		SSLCannotConnect,
		[Token(Token = "0x4000037")]
		Aborted,
		[Token(Token = "0x4000038")]
		TooManyRedirects,
		[Token(Token = "0x4000039")]
		ReceivedNoData,
		[Token(Token = "0x400003A")]
		SSLNotSupported,
		[Token(Token = "0x400003B")]
		FailedToSendData,
		[Token(Token = "0x400003C")]
		FailedToReceiveData,
		[Token(Token = "0x400003D")]
		SSLCertificateError,
		[Token(Token = "0x400003E")]
		SSLCipherNotAvailable,
		[Token(Token = "0x400003F")]
		SSLCACertError,
		[Token(Token = "0x4000040")]
		UnrecognizedContentEncoding,
		[Token(Token = "0x4000041")]
		LoginFailed,
		[Token(Token = "0x4000042")]
		SSLShutdownFailed,
		[Token(Token = "0x4000043")]
		RedirectLimitInvalid,
		[Token(Token = "0x4000044")]
		InvalidRedirect,
		[Token(Token = "0x4000045")]
		CannotModifyRequest,
		[Token(Token = "0x4000046")]
		HeaderNameContainsInvalidCharacters,
		[Token(Token = "0x4000047")]
		HeaderValueContainsInvalidCharacters,
		[Token(Token = "0x4000048")]
		CannotOverrideSystemHeaders,
		[Token(Token = "0x4000049")]
		AlreadySent,
		[Token(Token = "0x400004A")]
		InvalidMethod,
		[Token(Token = "0x400004B")]
		NotImplemented,
		[Token(Token = "0x400004C")]
		NoInternetConnection,
		[Token(Token = "0x400004D")]
		DataProcessingError,
		[Token(Token = "0x400004E")]
		InsecureConnectionNotAllowed
	}

	[Token(Token = "0x200000D")]
	public enum Result
	{
		[Token(Token = "0x4000050")]
		InProgress,
		[Token(Token = "0x4000051")]
		Success,
		[Token(Token = "0x4000052")]
		ConnectionError,
		[Token(Token = "0x4000053")]
		ProtocolError,
		[Token(Token = "0x4000054")]
		DataProcessingError
	}

	[NonSerialized]
	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[NonSerialized]
	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal DownloadHandler m_DownloadHandler;

	[NonSerialized]
	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal UploadHandler m_UploadHandler;

	[NonSerialized]
	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal CertificateHandler m_CertificateHandler;

	[NonSerialized]
	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal Uri m_Uri;

	[Token(Token = "0x17000005")]
	public bool disposeCertificateHandlerOnDispose
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x5106E50", Offset = "0x5106E50", VA = "0x5106E50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x5106E60", Offset = "0x5106E60", VA = "0x5106E60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool disposeDownloadHandlerOnDispose
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x5106E70", Offset = "0x5106E70", VA = "0x5106E70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x5106E80", Offset = "0x5106E80", VA = "0x5106E80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool disposeUploadHandlerOnDispose
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5106E90", Offset = "0x5106E90", VA = "0x5106E90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x5106EA0", Offset = "0x5106EA0", VA = "0x5106EA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public string method
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x5107190", Offset = "0x5107190", VA = "0x5107190")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public string error
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x5107C80", Offset = "0x5107C80", VA = "0x5107C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public string url
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x5107E70", Offset = "0x5107E70", VA = "0x5107E70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x5107060", Offset = "0x5107060", VA = "0x5107060")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public extern long responseCode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x5107E40", Offset = "0x5107E40", VA = "0x5107E40")]
		get;
	}

	[Token(Token = "0x1700000C")]
	public extern bool isModifiable
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x5107B00", Offset = "0x5107B00", VA = "0x5107B00")]
		[UnityEngine.Bindings.NativeMethod("IsModifiable")]
		get;
	}

	[Token(Token = "0x1700000D")]
	public bool isDone
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x5107FF0", Offset = "0x5107FF0", VA = "0x5107FF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public extern Result result
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x5107E10", Offset = "0x5107E10", VA = "0x5107E10")]
		[UnityEngine.Bindings.NativeMethod("GetResult")]
		get;
	}

	[Token(Token = "0x1700000F")]
	public extern ulong downloadedBytes
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x5108030", Offset = "0x5108030", VA = "0x5108030")]
		get;
	}

	[Token(Token = "0x17000010")]
	public UploadHandler uploadHandler
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x5107910", Offset = "0x5107910", VA = "0x5107910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x51074F0", Offset = "0x51074F0", VA = "0x51074F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public DownloadHandler downloadHandler
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x5107900", Offset = "0x5107900", VA = "0x5107900")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x5107400", Offset = "0x5107400", VA = "0x5107400")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public CertificateHandler certificateHandler
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x5107920", Offset = "0x5107920", VA = "0x5107920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public int timeout
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x5108570", Offset = "0x5108570", VA = "0x5108570")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x5106DF0", Offset = "0x5106DF0", VA = "0x5106DF0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_UNITYWEBREQUEST")]
	private static extern string GetWebErrorString(UnityWebRequestError err);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x5106E20", Offset = "0x5106E20", VA = "0x5106E20")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static extern string GetHTTPStatusString(long responseCode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x5106EB0", Offset = "0x5106EB0", VA = "0x5106EB0")]
	internal static extern IntPtr Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5106EE0", Offset = "0x5106EE0", VA = "0x5106EE0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private extern void Release();

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x5106F10", Offset = "0x5106F10", VA = "0x5106F10")]
	internal void InternalDestroy()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x5106FA0", Offset = "0x5106FA0", VA = "0x5106FA0")]
	private void InternalSetDefaults()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x5106FB0", Offset = "0x5106FB0", VA = "0x5106FB0")]
	public UnityWebRequest(string url)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x51070D0", Offset = "0x51070D0", VA = "0x51070D0")]
	public UnityWebRequest(string url, string method)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x5107310", Offset = "0x5107310", VA = "0x5107310")]
	public UnityWebRequest(string url, string method, DownloadHandler downloadHandler, UploadHandler uploadHandler)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x51075E0", Offset = "0x51075E0", VA = "0x51075E0", Slot = "1")]
	~UnityWebRequest()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x51077D0", Offset = "0x51077D0", VA = "0x51077D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5107740", Offset = "0x5107740", VA = "0x5107740")]
	private void DisposeHandlers()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5107930", Offset = "0x5107930", VA = "0x5107930")]
	[UnityEngine.Bindings.NativeThrows]
	internal extern UnityWebRequestAsyncOperation BeginWebRequest();

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x5107960", Offset = "0x5107960", VA = "0x5107960")]
	public UnityWebRequestAsyncOperation SendWebRequest()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5106F70", Offset = "0x5106F70", VA = "0x5106F70")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public extern void Abort();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x51079C0", Offset = "0x51079C0", VA = "0x51079C0")]
	private extern UnityWebRequestError SetMethod(UnityWebRequestMethod methodType);

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5107A00", Offset = "0x5107A00", VA = "0x5107A00")]
	internal void InternalSetMethod(UnityWebRequestMethod methodType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5107B30", Offset = "0x5107B30", VA = "0x5107B30")]
	private extern UnityWebRequestError SetCustomMethod(string customMethodName);

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5107B70", Offset = "0x5107B70", VA = "0x5107B70")]
	internal void InternalSetCustomMethod(string customMethodName)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x5107C50", Offset = "0x5107C50", VA = "0x5107C50")]
	private extern UnityWebRequestError GetError();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5107EA0", Offset = "0x5107EA0", VA = "0x5107EA0")]
	private extern string GetUrl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x5107FB0", Offset = "0x5107FB0", VA = "0x5107FB0")]
	private extern UnityWebRequestError SetUrl(string url);

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x5107ED0", Offset = "0x5107ED0", VA = "0x5107ED0")]
	private void InternalSetUrl(string url)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x5108060", Offset = "0x5108060", VA = "0x5108060")]
	[UnityEngine.Bindings.NativeMethod("SetRequestHeader")]
	internal extern UnityWebRequestError InternalSetRequestHeader(string name, string value);

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x51080A0", Offset = "0x51080A0", VA = "0x51080A0")]
	public void SetRequestHeader(string name, string value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x5108200", Offset = "0x5108200", VA = "0x5108200")]
	public extern string GetResponseHeader(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x5108240", Offset = "0x5108240", VA = "0x5108240")]
	internal extern string[] GetResponseHeaderKeys();

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x5108270", Offset = "0x5108270", VA = "0x5108270")]
	public Dictionary<string, string> GetResponseHeaders()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x51084B0", Offset = "0x51084B0", VA = "0x51084B0")]
	private extern UnityWebRequestError SetUploadHandler(UploadHandler uh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x51084F0", Offset = "0x51084F0", VA = "0x51084F0")]
	private extern UnityWebRequestError SetDownloadHandler(DownloadHandler dh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x5108530", Offset = "0x5108530", VA = "0x5108530")]
	private extern UnityWebRequestError SetTimeoutMsec(int timeout);

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x51086E0", Offset = "0x51086E0", VA = "0x51086E0")]
	public static UnityWebRequest Get(string uri)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x51087A0", Offset = "0x51087A0", VA = "0x51087A0")]
	public static UnityWebRequest Delete(string uri)
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x5108810", Offset = "0x5108810", VA = "0x5108810")]
	public static UnityWebRequest Put(string uri, string bodyData)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x5108A10", Offset = "0x5108A10", VA = "0x5108A10")]
	public static UnityWebRequest Post(string uri, string postData, string contentType)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x5108A90", Offset = "0x5108A90", VA = "0x5108A90")]
	private static void SetupPost(UnityWebRequest request, string postData, string contentType)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x5108C60", Offset = "0x5108C60", VA = "0x5108C60")]
	public static string EscapeURL(string s)
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x5108C80", Offset = "0x5108C80", VA = "0x5108C80")]
	public static string EscapeURL(string s, Encoding e)
	{
		return null;
	}
}
