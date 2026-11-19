// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000558")]
internal abstract class BaseVisualTreeHierarchyTrackerUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x2000559")]
	private enum State
	{
		[Token(Token = "0x400121B")]
		Waiting,
		[Token(Token = "0x400121C")]
		TrackingAddOrMove,
		[Token(Token = "0x400121D")]
		TrackingRemove
	}

	[Token(Token = "0x4001217")]
	[FieldOffset(Offset = "0x28")]
	private State m_State;

	[Token(Token = "0x4001218")]
	[FieldOffset(Offset = "0x30")]
	private VisualElement m_CurrentChangeElement;

	[Token(Token = "0x4001219")]
	[FieldOffset(Offset = "0x38")]
	private VisualElement m_CurrentChangeParent;

	[Token(Token = "0x6002847")]
	protected abstract void OnHierarchyChange(VisualElement ve, HierarchyChangeType type);

	[Token(Token = "0x6002848")]
	[Address(RVA = "0x6B70500", Offset = "0x6B6F500", VA = "0x6B70500", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002849")]
	[Address(RVA = "0x6B70810", Offset = "0x6B6F810", VA = "0x6B70810", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x600284A")]
	[Address(RVA = "0x6B70640", Offset = "0x6B6F640", VA = "0x6B70640")]
	private void ProcessNewChange(VisualElement ve)
	{
	}

	[Token(Token = "0x600284B")]
	[Address(RVA = "0x6B70770", Offset = "0x6B6F770", VA = "0x6B70770")]
	private void ProcessAddOrMove(VisualElement ve)
	{
	}

	[Token(Token = "0x600284C")]
	[Address(RVA = "0x6B706E0", Offset = "0x6B6F6E0", VA = "0x6B706E0")]
	private void ProcessRemove(VisualElement ve)
	{
	}

	[Token(Token = "0x600284D")]
	[Address(RVA = "0x6B708C0", Offset = "0x6B6F8C0", VA = "0x6B708C0")]
	protected BaseVisualTreeHierarchyTrackerUpdater()
	{
	}
}
