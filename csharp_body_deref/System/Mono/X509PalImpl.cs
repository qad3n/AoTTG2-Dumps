using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Mono;

[Token(Token = "0x2000006")]
internal abstract class X509PalImpl
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] signedData;

	[Token(Token = "0x17000007")]
	public bool SupportsLegacyBasicConstraintsExtension
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4534040", Offset = "0x4534040", VA = "0x4534040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000017")]
	public abstract System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data);

	[Token(Token = "0x6000018")]
	public abstract X509Certificate2Impl Import(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags);

	[Token(Token = "0x6000019")]
	public abstract X509Certificate2Impl Import(X509Certificate cert);

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4533E30", Offset = "0x4533E30", VA = "0x4533E30")]
	private static byte[] PEM(string type, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4533F40", Offset = "0x4533F40", VA = "0x4533F40")]
	protected static byte[] ConvertData(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4533350", Offset = "0x4533350", VA = "0x4533350")]
	internal X509Certificate2Impl ImportFallback(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x45336B0", Offset = "0x45336B0", VA = "0x45336B0")]
	internal X509Certificate2Impl ImportFallback(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4534050", Offset = "0x4534050", VA = "0x4534050")]
	public X509ContentType GetCertContentType(byte[] rawData)
	{
		return default(X509ContentType);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4533E20", Offset = "0x4533E20", VA = "0x4533E20")]
	protected X509PalImpl()
	{
	}
}
