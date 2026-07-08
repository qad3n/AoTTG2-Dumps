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
		[Address(RVA = "0x3A4A9B0", Offset = "0x3A4A9B0", VA = "0x3A4A9B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3A47CE0", Offset = "0x3A47CE0", VA = "0x3A47CE0")]
	public BasicConstraintsExtension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3A4A470", Offset = "0x3A4A470", VA = "0x3A4A470", Slot = "4")]
	protected override void Decode()
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3A4A6D0", Offset = "0x3A4A6D0", VA = "0x3A4A6D0", Slot = "5")]
	protected override void Encode()
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3A4A9C0", Offset = "0x3A4A9C0", VA = "0x3A4A9C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
