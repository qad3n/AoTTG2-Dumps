// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.X509PalImplBtls
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;
using Mono.Security.Interface;

namespace Mono.Btls;

[Token(Token = "0x20000A9")]
internal class X509PalImplBtls : X509PalImpl
{
	[Token(Token = "0x17000081")]
	private MonoBtlsProvider Provider
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x28482C0", Offset = "0x28468C0", VA = "0x1828482C0")]
	public X509PalImplBtls(MonoTlsProvider provider)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x2848290", Offset = "0x2846890", VA = "0x182848290", Slot = "4")]
	public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x2848240", Offset = "0x2846840", VA = "0x182848240", Slot = "5")]
	public override X509Certificate2Impl Import(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x2848270", Offset = "0x2846870", VA = "0x182848270", Slot = "6")]
	public override X509Certificate2Impl Import(X509Certificate cert)
	{
		return null;
	}
}
