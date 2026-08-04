// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200047E")]
internal abstract class BaseVisualTreeHierarchyTrackerUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x200047F")]
	private enum State
	{
		[Token(Token = "0x4000D81")]
		Waiting,
		[Token(Token = "0x4000D82")]
		TrackingAddOrMove,
		[Token(Token = "0x4000D83")]
		TrackingRemove
	}

	[Token(Token = "0x4000D7D")]
	[FieldOffset(Offset = "0x20")]
	private State m_State;

	[Token(Token = "0x4000D7E")]
	[FieldOffset(Offset = "0x28")]
	private VisualElement m_CurrentChangeElement;

	[Token(Token = "0x4000D7F")]
	[FieldOffset(Offset = "0x30")]
	private VisualElement m_CurrentChangeParent;

	[Token(Token = "0x6001BE1")]
	protected abstract void OnHierarchyChange(VisualElement ve, HierarchyChangeType type);

	[Token(Token = "0x6001BE2")]
	[Address(RVA = "0x4F79D20", Offset = "0x4F79D20", VA = "0x4F79D20", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001BE3")]
	[Address(RVA = "0x4F7A030", Offset = "0x4F7A030", VA = "0x4F7A030", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001BE4")]
	[Address(RVA = "0x4F79E60", Offset = "0x4F79E60", VA = "0x4F79E60")]
	private void ProcessNewChange(VisualElement ve)
	{
	}

	[Token(Token = "0x6001BE5")]
	[Address(RVA = "0x4F79F90", Offset = "0x4F79F90", VA = "0x4F79F90")]
	private void ProcessAddOrMove(VisualElement ve)
	{
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x4F79F00", Offset = "0x4F79F00", VA = "0x4F79F00")]
	private void ProcessRemove(VisualElement ve)
	{
	}

	[Token(Token = "0x6001BE7")]
	[Address(RVA = "0x4F7A0E0", Offset = "0x4F7A0E0", VA = "0x4F7A0E0")]
	protected BaseVisualTreeHierarchyTrackerUpdater()
	{
	}
}
