// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.CoroutineRunner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Token(Token = "0x170001CE")]
	public static CoroutineRunner instance
	{
		[Token(Token = "0x6001022")]
		[Address(RVA = "0x684A180", Offset = "0x6849180", VA = "0x684A180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x684A0B0", Offset = "0x68490B0", VA = "0x684A0B0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x684A110", Offset = "0x6849110", VA = "0x684A110")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x684A200", Offset = "0x6849200", VA = "0x684A200")]
	public CoroutineRunner()
	{
	}
}
