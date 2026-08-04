// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeHierarchyFlagsUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x200047C")]
internal class VisualTreeHierarchyFlagsUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x4000D75")]
	[FieldOffset(Offset = "0x20")]
	private uint m_Version;

	[Token(Token = "0x4000D76")]
	[FieldOffset(Offset = "0x24")]
	private uint m_LastVersion;

	[Token(Token = "0x4000D77")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x4000D78")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x17000751")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6001BDA")]
		[Address(RVA = "0x4F79960", Offset = "0x4F79960", VA = "0x4F79960", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x4F799D0", Offset = "0x4F799D0", VA = "0x4F799D0", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x4F79A90", Offset = "0x4F79A90", VA = "0x4F79A90")]
	private static void DirtyHierarchy(VisualElement ve, VisualElementFlags mustDirtyFlags)
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x4F79B70", Offset = "0x4F79B70", VA = "0x4F79B70")]
	private static void DirtyBoundingBoxHierarchy(VisualElement ve)
	{
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x4F79C30", Offset = "0x4F79C30", VA = "0x4F79C30", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x4F79C80", Offset = "0x4F79C80", VA = "0x4F79C80")]
	public VisualTreeHierarchyFlagsUpdater()
	{
	}
}
