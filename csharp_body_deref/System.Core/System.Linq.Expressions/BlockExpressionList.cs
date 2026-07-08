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
			[Address(RVA = "0x418AE80", Offset = "0x418AE80", VA = "0x418AE80", Slot = "4")]
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
			[Address(RVA = "0x418AED0", Offset = "0x418AED0", VA = "0x418AED0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x418AD00", Offset = "0x418AD00", VA = "0x418AD00")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x418AD90", Offset = "0x418AD90", VA = "0x418AD90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x418ADA0", Offset = "0x418ADA0", VA = "0x418ADA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x418AE90", Offset = "0x418AE90", VA = "0x418AE90", Slot = "8")]
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
		[Address(RVA = "0x418A900", Offset = "0x418A900", VA = "0x418A900", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x418A930", Offset = "0x418A930", VA = "0x418A930", Slot = "5")]
		[ExcludeFromCodeCoverage]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public int Count
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x418AC00", Offset = "0x418AC00", VA = "0x418AC00", Slot = "9")]
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
		[Address(RVA = "0x418AC30", Offset = "0x418AC30", VA = "0x418AC30", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4189150", Offset = "0x4189150", VA = "0x4189150")]
	internal BlockExpressionList(BlockExpression provider, Expression arg0)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x418A820", Offset = "0x418A820", VA = "0x418A820", Slot = "6")]
	public int IndexOf(Expression item)
	{
		return default(int);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x418A8A0", Offset = "0x418A8A0", VA = "0x418A8A0", Slot = "7")]
	[ExcludeFromCodeCoverage]
	public void Insert(int index, Expression item)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x418A8D0", Offset = "0x418A8D0", VA = "0x418A8D0", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x418A960", Offset = "0x418A960", VA = "0x418A960", Slot = "11")]
	[ExcludeFromCodeCoverage]
	public void Add(Expression item)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x418A990", Offset = "0x418A990", VA = "0x418A990", Slot = "12")]
	[ExcludeFromCodeCoverage]
	public void Clear()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x418A9C0", Offset = "0x418A9C0", VA = "0x418A9C0", Slot = "13")]
	public bool Contains(Expression item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x418AA40", Offset = "0x418AA40", VA = "0x418AA40", Slot = "14")]
	public void CopyTo(Expression[] array, int index)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x418AC60", Offset = "0x418AC60", VA = "0x418AC60", Slot = "15")]
	[ExcludeFromCodeCoverage]
	public bool Remove(Expression item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x418AC90", Offset = "0x418AC90", VA = "0x418AC90", Slot = "16")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__18))]
	public IEnumerator<Expression> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x418AD20", Offset = "0x418AD20", VA = "0x418AD20", Slot = "17")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
