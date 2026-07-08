using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x2000508")]
internal class MemberInfoSerializationHolder : ISerializable, IObjectReference
{
	[Token(Token = "0x40014F9")]
	[FieldOffset(Offset = "0x10")]
	private string m_memberName;

	[Token(Token = "0x40014FA")]
	[FieldOffset(Offset = "0x18")]
	private System.RuntimeType m_reflectedType;

	[Token(Token = "0x40014FB")]
	[FieldOffset(Offset = "0x20")]
	private string m_signature;

	[Token(Token = "0x40014FC")]
	[FieldOffset(Offset = "0x28")]
	private string m_signature2;

	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0x30")]
	private MemberTypes m_memberType;

	[Token(Token = "0x40014FE")]
	[FieldOffset(Offset = "0x38")]
	private SerializationInfo m_info;

	[Token(Token = "0x60025AF")]
	[Address(RVA = "0x4EF4460", Offset = "0x4EF4460", VA = "0x4EF4460")]
	public static void GetSerializationInfo(SerializationInfo info, string name, System.RuntimeType reflectedClass, string signature, MemberTypes type)
	{
	}

	[Token(Token = "0x60025B0")]
	[Address(RVA = "0x4EF4480", Offset = "0x4EF4480", VA = "0x4EF4480")]
	public static void GetSerializationInfo(SerializationInfo info, string name, System.RuntimeType reflectedClass, string signature, string signature2, MemberTypes type, Type[] genericArguments)
	{
	}

	[Token(Token = "0x60025B1")]
	[Address(RVA = "0x4EF4770", Offset = "0x4EF4770", VA = "0x4EF4770")]
	internal MemberInfoSerializationHolder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60025B2")]
	[Address(RVA = "0x4EF4AA0", Offset = "0x4EF4AA0", VA = "0x4EF4AA0", Slot = "6")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60025B3")]
	[Address(RVA = "0x4EF4B00", Offset = "0x4EF4B00", VA = "0x4EF4B00", Slot = "7")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
