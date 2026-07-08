using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000022")]
public class ErrorInfo
{
	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Info;

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3BD52B0", Offset = "0x3BD52B0", VA = "0x3BD52B0")]
	public ErrorInfo(EventData eventData)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3BD5F80", Offset = "0x3BD5F80", VA = "0x3BD5F80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
