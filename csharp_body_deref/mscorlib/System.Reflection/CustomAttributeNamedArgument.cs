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

[Token(Token = "0x2000532")]
public struct CustomAttributeNamedArgument
{
	[Token(Token = "0x4001494")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type _attributeType;

	[Token(Token = "0x4001495")]
	[FieldOffset(Offset = "0x28")]
	private MemberInfo _lazyMemberInfo;

	[Token(Token = "0x17000537")]
	public readonly CustomAttributeTypedArgument TypedValue
	{
		[Token(Token = "0x600260F")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		[CompilerGenerated]
		get
		{
			return default(CustomAttributeTypedArgument);
		}
	}

	[Token(Token = "0x17000538")]
	public readonly bool IsField
	{
		[Token(Token = "0x6002610")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000539")]
	public readonly string MemberName
	{
		[Token(Token = "0x6002611")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053A")]
	public MemberInfo MemberInfo
	{
		[Token(Token = "0x6002612")]
		[Address(RVA = "0x1A43510", Offset = "0x1A41B10", VA = "0x181A43510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600260C")]
	[Address(RVA = "0x1A43040", Offset = "0x1A41640", VA = "0x181A43040")]
	internal CustomAttributeNamedArgument(Type attributeType, string memberName, bool isField, CustomAttributeTypedArgument typedValue)
	{
	}

	[Token(Token = "0x600260D")]
	[Address(RVA = "0x1A430B0", Offset = "0x1A416B0", VA = "0x181A430B0")]
	public CustomAttributeNamedArgument(MemberInfo memberInfo, object value)
	{
	}

	[Token(Token = "0x600260E")]
	[Address(RVA = "0x1A43380", Offset = "0x1A41980", VA = "0x181A43380")]
	public CustomAttributeNamedArgument(MemberInfo memberInfo, CustomAttributeTypedArgument typedArgument)
	{
	}

	[Token(Token = "0x6002613")]
	[Address(RVA = "0x1A42CA0", Offset = "0x1A412A0", VA = "0x181A42CA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002614")]
	[Address(RVA = "0x1A42D10", Offset = "0x1A41310", VA = "0x181A42D10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002615")]
	[Address(RVA = "0x1A43680", Offset = "0x1A41C80", VA = "0x181A43680")]
	public static bool operator ==(CustomAttributeNamedArgument left, CustomAttributeNamedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002616")]
	[Address(RVA = "0x1A43740", Offset = "0x1A41D40", VA = "0x181A43740")]
	public static bool operator !=(CustomAttributeNamedArgument left, CustomAttributeNamedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002617")]
	[Address(RVA = "0x1A42D70", Offset = "0x1A41370", VA = "0x181A42D70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
