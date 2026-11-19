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
	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x10")]
	private readonly WeakReference<SslStream> owner;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x18")]
	private readonly MonoTlsSettings settings;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x20")]
	private readonly MobileTlsProvider provider;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x28")]
	private readonly ServerCertValidationCallback certValidationCallback;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x30")]
	private readonly LocalCertSelectionCallback certSelectionCallback;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x38")]
	private readonly MonoTlsStream tlsStream;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x40")]
	private readonly HttpWebRequest request;

	[Token(Token = "0x17000022")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x5E38E50", Offset = "0x5E37E50", VA = "0x5E38E50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x5E386F0", Offset = "0x5E376F0", VA = "0x5E386F0")]
	internal static ChainValidationHelper GetInternalValidator(SslStream owner, MobileTlsProvider provider, MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x5E38AC0", Offset = "0x5E37AC0", VA = "0x5E38AC0")]
	internal static ChainValidationHelper Create(MobileTlsProvider provider, ref MonoTlsSettings settings, MonoTlsStream stream)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x5E387B0", Offset = "0x5E377B0", VA = "0x5E387B0")]
	private ChainValidationHelper(SslStream owner, MobileTlsProvider provider, MonoTlsSettings settings, bool cloneSettings, MonoTlsStream stream)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x5E38C60", Offset = "0x5E37C60", VA = "0x5E38C60")]
	private static ServerCertValidationCallback GetValidationCallback(MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x5E38E20", Offset = "0x5E37E20", VA = "0x5E38E20")]
	private static X509Certificate DefaultSelectionCallback(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x5E38E60", Offset = "0x5E37E60", VA = "0x5E38E60", Slot = "5")]
	public bool SelectClientCertificate(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers, out X509Certificate clientCertificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x5E38EA0", Offset = "0x5E37EA0", VA = "0x5E38EA0")]
	public ValidationResult ValidateCertificate(string host, bool serverMode, X509Certificate leaf, X509Chain chain)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x5E39030", Offset = "0x5E38030", VA = "0x5E39030")]
	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x5E39110", Offset = "0x5E38110", VA = "0x5E39110")]
	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, ref X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x5E39710", Offset = "0x5E38710", VA = "0x5E39710")]
	private bool InvokeCallback(X509Certificate leaf, X509Chain chain, SslPolicyErrors errors)
	{
		return default(bool);
	}
}
