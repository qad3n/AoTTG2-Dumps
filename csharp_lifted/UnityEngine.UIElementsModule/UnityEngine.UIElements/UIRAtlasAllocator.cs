// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRAtlasAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002C8")]
internal class UIRAtlasAllocator : IDisposable
{
	[Token(Token = "0x20002C9")]
	private class Row
	{
		[Token(Token = "0x4000ABE")]
		[FieldOffset(Offset = "0x0")]
		private static ObjectPool<Row> s_Pool;

		[Token(Token = "0x4000AC3")]
		[FieldOffset(Offset = "0x20")]
		public int Cursor;

		[Token(Token = "0x170003DB")]
		public int offsetX
		{
			[Token(Token = "0x60012EA")]
			[Address(RVA = "0x6CBC5C0", Offset = "0x6CBB5C0", VA = "0x6CBC5C0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60012EB")]
			[Address(RVA = "0x6CBC5D0", Offset = "0x6CBB5D0", VA = "0x6CBC5D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170003DC")]
		public int offsetY
		{
			[Token(Token = "0x60012EC")]
			[Address(RVA = "0x6CBC5E0", Offset = "0x6CBB5E0", VA = "0x6CBC5E0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60012ED")]
			[Address(RVA = "0x6CBC5F0", Offset = "0x6CBB5F0", VA = "0x6CBC5F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170003DD")]
		public int width
		{
			[Token(Token = "0x60012EE")]
			[Address(RVA = "0x6CBC600", Offset = "0x6CBB600", VA = "0x6CBC600")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60012EF")]
			[Address(RVA = "0x6CBC610", Offset = "0x6CBB610", VA = "0x6CBC610")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170003DE")]
		private int height
		{
			[Token(Token = "0x60012F0")]
			[Address(RVA = "0x6CBC620", Offset = "0x6CBB620", VA = "0x6CBC620")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60012F1")]
		[Address(RVA = "0x6CBC340", Offset = "0x6CBB340", VA = "0x6CBC340")]
		public static Row Acquire(int offsetX, int offsetY, int width, int height)
		{
			return null;
		}

		[Token(Token = "0x60012F2")]
		[Address(RVA = "0x6CBB4F0", Offset = "0x6CBA4F0", VA = "0x6CBB4F0")]
		public void Release()
		{
		}

		[Token(Token = "0x60012F3")]
		[Address(RVA = "0x6CBC630", Offset = "0x6CBB630", VA = "0x6CBC630")]
		public Row()
		{
		}
	}

	[Token(Token = "0x20002CB")]
	private class AreaNode
	{
		[Token(Token = "0x4000AC5")]
		[FieldOffset(Offset = "0x0")]
		private static ObjectPool<AreaNode> s_Pool;

		[Token(Token = "0x4000AC6")]
		[FieldOffset(Offset = "0x10")]
		public RectInt rect;

		[Token(Token = "0x4000AC7")]
		[FieldOffset(Offset = "0x20")]
		public AreaNode previous;

		[Token(Token = "0x4000AC8")]
		[FieldOffset(Offset = "0x28")]
		public AreaNode next;

		[Token(Token = "0x60012F8")]
		[Address(RVA = "0x6CBBA00", Offset = "0x6CBAA00", VA = "0x6CBBA00")]
		public static AreaNode Acquire(RectInt rect)
		{
			return null;
		}

		[Token(Token = "0x60012F9")]
		[Address(RVA = "0x6CBB5A0", Offset = "0x6CBA5A0", VA = "0x6CBB5A0")]
		public void Release()
		{
		}

		[Token(Token = "0x60012FA")]
		[Address(RVA = "0x6CBC410", Offset = "0x6CBB410", VA = "0x6CBC410")]
		public void RemoveFromChain()
		{
		}

		[Token(Token = "0x60012FB")]
		[Address(RVA = "0x6CBC480", Offset = "0x6CBB480", VA = "0x6CBC480")]
		public void AddAfter(AreaNode previous)
		{
		}

		[Token(Token = "0x60012FC")]
		[Address(RVA = "0x6CBC810", Offset = "0x6CBB810", VA = "0x6CBC810")]
		public AreaNode()
		{
		}
	}

	[Token(Token = "0x4000AB8")]
	[FieldOffset(Offset = "0x30")]
	private AreaNode m_FirstUnpartitionedArea;

	[Token(Token = "0x4000AB9")]
	[FieldOffset(Offset = "0x38")]
	private Row[] m_OpenRows;

	[Token(Token = "0x4000ABA")]
	[FieldOffset(Offset = "0x40")]
	private int m_1SidePadding;

	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0x44")]
	private int m_2SidePadding;

	[Token(Token = "0x4000ABC")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_MarkerTryAllocate;

	[Token(Token = "0x170003D3")]
	public int maxAtlasSize
	{
		[Token(Token = "0x60012D5")]
		[Address(RVA = "0x6CBB1C0", Offset = "0x6CBA1C0", VA = "0x6CBB1C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D4")]
	public int maxImageWidth
	{
		[Token(Token = "0x60012D6")]
		[Address(RVA = "0x6CBB1D0", Offset = "0x6CBA1D0", VA = "0x6CBB1D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D5")]
	public int maxImageHeight
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x6CBB1E0", Offset = "0x6CBA1E0", VA = "0x6CBB1E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D6")]
	public int virtualWidth
	{
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0x6CBB1F0", Offset = "0x6CBA1F0", VA = "0x6CBB1F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x6CBB200", Offset = "0x6CBA200", VA = "0x6CBB200")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003D7")]
	public int virtualHeight
	{
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x6CBB210", Offset = "0x6CBA210", VA = "0x6CBB210")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x6CBB220", Offset = "0x6CBA220", VA = "0x6CBB220")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public int physicalWidth
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x6CBB230", Offset = "0x6CBA230", VA = "0x6CBB230")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x6CBB240", Offset = "0x6CBA240", VA = "0x6CBB240")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003D9")]
	public int physicalHeight
	{
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0x6CBB250", Offset = "0x6CBA250", VA = "0x6CBB250")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x6CBB260", Offset = "0x6CBA260", VA = "0x6CBB260")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003DA")]
	protected bool disposed
	{
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x6CBB270", Offset = "0x6CBA270", VA = "0x6CBB270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x6CBB280", Offset = "0x6CBA280", VA = "0x6CBB280")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x6CBB290", Offset = "0x6CBA290", VA = "0x6CBB290", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x6CBB300", Offset = "0x6CBA300", VA = "0x6CBB300", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x6CBB640", Offset = "0x6CBA640", VA = "0x6CBB640")]
	private static int GetLog2OfNextPower(int n)
	{
		return default(int);
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x6CBB7D0", Offset = "0x6CBA7D0", VA = "0x6CBB7D0")]
	public UIRAtlasAllocator(int initialAtlasSize, int maxAtlasSize, int sidePadding = 1)
	{
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x6CBBC20", Offset = "0x6CBAC20", VA = "0x6CBBC20")]
	public bool TryAllocate(int width, int height, out RectInt location)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x6CBBFB0", Offset = "0x6CBAFB0", VA = "0x6CBBFB0")]
	private bool TryPartitionArea(AreaNode areaNode, int rowIndex, int rowHeight, int minWidth)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x6CBBAE0", Offset = "0x6CBAAE0", VA = "0x6CBBAE0")]
	private void BuildAreas()
	{
	}
}
