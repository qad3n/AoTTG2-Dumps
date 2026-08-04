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

[Token(Token = "0x2000071")]
internal class BlockExpressionList : IList<Expression>, ICollection<Expression>, IEnumerable<Expression>, IEnumerable
{
	[Token(Token = "0x2000072")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__18 : IEnumerator<Expression>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400010A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400010B")]
		[FieldOffset(Offset = "0x18")]
		private Expression _003C_003E2__current;

		[Token(Token = "0x400010C")]
		[FieldOffset(Offset = "0x20")]
		public BlockExpressionList _003C_003E4__this;

		[Token(Token = "0x400010D")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700006C")]
		private Expression System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ELinq_002EExpressions_002EExpression_003E_002ECurrent
		{
			[Token(Token = "0x60002FC")]
			[Address(RVA = "0x44AFF80", Offset = "0x44AFF80", VA = "0x44AFF80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700006D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002FE")]
			[Address(RVA = "0x44AFFD0", Offset = "0x44AFFD0", VA = "0x44AFFD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x44AFE00", Offset = "0x44AFE00", VA = "0x44AFE00")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x44AFE90", Offset = "0x44AFE90", VA = "0x44AFE90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x44AFEA0", Offset = "0x44AFEA0", VA = "0x44AFEA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x44AFF90", Offset = "0x44AFF90", VA = "0x44AFF90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x10")]
	private readonly BlockExpression _block;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg0;

	[Token(Token = "0x17000069")]
	public Expression this[int index]
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x44AFA00", Offset = "0x44AFA00", VA = "0x44AFA00", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x44AFA30", Offset = "0x44AFA30", VA = "0x44AFA30", Slot = "5")]
		[ExcludeFromCodeCoverage]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public int Count
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x44AFD00", Offset = "0x44AFD00", VA = "0x44AFD00", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	[ExcludeFromCodeCoverage]
	public bool IsReadOnly
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x44AFD30", Offset = "0x44AFD30", VA = "0x44AFD30", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x44AE250", Offset = "0x44AE250", VA = "0x44AE250")]
	internal BlockExpressionList(BlockExpression provider, Expression arg0)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x44AF920", Offset = "0x44AF920", VA = "0x44AF920", Slot = "6")]
	public int IndexOf(Expression item)
	{
		return default(int);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x44AF9A0", Offset = "0x44AF9A0", VA = "0x44AF9A0", Slot = "7")]
	[ExcludeFromCodeCoverage]
	public void Insert(int index, Expression item)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x44AF9D0", Offset = "0x44AF9D0", VA = "0x44AF9D0", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x44AFA60", Offset = "0x44AFA60", VA = "0x44AFA60", Slot = "11")]
	[ExcludeFromCodeCoverage]
	public void Add(Expression item)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x44AFA90", Offset = "0x44AFA90", VA = "0x44AFA90", Slot = "12")]
	[ExcludeFromCodeCoverage]
	public void Clear()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x44AFAC0", Offset = "0x44AFAC0", VA = "0x44AFAC0", Slot = "13")]
	public bool Contains(Expression item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x44AFB40", Offset = "0x44AFB40", VA = "0x44AFB40", Slot = "14")]
	public void CopyTo(Expression[] array, int index)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x44AFD60", Offset = "0x44AFD60", VA = "0x44AFD60", Slot = "15")]
	[ExcludeFromCodeCoverage]
	public bool Remove(Expression item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x44AFD90", Offset = "0x44AFD90", VA = "0x44AFD90", Slot = "16")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__18))]
	public IEnumerator<Expression> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x44AFE20", Offset = "0x44AFE20", VA = "0x44AFE20", Slot = "17")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
