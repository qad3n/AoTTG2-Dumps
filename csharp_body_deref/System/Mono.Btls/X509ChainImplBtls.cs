// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.X509ChainImplBtls
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x20000A8")]
internal class X509ChainImplBtls : X509ChainImpl
{
	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x10")]
	private MonoBtlsX509StoreCtx storeCtx;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x18")]
	private MonoBtlsX509Chain chain;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x20")]
	private MonoBtlsX509Chain untrustedChain;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainElementCollection elements;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x30")]
	private X509Certificate2Collection untrusted;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x38")]
	private X509Certificate2[] certificates;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x40")]
	private X509ChainPolicy policy;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x48")]
	private List<X509ChainStatus> chainStatusList;

	[Token(Token = "0x1700007D")]
	public override bool IsValid
	{
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x2848200", Offset = "0x2846800", VA = "0x182848200", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007E")]
	internal MonoBtlsX509StoreCtx StoreCtx
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x2848220", Offset = "0x2846820", VA = "0x182848220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007F")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x2847F40", Offset = "0x2846540", VA = "0x182847F40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x2847DA0", Offset = "0x28463A0", VA = "0x182847DA0")]
	internal X509ChainImplBtls(MonoBtlsX509Chain chain)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x2847800", Offset = "0x2845E00", VA = "0x182847800")]
	internal X509ChainImplBtls(MonoBtlsX509StoreCtx storeCtx)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x28474E0", Offset = "0x2845AE0", VA = "0x1828474E0", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags errorCode)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2847760", Offset = "0x2845D60", VA = "0x182847760", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x2847620", Offset = "0x2845C20", VA = "0x182847620", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}
}
