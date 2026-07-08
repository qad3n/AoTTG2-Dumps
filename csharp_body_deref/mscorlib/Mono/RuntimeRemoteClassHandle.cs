using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000014")]
internal struct RuntimeRemoteClassHandle
{
	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.RemoteClass* value;

	[Token(Token = "0x17000006")]
	internal Mono.RuntimeClassHandle ProxyClass
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4DE7EF0", Offset = "0x4DE7EF0", VA = "0x4DE7EF0")]
		get
		{
			return default(Mono.RuntimeClassHandle);
		}
	}
}
