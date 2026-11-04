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
[Token(Token = "0x2000538")]
internal class MemberInfoSerializationHolder : ISerializable, IObjectReference
{
	[Token(Token = "0x40014F8")]
	[FieldOffset(Offset = "0x10")]
	private string m_memberName;

	[Token(Token = "0x40014F9")]
	[FieldOffset(Offset = "0x18")]
	private System.RuntimeType m_reflectedType;

	[Token(Token = "0x40014FA")]
	[FieldOffset(Offset = "0x20")]
	private string m_signature;

	[Token(Token = "0x40014FB")]
	[FieldOffset(Offset = "0x28")]
	private string m_signature2;

	[Token(Token = "0x40014FC")]
	[FieldOffset(Offset = "0x30")]
	private MemberTypes m_memberType;

	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0x38")]
	private SerializationInfo m_info;

	[Token(Token = "0x6002632")]
	[Address(RVA = "0x1A49AC0", Offset = "0x1A480C0", VA = "0x181A49AC0")]
	public static void GetSerializationInfo(SerializationInfo info, string name, System.RuntimeType reflectedClass, string signature, MemberTypes type)
	{
	}

	[Token(Token = "0x6002633")]
	[Address(RVA = "0x1A497E0", Offset = "0x1A47DE0", VA = "0x181A497E0")]
	public static void GetSerializationInfo(SerializationInfo info, string name, System.RuntimeType reflectedClass, string signature, string signature2, MemberTypes type, Type[] genericArguments)
	{
	}

	[Token(Token = "0x6002634")]
	[Address(RVA = "0x1A49AF0", Offset = "0x1A480F0", VA = "0x181A49AF0")]
	internal MemberInfoSerializationHolder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002635")]
	[Address(RVA = "0x1A48AC0", Offset = "0x1A470C0", VA = "0x181A48AC0", Slot = "6")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002636")]
	[Address(RVA = "0x1A48B20", Offset = "0x1A47120", VA = "0x181A48B20", Slot = "7")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
