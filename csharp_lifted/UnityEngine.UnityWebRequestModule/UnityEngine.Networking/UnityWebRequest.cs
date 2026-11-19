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
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x6D1F240", Offset = "0x6D1E240", VA = "0x6D1F240")]
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

	[Token(Token = "0x17000005")]
	public bool disposeCertificateHandlerOnDispose
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x6D1C1F0", Offset = "0x6D1B1F0", VA = "0x6D1C1F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x6D1C200", Offset = "0x6D1B200", VA = "0x6D1C200")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool disposeDownloadHandlerOnDispose
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x6D1C210", Offset = "0x6D1B210", VA = "0x6D1C210")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x6D1C220", Offset = "0x6D1B220", VA = "0x6D1C220")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool disposeUploadHandlerOnDispose
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x6D1C230", Offset = "0x6D1B230", VA = "0x6D1C230")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x6D1C240", Offset = "0x6D1B240", VA = "0x6D1C240")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public string method
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x6D1C5F0", Offset = "0x6D1B5F0", VA = "0x6D1C5F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public string error
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x6D1D650", Offset = "0x6D1C650", VA = "0x6D1D650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public string url
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x6D1C4C0", Offset = "0x6D1B4C0", VA = "0x6D1C4C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public long responseCode
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x6D1D8C0", Offset = "0x6D1C8C0", VA = "0x6D1D8C0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700000C")]
	public bool isModifiable
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x6D1D280", Offset = "0x6D1C280", VA = "0x6D1D280")]
		[UnityEngine.Bindings.NativeMethod("IsModifiable")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool isDone
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x6D1DC60", Offset = "0x6D1CC60", VA = "0x6D1DC60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public Result result
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x6D1D860", Offset = "0x6D1C860", VA = "0x6D1D860")]
		[UnityEngine.Bindings.NativeMethod("GetResult")]
		get
		{
			return default(Result);
		}
	}

	[Token(Token = "0x1700000F")]
	public ulong downloadedBytes
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x6D1DCF0", Offset = "0x6D1CCF0", VA = "0x6D1DCF0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000010")]
	public int redirectLimit
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x6D1DE20", Offset = "0x6D1CE20", VA = "0x6D1DE20")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public UploadHandler uploadHandler
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x6D1CF00", Offset = "0x6D1BF00", VA = "0x6D1CF00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x6D1C9F0", Offset = "0x6D1B9F0", VA = "0x6D1C9F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public DownloadHandler downloadHandler
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x6D1CEF0", Offset = "0x6D1BEF0", VA = "0x6D1CEF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x6D1C860", Offset = "0x6D1B860", VA = "0x6D1C860")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public CertificateHandler certificateHandler
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x6D1CF10", Offset = "0x6D1BF10", VA = "0x6D1CF10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public int timeout
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x6D1E9B0", Offset = "0x6D1D9B0", VA = "0x6D1E9B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x6D1BFD0", Offset = "0x6D1AFD0", VA = "0x6D1BFD0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_UNITYWEBREQUEST")]
	private static string GetWebErrorString(UnityWebRequestError err)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6D1C0E0", Offset = "0x6D1B0E0", VA = "0x6D1C0E0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static string GetHTTPStatusString(long responseCode)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6D1C250", Offset = "0x6D1B250", VA = "0x6D1C250")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern IntPtr Create();

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6D1C280", Offset = "0x6D1B280", VA = "0x6D1C280")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private void Release()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x6D1C310", Offset = "0x6D1B310", VA = "0x6D1C310")]
	internal void InternalDestroy()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x6D1C400", Offset = "0x6D1B400", VA = "0x6D1C400")]
	private void InternalSetDefaults()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x6D1C410", Offset = "0x6D1B410", VA = "0x6D1C410")]
	public UnityWebRequest(string url)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x6D1C530", Offset = "0x6D1B530", VA = "0x6D1C530")]
	public UnityWebRequest(string url, string method)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x6D1C770", Offset = "0x6D1B770", VA = "0x6D1C770")]
	public UnityWebRequest(string url, string method, DownloadHandler downloadHandler, UploadHandler uploadHandler)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x6D1CB80", Offset = "0x6D1BB80", VA = "0x6D1CB80", Slot = "1")]
	~UnityWebRequest()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x6D1CDA0", Offset = "0x6D1BDA0", VA = "0x6D1CDA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x6D1CD00", Offset = "0x6D1BD00", VA = "0x6D1CD00")]
	private void DisposeHandlers()
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x6D1CF20", Offset = "0x6D1BF20", VA = "0x6D1CF20")]
	[UnityEngine.Bindings.NativeThrows]
	internal UnityWebRequestAsyncOperation BeginWebRequest()
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x6D1D010", Offset = "0x6D1C010", VA = "0x6D1D010")]
	public UnityWebRequestAsyncOperation SendWebRequest()
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x6D1C3A0", Offset = "0x6D1B3A0", VA = "0x6D1C3A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void Abort()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x6D1D080", Offset = "0x6D1C080", VA = "0x6D1D080")]
	private UnityWebRequestError SetMethod(UnityWebRequestMethod methodType)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x6D1D120", Offset = "0x6D1C120", VA = "0x6D1D120")]
	internal void InternalSetMethod(UnityWebRequestMethod methodType)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x6D1D2E0", Offset = "0x6D1C2E0", VA = "0x6D1D2E0")]
	private UnityWebRequestError SetCustomMethod(string customMethodName)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x6D1D4C0", Offset = "0x6D1C4C0", VA = "0x6D1D4C0")]
	internal void InternalSetCustomMethod(string customMethodName)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x6D1D5C0", Offset = "0x6D1C5C0", VA = "0x6D1D5C0")]
	private UnityWebRequestError GetError()
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x6D1DA20", Offset = "0x6D1CA20", VA = "0x6D1DA20")]
	private UnityWebRequestError SetUrl(string url)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x6D1D920", Offset = "0x6D1C920", VA = "0x6D1D920")]
	private void InternalSetUrl(string url)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x6D1DD80", Offset = "0x6D1CD80", VA = "0x6D1DD80")]
	[UnityEngine.Bindings.NativeThrows]
	private void SetRedirectLimitFromScripting(int limit)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x6D1DE80", Offset = "0x6D1CE80", VA = "0x6D1DE80")]
	[UnityEngine.Bindings.NativeMethod("SetRequestHeader")]
	internal UnityWebRequestError InternalSetRequestHeader(string name, string value)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x6D1E140", Offset = "0x6D1D140", VA = "0x6D1E140")]
	public void SetRequestHeader(string name, string value)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x6D1E2C0", Offset = "0x6D1D2C0", VA = "0x6D1E2C0")]
	public string GetResponseHeader(string name)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x6D1E510", Offset = "0x6D1D510", VA = "0x6D1E510")]
	internal string[] GetResponseHeaderKeys()
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x6D1E5A0", Offset = "0x6D1D5A0", VA = "0x6D1E5A0")]
	public Dictionary<string, string> GetResponseHeaders()
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x6D1E7B0", Offset = "0x6D1D7B0", VA = "0x6D1E7B0")]
	private UnityWebRequestError SetUploadHandler(UploadHandler uh)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x6D1E860", Offset = "0x6D1D860", VA = "0x6D1E860")]
	private UnityWebRequestError SetDownloadHandler(DownloadHandler dh)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x6D1E910", Offset = "0x6D1D910", VA = "0x6D1E910")]
	private UnityWebRequestError SetTimeoutMsec(int timeout)
	{
		return default(UnityWebRequestError);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x6D1EB80", Offset = "0x6D1DB80", VA = "0x6D1EB80")]
	public static UnityWebRequest Get(string uri)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x6D1EC40", Offset = "0x6D1DC40", VA = "0x6D1EC40")]
	public static UnityWebRequest Delete(string uri)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x6D1ECB0", Offset = "0x6D1DCB0", VA = "0x6D1ECB0")]
	public static UnityWebRequest Put(string uri, string bodyData)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x6D1EEB0", Offset = "0x6D1DEB0", VA = "0x6D1EEB0")]
	public static UnityWebRequest Post(string uri, string postData, string contentType)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x6D1EF30", Offset = "0x6D1DF30", VA = "0x6D1EF30")]
	private static void SetupPost(UnityWebRequest request, string postData, string contentType)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x6D1F100", Offset = "0x6D1E100", VA = "0x6D1F100")]
	public static string EscapeURL(string s)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x6D1F120", Offset = "0x6D1E120", VA = "0x6D1F120")]
	public static string EscapeURL(string s, Encoding e)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x6D1C0A0", Offset = "0x6D1B0A0", VA = "0x6D1C0A0")]
	private static extern void GetWebErrorString_Injected(UnityWebRequestError err, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x6D1C1B0", Offset = "0x6D1B1B0", VA = "0x6D1C1B0")]
	private static extern void GetHTTPStatusString_Injected(long responseCode, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x6D1C2E0", Offset = "0x6D1B2E0", VA = "0x6D1C2E0")]
	private static extern void Release_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x6D1CFE0", Offset = "0x6D1BFE0", VA = "0x6D1CFE0")]
	private static extern IntPtr BeginWebRequest_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x6D1D050", Offset = "0x6D1C050", VA = "0x6D1D050")]
	private static extern void Abort_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x6D1D0E0", Offset = "0x6D1C0E0", VA = "0x6D1D0E0")]
	private static extern UnityWebRequestError SetMethod_Injected(IntPtr _unity_self, UnityWebRequestMethod methodType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x6D1D480", Offset = "0x6D1C480", VA = "0x6D1D480")]
	private static extern UnityWebRequestError SetCustomMethod_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper customMethodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x6D1D620", Offset = "0x6D1C620", VA = "0x6D1D620")]
	private static extern UnityWebRequestError GetError_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x6D1DBC0", Offset = "0x6D1CBC0", VA = "0x6D1DBC0")]
	private static extern UnityWebRequestError SetUrl_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper url);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x6D1DC00", Offset = "0x6D1CC00", VA = "0x6D1DC00")]
	private static extern long get_responseCode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x6D1DC30", Offset = "0x6D1CC30", VA = "0x6D1DC30")]
	private static extern bool get_isModifiable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x6D1DCC0", Offset = "0x6D1CCC0", VA = "0x6D1DCC0")]
	private static extern Result get_result_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x6D1DD50", Offset = "0x6D1CD50", VA = "0x6D1DD50")]
	private static extern ulong get_downloadedBytes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x6D1DDE0", Offset = "0x6D1CDE0", VA = "0x6D1DDE0")]
	private static extern void SetRedirectLimitFromScripting_Injected(IntPtr _unity_self, int limit);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x6D1E100", Offset = "0x6D1D100", VA = "0x6D1E100")]
	private static extern UnityWebRequestError InternalSetRequestHeader_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x6D1E4D0", Offset = "0x6D1D4D0", VA = "0x6D1E4D0")]
	private static extern void GetResponseHeader_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x6D1E570", Offset = "0x6D1D570", VA = "0x6D1E570")]
	private static extern string[] GetResponseHeaderKeys_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6D1E820", Offset = "0x6D1D820", VA = "0x6D1E820")]
	private static extern UnityWebRequestError SetUploadHandler_Injected(IntPtr _unity_self, IntPtr uh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x6D1E8D0", Offset = "0x6D1D8D0", VA = "0x6D1E8D0")]
	private static extern UnityWebRequestError SetDownloadHandler_Injected(IntPtr _unity_self, IntPtr dh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x6D1E970", Offset = "0x6D1D970", VA = "0x6D1E970")]
	private static extern UnityWebRequestError SetTimeoutMsec_Injected(IntPtr _unity_self, int timeout);
}
