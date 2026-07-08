using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000265")]
public abstract class DeleteMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000260")]
	public string Name
	{
		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0x41E48B0", Offset = "0x41E48B0", VA = "0x41E48B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000261")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x41E48C0", Offset = "0x41E48C0", VA = "0x41E48C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x41E48D0", Offset = "0x41E48D0", VA = "0x41E48D0")]
	public DynamicMetaObject FallbackDeleteMember(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000BD1")]
	public abstract DynamicMetaObject FallbackDeleteMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x41E48F0", Offset = "0x41E48F0", VA = "0x41E48F0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
