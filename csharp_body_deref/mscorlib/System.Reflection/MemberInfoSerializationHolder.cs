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
[Token(Token = "0x2000511")]
internal class MemberInfoSerializationHolder : ISerializable, IObjectReference
{
	[Token(Token = "0x4001458")]
	[FieldOffset(Offset = "0x10")]
	private string m_memberName;

	[Token(Token = "0x4001459")]
	[FieldOffset(Offset = "0x18")]
	private System.RuntimeType m_reflectedType;

	[Token(Token = "0x400145A")]
	[FieldOffset(Offset = "0x20")]
	private string m_signature;

	[Token(Token = "0x400145B")]
	[FieldOffset(Offset = "0x28")]
	private string m_signature2;

	[Token(Token = "0x400145C")]
	[FieldOffset(Offset = "0x30")]
	private MemberTypes m_memberType;

	[Token(Token = "0x400145D")]
	[FieldOffset(Offset = "0x38")]
	private SerializationInfo m_info;

	[Token(Token = "0x6002600")]
	[Address(RVA = "0x53E0C00", Offset = "0x53DFC00", VA = "0x53E0C00")]
	public static void GetSerializationInfo(SerializationInfo info, string name, System.RuntimeType reflectedClass, string signature, MemberTypes type)
	{
	}

	[Token(Token = "0x6002601")]
	[Address(RVA = "0x53E0C20", Offset = "0x53DFC20", VA = "0x53E0C20")]
	public static void GetSerializationInfo(SerializationInfo info, string name, System.RuntimeType reflectedClass, string signature, string signature2, MemberTypes type, Type[] genericArguments)
	{
	}

	[Token(Token = "0x6002602")]
	[Address(RVA = "0x53E0F10", Offset = "0x53DFF10", VA = "0x53E0F10")]
	internal MemberInfoSerializationHolder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002603")]
	[Address(RVA = "0x53E1240", Offset = "0x53E0240", VA = "0x53E1240", Slot = "6")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002604")]
	[Address(RVA = "0x53E12A0", Offset = "0x53E02A0", VA = "0x53E12A0", Slot = "7")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
