using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200001D")]
[RequireComponent(typeof(Recorder))]
public class MicAmplifier : VoiceComponent
{
	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float amplificationFactor;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x30")]
	private MicAmplifierFloat floatProcessor;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x38")]
	private MicAmplifierShort shortProcessor;

	[Token(Token = "0x1700004C")]
	public float AmplificationFactor
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x3C5D4A0", Offset = "0x3C5D4A0", VA = "0x3C5D4A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x3C5D4B0", Offset = "0x3C5D4B0", VA = "0x3C5D4B0")]
		set
		{
		}
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3C5D500", Offset = "0x3C5D500", VA = "0x3C5D500")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3C5D520", Offset = "0x3C5D520", VA = "0x3C5D520")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3C5D540", Offset = "0x3C5D540", VA = "0x3C5D540")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams p)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3C5D9E0", Offset = "0x3C5D9E0", VA = "0x3C5D9E0")]
	public MicAmplifier()
	{
	}
}
