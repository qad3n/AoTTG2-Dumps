// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.CustomAttributeNamedArgument
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3BD86F0", Offset = "0x3BD86F0", VA = "0x3BD86F0")]
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
		[Address(RVA = "0x3BD8700", Offset = "0x3BD8700", VA = "0x3BD8700")]
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
		[Address(RVA = "0x3BD8710", Offset = "0x3BD8710", VA = "0x3BD8710")]
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
		[Address(RVA = "0x3BD8720", Offset = "0x3BD8720", VA = "0x3BD8720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600258A")]
	[Address(RVA = "0x3BD8270", Offset = "0x3BD8270", VA = "0x3BD8270")]
	internal CustomAttributeNamedArgument(Type attributeType, string memberName, bool isField, CustomAttributeTypedArgument typedValue)
	{
	}

	[Token(Token = "0x600258B")]
	[Address(RVA = "0x3BD82E0", Offset = "0x3BD82E0", VA = "0x3BD82E0")]
	public CustomAttributeNamedArgument(MemberInfo memberInfo, object value)
	{
	}

	[Token(Token = "0x600258C")]
	[Address(RVA = "0x3BD8560", Offset = "0x3BD8560", VA = "0x3BD8560")]
	public CustomAttributeNamedArgument(MemberInfo memberInfo, CustomAttributeTypedArgument typedArgument)
	{
	}

	[Token(Token = "0x6002591")]
	[Address(RVA = "0x3BD8880", Offset = "0x3BD8880", VA = "0x3BD8880", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002592")]
	[Address(RVA = "0x3BD88F0", Offset = "0x3BD88F0", VA = "0x3BD88F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002593")]
	[Address(RVA = "0x3BD8950", Offset = "0x3BD8950", VA = "0x3BD8950")]
	public static bool operator ==(CustomAttributeNamedArgument left, CustomAttributeNamedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002594")]
	[Address(RVA = "0x3BD8A10", Offset = "0x3BD8A10", VA = "0x3BD8A10")]
	public static bool operator !=(CustomAttributeNamedArgument left, CustomAttributeNamedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002595")]
	[Address(RVA = "0x3BD8AD0", Offset = "0x3BD8AD0", VA = "0x3BD8AD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
