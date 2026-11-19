// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerProfile
// Update status: unchanged since the previous dump
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
	[SerializeField]
	[Tooltip("Name of the scaler profile.")]
	private string m_Name;

	[Token(Token = "0x17000087")]
	public string Name
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x688BF40", Offset = "0x688AF40", VA = "0x688BF40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x688BF50", Offset = "0x688AF50", VA = "0x688BF50")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public List<AdaptivePerformanceScaler> AddedScalers
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x6884190", Offset = "0x6883190", VA = "0x6884190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x68841A0", Offset = "0x68831A0", VA = "0x68841A0")]
	internal void EnableAddedScalers()
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x688BF70", Offset = "0x688AF70", VA = "0x688BF70")]
	internal void RemoveAllAddedScalersFromIndexer()
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x688C110", Offset = "0x688B110", VA = "0x688C110")]
	public AdaptivePerformanceScalerProfile()
	{
	}
}
