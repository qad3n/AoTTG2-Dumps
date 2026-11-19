// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyPropertyDescriptor
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6974680", Offset = "0x6973680", VA = "0x6974680")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public HierarchyPropertyStorageType Type
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x6974690", Offset = "0x6973690", VA = "0x6974690")]
		set
		{
		}
	}
}
