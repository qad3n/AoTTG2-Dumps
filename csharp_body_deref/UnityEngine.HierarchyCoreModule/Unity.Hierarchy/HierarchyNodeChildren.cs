// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeChildren
// Update status: NEW in this game update
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
			[Address(RVA = "0x2F7B4B0", Offset = "0x2F79AB0", VA = "0x182F7B4B0")]
			get
			{
				return ref *(HierarchyNode*)null;
			}
		}

		[Token(Token = "0x600000C")]
		[Address(RVA = "0x2F7C270", Offset = "0x2F7A870", VA = "0x182F7C270")]
		internal Enumerator(in HierarchyNodeChildren enumerable)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x2F7BD50", Offset = "0x2F7A350", VA = "0x182F7BD50")]
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
	[Address(RVA = "0x2F7D8D0", Offset = "0x2F7BED0", VA = "0x182F7D8D0")]
	internal HierarchyNodeChildren(Hierarchy hierarchy, IntPtr nodeChildrenPtr)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2F7D890", Offset = "0x2F7BE90", VA = "0x182F7D890")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x2F7B680", Offset = "0x2F79C80", VA = "0x182F7B680")]
	private void ThrowIfVersionChanged()
	{
	}
}
