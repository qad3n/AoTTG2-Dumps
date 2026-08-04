// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.VoiceComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/VoiceComponent.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000016")]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2")]
public abstract class VoiceComponent : MonoBehaviour
{
	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x20")]
	private VoiceComponentImpl impl;

	[Token(Token = "0x1700003A")]
	protected ILogger Logger
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x3F3E6C0", Offset = "0x3F3E6C0", VA = "0x3F3E6C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x3F4CF20", Offset = "0x3F4CF20", VA = "0x3F4CF20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public string Name
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x3F4C850", Offset = "0x3F4C850", VA = "0x3F4C850")]
		set
		{
		}
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3F3E6A0", Offset = "0x3F3E6A0", VA = "0x3F3E6A0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3F3F1D0", Offset = "0x3F3F1D0", VA = "0x3F3F1D0")]
	protected VoiceComponent()
	{
	}
}
