using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000137")]
public abstract class UnaryOperatorHandler : OperatorHandler
{
	[Token(Token = "0x4000810")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<Type, Func<object, object>> manualHandlers;

	[Token(Token = "0x4000811")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<Type, IOptimizedInvoker> userDefinedOperators;

	[Token(Token = "0x4000812")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<Type, Type> userDefinedOperandTypes;

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x4A19A20", Offset = "0x4A19A20", VA = "0x4A19A20")]
	protected UnaryOperatorHandler(string name, string verb, string symbol, string customMethodName)
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x4A19B60", Offset = "0x4A19B60", VA = "0x4A19B60")]
	public object Operate(object operand)
	{
		return null;
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x4A1A090", Offset = "0x4A1A090", VA = "0x4A1A090", Slot = "4")]
	protected virtual object CustomHandling(object operand)
	{
		return null;
	}

	[Token(Token = "0x6000D34")]
	protected void Handle<T>(Func<T, object> handler)
	{
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x4A19FE0", Offset = "0x4A19FE0", VA = "0x4A19FE0")]
	private static Type ResolveUserDefinedOperandType(MethodInfo userDefinedOperator)
	{
		return null;
	}
}
