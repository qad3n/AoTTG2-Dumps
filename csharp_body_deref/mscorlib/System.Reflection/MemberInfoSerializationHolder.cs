// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MemberInfoSerializationHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3BD9F80", Offset = "0x3BD9F80", VA = "0x3BD9F80")]
	public static void GetSerializationInfo(SerializationInfo info, string name, System.RuntimeType reflectedClass, string signature, MemberTypes type)
	{
	}

	[Token(Token = "0x60025B0")]
	[Address(RVA = "0x3BD9FA0", Offset = "0x3BD9FA0", VA = "0x3BD9FA0")]
	public static void GetSerializationInfo(SerializationInfo info, string name, System.RuntimeType reflectedClass, string signature, string signature2, MemberTypes type, Type[] genericArguments)
	{
	}

	[Token(Token = "0x60025B1")]
	[Address(RVA = "0x3BDA290", Offset = "0x3BDA290", VA = "0x3BDA290")]
	internal MemberInfoSerializationHolder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60025B2")]
	[Address(RVA = "0x3BDA5C0", Offset = "0x3BDA5C0", VA = "0x3BDA5C0", Slot = "6")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60025B3")]
	[Address(RVA = "0x3BDA620", Offset = "0x3BDA620", VA = "0x3BDA620", Slot = "7")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
