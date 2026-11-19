// ==================== AoTTG2 cross-reference ====================
// Type: Mono.X509PalImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5E2EA40", Offset = "0x5E2DA40", VA = "0x5E2EA40")]
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
	[Address(RVA = "0x5E2E830", Offset = "0x5E2D830", VA = "0x5E2E830")]
	private static byte[] PEM(string type, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5E2E940", Offset = "0x5E2D940", VA = "0x5E2E940")]
	protected static byte[] ConvertData(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x5E2DDD0", Offset = "0x5E2CDD0", VA = "0x5E2DDD0")]
	internal X509Certificate2Impl ImportFallback(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5E2E0D0", Offset = "0x5E2D0D0", VA = "0x5E2E0D0")]
	internal X509Certificate2Impl ImportFallback(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x5E2EA50", Offset = "0x5E2DA50", VA = "0x5E2EA50")]
	public X509ContentType GetCertContentType(byte[] rawData)
	{
		return default(X509ContentType);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x5E2E820", Offset = "0x5E2D820", VA = "0x5E2E820")]
	protected X509PalImpl()
	{
	}
}
