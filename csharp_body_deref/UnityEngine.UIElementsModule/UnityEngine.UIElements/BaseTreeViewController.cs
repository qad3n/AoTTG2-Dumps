// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseTreeViewController
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
			[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "6")]
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
			[Address(RVA = "0x2424CF0", Offset = "0x24232F0", VA = "0x182424CF0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000234")]
		[Address(RVA = "0x8E81F0", Offset = "0x8E67F0", VA = "0x1808E81F0")]
		[DebuggerHidden]
		public _003CGetAllItemIds_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000235")]
		[Address(RVA = "0x30B3880", Offset = "0x30B1E80", VA = "0x1830B3880", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000236")]
		[Address(RVA = "0x30B2F20", Offset = "0x30B1520", VA = "0x1830B2F20", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000237")]
		[Address(RVA = "0x30B38E0", Offset = "0x30B1EE0", VA = "0x1830B38E0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x30B3840", Offset = "0x30B1E40", VA = "0x1830B3840", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x30B3790", Offset = "0x30B1D90", VA = "0x1830B3790", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x30B3790", Offset = "0x30B1D90", VA = "0x1830B3790", Slot = "5")]
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
			[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "6")]
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
			[Address(RVA = "0x2424CF0", Offset = "0x24232F0", VA = "0x182424CF0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x8E81F0", Offset = "0x8E67F0", VA = "0x1808E81F0")]
		[DebuggerHidden]
		public _003CGetChildrenIds_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x30B3C30", Offset = "0x30B2230", VA = "0x1830B3C30", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x30B3E80", Offset = "0x30B2480", VA = "0x1830B3E80", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000243")]
		[Address(RVA = "0x30B3DD0", Offset = "0x30B23D0", VA = "0x1830B3DD0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x30B3DD0", Offset = "0x30B23D0", VA = "0x1830B3DD0", Slot = "5")]
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
			[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "6")]
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
			[Address(RVA = "0x2424CF0", Offset = "0x24232F0", VA = "0x182424CF0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000245")]
		[Address(RVA = "0x8E81F0", Offset = "0x8E67F0", VA = "0x1808E81F0")]
		[DebuggerHidden]
		public _003CGetChildrenIdsByIndex_003Ed__41(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000247")]
		[Address(RVA = "0x30B3940", Offset = "0x30B1F40", VA = "0x1830B3940", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000249")]
		[Address(RVA = "0x30B3BF0", Offset = "0x30B21F0", VA = "0x1830B3BF0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x30B3B40", Offset = "0x30B2140", VA = "0x1830B3B40", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600024C")]
		[Address(RVA = "0x30B3B40", Offset = "0x30B2140", VA = "0x1830B3B40", Slot = "5")]
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
		[Address(RVA = "0x3084630", Offset = "0x3082C30", VA = "0x183084630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	private protected Hierarchy hierarchy
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x3084760", Offset = "0x3082D60", VA = "0x183084760")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public override IList itemsSource
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x30848D0", Offset = "0x3082ED0", VA = "0x1830848D0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x14000009")]
	internal event Action<TreeViewExpansionChangedArgs> itemExpandedChanged
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x3084580", Offset = "0x3082B80", VA = "0x183084580")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x30846B0", Offset = "0x3082CB0", VA = "0x1830846B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3084390", Offset = "0x3082990", VA = "0x183084390")]
	protected BaseTreeViewController()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x30816B0", Offset = "0x307FCB0", VA = "0x1830816B0", Slot = "1")]
	~BaseTreeViewController()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3080F50", Offset = "0x307F550", VA = "0x183080F50")]
	internal void DisposeHierarchy()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3081710", Offset = "0x307FD10", VA = "0x183081710", Slot = "24")]
	[IteratorStateMachine(typeof(_003CGetAllItemIds_003Ed__23))]
	public virtual IEnumerable<int> GetAllItemIds([Optional] IEnumerable<int> rootIds)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x30823C0", Offset = "0x30809C0", VA = "0x1830823C0", Slot = "25")]
	public virtual int GetParentId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x3081A60", Offset = "0x3080060", VA = "0x183081A60", Slot = "26")]
	[IteratorStateMachine(typeof(_003CGetChildrenIds_003Ed__25))]
	public virtual IEnumerable<int> GetChildrenIds(int id)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x3082FA0", Offset = "0x30815A0", VA = "0x183082FA0", Slot = "27")]
	public virtual void Move(int id, int newParentId, int childIndex = -1, bool rebuildTree = true)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x30829C0", Offset = "0x3080FC0", VA = "0x1830829C0", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x30826A0", Offset = "0x3080CA0", VA = "0x1830826A0", Slot = "16")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x30828A0", Offset = "0x3080EA0", VA = "0x1830828A0", Slot = "18")]
	internal override void InvokeDestroyItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x3083D30", Offset = "0x3082330", VA = "0x183083D30")]
	internal void PostInitRegistration(ReusableTreeViewItem treeItem)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x3083280", Offset = "0x3081880", VA = "0x183083280")]
	private void OnItemPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x3083E20", Offset = "0x3082420", VA = "0x183083E20")]
	private void RaiseItemExpandedChanged(int id, bool isExpanded, bool isAppliedToAllChildren)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x30838C0", Offset = "0x3081EC0", VA = "0x1830838C0")]
	private void OnToggleValueChanged(ChangeEvent<bool> evt)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x3082300", Offset = "0x3080900", VA = "0x183082300", Slot = "11")]
	public override int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3082030", Offset = "0x3080630", VA = "0x183082030", Slot = "12")]
	public override int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x30825F0", Offset = "0x3080BF0", VA = "0x1830825F0", Slot = "28")]
	public virtual bool HasChildren(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x3081020", Offset = "0x307F620", VA = "0x183081020")]
	public bool Exists(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x3082580", Offset = "0x3080B80", VA = "0x183082580")]
	public bool HasChildrenByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x30819E0", Offset = "0x307FFE0", VA = "0x1830819E0")]
	[IteratorStateMachine(typeof(_003CGetChildrenIdsByIndex_003Ed__41))]
	public IEnumerable<int> GetChildrenIdsByIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x30817A0", Offset = "0x307FDA0", VA = "0x1830817A0")]
	public int GetChildIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x3082250", Offset = "0x3080850", VA = "0x183082250")]
	public int GetIndentationDepth(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x3082190", Offset = "0x3080790", VA = "0x183082190")]
	public int GetIndentationDepthByIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "29")]
	public virtual bool CanChangeExpandedState(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x3082DF0", Offset = "0x30813F0", VA = "0x183082DF0")]
	public bool IsExpanded(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x3082CA0", Offset = "0x30812A0", VA = "0x183082CA0")]
	public bool IsExpandedByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x3081080", Offset = "0x307F680", VA = "0x183081080")]
	public void ExpandItemByIndex(int index, bool expandAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x30815F0", Offset = "0x307FBF0", VA = "0x1830815F0")]
	public void ExpandItem(int id, bool expandAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x30809D0", Offset = "0x307EFD0", VA = "0x1830809D0")]
	public void CollapseItemByIndex(int index, bool collapseAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x3080E00", Offset = "0x307F400", VA = "0x183080E00")]
	public void CollapseItem(int id, bool collapseAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x3081210", Offset = "0x307F810", VA = "0x183081210")]
	private void ExpandItemByNode(in HierarchyNode node, bool expandAllChildren, bool refresh)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x3080AA0", Offset = "0x307F0A0", VA = "0x183080AA0")]
	private void CollapseItemByNode(in HierarchyNode node, bool collapseAllChildren, bool refresh)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x3081AE0", Offset = "0x30800E0", VA = "0x183081AE0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void GetExpandedItemIds(List<int> list)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x3082F40", Offset = "0x3081540", VA = "0x183082F40")]
	internal bool IsViewDataKeyEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x3083E10", Offset = "0x3082410", VA = "0x183083E10", Slot = "19")]
	internal override void PreRefresh()
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x3082F00", Offset = "0x3081500", VA = "0x183082F00")]
	private bool IsIndexValid(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x3082B10", Offset = "0x3081110", VA = "0x183082B10")]
	private bool IsChildOf(int childId, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x3083EB0", Offset = "0x30824B0", VA = "0x183083EB0")]
	internal void RaiseItemParentChanged(int id, int newParentId)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x3080EC0", Offset = "0x307F4C0", VA = "0x183080EC0")]
	internal HierarchyNode CreateNode(in HierarchyNode parent)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x3083F50", Offset = "0x3082550", VA = "0x183083F50")]
	internal void UpdateIdToNodeDictionary(int id, in HierarchyNode node, bool isAdd = true)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x3080980", Offset = "0x307EF80", VA = "0x183080980")]
	internal void ClearIdToNodeDictionary()
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3084080", Offset = "0x3082680", VA = "0x183084080")]
	internal void UpdateSortOrder(in HierarchyNode newParent, in HierarchyNode insertedNode, int insertedIndex)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x3083B30", Offset = "0x3082130", VA = "0x183083B30")]
	internal void OnViewDataReadyUpdateNodes()
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x3083EC0", Offset = "0x30824C0", VA = "0x183083EC0")]
	internal void UpdateHierarchy()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x3081F00", Offset = "0x3080500", VA = "0x183081F00")]
	internal HierarchyNode GetHierarchyNodeById(int id)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x3081FA0", Offset = "0x30805A0", VA = "0x183081FA0")]
	internal HierarchyNode GetHierarchyNodeByIndex(int index)
	{
		return default(HierarchyNode);
	}
}
