using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C4")]
public static class RaycasterManager
{
	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<BaseRaycaster> s_Raycasters;

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x4DDAB10", Offset = "0x4DDAB10", VA = "0x4DDAB10")]
	internal static void AddRaycaster(BaseRaycaster baseRaycaster)
	{
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x4DDAC50", Offset = "0x4DDAC50", VA = "0x4DDAC50")]
	public static List<BaseRaycaster> GetRaycasters()
	{
		return null;
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x4DDACC0", Offset = "0x4DDACC0", VA = "0x4DDACC0")]
	internal static void RemoveRaycasters(BaseRaycaster baseRaycaster)
	{
	}
}
