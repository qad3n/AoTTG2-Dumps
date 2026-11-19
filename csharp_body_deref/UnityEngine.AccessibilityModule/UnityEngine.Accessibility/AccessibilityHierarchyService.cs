// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityHierarchyService
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Accessibility;

[Token(Token = "0x2000012")]
internal static class AccessibilityHierarchyService
{
	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x0")]
	private static AccessibilityHierarchy s_ActiveHierarchy;

	[Token(Token = "0x1700001C")]
	internal static AccessibilityHierarchy activeHierarchy
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x687B2E0", Offset = "0x687A2E0", VA = "0x687B2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x6879B80", Offset = "0x6878B80", VA = "0x6879B80")]
		set
		{
		}
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x6877330", Offset = "0x6876330", VA = "0x6877330")]
	internal static IReadOnlyList<AccessibilityNode> GetRootNodes()
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x68774A0", Offset = "0x68764A0", VA = "0x68774A0")]
	internal static bool TryGetNode(int id, out AccessibilityNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x6877A20", Offset = "0x6876A20", VA = "0x6877A20")]
	internal static bool TryGetNodeAt(float x, float y, out AccessibilityNode node)
	{
		return default(bool);
	}
}
