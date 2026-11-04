// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GlobalMessageListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000091")]
[Singleton(Name = "VisualScripting GlobalEventListener", Automatic = true, Persistent = true)]
[DisableAnnotation]
[AddComponentMenu("")]
[IncludeInSettings(false)]
[TypeIcon(typeof(MessageListener))]
public sealed class GlobalMessageListener : MonoBehaviour, ISingleton
{
	[Token(Token = "0x6000419")]
	[Address(RVA = "0x2DA7F80", Offset = "0x2DA6580", VA = "0x182DA7F80")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x2DA7C70", Offset = "0x2DA6270", VA = "0x182DA7C70")]
	private void OnApplicationFocus(bool focus)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x2DA7D80", Offset = "0x2DA6380", VA = "0x182DA7D80")]
	private void OnApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x2DA7E90", Offset = "0x2DA6490", VA = "0x182DA7E90")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x2DA8070", Offset = "0x2DA6670", VA = "0x182DA8070")]
	public static void Require()
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GlobalMessageListener()
	{
	}
}
