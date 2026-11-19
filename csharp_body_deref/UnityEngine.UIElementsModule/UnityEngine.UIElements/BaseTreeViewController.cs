// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseTreeViewController
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
using Unity.Hierarchy;
using Unity.Profiling;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000055")]
public abstract class BaseTreeViewController : CollectionViewController
{
	[Token(Token = "0x2000056")]
	[CompilerGenerated]
	private sealed class _003CGetAllItemIds_003Ed__23 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400010B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400010C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private int _003C_003E2__current;

		[Token(Token = "0x400010D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400010E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IEnumerable<int> rootIds;

		[Token(Token = "0x400010F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public IEnumerable<int> _003C_003E3__rootIds;

		[Token(Token = "0x4000110")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public BaseTreeViewController _003C_003E4__this;

		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private HierarchyFlattened.Enumerator _003C_003Es__1;

		[Token(Token = "0x4000112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private HierarchyFlattenedNode _003CflattenedNode_003E5__2;

		[Token(Token = "0x4000113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
		private HierarchyNode _003Cnode_003E5__3;

		[Token(Token = "0x4000114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private IEnumerator<int> _003C_003Es__4;

		[Token(Token = "0x4000115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private int _003Cid_003E5__5;

		[Token(Token = "0x4000116")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
		private HierarchyNode _003CparentNode_003E5__6;

		[Token(Token = "0x4000117")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		private HierarchyFlattenedChildrenEnumerable _003CflattenedNodeChildren_003E5__7;

		[Token(Token = "0x4000118")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
		private HierarchyFlattenedChildrenEnumerable.Enumerator _003C_003Es__8;

		[Token(Token = "0x4000119")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
		private HierarchyFlattenedNode _003CflattenedNode_003E5__9;

		[Token(Token = "0x17000063")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x6000238")]
			[Address(RVA = "0x6A983D0", Offset = "0x6A973D0", VA = "0x6A983D0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000064")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600023A")]
			[Address(RVA = "0x6A98420", Offset = "0x6A97420", VA = "0x6A98420", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000234")]
		[Address(RVA = "0x6A97950", Offset = "0x6A96950", VA = "0x6A97950")]
		[DebuggerHidden]
		public _003CGetAllItemIds_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000235")]
		[Address(RVA = "0x6A97980", Offset = "0x6A96980", VA = "0x6A97980", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000236")]
		[Address(RVA = "0x6A97A30", Offset = "0x6A96A30", VA = "0x6A97A30", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000237")]
		[Address(RVA = "0x6A98330", Offset = "0x6A97330", VA = "0x6A98330")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x6A983E0", Offset = "0x6A973E0", VA = "0x6A983E0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x6A98440", Offset = "0x6A97440", VA = "0x6A98440", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x6A984F0", Offset = "0x6A974F0", VA = "0x6A984F0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000057")]
	[CompilerGenerated]
	private sealed class _003CGetChildrenIds_003Ed__25 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400011A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400011B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private int _003C_003E2__current;

		[Token(Token = "0x400011C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400011D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int id;

		[Token(Token = "0x400011E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int _003C_003E3__id;

		[Token(Token = "0x400011F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseTreeViewController _003C_003E4__this;

		[Token(Token = "0x4000120")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private HierarchyNode _003CnodeById_003E5__1;

		[Token(Token = "0x4000121")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private HierarchyNodeChildren _003Cnodes_003E5__2;

		[Token(Token = "0x4000122")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private HierarchyNodeChildren.Enumerator _003C_003Es__3;

		[Token(Token = "0x4000123")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private HierarchyNode _003Cnode_003E5__4;

		[Token(Token = "0x17000065")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x6000240")]
			[Address(RVA = "0x6A987C0", Offset = "0x6A977C0", VA = "0x6A987C0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000066")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000242")]
			[Address(RVA = "0x6A98810", Offset = "0x6A97810", VA = "0x6A98810", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x6A98500", Offset = "0x6A97500", VA = "0x6A98500")]
		[DebuggerHidden]
		public _003CGetChildrenIds_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x6A98530", Offset = "0x6A97530", VA = "0x6A98530", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x6A98540", Offset = "0x6A97540", VA = "0x6A98540", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x6A987D0", Offset = "0x6A977D0", VA = "0x6A987D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000243")]
		[Address(RVA = "0x6A98830", Offset = "0x6A97830", VA = "0x6A98830", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x6A988D0", Offset = "0x6A978D0", VA = "0x6A988D0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000058")]
	[CompilerGenerated]
	private sealed class _003CGetChildrenIdsByIndex_003Ed__41 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000124")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000125")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private int _003C_003E2__current;

		[Token(Token = "0x4000126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000127")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int index;

		[Token(Token = "0x4000128")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int _003C_003E3__index;

		[Token(Token = "0x4000129")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseTreeViewController _003C_003E4__this;

		[Token(Token = "0x400012A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private HierarchyNodeChildren _003Cnodes_003E5__1;

		[Token(Token = "0x400012B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private HierarchyNodeChildren.Enumerator _003C_003Es__2;

		[Token(Token = "0x400012C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private HierarchyNode _003Cnode_003E5__3;

		[Token(Token = "0x17000067")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x6000248")]
			[Address(RVA = "0x6A98C20", Offset = "0x6A97C20", VA = "0x6A98C20", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000068")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600024A")]
			[Address(RVA = "0x6A98C70", Offset = "0x6A97C70", VA = "0x6A98C70", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000245")]
		[Address(RVA = "0x6A988E0", Offset = "0x6A978E0", VA = "0x6A988E0")]
		[DebuggerHidden]
		public _003CGetChildrenIdsByIndex_003Ed__41(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x6A98910", Offset = "0x6A97910", VA = "0x6A98910", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000247")]
		[Address(RVA = "0x6A98920", Offset = "0x6A97920", VA = "0x6A98920", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000249")]
		[Address(RVA = "0x6A98C30", Offset = "0x6A97C30", VA = "0x6A98C30", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x6A98C90", Offset = "0x6A97C90", VA = "0x6A98C90", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600024C")]
		[Address(RVA = "0x6A98D30", Offset = "0x6A97D30", VA = "0x6A98D30", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000103")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private protected Hierarchy m_Hierarchy;

	[Token(Token = "0x4000104")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private protected HierarchyFlattened m_HierarchyFlattened;

	[Token(Token = "0x4000105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private protected HierarchyViewModel m_HierarchyViewModel;

	[Token(Token = "0x4000106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private protected Dictionary<int, HierarchyNode> m_IdToNodeDictionary;

	[Token(Token = "0x4000107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IHierarchyProperty<int> m_TreeViewDataProperty;

	[Token(Token = "0x4000108")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool m_HierarchyHasPendingChanged;

	[Token(Token = "0x4000109")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<TreeViewExpansionChangedArgs> m_itemExpandedChanged;

	[Token(Token = "0x400010A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker K_ExpandItemByIndex;

	[Token(Token = "0x17000060")]
	protected BaseTreeView baseTreeView
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x6A93650", Offset = "0x6A92650", VA = "0x6A93650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	private protected Hierarchy hierarchy
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x6A93B60", Offset = "0x6A92B60", VA = "0x6A93B60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x6A938A0", Offset = "0x6A928A0", VA = "0x6A938A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public override IList itemsSource
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x6A93B70", Offset = "0x6A92B70", VA = "0x6A93B70", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x6A93B80", Offset = "0x6A92B80", VA = "0x6A93B80", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x14000009")]
	internal event Action<TreeViewExpansionChangedArgs> itemExpandedChanged
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x6A936B0", Offset = "0x6A926B0", VA = "0x6A936B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x6A93750", Offset = "0x6A92750", VA = "0x6A93750")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x6A937F0", Offset = "0x6A927F0", VA = "0x6A937F0")]
	protected BaseTreeViewController()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x6A93A00", Offset = "0x6A92A00", VA = "0x6A93A00", Slot = "1")]
	~BaseTreeViewController()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x6A93A90", Offset = "0x6A92A90", VA = "0x6A93A90")]
	internal void DisposeHierarchy()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x6A93BD0", Offset = "0x6A92BD0", VA = "0x6A93BD0", Slot = "24")]
	[IteratorStateMachine(typeof(_003CGetAllItemIds_003Ed__23))]
	public virtual IEnumerable<int> GetAllItemIds([Optional] IEnumerable<int> rootIds)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x6A93C50", Offset = "0x6A92C50", VA = "0x6A93C50", Slot = "25")]
	public virtual int GetParentId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x6A93E50", Offset = "0x6A92E50", VA = "0x6A93E50", Slot = "26")]
	[IteratorStateMachine(typeof(_003CGetChildrenIds_003Ed__25))]
	public virtual IEnumerable<int> GetChildrenIds(int id)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x6A93EC0", Offset = "0x6A92EC0", VA = "0x6A93EC0", Slot = "27")]
	public virtual void Move(int id, int newParentId, int childIndex = -1, bool rebuildTree = true)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x6A94640", Offset = "0x6A93640", VA = "0x6A94640", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x6A947B0", Offset = "0x6A937B0", VA = "0x6A947B0", Slot = "16")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x6A94BB0", Offset = "0x6A93BB0", VA = "0x6A94BB0", Slot = "18")]
	internal override void InvokeDestroyItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x6A946E0", Offset = "0x6A936E0", VA = "0x6A946E0")]
	internal void PostInitRegistration(ReusableTreeViewItem treeItem)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x6A94CC0", Offset = "0x6A93CC0", VA = "0x6A94CC0")]
	private void OnItemPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x6A958B0", Offset = "0x6A948B0", VA = "0x6A958B0")]
	private void RaiseItemExpandedChanged(int id, bool isExpanded, bool isAppliedToAllChildren)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x6A95940", Offset = "0x6A94940", VA = "0x6A95940")]
	private void OnToggleValueChanged(ChangeEvent<bool> evt)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x6A95D50", Offset = "0x6A94D50", VA = "0x6A95D50", Slot = "11")]
	public override int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x6A95E00", Offset = "0x6A94E00", VA = "0x6A95E00", Slot = "12")]
	public override int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x6A96100", Offset = "0x6A95100", VA = "0x6A96100", Slot = "28")]
	public virtual bool HasChildren(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x6A961A0", Offset = "0x6A951A0", VA = "0x6A961A0")]
	public bool Exists(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x6A94B40", Offset = "0x6A93B40", VA = "0x6A94B40")]
	public bool HasChildrenByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x6A95700", Offset = "0x6A94700", VA = "0x6A95700")]
	[IteratorStateMachine(typeof(_003CGetChildrenIdsByIndex_003Ed__41))]
	public IEnumerable<int> GetChildrenIdsByIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x6A941F0", Offset = "0x6A931F0", VA = "0x6A941F0")]
	public int GetChildIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x6A961F0", Offset = "0x6A951F0", VA = "0x6A961F0")]
	public int GetIndentationDepth(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x6A94A20", Offset = "0x6A93A20", VA = "0x6A94A20")]
	public int GetIndentationDepthByIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x6A962A0", Offset = "0x6A952A0", VA = "0x6A962A0", Slot = "29")]
	public virtual bool CanChangeExpandedState(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x6A962B0", Offset = "0x6A952B0", VA = "0x6A962B0")]
	public bool IsExpanded(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x6A94AE0", Offset = "0x6A93AE0", VA = "0x6A94AE0")]
	public bool IsExpandedByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x6A95BC0", Offset = "0x6A94BC0", VA = "0x6A95BC0")]
	public void ExpandItemByIndex(int index, bool expandAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x6A96AA0", Offset = "0x6A95AA0", VA = "0x6A96AA0")]
	public void ExpandItem(int id, bool expandAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x6A95B10", Offset = "0x6A94B10", VA = "0x6A95B10")]
	public void CollapseItemByIndex(int index, bool collapseAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x6A971B0", Offset = "0x6A961B0", VA = "0x6A971B0")]
	public void CollapseItem(int id, bool collapseAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x6A963A0", Offset = "0x6A953A0", VA = "0x6A963A0")]
	private void ExpandItemByNode(in HierarchyNode node, bool expandAllChildren, bool refresh)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x6A96B50", Offset = "0x6A95B50", VA = "0x6A96B50")]
	private void CollapseItemByNode(in HierarchyNode node, bool collapseAllChildren, bool refresh)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x6A97260", Offset = "0x6A96260", VA = "0x6A97260")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void GetExpandedItemIds(List<int> list)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x6A95630", Offset = "0x6A94630", VA = "0x6A95630")]
	internal bool IsViewDataKeyEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x6A974F0", Offset = "0x6A964F0", VA = "0x6A974F0", Slot = "19")]
	internal override void PreRefresh()
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x6A960D0", Offset = "0x6A950D0", VA = "0x6A960D0")]
	private bool IsIndexValid(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x6A94060", Offset = "0x6A93060", VA = "0x6A94060")]
	private bool IsChildOf(int childId, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x6A94630", Offset = "0x6A93630", VA = "0x6A94630")]
	internal void RaiseItemParentChanged(int id, int newParentId)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x6A97500", Offset = "0x6A96500", VA = "0x6A97500")]
	internal HierarchyNode CreateNode(in HierarchyNode parent)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x6A97570", Offset = "0x6A96570", VA = "0x6A97570")]
	internal void UpdateIdToNodeDictionary(int id, in HierarchyNode node, bool isAdd = true)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x6A976A0", Offset = "0x6A966A0", VA = "0x6A976A0")]
	internal void ClearIdToNodeDictionary()
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x6A943F0", Offset = "0x6A933F0", VA = "0x6A943F0")]
	internal void UpdateSortOrder(in HierarchyNode newParent, in HierarchyNode insertedNode, int insertedIndex)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x6A976E0", Offset = "0x6A966E0", VA = "0x6A976E0")]
	internal void OnViewDataReadyUpdateNodes()
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x6A95830", Offset = "0x6A94830", VA = "0x6A95830")]
	internal void UpdateHierarchy()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x6A93DC0", Offset = "0x6A92DC0", VA = "0x6A93DC0")]
	internal HierarchyNode GetHierarchyNodeById(int id)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x6A95770", Offset = "0x6A94770", VA = "0x6A95770")]
	internal HierarchyNode GetHierarchyNodeByIndex(int index)
	{
		return default(HierarchyNode);
	}
}
