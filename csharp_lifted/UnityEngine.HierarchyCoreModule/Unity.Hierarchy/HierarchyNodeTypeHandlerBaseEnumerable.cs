// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeTypeHandlerBaseEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Hierarchy;

[Token(Token = "0x200000C")]
public readonly struct HierarchyNodeTypeHandlerBaseEnumerable
{
	[Token(Token = "0x200000D")]
	public struct Enumerator : IDisposable
	{
		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x0")]
		private readonly IntPtr[] m_Handlers;

		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x8")]
		private readonly int m_Count;

		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0xC")]
		private int m_Index;

		[Token(Token = "0x17000006")]
		public HierarchyNodeTypeHandlerBase Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000038")]
			[Address(RVA = "0x69717F0", Offset = "0x69707F0", VA = "0x69717F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x69712B0", Offset = "0x69702B0", VA = "0x69712B0")]
		internal Enumerator(Hierarchy hierarchy)
		{
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x6971680", Offset = "0x6970680", VA = "0x6971680", Slot = "4")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x6971860", Offset = "0x6970860", VA = "0x6971860")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x0")]
	private readonly Hierarchy m_Hierarchy;

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x6971270", Offset = "0x6970270", VA = "0x6971270")]
	internal HierarchyNodeTypeHandlerBaseEnumerable(Hierarchy hierarchy)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x6971280", Offset = "0x6970280", VA = "0x6971280")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}
}
