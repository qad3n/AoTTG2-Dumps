using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Mono;

[Token(Token = "0x2000005")]
internal class X509PalImplMono : X509PalImpl
{
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4533DA0", Offset = "0x4533DA0", VA = "0x4533DA0", Slot = "4")]
	public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4533DB0", Offset = "0x4533DB0", VA = "0x4533DB0", Slot = "5")]
	public override X509Certificate2Impl Import(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4533E10", Offset = "0x4533E10", VA = "0x4533E10", Slot = "6")]
	public override X509Certificate2Impl Import(X509Certificate cert)
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4532FB0", Offset = "0x4532FB0", VA = "0x4532FB0")]
	public X509PalImplMono()
	{
	}
}
