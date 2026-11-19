// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CADMessageBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003A8")]
internal class CADMessageBase
{
	[Token(Token = "0x4000EC7")]
	[FieldOffset(Offset = "0x10")]
	protected object[] _args;

	[Token(Token = "0x4000EC8")]
	[FieldOffset(Offset = "0x18")]
	protected byte[] _serializedArgs;

	[Token(Token = "0x4000EC9")]
	[FieldOffset(Offset = "0x20")]
	protected int _propertyCount;

	[Token(Token = "0x4000ECA")]
	[FieldOffset(Offset = "0x28")]
	protected System.Runtime.Remoting.Messaging.CADArgHolder _callContext;

	[Token(Token = "0x4000ECB")]
	[FieldOffset(Offset = "0x30")]
	internal byte[] serializedMethod;

	[Token(Token = "0x6001E66")]
	[Address(RVA = "0x538F530", Offset = "0x538E530", VA = "0x538F530")]
	public CADMessageBase(IMethodMessage msg)
	{
	}

	[Token(Token = "0x6001E67")]
	[Address(RVA = "0x538F5C0", Offset = "0x538E5C0", VA = "0x538F5C0")]
	internal MethodBase GetMethod()
	{
		return null;
	}

	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x538F630", Offset = "0x538E630", VA = "0x538F630")]
	protected static Type[] GetSignature(MethodBase methodBase, bool load)
	{
		return null;
	}

	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x538F8F0", Offset = "0x538E8F0", VA = "0x538F8F0")]
	internal static int MarshalProperties(IDictionary dict, ref ArrayList args)
	{
		return default(int);
	}

	[Token(Token = "0x6001E6A")]
	[Address(RVA = "0x5390240", Offset = "0x538F240", VA = "0x5390240")]
	internal static void UnmarshalProperties(IDictionary dict, int count, ArrayList args)
	{
	}

	[Token(Token = "0x6001E6B")]
	[Address(RVA = "0x53903E0", Offset = "0x538F3E0", VA = "0x53903E0")]
	private static bool IsPossibleToIgnoreMarshal(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E6C")]
	[Address(RVA = "0x5390540", Offset = "0x538F540", VA = "0x5390540")]
	protected object MarshalArgument(object arg, ref ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E6D")]
	[Address(RVA = "0x5390730", Offset = "0x538F730", VA = "0x5390730")]
	protected object UnmarshalArgument(object arg, ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E6E")]
	[Address(RVA = "0x5390D60", Offset = "0x538FD60", VA = "0x5390D60")]
	internal object[] MarshalArguments(object[] arguments, ref ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x5390E70", Offset = "0x538FE70", VA = "0x5390E70")]
	internal object[] UnmarshalArguments(object[] arguments, ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E70")]
	[Address(RVA = "0x5390F80", Offset = "0x538FF80", VA = "0x5390F80")]
	protected void SaveLogicalCallContext(IMethodMessage msg, ref ArrayList serializeList)
	{
	}

	[Token(Token = "0x6001E71")]
	[Address(RVA = "0x5391240", Offset = "0x5390240", VA = "0x5391240")]
	internal LogicalCallContext GetLogicalCallContext(ArrayList args)
	{
		return null;
	}
}
