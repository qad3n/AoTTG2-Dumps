// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlReflectionMember
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200012D")]
public class XmlReflectionMember
{
	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x10")]
	private bool isReturnValue;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x18")]
	private string memberName;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x20")]
	private Type memberType;

	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x28")]
	private XmlAttributes xmlAttributes;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x30")]
	private Type declaringType;

	[Token(Token = "0x1700037E")]
	public bool IsReturnValue
	{
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700037F")]
	public string MemberName
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000380")]
	public Type MemberType
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000381")]
	public XmlAttributes XmlAttributes
	{
		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x2766190", Offset = "0x2764790", VA = "0x182766190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000382")]
	internal Type DeclaringType
	{
		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x2766130", Offset = "0x2764730", VA = "0x182766130")]
	internal XmlReflectionMember(string name, Type type, XmlAttributes attributes)
	{
	}
}
