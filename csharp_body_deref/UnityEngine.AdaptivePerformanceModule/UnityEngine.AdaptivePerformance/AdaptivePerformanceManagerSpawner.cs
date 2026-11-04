// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSpawner
// Update status: NEW in this game update
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
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2E85880", Offset = "0x2E83E80", VA = "0x182E85880")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2E85350", Offset = "0x2E83950", VA = "0x182E85350")]
	public void Initialize(bool isCheckingProvider)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2E852B0", Offset = "0x2E838B0", VA = "0x182E852B0")]
	public void Deinitialize()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2E85680", Offset = "0x2E83C80", VA = "0x182E85680")]
	private void InstallScalers(AdaptivePerformanceScalerProfile profile, IAdaptivePerformanceSettings settings)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	public AdaptivePerformanceManagerSpawner()
	{
	}
}
