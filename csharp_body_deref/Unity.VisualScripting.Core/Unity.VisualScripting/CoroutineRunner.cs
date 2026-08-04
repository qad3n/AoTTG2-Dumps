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

[Token(Token = "0x20001A0")]
[Singleton(Name = "VisualScripting CoroutineRunner", Automatic = true, Persistent = true)]
[AddComponentMenu("")]
[DisableAnnotation]
[IncludeInSettings(false)]
public sealed class CoroutineRunner : MonoBehaviour, ISingleton
{
	[Token(Token = "0x170001CB")]
	public static CoroutineRunner instance
	{
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x4D5E110", Offset = "0x4D5E110", VA = "0x4D5E110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x4D5E040", Offset = "0x4D5E040", VA = "0x4D5E040")]
	private void Awake()
	{
	}

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x4D5E0A0", Offset = "0x4D5E0A0", VA = "0x4D5E0A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x4D5E190", Offset = "0x4D5E190", VA = "0x4D5E190")]
	public CoroutineRunner()
	{
	}
}
