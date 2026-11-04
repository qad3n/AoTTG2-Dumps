// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings
// Update status: NEW in this game update
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
	[SerializeField]
	[Tooltip("Active")]
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
		[Address(RVA = "0x1CC78D0", Offset = "0x1CC5ED0", VA = "0x181CC78D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000085")]
	public float thermalActionDelay
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x15477A0", Offset = "0x1545DA0", VA = "0x1815477A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000086")]
	public float performanceActionDelay
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x2E82BD0", Offset = "0x2E811D0", VA = "0x182E82BD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x2E82BB0", Offset = "0x2E811B0", VA = "0x182E82BB0")]
	public AdaptivePerformanceIndexerSettings()
	{
	}
}
