// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeHierarchyFlagsUpdater
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31706B0", Offset = "0x316ECB0", VA = "0x1831706B0", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6002839")]
	[Address(RVA = "0x31703A0", Offset = "0x316E9A0", VA = "0x1831703A0", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x600283A")]
	[Address(RVA = "0x3170360", Offset = "0x316E960", VA = "0x183170360")]
	protected static VisualElementFlags GetChildrenMustDirtyFlags(VisualElement ve, VersionChangeType versionChangeType)
	{
		return default(VisualElementFlags);
	}

	[Token(Token = "0x600283B")]
	[Address(RVA = "0x31701E0", Offset = "0x316E7E0", VA = "0x1831701E0")]
	protected static void DirtyChildrenHierarchy(VisualElement ve, VisualElementFlags mustDirtyFlags)
	{
	}

	[Token(Token = "0x600283C")]
	[Address(RVA = "0x31700F0", Offset = "0x316E6F0", VA = "0x1831700F0")]
	private static void DirtyBoundingBoxHierarchy(VisualElement ve)
	{
	}

	[Token(Token = "0x600283D")]
	[Address(RVA = "0x31702F0", Offset = "0x316E8F0", VA = "0x1831702F0")]
	private static void DirtyParentHierarchy(VisualElement ve, VisualElementFlags flags)
	{
	}

	[Token(Token = "0x600283E")]
	[Address(RVA = "0x3170560", Offset = "0x316EB60", VA = "0x183170560", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x600283F")]
	[Address(RVA = "0x31706A0", Offset = "0x316ECA0", VA = "0x1831706A0")]
	public VisualTreeHierarchyFlagsUpdater()
	{
	}
}
