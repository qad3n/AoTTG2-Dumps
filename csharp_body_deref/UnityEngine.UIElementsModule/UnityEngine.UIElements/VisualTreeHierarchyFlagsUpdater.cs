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

[Token(Token = "0x2000555")]
internal class VisualTreeHierarchyFlagsUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x400120D")]
	[FieldOffset(Offset = "0x28")]
	private uint m_Version;

	[Token(Token = "0x400120E")]
	[FieldOffset(Offset = "0x2C")]
	private uint m_LastVersion;

	[Token(Token = "0x400120F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x4001210")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x17000A38")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6002838")]
		[Address(RVA = "0x6B6FD60", Offset = "0x6B6ED60", VA = "0x6B6FD60", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6002839")]
	[Address(RVA = "0x6B6FDD0", Offset = "0x6B6EDD0", VA = "0x6B6FDD0", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x600283A")]
	[Address(RVA = "0x6B6FE90", Offset = "0x6B6EE90", VA = "0x6B6FE90")]
	protected static VisualElementFlags GetChildrenMustDirtyFlags(VisualElement ve, VersionChangeType versionChangeType)
	{
		return default(VisualElementFlags);
	}

	[Token(Token = "0x600283B")]
	[Address(RVA = "0x6B6FEC0", Offset = "0x6B6EEC0", VA = "0x6B6FEC0")]
	protected static void DirtyChildrenHierarchy(VisualElement ve, VisualElementFlags mustDirtyFlags)
	{
	}

	[Token(Token = "0x600283C")]
	[Address(RVA = "0x6B6FFB0", Offset = "0x6B6EFB0", VA = "0x6B6FFB0")]
	private static void DirtyBoundingBoxHierarchy(VisualElement ve)
	{
	}

	[Token(Token = "0x600283D")]
	[Address(RVA = "0x6B700A0", Offset = "0x6B6F0A0", VA = "0x6B700A0")]
	private static void DirtyParentHierarchy(VisualElement ve, VisualElementFlags flags)
	{
	}

	[Token(Token = "0x600283E")]
	[Address(RVA = "0x6B70110", Offset = "0x6B6F110", VA = "0x6B70110", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x600283F")]
	[Address(RVA = "0x6B701A0", Offset = "0x6B6F1A0", VA = "0x6B701A0")]
	public VisualTreeHierarchyFlagsUpdater()
	{
	}
}
