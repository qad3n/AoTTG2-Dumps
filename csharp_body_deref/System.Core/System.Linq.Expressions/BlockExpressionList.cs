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
			[Token(Token = "0x60002FB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700006D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002FD")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x2441B00", Offset = "0x2440100", VA = "0x182441B00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x2441C00", Offset = "0x2440200", VA = "0x182441C00", Slot = "8")]
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
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x2429060", Offset = "0x2427660", VA = "0x182429060", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x24290A0", Offset = "0x24276A0", VA = "0x1824290A0", Slot = "5")]
		[ExcludeFromCodeCoverage]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public int Count
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x1A1F3F0", Offset = "0x1A1D9F0", VA = "0x181A1F3F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	[ExcludeFromCodeCoverage]
	public bool IsReadOnly
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x2429030", Offset = "0x2427630", VA = "0x182429030", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal BlockExpressionList(BlockExpression provider, Expression arg0)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x2428EF0", Offset = "0x24274F0", VA = "0x182428EF0", Slot = "6")]
	public int IndexOf(Expression item)
	{
		return default(int);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x2428FA0", Offset = "0x24275A0", VA = "0x182428FA0", Slot = "7")]
	[ExcludeFromCodeCoverage]
	public void Insert(int index, Expression item)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x2428FD0", Offset = "0x24275D0", VA = "0x182428FD0", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x2428B80", Offset = "0x2427180", VA = "0x182428B80", Slot = "11")]
	[ExcludeFromCodeCoverage]
	public void Add(Expression item)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x2428BB0", Offset = "0x24271B0", VA = "0x182428BB0", Slot = "12")]
	[ExcludeFromCodeCoverage]
	public void Clear()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x2428BE0", Offset = "0x24271E0", VA = "0x182428BE0", Slot = "13")]
	public bool Contains(Expression item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x2428C80", Offset = "0x2427280", VA = "0x182428C80", Slot = "14")]
	public void CopyTo(Expression[] array, int index)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x2429000", Offset = "0x2427600", VA = "0x182429000", Slot = "15")]
	[ExcludeFromCodeCoverage]
	public bool Remove(Expression item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x2428E80", Offset = "0x2427480", VA = "0x182428E80", Slot = "16")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__18))]
	public IEnumerator<Expression> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x2428E80", Offset = "0x2427480", VA = "0x182428E80", Slot = "17")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
