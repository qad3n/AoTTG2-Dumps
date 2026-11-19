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
	[Address(RVA = "0x67A33F0", Offset = "0x67A23F0", VA = "0x67A33F0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x67A34F0", Offset = "0x67A24F0", VA = "0x67A34F0")]
	private void OnApplicationFocus(bool focus)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x67A3610", Offset = "0x67A2610", VA = "0x67A3610")]
	private void OnApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x67A3730", Offset = "0x67A2730", VA = "0x67A3730")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x67A3830", Offset = "0x67A2830", VA = "0x67A3830")]
	public static void Require()
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x67A38B0", Offset = "0x67A28B0", VA = "0x67A38B0")]
	public GlobalMessageListener()
	{
	}
}
