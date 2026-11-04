// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.VariablesSaver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20001DB")]
[Singleton(Name = "VisualScripting SavedVariablesSerializer", Automatic = true, Persistent = true)]
[AddComponentMenu("")]
[DisableAnnotation]
[IncludeInSettings(false)]
public class VariablesSaver : MonoBehaviour, ISingleton
{
	[Token(Token = "0x170001F9")]
	public static VariablesSaver instance
	{
		[Token(Token = "0x600116F")]
		[Address(RVA = "0x2E5B790", Offset = "0x2E59D90", VA = "0x182E5B790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x2E5B620", Offset = "0x2E59C20", VA = "0x182E5B620")]
	private void Awake()
	{
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x2E5B730", Offset = "0x2E59D30", VA = "0x182E5B730")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x2E56730", Offset = "0x2E54D30", VA = "0x182E56730")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x2E5B6E0", Offset = "0x2E59CE0", VA = "0x182E5B6E0")]
	private void OnApplicationPause(bool isPaused)
	{
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x2E5B680", Offset = "0x2E59C80", VA = "0x182E5B680")]
	public static void Instantiate()
	{
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public VariablesSaver()
	{
	}
}
