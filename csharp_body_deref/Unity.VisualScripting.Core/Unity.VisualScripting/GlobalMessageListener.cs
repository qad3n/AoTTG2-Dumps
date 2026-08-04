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
	[Token(Token = "0x600040F")]
	[Address(RVA = "0x4CB4780", Offset = "0x4CB4780", VA = "0x4CB4780")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4CB48A0", Offset = "0x4CB48A0", VA = "0x4CB48A0")]
	private void OnApplicationFocus(bool focus)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x4CB49D0", Offset = "0x4CB49D0", VA = "0x4CB49D0")]
	private void OnApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x4CB4B00", Offset = "0x4CB4B00", VA = "0x4CB4B00")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x4CB4C20", Offset = "0x4CB4C20", VA = "0x4CB4C20")]
	public static void Require()
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x4CB4CA0", Offset = "0x4CB4CA0", VA = "0x4CB4CA0")]
	public GlobalMessageListener()
	{
	}
}
