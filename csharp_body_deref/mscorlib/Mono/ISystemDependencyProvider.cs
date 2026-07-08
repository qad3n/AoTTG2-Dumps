using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000011")]
internal interface ISystemDependencyProvider
{
	[Token(Token = "0x17000004")]
	Mono.ISystemCertificateProvider CertificateProvider
	{
		[Token(Token = "0x600003C")]
		get;
	}
}
