// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.IGisketchVirtualScrollSource
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x2000012")]
public interface IGisketchVirtualScrollSource
{
	[Token(Token = "0x17000019")]
	int ItemCount
	{
		[Token(Token = "0x60000AB")]
		get;
	}

	[Token(Token = "0x1700001A")]
	GisketchVirtualScrollMetrics Metrics
	{
		[Token(Token = "0x60000AC")]
		get;
	}

	[Token(Token = "0x60000AD")]
	string ItemId(int itemIndex);

	[Token(Token = "0x60000AE")]
	GameObject CreateItem(Transform parent, int slotIndex);

	[Token(Token = "0x60000AF")]
	void BindItem(GameObject item, int itemIndex);

	[Token(Token = "0x60000B0")]
	void UnbindItem(GameObject item);

	[Token(Token = "0x60000B1")]
	bool CanRecycleItem(GameObject item);

	[Token(Token = "0x60000B2")]
	bool TryGetSearchTargetItemIndex(string targetId, out int itemIndex);

	[Token(Token = "0x60000B3")]
	bool TryResolveSearchTarget(string targetId, int itemIndex, GameObject item, out GameObject target);
}
