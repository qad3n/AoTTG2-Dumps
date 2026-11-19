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

[Token(Token = "0x200025B")]
[DebuggerTypeProxy(typeof(BindingRestrictionsProxy))]
[DebuggerDisplay("{DebugView}")]
public abstract class BindingRestrictions
{
	[Token(Token = "0x200025C")]
	private sealed class TestBuilder
	{
		[Token(Token = "0x200025D")]
		private struct AndNode
		{
			[Token(Token = "0x4000458")]
			[FieldOffset(Offset = "0x0")]
			internal int Depth;

			[Token(Token = "0x4000459")]
			[FieldOffset(Offset = "0x8")]
			internal Expression Node;
		}

		[Token(Token = "0x4000456")]
		[FieldOffset(Offset = "0x10")]
		private readonly HashSet<BindingRestrictions> _unique;

		[Token(Token = "0x4000457")]
		[FieldOffset(Offset = "0x18")]
		private readonly Stack<AndNode> _tests;

		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x5E1DC10", Offset = "0x5E1CC10", VA = "0x5E1DC10")]
		internal void Append(BindingRestrictions restrictions)
		{
		}

		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x5E1DDD0", Offset = "0x5E1CDD0", VA = "0x5E1DDD0")]
		internal Expression ToExpression()
		{
			return null;
		}

		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x5E1DC90", Offset = "0x5E1CC90", VA = "0x5E1DC90")]
		private void Push(Expression node, int depth)
		{
		}

		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x5E1DEA0", Offset = "0x5E1CEA0", VA = "0x5E1DEA0")]
		public TestBuilder()
		{
		}
	}

	[Token(Token = "0x200025E")]
	private sealed class MergedRestriction : BindingRestrictions
	{
		[Token(Token = "0x400045A")]
		[FieldOffset(Offset = "0x10")]
		internal readonly BindingRestrictions Left;

		[Token(Token = "0x400045B")]
		[FieldOffset(Offset = "0x18")]
		internal readonly BindingRestrictions Right;

		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x5E1D4B0", Offset = "0x5E1C4B0", VA = "0x5E1D4B0")]
		internal MergedRestriction(BindingRestrictions left, BindingRestrictions right)
		{
		}

		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x5E1DF60", Offset = "0x5E1CF60", VA = "0x5E1DF60", Slot = "4")]
		internal override Expression GetExpression()
		{
			return null;
		}
	}

	[Token(Token = "0x200025F")]
	private sealed class CustomRestriction : BindingRestrictions
	{
		[Token(Token = "0x400045C")]
		[FieldOffset(Offset = "0x10")]
		private readonly Expression _expression;

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x5E1DBA0", Offset = "0x5E1CBA0", VA = "0x5E1DBA0")]
		internal CustomRestriction(Expression expression)
		{
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x5E1E1E0", Offset = "0x5E1D1E0", VA = "0x5E1E1E0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x5E1E240", Offset = "0x5E1D240", VA = "0x5E1E240", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BC5")]
		[Address(RVA = "0x5E1E270", Offset = "0x5E1D270", VA = "0x5E1E270", Slot = "4")]
		internal override Expression GetExpression()
		{
			return null;
		}
	}

	[Token(Token = "0x2000260")]
	private sealed class TypeRestriction : BindingRestrictions
	{
		[Token(Token = "0x400045D")]
		[FieldOffset(Offset = "0x10")]
		private readonly Expression _expression;

		[Token(Token = "0x400045E")]
		[FieldOffset(Offset = "0x18")]
		private readonly Type _type;

		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x5E1D620", Offset = "0x5E1C620", VA = "0x5E1D620")]
		internal TypeRestriction(Expression parameter, Type type)
		{
		}

		[Token(Token = "0x6000BC7")]
		[Address(RVA = "0x5E1E280", Offset = "0x5E1D280", VA = "0x5E1E280", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x5E1E320", Offset = "0x5E1D320", VA = "0x5E1E320", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BC9")]
		[Address(RVA = "0x5E1E370", Offset = "0x5E1D370", VA = "0x5E1E370", Slot = "4")]
		internal override Expression GetExpression()
		{
			return null;
		}
	}

	[Token(Token = "0x2000261")]
	private sealed class InstanceRestriction : BindingRestrictions
	{
		[Token(Token = "0x400045F")]
		[FieldOffset(Offset = "0x10")]
		private readonly Expression _expression;

		[Token(Token = "0x4000460")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _instance;

		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x5E1DA10", Offset = "0x5E1CA10", VA = "0x5E1DA10")]
		internal InstanceRestriction(Expression parameter, object instance)
		{
		}

		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x5E1E3D0", Offset = "0x5E1D3D0", VA = "0x5E1E3D0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BCC")]
		[Address(RVA = "0x5E1E440", Offset = "0x5E1D440", VA = "0x5E1E440", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x5E1E480", Offset = "0x5E1D480", VA = "0x5E1E480", Slot = "4")]
		internal override Expression GetExpression()
		{
			return null;
		}
	}

	[Token(Token = "0x2000262")]
	private sealed class BindingRestrictionsProxy
	{
	}

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BindingRestrictions Empty;

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x5E1D340", Offset = "0x5E1C340", VA = "0x5E1D340")]
	private BindingRestrictions()
	{
	}

	[Token(Token = "0x6000BB5")]
	internal abstract Expression GetExpression();

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x5E1D350", Offset = "0x5E1C350", VA = "0x5E1D350")]
	public BindingRestrictions Merge(BindingRestrictions restrictions)
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x5E1D530", Offset = "0x5E1C530", VA = "0x5E1D530")]
	public static BindingRestrictions GetTypeRestriction(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x5E1D6A0", Offset = "0x5E1C6A0", VA = "0x5E1D6A0")]
	internal static BindingRestrictions GetTypeRestriction(DynamicMetaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x5E1D900", Offset = "0x5E1C900", VA = "0x5E1D900")]
	public static BindingRestrictions GetInstanceRestriction(Expression expression, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x5E1DA90", Offset = "0x5E1CA90", VA = "0x5E1DA90")]
	public Expression ToExpression()
	{
		return null;
	}
}
