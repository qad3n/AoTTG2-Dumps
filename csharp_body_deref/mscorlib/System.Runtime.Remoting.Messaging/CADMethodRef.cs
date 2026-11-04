// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CADMethodRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003CE")]
internal class CADMethodRef
{
	[Token(Token = "0x4000F62")]
	[FieldOffset(Offset = "0x10")]
	private bool ctor;

	[Token(Token = "0x4000F63")]
	[FieldOffset(Offset = "0x18")]
	private string typeName;

	[Token(Token = "0x4000F64")]
	[FieldOffset(Offset = "0x20")]
	private string methodName;

	[Token(Token = "0x4000F65")]
	[FieldOffset(Offset = "0x28")]
	private string[] param_names;

	[Token(Token = "0x4000F66")]
	[FieldOffset(Offset = "0x30")]
	private string[] generic_arg_names;

	[Token(Token = "0x6001E8D")]
	[Address(RVA = "0x19F0060", Offset = "0x19EE660", VA = "0x1819F0060")]
	private Type[] GetTypes(string[] typeArray)
	{
		return null;
	}

	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x19F01A0", Offset = "0x19EE7A0", VA = "0x1819F01A0")]
	public MethodBase Resolve()
	{
		return null;
	}

	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x19F0680", Offset = "0x19EEC80", VA = "0x1819F0680")]
	public CADMethodRef(IMethodMessage msg)
	{
	}
}
