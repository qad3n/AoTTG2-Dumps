// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerProfile
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Serializable]
[Token(Token = "0x2000037")]
public class AdaptivePerformanceScalerProfile : AdaptivePerformanceScalerSettings
{
	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private List<AdaptivePerformanceScaler> m_AddedScalers;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0xA8")]
	[Tooltip("Name of the scaler profile.")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x17000087")]
	public string Name
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x2E8CB60", Offset = "0x2E8B160", VA = "0x182E8CB60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public List<AdaptivePerformanceScaler> AddedScalers
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x2E8CB50", Offset = "0x2E8B150", VA = "0x182E8CB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x2E8C7D0", Offset = "0x2E8ADD0", VA = "0x182E8C7D0")]
	internal void EnableAddedScalers()
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x2E8C930", Offset = "0x2E8AF30", VA = "0x182E8C930")]
	internal void RemoveAllAddedScalersFromIndexer()
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x2E8CA80", Offset = "0x2E8B080", VA = "0x182E8CA80")]
	public AdaptivePerformanceScalerProfile()
	{
	}
}
