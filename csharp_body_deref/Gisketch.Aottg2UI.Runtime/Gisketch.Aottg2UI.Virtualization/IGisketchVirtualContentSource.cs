// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.IGisketchVirtualContentSource
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x2000011")]
public interface IGisketchVirtualContentSource
{
	[Token(Token = "0x17000017")]
	int ItemCount
	{
		[Token(Token = "0x60000A2")]
		get;
	}

	[Token(Token = "0x17000018")]
	GisketchVirtualContentMetrics Metrics
	{
		[Token(Token = "0x60000A3")]
		get;
	}

	[Token(Token = "0x60000A4")]
	string ItemId(int itemIndex);

	[Token(Token = "0x60000A5")]
	GameObject CreateSlot(Transform parent, int slotIndex);

	[Token(Token = "0x60000A6")]
	void BindSlot(GameObject slot, int itemIndex);

	[Token(Token = "0x60000A7")]
	void UnbindSlot(GameObject slot);

	[Token(Token = "0x60000A8")]
	bool CanRecycleSlot(GameObject slot);

	[Token(Token = "0x60000A9")]
	bool TryGetSearchTargetItemIndex(string targetId, out int itemIndex);

	[Token(Token = "0x60000AA")]
	bool TryResolveSearchTarget(string targetId, int itemIndex, GameObject slot, out GameObject target);
}
