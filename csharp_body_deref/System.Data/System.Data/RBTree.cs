using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000073")]
internal abstract class RBTree<K> : IEnumerable
{
	[Token(Token = "0x2000074")]
	private enum NodeColor
	{
		[Token(Token = "0x4000276")]
		red,
		[Token(Token = "0x4000277")]
		black
	}

	[Token(Token = "0x2000075")]
	private struct Node
	{
		[Token(Token = "0x4000278")]
		[FieldOffset(Offset = "0x0")]
		internal int _selfId;

		[Token(Token = "0x4000279")]
		[FieldOffset(Offset = "0x0")]
		internal int _leftId;

		[Token(Token = "0x400027A")]
		[FieldOffset(Offset = "0x0")]
		internal int _rightId;

		[Token(Token = "0x400027B")]
		[FieldOffset(Offset = "0x0")]
		internal int _parentId;

		[Token(Token = "0x400027C")]
		[FieldOffset(Offset = "0x0")]
		internal int _nextId;

		[Token(Token = "0x400027D")]
		[FieldOffset(Offset = "0x0")]
		internal int _subTreeSize;

		[Token(Token = "0x400027E")]
		[FieldOffset(Offset = "0x0")]
		internal K _keyOfNode;

		[Token(Token = "0x400027F")]
		[FieldOffset(Offset = "0x0")]
		internal NodeColor _nodeColor;
	}

