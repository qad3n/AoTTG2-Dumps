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
		[Address(RVA = "0x67CBA00", Offset = "0x67CAA00", VA = "0x67CBA00")]
		public OperatorQuery(Type leftType, Type rightType)
		{
		}

		[Token(Token = "0x6000794")]
		[Address(RVA = "0x67CBBA0", Offset = "0x67CABA0", VA = "0x67CBBA0", Slot = "4")]
		public bool Equals(OperatorQuery other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000795")]
		[Address(RVA = "0x67CBC20", Offset = "0x67CAC20", VA = "0x67CBC20", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000796")]
		[Address(RVA = "0x67CBCE0", Offset = "0x67CACE0", VA = "0x67CBCE0", Slot = "2")]
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
	[Address(RVA = "0x67C5A50", Offset = "0x67C4A50", VA = "0x67C5A50")]
	protected BinaryOperatorHandler(string name, string verb, string symbol, string customMethodName)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x67CB0F0", Offset = "0x67CA0F0", VA = "0x67CB0F0", Slot = "4")]
	public virtual object Operate(object leftOperand, object rightOperand)
	{
		return null;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x67C5BD0", Offset = "0x67C4BD0", VA = "0x67C5BD0", Slot = "5")]
	protected virtual object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x67CBB00", Offset = "0x67CAB00", VA = "0x67CBB00", Slot = "6")]
	protected virtual object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x67CBB50", Offset = "0x67CAB50", VA = "0x67CBB50", Slot = "7")]
	protected virtual object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000791")]
	protected void Handle<TLeft, TRight>(Func<TLeft, TRight, object> handler, bool reverse = false)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x67CBA30", Offset = "0x67CAA30", VA = "0x67CBA30")]
	private static OperatorQuery ResolveUserDefinedOperandTypes(MethodInfo userDefinedOperator)
	{
		return default(OperatorQuery);
	}
}
