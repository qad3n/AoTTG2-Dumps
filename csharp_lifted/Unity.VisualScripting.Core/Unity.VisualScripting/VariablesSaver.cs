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
		[Address(RVA = "0x68503C0", Offset = "0x684F3C0", VA = "0x68503C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x68527C0", Offset = "0x68517C0", VA = "0x68527C0")]
	private void Awake()
	{
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x6852820", Offset = "0x6851820", VA = "0x6852820")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x6852880", Offset = "0x6851880", VA = "0x6852880")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x68528C0", Offset = "0x68518C0", VA = "0x68528C0")]
	private void OnApplicationPause(bool isPaused)
	{
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x6850440", Offset = "0x684F440", VA = "0x6850440")]
	public static void Instantiate()
	{
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x6852900", Offset = "0x6851900", VA = "0x6852900")]
	public VariablesSaver()
	{
	}
}