	[Token(Token = "0x2000076")]
	private readonly struct NodePath
	{
		[Token(Token = "0x4000280")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _nodeID;

		[Token(Token = "0x4000281")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _mainTreeNodeID;

		[Token(Token = "0x600071E")]
		internal NodePath(int nodeID, int mainTreeNodeID)
		{
		}
	}

	[Token(Token = "0x2000077")]
	private sealed class TreePage
	{
		[Token(Token = "0x4000282")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Node[] _slots;

		[Token(Token = "0x4000283")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int[] _slotMap;

		[Token(Token = "0x4000284")]
		[FieldOffset(Offset = "0x0")]
		private int _inUseCount;

		[Token(Token = "0x4000285")]
		[FieldOffset(Offset = "0x0")]
		private int _pageId;

		[Token(Token = "0x4000286")]
		[FieldOffset(Offset = "0x0")]
		private int _nextFreeSlotLine;

		[Token(Token = "0x17000126")]
		internal int InUseCount
		{
			[Token(Token = "0x6000721")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000722")]
			set
			{
			}
		}

		[Token(Token = "0x17000127")]
		internal int PageId
		{
			[Token(Token = "0x6000723")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000724")]
			set
			{
			}
		}

		[Token(Token = "0x600071F")]
		internal TreePage(int size)
		{
		}

		[Token(Token = "0x6000720")]
		internal int AllocSlot(RBTree<K> tree)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000078")]
	internal struct RBTreeEnumerator : IEnumerator<K>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000287")]
		[FieldOffset(Offset = "0x0")]
		private readonly RBTree<K> _tree;

		[Token(Token = "0x4000288")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x4000289")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x400028A")]
		[FieldOffset(Offset = "0x0")]
		private int _mainTreeNodeId;

		[Token(Token = "0x400028B")]
		[FieldOffset(Offset = "0x0")]
		private K _current;

		[Token(Token = "0x17000128")]
		public K Current
		{
			[Token(Token = "0x6000729")]
			get
			{
				return (K)null;
			}
		}

		[Token(Token = "0x17000129")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600072A")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000725")]
		internal RBTreeEnumerator(RBTree<K> tree)
		{
		}

		[Token(Token = "0x6000726")]
		internal RBTreeEnumerator(RBTree<K> tree, int position)
		{
		}

		[Token(Token = "0x6000727")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000728")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600072B")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x0")]
	private TreePage[] _pageTable;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x0")]
	private int[] _pageTableMap;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x0")]
	private int _inUsePageCount;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x0")]
	private int _nextFreePageLine;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x0")]
	public int root;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x0")]
	private int _inUseNodeCount;

	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x0")]
	private int _inUseSatelliteTreeCount;

	[Token(Token = "0x4000274")]
	[FieldOffset(Offset = "0x0")]
	private readonly TreeAccessMethod _accessMethod;

	[Token(Token = "0x17000123")]
	public int Count
	{
		[Token(Token = "0x60006EA")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000124")]
	public bool HasDuplicates
	{
		[Token(Token = "0x60006EB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000125")]
	public K this[int index]
	{
		[Token(Token = "0x60006F9")]
		get
		{
			return (K)null;
		}
	}

	[Token(Token = "0x60006DF")]
	protected abstract int CompareNode(K record1, K record2);

	[Token(Token = "0x60006E0")]
	protected abstract int CompareSateliteTreeNode(K record1, K record2);

	[Token(Token = "0x60006E1")]
	protected RBTree(TreeAccessMethod accessMethod)
	{
	}

	[Token(Token = "0x60006E2")]
	private void InitTree()
	{
	}

	[Token(Token = "0x60006E3")]
	private void FreePage(TreePage page)
	{
	}

	[Token(Token = "0x60006E4")]
	private TreePage AllocPage(int size)
	{
		return null;
	}

	[Token(Token = "0x60006E5")]
	private void MarkPageFull(TreePage page)
	{
	}

	[Token(Token = "0x60006E6")]
	private void MarkPageFree(TreePage page)
	{
	}

	[Token(Token = "0x60006E7")]
	private static int GetIntValueFromBitMap(uint bitMap)
	{
		return default(int);
	}

	[Token(Token = "0x60006E8")]
	private void FreeNode(int nodeId)
	{
	}

	[Token(Token = "0x60006E9")]
	private int GetIndexOfPageWithFreeSlot(bool allocatedPage)
	{
		return default(int);
	}

	[Token(Token = "0x60006EC")]
	private int GetNewNode(K key)
	{
		return default(int);
	}

	[Token(Token = "0x60006ED")]
	private int Successor(int x_id)
	{
		return default(int);
	}

	[Token(Token = "0x60006EE")]
	private bool Successor(ref int nodeId, ref int mainTreeNodeId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EF")]
	private int Minimum(int x_id)
	{
		return default(int);
	}

	[Token(Token = "0x60006F0")]
	private int LeftRotate(int root_id, int x_id, int mainTreeNode)
	{
		return default(int);
	}

	[Token(Token = "0x60006F1")]
	private int RightRotate(int root_id, int x_id, int mainTreeNode)
	{
		return default(int);
	}

	[Token(Token = "0x60006F2")]
	private int RBInsert(int root_id, int x_id, int mainTreeNodeID, int position, bool append)
	{
		return default(int);
	}

	[Token(Token = "0x60006F3")]
	public void UpdateNodeKey(K currentKey, K newKey)
	{
	}

	[Token(Token = "0x60006F4")]
	public K DeleteByIndex(int i)
	{
		return (K)null;
	}

	[Token(Token = "0x60006F5")]
	public int RBDelete(int z_id)
	{
		return default(int);
	}

	[Token(Token = "0x60006F6")]
	private int RBDeleteX(int root_id, int z_id, int mainTreeNodeID)
	{
		return default(int);
	}

	[Token(Token = "0x60006F7")]
	private int RBDeleteFixup(int root_id, int x_id, int px_id, int mainTreeNodeID)
	{
		return default(int);
	}

	[Token(Token = "0x60006F8")]
	private int SearchSubTree(int root_id, K key)
	{
		return default(int);
	}

	[Token(Token = "0x60006FA")]
	private NodePath GetNodeByKey(K key)
	{
		return default(NodePath);
	}

	[Token(Token = "0x60006FB")]
	public int GetIndexByKey(K key)
	{
		return default(int);
	}

	[Token(Token = "0x60006FC")]
	public int GetIndexByNode(int node)
	{
		return default(int);
	}

	[Token(Token = "0x60006FD")]
	private int GetIndexByNodePath(NodePath path)
	{
		return default(int);
	}

	[Token(Token = "0x60006FE")]
	private int ComputeIndexByNode(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x60006FF")]
	private int ComputeIndexWithSatelliteByNode(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x6000700")]
	private NodePath GetNodeByIndex(int userIndex)
	{
		return default(NodePath);
	}

	[Token(Token = "0x6000701")]
	private int ComputeNodeByIndex(int index, out int satelliteRootId)
	{
		return default(int);
	}

	[Token(Token = "0x6000702")]
	private int ComputeNodeByIndex(int x_id, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000703")]
	public int Insert(K item)
	{
		return default(int);
	}

	[Token(Token = "0x6000704")]
	public int Add(K item)
	{
		return default(int);
	}

	[Token(Token = "0x6000705")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000706")]
	public int IndexOf(int nodeId, K item)
	{
		return default(int);
	}

	[Token(Token = "0x6000707")]
	public int Insert(int position, K item)
	{
		return default(int);
	}

	[Token(Token = "0x6000708")]
	public int InsertAt(int position, K item, bool append)
	{
		return default(int);
	}

	[Token(Token = "0x6000709")]
	public void RemoveAt(int position)
	{
	}

	[Token(Token = "0x600070A")]
	public void Clear()
	{
	}

	[Token(Token = "0x600070B")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600070C")]
	public void CopyTo(K[] array, int index)
	{
	}

	[Token(Token = "0x600070D")]
	private void SetRight(int nodeId, int rightNodeId)
	{
	}

	[Token(Token = "0x600070E")]
	private void SetLeft(int nodeId, int leftNodeId)
	{
	}

	[Token(Token = "0x600070F")]
	private void SetParent(int nodeId, int parentNodeId)
	{
	}

	[Token(Token = "0x6000710")]
	private void SetColor(int nodeId, NodeColor color)
	{
	}

	[Token(Token = "0x6000711")]
	private void SetKey(int nodeId, K key)
	{
	}

	[Token(Token = "0x6000712")]
	private void SetNext(int nodeId, int nextNodeId)
	{
	}

	[Token(Token = "0x6000713")]
	private void SetSubTreeSize(int nodeId, int size)
	{
	}

	[Token(Token = "0x6000714")]
	private void IncreaseSize(int nodeId)
	{
	}

	[Token(Token = "0x6000715")]
	private void RecomputeSize(int nodeId)
	{
	}

	[Token(Token = "0x6000716")]
	private void DecreaseSize(int nodeId)
	{
	}

	[Token(Token = "0x6000717")]
	public int Right(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x6000718")]
	public int Left(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x6000719")]
	public int Parent(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x600071A")]
	private NodeColor color(int nodeId)
	{
		return default(NodeColor);
	}

	[Token(Token = "0x600071B")]
	public int Next(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x600071C")]
	public int SubTreeSize(int nodeId)
	{
		return default(int);
	}

	[Token(Token = "0x600071D")]
	public K Key(int nodeId)
	{
		return (K)null;
	}
}
