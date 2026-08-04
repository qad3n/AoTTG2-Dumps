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
		[Token(Token = "0x400029F")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type leftType;

		[Token(Token = "0x40002A0")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type rightType;

		[Token(Token = "0x6000789")]
		[Address(RVA = "0x4CDD5F0", Offset = "0x4CDD5F0", VA = "0x4CDD5F0")]
		public OperatorQuery(Type leftType, Type rightType)
		{
		}

		[Token(Token = "0x600078A")]
		[Address(RVA = "0x4CDD780", Offset = "0x4CDD780", VA = "0x4CDD780", Slot = "4")]
		public bool Equals(OperatorQuery other)
		{
			return default(bool);
		}

		[Token(Token = "0x600078B")]
		[Address(RVA = "0x4CDD800", Offset = "0x4CDD800", VA = "0x4CDD800", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600078C")]
		[Address(RVA = "0x4CDD8C0", Offset = "0x4CDD8C0", VA = "0x4CDD8C0", Slot = "2")]
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
	[Address(RVA = "0x4CD7570", Offset = "0x4CD7570", VA = "0x4CD7570")]
	protected BinaryOperatorHandler(string name, string verb, string symbol, string customMethodName)
	{
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x4CDCCD0", Offset = "0x4CDCCD0", VA = "0x4CDCCD0", Slot = "4")]
	public virtual object Operate(object leftOperand, object rightOperand)
	{
		return null;
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x4CD76F0", Offset = "0x4CD76F0", VA = "0x4CD76F0", Slot = "5")]
	protected virtual object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x4CDD6E0", Offset = "0x4CDD6E0", VA = "0x4CDD6E0", Slot = "6")]
	protected virtual object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x4CDD730", Offset = "0x4CDD730", VA = "0x4CDD730", Slot = "7")]
	protected virtual object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000787")]
	protected void Handle<TLeft, TRight>(Func<TLeft, TRight, object> handler, bool reverse = false)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x4CDD620", Offset = "0x4CDD620", VA = "0x4CDD620")]
	private static OperatorQuery ResolveUserDefinedOperandTypes(MethodInfo userDefinedOperator)
	{
		return default(OperatorQuery);
	}
}
