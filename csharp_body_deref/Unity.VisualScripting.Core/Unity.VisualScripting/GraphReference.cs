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
			[Address(RVA = "0x4CB2DC0", Offset = "0x4CB2DC0", VA = "0x4CB2DC0", Slot = "6")]
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
			[Address(RVA = "0x4CB2E10", Offset = "0x4CB2E10", VA = "0x4CB2E10", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x4CB1EA0", Offset = "0x4CB1EA0", VA = "0x4CB1EA0")]
		[DebuggerHidden]
		public _003CGetBreadcrumbs_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x4CB2C30", Offset = "0x4CB2C30", VA = "0x4CB2C30", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x4CB2C40", Offset = "0x4CB2C40", VA = "0x4CB2C40", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x4CB2DD0", Offset = "0x4CB2DD0", VA = "0x4CB2DD0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x4CB2E20", Offset = "0x4CB2E20", VA = "0x4CB2E20", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GraphReference> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002EGraphReference_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x4CB2EC0", Offset = "0x4CB2EC0", VA = "0x4CB2EC0", Slot = "5")]
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
	[Address(RVA = "0x4CB13A0", Offset = "0x4CB13A0", VA = "0x4CB13A0")]
	static GraphReference()
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x4CB1470", Offset = "0x4CB1470", VA = "0x4CB1470")]
	private GraphReference()
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x4CB1480", Offset = "0x4CB1480", VA = "0x4CB1480")]
	public static GraphReference New(IGraphRoot root, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x4CB1510", Offset = "0x4CB1510", VA = "0x4CB1510")]
	public static GraphReference New(IGraphRoot root, IEnumerable<IGraphParentElement> parentElements, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x4CB15A0", Offset = "0x4CB15A0", VA = "0x4CB15A0")]
	public static GraphReference New(UnityEngine.Object rootObject, IEnumerable<Guid> parentElementGuids, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x4CB1630", Offset = "0x4CB1630", VA = "0x4CB1630")]
	private static GraphReference New(GraphPointer model)
	{
		return null;
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x4CB16A0", Offset = "0x4CB16A0", VA = "0x4CB16A0", Slot = "5")]
	public override void CopyFrom(GraphPointer other)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x4CB1700", Offset = "0x4CB1700", VA = "0x4CB1700")]
	public GraphReference Clone()
	{
		return null;
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x4CB17C0", Offset = "0x4CB17C0", VA = "0x4CB17C0", Slot = "4")]
	public override GraphReference AsReference()
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x4CB17D0", Offset = "0x4CB17D0", VA = "0x4CB17D0")]
	public GraphStack ToStackPooled()
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x4CAADA0", Offset = "0x4CAADA0", VA = "0x4CAADA0")]
	public void CreateGraphData()
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x4CABBF0", Offset = "0x4CABBF0", VA = "0x4CABBF0")]
	public void FreeGraphData()
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4CB1980", Offset = "0x4CB1980", VA = "0x4CB1980", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4CB1500", Offset = "0x4CB1500", VA = "0x4CB1500")]
	private void Hash()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4CB19E0", Offset = "0x4CB19E0", VA = "0x4CB19E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x4CB19F0", Offset = "0x4CB19F0", VA = "0x4CB19F0")]
	public static bool operator ==(GraphReference x, GraphReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x4CB1A20", Offset = "0x4CB1A20", VA = "0x4CB1A20")]
	public static bool operator !=(GraphReference x, GraphReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x4CB1AC0", Offset = "0x4CB1AC0", VA = "0x4CB1AC0")]
	public GraphReference ParentReference(bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4CB1B80", Offset = "0x4CB1B80", VA = "0x4CB1B80")]
	public GraphReference ChildReference(IGraphParentElement parentElement, bool ensureValid, [Optional] int? maxRecursionDepth)
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4CB1C40", Offset = "0x4CB1C40", VA = "0x4CB1C40")]
	public GraphReference Revalidate(bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4CB1E20", Offset = "0x4CB1E20", VA = "0x4CB1E20")]
	[IteratorStateMachine(typeof(_003CGetBreadcrumbs_003Ed__21))]
	public IEnumerable<GraphReference> GetBreadcrumbs()
	{
		return null;
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4CB1ED0", Offset = "0x4CB1ED0", VA = "0x4CB1ED0")]
	public static GraphReference Intern(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4CB2340", Offset = "0x4CB2340", VA = "0x4CB2340")]
	public static void FreeInvalidInterns()
	{
	}
}
