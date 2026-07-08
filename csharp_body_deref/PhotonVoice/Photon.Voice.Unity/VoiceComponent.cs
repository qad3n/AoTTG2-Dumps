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
		[Address(RVA = "0x3C4C110", Offset = "0x3C4C110", VA = "0x3C4C110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x3C5A970", Offset = "0x3C5A970", VA = "0x3C5A970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public string Name
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x3C5A2A0", Offset = "0x3C5A2A0", VA = "0x3C5A2A0")]
		set
		{
		}
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3C4C0F0", Offset = "0x3C4C0F0", VA = "0x3C4C0F0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3C4CC20", Offset = "0x3C4CC20", VA = "0x3C4CC20")]
	protected VoiceComponent()
	{
	}
}
