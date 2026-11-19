// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	private sealed class _003CGetBreadcrumbs_003Ed__22 : IEnumerable<GraphReference>, IEnumerable, IEnumerator<GraphReference>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400010F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000110")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private GraphReference _003C_003E2__current;

		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GraphReference _003C_003E4__this;

		[Token(Token = "0x4000113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003Cdepth_003E5__2;

		[Token(Token = "0x170000DF")]
		private GraphReference System_002ECollections_002EGeneric_002EIEnumerator_003CUnity_002EVisualScripting_002EGraphReference_003E_002ECurrent
		{
			[Token(Token = "0x60003AF")]
			[Address(RVA = "0x67A1A50", Offset = "0x67A0A50", VA = "0x67A1A50", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000E0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60003B1")]
			[Address(RVA = "0x67A1AA0", Offset = "0x67A0AA0", VA = "0x67A1AA0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x67A0AB0", Offset = "0x679FAB0", VA = "0x67A0AB0")]
		[DebuggerHidden]
		public _003CGetBreadcrumbs_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x67A18C0", Offset = "0x67A08C0", VA = "0x67A18C0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x67A18D0", Offset = "0x67A08D0", VA = "0x67A18D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x67A1A60", Offset = "0x67A0A60", VA = "0x67A1A60", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x67A1AB0", Offset = "0x67A0AB0", VA = "0x67A1AB0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GraphReference> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002EGraphReference_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x67A1B50", Offset = "0x67A0B50", VA = "0x67A1B50", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400010D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[DoNotSerialize]
	private int hashCode;

	[Token(Token = "0x400010E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<int, List<GraphReference>> internPool;

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x679FF90", Offset = "0x679EF90", VA = "0x679FF90")]
	static GraphReference()
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x67A0060", Offset = "0x679F060", VA = "0x67A0060")]
	private GraphReference()
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x67A0070", Offset = "0x679F070", VA = "0x67A0070")]
	public static GraphReference New(IGraphRoot root, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x67A0100", Offset = "0x679F100", VA = "0x67A0100")]
	public static GraphReference New(IGraphRoot root, IEnumerable<IGraphParentElement> parentElements, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x67A0190", Offset = "0x679F190", VA = "0x67A0190")]
	public static GraphReference New(UnityEngine.Object rootObject, IEnumerable<Guid> parentElementGuids, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x67A0220", Offset = "0x679F220", VA = "0x67A0220")]
	private static GraphReference New(GraphPointer model)
	{
		return null;
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x67A0290", Offset = "0x679F290", VA = "0x67A0290", Slot = "5")]
	public override void CopyFrom(GraphPointer other)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x67A02F0", Offset = "0x679F2F0", VA = "0x67A02F0")]
	public GraphReference Clone()
	{
		return null;
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x67A03B0", Offset = "0x679F3B0", VA = "0x67A03B0", Slot = "4")]
	public override GraphReference AsReference()
	{
		return null;
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x67A03C0", Offset = "0x679F3C0", VA = "0x67A03C0")]
	public GraphStack ToStackPooled()
	{
		return null;
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x67A0570", Offset = "0x679F570", VA = "0x67A0570")]
	internal void Release()
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x6799DD0", Offset = "0x6798DD0", VA = "0x6799DD0")]
	public void CreateGraphData()
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x679AAC0", Offset = "0x6799AC0", VA = "0x679AAC0")]
	public void FreeGraphData()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x67A05C0", Offset = "0x679F5C0", VA = "0x67A05C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x67A00F0", Offset = "0x679F0F0", VA = "0x67A00F0")]
	private void Hash()
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x67A0620", Offset = "0x679F620", VA = "0x67A0620", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x67A0630", Offset = "0x679F630", VA = "0x67A0630")]
	public static bool operator ==(GraphReference x, GraphReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x67A0660", Offset = "0x679F660", VA = "0x67A0660")]
	public static bool operator !=(GraphReference x, GraphReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x67A0700", Offset = "0x679F700", VA = "0x67A0700")]
	public GraphReference ParentReference(bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x67A07C0", Offset = "0x679F7C0", VA = "0x67A07C0")]
	public GraphReference ChildReference(IGraphParentElement parentElement, bool ensureValid, [Optional] int? maxRecursionDepth)
	{
		return null;
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x67A0880", Offset = "0x679F880", VA = "0x67A0880")]
	public GraphReference Revalidate(bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x67A0A40", Offset = "0x679FA40", VA = "0x67A0A40")]
	[IteratorStateMachine(typeof(_003CGetBreadcrumbs_003Ed__22))]
	public IEnumerable<GraphReference> GetBreadcrumbs()
	{
		return null;
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x67A0AE0", Offset = "0x679FAE0", VA = "0x67A0AE0")]
	public static GraphReference Intern(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x67A0F20", Offset = "0x679FF20", VA = "0x67A0F20")]
	internal static void ClearIntern(GraphPointer pointer)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x67A10C0", Offset = "0x67A00C0", VA = "0x67A10C0")]
	public static void FreeInvalidInterns()
	{
	}
}
