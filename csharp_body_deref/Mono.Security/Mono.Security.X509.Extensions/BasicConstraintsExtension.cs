// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.Extensions.BasicConstraintsExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.X509.Extensions;

[Token(Token = "0x200001C")]
public class BasicConstraintsExtension : X509Extension
{
	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x28")]
	private bool cA;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x2C")]
	private int pathLenConstraint;

	[Token(Token = "0x1700004B")]
	public bool CertificateAuthority
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x3AB7670", Offset = "0x3AB7670", VA = "0x3AB7670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3AB49A0", Offset = "0x3AB49A0", VA = "0x3AB49A0")]
	public BasicConstraintsExtension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3AB7130", Offset = "0x3AB7130", VA = "0x3AB7130", Slot = "4")]
	protected override void Decode()
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3AB7390", Offset = "0x3AB7390", VA = "0x3AB7390", Slot = "5")]
	protected override void Encode()
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3AB7680", Offset = "0x3AB7680", VA = "0x3AB7680", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
