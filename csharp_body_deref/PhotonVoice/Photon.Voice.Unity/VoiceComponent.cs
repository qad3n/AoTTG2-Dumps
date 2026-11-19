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

[Token(Token = "0x2000014")]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2")]
public abstract class VoiceComponent : MonoBehaviour
{
	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x20")]
	private VoiceComponentImpl impl;

	[Token(Token = "0x1700003A")]
	protected ILogger Logger
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x57280D0", Offset = "0x57270D0", VA = "0x57280D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x5736950", Offset = "0x5735950", VA = "0x5736950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public string Name
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x5736280", Offset = "0x5735280", VA = "0x5736280")]
		set
		{
		}
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x57280B0", Offset = "0x57270B0", VA = "0x57280B0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x5728BC0", Offset = "0x5727BC0", VA = "0x5728BC0")]
	protected VoiceComponent()
	{
	}
}
