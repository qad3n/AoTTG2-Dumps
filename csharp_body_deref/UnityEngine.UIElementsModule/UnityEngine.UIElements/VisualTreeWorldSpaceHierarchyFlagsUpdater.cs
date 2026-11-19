// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeWorldSpaceHierarchyFlagsUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000556")]
internal class VisualTreeWorldSpaceHierarchyFlagsUpdater : VisualTreeHierarchyFlagsUpdater
{
	[Token(Token = "0x6002841")]
	[Address(RVA = "0x6B70240", Offset = "0x6B6F240", VA = "0x6B70240", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002842")]
	[Address(RVA = "0x6B703A0", Offset = "0x6B6F3A0", VA = "0x6B703A0")]
	private static VisualElementFlags GetParentMustDirtyFlags(VisualElement ve)
	{
		return default(VisualElementFlags);
	}

	[Token(Token = "0x6002843")]
	[Address(RVA = "0x6B702E0", Offset = "0x6B6F2E0", VA = "0x6B702E0")]
	private static void DirtyBoundingBoxHierarchy(VisualElement ve)
	{
	}

	[Token(Token = "0x6002844")]
	[Address(RVA = "0x6B703C0", Offset = "0x6B6F3C0", VA = "0x6B703C0")]
	private static void DirtyParentHierarchy(VisualElement ve, VisualElementFlags flags)
	{
	}

	[Token(Token = "0x6002845")]
	[Address(RVA = "0x6B704A0", Offset = "0x6B6F4A0", VA = "0x6B704A0", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6002846")]
	[Address(RVA = "0x6B704B0", Offset = "0x6B6F4B0", VA = "0x6B704B0")]
	public VisualTreeWorldSpaceHierarchyFlagsUpdater()
	{
	}
}
