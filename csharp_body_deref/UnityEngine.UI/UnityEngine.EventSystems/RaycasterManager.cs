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

[Token(Token = "0x20000C3")]
public static class RaycasterManager
{
	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<BaseRaycaster> s_Raycasters;

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x5102300", Offset = "0x5102300", VA = "0x5102300")]
	internal static void AddRaycaster(BaseRaycaster baseRaycaster)
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x5102440", Offset = "0x5102440", VA = "0x5102440")]
	public static List<BaseRaycaster> GetRaycasters()
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x51024B0", Offset = "0x51024B0", VA = "0x51024B0")]
	internal static void RemoveRaycasters(BaseRaycaster baseRaycaster)
	{
	}
}
