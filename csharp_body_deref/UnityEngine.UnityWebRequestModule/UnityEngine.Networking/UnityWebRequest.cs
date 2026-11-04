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
[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UnityWebRequest.h")]
public class UnityWebRequest : IDisposable
{
	[Token(Token = "0x200000F")]
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

	[Token(Token = "0x2000010")]
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

	[Token(Token = "0x2000011")]
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

	[Token(Token = "0x2000012")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(UnityWebRequest unityWebRequest)
		{
			return default(IntPtr);
		}
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

	[Token(Token = "0x17000006")]
	public bool disposeCertificateHandlerOnDispose
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool disposeDownloadHandlerOnDispose
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0xF1DA30", Offset = "0xF1C030", VA = "0x180F1DA30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool disposeUploadHandlerOnDispose
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x19EDC10", Offset = "0x19EC210", VA = "0x1819EDC10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x19EDC20", Offset = "0x19EC220", VA = "0x1819EDC20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public string method
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x330CE30", Offset = "0x330B430", VA = "0x18330CE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public string error
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x330C8E0", Offset = "0x330AEE0", VA = "0x18330C8E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public string url
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x330CCB0", Offset = "0x330B2B0", VA = "0x18330CCB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x330D390", Offset = "0x330B990", VA = "0x18330D390")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public long responseCode
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x330CBB0", Offset = "0x330B1B0", VA = "0x18330CBB0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool isModifiable
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x330CB10", Offset = "0x330B110", VA = "0x18330CB10")]
		[UnityEngine.Bindings.NativeMethod("IsModifiable")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool isDone
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x330CA70", Offset = "0x330B070", VA = "0x18330CA70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public Result result
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x330CC50", Offset = "0x330B250", VA = "0x18330CC50")]
		[UnityEngine.Bindings.NativeMethod("GetResult")]
		get
		{
			return default(Result);
		}
	}

	[Token(Token = "0x17000010")]
	public ulong downloadedBytes
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x330C880", Offset = "0x330AE80", VA = "0x18330C880")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000011")]
	public int redirectLimit
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x330BFE0", Offset = "0x330A5E0", VA = "0x18330BFE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public UploadHandler uploadHandler
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x330D220", Offset = "0x330B820", VA = "0x18330D220")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public DownloadHandler downloadHandler
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x330CCC0", Offset = "0x330B2C0", VA = "0x18330CCC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public CertificateHandler certificateHandler
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x2E8E8B0", Offset = "0x2E8CEB0", VA = "0x182E8E8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public int timeout
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x330D090", Offset = "0x330B690", VA = "0x18330D090")]
		set
		{
		}
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x330AF20", Offset = "0x3309520", VA = "0x18330AF20")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_UNITYWEBREQUEST")]
	private static string GetWebErrorString(UnityWebRequestError err)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x330A860", Offset = "0x3308E60", VA = "0x18330A860")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static string GetHTTPStatusString(long responseCode)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x330A2C0", Offset = "0x33088C0", VA = "0x18330A2C0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern IntPtr Create();

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x330BAF0", Offset = "0x330A0F0", VA = "0x18330BAF0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private void Release()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x330B0A0", Offset = "0x33096A0", VA = "0x18330B0A0")]
	internal void InternalDestroy()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x330B240", Offset = "0x3309840", VA = "0x18330B240")]
	private void InternalSetDefaults()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x330C760", Offset = "0x330AD60", VA = "0x18330C760")]
	public UnityWebRequest(string url)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x330C7C0", Offset = "0x330ADC0", VA = "0x18330C7C0")]
	public UnityWebRequest(string url, string method)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x330C6D0", Offset = "0x330ACD0", VA = "0x18330C6D0")]
	public UnityWebRequest(string url, string method, DownloadHandler downloadHandler, UploadHandler uploadHandler)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x330A700", Offset = "0x3308D00", VA = "0x18330A700", Slot = "1")]
	~UnityWebRequest()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x330A400", Offset = "0x3308A00", VA = "0x18330A400", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x330A360", Offset = "0x3308960", VA = "0x18330A360")]
	private void DisposeHandlers()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x330A200", Offset = "0x3308800", VA = "0x18330A200")]
	[UnityEngine.Bindings.NativeThrows]
	internal UnityWebRequestAsyncOperation BeginWebRequest()
	{
		return null;
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x330BB50", Offset = "0x330A150", VA = "0x18330BB50")]
	public UnityWebRequestAsyncOperation SendWebRequest()
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x330A160", Offset = "0x3308760", VA = "0x18330A160")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void Abort()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x330BF40", Offset = "0x330A540", VA = "0x18330BF40")]
	private UnityWebRequestError SetMethod(UnityWebRequestMethod methodType)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x330B250", Offset = "0x3309850", VA = "0x18330B250")]
	internal void InternalSetMethod(UnityWebRequestMethod methodType)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x330BC80", Offset = "0x330A280", VA = "0x18330BC80")]
	private UnityWebRequestError SetCustomMethod(string customMethodName)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x330B130", Offset = "0x3309730", VA = "0x18330B130")]
	internal void InternalSetCustomMethod(string customMethodName)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x330A7B0", Offset = "0x3308DB0", VA = "0x18330A7B0")]
	private UnityWebRequestError GetError()
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x330AE10", Offset = "0x3309410", VA = "0x18330AE10")]
	private string GetUrl()
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x330C3C0", Offset = "0x330A9C0", VA = "0x18330C3C0")]
	private UnityWebRequestError SetUrl(string url)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x330B6C0", Offset = "0x3309CC0", VA = "0x18330B6C0")]
	private void InternalSetUrl(string url)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x330BFE0", Offset = "0x330A5E0", VA = "0x18330BFE0")]
	[UnityEngine.Bindings.NativeThrows]
	private void SetRedirectLimitFromScripting(int limit)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x330B3F0", Offset = "0x33099F0", VA = "0x18330B3F0")]
	[UnityEngine.Bindings.NativeMethod("SetRequestHeader")]
	internal UnityWebRequestError InternalSetRequestHeader(string name, string value)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x330C040", Offset = "0x330A640", VA = "0x18330C040")]
	public void SetRequestHeader(string name, string value)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x330AA10", Offset = "0x3309010", VA = "0x18330AA10")]
	public string GetResponseHeader(string name)
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x330A950", Offset = "0x3308F50", VA = "0x18330A950")]
	internal string[] GetResponseHeaderKeys()
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x330AC20", Offset = "0x3309220", VA = "0x18330AC20")]
	public Dictionary<string, string> GetResponseHeaders()
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x330C300", Offset = "0x330A900", VA = "0x18330C300")]
	private UnityWebRequestError SetUploadHandler(UploadHandler uh)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x330BE90", Offset = "0x330A490", VA = "0x18330BE90")]
	private UnityWebRequestError SetDownloadHandler(DownloadHandler dh)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x330C250", Offset = "0x330A850", VA = "0x18330C250")]
	private UnityWebRequestError SetTimeoutMsec(int timeout)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x330AFD0", Offset = "0x33095D0", VA = "0x18330AFD0")]
	public static UnityWebRequest Get(string uri)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x330A2F0", Offset = "0x33088F0", VA = "0x18330A2F0")]
	public static UnityWebRequest Delete(string uri)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x330B970", Offset = "0x3309F70", VA = "0x18330B970")]
	public static UnityWebRequest Put(string uri, string bodyData)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x330B7D0", Offset = "0x3309DD0", VA = "0x18330B7D0")]
	public static UnityWebRequest Post(string uri, string postData, string contentType)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x330C580", Offset = "0x330AB80", VA = "0x18330C580")]
	private static void SetupPost(UnityWebRequest request, string postData, string contentType)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x330A460", Offset = "0x3308A60", VA = "0x18330A460")]
	public static string EscapeURL(string s)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x330A5B0", Offset = "0x3308BB0", VA = "0x18330A5B0")]
	public static string EscapeURL(string s, Encoding e)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x330AEE0", Offset = "0x33094E0", VA = "0x18330AEE0")]
	private static extern void GetWebErrorString_Injected(UnityWebRequestError err, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x330A810", Offset = "0x3308E10", VA = "0x18330A810")]
	private static extern void GetHTTPStatusString_Injected(long responseCode, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x330BAB0", Offset = "0x330A0B0", VA = "0x18330BAB0")]
	private static extern void Release_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x330A1C0", Offset = "0x33087C0", VA = "0x18330A1C0")]
	private static extern IntPtr BeginWebRequest_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x330A120", Offset = "0x3308720", VA = "0x18330A120")]
	private static extern void Abort_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x330BF00", Offset = "0x330A500", VA = "0x18330BF00")]
	private static extern UnityWebRequestError SetMethod_Injected(IntPtr _unity_self, UnityWebRequestMethod methodType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x330BC30", Offset = "0x330A230", VA = "0x18330BC30")]
	private static extern UnityWebRequestError SetCustomMethod_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper customMethodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x330A770", Offset = "0x3308D70", VA = "0x18330A770")]
	private static extern UnityWebRequestError GetError_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x330ADC0", Offset = "0x33093C0", VA = "0x18330ADC0")]
	private static extern void GetUrl_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x330C370", Offset = "0x330A970", VA = "0x18330C370")]
	private static extern UnityWebRequestError SetUrl_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper url);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x330CB70", Offset = "0x330B170", VA = "0x18330CB70")]
	private static extern long get_responseCode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x330CAD0", Offset = "0x330B0D0", VA = "0x18330CAD0")]
	private static extern bool get_isModifiable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x330CC10", Offset = "0x330B210", VA = "0x18330CC10")]
	private static extern Result get_result_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x330C840", Offset = "0x330AE40", VA = "0x18330C840")]
	private static extern ulong get_downloadedBytes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x330BFA0", Offset = "0x330A5A0", VA = "0x18330BFA0")]
	private static extern void SetRedirectLimitFromScripting_Injected(IntPtr _unity_self, int limit);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x330B390", Offset = "0x3309990", VA = "0x18330B390")]
	private static extern UnityWebRequestError InternalSetRequestHeader_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x330A9B0", Offset = "0x3308FB0", VA = "0x18330A9B0")]
	private static extern void GetResponseHeader_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x330A910", Offset = "0x3308F10", VA = "0x18330A910")]
	private static extern string[] GetResponseHeaderKeys_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x330C2B0", Offset = "0x330A8B0", VA = "0x18330C2B0")]
	private static extern UnityWebRequestError SetUploadHandler_Injected(IntPtr _unity_self, IntPtr uh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x330BE40", Offset = "0x330A440", VA = "0x18330BE40")]
	private static extern UnityWebRequestError SetDownloadHandler_Injected(IntPtr _unity_self, IntPtr dh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x330C210", Offset = "0x330A810", VA = "0x18330C210")]
	private static extern UnityWebRequestError SetTimeoutMsec_Injected(IntPtr _unity_self, int timeout);
}
