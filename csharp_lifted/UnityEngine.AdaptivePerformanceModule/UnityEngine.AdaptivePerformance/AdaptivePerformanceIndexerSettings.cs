// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Serializable]
[Token(Token = "0x2000036")]
public class AdaptivePerformanceIndexerSettings
{
	[Token(Token = "0x40000D7")]
	private const string m_FeatureName = "Indexer";

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x10")]
	[Tooltip("Active")]
	[SerializeField]
	private bool m_Active;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x14")]
	[Tooltip("Thermal Action Delay")]
	[Min(0f)]
	[SerializeField]
	private float m_ThermalActionDelay;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x18")]
	[Min(0f)]
	[SerializeField]
	[Tooltip("Performance Action Delay")]
	private float m_PerformanceActionDelay;

	[Token(Token = "0x17000084")]
	public bool active
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x6887F20", Offset = "0x6886F20", VA = "0x6887F20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000085")]
	public float thermalActionDelay
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x6887750", Offset = "0x6886750", VA = "0x6887750")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000086")]
	public float performanceActionDelay
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x6888FC0", Offset = "0x6887FC0", VA = "0x6888FC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x688BF20", Offset = "0x688AF20", VA = "0x688BF20")]
	public AdaptivePerformanceIndexerSettings()
	{
	}
}
