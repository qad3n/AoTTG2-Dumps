using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20001DE")]
internal sealed class DefaultProxySectionInternal
{
	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0x10")]
	private IWebProxy webProxy;

	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0x0")]
	private static object classSyncObject;

	[Token(Token = "0x170002BB")]
	internal static object ClassSyncObject
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x467F840", Offset = "0x467F840", VA = "0x467F840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BC")]
	internal IWebProxy WebProxy
	{
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x467FA90", Offset = "0x467FA90", VA = "0x467FA90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x467F820", Offset = "0x467F820", VA = "0x467F820")]
	private static IWebProxy GetDefaultProxy_UsingOldMonoCode()
	{
		return null;
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x467F830", Offset = "0x467F830", VA = "0x467F830")]
	private static IWebProxy GetSystemWebProxy()
	{
		return null;
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x467F8E0", Offset = "0x467F8E0", VA = "0x467F8E0")]
	internal static DefaultProxySectionInternal GetSection()
	{
		return null;
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x467FA80", Offset = "0x467FA80", VA = "0x467FA80")]
	public DefaultProxySectionInternal()
	{
	}
}
