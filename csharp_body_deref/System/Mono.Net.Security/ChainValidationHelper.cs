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
	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x10")]
	private readonly WeakReference<SslStream> owner;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x18")]
	private readonly MonoTlsSettings settings;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x20")]
	private readonly MobileTlsProvider provider;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x28")]
	private readonly ServerCertValidationCallback certValidationCallback;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x30")]
	private readonly LocalCertSelectionCallback certSelectionCallback;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x38")]
	private readonly MonoTlsStream tlsStream;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x40")]
	private readonly HttpWebRequest request;

	[Token(Token = "0x17000022")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x2490500", Offset = "0x248EB00", VA = "0x182490500")]
	internal static ChainValidationHelper GetInternalValidator(SslStream owner, MobileTlsProvider provider, MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x2490430", Offset = "0x248EA30", VA = "0x182490430")]
	internal static ChainValidationHelper Create(MobileTlsProvider provider, ref MonoTlsSettings settings, MonoTlsStream stream)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2490E10", Offset = "0x248F410", VA = "0x182490E10")]
	private ChainValidationHelper(SslStream owner, MobileTlsProvider provider, MonoTlsSettings settings, bool cloneSettings, MonoTlsStream stream)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x24905F0", Offset = "0x248EBF0", VA = "0x1824905F0")]
	private static ServerCertValidationCallback GetValidationCallback(MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x24904C0", Offset = "0x248EAC0", VA = "0x1824904C0")]
	private static X509Certificate DefaultSelectionCallback(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x24907A0", Offset = "0x248EDA0", VA = "0x1824907A0", Slot = "5")]
	public bool SelectClientCertificate(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers, out X509Certificate clientCertificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x2490800", Offset = "0x248EE00", VA = "0x182490800")]
	public ValidationResult ValidateCertificate(string host, bool serverMode, X509Certificate leaf, X509Chain chain)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x24908A0", Offset = "0x248EEA0", VA = "0x1824908A0")]
	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x2490980", Offset = "0x248EF80", VA = "0x182490980")]
	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, ref X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x24906E0", Offset = "0x248ECE0", VA = "0x1824906E0")]
	private bool InvokeCallback(X509Certificate leaf, X509Chain chain, SslPolicyErrors errors)
	{
		return default(bool);
	}
}
