// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.MicAmplifierShort
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/MicAmplifier/MicAmplifierShort.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200001D")]
public class MicAmplifierShort : IProcessor<short>, IDisposable
{
	[Token(Token = "0x1700004F")]
	public float AmplificationFactor
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x5606B0", Offset = "0x55ECB0", VA = "0x1805606B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool Disabled
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x1D89AE0", Offset = "0x1D880E0", VA = "0x181D89AE0")]
	public MicAmplifierShort(float amplificationFactor)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x1D89B10", Offset = "0x1D88110", VA = "0x181D89B10", Slot = "4")]
	public short[] Process(short[] buf)
	{
		return null;
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void Dispose()
	{
	}
}
