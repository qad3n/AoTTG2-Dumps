using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x200039F")]
internal class CADMethodRef
{
	[Token(Token = "0x4000F58")]
	[FieldOffset(Offset = "0x10")]
	private bool ctor;

	[Token(Token = "0x4000F59")]
	[FieldOffset(Offset = "0x18")]
	private string typeName;

	[Token(Token = "0x4000F5A")]
	[FieldOffset(Offset = "0x20")]
	private string methodName;

	[Token(Token = "0x4000F5B")]
	[FieldOffset(Offset = "0x28")]
	private string[] param_names;

	[Token(Token = "0x4000F5C")]
	[FieldOffset(Offset = "0x30")]
	private string[] generic_arg_names;

	[Token(Token = "0x6001E1E")]
	[Address(RVA = "0x4EA11A0", Offset = "0x4EA11A0", VA = "0x4EA11A0")]
	private Type[] GetTypes(string[] typeArray)
	{
		return null;
	}

	[Token(Token = "0x6001E1F")]
	[Address(RVA = "0x4EA1340", Offset = "0x4EA1340", VA = "0x4EA1340")]
	public MethodBase Resolve()
	{
		return null;
	}

	[Token(Token = "0x6001E20")]
	[Address(RVA = "0x4EA1850", Offset = "0x4EA1850", VA = "0x4EA1850")]
	public CADMethodRef(IMethodMessage msg)
	{
	}
}
