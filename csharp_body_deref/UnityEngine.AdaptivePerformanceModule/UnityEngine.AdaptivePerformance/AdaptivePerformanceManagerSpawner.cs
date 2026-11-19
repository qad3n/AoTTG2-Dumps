// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSpawner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000007")]
internal class AdaptivePerformanceManagerSpawner : ScriptableObject
{
	[Token(Token = "0x4000027")]
	public const string AdaptivePerformanceManagerObjectName = "AdaptivePerformanceManager";

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x18")]
	private GameObject m_ManagerGameObject;

	[Token(Token = "0x17000019")]
	public GameObject ManagerGameObject
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x687B8F0", Offset = "0x687A8F0", VA = "0x687B8F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x6883DE0", Offset = "0x6882DE0", VA = "0x6883DE0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x687B900", Offset = "0x687A900", VA = "0x687B900")]
	public void Initialize(bool isCheckingProvider)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x6883E70", Offset = "0x6882E70", VA = "0x6883E70")]
	public void Deinitialize()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x6883FA0", Offset = "0x6882FA0", VA = "0x6883FA0")]
	private void InstallScalers(AdaptivePerformanceScalerProfile profile, IAdaptivePerformanceSettings settings)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x68845A0", Offset = "0x68835A0", VA = "0x68845A0")]
	public AdaptivePerformanceManagerSpawner()
	{
	}
}
