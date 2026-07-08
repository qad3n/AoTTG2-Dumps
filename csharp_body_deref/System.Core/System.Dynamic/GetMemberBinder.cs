using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000276")]
public abstract class GetMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000281")]
	public sealed override Type ReturnType
	{
		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x41EB960", Offset = "0x41EB960", VA = "0x41EB960", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public string Name
	{
		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x41EB9A0", Offset = "0x41EB9A0", VA = "0x41EB9A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000283")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x41EB9B0", Offset = "0x41EB9B0", VA = "0x41EB9B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000284")]
	internal sealed override bool IsStandardBinder
	{
		[Token(Token = "0x6000C6C")]
		[Address(RVA = "0x41EBAD0", Offset = "0x41EBAD0", VA = "0x41EBAD0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x41EB8C0", Offset = "0x41EB8C0", VA = "0x41EB8C0")]
	protected GetMemberBinder(string name, bool ignoreCase)
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x41EA100", Offset = "0x41EA100", VA = "0x41EA100")]
	public DynamicMetaObject FallbackGetMember(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000C6A")]
	public abstract DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x41EB9C0", Offset = "0x41EB9C0", VA = "0x41EB9C0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
