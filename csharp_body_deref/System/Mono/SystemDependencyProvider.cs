// ==================== AoTTG2 cross-reference ====================
// Type: Mono.SystemDependencyProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000003")]
internal class SystemDependencyProvider
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	private static SystemDependencyProvider instance;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	private static object syncRoot;

	[Token(Token = "0x17000002")]
	public static SystemDependencyProvider Instance
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x249FBB0", Offset = "0x249E1B0", VA = "0x18249FBB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	private Mono.ISystemCertificateProvider Mono_002EISystemDependencyProvider_002ECertificateProvider
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public SystemCertificateProvider CertificateProvider
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public X509PalImpl X509Pal
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x249FC10", Offset = "0x249E210", VA = "0x18249FC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x249F8B0", Offset = "0x249DEB0", VA = "0x18249F8B0")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x249FB10", Offset = "0x249E110", VA = "0x18249FB10")]
	private SystemDependencyProvider()
	{
	}
}
