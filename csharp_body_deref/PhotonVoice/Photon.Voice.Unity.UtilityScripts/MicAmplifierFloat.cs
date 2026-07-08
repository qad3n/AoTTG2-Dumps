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
		[Address(RVA = "0x3C5DA50", Offset = "0x3C5DA50", VA = "0x3C5DA50")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x3C5DA60", Offset = "0x3C5DA60", VA = "0x3C5DA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public bool Disabled
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x3C5DA70", Offset = "0x3C5DA70", VA = "0x3C5DA70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x3C5DA80", Offset = "0x3C5DA80", VA = "0x3C5DA80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3C5D980", Offset = "0x3C5D980", VA = "0x3C5D980")]
	public MicAmplifierFloat(float amplificationFactor)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3C5DA90", Offset = "0x3C5DA90", VA = "0x3C5DA90", Slot = "4")]
	public float[] Process(float[] buf)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3C5DAF0", Offset = "0x3C5DAF0", VA = "0x3C5DAF0", Slot = "5")]
	public void Dispose()
	{
	}
}
