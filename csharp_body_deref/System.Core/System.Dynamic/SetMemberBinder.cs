using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200027B")]
public abstract class SetMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000287")]
	public sealed override Type ReturnType
	{
		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x41EBF20", Offset = "0x41EBF20", VA = "0x41EBF20", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public string Name
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x41EBF60", Offset = "0x41EBF60", VA = "0x41EBF60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C7D")]
		[Address(RVA = "0x41EBF70", Offset = "0x41EBF70", VA = "0x41EBF70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028A")]
	internal sealed override bool IsStandardBinder
	{
		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x41EC070", Offset = "0x41EC070", VA = "0x41EC070", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x41EBE80", Offset = "0x41EBE80", VA = "0x41EBE80")]
	protected SetMemberBinder(string name, bool ignoreCase)
	{
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x41EBF80", Offset = "0x41EBF80", VA = "0x41EBF80", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x41EC080", Offset = "0x41EC080", VA = "0x41EC080")]
	public DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	public abstract DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value, DynamicMetaObject errorSuggestion);
}
