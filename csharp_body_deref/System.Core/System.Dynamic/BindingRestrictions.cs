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

		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x2480C60", Offset = "0x247F260", VA = "0x182480C60")]
		internal void Append(BindingRestrictions restrictions)
		{
		}

		[Token(Token = "0x6000BB2")]
		[Address(RVA = "0x2480F80", Offset = "0x247F580", VA = "0x182480F80")]
		internal Expression ToExpression()
		{
			return null;
		}

		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x2480E20", Offset = "0x247F420", VA = "0x182480E20")]
		private void Push(Expression node, int depth)
		{
		}

		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x2481060", Offset = "0x247F660", VA = "0x182481060")]
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

		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x2473DC0", Offset = "0x24723C0", VA = "0x182473DC0")]
		internal MergedRestriction(BindingRestrictions left, BindingRestrictions right)
		{
		}

		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x24739A0", Offset = "0x2471FA0", VA = "0x1824739A0", Slot = "4")]
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

		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x2469760", Offset = "0x2467D60", VA = "0x182469760")]
		internal CustomRestriction(Expression expression)
		{
		}

		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x24696C0", Offset = "0x2467CC0", VA = "0x1824696C0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x2469730", Offset = "0x2467D30", VA = "0x182469730", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
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

		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x2481A40", Offset = "0x2480040", VA = "0x182481A40")]
		internal TypeRestriction(Expression parameter, Type type)
		{
		}

		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x24818D0", Offset = "0x247FED0", VA = "0x1824818D0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x24819E0", Offset = "0x247FFE0", VA = "0x1824819E0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x2481980", Offset = "0x247FF80", VA = "0x182481980", Slot = "4")]
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

		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x24701F0", Offset = "0x246E7F0", VA = "0x1824701F0")]
		internal InstanceRestriction(Expression parameter, object instance)
		{
		}

		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x246FD50", Offset = "0x246E350", VA = "0x18246FD50", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x24701A0", Offset = "0x246E7A0", VA = "0x1824701A0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x246FDE0", Offset = "0x246E3E0", VA = "0x18246FDE0", Slot = "4")]
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

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private BindingRestrictions()
	{
	}

	[Token(Token = "0x6000BAA")]
	internal abstract Expression GetExpression();

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x2466D50", Offset = "0x2465350", VA = "0x182466D50")]
	public BindingRestrictions Merge(BindingRestrictions restrictions)
	{
		return null;
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x2466C60", Offset = "0x2465260", VA = "0x182466C60")]
	public static BindingRestrictions GetTypeRestriction(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x2466950", Offset = "0x2464F50", VA = "0x182466950")]
	internal static BindingRestrictions GetTypeRestriction(DynamicMetaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x2466880", Offset = "0x2464E80", VA = "0x182466880")]
	public static BindingRestrictions GetInstanceRestriction(Expression expression, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x1B47C10", Offset = "0x1B46210", VA = "0x181B47C10")]
	public Expression ToExpression()
	{
		return null;
	}
}
