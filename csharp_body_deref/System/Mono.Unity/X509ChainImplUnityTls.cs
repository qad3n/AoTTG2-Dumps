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
		[Address(RVA = "0x453B700", Offset = "0x453B700", VA = "0x453B700", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	internal UnityTls.unitytls_x509list_ref NativeCertificateChain
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x453B720", Offset = "0x453B720", VA = "0x453B720")]
		get
		{
			return default(UnityTls.unitytls_x509list_ref);
		}
	}

	[Token(Token = "0x17000016")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x453B730", Offset = "0x453B730", VA = "0x453B730", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x453BB90", Offset = "0x453BB90", VA = "0x453BB90", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x45399B0", Offset = "0x45399B0", VA = "0x45399B0")]
	internal X509ChainImplUnityTls(UnityTls.unitytls_x509list_ref nativeCertificateChain, bool reverseOrder = false)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x453BA80", Offset = "0x453BA80", VA = "0x453BA80", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags error)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x453BBA0", Offset = "0x453BBA0", VA = "0x453BBA0", Slot = "8")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x453BBB0", Offset = "0x453BBB0", VA = "0x453BBB0", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x453BC00", Offset = "0x453BC00", VA = "0x453BC00", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}
}
