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
		[Address(RVA = "0x4DDF500", Offset = "0x4DDF500", VA = "0x4DDF500")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4DDF510", Offset = "0x4DDF510", VA = "0x4DDF510")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool disposeDownloadHandlerOnDispose
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4DDF520", Offset = "0x4DDF520", VA = "0x4DDF520")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x4DDF530", Offset = "0x4DDF530", VA = "0x4DDF530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool disposeUploadHandlerOnDispose
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4DDF540", Offset = "0x4DDF540", VA = "0x4DDF540")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4DDF550", Offset = "0x4DDF550", VA = "0x4DDF550")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public string method
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x4DDF840", Offset = "0x4DDF840", VA = "0x4DDF840")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public string error
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x4DE0330", Offset = "0x4DE0330", VA = "0x4DE0330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public string url
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x4DE0520", Offset = "0x4DE0520", VA = "0x4DE0520")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x4DDF710", Offset = "0x4DDF710", VA = "0x4DDF710")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public extern long responseCode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x4DE04F0", Offset = "0x4DE04F0", VA = "0x4DE04F0")]
		get;
	}

	[Token(Token = "0x1700000C")]
	public extern bool isModifiable
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x4DE01B0", Offset = "0x4DE01B0", VA = "0x4DE01B0")]
		[UnityEngine.Bindings.NativeMethod("IsModifiable")]
		get;
	}

	[Token(Token = "0x1700000D")]
	public bool isDone
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x4DE06A0", Offset = "0x4DE06A0", VA = "0x4DE06A0")]
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
		[Address(RVA = "0x4DE04C0", Offset = "0x4DE04C0", VA = "0x4DE04C0")]
		[UnityEngine.Bindings.NativeMethod("GetResult")]
		get;
	}

	[Token(Token = "0x1700000F")]
	public extern ulong downloadedBytes
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x4DE06E0", Offset = "0x4DE06E0", VA = "0x4DE06E0")]
		get;
	}

	[Token(Token = "0x17000010")]
	public UploadHandler uploadHandler
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x4DDFFC0", Offset = "0x4DDFFC0", VA = "0x4DDFFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x4DDFBA0", Offset = "0x4DDFBA0", VA = "0x4DDFBA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public DownloadHandler downloadHandler
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x4DDFFB0", Offset = "0x4DDFFB0", VA = "0x4DDFFB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x4DDFAB0", Offset = "0x4DDFAB0", VA = "0x4DDFAB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public CertificateHandler certificateHandler
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x4DDFFD0", Offset = "0x4DDFFD0", VA = "0x4DDFFD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public int timeout
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x4DE0C20", Offset = "0x4DE0C20", VA = "0x4DE0C20")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4DDF4A0", Offset = "0x4DDF4A0", VA = "0x4DDF4A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_UNITYWEBREQUEST")]
	private static extern string GetWebErrorString(UnityWebRequestError err);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4DDF4D0", Offset = "0x4DDF4D0", VA = "0x4DDF4D0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static extern string GetHTTPStatusString(long responseCode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4DDF560", Offset = "0x4DDF560", VA = "0x4DDF560")]
	internal static extern IntPtr Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4DDF590", Offset = "0x4DDF590", VA = "0x4DDF590")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private extern void Release();

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4DDF5C0", Offset = "0x4DDF5C0", VA = "0x4DDF5C0")]
	internal void InternalDestroy()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4DDF650", Offset = "0x4DDF650", VA = "0x4DDF650")]
	private void InternalSetDefaults()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4DDF660", Offset = "0x4DDF660", VA = "0x4DDF660")]
	public UnityWebRequest(string url)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4DDF780", Offset = "0x4DDF780", VA = "0x4DDF780")]
	public UnityWebRequest(string url, string method)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4DDF9C0", Offset = "0x4DDF9C0", VA = "0x4DDF9C0")]
	public UnityWebRequest(string url, string method, DownloadHandler downloadHandler, UploadHandler uploadHandler)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4DDFC90", Offset = "0x4DDFC90", VA = "0x4DDFC90", Slot = "1")]
	~UnityWebRequest()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4DDFE80", Offset = "0x4DDFE80", VA = "0x4DDFE80", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4DDFDF0", Offset = "0x4DDFDF0", VA = "0x4DDFDF0")]
	private void DisposeHandlers()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4DDFFE0", Offset = "0x4DDFFE0", VA = "0x4DDFFE0")]
	[UnityEngine.Bindings.NativeThrows]
	internal extern UnityWebRequestAsyncOperation BeginWebRequest();

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4DE0010", Offset = "0x4DE0010", VA = "0x4DE0010")]
	public UnityWebRequestAsyncOperation SendWebRequest()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4DDF620", Offset = "0x4DDF620", VA = "0x4DDF620")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public extern void Abort();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4DE0070", Offset = "0x4DE0070", VA = "0x4DE0070")]
	private extern UnityWebRequestError SetMethod(UnityWebRequestMethod methodType);

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4DE00B0", Offset = "0x4DE00B0", VA = "0x4DE00B0")]
	internal void InternalSetMethod(UnityWebRequestMethod methodType)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4DE01E0", Offset = "0x4DE01E0", VA = "0x4DE01E0")]
	private extern UnityWebRequestError SetCustomMethod(string customMethodName);

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4DE0220", Offset = "0x4DE0220", VA = "0x4DE0220")]
	internal void InternalSetCustomMethod(string customMethodName)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4DE0300", Offset = "0x4DE0300", VA = "0x4DE0300")]
	private extern UnityWebRequestError GetError();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4DE0550", Offset = "0x4DE0550", VA = "0x4DE0550")]
	private extern string GetUrl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4DE0660", Offset = "0x4DE0660", VA = "0x4DE0660")]
	private extern UnityWebRequestError SetUrl(string url);

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4DE0580", Offset = "0x4DE0580", VA = "0x4DE0580")]
	private void InternalSetUrl(string url)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4DE0710", Offset = "0x4DE0710", VA = "0x4DE0710")]
	[UnityEngine.Bindings.NativeMethod("SetRequestHeader")]
	internal extern UnityWebRequestError InternalSetRequestHeader(string name, string value);

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4DE0750", Offset = "0x4DE0750", VA = "0x4DE0750")]
	public void SetRequestHeader(string name, string value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4DE08B0", Offset = "0x4DE08B0", VA = "0x4DE08B0")]
	public extern string GetResponseHeader(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4DE08F0", Offset = "0x4DE08F0", VA = "0x4DE08F0")]
	internal extern string[] GetResponseHeaderKeys();

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4DE0920", Offset = "0x4DE0920", VA = "0x4DE0920")]
	public Dictionary<string, string> GetResponseHeaders()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4DE0B60", Offset = "0x4DE0B60", VA = "0x4DE0B60")]
	private extern UnityWebRequestError SetUploadHandler(UploadHandler uh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4DE0BA0", Offset = "0x4DE0BA0", VA = "0x4DE0BA0")]
	private extern UnityWebRequestError SetDownloadHandler(DownloadHandler dh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4DE0BE0", Offset = "0x4DE0BE0", VA = "0x4DE0BE0")]
	private extern UnityWebRequestError SetTimeoutMsec(int timeout);

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4DE0D90", Offset = "0x4DE0D90", VA = "0x4DE0D90")]
	public static UnityWebRequest Get(string uri)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4DE0E50", Offset = "0x4DE0E50", VA = "0x4DE0E50")]
	public static string EscapeURL(string s)
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4DE0E70", Offset = "0x4DE0E70", VA = "0x4DE0E70")]
	public static string EscapeURL(string s, Encoding e)
	{
		return null;
	}
}
