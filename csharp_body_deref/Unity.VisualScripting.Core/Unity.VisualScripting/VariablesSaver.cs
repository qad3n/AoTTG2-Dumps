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
		[Address(RVA = "0x4A418C0", Offset = "0x4A418C0", VA = "0x4A418C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x4A43CC0", Offset = "0x4A43CC0", VA = "0x4A43CC0")]
	private void Awake()
	{
	}

	[Token(Token = "0x600115F")]
	[Address(RVA = "0x4A43D20", Offset = "0x4A43D20", VA = "0x4A43D20")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x4A43D80", Offset = "0x4A43D80", VA = "0x4A43D80")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6001161")]
	[Address(RVA = "0x4A43DC0", Offset = "0x4A43DC0", VA = "0x4A43DC0")]
	private void OnApplicationPause(bool isPaused)
	{
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x4A41940", Offset = "0x4A41940", VA = "0x4A41940")]
	public static void Instantiate()
	{
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x4A43E00", Offset = "0x4A43E00", VA = "0x4A43E00")]
	public VariablesSaver()
	{
	}
}
