// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509LookupMonoCollection
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x2000099")]
internal class MonoBtlsX509LookupMonoCollection : MonoBtlsX509LookupMono
{
	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x48")]
	private long[] hashes;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x50")]
	private MonoBtlsX509[] certificates;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x58")]
	private X509CertificateCollection collection;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x60")]
	private MonoBtlsX509TrustKind trust;

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x2837C60", Offset = "0x2836260", VA = "0x182837C60")]
	internal MonoBtlsX509LookupMonoCollection(X509CertificateCollection collection, MonoBtlsX509TrustKind trust)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x28378B0", Offset = "0x2835EB0", VA = "0x1828378B0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x2837BC0", Offset = "0x28361C0", VA = "0x182837BC0", Slot = "6")]
	protected override MonoBtlsX509 OnGetBySubject(MonoBtlsX509Name name)
	{
		return null;
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x2837750", Offset = "0x2835D50", VA = "0x182837750", Slot = "5")]
	protected override void Close()
	{
	}
}
