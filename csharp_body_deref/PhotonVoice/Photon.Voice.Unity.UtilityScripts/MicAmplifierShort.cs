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
		[Address(RVA = "0x3C5DB00", Offset = "0x3C5DB00", VA = "0x3C5DB00")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x3C5DB10", Offset = "0x3C5DB10", VA = "0x3C5DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool Disabled
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x3C5DB20", Offset = "0x3C5DB20", VA = "0x3C5DB20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x3C5DB30", Offset = "0x3C5DB30", VA = "0x3C5DB30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x3C5D9B0", Offset = "0x3C5D9B0", VA = "0x3C5D9B0")]
	public MicAmplifierShort(float amplificationFactor)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x3C5DB40", Offset = "0x3C5DB40", VA = "0x3C5DB40", Slot = "4")]
	public short[] Process(short[] buf)
	{
		return null;
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x3C5DBB0", Offset = "0x3C5DBB0", VA = "0x3C5DBB0", Slot = "5")]
	public void Dispose()
	{
	}
}
