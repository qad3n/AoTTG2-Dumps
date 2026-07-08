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
		[Address(RVA = "0x41E3A40", Offset = "0x41E3A40", VA = "0x41E3A40")]
		internal void Append(BindingRestrictions restrictions)
		{
		}

		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x41E3C10", Offset = "0x41E3C10", VA = "0x41E3C10")]
		internal Expression ToExpression()
		{
			return null;
		}

		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x41E3AC0", Offset = "0x41E3AC0", VA = "0x41E3AC0")]
		private void Push(Expression node, int depth)
		{
		}

		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x41E3CF0", Offset = "0x41E3CF0", VA = "0x41E3CF0")]
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
		[Address(RVA = "0x41E32E0", Offset = "0x41E32E0", VA = "0x41E32E0")]
		internal MergedRestriction(BindingRestrictions left, BindingRestrictions right)
		{
		}

		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x41E3DB0", Offset = "0x41E3DB0", VA = "0x41E3DB0", Slot = "4")]
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
		[Address(RVA = "0x41E39D0", Offset = "0x41E39D0", VA = "0x41E39D0")]
		internal CustomRestriction(Expression expression)
		{
		}

		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x41E3FE0", Offset = "0x41E3FE0", VA = "0x41E3FE0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x41E4040", Offset = "0x41E4040", VA = "0x41E4040", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x41E4070", Offset = "0x41E4070", VA = "0x41E4070", Slot = "4")]
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
		[Address(RVA = "0x41E3450", Offset = "0x41E3450", VA = "0x41E3450")]
		internal TypeRestriction(Expression parameter, Type type)
		{
		}

		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x41E4080", Offset = "0x41E4080", VA = "0x41E4080", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x41E4140", Offset = "0x41E4140", VA = "0x41E4140", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x41E4190", Offset = "0x41E4190", VA = "0x41E4190", Slot = "4")]
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
		[Address(RVA = "0x41E3840", Offset = "0x41E3840", VA = "0x41E3840")]
		internal InstanceRestriction(Expression parameter, object instance)
		{
		}

		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x41E41F0", Offset = "0x41E41F0", VA = "0x41E41F0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x41E4280", Offset = "0x41E4280", VA = "0x41E4280", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x41E42C0", Offset = "0x41E42C0", VA = "0x41E42C0", Slot = "4")]
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
	[Address(RVA = "0x41E3190", Offset = "0x41E3190", VA = "0x41E3190")]
	private BindingRestrictions()
	{
	}

	[Token(Token = "0x6000BAB")]
	internal abstract Expression GetExpression();

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x41E31A0", Offset = "0x41E31A0", VA = "0x41E31A0")]
	public BindingRestrictions Merge(BindingRestrictions restrictions)
	{
		return null;
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x41E3360", Offset = "0x41E3360", VA = "0x41E3360")]
	public static BindingRestrictions GetTypeRestriction(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x41E34D0", Offset = "0x41E34D0", VA = "0x41E34D0")]
	internal static BindingRestrictions GetTypeRestriction(DynamicMetaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x41E3730", Offset = "0x41E3730", VA = "0x41E3730")]
	public static BindingRestrictions GetInstanceRestriction(Expression expression, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x41E38C0", Offset = "0x41E38C0", VA = "0x41E38C0")]
	public Expression ToExpression()
	{
		return null;
	}
}
