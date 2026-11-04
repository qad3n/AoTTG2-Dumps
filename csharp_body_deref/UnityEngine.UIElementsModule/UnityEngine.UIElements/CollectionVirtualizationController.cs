// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CollectionVirtualizationController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000061")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEngine.HierarchyModule" })]
internal abstract class CollectionVirtualizationController
{
	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x10")]
	protected readonly ScrollView m_ScrollView;

	[Token(Token = "0x17000073")]
	public abstract int firstVisibleIndex
	{
		[Token(Token = "0x60002A8")]
		get;
		[Token(Token = "0x60002A9")]
		protected set;
	}

	[Token(Token = "0x17000074")]
	public abstract int visibleItemCount
	{
		[Token(Token = "0x60002AA")]
		get;
	}

	[Token(Token = "0x17000075")]
	public abstract IEnumerable<ReusableCollectionItem> activeItems
	{
		[Token(Token = "0x60002B6")]
		get;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	protected CollectionVirtualizationController(ScrollView scrollView)
	{
	}

	[Token(Token = "0x60002AC")]
	public abstract void Refresh(bool rebuild);

	[Token(Token = "0x60002AD")]
	public abstract void ScrollToItem(int id);

	[Token(Token = "0x60002AE")]
	public abstract void Resize(Vector2 size);

	[Token(Token = "0x60002AF")]
	public abstract void OnScroll(Vector2 offset);

	[Token(Token = "0x60002B0")]
	public abstract int GetIndexFromPosition(Vector2 position);

	[Token(Token = "0x60002B1")]
	public abstract float GetExpectedItemHeight(int index);

	[Token(Token = "0x60002B2")]
	public abstract float GetExpectedContentHeight();

	[Token(Token = "0x60002B3")]
	public abstract void OnFocusIn(VisualElement leafTarget);

	[Token(Token = "0x60002B4")]
	public abstract void OnFocusOut(VisualElement willFocus);

	[Token(Token = "0x60002B5")]
	public abstract void UpdateBackground();

	[Token(Token = "0x60002B7")]
	internal abstract void StartDragItem(ReusableCollectionItem item);

	[Token(Token = "0x60002B8")]
	internal abstract void EndDrag(int dropIndex);

	[Token(Token = "0x60002B9")]
	public abstract void UnbindAll();
}
