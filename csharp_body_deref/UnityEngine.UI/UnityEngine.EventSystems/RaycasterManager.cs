// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.RaycasterManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C6")]
public static class RaycasterManager
{
	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<BaseRaycaster> s_Raycasters;

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x32FF240", Offset = "0x32FD840", VA = "0x1832FF240")]
	internal static void AddRaycaster(BaseRaycaster baseRaycaster)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x32FF370", Offset = "0x32FD970", VA = "0x1832FF370")]
	public static List<BaseRaycaster> GetRaycasters()
	{
		return null;
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x32FF3C0", Offset = "0x32FD9C0", VA = "0x1832FF3C0")]
	internal static void RemoveRaycasters(BaseRaycaster baseRaycaster)
	{
	}
}
