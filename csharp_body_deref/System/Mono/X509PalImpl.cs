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
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] signedData;

	[Token(Token = "0x17000007")]
	public bool SupportsLegacyBasicConstraintsExtension
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
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
	[Address(RVA = "0x24A78E0", Offset = "0x24A5EE0", VA = "0x1824A78E0")]
	private static byte[] PEM(string type, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x24A72C0", Offset = "0x24A58C0", VA = "0x1824A72C0")]
	protected static byte[] ConvertData(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x24A77A0", Offset = "0x24A5DA0", VA = "0x1824A77A0")]
	internal X509Certificate2Impl ImportFallback(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x24A71F0", Offset = "0x24A57F0", VA = "0x1824A71F0")]
	internal X509Certificate2Impl ImportFallback(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x24A7480", Offset = "0x24A5A80", VA = "0x1824A7480")]
	public X509ContentType GetCertContentType(byte[] rawData)
	{
		return default(X509ContentType);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected X509PalImpl()
	{
	}
}
