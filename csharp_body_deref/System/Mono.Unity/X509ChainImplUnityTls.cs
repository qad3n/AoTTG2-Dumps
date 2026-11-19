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
	private unsafe UnityTls.unitytls_x509list* ownedList;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x20")]
	private UnityTls.unitytls_x509list_ref nativeCertificateChain;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainPolicy policy;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x30")]
	private List<X509ChainStatus> chainStatusList;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x38")]
	private bool reverseOrder;

	[Token(Token = "0x17000014")]
	public override bool IsValid
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x5E35A30", Offset = "0x5E34A30", VA = "0x5E35A30", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	internal UnityTls.unitytls_x509list_ref NativeCertificateChain
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x5E35A50", Offset = "0x5E34A50", VA = "0x5E35A50")]
		get
		{
			return default(UnityTls.unitytls_x509list_ref);
		}
	}

	[Token(Token = "0x17000016")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x5E35A60", Offset = "0x5E34A60", VA = "0x5E35A60", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x5E35E90", Offset = "0x5E34E90", VA = "0x5E35E90", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x5E33F00", Offset = "0x5E32F00", VA = "0x5E33F00")]
	internal X509ChainImplUnityTls(UnityTls.unitytls_x509list_ref nativeCertificateChain, bool reverseOrder = false)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x5E35710", Offset = "0x5E34710", VA = "0x5E35710")]
	internal unsafe X509ChainImplUnityTls(UnityTls.unitytls_x509list* ownedList, UnityTls.unitytls_errorstate* errorState, bool reverseOrder = false)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x5E35D80", Offset = "0x5E34D80", VA = "0x5E35D80", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags error)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x5E35EA0", Offset = "0x5E34EA0", VA = "0x5E35EA0", Slot = "8")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x5E35EB0", Offset = "0x5E34EB0", VA = "0x5E35EB0", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x5E35F40", Offset = "0x5E34F40", VA = "0x5E35F40", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}
}
