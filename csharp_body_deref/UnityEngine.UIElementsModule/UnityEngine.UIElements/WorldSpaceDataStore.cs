// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.WorldSpaceDataStore
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000566")]
internal static class WorldSpaceDataStore
{
	[Token(Token = "0x4001257")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<uint, WorldSpaceData> m_WorldSpaceData;

	[Token(Token = "0x60028A3")]
	[Address(RVA = "0x3175E90", Offset = "0x3174490", VA = "0x183175E90")]
	public static void SetWorldSpaceData(VisualElement ve, WorldSpaceData data)
	{
	}

	[Token(Token = "0x60028A4")]
	[Address(RVA = "0x3175D50", Offset = "0x3174350", VA = "0x183175D50")]
	public static WorldSpaceData GetWorldSpaceData(VisualElement ve)
	{
		return default(WorldSpaceData);
	}

	[Token(Token = "0x60028A5")]
	[Address(RVA = "0x3175C20", Offset = "0x3174220", VA = "0x183175C20")]
	public static void ClearWorldSpaceData(VisualElement ve)
	{
	}

	[Token(Token = "0x60028A6")]
	[Address(RVA = "0x31759D0", Offset = "0x3173FD0", VA = "0x1831759D0")]
	public static void ClearLocalBounds3DData(VisualElement ve)
	{
	}
}
