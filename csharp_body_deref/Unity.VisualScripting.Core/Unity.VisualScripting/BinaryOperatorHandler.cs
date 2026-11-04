// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.BinaryOperatorHandler
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

[Token(Token = "0x2000109")]
public abstract class BinaryOperatorHandler : OperatorHandler
{
	[Token(Token = "0x200010A")]
	private struct OperatorQuery : IEquatable<OperatorQuery>
	{
		[Token(Token = "0x400029D")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type leftType;

		[Token(Token = "0x400029E")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type rightType;

		[Token(Token = "0x6000793")]
		[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
		public OperatorQuery(Type leftType, Type rightType)
		{
		}

		[Token(Token = "0x6000794")]
		[Address(RVA = "0x2D9DC00", Offset = "0x2D9C200", VA = "0x182D9DC00", Slot = "4")]
		public bool Equals(OperatorQuery other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000795")]
		[Address(RVA = "0x2DDC6B0", Offset = "0x2DDACB0", VA = "0x182DDC6B0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000796")]
		[Address(RVA = "0x2DDC7B0", Offset = "0x2DDADB0", VA = "0x182DDC7B0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x400029A")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<OperatorQuery, Func<object, object, object>> handlers;

	[Token(Token = "0x400029B")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<OperatorQuery, IOptimizedInvoker> userDefinedOperators;

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<OperatorQuery, OperatorQuery> userDefinedOperandTypes;

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x2DC9920", Offset = "0x2DC7F20", VA = "0x182DC9920")]
	protected BinaryOperatorHandler(string name, string verb, string symbol, string customMethodName)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x2DC8EC0", Offset = "0x2DC74C0", VA = "0x182DC8EC0", Slot = "4")]
	public virtual object Operate(object leftOperand, object rightOperand)
	{
		return null;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x2DC8E20", Offset = "0x2DC7420", VA = "0x182DC8E20", Slot = "5")]
	protected virtual object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x2DC8DC0", Offset = "0x2DC73C0", VA = "0x182DC8DC0", Slot = "6")]
	protected virtual object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x2DC98C0", Offset = "0x2DC7EC0", VA = "0x182DC98C0", Slot = "7")]
	protected virtual object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000791")]
	protected void Handle<TLeft, TRight>(Func<TLeft, TRight, object> handler, bool reverse = false)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x2DC97F0", Offset = "0x2DC7DF0", VA = "0x182DC97F0")]
	private static OperatorQuery ResolveUserDefinedOperandTypes(MethodInfo userDefinedOperator)
	{
		return default(OperatorQuery);
	}
}
