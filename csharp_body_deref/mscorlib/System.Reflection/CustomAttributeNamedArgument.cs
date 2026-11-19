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

[Token(Token = "0x200050B")]
public struct CustomAttributeNamedArgument
{
	[Token(Token = "0x40013F4")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type _attributeType;

	[Token(Token = "0x40013F5")]
	[FieldOffset(Offset = "0x28")]
	private MemberInfo _lazyMemberInfo;

	[Token(Token = "0x17000536")]
	public readonly CustomAttributeTypedArgument TypedValue
	{
		[Token(Token = "0x60025DD")]
		[Address(RVA = "0x53DF890", Offset = "0x53DE890", VA = "0x53DF890")]
		[CompilerGenerated]
		get
		{
			return default(CustomAttributeTypedArgument);
		}
	}

	[Token(Token = "0x17000537")]
	public readonly bool IsField
	{
		[Token(Token = "0x60025DE")]
		[Address(RVA = "0x53DF8A0", Offset = "0x53DE8A0", VA = "0x53DF8A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000538")]
	public readonly string MemberName
	{
		[Token(Token = "0x60025DF")]
		[Address(RVA = "0x53DF8B0", Offset = "0x53DE8B0", VA = "0x53DF8B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000539")]
	public MemberInfo MemberInfo
	{
		[Token(Token = "0x60025E0")]
		[Address(RVA = "0x53DF8C0", Offset = "0x53DE8C0", VA = "0x53DF8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60025DA")]
	[Address(RVA = "0x53DF3D0", Offset = "0x53DE3D0", VA = "0x53DF3D0")]
	internal CustomAttributeNamedArgument(Type attributeType, string memberName, bool isField, CustomAttributeTypedArgument typedValue)
	{
	}

	[Token(Token = "0x60025DB")]
	[Address(RVA = "0x53DF440", Offset = "0x53DE440", VA = "0x53DF440")]
	public CustomAttributeNamedArgument(MemberInfo memberInfo, object value)
	{
	}

	[Token(Token = "0x60025DC")]
	[Address(RVA = "0x53DF700", Offset = "0x53DE700", VA = "0x53DF700")]
	public CustomAttributeNamedArgument(MemberInfo memberInfo, CustomAttributeTypedArgument typedArgument)
	{
	}

	[Token(Token = "0x60025E1")]
	[Address(RVA = "0x53DFA30", Offset = "0x53DEA30", VA = "0x53DFA30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60025E2")]
	[Address(RVA = "0x53DFAA0", Offset = "0x53DEAA0", VA = "0x53DFAA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60025E3")]
	[Address(RVA = "0x53DFB00", Offset = "0x53DEB00", VA = "0x53DFB00")]
	public static bool operator ==(CustomAttributeNamedArgument left, CustomAttributeNamedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x60025E4")]
	[Address(RVA = "0x53DFBC0", Offset = "0x53DEBC0", VA = "0x53DFBC0")]
	public static bool operator !=(CustomAttributeNamedArgument left, CustomAttributeNamedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x60025E5")]
	[Address(RVA = "0x53DFC80", Offset = "0x53DEC80", VA = "0x53DFC80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
