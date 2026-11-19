// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.BlockExpressionList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000072")]
internal class BlockExpressionList : IList<Expression>, ICollection<Expression>, IEnumerable<Expression>, IEnumerable
{
	[Token(Token = "0x2000073")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__18 : IEnumerator<Expression>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000113")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000114")]
		[FieldOffset(Offset = "0x18")]
		private Expression _003C_003E2__current;

		[Token(Token = "0x4000115")]
		[FieldOffset(Offset = "0x20")]
		public BlockExpressionList _003C_003E4__this;

		[Token(Token = "0x4000116")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700006E")]
		private Expression System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ELinq_002EExpressions_002EExpression_003E_002ECurrent
		{
			[Token(Token = "0x6000306")]
			[Address(RVA = "0x5DC6090", Offset = "0x5DC5090", VA = "0x5DC6090", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700006F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000308")]
			[Address(RVA = "0x5DC60E0", Offset = "0x5DC50E0", VA = "0x5DC60E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000303")]
		[Address(RVA = "0x5DC5F10", Offset = "0x5DC4F10", VA = "0x5DC5F10")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000304")]
		[Address(RVA = "0x5DC5FA0", Offset = "0x5DC4FA0", VA = "0x5DC5FA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000305")]
		[Address(RVA = "0x5DC5FB0", Offset = "0x5DC4FB0", VA = "0x5DC5FB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000307")]
		[Address(RVA = "0x5DC60A0", Offset = "0x5DC50A0", VA = "0x5DC60A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x10")]
	private readonly BlockExpression _block;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg0;

	[Token(Token = "0x1700006B")]
	public Expression this[int index]
	{
		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x5DC5B00", Offset = "0x5DC4B00", VA = "0x5DC5B00", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x5DC5B30", Offset = "0x5DC4B30", VA = "0x5DC5B30", Slot = "5")]
		[ExcludeFromCodeCoverage]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public int Count
	{
		[Token(Token = "0x60002FE")]
		[Address(RVA = "0x5DC5E10", Offset = "0x5DC4E10", VA = "0x5DC5E10", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	[ExcludeFromCodeCoverage]
	public bool IsReadOnly
	{
		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x5DC5E40", Offset = "0x5DC4E40", VA = "0x5DC5E40", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x5DC4360", Offset = "0x5DC3360", VA = "0x5DC4360")]
	internal BlockExpressionList(BlockExpression provider, Expression arg0)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x5DC5A20", Offset = "0x5DC4A20", VA = "0x5DC5A20", Slot = "6")]
	public int IndexOf(Expression item)
	{
		return default(int);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x5DC5AA0", Offset = "0x5DC4AA0", VA = "0x5DC5AA0", Slot = "7")]
	[ExcludeFromCodeCoverage]
	public void Insert(int index, Expression item)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x5DC5AD0", Offset = "0x5DC4AD0", VA = "0x5DC5AD0", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x5DC5B60", Offset = "0x5DC4B60", VA = "0x5DC5B60", Slot = "11")]
	[ExcludeFromCodeCoverage]
	public void Add(Expression item)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x5DC5B90", Offset = "0x5DC4B90", VA = "0x5DC5B90", Slot = "12")]
	[ExcludeFromCodeCoverage]
	public void Clear()
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x5DC5BC0", Offset = "0x5DC4BC0", VA = "0x5DC5BC0", Slot = "13")]
	public bool Contains(Expression item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x5DC5C40", Offset = "0x5DC4C40", VA = "0x5DC5C40", Slot = "14")]
	public void CopyTo(Expression[] array, int index)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x5DC5E70", Offset = "0x5DC4E70", VA = "0x5DC5E70", Slot = "15")]
	[ExcludeFromCodeCoverage]
	public bool Remove(Expression item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x5DC5EA0", Offset = "0x5DC4EA0", VA = "0x5DC5EA0", Slot = "16")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__18))]
	public IEnumerator<Expression> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x5DC5F30", Offset = "0x5DC4F30", VA = "0x5DC5F30", Slot = "17")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
