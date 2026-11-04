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

[Token(Token = "0x20003CF")]
internal class CADMessageBase
{
	[Token(Token = "0x4000F67")]
	[FieldOffset(Offset = "0x10")]
	protected object[] _args;

	[Token(Token = "0x4000F68")]
	[FieldOffset(Offset = "0x18")]
	protected byte[] _serializedArgs;

	[Token(Token = "0x4000F69")]
	[FieldOffset(Offset = "0x20")]
	protected int _propertyCount;

	[Token(Token = "0x4000F6A")]
	[FieldOffset(Offset = "0x28")]
	protected System.Runtime.Remoting.Messaging.CADArgHolder _callContext;

	[Token(Token = "0x4000F6B")]
	[FieldOffset(Offset = "0x30")]
	internal byte[] serializedMethod;

	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x19EFAB0", Offset = "0x19EE0B0", VA = "0x1819EFAB0")]
	public CADMessageBase(IMethodMessage msg)
	{
	}

	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x19EDD10", Offset = "0x19EC310", VA = "0x1819EDD10")]
	internal MethodBase GetMethod()
	{
		return null;
	}

	[Token(Token = "0x6001E92")]
	[Address(RVA = "0x19EDE90", Offset = "0x19EC490", VA = "0x1819EDE90")]
	protected static Type[] GetSignature(MethodBase methodBase, bool load)
	{
		return null;
	}

	[Token(Token = "0x6001E93")]
	[Address(RVA = "0x19EE690", Offset = "0x19ECC90", VA = "0x1819EE690")]
	internal static int MarshalProperties(IDictionary dict, ref ArrayList args)
	{
		return default(int);
	}

	[Token(Token = "0x6001E94")]
	[Address(RVA = "0x19EF950", Offset = "0x19EDF50", VA = "0x1819EF950")]
	internal static void UnmarshalProperties(IDictionary dict, int count, ArrayList args)
	{
	}

	[Token(Token = "0x6001E95")]
	[Address(RVA = "0x19EE090", Offset = "0x19EC690", VA = "0x1819EE090")]
	private static bool IsPossibleToIgnoreMarshal(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E96")]
	[Address(RVA = "0x19EE220", Offset = "0x19EC820", VA = "0x1819EE220")]
	protected object MarshalArgument(object arg, ref ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E97")]
	[Address(RVA = "0x19EED10", Offset = "0x19ED310", VA = "0x1819EED10")]
	protected object UnmarshalArgument(object arg, ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E98")]
	[Address(RVA = "0x19EE580", Offset = "0x19ECB80", VA = "0x1819EE580")]
	internal object[] MarshalArguments(object[] arguments, ref ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E99")]
	[Address(RVA = "0x19EF840", Offset = "0x19EDE40", VA = "0x1819EF840")]
	internal object[] UnmarshalArguments(object[] arguments, ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E9A")]
	[Address(RVA = "0x19EEB50", Offset = "0x19ED150", VA = "0x1819EEB50")]
	protected void SaveLogicalCallContext(IMethodMessage msg, ref ArrayList serializeList)
	{
	}

	[Token(Token = "0x6001E9B")]
	[Address(RVA = "0x19EDC80", Offset = "0x19EC280", VA = "0x1819EDC80")]
	internal LogicalCallContext GetLogicalCallContext(ArrayList args)
	{
		return null;
	}
}
