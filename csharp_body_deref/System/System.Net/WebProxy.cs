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
[Token(Token = "0x2000306")]
public class WebProxy : IWebProxy, ISerializable
{
	[Token(Token = "0x4000BAD")]
	[FieldOffset(Offset = "0x10")]
	private bool _UseRegistry;

	[Token(Token = "0x4000BAE")]
	[FieldOffset(Offset = "0x11")]
	private bool _BypassOnLocal;

	[Token(Token = "0x4000BAF")]
	[FieldOffset(Offset = "0x12")]
	private bool m_EnableAutoproxy;

	[Token(Token = "0x4000BB0")]
	[FieldOffset(Offset = "0x18")]
	private Uri _ProxyAddress;

	[Token(Token = "0x4000BB1")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList _BypassList;

	[Token(Token = "0x4000BB2")]
	[FieldOffset(Offset = "0x28")]
	private ICredentials _Credentials;

	[Token(Token = "0x4000BB3")]
	[FieldOffset(Offset = "0x30")]
	private Regex[] _RegExBypassList;

	[Token(Token = "0x4000BB4")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable _ProxyHostAddresses;

	[Token(Token = "0x4000BB5")]
	[FieldOffset(Offset = "0x40")]
	private AutoWebProxyScriptEngine m_ScriptEngine;

	[Token(Token = "0x17000472")]
	public ICredentials Credentials
	{
		[Token(Token = "0x6001512")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000473")]
	public bool UseDefaultCredentials
	{
		[Token(Token = "0x6001513")]
		[Address(RVA = "0x27D9830", Offset = "0x27D7E30", VA = "0x1827D9830")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001514")]
		[Address(RVA = "0x27D98A0", Offset = "0x27D7EA0", VA = "0x1827D98A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000474")]
	internal AutoWebProxyScriptEngine ScriptEngine
	{
		[Token(Token = "0x600151F")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001510")]
	[Address(RVA = "0x27D93D0", Offset = "0x27D79D0", VA = "0x1827D93D0")]
	public WebProxy()
	{
	}

	[Token(Token = "0x6001511")]
	[Address(RVA = "0x27D9440", Offset = "0x27D7A40", VA = "0x1827D9440")]
	public WebProxy(Uri Address, bool BypassOnLocal, string[] BypassList, ICredentials Credentials)
	{
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x27D8620", Offset = "0x27D6C20", VA = "0x1827D8620", Slot = "4")]
	public Uri GetProxy(Uri destination)
	{
		return null;
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x27D91C0", Offset = "0x27D77C0", VA = "0x1827D91C0")]
	private void UpdateRegExList(bool canThrow)
	{
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x27D8FA0", Offset = "0x27D75A0", VA = "0x1827D8FA0")]
	private bool IsMatchInBypassList(Uri input)
	{
		return default(bool);
	}

	[Token(Token = "0x6001518")]
	[Address(RVA = "0x27D8DE0", Offset = "0x27D73E0", VA = "0x1827D8DE0")]
	private bool IsLocal(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x6001519")]
	[Address(RVA = "0x27D8CF0", Offset = "0x27D72F0", VA = "0x1827D8CF0")]
	private bool IsLocalInProxyHash(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600151A")]
	[Address(RVA = "0x27D8BA0", Offset = "0x27D71A0", VA = "0x1827D8BA0", Slot = "5")]
	public bool IsBypassed(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600151B")]
	[Address(RVA = "0x27D88C0", Offset = "0x27D6EC0", VA = "0x1827D88C0")]
	private bool IsBypassedManual(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600151C")]
	[Address(RVA = "0x27D94F0", Offset = "0x27D7AF0", VA = "0x1827D94F0")]
	protected WebProxy(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600151D")]
	[Address(RVA = "0x27CB5E0", Offset = "0x27C9BE0", VA = "0x1827CB5E0", Slot = "7")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x27D82A0", Offset = "0x27D68A0", VA = "0x1827D82A0", Slot = "8")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x27D8250", Offset = "0x27D6850", VA = "0x1827D8250")]
	public static IWebProxy CreateDefaultProxy()
	{
		return null;
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x27D93A0", Offset = "0x27D79A0", VA = "0x1827D93A0")]
	internal WebProxy(bool enableAutoproxy)
	{
	}

	[Token(Token = "0x6001522")]
	[Address(RVA = "0xB3C020", Offset = "0xB3A620", VA = "0x180B3C020")]
	internal void UnsafeUpdateFromRegistry()
	{
	}

	[Token(Token = "0x6001523")]
	[Address(RVA = "0x27D83F0", Offset = "0x27D69F0", VA = "0x1827D83F0")]
	private bool GetProxyAuto(Uri destination, out Uri proxyUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6001524")]
	[Address(RVA = "0x27D87F0", Offset = "0x27D6DF0", VA = "0x1827D87F0")]
	private bool IsBypassedAuto(Uri destination, out bool isBypassed)
	{
		return default(bool);
	}

	[Token(Token = "0x6001525")]
	[Address(RVA = "0x27D8070", Offset = "0x27D6670", VA = "0x1827D8070")]
	private static bool AreAllBypassed(IEnumerable<string> proxies, bool checkFirstOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001526")]
	[Address(RVA = "0x27D9130", Offset = "0x27D7730", VA = "0x1827D9130")]
	private static Uri ProxyUri(string proxyName)
	{
		return null;
	}
}
