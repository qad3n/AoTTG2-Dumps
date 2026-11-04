// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphReference
// Update status: CHANGED in this game update
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetBreadcrumbs_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x2DBA690", Offset = "0x2DB8C90", VA = "0x182DBA690", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x2DBA8A0", Offset = "0x2DB8EA0", VA = "0x182DBA8A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x2DBA800", Offset = "0x2DB8E00", VA = "0x182DBA800", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GraphReference> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002EGraphReference_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x2DBA800", Offset = "0x2DB8E00", VA = "0x182DBA800", Slot = "5")]
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
	[Address(RVA = "0x2DAF3E0", Offset = "0x2DAD9E0", VA = "0x182DAF3E0")]
	static GraphReference()
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x2DAF4B0", Offset = "0x2DADAB0", VA = "0x182DAF4B0")]
	private GraphReference()
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x2DAEE40", Offset = "0x2DAD440", VA = "0x182DAEE40")]
	public static GraphReference New(IGraphRoot root, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x2DAEC30", Offset = "0x2DAD230", VA = "0x182DAEC30")]
	public static GraphReference New(IGraphRoot root, IEnumerable<IGraphParentElement> parentElements, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x2DAED00", Offset = "0x2DAD300", VA = "0x182DAED00")]
	public static GraphReference New(UnityEngine.Object rootObject, IEnumerable<Guid> parentElementGuids, bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x2DAEEE0", Offset = "0x2DAD4E0", VA = "0x182DAEEE0")]
	private static GraphReference New(GraphPointer model)
	{
		return null;
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x2DADC30", Offset = "0x2DAC230", VA = "0x182DADC30", Slot = "5")]
	public override void CopyFrom(GraphPointer other)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x2DADBE0", Offset = "0x2DAC1E0", VA = "0x182DADBE0")]
	public GraphReference Clone()
	{
		return null;
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "4")]
	public override GraphReference AsReference()
	{
		return null;
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x2DAF3D0", Offset = "0x2DAD9D0", VA = "0x182DAF3D0")]
	public GraphStack ToStackPooled()
	{
		return null;
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x2DAF070", Offset = "0x2DAD670", VA = "0x182DAF070")]
	internal void Release()
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x2DADCB0", Offset = "0x2DAC2B0", VA = "0x182DADCB0")]
	public void CreateGraphData()
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x2DADFF0", Offset = "0x2DAC5F0", VA = "0x182DADFF0")]
	public void FreeGraphData()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x2DADF80", Offset = "0x2DAC580", VA = "0x182DADF80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x2DAE910", Offset = "0x2DACF10", VA = "0x182DAE910")]
	private void Hash()
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(GraphReference x, GraphReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x2DAF4C0", Offset = "0x2DADAC0", VA = "0x182DAF4C0")]
	public static bool operator !=(GraphReference x, GraphReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x2DAEF60", Offset = "0x2DAD560", VA = "0x182DAEF60")]
	public GraphReference ParentReference(bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x2DAD920", Offset = "0x2DABF20", VA = "0x182DAD920")]
	public GraphReference ChildReference(IGraphParentElement parentElement, bool ensureValid, [Optional] int? maxRecursionDepth)
	{
		return null;
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x2DAF0D0", Offset = "0x2DAD6D0", VA = "0x182DAF0D0")]
	public GraphReference Revalidate(bool ensureValid)
	{
		return null;
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x2DAE890", Offset = "0x2DACE90", VA = "0x182DAE890")]
	[IteratorStateMachine(typeof(_003CGetBreadcrumbs_003Ed__22))]
	public IEnumerable<GraphReference> GetBreadcrumbs()
	{
		return null;
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x2DAE930", Offset = "0x2DACF30", VA = "0x182DAE930")]
	public static GraphReference Intern(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x2DADA30", Offset = "0x2DAC030", VA = "0x182DADA30")]
	internal static void ClearIntern(GraphPointer pointer)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x2DAE270", Offset = "0x2DAC870", VA = "0x182DAE270")]
	public static void FreeInvalidInterns()
	{
	}
}
