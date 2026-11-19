// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002C7")]
public class WebProxy : IWebProxy, ISerializable
{
	[Token(Token = "0x4000ADE")]
	[FieldOffset(Offset = "0x10")]
	private bool _UseRegistry;

	[Token(Token = "0x4000ADF")]
	[FieldOffset(Offset = "0x11")]
	private bool _BypassOnLocal;

	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x12")]
	private bool m_EnableAutoproxy;

	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0x18")]
	private Uri _ProxyAddress;

	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList _BypassList;

	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x28")]
	private ICredentials _Credentials;

	[Token(Token = "0x4000AE4")]
	[FieldOffset(Offset = "0x30")]
	private Regex[] _RegExBypassList;

	[Token(Token = "0x4000AE5")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable _ProxyHostAddresses;

	[Token(Token = "0x4000AE6")]
	[FieldOffset(Offset = "0x40")]
	private AutoWebProxyScriptEngine m_ScriptEngine;

	[Token(Token = "0x17000443")]
	public ICredentials Credentials
	{
		[Token(Token = "0x6001354")]
		[Address(RVA = "0x62BFA70", Offset = "0x62BEA70", VA = "0x62BFA70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000444")]
	public bool UseDefaultCredentials
	{
		[Token(Token = "0x6001355")]
		[Address(RVA = "0x62BFA80", Offset = "0x62BEA80", VA = "0x62BFA80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001356")]
		[Address(RVA = "0x62BFAE0", Offset = "0x62BEAE0", VA = "0x62BFAE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000445")]
	internal AutoWebProxyScriptEngine ScriptEngine
	{
		[Token(Token = "0x6001361")]
		[Address(RVA = "0x62C0B00", Offset = "0x62BFB00", VA = "0x62C0B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x62BF680", Offset = "0x62BE680", VA = "0x62BF680")]
	public WebProxy()
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x62BF6E0", Offset = "0x62BE6E0", VA = "0x62BF6E0")]
	public WebProxy(Uri Address, bool BypassOnLocal, string[] BypassList, ICredentials Credentials)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x62BFB70", Offset = "0x62BEB70", VA = "0x62BFB70", Slot = "4")]
	public Uri GetProxy(Uri destination)
	{
		return null;
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x62BF790", Offset = "0x62BE790", VA = "0x62BF790")]
	private void UpdateRegExList(bool canThrow)
	{
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x62BFFC0", Offset = "0x62BEFC0", VA = "0x62BFFC0")]
	private bool IsMatchInBypassList(Uri input)
	{
		return default(bool);
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x62C0130", Offset = "0x62BF130", VA = "0x62C0130")]
	private bool IsLocal(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x62C0300", Offset = "0x62BF300", VA = "0x62C0300")]
	private bool IsLocalInProxyHash(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x62C03E0", Offset = "0x62BF3E0", VA = "0x62C03E0", Slot = "5")]
	public bool IsBypassed(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x62BFF10", Offset = "0x62BEF10", VA = "0x62BFF10")]
	private bool IsBypassedManual(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x62C05C0", Offset = "0x62BF5C0", VA = "0x62C05C0")]
	protected WebProxy(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x62C0990", Offset = "0x62BF990", VA = "0x62C0990", Slot = "7")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001360")]
	[Address(RVA = "0x62C09B0", Offset = "0x62BF9B0", VA = "0x62C09B0", Slot = "8")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001362")]
	[Address(RVA = "0x62C0B10", Offset = "0x62BFB10", VA = "0x62C0B10")]
	public static IWebProxy CreateDefaultProxy()
	{
		return null;
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x62C0B60", Offset = "0x62BFB60", VA = "0x62C0B60")]
	internal WebProxy(bool enableAutoproxy)
	{
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x62C0980", Offset = "0x62BF980", VA = "0x62C0980")]
	internal void UnsafeUpdateFromRegistry()
	{
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x62BFD00", Offset = "0x62BED00", VA = "0x62BFD00")]
	private bool GetProxyAuto(Uri destination, out Uri proxyUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x62C04B0", Offset = "0x62BF4B0", VA = "0x62C04B0")]
	private bool IsBypassedAuto(Uri destination, out bool isBypassed)
	{
		return default(bool);
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x62C0B80", Offset = "0x62BFB80", VA = "0x62C0B80")]
	private static bool AreAllBypassed(IEnumerable<string> proxies, bool checkFirstOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x62C0E90", Offset = "0x62BFE90", VA = "0x62C0E90")]
	private static Uri ProxyUri(string proxyName)
	{
		return null;
	}
}
