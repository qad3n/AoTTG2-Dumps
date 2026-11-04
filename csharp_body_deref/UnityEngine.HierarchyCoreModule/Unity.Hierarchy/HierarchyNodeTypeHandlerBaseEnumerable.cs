// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeTypeHandlerBaseEnumerable
// Update status: NEW in this game update
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
			[Address(RVA = "0x2F7C390", Offset = "0x2F7A990", VA = "0x182F7C390")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x2F7BF30", Offset = "0x2F7A530", VA = "0x182F7BF30")]
		internal Enumerator(Hierarchy hierarchy)
		{
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x2F7BCD0", Offset = "0x2F7A2D0", VA = "0x182F7BCD0", Slot = "4")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x152B020", Offset = "0x1529620", VA = "0x18152B020")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x0")]
	private readonly Hierarchy m_Hierarchy;

	[Token(Token = "0x6000034")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal HierarchyNodeTypeHandlerBaseEnumerable(Hierarchy hierarchy)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2F7DA50", Offset = "0x2F7C050", VA = "0x182F7DA50")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}
}
