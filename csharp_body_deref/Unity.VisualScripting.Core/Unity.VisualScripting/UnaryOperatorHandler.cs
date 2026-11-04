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
	[Token(Token = "0x400080E")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<Type, Func<object, object>> manualHandlers;

	[Token(Token = "0x400080F")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<Type, IOptimizedInvoker> userDefinedOperators;

	[Token(Token = "0x4000810")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<Type, Type> userDefinedOperandTypes;

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x2E4DE70", Offset = "0x2E4C470", VA = "0x182E4DE70")]
	protected UnaryOperatorHandler(string name, string verb, string symbol, string customMethodName)
	{
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x2E4DA70", Offset = "0x2E4C070", VA = "0x182E4DA70")]
	public object Operate(object operand)
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x2E4D9F0", Offset = "0x2E4BFF0", VA = "0x182E4D9F0", Slot = "4")]
	protected virtual object CustomHandling(object operand)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	protected void Handle<T>(Func<T, object> handler)
	{
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x2E4DE20", Offset = "0x2E4C420", VA = "0x182E4DE20")]
	private static Type ResolveUserDefinedOperandType(MethodInfo userDefinedOperator)
	{
		return null;
	}
}
