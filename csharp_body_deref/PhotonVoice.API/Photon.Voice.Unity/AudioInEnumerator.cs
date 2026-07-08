using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A6")]
public class AudioInEnumerator : DeviceEnumeratorBase
{
	[Token(Token = "0x170000F8")]
	public override string Error
	{
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x3C42C30", Offset = "0x3C42C30", VA = "0x3C42C30", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x3C429F0", Offset = "0x3C429F0", VA = "0x3C429F0")]
	public AudioInEnumerator(ILogger logger)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x3C42A20", Offset = "0x3C42A20", VA = "0x3C42A20", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x3C42C40", Offset = "0x3C42C40", VA = "0x3C42C40", Slot = "15")]
	public override void Dispose()
	{
	}
}
