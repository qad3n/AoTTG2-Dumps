// ==================== AoTTG2 cross-reference ====================
// Type: Mono.X509PalImplMono
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Mono;

[Token(Token = "0x2000005")]
internal class X509PalImplMono : X509PalImpl
{
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4519F90", Offset = "0x4519F90", VA = "0x4519F90", Slot = "4")]
	public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4519FA0", Offset = "0x4519FA0", VA = "0x4519FA0", Slot = "5")]
	public override X509Certificate2Impl Import(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x451A000", Offset = "0x451A000", VA = "0x451A000", Slot = "6")]
	public override X509Certificate2Impl Import(X509Certificate cert)
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x45191A0", Offset = "0x45191A0", VA = "0x45191A0")]
	public X509PalImplMono()
	{
	}
}
