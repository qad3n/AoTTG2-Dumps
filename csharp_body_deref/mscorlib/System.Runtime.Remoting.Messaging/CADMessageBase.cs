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
	[Address(RVA = "0x3B87680", Offset = "0x3B87680", VA = "0x3B87680")]
	public CADMessageBase(IMethodMessage msg)
	{
	}

	[Token(Token = "0x6001E22")]
	[Address(RVA = "0x3B87710", Offset = "0x3B87710", VA = "0x3B87710")]
	internal MethodBase GetMethod()
	{
		return null;
	}

	[Token(Token = "0x6001E23")]
	[Address(RVA = "0x3B87780", Offset = "0x3B87780", VA = "0x3B87780")]
	protected static Type[] GetSignature(MethodBase methodBase, bool load)
	{
		return null;
	}

	[Token(Token = "0x6001E24")]
	[Address(RVA = "0x3B87990", Offset = "0x3B87990", VA = "0x3B87990")]
	internal static int MarshalProperties(IDictionary dict, ref ArrayList args)
	{
		return default(int);
	}

	[Token(Token = "0x6001E25")]
	[Address(RVA = "0x3B88400", Offset = "0x3B88400", VA = "0x3B88400")]
	internal static void UnmarshalProperties(IDictionary dict, int count, ArrayList args)
	{
	}

	[Token(Token = "0x6001E26")]
	[Address(RVA = "0x3B885A0", Offset = "0x3B885A0", VA = "0x3B885A0")]
	private static bool IsPossibleToIgnoreMarshal(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x3B88700", Offset = "0x3B88700", VA = "0x3B88700")]
	protected object MarshalArgument(object arg, ref ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E28")]
	[Address(RVA = "0x3B888F0", Offset = "0x3B888F0", VA = "0x3B888F0")]
	protected object UnmarshalArgument(object arg, ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x3B88FE0", Offset = "0x3B88FE0", VA = "0x3B88FE0")]
	internal object[] MarshalArguments(object[] arguments, ref ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E2A")]
	[Address(RVA = "0x3B89100", Offset = "0x3B89100", VA = "0x3B89100")]
	internal object[] UnmarshalArguments(object[] arguments, ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E2B")]
	[Address(RVA = "0x3B89220", Offset = "0x3B89220", VA = "0x3B89220")]
	protected void SaveLogicalCallContext(IMethodMessage msg, ref ArrayList serializeList)
	{
	}

	[Token(Token = "0x6001E2C")]
	[Address(RVA = "0x3B894E0", Offset = "0x3B894E0", VA = "0x3B894E0")]
	internal LogicalCallContext GetLogicalCallContext(ArrayList args)
	{
		return null;
	}
}
