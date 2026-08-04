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

[Token(Token = "0x200001E")]
public class MicAmplifierFloat : IProcessor<float>, IDisposable
{
	[Token(Token = "0x1700004D")]
	public float AmplificationFactor
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x3F50000", Offset = "0x3F50000", VA = "0x3F50000")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x3F50010", Offset = "0x3F50010", VA = "0x3F50010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public bool Disabled
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x3F50020", Offset = "0x3F50020", VA = "0x3F50020")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x3F50030", Offset = "0x3F50030", VA = "0x3F50030")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3F4FF30", Offset = "0x3F4FF30", VA = "0x3F4FF30")]
	public MicAmplifierFloat(float amplificationFactor)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3F50040", Offset = "0x3F50040", VA = "0x3F50040", Slot = "4")]
	public float[] Process(float[] buf)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3F500A0", Offset = "0x3F500A0", VA = "0x3F500A0", Slot = "5")]
	public void Dispose()
	{
	}
}
