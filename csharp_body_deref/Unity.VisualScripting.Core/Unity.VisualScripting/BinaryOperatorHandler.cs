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
		[Token(Token = "0x400029F")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type leftType;

		[Token(Token = "0x40002A0")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type rightType;

		[Token(Token = "0x6000789")]
		[Address(RVA = "0x49B8A20", Offset = "0x49B8A20", VA = "0x49B8A20")]
		public OperatorQuery(Type leftType, Type rightType)
		{
		}

		[Token(Token = "0x600078A")]
		[Address(RVA = "0x49B8BB0", Offset = "0x49B8BB0", VA = "0x49B8BB0", Slot = "4")]
		public bool Equals(OperatorQuery other)
		{
			return default(bool);
		}

		[Token(Token = "0x600078B")]
		[Address(RVA = "0x49B8C30", Offset = "0x49B8C30", VA = "0x49B8C30", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600078C")]
		[Address(RVA = "0x49B8CF0", Offset = "0x49B8CF0", VA = "0x49B8CF0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<OperatorQuery, Func<object, object, object>> handlers;

	[Token(Token = "0x400029D")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<OperatorQuery, IOptimizedInvoker> userDefinedOperators;

	[Token(Token = "0x400029E")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<OperatorQuery, OperatorQuery> userDefinedOperandTypes;

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x49B29A0", Offset = "0x49B29A0", VA = "0x49B29A0")]
	protected BinaryOperatorHandler(string name, string verb, string symbol, string customMethodName)
	{
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x49B8100", Offset = "0x49B8100", VA = "0x49B8100", Slot = "4")]
	public virtual object Operate(object leftOperand, object rightOperand)
	{
		return null;
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x49B2B20", Offset = "0x49B2B20", VA = "0x49B2B20", Slot = "5")]
	protected virtual object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x49B8B10", Offset = "0x49B8B10", VA = "0x49B8B10", Slot = "6")]
	protected virtual object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x49B8B60", Offset = "0x49B8B60", VA = "0x49B8B60", Slot = "7")]
	protected virtual object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000787")]
	protected void Handle<TLeft, TRight>(Func<TLeft, TRight, object> handler, bool reverse = false)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x49B8A50", Offset = "0x49B8A50", VA = "0x49B8A50")]
	private static OperatorQuery ResolveUserDefinedOperandTypes(MethodInfo userDefinedOperator)
	{
		return default(OperatorQuery);
	}
}
