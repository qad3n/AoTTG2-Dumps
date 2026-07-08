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
	[Address(RVA = "0x498FBB0", Offset = "0x498FBB0", VA = "0x498FBB0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x498FCD0", Offset = "0x498FCD0", VA = "0x498FCD0")]
	private void OnApplicationFocus(bool focus)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x498FE00", Offset = "0x498FE00", VA = "0x498FE00")]
	private void OnApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x498FF30", Offset = "0x498FF30", VA = "0x498FF30")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x4990050", Offset = "0x4990050", VA = "0x4990050")]
	public static void Require()
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x49900D0", Offset = "0x49900D0", VA = "0x49900D0")]
	public GlobalMessageListener()
	{
	}
}
