using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20001A2")]
[Singleton(Name = "VisualScripting CoroutineRunner", Automatic = true, Persistent = true)]
[AddComponentMenu("")]
[DisableAnnotation]
[IncludeInSettings(false)]
public sealed class CoroutineRunner : MonoBehaviour, ISingleton
{
	[Token(Token = "0x170001CB")]
	public static CoroutineRunner instance
	{
		[Token(Token = "0x6001015")]
		[Address(RVA = "0x4A3AE00", Offset = "0x4A3AE00", VA = "0x4A3AE00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x4A3AD30", Offset = "0x4A3AD30", VA = "0x4A3AD30")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x4A3AD90", Offset = "0x4A3AD90", VA = "0x4A3AD90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x4A3AE80", Offset = "0x4A3AE80", VA = "0x4A3AE80")]
	public CoroutineRunner()
	{
	}
}
