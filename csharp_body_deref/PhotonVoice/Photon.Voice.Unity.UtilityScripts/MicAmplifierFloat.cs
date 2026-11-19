// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/MicAmplifier/MicAmplifierFloat.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200001C")]
public class MicAmplifierFloat : IProcessor<float>, IDisposable
{
	[Token(Token = "0x1700004D")]
	public float AmplificationFactor
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x5739AF0", Offset = "0x5738AF0", VA = "0x5739AF0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x5739B00", Offset = "0x5738B00", VA = "0x5739B00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public bool Disabled
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x5739B10", Offset = "0x5738B10", VA = "0x5739B10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x5739B20", Offset = "0x5738B20", VA = "0x5739B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x5739A20", Offset = "0x5738A20", VA = "0x5739A20")]
	public MicAmplifierFloat(float amplificationFactor)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x5739B30", Offset = "0x5738B30", VA = "0x5739B30", Slot = "4")]
	public float[] Process(float[] buf)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x5739C60", Offset = "0x5738C60", VA = "0x5739C60", Slot = "5")]
	public void Dispose()
	{
	}
}
