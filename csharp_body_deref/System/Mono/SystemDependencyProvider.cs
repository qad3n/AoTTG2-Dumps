using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000003")]
internal class SystemDependencyProvider : Mono.ISystemDependencyProvider
{
	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x0")]
	private static SystemDependencyProvider instance;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x8")]
	private static object syncRoot;

	[Token(Token = "0x17000002")]
	public static SystemDependencyProvider Instance
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4533940", Offset = "0x4533940", VA = "0x4533940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	private Mono.ISystemCertificateProvider Mono_002EISystemDependencyProvider_002ECertificateProvider
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4533B90", Offset = "0x4533B90", VA = "0x4533B90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public SystemCertificateProvider CertificateProvider
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4533BA0", Offset = "0x4533BA0", VA = "0x4533BA0")]
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
		[Address(RVA = "0x4533BB0", Offset = "0x4533BB0", VA = "0x4533BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4533990", Offset = "0x4533990", VA = "0x4533990")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4533B00", Offset = "0x4533B00", VA = "0x4533B00")]
	private SystemDependencyProvider()
	{
	}
}
