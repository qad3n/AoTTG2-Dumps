// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.RBTree
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200007D")]
internal abstract class RBTree<K> : IEnumerable
{
	[Token(Token = "0x200007E")]
	private enum NodeColor
	{
		[Token(Token = "0x4000289")]
		red,
		[Token(Token = "0x400028A")]
		black
	}

	[Token(Token = "0x200007F")]
	private struct Node
	{
		[Token(Token = "0x400028B")]
		[FieldOffset(Offset = "0x0")]
		internal int _selfId;

		[Token(Token = "0x400028C")]
		[FieldOffset(Offset = "0x0")]
		internal int _leftId;

		[Token(Token = "0x400028D")]
		[FieldOffset(Offset = "0x0")]
		internal int _rightId;

		[Token(Token = "0x400028E")]
		[FieldOffset(Offset = "0x0")]
		internal int _parentId;

		[Token(Token = "0x400028F")]
		[FieldOffset(Offset = "0x0")]
		internal int _nextId;

		[Token(Token = "0x4000290")]
		[FieldOffset(Offset = "0x0")]
		internal int _subTreeSize;

		[Token(Token = "0x4000291")]
		[FieldOffset(Offset = "0x0")]
		internal K _keyOfNode;

		[Token(Token = "0x4000292")]
		[FieldOffset(Offset = "0x0")]
		internal NodeColor _nodeColor;
	}

