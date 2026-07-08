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
		[Address(RVA = "0x4C52030", Offset = "0x4C52030", VA = "0x4C52030", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x4C520A0", Offset = "0x4C520A0", VA = "0x4C520A0", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x4C52160", Offset = "0x4C52160", VA = "0x4C52160")]
	private static void DirtyHierarchy(VisualElement ve, VisualElementFlags mustDirtyFlags)
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x4C52240", Offset = "0x4C52240", VA = "0x4C52240")]
	private static void DirtyBoundingBoxHierarchy(VisualElement ve)
	{
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x4C52300", Offset = "0x4C52300", VA = "0x4C52300", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x4C52350", Offset = "0x4C52350", VA = "0x4C52350")]
	public VisualTreeHierarchyFlagsUpdater()
	{
	}
}
