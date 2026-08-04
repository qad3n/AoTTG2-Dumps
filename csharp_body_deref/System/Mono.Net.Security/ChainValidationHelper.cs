// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.ChainValidationHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Net;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security;

[Token(Token = "0x2000052")]
internal class ChainValidationHelper : ICertificateValidator
{
	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x10")]
	private readonly WeakReference<SslStream> owner;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x18")]
	private readonly MonoTlsSettings settings;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x20")]
	private readonly MobileTlsProvider provider;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x28")]
	private readonly ServerCertValidationCallback certValidationCallback;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x30")]
	private readonly LocalCertSelectionCallback certSelectionCallback;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x38")]
	private readonly MonoTlsStream tlsStream;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x40")]
	private readonly HttpWebRequest request;

	[Token(Token = "0x17000022")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x4524E40", Offset = "0x4524E40", VA = "0x4524E40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4524680", Offset = "0x4524680", VA = "0x4524680")]
	internal static ChainValidationHelper GetInternalValidator(SslStream owner, MobileTlsProvider provider, MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4524A90", Offset = "0x4524A90", VA = "0x4524A90")]
	internal static ChainValidationHelper Create(MobileTlsProvider provider, ref MonoTlsSettings settings, MonoTlsStream stream)
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4524750", Offset = "0x4524750", VA = "0x4524750")]
	private ChainValidationHelper(SslStream owner, MobileTlsProvider provider, MonoTlsSettings settings, bool cloneSettings, MonoTlsStream stream)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4524C40", Offset = "0x4524C40", VA = "0x4524C40")]
	private static ServerCertValidationCallback GetValidationCallback(MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4524E10", Offset = "0x4524E10", VA = "0x4524E10")]
	private static X509Certificate DefaultSelectionCallback(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4524E50", Offset = "0x4524E50", VA = "0x4524E50", Slot = "5")]
	public bool SelectClientCertificate(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers, out X509Certificate clientCertificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4524EA0", Offset = "0x4524EA0", VA = "0x4524EA0")]
	public ValidationResult ValidateCertificate(string host, bool serverMode, X509Certificate leaf, X509Chain chain)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4524F60", Offset = "0x4524F60", VA = "0x4524F60")]
	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4525030", Offset = "0x4525030", VA = "0x4525030")]
	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, ref X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4525610", Offset = "0x4525610", VA = "0x4525610")]
	private bool InvokeCallback(X509Certificate leaf, X509Chain chain, SslPolicyErrors errors)
	{
		return default(bool);
	}
}
