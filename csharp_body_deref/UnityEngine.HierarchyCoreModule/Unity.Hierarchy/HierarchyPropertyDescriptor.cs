// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyPropertyDescriptor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Hierarchy;

[Token(Token = "0x2000022")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyPropertyDescriptor.h")]
public struct HierarchyPropertyDescriptor
{
	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x0")]
	private int m_Size;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x4")]
	private HierarchyPropertyStorageType m_Type;

	[Token(Token = "0x1700001C")]
	public int Size
	{
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public HierarchyPropertyStorageType Type
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}
}
