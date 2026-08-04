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
		[Address(RVA = "0x481E590", Offset = "0x481E590", VA = "0x481E590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700037F")]
	public string MemberName
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x481E5A0", Offset = "0x481E5A0", VA = "0x481E5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000380")]
	public Type MemberType
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x481E5B0", Offset = "0x481E5B0", VA = "0x481E5B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000381")]
	public XmlAttributes XmlAttributes
	{
		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x481AB60", Offset = "0x481AB60", VA = "0x481AB60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000382")]
	internal Type DeclaringType
	{
		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x481E5C0", Offset = "0x481E5C0", VA = "0x481E5C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x481E5D0", Offset = "0x481E5D0", VA = "0x481E5D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x481BA00", Offset = "0x481BA00", VA = "0x481BA00")]
	internal XmlReflectionMember(string name, Type type, XmlAttributes attributes)
	{
	}
}
