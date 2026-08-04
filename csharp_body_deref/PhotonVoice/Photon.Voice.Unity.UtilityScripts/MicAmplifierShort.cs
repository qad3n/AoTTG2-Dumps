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

[Token(Token = "0x200001F")]
public class MicAmplifierShort : IProcessor<short>, IDisposable
{
	[Token(Token = "0x1700004F")]
	public float AmplificationFactor
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x3F500B0", Offset = "0x3F500B0", VA = "0x3F500B0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x3F500C0", Offset = "0x3F500C0", VA = "0x3F500C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool Disabled
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x3F500D0", Offset = "0x3F500D0", VA = "0x3F500D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x3F500E0", Offset = "0x3F500E0", VA = "0x3F500E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x3F4FF60", Offset = "0x3F4FF60", VA = "0x3F4FF60")]
	public MicAmplifierShort(float amplificationFactor)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x3F500F0", Offset = "0x3F500F0", VA = "0x3F500F0", Slot = "4")]
	public short[] Process(short[] buf)
	{
		return null;
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x3F50160", Offset = "0x3F50160", VA = "0x3F50160", Slot = "5")]
	public void Dispose()
	{
	}
}
