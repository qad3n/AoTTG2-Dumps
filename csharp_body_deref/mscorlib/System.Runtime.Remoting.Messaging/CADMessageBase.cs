using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003A0")]
internal class CADMessageBase
{
	[Token(Token = "0x4000F5D")]
	[FieldOffset(Offset = "0x10")]
	protected object[] _args;

	[Token(Token = "0x4000F5E")]
	[FieldOffset(Offset = "0x18")]
	protected byte[] _serializedArgs;

	[Token(Token = "0x4000F5F")]
	[FieldOffset(Offset = "0x20")]
	protected int _propertyCount;

	[Token(Token = "0x4000F60")]
	[FieldOffset(Offset = "0x28")]
	protected System.Runtime.Remoting.Messaging.CADArgHolder _callContext;

	[Token(Token = "0x4000F61")]
	[FieldOffset(Offset = "0x30")]
	internal byte[] serializedMethod;

	[Token(Token = "0x6001E21")]
	[Address(RVA = "0x4EA1B60", Offset = "0x4EA1B60", VA = "0x4EA1B60")]
	public CADMessageBase(IMethodMessage msg)
	{
	}

	[Token(Token = "0x6001E22")]
	[Address(RVA = "0x4EA1BF0", Offset = "0x4EA1BF0", VA = "0x4EA1BF0")]
	internal MethodBase GetMethod()
	{
		return null;
	}

	[Token(Token = "0x6001E23")]
	[Address(RVA = "0x4EA1C60", Offset = "0x4EA1C60", VA = "0x4EA1C60")]
	protected static Type[] GetSignature(MethodBase methodBase, bool load)
	{
		return null;
	}

	[Token(Token = "0x6001E24")]
	[Address(RVA = "0x4EA1E70", Offset = "0x4EA1E70", VA = "0x4EA1E70")]
	internal static int MarshalProperties(IDictionary dict, ref ArrayList args)
	{
		return default(int);
	}

	[Token(Token = "0x6001E25")]
	[Address(RVA = "0x4EA28E0", Offset = "0x4EA28E0", VA = "0x4EA28E0")]
	internal static void UnmarshalProperties(IDictionary dict, int count, ArrayList args)
	{
	}

	[Token(Token = "0x6001E26")]
	[Address(RVA = "0x4EA2A80", Offset = "0x4EA2A80", VA = "0x4EA2A80")]
	private static bool IsPossibleToIgnoreMarshal(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x4EA2BE0", Offset = "0x4EA2BE0", VA = "0x4EA2BE0")]
	protected object MarshalArgument(object arg, ref ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E28")]
	[Address(RVA = "0x4EA2DD0", Offset = "0x4EA2DD0", VA = "0x4EA2DD0")]
	protected object UnmarshalArgument(object arg, ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x4EA34C0", Offset = "0x4EA34C0", VA = "0x4EA34C0")]
	internal object[] MarshalArguments(object[] arguments, ref ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E2A")]
	[Address(RVA = "0x4EA35E0", Offset = "0x4EA35E0", VA = "0x4EA35E0")]
	internal object[] UnmarshalArguments(object[] arguments, ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E2B")]
	[Address(RVA = "0x4EA3700", Offset = "0x4EA3700", VA = "0x4EA3700")]
	protected void SaveLogicalCallContext(IMethodMessage msg, ref ArrayList serializeList)
	{
	}

	[Token(Token = "0x6001E2C")]
	[Address(RVA = "0x4EA39C0", Offset = "0x4EA39C0", VA = "0x4EA39C0")]
	internal LogicalCallContext GetLogicalCallContext(ArrayList args)
	{
		return null;
	}
}
