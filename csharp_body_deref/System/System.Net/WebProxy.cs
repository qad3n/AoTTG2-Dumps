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
[Token(Token = "0x200017E")]
public class WebProxy : IWebProxy, ISerializable
{
	[Token(Token = "0x4000797")]
	[FieldOffset(Offset = "0x10")]
	private bool _UseRegistry;

	[Token(Token = "0x4000798")]
	[FieldOffset(Offset = "0x11")]
	private bool _BypassOnLocal;

	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0x12")]
	private bool m_EnableAutoproxy;

	[Token(Token = "0x400079A")]
	[FieldOffset(Offset = "0x18")]
	private Uri _ProxyAddress;

	[Token(Token = "0x400079B")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList _BypassList;

	[Token(Token = "0x400079C")]
	[FieldOffset(Offset = "0x28")]
	private ICredentials _Credentials;

	[Token(Token = "0x400079D")]
	[FieldOffset(Offset = "0x30")]
	private Regex[] _RegExBypassList;

	[Token(Token = "0x400079E")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable _ProxyHostAddresses;

	[Token(Token = "0x400079F")]
	[FieldOffset(Offset = "0x40")]
	private AutoWebProxyScriptEngine m_ScriptEngine;

	[Token(Token = "0x1700021D")]
	public ICredentials Credentials
	{
		[Token(Token = "0x6000952")]
		[Address(RVA = "0x4979CD0", Offset = "0x4979CD0", VA = "0x4979CD0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021E")]
	public bool UseDefaultCredentials
	{
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x4979CE0", Offset = "0x4979CE0", VA = "0x4979CE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000954")]
		[Address(RVA = "0x4979D40", Offset = "0x4979D40", VA = "0x4979D40")]
		set
		{
		}
	}

	[Token(Token = "0x1700021F")]
	internal AutoWebProxyScriptEngine ScriptEngine
	{
		[Token(Token = "0x600095F")]
		[Address(RVA = "0x497AB10", Offset = "0x497AB10", VA = "0x497AB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x4979890", Offset = "0x4979890", VA = "0x4979890")]
	public WebProxy()
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x49798F0", Offset = "0x49798F0", VA = "0x49798F0")]
	public WebProxy(Uri Address, bool BypassOnLocal, string[] BypassList, ICredentials Credentials)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x4979DD0", Offset = "0x4979DD0", VA = "0x4979DD0", Slot = "4")]
	public Uri GetProxy(Uri destination)
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x49799A0", Offset = "0x49799A0", VA = "0x49799A0")]
	private void UpdateRegExList(bool canThrow)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x497A0D0", Offset = "0x497A0D0", VA = "0x497A0D0")]
	private bool IsMatchInBypassList(Uri input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x497A240", Offset = "0x497A240", VA = "0x497A240")]
	private bool IsLocal(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x497A3A0", Offset = "0x497A3A0", VA = "0x497A3A0")]
	private bool IsLocalInProxyHash(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x497A470", Offset = "0x497A470", VA = "0x497A470", Slot = "5")]
	public bool IsBypassed(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x497A020", Offset = "0x497A020", VA = "0x497A020")]
	private bool IsBypassedManual(Uri host)
	{
		return default(bool);
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x497A5C0", Offset = "0x497A5C0", VA = "0x497A5C0")]
	protected WebProxy(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x497A9A0", Offset = "0x497A9A0", VA = "0x497A9A0", Slot = "7")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x497A9C0", Offset = "0x497A9C0", VA = "0x497A9C0", Slot = "8")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x497AB20", Offset = "0x497AB20", VA = "0x497AB20")]
	public static IWebProxy CreateDefaultProxy()
	{
		return null;
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x497AB70", Offset = "0x497AB70", VA = "0x497AB70")]
	internal WebProxy(bool enableAutoproxy)
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x497A990", Offset = "0x497A990", VA = "0x497A990")]
	internal void UnsafeUpdateFromRegistry()
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x4979FB0", Offset = "0x4979FB0", VA = "0x4979FB0")]
	private bool GetProxyAuto(Uri destination, out Uri proxyUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x497A560", Offset = "0x497A560", VA = "0x497A560")]
	private bool IsBypassedAuto(Uri destination, out bool isBypassed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x497ABB0", Offset = "0x497ABB0", VA = "0x497ABB0")]
	private static bool AreAllBypassed(IEnumerable<string> proxies, bool checkFirstOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x497AF10", Offset = "0x497AF10", VA = "0x497AF10")]
	private static Uri ProxyUri(string proxyName)
	{
		return null;
	}
}
