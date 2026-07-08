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
	[Address(RVA = "0x4C523F0", Offset = "0x4C523F0", VA = "0x4C523F0", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001BE3")]
	[Address(RVA = "0x4C52700", Offset = "0x4C52700", VA = "0x4C52700", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6001BE4")]
	[Address(RVA = "0x4C52530", Offset = "0x4C52530", VA = "0x4C52530")]
	private void ProcessNewChange(VisualElement ve)
	{
	}

	[Token(Token = "0x6001BE5")]
	[Address(RVA = "0x4C52660", Offset = "0x4C52660", VA = "0x4C52660")]
	private void ProcessAddOrMove(VisualElement ve)
	{
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x4C525D0", Offset = "0x4C525D0", VA = "0x4C525D0")]
	private void ProcessRemove(VisualElement ve)
	{
	}

	[Token(Token = "0x6001BE7")]
	[Address(RVA = "0x4C527B0", Offset = "0x4C527B0", VA = "0x4C527B0")]
	protected BaseVisualTreeHierarchyTrackerUpdater()
	{
	}
}