	[Token(Token = "0x2000080")]
	private readonly struct NodePath
	{
		[Token(Token = "0x4000293")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _nodeID;

		[Token(Token = "0x4000294")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _mainTreeNodeID;

		[Token(Token = "0x600073D")]
		internal NodePath(int nodeID, int mainTreeNodeID)
		{
		}
	}

	[Token(Token = "0x2000081")]
	private sealed class TreePage
	{
		[Token(Token = "0x4000295")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Node[] _slots;

		[Token(Token = "0x4000296")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int[] _slotMap;

		[Token(Token = "0x4000297")]
		[FieldOffset(Offset = "0x0")]
		private int _inUseCount;

		[Token(Token = "0x4000298")]
		[FieldOffset(Offset = "0x0")]
		private int _pageId;

		[Token(Token = "0x4000299")]
		[FieldOffset(Offset = "0x0")]
		private int _nextFreeSlotLine;

		[Token(Token = "0x17000129")]
		internal int InUseCount
		{
			[Token(Token = "0x6000740")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000741")]
			set
			{
			}
		}

		[Token(Token = "0x1700012A")]
		internal int PageId
		{
			[Token(Token = "0x6000742")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000743")]
			set
			{
			}
		}

		[Token(Token = "0x600073E")]
		internal TreePage(int size)
		{
		}

		[Token(Token = "0x600073F")]
		internal int AllocSlot(RBTree<K> tree)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000082")]
	internal struct RBTreeEnumerator : IEnumerator<K>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400029A")]
		[FieldOffset(Offset = "0x0")]
		private readonly RBTree<K> _tree;

		[Token(Token = "0x400029B")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x400029C")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x400029D")]
		[FieldOffset(Offset = "0x0")]
		private int _mainTreeNodeId;

		[Token(Token = "0x400029E")]
		[FieldOffset(Offset = "0x0")]
		private K _current;

		[Token(Token = "0x1700012B")]
		public K Current
		{
			[Token(Token = "0x6000748")]
			get
			{
				return (K)null;
			}
		}

		[Token(Token = "0x1700012C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000749")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000744")]
		internal RBTreeEnumerator(RBTree<K> tree)
		{
		}

		[Token(Token = "0x6000745")]
		internal RBTreeEnumerator(RBTree<K> tree, int position)
		{
		}

		[Token(Token = "0x6000746")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000747")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600074A")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400027F")]
	[FieldOffset(Offset = "0x0")]
	private TreePage[] _pageTable;

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x0")]
	private int[] _pageTableMap;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x0")]
	private int _inUsePageCount;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x0")]
	private int _nextFreePageLine;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x0")]
	public int root;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x0")]
	private int _inUseNodeCount;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x0")]
	private int _inUseSatelliteTreeCount;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x0")]
	private readonly TreeAccessMethod _accessMethod;

	[Token(Token = "0x17000126")]
	public int Count
	{
		[Token(Token = "0x6000709")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000127")]
	public bool HasDuplicates
	{
		[Token(Token = "0x600070A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000128")]
	public K this[int index]
	{
		[Token(Token = "0x6000718")]
		get
		{
			return (K)null;
		}
	}

	[Token(Token = "0x60006FE")]
	protected abstract int CompareNode(K record1, K record2);

	[Token(Token = "0x60006FF")]
	protected abstract int CompareSateliteTreeNode(K record1, K record2);

	[Token(Token = "0x6000700")]
	protected RBTree(TreeAccessMethod accessMethod)
	{
	}

	[Token(Token = "0x6000701")]
	private void InitTree()
	{
	}

	[Token(Token = "0x6000702")]
	private void FreePage(TreePage page)
	{
	}

	[Token(Token = "0x6000703")]
	private TreePage AllocPage(int size)
	{
		return null;
	}

	[Token(Token = "0x6000704")]
	private void MarkPageFull(TreePage page)
	{
	}

	[Token(Token = "0x6000705")]
	private void MarkPageFree(TreePage page)
	{
	}

	[Token(Token = "0x6000706")]
	private static int GetIntValueFromBitMap(uint bitMap)
	{
		return default(int);
	}

	[Token(Token = "0x6000707")]
	private void FreeNode(int nodeId)
	{
	}

	[Token(Token = "0x6000708")]
	private int GetIndexOfPageWithFreeSlot(bool allocatedPage)
	{
		return default(int);
	}

	[Token(Token = "0x600070B")]
	private int GetNewNode(K key)
	{
		return default(int);
	}

	[Token(Token = "0x600070C")]
	private int Successor(int x_id)
	{
		return default(int);
	}

	[Token(Token = "0x600070D")]
	private bool Successor(ref int nodeId, ref int mainTreeNodeId)
	{
		return default(bool);
	}

	[Token(Token = "0x600070E")]
	private int Minimum(int x_id)
	{
		return default(int);
	}

	[Token(Token = "0x600070F")]
	private int LeftRotate(int root_id, int x_id, int mainTreeNode)
	{
		return default(int);
	}

	[Token(Token = "0x6000710")]
	private int RightRotate(int root_id, int x_id, int mainTreeNode)
	{
		return default(int);
	}

	[Token(Token = "0x6000711")]
	private int RBInsert(int root_id, int x_id, int mainTreeNodeID, int position, bool append)
	{
		return default(int);
	}

	[Token(Token = "0x6000712")]
	public void UpdateNodeKey(K currentKey, K newKey)
	{
	}

	[Token(Token = "0x6000713")]
	public K DeleteByIndex(int i)
	{
		return (K)null;
	}

	[Token(Token = "0x6000714")]
	public int RBDelete(int z_id)
	{
		return default(int);
	}

	[Token(Token = "0x6000715")]
	private int RBDeleteX(int root_id, int z_id, int mainTreeNodeID)
	{
		return default(int);
	}

	[Token(Token = "0x6000716")]
	private int RBDeleteFixup(int root_id, int x_id, int px_id, int mainTreeNodeID)
	{
		return default(int);
	}

	[Token(Token = "0x6000717")]
	private int SearchSubTree(int root_id, K key)
	{
		return default(int);
	}

	[Token(Token = "0x6000719")]
	private NodePath GetNodeByKey(K key)
	{
		return default(NodePath);
	}

	[Token(Token = "0x600071A")]
	public int GetIndexByKey(K key)
	{
		return default(int);
	}

	[Token(Token = "0x600071B")]
	public int GetIndexByNode(int node)
	{
		return default(int);
	}

	[Token(Token = "0x600071C")]
	private int GetIndexByNodePath(NodePath path)
	{
		return default(int);
	}

	[Token(Token = "0x600071D")]
	private int ComputeIndexByNode(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x600071E")]
	private int ComputeIndexWithSatelliteByNode(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x600071F")]
	private NodePath GetNodeByIndex(int userIndex)
	{
		return default(NodePath);
	}

	[Token(Token = "0x6000720")]
	private int ComputeNodeByIndex(int index, out int satelliteRootId)
	{
		return default(int);
	}

	[Token(Token = "0x6000721")]
	private int ComputeNodeByIndex(int x_id, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000722")]
	public int Insert(K item)
	{
		return default(int);
	}

	[Token(Token = "0x6000723")]
	public int Add(K item)
	{
		return default(int);
	}

	[Token(Token = "0x6000724")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000725")]
	public int IndexOf(int nodeId, K item)
	{
		return default(int);
	}

	[Token(Token = "0x6000726")]
	public int Insert(int position, K item)
	{
		return default(int);
	}

	[Token(Token = "0x6000727")]
	public int InsertAt(int position, K item, bool append)
	{
		return default(int);
	}

	[Token(Token = "0x6000728")]
	public void RemoveAt(int position)
	{
	}

	[Token(Token = "0x6000729")]
	public void Clear()
	{
	}

	[Token(Token = "0x600072A")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600072B")]
	public void CopyTo(K[] array, int index)
	{
	}

	[Token(Token = "0x600072C")]
	private void SetRight(int nodeId, int rightNodeId)
	{
	}

	[Token(Token = "0x600072D")]
	private void SetLeft(int nodeId, int leftNodeId)
	{
	}

	[Token(Token = "0x600072E")]
	private void SetParent(int nodeId, int parentNodeId)
	{
	}

	[Token(Token = "0x600072F")]
	private void SetColor(int nodeId, NodeColor color)
	{
	}

	[Token(Token = "0x6000730")]
	private void SetKey(int nodeId, K key)
	{
	}

	[Token(Token = "0x6000731")]
	private void SetNext(int nodeId, int nextNodeId)
	{
	}

	[Token(Token = "0x6000732")]
	private void SetSubTreeSize(int nodeId, int size)
	{
	}

	[Token(Token = "0x6000733")]
	private void IncreaseSize(int nodeId)
	{
	}

	[Token(Token = "0x6000734")]
	private void RecomputeSize(int nodeId)
	{
	}

	[Token(Token = "0x6000735")]
	private void DecreaseSize(int nodeId)
	{
	}

	[Token(Token = "0x6000736")]
	public int Right(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x6000737")]
	public int Left(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x6000738")]
	public int Parent(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x6000739")]
	private NodeColor color(int nodeId)
	{
		return default(NodeColor);
	}

	[Token(Token = "0x600073A")]
	public int Next(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x600073B")]
	public int SubTreeSize(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x600073C")]
	public K Key(int nodeId)
	{
		return (K)null;
	}
}
