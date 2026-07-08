using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000076")]
public sealed class GraphReference : GraphPointer
{
	[Token(Token = "0x2000077")]
	[CompilerGenerated]
	private sealed class _003CGetBreadcrumbs_003Ed__21 : IEnumerable<GraphReference>, IEnumerable, IEnumerator<GraphReference>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private GraphReference _003C_003E2__current;

		[Token(Token = "0x4000113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GraphReference _003C_003E4__this;

		[Token(Token = "0x4000115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003Cdepth_003E5__2;

		[Token(Token = "0x170000DC")]
		private GraphReference System_002ECollections_002EGeneric_002EIEnumerator_003CUnity_002EVisualScripting_002EGraphReference_003E_002ECurrent
		{
			[Token(Token = "0x60003A6")]
			[Address(RVA = "0x498E1F0", Offset = "0x498E1F0", VA = "0x498E1F0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000DD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60003A8")]
			[Address(RVA = "0x498E240", Offset = "0x498E240", VA = "0x498E240", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x498D2D0", Offset = "0x498D2D0", VA = "0x498D2D0")]
		[DebuggerHidden]
		public _003CGetBreadcrumbs_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x498E060", Offset = "0x498E060", VA = "0x498E060", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x498E070", Offset = "0x498E070", VA = "0x498E070", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x498E200", Offset = "0x498E200", VA = "0x498E200", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x498E250", Offset = "0x498E250", VA = "0x498E250", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GraphReference> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002EGraphReference_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x498E2F0", Offset = "0x498E2F0", VA = "0x498E2F0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400010F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[DoNotSerialize]
	private int hashCode;

	[Token(Token = "0x4000110")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<int, List<GraphReference>> internPool;

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x498C7D0", Offset = "0x498C7D0", VA = "0x498C7D0")]
	static GraphReference()
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x498C8A0", Offset = "0x498C8A0", VA = "0x498C8A0")]
	private GraphReference()
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x498C8B0", Offset = "0x498C8B0", VA = "0x498C8B0")]
	public static GraphReference New(IGraphRoot root, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x498C940", Offset = "0x498C940", VA = "0x498C940")]
	public static GraphReference New(IGraphRoot root, IEnumerable<IGraphParentElement> parentElements, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x498C9D0", Offset = "0x498C9D0", VA = "0x498C9D0")]
	public static GraphReference New(UnityEngine.Object rootObject, IEnumerable<Guid> parentElementGuids, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x498CA60", Offset = "0x498CA60", VA = "0x498CA60")]
	private static GraphReference New(GraphPointer model)
	{
		return null;
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x498CAD0", Offset = "0x498CAD0", VA = "0x498CAD0", Slot = "5")]
	public override void CopyFrom(GraphPointer other)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x498CB30", Offset = "0x498CB30", VA = "0x498CB30")]
	public GraphReference Clone()
	{
		return null;
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x498CBF0", Offset = "0x498CBF0", VA = "0x498CBF0", Slot = "4")]
	public override GraphReference AsReference()
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x498CC00", Offset = "0x498CC00", VA = "0x498CC00")]
	public GraphStack ToStackPooled()
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x49861D0", Offset = "0x49861D0", VA = "0x49861D0")]
	public void CreateGraphData()
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x4987020", Offset = "0x4987020", VA = "0x4987020")]
	public void FreeGraphData()
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x498CDB0", Offset = "0x498CDB0", VA = "0x498CDB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x498C930", Offset = "0x498C930", VA = "0x498C930")]
	private void Hash()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x498CE10", Offset = "0x498CE10", VA = "0x498CE10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x498CE20", Offset = "0x498CE20", VA = "0x498CE20")]
	public static bool operator ==(GraphReference x, GraphReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x498CE50", Offset = "0x498CE50", VA = "0x498CE50")]
	public static bool operator !=(GraphReference x, GraphReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x498CEF0", Offset = "0x498CEF0", VA = "0x498CEF0")]
	public GraphReference ParentReference(bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x498CFB0", Offset = "0x498CFB0", VA = "0x498CFB0")]
	public GraphReference ChildReference(IGraphParentElement parentElement, bool ensureValid, [Optional] int? maxRecursionDepth)
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x498D070", Offset = "0x498D070", VA = "0x498D070")]
	public GraphReference Revalidate(bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x498D250", Offset = "0x498D250", VA = "0x498D250")]
	[IteratorStateMachine(typeof(_003CGetBreadcrumbs_003Ed__21))]
	public IEnumerable<GraphReference> GetBreadcrumbs()
	{
		return null;
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x498D300", Offset = "0x498D300", VA = "0x498D300")]
	public static GraphReference Intern(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x498D770", Offset = "0x498D770", VA = "0x498D770")]
	public static void FreeInvalidInterns()
	{
	}
}
