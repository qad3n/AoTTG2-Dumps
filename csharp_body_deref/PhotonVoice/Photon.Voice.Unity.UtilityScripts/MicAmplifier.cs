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
		[Address(RVA = "0x3F4FA50", Offset = "0x3F4FA50", VA = "0x3F4FA50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x3F4FA60", Offset = "0x3F4FA60", VA = "0x3F4FA60")]
		set
		{
		}
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3F4FAB0", Offset = "0x3F4FAB0", VA = "0x3F4FAB0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3F4FAD0", Offset = "0x3F4FAD0", VA = "0x3F4FAD0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3F4FAF0", Offset = "0x3F4FAF0", VA = "0x3F4FAF0")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams p)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3F4FF90", Offset = "0x3F4FF90", VA = "0x3F4FF90")]
	public MicAmplifier()
	{
	}
}
