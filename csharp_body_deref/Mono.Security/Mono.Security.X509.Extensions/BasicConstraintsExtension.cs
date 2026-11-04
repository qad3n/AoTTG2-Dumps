// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.Extensions.BasicConstraintsExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.X509.Extensions;

[Token(Token = "0x200002E")]
public class BasicConstraintsExtension : X509Extension
{
	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x28")]
	private bool cA;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x2C")]
	private int pathLenConstraint;

	[Token(Token = "0x1700004E")]
	public bool CertificateAuthority
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x19132D0", Offset = "0x19118D0", VA = "0x1819132D0")]
	public BasicConstraintsExtension(X509Extension extension)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x1913360", Offset = "0x1911960", VA = "0x181913360", Slot = "4")]
	protected override void Decode()
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x19134A0", Offset = "0x1911AA0", VA = "0x1819134A0", Slot = "5")]
	protected override void Encode()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x1913680", Offset = "0x1911C80", VA = "0x181913680", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
