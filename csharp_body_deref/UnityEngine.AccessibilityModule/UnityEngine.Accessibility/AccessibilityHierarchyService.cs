// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityHierarchyService
// Update status: NEW in this game update
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
		[Address(RVA = "0x2E7BC70", Offset = "0x2E7A270", VA = "0x182E7BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x2E7BCB0", Offset = "0x2E7A2B0", VA = "0x182E7BCB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2E7BA80", Offset = "0x2E7A080", VA = "0x182E7BA80")]
	internal static IReadOnlyList<AccessibilityNode> GetRootNodes()
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x2E7BBB0", Offset = "0x2E7A1B0", VA = "0x182E7BBB0")]
	internal static bool TryGetNode(int id, out AccessibilityNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2E7BAD0", Offset = "0x2E7A0D0", VA = "0x182E7BAD0")]
	internal static bool TryGetNodeAt(float x, float y, out AccessibilityNode node)
	{
		return default(bool);
	}
}
