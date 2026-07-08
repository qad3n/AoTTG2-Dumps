using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000502")]
public struct CustomAttributeNamedArgument
{
	[Token(Token = "0x4001495")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type _attributeType;

	[Token(Token = "0x4001496")]
	[FieldOffset(Offset = "0x28")]
	private MemberInfo _lazyMemberInfo;

	[Token(Token = "0x17000534")]
	public readonly CustomAttributeTypedArgument TypedValue
	{
		[Token(Token = "0x600258D")]
		[Address(RVA = "0x4EF2BD0", Offset = "0x4EF2BD0", VA = "0x4EF2BD0")]
		[CompilerGenerated]
		get
		{
			return default(CustomAttributeTypedArgument);
		}
	}

	[Token(Token = "0x17000535")]
	public readonly bool IsField
	{
		[Token(Token = "0x600258E")]
		[Address(RVA = "0x4EF2BE0", Offset = "0x4EF2BE0", VA = "0x4EF2BE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000536")]
	public readonly string MemberName
	{
		[Token(Token = "0x600258F")]
		[Address(RVA = "0x4EF2BF0", Offset = "0x4EF2BF0", VA = "0x4EF2BF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000537")]
	public MemberInfo MemberInfo
	{
		[Token(Token = "0x6002590")]
		[Address(RVA = "0x4EF2C00", Offset = "0x4EF2C00", VA = "0x4EF2C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600258A")]
	[Address(RVA = "0x4EF2750", Offset = "0x4EF2750", VA = "0x4EF2750")]
	internal CustomAttributeNamedArgument(Type attributeType, string memberName, bool isField, CustomAttributeTypedArgument typedValue)
	{
	}

	[Token(Token = "0x600258B")]
	[Address(RVA = "0x4EF27C0", Offset = "0x4EF27C0", VA = "0x4EF27C0")]
	public CustomAttributeNamedArgument(MemberInfo memberInfo, object value)
	{
	}

	[Token(Token = "0x600258C")]
	[Address(RVA = "0x4EF2A40", Offset = "0x4EF2A40", VA = "0x4EF2A40")]
	public CustomAttributeNamedArgument(MemberInfo memberInfo, CustomAttributeTypedArgument typedArgument)
	{
	}

	[Token(Token = "0x6002591")]
	[Address(RVA = "0x4EF2D60", Offset = "0x4EF2D60", VA = "0x4EF2D60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002592")]
	[Address(RVA = "0x4EF2DD0", Offset = "0x4EF2DD0", VA = "0x4EF2DD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002593")]
	[Address(RVA = "0x4EF2E30", Offset = "0x4EF2E30", VA = "0x4EF2E30")]
	public static bool operator ==(CustomAttributeNamedArgument left, CustomAttributeNamedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002594")]
	[Address(RVA = "0x4EF2EF0", Offset = "0x4EF2EF0", VA = "0x4EF2EF0")]
	public static bool operator !=(CustomAttributeNamedArgument left, CustomAttributeNamedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002595")]
	[Address(RVA = "0x4EF2FB0", Offset = "0x4EF2FB0", VA = "0x4EF2FB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
