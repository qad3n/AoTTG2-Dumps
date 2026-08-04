// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.X509ChainImplUnityTls
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Unity;

[Token(Token = "0x2000045")]
internal class X509ChainImplUnityTls : X509ChainImpl
{
	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x10")]
	private X509ChainElementCollection elements;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x18")]
	private UnityTls.unitytls_x509list_ref nativeCertificateChain;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x20")]
	private X509ChainPolicy policy;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x28")]
	private List<X509ChainStatus> chainStatusList;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x30")]
	private bool reverseOrder;

	[Token(Token = "0x17000014")]
	public override bool IsValid
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x45218F0", Offset = "0x45218F0", VA = "0x45218F0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	internal UnityTls.unitytls_x509list_ref NativeCertificateChain
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x4521910", Offset = "0x4521910", VA = "0x4521910")]
		get
		{
			return default(UnityTls.unitytls_x509list_ref);
		}
	}

	[Token(Token = "0x17000016")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x4521920", Offset = "0x4521920", VA = "0x4521920", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x4521D80", Offset = "0x4521D80", VA = "0x4521D80", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x451FBA0", Offset = "0x451FBA0", VA = "0x451FBA0")]
	internal X509ChainImplUnityTls(UnityTls.unitytls_x509list_ref nativeCertificateChain, bool reverseOrder = false)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4521C70", Offset = "0x4521C70", VA = "0x4521C70", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags error)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4521D90", Offset = "0x4521D90", VA = "0x4521D90", Slot = "8")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4521DA0", Offset = "0x4521DA0", VA = "0x4521DA0", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4521DF0", Offset = "0x4521DF0", VA = "0x4521DF0", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}
}
