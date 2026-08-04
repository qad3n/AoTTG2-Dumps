// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.UnaryOperatorHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4D3E5F0", Offset = "0x4D3E5F0", VA = "0x4D3E5F0")]
	protected UnaryOperatorHandler(string name, string verb, string symbol, string customMethodName)
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x4D3E730", Offset = "0x4D3E730", VA = "0x4D3E730")]
	public object Operate(object operand)
	{
		return null;
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x4D3EC60", Offset = "0x4D3EC60", VA = "0x4D3EC60", Slot = "4")]
	protected virtual object CustomHandling(object operand)
	{
		return null;
	}

	[Token(Token = "0x6000D34")]
	protected void Handle<T>(Func<T, object> handler)
	{
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x4D3EBB0", Offset = "0x4D3EBB0", VA = "0x4D3EBB0")]
	private static Type ResolveUserDefinedOperandType(MethodInfo userDefinedOperator)
	{
		return null;
	}
}
