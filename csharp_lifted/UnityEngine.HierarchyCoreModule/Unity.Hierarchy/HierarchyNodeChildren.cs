// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeChildren
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Hierarchy;

[Token(Token = "0x2000006")]
[DefaultMember("Item")]
public readonly struct HierarchyNodeChildren
{
	[Token(Token = "0x2000007")]
	public struct Enumerator
	{
		[Token(Token = "0x400000D")]
		[FieldOffset(Offset = "0x0")]
		private readonly HierarchyNodeChildren m_Enumerable;

		[Token(Token = "0x400000E")]
		[FieldOffset(Offset = "0x18")]
		private int m_Index;

		[Token(Token = "0x17000002")]
		public unsafe ref readonly HierarchyNode Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600000D")]
			[Address(RVA = "0x696FFB0", Offset = "0x696EFB0", VA = "0x696FFB0")]
			get
			{
				return ref *(HierarchyNode*)null;
			}
		}

		[Token(Token = "0x600000C")]
		[Address(RVA = "0x696FF10", Offset = "0x696EF10", VA = "0x696FF10")]
		internal Enumerator(in HierarchyNodeChildren enumerable)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x6970030", Offset = "0x696F030", VA = "0x6970030")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x0")]
	private readonly Hierarchy m_Hierarchy;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x8")]
	private unsafe readonly HierarchyNode* m_Ptr;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Version;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x14")]
	private readonly int m_Count;

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x696FD50", Offset = "0x696ED50", VA = "0x696FD50")]
	internal HierarchyNodeChildren(Hierarchy hierarchy, IntPtr nodeChildrenPtr)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x696FEE0", Offset = "0x696EEE0", VA = "0x696FEE0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x696FF40", Offset = "0x696EF40", VA = "0x696FF40")]
	private void ThrowIfVersionChanged()
	{
	}
}
