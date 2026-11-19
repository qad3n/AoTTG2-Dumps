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
[Token(Token = "0x20003A7")]
internal class CADMethodRef
{
	[Token(Token = "0x4000EC2")]
	[FieldOffset(Offset = "0x10")]
	private bool ctor;

	[Token(Token = "0x4000EC3")]
	[FieldOffset(Offset = "0x18")]
	private string typeName;

	[Token(Token = "0x4000EC4")]
	[FieldOffset(Offset = "0x20")]
	private string methodName;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x28")]
	private string[] param_names;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x30")]
	private string[] generic_arg_names;

	[Token(Token = "0x6001E63")]
	[Address(RVA = "0x538EBE0", Offset = "0x538DBE0", VA = "0x538EBE0")]
	private Type[] GetTypes(string[] typeArray)
	{
		return null;
	}

	[Token(Token = "0x6001E64")]
	[Address(RVA = "0x538ED80", Offset = "0x538DD80", VA = "0x538ED80")]
	public MethodBase Resolve()
	{
		return null;
	}

	[Token(Token = "0x6001E65")]
	[Address(RVA = "0x538F220", Offset = "0x538E220", VA = "0x538F220")]
	public CADMethodRef(IMethodMessage msg)
	{
	}
}
