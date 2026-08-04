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
	[Token(Token = "0x170001F6")]
	public static VariablesSaver instance
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x4D66480", Offset = "0x4D66480", VA = "0x4D66480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x4D68880", Offset = "0x4D68880", VA = "0x4D68880")]
	private void Awake()
	{
	}

	[Token(Token = "0x600115F")]
	[Address(RVA = "0x4D688E0", Offset = "0x4D688E0", VA = "0x4D688E0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x4D68940", Offset = "0x4D68940", VA = "0x4D68940")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6001161")]
	[Address(RVA = "0x4D68980", Offset = "0x4D68980", VA = "0x4D68980")]
	private void OnApplicationPause(bool isPaused)
	{
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x4D66500", Offset = "0x4D66500", VA = "0x4D66500")]
	public static void Instantiate()
	{
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x4D689C0", Offset = "0x4D689C0", VA = "0x4D689C0")]
	public VariablesSaver()
	{
	}
}
