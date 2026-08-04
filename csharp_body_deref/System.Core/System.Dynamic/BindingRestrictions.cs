// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.BindingRestrictions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq.Expressions;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200025A")]
[DebuggerTypeProxy(typeof(BindingRestrictionsProxy))]
[DebuggerDisplay("{DebugView}")]
public abstract class BindingRestrictions
{
	[Token(Token = "0x200025B")]
	private sealed class TestBuilder
	{
		[Token(Token = "0x200025C")]
		private struct AndNode
		{
			[Token(Token = "0x400044F")]
			[FieldOffset(Offset = "0x0")]
			internal int Depth;

			[Token(Token = "0x4000450")]
			[FieldOffset(Offset = "0x8")]
			internal Expression Node;
		}

		[Token(Token = "0x400044D")]
		[FieldOffset(Offset = "0x10")]
		private readonly HashSet<BindingRestrictions> _unique;

		[Token(Token = "0x400044E")]
		[FieldOffset(Offset = "0x18")]
		private readonly Stack<AndNode> _tests;

		[Token(Token = "0x6000BB2")]
		[Address(RVA = "0x4508B40", Offset = "0x4508B40", VA = "0x4508B40")]
		internal void Append(BindingRestrictions restrictions)
		{
		}

		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x4508D10", Offset = "0x4508D10", VA = "0x4508D10")]
		internal Expression ToExpression()
		{
			return null;
		}

		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x4508BC0", Offset = "0x4508BC0", VA = "0x4508BC0")]
		private void Push(Expression node, int depth)
		{
		}

		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x4508DF0", Offset = "0x4508DF0", VA = "0x4508DF0")]
		public TestBuilder()
		{
		}
	}

	[Token(Token = "0x200025D")]
	private sealed class MergedRestriction : BindingRestrictions
	{
		[Token(Token = "0x4000451")]
		[FieldOffset(Offset = "0x10")]
		internal readonly BindingRestrictions Left;

		[Token(Token = "0x4000452")]
		[FieldOffset(Offset = "0x18")]
		internal readonly BindingRestrictions Right;

		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x45083E0", Offset = "0x45083E0", VA = "0x45083E0")]
		internal MergedRestriction(BindingRestrictions left, BindingRestrictions right)
		{
		}

		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x4508EB0", Offset = "0x4508EB0", VA = "0x4508EB0", Slot = "4")]
		internal override Expression GetExpression()
		{
			return null;
		}
	}

	[Token(Token = "0x200025E")]
	private sealed class CustomRestriction : BindingRestrictions
	{
		[Token(Token = "0x4000453")]
		[FieldOffset(Offset = "0x10")]
		private readonly Expression _expression;

		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x4508AD0", Offset = "0x4508AD0", VA = "0x4508AD0")]
		internal CustomRestriction(Expression expression)
		{
		}

		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x45090E0", Offset = "0x45090E0", VA = "0x45090E0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x4509140", Offset = "0x4509140", VA = "0x4509140", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x4509170", Offset = "0x4509170", VA = "0x4509170", Slot = "4")]
		internal override Expression GetExpression()
		{
			return null;
		}
	}

	[Token(Token = "0x200025F")]
	private sealed class TypeRestriction : BindingRestrictions
	{
		[Token(Token = "0x4000454")]
		[FieldOffset(Offset = "0x10")]
		private readonly Expression _expression;

		[Token(Token = "0x4000455")]
		[FieldOffset(Offset = "0x18")]
		private readonly Type _type;

		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x4508550", Offset = "0x4508550", VA = "0x4508550")]
		internal TypeRestriction(Expression parameter, Type type)
		{
		}

		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x4509180", Offset = "0x4509180", VA = "0x4509180", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x4509240", Offset = "0x4509240", VA = "0x4509240", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x4509290", Offset = "0x4509290", VA = "0x4509290", Slot = "4")]
		internal override Expression GetExpression()
		{
			return null;
		}
	}

	[Token(Token = "0x2000260")]
	private sealed class InstanceRestriction : BindingRestrictions
	{
		[Token(Token = "0x4000456")]
		[FieldOffset(Offset = "0x10")]
		private readonly Expression _expression;

		[Token(Token = "0x4000457")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _instance;

		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x4508940", Offset = "0x4508940", VA = "0x4508940")]
		internal InstanceRestriction(Expression parameter, object instance)
		{
		}

		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x45092F0", Offset = "0x45092F0", VA = "0x45092F0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x4509380", Offset = "0x4509380", VA = "0x4509380", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x45093C0", Offset = "0x45093C0", VA = "0x45093C0", Slot = "4")]
		internal override Expression GetExpression()
		{
			return null;
		}
	}

	[Token(Token = "0x2000261")]
	private sealed class BindingRestrictionsProxy
	{
	}

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BindingRestrictions Empty;

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x4508290", Offset = "0x4508290", VA = "0x4508290")]
	private BindingRestrictions()
	{
	}

	[Token(Token = "0x6000BAB")]
	internal abstract Expression GetExpression();

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x45082A0", Offset = "0x45082A0", VA = "0x45082A0")]
	public BindingRestrictions Merge(BindingRestrictions restrictions)
	{
		return null;
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x4508460", Offset = "0x4508460", VA = "0x4508460")]
	public static BindingRestrictions GetTypeRestriction(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x45085D0", Offset = "0x45085D0", VA = "0x45085D0")]
	internal static BindingRestrictions GetTypeRestriction(DynamicMetaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x4508830", Offset = "0x4508830", VA = "0x4508830")]
	public static BindingRestrictions GetInstanceRestriction(Expression expression, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x45089C0", Offset = "0x45089C0", VA = "0x45089C0")]
	public Expression ToExpression()
	{
		return null;
	}
}
