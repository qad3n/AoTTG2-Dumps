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
		[Address(RVA = "0x44E0E30", Offset = "0x44E0E30", VA = "0x44E0E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700037F")]
	public string MemberName
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x44E0E40", Offset = "0x44E0E40", VA = "0x44E0E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000380")]
	public Type MemberType
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x44E0E50", Offset = "0x44E0E50", VA = "0x44E0E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000381")]
	public XmlAttributes XmlAttributes
	{
		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x44DD400", Offset = "0x44DD400", VA = "0x44DD400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000382")]
	internal Type DeclaringType
	{
		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x44E0E60", Offset = "0x44E0E60", VA = "0x44E0E60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x44E0E70", Offset = "0x44E0E70", VA = "0x44E0E70")]
		set
		{
		}
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x44DE2A0", Offset = "0x44DE2A0", VA = "0x44DE2A0")]
	internal XmlReflectionMember(string name, Type type, XmlAttributes attributes)
	{
	}
}
