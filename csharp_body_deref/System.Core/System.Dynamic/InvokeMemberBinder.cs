using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000279")]
public abstract class InvokeMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000285")]
	public string Name
	{
		[Token(Token = "0x6000C71")]
		[Address(RVA = "0x41EBBD0", Offset = "0x41EBBD0", VA = "0x41EBBD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C72")]
		[Address(RVA = "0x41EBBE0", Offset = "0x41EBBE0", VA = "0x41EBBE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x41EBBF0", Offset = "0x41EBBF0", VA = "0x41EBBF0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x41EA2B0", Offset = "0x41EA2B0", VA = "0x41EA2B0")]
	public DynamicMetaObject FallbackInvokeMember(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C75")]
	public abstract DynamicMetaObject FallbackInvokeMember(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C76")]
	public abstract DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);
}
