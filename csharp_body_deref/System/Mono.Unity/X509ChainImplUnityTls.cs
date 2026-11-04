// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.X509ChainImplUnityTls
// Update status: CHANGED in this game update
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
	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x10")]
	private X509ChainElementCollection elements;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x18")]
	private unsafe UnityTls.unitytls_x509list* ownedList;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x20")]
	private UnityTls.unitytls_x509list_ref nativeCertificateChain;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainPolicy policy;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x30")]
	private List<X509ChainStatus> chainStatusList;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x38")]
	private bool reverseOrder;

	[Token(Token = "0x17000014")]
	public override bool IsValid
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x24A71C0", Offset = "0x24A57C0", VA = "0x1824A71C0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	internal UnityTls.unitytls_x509list_ref NativeCertificateChain
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return default(UnityTls.unitytls_x509list_ref);
		}
	}

	[Token(Token = "0x17000016")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x24A6E70", Offset = "0x24A5470", VA = "0x1824A6E70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x24A6DE0", Offset = "0x24A53E0", VA = "0x1824A6DE0")]
	internal X509ChainImplUnityTls(UnityTls.unitytls_x509list_ref nativeCertificateChain, bool reverseOrder = false)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x24A6D20", Offset = "0x24A5320", VA = "0x1824A6D20")]
	internal unsafe X509ChainImplUnityTls(UnityTls.unitytls_x509list* ownedList, UnityTls.unitytls_errorstate* errorState, bool reverseOrder = false)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x24A6B10", Offset = "0x24A5110", VA = "0x1824A6B10", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags error)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x24A6C90", Offset = "0x24A5290", VA = "0x1824A6C90", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x24A6C50", Offset = "0x24A5250", VA = "0x1824A6C50", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}
}
