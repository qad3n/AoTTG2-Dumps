// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.MicAmplifier
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/MicAmplifier/MicAmplifier.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200001B")]
[RequireComponent(typeof(Recorder))]
public class MicAmplifier : VoiceComponent
{
	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float amplificationFactor;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x30")]
	private MicAmplifierFloat floatProcessor;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x38")]
	private MicAmplifierShort shortProcessor;

	[Token(Token = "0x1700004C")]
	public float AmplificationFactor
	{
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x5739520", Offset = "0x5738520", VA = "0x5739520")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x5739530", Offset = "0x5738530", VA = "0x5739530")]
		set
		{
		}
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x5739580", Offset = "0x5738580", VA = "0x5739580")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x57395A0", Offset = "0x57385A0", VA = "0x57395A0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x57395C0", Offset = "0x57385C0", VA = "0x57395C0")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams p)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x5739A80", Offset = "0x5738A80", VA = "0x5739A80")]
	public MicAmplifier()
	{
	}
}
