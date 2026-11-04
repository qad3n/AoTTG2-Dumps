// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeWorldSpaceHierarchyFlagsUpdater
// Update status: NEW in this game update
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
	[Address(RVA = "0x3175770", Offset = "0x3173D70", VA = "0x183175770", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002842")]
	[Address(RVA = "0x3175740", Offset = "0x3173D40", VA = "0x183175740")]
	private static VisualElementFlags GetParentMustDirtyFlags(VisualElement ve)
	{
		return default(VisualElementFlags);
	}

	[Token(Token = "0x6002843")]
	[Address(RVA = "0x31754E0", Offset = "0x3173AE0", VA = "0x1831754E0")]
	private static void DirtyBoundingBoxHierarchy(VisualElement ve)
	{
	}

	[Token(Token = "0x6002844")]
	[Address(RVA = "0x3175660", Offset = "0x3173C60", VA = "0x183175660")]
	private static void DirtyParentHierarchy(VisualElement ve, VisualElementFlags flags)
	{
	}

	[Token(Token = "0x6002845")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6002846")]
	[Address(RVA = "0x3175980", Offset = "0x3173F80", VA = "0x183175980")]
	public VisualTreeWorldSpaceHierarchyFlagsUpdater()
	{
	}
}
